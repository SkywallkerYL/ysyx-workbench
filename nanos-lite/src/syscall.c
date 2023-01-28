#include <common.h>
#include "syscall.h"
//sys相关函数在这里实现，syscall.h是从navyapps链接来的，因此不要修改
//不然会触发一些难以理解的行为 
int sys_yield() {
    yield();
    return 0;
}

void sys_exit(int status) {
    halt(status);
}
//参考/home/yangli/ysyx-workbench/nemu/tools/spike-diff/repo/fesvr/syscall.cc
//sys_write(reg_t fd, reg_t pbuf, reg_t len, reg_t a3, reg_t a4, reg_t a5, reg_t a6)
//fd->a0  pbuf->a1 len->a2
//根据navyapp的sys_call也可一看出来
int sys_write(int fd, void *buf, size_t count) {
  if (fd == 1 || fd == 2) {
    for (size_t i = 0; i < count; ++i) {
        putch(*((char *)buf + i));
    }
    return count;
  }
  return -1;
}
int sys_sbrk(void *addr){
  return 0;//目前总是成功， 返回0
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
    case SYS_write :
      ret = sys_write(c->GPR2, (void *)c->GPR3, (size_t)c->GPR4);
#ifdef STRACE
      //Log("SYSTEM_CALL_WRITE RETURNVALUE %d",ret);
      Log("sys_write(%x,%p,%d) return %d",c->GPR2,(void *)c->GPR3,(size_t)c->GPR4,ret);
#endif
      break;
    case SYS_brk :
      ret = sys_sbrk((void *)c->GPR2);
#ifdef STRACE
      Log("SYSTEM_CALL_SBRK RETURNVALUE %d %x",ret,c->mstatus);
#endif
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  c->GPRx = ret;
}
