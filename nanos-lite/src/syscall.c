#include <common.h>
#include "syscall.h"
#include "proc.h"
void naive_uload(PCB *pcb, const char *filename);
//sys相关函数在这里实现，syscall.h是从navyapps链接来的，因此不要修改

//不然会触发一些难以理解的行为 
int sys_yield() {
    yield();
    return 0;
}

void sys_exit(int status) {
    //halt(status);
    const char filename[] = "/bin/menu";
    naive_uload(NULL,filename);
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
/*
时钟不看成文件，
用户程序要时钟的时候 
触发一次系统调用，在这里io_read
nano-slite也是一个运行在am之上的程序，调用am的接口
调那边的am_upertime函数 
在nemu来说，就是访问时钟的地址
*/
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

int sys_execve(const char *filename,char * const argv[], char *const envp[]){
      naive_uload(NULL,filename);
      return -1;
}

/*
记录一下自己的理解
程序触发一次系统调用 即由navyapps提供的库来支撑在 syscall里面
通过ecall 让nanoslite跳转到handle 然后发现是系统调用
进入do_syscall


以一个字符输出为例子来看
用户程序需要输出时 最后会调用到write

然后向nano slite触发syscall，调用 sys_write

而对于nemu来说，跟am类似，受到了putch之后，就outb 
serial handl-> serial_putc -> putc

有了简易文件系统之后，就把这些都看成文件了，输入输出也勘测文件
通过fs_write来   如果是输出，fs_write再跳到串口的write 上，即serial_write
里面就是Putch

如果用户程序打开文件 fopen   最后调用到_open，向操作系统触发syscall再在这边
*/

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
      //Log("SYS_EXIT VALUE:%d",c->GPR2);
      sys_exit(c->GPR2);ret = 0;break;
      //ret = sys_execve("/bin/menu",(char * const *)c->GPR3,(char * const *)c->GPR4);

    case SYS_yield :
#ifdef STRACE
      Log("SYS_YIELD");
#endif
      ret = sys_yield();break;
    case SYS_write :
      ret = fs_write((int)c->GPR2, (void *)c->GPR3, (size_t)c->GPR4);
#ifdef STRACE
      Log("SYS_write(%s,%p,%d) return %d",get_file_name(c->GPR2),(void *)c->GPR3,(size_t)c->GPR4,ret);
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
      Log("SYS_open(%s,%d,%d) return %d",(const char *)c->GPR2,(int)c->GPR3,(int)c->GPR4,ret);
#endif
      break;
      case SYS_read :
      ret = fs_read((int)c->GPR2, (void *)c->GPR3, (size_t)c->GPR4);
#ifdef STRACE
      Log("SYS_read(%s,%p,%d) return %d",get_file_name((int)c->GPR2),(void *)c->GPR3,(size_t)c->GPR4,ret);
#endif
      break;
      case SYS_lseek :
      ret = fs_lseek((int)c->GPR2, (size_t)c->GPR3, (int)c->GPR4);
#ifdef STRACE
      Log("SYS_lseek(%s,%x,%d) return %d",get_file_name((int)c->GPR2),(size_t)c->GPR3,(int)c->GPR4,ret);
#endif
      break;
      case SYS_close :
      ret = fs_close((int)c->GPR2);
#ifdef STRACE
      Log("SYS_close(%s) return %d",get_file_name((int)c->GPR2),ret);
#endif
      break;
      case SYS_gettimeofday:
      ret = sys_gettimeofday((struct timeval *)c->GPR2,(struct timezone *)c->GPR3);
#ifdef STRACE
      Log("SYS_gettimeofday(%p, %p, %d) = %d", c->GPR2, c->GPR3, c->GPR4, ret);
#endif
      break;
      case SYS_execve:
#ifdef STRACE
      Log("SYS_execve(%s, %d, %d) ", c->GPR2, 0, 0);
#endif
      //Log("SYS_execve(%s, %d, %d) ", c->GPR2, 0, 0);
      ret = sys_execve((const char *)c->GPR2,(char * const *)c->GPR3,(char * const *)c->GPR4);
      
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  c->GPRx = ret;
}
