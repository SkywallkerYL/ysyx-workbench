#include <common.h>
#include "syscall.h"


int sys_yield() {
    yield();
    return 0;
}

void sys_exit(int status) {
    halt(status);
}
//看/home/yangli/ysyx-workbench/nemu/tools/spike-diff/repo/fesvr/syscall.cc
//sys_write(reg_t fd, reg_t pbuf, reg_t len, reg_t a3, reg_t a4, reg_t a5, reg_t a6)
//推测fd pbuf len 依次是a0 a1 a2,即GPR2,GPR3,GPR4
int sys_write(int fd, void *buf, size_t count){
  if(fd == 1 || fd ==2){
    for (size_t i = 0; i < count; i++)
    {
      putch(*((char*)buf+i));
    }
    return count;
  }
  return -1;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;//a7 存mcause
  uint64_t ret ;
  //GPR2 是a0  存的是程序退出时的状态
  switch (a[0]) {
    case SYS_exit  :
      sys_exit(c->GPR2);
#ifdef STRACE
      Log("SYSTEM_CALL_EXIT VALUE%d",c->GPR2);
#endif
      Log("SYSTEM_CALL_EXIT VALUE%d",c->GPR2);
      break;
    case SYS_yield :
#ifdef STRACE
      Log("SYSTEM_CALL_YIELD");
#endif
      ret = sys_yield();break;
    case SYS_write :
      ret = sys_write(c->GPR2,(void *)c->GPR3,(size_t)c->GPR4);
#ifdef STRACE
      //ret = sys_write(c->GPR2,(void *)c->GPR3,(size_t)c->GPR4);
      Log("SYSTEM_CALL_WRITE RETURN %d",ret);
#endif
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  c->GPRx = ret;
}
