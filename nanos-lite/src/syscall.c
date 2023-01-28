#include <common.h>
#include "syscall.h"

int sys_yield() {
    yield();
    return 0;
}

void sys_exit(int status) {
    halt(status);
}

int sys_write(int fd, void *buf, size_t count) {
  if (fd == 1 || fd == 2) {
    for (size_t i = 0; i < count; ++i) {
        putch(*((char *)buf + i));
    }
    return count;
  }
  return -1;
}


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;//a7 //存触发的类型
  uint64_t ret ;
  //Log("mcause:%d",c->mcause);
  //GPR2 是a0,不是这里的a[0]  存的是程序退出时的状态
  switch (a[0]) {
    case SYS_exit  :
#ifdef STRACE
      Log("SYSTEM_CALL_EXIT VALUE:%d",c->GPR2);
#endif
      sys_exit(c->GPR2);break;
    case SYS_yield :
#ifdef STRACE
      Log("SYSTEM_CALL_YIELD");
#endif
      ret = sys_yield();break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  c->GPRx = ret;
}
