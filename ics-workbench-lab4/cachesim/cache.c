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

static uint32_t cache_group;
static uintptr_t tag_mask,group_mask,block_mask;

//从cache中读出 addr地址处的4字节数据
//若确实，先从内存中读
uint32_t cache_read(uintptr_t addr) {
  return 0;
}
// 往 cache 中 addr 地址所属的块写入数据 data，写掩码为 wmask
// 例如当 wmask 为 0xff 时，只写入低8比特
// 若缺失，需要从先内存中读入数据
void cache_write(uintptr_t addr, uint32_t data, uint32_t wmask) {
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
  cache_group = total_size_width - BLOCK_WIDTH - associativity_width;
  block_mask = mask_with_len(BLOCK_WIDTH);
  group_mask = mask_with_len(cache_group) << BLOCK_WIDTH;
  tag_mask   = ~mask_with_len(cache_group+BLOCK_WIDTH);
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
