#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11: 
        ev.event = EVENT_YIELD;
        //printf();
        //printf("mepc \t %x \n",c->mepc);
        //printf("mcause \t %x \n",c->mcause);
        //printf("mtvec \t %08lx \n",c->mtvec);
        //printf("mstatus \t %x \n",c->mstatus);
        break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
    //printf("%s\n",);
  }

  return c;
}

extern void __am_asm_trap(void);//trap.S
//In /home/yangli/ysyx-workbench/abstract-machine/am/src/riscv/nemu/trap.S
// add an inst addi t2,t2,4 before csrw mepc, t2
// it means that pc+4 to get out of the trap pc
//

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
