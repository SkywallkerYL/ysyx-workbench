#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
// 现在像素阵列中直接存放32位的颜色信息
// uint32_t color_xy = pixels[x][y];

// 仙剑奇侠传中的像素阵列存放的是8位的调色板下标,
// 用这个下标在调色板中进行索引, 得到的才是32位的颜色信息
// uint32_t pal_color_xy = palette[pixels[x][y]];

// 将一张画布中的指定矩形区域复制到另一张画布的指定位置
// SDL_BlitSurface(s, NULL, screen, &dstrect);
void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect)
{
  assert(dst!=NULL);
  assert(src!=NULL);

  // printf("x:%d y:%d\n",dstrect->x,dstrect->y);

  int src_x = 0, src_y = 0, dst_x = 0, dst_y = 0;
  int dst_w, dst_h;
  int src_w, src_h;
  if (dstrect != NULL)
  {
    dst_w = dstrect->w;
    dst_h = dstrect->h;
    dst_x = dstrect->x;
    dst_y = dstrect->y;
  }
  else
  {
    dst_w = dst->w;
    dst_h = dst->h;
  }
  if (srcrect != NULL)
  {
    src_w = srcrect->w;
    src_h = srcrect->h;
    src_x = srcrect->x;
    src_y = srcrect->y;
  }
  else
  {
    src_w = src->w;
    src_h = src->h;
  }
  int init_offset = dst_y * dst->w + dst_x;
  int src_offset = src_y * src->w + src_x;
  /**/
  // printf("init_offset:%d\n",init_offset);
  // if(dst->format->palette) printf("init_offset\n");
  // if(srcrect == NULL){
  // printf("src_w:%d src_h:%d\n",src->w,src->h);
  int minsrc_w = src_w + src_x < src->w ? src_w : (src->w - src_x);
  int minsrc_h = src_h + src_y < src->h ? src_h : (src->h - src_y);
  int w_ = minsrc_w <= dst->w - dst_x ? minsrc_w : (dst_x + dst_w) < dst->w ? dst_w : dst->w - dst_x;
  int h_ = minsrc_h <= dst->h - dst_y ? minsrc_h : (dst_y + dst_h) < dst->h ? dst_h : dst->h - dst_y;
  // printf("w:%d h:%d\n",w_,h_);
  if (dst->format->palette == NULL)
  {
    uint32_t *src_pixels = (uint32_t *)src->pixels;
    uint32_t *dst_pixels = (uint32_t *)dst->pixels;
    for (size_t i = 0; i < h_; i++)
    {
 
      for (size_t j = 0; j < w_; j++)
      {
        // dst_pixels[init_offset+i*dst->w+j] = src_pixels[i*src->w+j];
        *(dst_pixels + init_offset + i * dst->w + j) = *(src_pixels + src_offset + i * src->w + j);
      }
    }
  }

  else
  {
    assert(src->format->palette != NULL);

    /**/
    uint8_t *src_pixels = (uint8_t *)src->pixels;
    uint8_t *dst_pixels = (uint8_t *)dst->pixels;
    for (size_t i = 0; i < h_; i++)
    {
      for (size_t j = 0; j < w_; j++)
      {

        // printf("aaaa\n");
        // uint32_t pal_color_xy = palette[pixels[x][y]];
        dst_pixels[init_offset + i * dst->w + j] = src_pixels[src_offset + i * src->w + j];

        //*(dst_pixels+4*(init_offset+i*dst->w+j)) = *(src_pixels+4*(src_offset+i*src->w+j));
        // printf("%p\n",(dst_pixels+init_offset+i*dst->w+j));
        // dst->format->palette->colors[dst_pixels[init_offset+i*dst->w+j]].val = src->format->palette->colors[src_pixels[src_offset+i*src->w+j]].val;
      }
    }

    // printf("aaaa\n");
  }

  return;
  //}
  /*
  else{
    int src_offset =srcrect->y*src->w + srcrect->x;
    //(src->w-srcrect->x) srcrect->w (dst->w-dstrect->x) dstrect->w
    int src_w = srcrect->w+srcrect->x < src->w ? srcrect->w : (src->w-srcrect->x);
    int src_h = srcrect->h+srcrect->y < src->h ? srcrect->h : (src->h-srcrect->y);
    int w_ = src_w <= dst->w - dstrect->x ? src_w : (dstrect->x + dstrect->w)< dst->w? dstrect->w:dst->w-dstrect->x;
    int h_ = src_h <= dst->h - dstrect->y ? src_h : (dstrect->y + dstrect->h)< dst->h? dstrect->h:dst->h-dstrect->y;
    for (size_t i = 0; i < h_ ; i++)
    {
      for (size_t j = 0; j < w_; j++)
      {
        *(dst_pixels+init_offset+i*dst->w+j) = *(src_pixels+src_offset+i*src->w+j);
      }
    }
    return;
    //printf("srcrect invalid\n");
    //assert(0);
    */
  //}

  // return;
}
// 往画布的指定矩形区域中填充指定的颜色
// dst 是屏幕 dstrect 是画布
void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color)
{
  // bool flag = dstrect->x==0 && dstrect->y==0 &&dstrect->w ==0 &&dstrect->h ==0;
  // int w_ = flag?400:dstrect->w;
  // int h_ = flag?300:dstrect->h;
  // 有distrect为null的情况
  int dst_x = 0, dst_y = 0;
  int dst_w, dst_h;
  if (dstrect != NULL)
  {
    dst_w = dstrect->w;
    dst_h = dstrect->h;
    dst_x = dstrect->x;
    dst_y = dstrect->y;
  }
  else
  {
    dst_w = dst->w;
    dst_h = dst->h;
  }

  /*
  if (dstrect == NULL){
    for (size_t i = 0; i < dst->w*dst->h; i++)
    {
      *(pixels+i) = color;
    }
    return;
  }
  */
  // 同前NDL_DrawRect类似
  int w_ = (dst_x + dst_w) < dst->w ? dst_w : dst->w - dst_x;
  int h_ = (dst_y + dst_h) < dst->h ? dst_h : dst->h - dst_y;
  int init_off = dst_y * dst->w + dst_x;
  // if(dst->format->palette==NULL){
  uint32_t *pixels = (uint32_t *)dst->pixels;
  for (size_t i = 0; i < h_; i++)
  {
    for (size_t j = 0; j < w_; j++)
    {
      *(pixels + init_off + i * dst->w + j) = color;
    }
  }
  //}
  /*
  else{
    uint8_t * pixels = (uint8_t *)dst->pixels;
    for (size_t i = 0; i < h_ ; i++)
    {
      for (size_t j = 0; j < w_; j++)
      {
        dst->format->palette->colors[pixels[init_off+i*dst->w+j]].val = color;
      }
    }
  }
  */
  // printf("aaaaa\n");
  // NDL_DrawRect((uint32_t *)(dst->pixels),dstrect->x,dstrect->y,w_,h_);
  return;
}
// extern int screen_w , screen_h ;
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h)
{
  bool flag = w == 0 && h == 0;
  int w_ = flag ? s->w : w;
  int h_ = flag ? s->h : h;
  if (s->format->palette == NULL)
  {
    NDL_DrawRect((uint32_t *)(s->pixels), x, y, w_, h_);
  }

  else
  {
    // 从调色板里取颜色
    int init_off = y * s->w + x;
    int64_t size = sizeof(uint32_t *) * w_ * h_;
    uint32_t *pixels = (uint32_t *)malloc(size);
    uint8_t *pix = s->pixels;
    for (size_t i = 0; i < h_; i++)
    {

      for (size_t j = 0; j < w_; j++)
      {
        SDL_Color colors = s->format->palette->colors[pix[init_off + i * s->w + j]];
        uint32_t a = colors.a << 24;
        uint32_t r = colors.r << 16;
        uint32_t g = colors.g << 8;
        uint32_t b = colors.b;
        pixels[i * w_ + j] = a | r | g | b;
      }

      // colors存的是r g b a ，顺序不一样不能直接用

      // pixels[i] = s->format->palette->colors[pix[i+init_off]].val;
    }

    NDL_DrawRect((uint32_t *)(pixels), x, y, w_, h_);
    free(pixels);
  }

  // io_write(AM_GPU_FBDRAW, x, y, (void *)s->pixels, w, h, true);
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask)
{
  switch (mask)
  {
  case 0x000000ff:
    return 0;
  case 0x0000ff00:
    return 8;
  case 0x00ff0000:
    return 16;
  case 0xff000000:
    return 24;
  case 0x00000000:
    return 24; // hack
  default:
    assert(0);
  }
}

SDL_Surface *SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
                                  uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask)
{
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8)
  {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  }
  else
  {
    s->format->palette = NULL;
    s->format->Rmask = Rmask;
    s->format->Rshift = maskToShift(Rmask);
    s->format->Rloss = 0;
    s->format->Gmask = Gmask;
    s->format->Gshift = maskToShift(Gmask);
    s->format->Gloss = 0;
    s->format->Bmask = Bmask;
    s->format->Bshift = maskToShift(Bmask);
    s->format->Bloss = 0;
    s->format->Amask = Amask;
    s->format->Ashift = maskToShift(Amask);
    s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC))
  {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface *SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
                                      int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask)
{
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
                                        Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s)
{
  if (s != NULL)
  {
    if (s->format != NULL)
    {
      if (s->format->palette != NULL)
      {
        if (s->format->palette->colors != NULL)
          free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC))
      free(s->pixels);
    free(s);
  }
}

SDL_Surface *SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags)
{
  if (flags & SDL_HWSURFACE)
    NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
                              DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect)
{
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if (w == dstrect->w && h == dstrect->h)
  {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else
  {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors)
{
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if (s->flags & SDL_HWSURFACE)
  {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i++)
    {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len)
{
  int i;
  uint8_t(*pdst)[4] = dst;
  uint8_t(*psrc)[4] = src;
  union
  {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16)
  {
#define macro(i)                      \
  tmp.val32 = *((uint32_t *)psrc[i]); \
  *((uint32_t *)pdst[i]) = tmp.val32; \
  pdst[i][0] = tmp.val8[2];           \
  pdst[i][2] = tmp.val8[0];

    macro(i + 0);
    macro(i + 1);
    macro(i + 2);
    macro(i + 3);
    macro(i + 4);
    macro(i + 5);
    macro(i + 6);
    macro(i + 7);
    macro(i + 8);
    macro(i + 9);
    macro(i + 10);
    macro(i + 11);
    macro(i + 12);
    macro(i + 13);
    macro(i + 14);
    macro(i + 15);
  }

  for (; i < len; i++)
  {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags)
{
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface *ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
                                          fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask)
    p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s)
{
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s)
{
}
