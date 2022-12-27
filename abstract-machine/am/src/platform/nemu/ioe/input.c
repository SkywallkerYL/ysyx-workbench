#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000
#define KEYBASE KBD_ADDR

#define KEY_QUEUE_LEN 1024
#define _KEYS(f) \
  f(ESCAPE) f(F1) f(F2) f(F3) f(F4) f(F5) f(F6) f(F7) f(F8) f(F9) f(F10) f(F11) f(F12) \
f(GRAVE) f(1) f(2) f(3) f(4) f(5) f(6) f(7) f(8) f(9) f(0) f(MINUS) f(EQUALS) f(BACKSPACE) \
f(TAB) f(Q) f(W) f(E) f(R) f(T) f(Y) f(U) f(I) f(O) f(P) f(LEFTBRACKET) f(RIGHTBRACKET) f(BACKSLASH) \
f(CAPSLOCK) f(A) f(S) f(D) f(F) f(G) f(H) f(J) f(K) f(L) f(SEMICOLON) f(APOSTROPHE) f(RETURN) \
f(LSHIFT) f(Z) f(X) f(C) f(V) f(B) f(N) f(M) f(COMMA) f(PERIOD) f(SLASH) f(RSHIFT) \
f(LCTRL) f(APPLICATION) f(LALT) f(SPACE) f(RALT) f(RCTRL) \
f(UP) f(DOWN) f(LEFT) f(RIGHT) f(INSERT) f(DELETE) f(HOME) f(END) f(PAGEUP) f(PAGEDOWN)
#define MAP(c, f) c(f)
#define _KEY_NAME(k) _KEY_##k,
static int key_queue[KEY_QUEUE_LEN] = {};
static int key_f = 0, key_r = 0;
enum {
  _KEY_NONE = 0,
  MAP(_KEYS, _KEY_NAME)
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
