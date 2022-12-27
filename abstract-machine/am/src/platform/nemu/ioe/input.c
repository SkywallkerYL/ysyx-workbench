#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000
#define KEYBASE KBD_ADDR
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t KEY = *(volatile uint32_t *)(KEYBASE + 0);
  //uint32_t hi = *(volatile uint32_t *)(KEYBASE + 4);
  kbd->keydown = KEY|KEYDOWN_MASK;
  kbd->keycode = KEY&KEYDOWN_MASK;
}
