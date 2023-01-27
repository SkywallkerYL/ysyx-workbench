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
      case 16:
        ev.event = EVENT_IRQ_TIMER; break;
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
  //调用yield时，其跳转到mepc指令，即在cte_init内设置的asm_trap函数的pc
  //然后看trap.S。内  在t2内部存了mepc的数值后，再加4,再将其赋给mepc,让其跳出ecall指令
  //然后mret指令返回+4之后的mepc，以跳出ecall
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
