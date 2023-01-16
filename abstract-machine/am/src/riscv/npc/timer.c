#include <am.h>
#include <sys/time.h>
#include <time.h>
#include "npc.h"
#include <stdio.h>
static uint64_t boot_time = 0;

#define TIME_BASE RTC_ADDR

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
