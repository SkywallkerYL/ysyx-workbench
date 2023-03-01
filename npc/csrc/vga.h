#ifndef VGA_H
#define VGA_H
#include "common.h"
#include <time.h>
#include "timer.h"
#include "state.h"
//#include <device/map.h>

#define SCREEN_W  400
#define SCREEN_H  300
#define TIMER_HZ  60

uint32_t screen_width() {
  return SCREEN_W;
}

uint32_t screen_height() {
  return SCREEN_H;
}

uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

uint32_t *vmem = NULL;
uint32_t vgactl_port_base[2];


#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "Riscv64-NPC");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * 2,
      SCREEN_H * 2,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}


void vga_update_screen() {
  if (vgactl_port_base[1])
  {
    update_screen();
    vgactl_port_base[1] = 0;
  }
  
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
}
void sim_exit();
void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;

  vga_update_screen();

#ifndef CONFIG_TARGET_AM
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        npc_state.state = NPC_QUIT;
        sim_exit();
        exit(0);
        break;
#ifdef CONFIG_HAS_KEYBOARD
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
#endif
      default: break;
    }
  }
#endif
}

void sdl_clear_event_queue() {
#ifndef CONFIG_TARGET_AM
  SDL_Event event;
  while (SDL_PollEvent(&event));
#endif
}


void init_vga() {
  //vgactl_port_base = (uint32_t *)new_space(8);
  vgactl_port_base[0] = (screen_width() << 16) | screen_height();
  vgactl_port_base[1] = 0;
  //printf("VGA Initialized1\n");
  //vmem = new_space(screen_size());
  //add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);
  init_screen();
  //printf("VGA Initialized2\n");
  vmem = (uint32_t *)malloc(screen_size());
  //memset(vmem, 0, screen_size());
  printf("VGA Initialized\n");
}
#endif