#include <am.h>

void __am_timer_init();
void __am_gpu_init();
//void __am_audio_init();
void __am_input_keybrd(AM_INPUT_KEYBRD_T *);
void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_gpu_config(AM_GPU_CONFIG_T *);
void __am_gpu_status(AM_GPU_STATUS_T *);
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *);

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) ;//{ cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) ;//{ cfg->present = true;  }
static void __am_uart_config(AM_UART_CONFIG_T *cfg)   { cfg->present = false; }
static void __am_net_config (AM_NET_CONFIG_T *cfg)    { cfg->present = false; }

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __am_gpu_status,
};
static void fail(void *buf) { panic("access nonexist register"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
  if (!lut[i]) lut[i] = fail;
  //__am_gpu_init();
  //__am_timer_init();
  return true;
}

void ioe_read (int reg, void *buf) {((handler_t)lut[reg])(buf);}
void ioe_write(int reg, void *buf) {((handler_t)lut[reg])(buf);}

//timer
//用navy的库实现
static struct timeval boot_time = {};

void __am_timer_config(AM_TIMER_CONFIG_T *cfg) {
  cfg->present = cfg->has_rtc = true;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  //time_t t = time(NULL);
  //struct tm *tm = localtime(&t);
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 0;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  struct timeval now;
  gettimeofday(&now, NULL);
  long seconds = now.tv_sec ;//- boot_time.tv_sec;
  long useconds = now.tv_usec;// - boot_time.tv_usec;
  uptime->us = seconds * 1000000 + (useconds + 500);
}

void __am_timer_init() {
  gettimeofday(&boot_time, NULL);
}
// keyboard
#define _KEYS(_) \
  _(ESCAPE) _(F1) _(F2) _(F3) _(F4) _(F5) _(F6) _(F7) _(F8) _(F9) _(F10) _(F11) _(F12) \
  _(GRAVE) _(1) _(2) _(3) _(4) _(5) _(6) _(7) _(8) _(9) _(0) _(MINUS) _(EQUALS) _(BACKSPACE) \
  _(TAB) _(Q) _(W) _(E) _(R) _(T) _(Y) _(U) _(I) _(O) _(P) _(LEFTBRACKET) _(RIGHTBRACKET) _(BACKSLASH) \
  _(CAPSLOCK) _(A) _(S) _(D) _(F) _(G) _(H) _(J) _(K) _(L) _(SEMICOLON) _(APOSTROPHE) _(RETURN) \
  _(LSHIFT) _(Z) _(X) _(C) _(V) _(B) _(N) _(M) _(COMMA) _(PERIOD) _(SLASH) _(RSHIFT) \
  _(LCTRL) _(APPLICATION) _(LALT) _(SPACE) _(RALT) _(RCTRL) \
  _(UP) _(DOWN) _(LEFT) _(RIGHT) _(INSERT) _(DELETE) _(HOME) _(END) _(PAGEUP) _(PAGEDOWN)

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};


void __am_input_config(AM_INPUT_CONFIG_T *cfg) {
  cfg->present = true;
}

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  //看native 的，
//kbd->keydown
//kbd->keycode
  /*
  //不能直接用，把NDL和SDL的贴过来
  SDL_Event ev;
  if(SDL_PollEvent(&ev)){
    kbd -> keydown = ev->type;
    kbd -> keycode = ev->key.keysym.sym;
  }
  else{
    kbd -> keydown = 0;
    kbd -> keycode = 0;
  }*/
  char buf[64];
  char* keybuf = buf;
  keybuf+=3;
  int len=0;
  //这样写有问题
  memset(buf, 0, 64);
  int fd = open("/dev/events",0,0);
//man 2 read
  int value = read(fd,buf,len);
  close(fd);
  bool flag =  (value != 0);
  //printf("len:%d\n",len);
  if (flag) {
    //printf("%s\n",keybuf);
    if(strncmp(buf,"kd",2)==0) {kbd -> keydown =1;}
    else if(strncmp(buf,"kb",2)==0){kbd -> keydown =0;}
    //else return 1;
    while (*keybuf!='\n')
    {
      keybuf++;
      len++;
    }
    keybuf=keybuf-len;
    for (int i = 0; i < sizeof(keyname)/(sizeof(keyname[0])); i++)
    {

      //printf("%s %s\n",keybuf,keyname[i]);
      //printf("%s\n",keyname[i]);
      //要加上长度的判断，不然F 和 F1 只比较一个，会被识别成F1
      if (strncmp(keybuf, keyname[i],len)==0&& strlen(keyname[i])==len)
      {
        //keystates[i] = ev->type ==SDL_KEYDOWN?1:0;
        //printf("%s %s\n",keybuf,keyname[i]);
        kbd->keycode = i;
        break;
      }
    }
    return ;
    //printf("key %s\n",keyname[ev->key.keysym.sym]);
  }
  else {
    kbd -> keydown = 0;
    kbd -> keycode = 0;
    //ev->type = SDL_USEREVENT;
    //ev->key.keysym.sym=0;
    return ;
  }
}
//VGA
//参考native的
#define W 400
#define H 300
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  //uint16_t W = 400,H = 300;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = W*H*sizeof(uint32_t)
  };
}

void __am_gpu_status(AM_GPU_STATUS_T *stat) {
  stat->ready = true;
}
#define RMASK 0x00ff0000
#define GMASK 0x0000ff00
#define BMASK 0x000000ff
#define AMASK 0x00000000
//这里从ndl_drawrect体过来
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  if (w == 0 || h == 0) return;
  //feclearexcept(-1);
  /*
  SDL_Surface *s = SDL_CreateRGBSurfaceFrom(ctl->pixels, w, h, 32, w * sizeof(uint32_t),
      RMASK, GMASK, BMASK, AMASK);
  SDL_Rect rect = { .x = x, .y = y };
  SDL_BlitSurface(s, NULL, surface, &rect);
  SDL_FreeSurface(s);
  */
   int fd = open("/dev/fb",0,0);
  uint32_t * pixels = (uint32_t *) ctl->pixels;
  for (int i = 0; i < h &&(y+i) < H; i++)
  {
    uint64_t offset = (y+0+i)*W+(x+0);

    int len = (w+x<W)?w:W-x;
    lseek(fd,offset*4,SEEK_SET);
    write(fd,pixels+(uint32_t)i*w,len*4);
  }
  
  //uint64_t offset = y*screen_w+x;
  //write((void *)pixels,offset,len);
  close(fd);
}

