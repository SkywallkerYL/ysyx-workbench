#include <am.h>
#include "../include/nemu.h"
#include <stdio.h>
#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  int i;
  //这里其实应该直接读的，但是不知道为啥读不到 // +2
  uint16_t w = *(volatile uint16_t *)(VGACTL_ADDR + 2);
  uint16_t h = *(volatile uint16_t *)(VGACTL_ADDR + 0)&0x0000ffff;
  //printf("%d %d\n",w,h);
  printf("AM gpu init:%d %d\n",w,h);
  uint32_t *fb = (uint32_t *)(uintptr_t) FB_ADDR;
  for ( i = 0; i < w*h; i++)
  {
    fb[i] = 0x87cefa;
  }
  outl(SYNC_ADDR,1);
  
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  //这样子也不行
  uint16_t w = *(volatile uint16_t *)(VGACTL_ADDR + 2);
  uint16_t h = *(volatile uint16_t *)(VGACTL_ADDR + 0)&0x0000ffff;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = w*h*sizeof(uint32_t)
  };
}
#include <klib.h>
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  //int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  
  uint16_t W = *(volatile uint16_t *)(VGACTL_ADDR + 2);
  uint16_t H = *(volatile uint16_t *)(VGACTL_ADDR + 0)&0x0000ffff;
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  //在x y处绘制w*h的图像，行优先存储在pixels中
  uint32_t *fb=(uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t * base = (uint32_t *)ctl->pixels;
  //printf("x:%d y:%d w:%d h:%d firstrcolor:%x\n",x,y,w,h,*(base));
  int line = sizeof(uint32_t)* (((w+x)<W)?w:W-x);
  //把像素写到fb里面，注意不要超过屏幕边界
  for (int j = 0; j<h&&(y+j<H); j++)
  {
    memcpy(&fb[(y+j)*W+x],base,line);
    //base跳到下一行，因此总是+w
    base+=w;
  }
  
  //if (w == 0 || h == 0) return;
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  //status->ready = true;
  status->ready = (bool) inl(SYNC_ADDR);
}
