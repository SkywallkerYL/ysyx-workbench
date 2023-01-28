#ifndef __SYSCALL_H__
#define __SYSCALL_H__

enum {
  SYS_exit,
  SYS_yield,
  SYS_open,
  SYS_read,
  SYS_write,
  SYS_kill,
  SYS_getpid,
  SYS_close,
  SYS_lseek,
  SYS_brk,
  SYS_fstat,
  SYS_time,
  SYS_signal,
  SYS_execve,
  SYS_fork,
  SYS_link,
  SYS_unlink,
  SYS_wait,
  SYS_times,
  SYS_gettimeofday
};

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
#endif
