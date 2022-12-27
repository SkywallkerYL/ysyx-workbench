#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000
#define KEYBASE KBD_ADDR
#define KEY_QUEUE_LEN 1024
static int key_queue[KEY_QUEUE_LEN] = {};
static int key_f = 0, key_r = 0;
enum {
  _KEY_NONE = 0
};
static uint32_t key_dequeue() {
  uint32_t key = _KEY_NONE;
  if (key_f != key_r) {
    key = key_queue[key_f];
    key_f = (key_f + 1) % KEY_QUEUE_LEN;
  }
  return key;
}
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  //uint32_t KEY = *(volatile uint32_t *)(KEYBASE + 0);
  int k = AM_KEY_NONE;
  k = key_dequeue();
  //uint32_t hi = *(volatile uint32_t *)(KEYBASE + 4);
  kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  kbd->keycode = k & ~KEYDOWN_MASK;
}
