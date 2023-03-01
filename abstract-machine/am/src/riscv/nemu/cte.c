#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11: 
        switch (c->gpr[17])//a7
        {
          case -1:
            ev.event = EVENT_YIELD;
            break;
          default:
            ev.event = EVENT_SYSCALL;
            break;
        }
        //ev.event = EVENT_YIELD;
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
    //跳转到user_handler 交给软件来处理
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
/*
在这里记录一下对一场处理的理解
nanoslite那边  调用了cte init 
将异常入口社会设置为 mtvec
触发一次异常  ecall指令跳转到 asm_trap
其首先会保存上下文，即让栈置镇减去contextsize，依次存放上下文
然后进入事件分发函数irq_handle  在里面决定event 
然后交给操作系统的handle来处理处理完后
返回到trap.S恢复上下文
注意一下mepc的加
恢复完后，mret

*/
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
