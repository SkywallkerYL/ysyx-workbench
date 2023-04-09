#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include <sys/time.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int Canvas_w = 0, Canvas_h = 0;// 画布尺寸
static int Canvas_x, Canvas_y;//画布的x,y
static struct timeval timer_count;
/*
记录一下对这一部分的理解 
首先navyapps这个库就是为了支撑程序运行再nano-slite上
而nano-slite本身是一个运行在am之上的程序，不像pa2中程序直接运行在am之上

以一次时钟调用来讲
程序调用ndl_getticks
然后里面通过gettimeofday申请sys_gettimeofday
nano-slite在用am的接口调用时间upertime的函数

对于键盘来讲，也是类似
通过open访问dev/events这个文件，
read即调用events的read  
即操作系统申请读键盘，即类似am那边程序申请读键盘了。

对于VGA来讲，这里也是提供给程序一个接口 现存也抽象成文件FB
程序调用NDL_DrawRect  即访问fb这个文件向操作系统申请syscall
调用syswrite seek  向显存里写像素
nano-slite这边也类似am了，用am的接口向nemu模拟的设备里写
即nano-slite里面的fb_write  
通过io_read io_write向现存的抽象寄存器里写
最后调用到am那边的__am_gpu_fbdraw
然后nemu遇到这个地址就转发给模拟的VGA了

首先是navy作为基础设施，即让程序运行在navy + linux native操作系统上
对于navy 中的native来说 ISA = native 
链接的时让程序直接使用linux 的glibc
这样子就能单独测试NDL 和 minisdl了
即在对应游戏的目录下 make ISA=native run 就行
这样子进行游戏测试的时候就可以确定出问题在哪一个抽象层

1.linux native 看游戏本身
2.navy native 看navy库
3.nano-slite native (也是am的native) 看nanoslite
4.nemu  看是否在nemu上出问题

然后在nanoslite那边native的话，对于navy来说其实是am_native的，因为用的是am提供的运行时环境
但是对于am本身来说是native的 额虽然有点绕，但还是想明白了
*/
uint32_t NDL_GetTicks() {
  //return ms
  //struct timeval time;
  gettimeofday(&timer_count,NULL);
  uint32_t ms = timer_count.tv_sec*1000+timer_count.tv_usec/1000;
  //printf("sec:%ld  usec:%ld \n",timer_count.tv_sec,timer_count.tv_usec);
  //printf("ms:%ld\n",ms);
  return ms;
  //return 0;
} 
//键盘抽象成文件 events
//用过open 来进行系统调用文件  即借用操作系统打开文件 返回相应的文件描述 fd
//而fs_open是操作系统访问文件，用户程序通过Open 或者fopen 
//open 是更低一级的 通过NDL库来使用，用户程序直接使用NDL库
//man 2 open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int NDL_PollEvent(char *buf, int len) {
  memset(buf, 0, len);
  int fd = open("/dev/events",0,0);
//man 2 read
  //printf("in ndl\n");
  int value = read(fd,buf,len);
  //if(value!=0)printf("value%d len%d\n",value,len);
  //assert(value ==len || value==0 );
  close(fd);
  return (value != 0);
  //return 0;
}
// 打开一张(*w) X (*h)的画布
// 如果*w和*h均为0, 则将系统全屏幕作为画布, 并将*w和*h分别设为系统屏幕的大小
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
  else {
    if(*w == 0 && *h == 0){
      *w = screen_w;
      *h = screen_h;
    }
  }
  Canvas_w = *w;
  Canvas_h = *h;
  Canvas_x = (screen_w - Canvas_w)>>1;
  Canvas_y = (screen_h - Canvas_h)>>1;
  assert(Canvas_x >=0 && Canvas_y >= 0);
  printf("NDL_OpenCanvas :h:%d w:%d\n",Canvas_h,Canvas_w);
}
// 向画布`(x, y)`坐标处绘制`w*h`的矩形图像, 并将该绘制区域同步到屏幕上
// 图像像素按行优先方式存储在`pixels`中, 每个像素用32位整数以`00RRGGBB`的方式描述颜色
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  //int fd = open("/dev/fb",0,0);
  int fd = open("/dev/fb",0,0);
  //int len = w*h*4;
  //AM_GPU_CONFIG_T ev = io_read(AM_GPU_CONFIG);
  ///uint32_t height = ev.height;
  //uint32_t width = ev.width;
  int initoff = (y+Canvas_y)*screen_w+(x+Canvas_x);
  for (int i = 0; i < h &&(y+i) < Canvas_h; i++)
  {
    //int fd = open("/dev/fb",0,0);
    uint64_t offset = (y+Canvas_y+i)*screen_w+(x+Canvas_x);
    assert(offset>=initoff);
    //printf("offset %d screen_w %d\n",offset,screen_w);
    //printf("offset:%d x:%d y:%d\n",offset,offset%screen_w,offset/screen_w);
    //x+w不能超过画布
    int len = (w+x<Canvas_w)?w:Canvas_w-x;
    //fd = open("/dev/fb",0,0);
    //int ret = lseek(fd,offset*4,SEEK_SET);
    //if(ret==-1) 
    //{
      //perror(" lseek fail");
      //close(fd);
      //fd = open("/dev/fb",0,0);
      //assert(lseek(fd,offset*4,SEEK_SET)==offset*4);
      //assert(write(fd,pixels+(uint32_t)i*w,len*4)==len*4);
      //continue;
      
    //}
    //printf("oout\n");
    //close(fd);
    assert(lseek(fd,offset<<2,SEEK_SET)==offset<<2);
    //printf("fail line: i:%d\n",i);
    assert(write(fd,pixels+(uint32_t)i*w,len<<2)==len<<2);
    //close(fd);
  }
  
  //uint64_t offset = y*screen_w+x;
  //write((void *)pixels,offset,len);
  /*
    这里有一个问题 就是一个多线程的问题  可能是这个原因阿，因为把close注释了·就正常了
    那这里就不要关闭了。。。
    因为在nano-slite上运行不会出现这个现象
    在navy的native上就能正常运行了，当然，各个游戏读取键盘的平率好像不同，但是
    event-test是正常的
    man 2 close
      It is probably unwise to close file descriptors while they  may  be  in
       use by system calls in other threads in the same process.  Since a file
       descriptor may be reused, there are some obscure race  conditions  that
       may cause unintended side effects.

  */
  //assert(close(fd)==0);
  return;
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
//解析屏幕大小dispinfo
static void dispinfo(){
  int fd = open("/proc/dispinfo",0,0);
//man 2 read
  int maxsize = 1024;
  char * buf = (char *)malloc(maxsize * sizeof(char));
  int value = read(fd,buf,maxsize);
  assert(value < maxsize);
  int read_width  = 0;
  int read_height = 0;
  //读width
  char * begin = buf;
  assert(strncmp(begin,"WIDTH",5) == 0);
  buf+=5;
  while (*buf == ' ')
  {
    buf++;
  }
  assert(*buf == ':'); buf++;
  while (*buf == ' ')
  {
    buf++;
  }
  //int pow = 1;
  while (*buf <='9' && *buf >='0')
  {
    read_width = read_width*10 + (*buf-'0'); 
    //len++;
    buf++;
  }
  while (*buf == ' ')
  {
    buf++;
  }
  assert(*buf == '\n'); buf++;
  //读weight
  assert(strncmp(buf,"HEIGHT",6) == 0);
  buf+=6;
  while (*buf == ' ')
  {
    buf++;
  }
  assert(*buf == ':'); buf++;
  while (*buf == ' ')
  {
    buf++;
  }
  //int pow = 1;
  while (*buf <='9' && *buf >='0')
  {
    read_height = read_height*10 + (*buf-'0'); 
    //len++;
    buf++;
  }
  screen_h = read_height;
  screen_w = read_width; 
  
  close(fd);
}
int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  //获取屏幕大小
  dispinfo();
  printf("dispinfo h:%d w:%d\n",screen_h,screen_w);
  return 0;
}

void NDL_Quit() {
}
