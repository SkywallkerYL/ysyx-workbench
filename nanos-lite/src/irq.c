#include <common.h>

//事件分发
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD : printf("Event Yeild\n");break;
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
