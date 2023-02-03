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
//man 2 gettimeofday
#define time_t  uint64_t
#define suseconds_t uint64_t

struct timeval {
    time_t      tv_sec;     /* seconds */
    suseconds_t tv_usec;    /* microseconds */
};

struct timezone {
    int tz_minuteswest;     /* minutes west of Greenwich */
    int tz_dsttime;         /* type of DST correction */
};

int sys_gettimeofday(struct timeval *tv, struct timezone *tz){
   uint64_t us = io_read(AM_TIMER_UPTIME).us; // 
   tv->tv_sec = us/1000000;//io_read(AM_TIMER_UPTIME).us;
   tv->tv_usec = us - (us/1000000)*1000000;
   return 0;
}


int fs_open(const char *pathname, int flags, int mode);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);
char* get_file_name(int fd);
//man 2 execve
#include "proc.h"
void naive_uload(PCB *pcb, const char *filename);
int sys_execve(const char *filename,char * const argv[], char *const envp[]){
      naive_uload(NULL,filename);
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
      Log("SYS_EXIT VALUE:%d",c->GPR2);
#endif
      sys_exit(c->GPR2);break;
    case SYS_yield :
#ifdef STRACE
      Log("SYS_YIELD");
#endif
      ret = sys_yield();break;
    case SYS_write :
      ret = fs_write((int)c->GPR2, (void *)c->GPR3, (size_t)c->GPR4);
#ifdef STRACE
      Log("fs_write(%s,%p,%d) return %d",get_file_name(c->GPR2),(void *)c->GPR3,(size_t)c->GPR4,ret);
#endif
      break;
    case SYS_brk :
      ret = sys_sbrk((void *)c->GPR2);
#ifdef STRACE
      Log("SYS_BRK RETURNVALUE %d",ret);
#endif
      break;
      case SYS_open :
      ret = fs_open((const char *)c->GPR2, (int)c->GPR3, (int)c->GPR4);
#ifdef STRACE
      Log("fs_open(%s,%d,%d) return %d",(const char *)c->GPR2,(int)c->GPR3,(int)c->GPR4,ret);
#endif
      break;
      case SYS_read :
      ret = fs_read((int)c->GPR2, (void *)c->GPR3, (size_t)c->GPR4);
#ifdef STRACE
      Log("fs_read(%s,%p,%d) return %d",get_file_name((int)c->GPR2),(void *)c->GPR3,(size_t)c->GPR4,ret);
#endif
      break;
      case SYS_lseek :
      ret = fs_lseek((int)c->GPR2, (size_t)c->GPR3, (int)c->GPR4);
#ifdef STRACE
      Log("fs_lseek(%s,%x,%d) return %d",get_file_name((int)c->GPR2),(size_t)c->GPR3,(int)c->GPR4,ret);
#endif
      break;
      case SYS_close :
      ret = fs_close((int)c->GPR2);
#ifdef STRACE
      Log("fs_close(%s) return %d",get_file_name((int)c->GPR2),ret);
#endif
      break;
      case SYS_gettimeofday:
      ret = sys_gettimeofday((struct timeval *)c->GPR2,(struct timezone *)c->GPR3);
#ifdef STRACE
      Log("sys_gettimeofday(%p, %p, %d) = %d", c->GPR2, c->GPR3, c->GPR4, ret);
#endif
      break;
      case SYS_execve:
      ret = sys_execve((const char *)c->GPR2,(char * const *)c->GPR3,(char * const *)c->GPR4);
      
#ifdef STRACE
      Log("sys_execve(%s, %s, %s) = %d", c->GPR2, c->GPR3, c->GPR4,ret);
#endif
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  c->GPRx = ret;
}
