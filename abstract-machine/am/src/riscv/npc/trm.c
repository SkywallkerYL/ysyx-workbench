#include <am.h>
#include <klib-macros.h>
#include "npc.h"
# define nemu_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

//就相当于npc的接口
void putch(char ch) {
  *(volatile uint8_t *) SERIAL_PORT = ch;
}

void halt(int code) {
  //nemu_trap(0b00000000000100000000000001110011);
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
