#include <amtest.h>
#define CLINT_BASE    0x02000000
#define CLINTEND      0x0200BFFF
#define MTIMECMPADDR  0x02004000
#define MTIMEADDR     0x0200BFF8
#define MSIPADDR      0x02000000
//nemu 没有实现CLINT 因此会出错
void mtimecmpadd(){
  uint64_t old  =  * (volatile uint64_t *)MTIMECMPADDR;
  *(volatile uint64_t *) MTIMECMPADDR =  (uint64_t) (old+10000);
}
#define NATIVE
#ifndef NATIVE
void MTIP_reset(){
  uintptr_t mstatus,mie;
  asm volatile("csrr %0,mstatus" : "=r"(mstatus));
  asm volatile("csrr %0,mie" : "=r"(mie));
  //printf("mie:%x, mstatus:%x\n",mie,mstatus);
  asm volatile("csrw mstatus, %0" : : "r"(mstatus|(1<<3)));
  asm volatile("csrw mie, %0" : : "r"(mie|(1<<7)));
}
#endif
Context *simple_trap(Event ev, Context *ctx) {
  //printf("event:%d\n",ev.event);
  switch(ev.event) {
    case EVENT_IRQ_TIMER:
      mtimecmpadd();putch('t');putch('\n'); break;
    case EVENT_IRQ_IODEV:
      putch('d'); putch('\n');break;
    case EVENT_YIELD:
      putch('y'); putch('\n');break;
    default:
      break;
  }
  return ctx;
}

void hello_intr() {
  printf("Hello, AM World @ " __ISA__ "\n");
  printf("  t = timer, d = device, y = yield\n");
  io_read(AM_INPUT_CONFIG);
  iset(1);
#ifndef NATIVE 
  MTIP_reset();
  mtimecmpadd();
#endif 
  int n = 100;
  //i最大迭代比较小的时候会出问题
  //具体是对于通用寄存器的恢复的会出问题
  //导致对于n的记录会出问题，不会完全触发每次yield
  //目前还不知道是哪里除了问题
  //但是最大迭代改大之后，可以正常触发时钟中断。
  while (n--) {
    for (volatile int i = 0; i < 1000; i++) ;
    yield();
    //n++;
    //break;
  }
}
