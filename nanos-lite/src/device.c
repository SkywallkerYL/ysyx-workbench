#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (size_t i = 0; i < len; i++)
  {
    putch(*((char *)buf + i));
  }
  return len;
  //return 0;
}
//参考 /home/yangli/ysyx-workbench/am-kernels/tests/am-tests/src/tests/keyboard.c

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) return 0;
  // kd 表示按下   kb表示松开 \n 结束一个事件
  //key_state[ev.keycode] = ev.keydown;
  const char *key_name = keyname[ev.keycode];
  //char *event_buf;
  //return value not include \0
  int real_len = ev.keydown? snprintf(buf,len,"kd %s\n",key_name):snprintf(buf,len,"kb %s\n",key_name);
  return real_len;
}
//实现类似events_read 只是换成了读屏幕
//看readme
//合法的dispinfo
//WIDTH : 640
//HEIGHT:480
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T ev = io_read(AM_GPU_CONFIG);
  uint32_t height = ev.height;
  uint32_t width = ev.width;
  size_t real_len = snprintf(buf,len,"WIDTH : %d\n HEIGHT : %d",width,height);
  return real_len;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {

  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
