#include <am.h>
#include <nemu.h>

//#include </home/yangli/ysyx-workbench/nemu/src/device/keyboard.c>
#define KEYDOWN_MASK 0x8000
#define KEYBASE KBD_ADDR

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  //uint32_t KEY = *(volatile uint32_t *)(KEYBASE + 0);
  int k = AM_KEY_NONE;
  k = *(volatile uint32_t *)(KEYBASE + 0);//key_dequeue();
  //uint32_t hi = *(volatile uint32_t *)(KEYBASE + 4);
  kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  kbd->keycode = k & ~KEYDOWN_MASK;
}
