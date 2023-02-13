#ifdef CONFIG_CACHE
#include <inttypes.h>
#include <malloc.h>

#define exp2(x) (1 << (x))
#define mask_with_len(x) (exp2(x) - 1)

#define BLOCK_WIDTH  6  // 64B  (Bytes)
#define BLOCK_SIZE exp2(BLOCK_WIDTH)
typedef uint8_t bool;
#define true 1
#define false 0
extern uint8_t cache_pmem;
void mem_read(uintptr_t block_num, uint8_t *buf){
  memcpy(buf, cache_pmem + (block_num << BLOCK_WIDTH), BLOCK_SIZE);
}
void mem_write(uintptr_t block_num, const uint8_t *buf){
  memcpy(cache_pmem + (block_num << BLOCK_WIDTH), buf, BLOCK_SIZE);
}

static uint64_t cycle_cnt = 0;

void cycle_increase(int n) { cycle_cnt += n; }

// TODO: implement the following functions
// physical_addr
//     tag      |  line_index(ceil_Log2(line_width))  or group | offset in block(block_width)
// a cache line 
// valid | dirty | tag                                            | data area
//   1   |  0    | addr>>(line_width(group_width)+block_width)    | data at addr(block_width-1：0)
//uint64_t  read_hit,read_count = 0;
//uint64_t  write_hit, write_count = 0;
struct CACHE
{
  bool valid ;
  bool dirty ;
  uintptr_t tag;
  uint8_t data[BLOCK_SIZE];
};
static struct CACHE *cache;

static uint32_t group_width,size_width,assoc_width,line_width;
static uintptr_t tag_mask,group_mask,block_mask;
static uintptr_t get_tag(uintptr_t addr){
  return (addr&tag_mask) >> (group_width+BLOCK_WIDTH);
}
static uintptr_t get_group(uintptr_t addr){
  return (addr&group_mask) >> (BLOCK_WIDTH);
}
static uintptr_t get_block(uintptr_t addr){
  return (addr&block_mask);
}
static uintptr_t get_blocknum(uintptr_t addr){
  return (addr&(~(block_mask)))>>BLOCK_WIDTH;
}
/**/
static uintptr_t get_blocknum_cache(uintptr_t tag,uint32_t group){
  return (tag<<group_width)| group;
}

//get the line in group for cache for an addr
//change it to the i th cache
// i = group*associati+line 
static int cache_line_addr(uintptr_t addr,int line){
  return (get_group(addr)<<assoc_width)+line;
}
//读写的对地址操作的最小单位是4Bytes 要把最低两位给除掉
//这里是和cpu统一
static word_t getlenBytes(uintptr_t addr,int index,int len){
  uintptr_t block_addr = get_block(addr);
  switch (len)
  {
  case 1: return *(uint8_t *)&(cache[index].data[block_addr&~0x3]);
    break;
  case 2: return *(uint16_t *)&(cache[index].data[block_addr&~0x3]);
    break; 
  case 4: return *(uint32_t *)&(cache[index].data[block_addr&~0x3]);
    break;
  case 8: return *(uint64_t *)&(cache[index].data[block_addr&~0x3]);
    break;
  default: return 0;
    break;
  }
  //return *(uint32_t *)&(cache[index].data[block_addr&~0x3]);
}
static void writelenBytes(struct CACHE* temp,intptr_t addr,word_t data,int len){
  uintptr_t block_addr = get_block(addr);
  void *cache_data = (void *)&(temp->data[block_addr&~0x3]);
  switch (len)
  {
  case 1 : *(uint8_t *) cache_data = data;return ;
    break;
  case 2 : *(uint16_t *) cache_data = data;return ;
    break;
  case 4 : *(uint32_t *) cache_data = data;return ;
    break;
  case 8 : *(uint64_t *) cache_data = data;return ;
    break;
  default: assert(0);
    break;
  }
  //printf("Waddr:%lx write:%x\n",addr,*(cache_data) );
  return ;
}
static int ramdchoose(int size){
  return rand()%size;
}
//cache write back
static void wirte_cache(struct CACHE* temp,intptr_t addr){
  //mem_write(get_blocknum(addr),(temp->data));
  //这里是没有命中的写回，所以是把cache内的内容写回
  //根据tag 以及组号复原出块号
  //组号cache没有记录，通过addr得到
  mem_write(get_blocknum_cache(temp->tag,get_group(addr)),(temp->data));
  temp->dirty = 0;
  temp->valid = 1;
}
//cache read from Mem
static void read_cache(struct CACHE* temp,intptr_t addr){
  //没有命中的情况下，将内存中的值读到cache中
  mem_read(get_blocknum(addr),(temp->data));
  temp->valid = 1;
  temp->dirty = 0;
  temp->tag = get_tag(addr);
}
//从cache中读出 addr地址处的len字节数据
//若确实，先从内存中读
word_t cache_read(uintptr_t addr,int len) {
  //read_count++;
  int group_base = cache_line_addr(addr,0);
  for (int i = group_base; i < group_base+exp2(assoc_width); i++)
  {
    if (cache[i].tag == get_tag(addr))
    {
      if (cache[i].valid)
      {
        //hit
        //read_hit++;
        //printf("hit\n");
        return getlenBytes(addr,i,len);
      }
    }
  }
  //Not hit find it in Mem
  //ramdon replace
  int line = ramdchoose(exp2(assoc_width));
  struct CACHE *cache_p = &cache[group_base+line];
  //dirty 写回
  if(cache_p->dirty&&cache_p->valid) {
    //printf("dirty cacheline:%d\n",group_base+line);
    wirte_cache(cache_p,addr);
  }
  //
  //printf("no hit cacheline:%d\n",group_base+line);
  read_cache(cache_p,addr);
  /*
  for (size_t i = 0; i < BLOCK_SIZE; i++)
  {
    assert(cache_p->data[i] == cache[group_base+line].data[i]);
  }
  */
  //assert(cache_p->data[0] == cache[group_base+line].data[0]);
  return getlenBytes(addr,cache_line_addr(addr,line),len);
  //return 0;
}
// 往 cache 中 addr 地址所属的块写入数据 data，写掩码为 wmask
// 例如当 wmask 为 0xff 时，只写入低8比特
// 若缺失，需要从先内存中读入数据
void cache_write(uintptr_t addr, word_t data, int len) {
  //write_count++;
  int group_base = cache_line_addr(addr,0);
  
  for (int i = group_base; i < group_base+exp2(assoc_width); i++)
  {
    if (cache[i].tag == get_tag(addr))
    {
      if (cache[i].valid)
      {
        //hit
        //write_hit++;
        //printf("hit dirty cacheline:%d\n",i);
        writelenBytes(&cache[i],addr,data,len);
        cache[i].dirty = true;
        return;
      }
    }
  }
  //No hit 
  int line = ramdchoose(exp2(assoc_width));
  struct CACHE *cache_p = &cache[group_base+line];
  //如果是藏的，先写回内存
  if(cache_p->dirty && cache_p->valid) {
    wirte_cache(cache_p,addr);
    //printf("No hit write\n");
  }
  read_cache(cache_p,addr);
  writelenBytes(cache_p,addr,data,len);
  cache_p->dirty = true;
  //printf("No hit dirty cacheline:%d\n",group_base+line);
  return;
}
// 初始化一个数据大小为 2^total_size_width B，关联度为 2^associativity_width 的 cache
// 例如 init_cache(14, 2) 将初始化一个 16KB，4 路组相联的cache
// cache 数据区·提供2^c 行   划分成2^q组  q<c   一个组里有2^s = 2^(c-q)行  即2^s路组相连
// [m-q  | q   |    低b位 ]
// [tag  |组号  |  块内地址 ] // 组号可以缺省
// B = q+s+b  // 组数+路数+块大小 = 总大小
// 一行cache的位数 m-q+b  
// q = c - s    c = B-b
/*
  //行 
  valid  |  dirty  |  M>>(g+b) | data(block_size)
*/
//其实说的cache的大小 没有包括 valid 和dirty 和tag位占的，只有data*q*s
// 将所有 valid bit 置为无效即可
void init_cache(int total_size_width, int associativity_width) {
  //首先确定cache参数
  size_width = total_size_width;
  assoc_width = associativity_width;
  line_width = total_size_width - BLOCK_WIDTH;
  group_width = total_size_width - BLOCK_WIDTH - associativity_width;
  block_mask = mask_with_len(BLOCK_WIDTH);
  group_mask = mask_with_len(group_width) << BLOCK_WIDTH;
  tag_mask   = ~mask_with_len(group_width+BLOCK_WIDTH);
  //分配cache;
  cache = (struct CACHE *)malloc(sizeof(struct CACHE)*exp2(total_size_width - BLOCK_WIDTH));
  //printf("aaaaa\n");
  assert(cache);
  for (size_t i = 0; i < exp2(total_size_width - BLOCK_WIDTH); i++)
  {
    cache[i].valid = 0;
    cache[i].dirty = 0;
    for (size_t j = 0; j < BLOCK_SIZE; j++)
    {
      cache[i].data[j] = 0x00;
    }
  }
  //printf("aaaaa\n");
  return;
}

void display_statistic(void) {
}
#endif