#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}
/*
    用libc中的文件操作打开文件, 并获取文件大小size
    申请一段大小为size的内存区间buf
    将整个文件读取到buf中
    将buf和size作为参数, 调用STBIMG_LoadFromMemory(), 它会返回一个SDL_Surface结构的指针
    关闭文件, 释放申请的内存
    返回SDL_Surface结构指针
*/
SDL_Surface* IMG_Load(const char *filename) {
  FILE *fp = fopen(filename,"r");
  if(fp == NULL) assert(0);
  fseek(fp,0,SEEK_END);
  size_t size = ftell(fp);
  char * buf = (char*)malloc(size*sizeof(char));
  fseek(fp, 0, SEEK_SET);
  size_t ret = fread(buf, 1, size, fp);
  assert(ret == size);
  SDL_Surface *s = STBIMG_LoadFromMemory(buf,size);
  assert(s!=NULL);
  fclose(fp);
  free(buf);
  return s;
  //return NULL;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
