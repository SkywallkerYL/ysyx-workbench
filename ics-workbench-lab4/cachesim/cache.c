#include "common.h"
#include <inttypes.h>

void mem_read(uintptr_t block_num, uint8_t *buf);
void mem_write(uintptr_t block_num, const uint8_t *buf);

static uint64_t cycle_cnt = 0;

void cycle_increase(int n) { cycle_cnt += n; }

// TODO: implement the following functions
// physical_addr
//     tag      |  line_index(ceil_Log2(line_width))  or group | offset in block(block_width)
// a cache line 
// valid | dirty | tag                                            | data area
//   1   |  0    | addr>>(line_width(group_width)+block_width)    | data at addr(block_width-1：0)
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
  return (addr&(~(block_mask)));
}
//get the line in group for cache for an addr
//change it to the i th cache
// i = group*associati+line 
static int cache_line_addr(uintptr_t addr,int line){
  return (get_group(addr)<<assoc_width)+line;
}
static uint32_t get4Bytes(uintptr_t addr,int index){
  uintptr_t block_addr = get_block(addr);
  return *(uint32_t *)&(cache[index].data[block_addr]);
}
static void write4Bytes(struct CACHE* temp,intptr_t addr,uint32_t data, uint32_t mask){
  uintptr_t block_addr = get_block(addr);
  uint32_t *cache_data = (uint32_t *)&(temp->data[block_addr]);
  *(cache_data) = (data&mask) | (*(cache_data)&(~mask));
  return ;
}
static int ramdchoose(int size){
  return rand()%size;
}
//cache write back
static void wirte_cache(struct CACHE* temp,intptr_t addr){
  mem_write(get_blocknum(addr),(temp->data));
  temp->dirty = false;
}
//cache read from Mem
static void read_cache(struct CACHE* temp,intptr_t addr){
  mem_read(get_blocknum(addr),(temp->data));
  temp->valid = 1;
  temp->dirty = 0;
  temp->tag = get_tag(addr);
}
//从cache中读出 addr地址处的4字节数据
//若确实，先从内存中读
uint32_t cache_read(uintptr_t addr) {
  int group_base = cache_line_addr(addr,0);
  for (int i = group_base; i < exp2(assoc_width); i++)
  {
    if (cache[i].tag == get_tag(addr))
    {
      if (cache[i].valid)
      {
        //hit
        //注意这里一次读4字节，却只检验了第一个字节的valid，只有在写的时候保证了
        return get4Bytes(addr,i);
      }
    }
  }
  //Not hit find it in Mem
  //ramdon replace
  int line = ramdchoose(exp2(assoc_width));
  struct CACHE *cache_p = &cache[group_base+line];
  //dirty 写回
  if(cache_p->dirty && cache_p->valid) {
    wirte_cache(cache_p,addr);
  }
  //
  read_cache(cache_p,addr);
  return get4Bytes(addr,group_base+line);
  //return 0;
}
// 往 cache 中 addr 地址所属的块写入数据 data，写掩码为 wmask
// 例如当 wmask 为 0xff 时，只写入低8比特
// 若缺失，需要从先内存中读入数据
void cache_write(uintptr_t addr, uint32_t data, uint32_t wmask) {
  int group_base = cache_line_addr(addr,0);
  
  for (int i = group_base; i < exp2(assoc_width); i++)
  {
    if (cache[i].tag == get_tag(addr))
    {
      if (cache[i].valid)
      {
        //hit
        write4Bytes(&cache[i],addr,data,wmask);
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
  }
  read_cache(cache_p,addr);
  write4Bytes(cache_p,addr,data,wmask);
  cache_p->dirty = true;
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
  cache = (struct CACHE *)malloc(exp2(total_size_width - BLOCK_WIDTH));
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
  return;
}

void display_statistic(void) {
}