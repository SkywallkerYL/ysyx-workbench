#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static struct timeval timer_count;
uint32_t NDL_GetTicks() {
  //return ms
  //struct timeval time;
  gettimeofday(&timer_count,NULL);
  uint32_t ms = timer_count.tv_sec*1000+timer_count.tv_usec/1000;
  return ms;
  //return 0;
}
//键盘抽象成文件
//用过open 来进行系统调用文件  即借用操作系统打开文件 返回相应的文件描述 fd
//而fs_open是操作系统访问文件，用户程序通过Open 或者fopen 
//open 是更低一级的 通过NDL库来使用，用户程序直接使用NDL库
//man 2 open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events",0,0);
//man 2 read
  int value = read(fd,buf,len);
  close(fd);
  return (value != 0);
  //return 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
