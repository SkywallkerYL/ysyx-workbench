#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  uint64_t ret ;
  switch (a[0]) {
    case SYS_exit :sys_exit(c->GPR2);break;
    case SYS_yield :ret = sys_yield();break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  c->GPRx = ret;
}
