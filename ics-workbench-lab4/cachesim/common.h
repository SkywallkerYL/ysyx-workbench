#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
//替换算法采用随机方式
//写回，写分配
#define exp2(x) (1 << (x))
#define mask_with_len(x) (exp2(x) - 1)

#define M 25
#define MEM_SIZE (1 << M) // 1MB
#define BLOCK_WIDTH  6  // 64B  (Bytes)
#define b BLOCK_WIDTH
#define BLOCK_SIZE exp2(BLOCK_WIDTH)
#define m (M-b) // 主存划分成2^m个块  m + b 即物理地址
typedef uint8_t bool;
#define true 1
#define false 0

void cycle_increase(int n);

#endif
