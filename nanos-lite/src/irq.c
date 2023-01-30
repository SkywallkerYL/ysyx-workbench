#include <common.h>

//事件分发
void do_syscall(Context *c);
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case  EVENT_YIELD: 
      Log("Event Yeild");
      //printf("Event Yeild\n");
      break;
    case  EVENT_SYSCALL :
      //Log("SYSCALL a7 %d",c->gpr[17]);
      do_syscall(c) ;
      break;
    case  EVENT_IRQ_TIMER :Log("Event IRQ TIMER\n");break;
    //here a break will build a mret inst
    // but I can't implement it accurately
    ////EVENT_YIELD
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
