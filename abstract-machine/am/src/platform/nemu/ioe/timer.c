#include <am.h>
#include <nemu.h>
#include <sys/time.h>
#include <time.h>
#include <stdio.h>
static uint64_t boot_time = 0;

#define TIME_BASE RTC_ADDR


void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = io_read(AM_TIMER_UPTIME).us;
}

void __am_timer_init() {
  boot_time = 0;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
