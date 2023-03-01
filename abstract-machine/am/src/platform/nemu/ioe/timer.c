#include <am.h>
#include <nemu.h>
#include <sys/time.h>
#include <time.h>
#include <stdio.h>
static uint64_t boot_time = 0;

#define TIME_BASE RTC_ADDR
/*
在这里整理一下设备抽象的理解
//nemu通过各种库来模拟设备   
//am为程序提供访问设备的接口，
比如程序掉了read time 那么nemu执行到这个函数的时候
发现的是访问一个设备的地址那么通过mmio 去访问设备，即nemu上模拟的设备。
例如访问一个串口 程序使用Putch  
putch -> outb //访问串口地址 给nemu-> serial_io_handler-> serial_putc -> putc 
其实最后还是putc 即nemu模拟的串口
而程序通过io_read来访问 抽象寄存器，即调用回调函数，即这里的__am_timer_uptime
nemu那边就是通过C的库函数把时间 什么的放在对应的base处，这边访问对应的地址，
*/
static uint64_t read_time() {
  uint32_t lo = *(volatile uint32_t *)(TIME_BASE + 0);
  uint32_t hi = *(volatile uint32_t *)(TIME_BASE + 4);
  uint64_t time = ((uint64_t)hi << 32) | lo;
  //这里的time会影响跑分的数据，d当就返回time时，进行real time test可以1s打印一个
  //但是跑分数据不对
  /*
  if (time%1000000==0)           
  {
    printf("s:%d\n",time/1000000);
  }
  */
  
  return time;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  if (boot_time == 0) boot_time = read_time();
  uptime->us = read_time() - boot_time;
}

void __am_timer_init() {
  
  boot_time = read_time();
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
