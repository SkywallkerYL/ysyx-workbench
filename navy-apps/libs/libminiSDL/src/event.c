#include <NDL.h>
#include <SDL.h>
#include <string.h>
#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  char* keybuf = buf;
  keybuf+=3;
  if (NDL_PollEvent(buf, sizeof(buf))) {
    printf("%s\n",buf);
    if(strncmp(buf,"kd",2)==0) {printf("aaa\n");ev->type =SDL_KEYDOWN ;}
    else if(strncmp(buf,"kb",2)==0){printf("bbbb\n");ev->type =SDL_KEYUP ;}
    else return 1;
    for (size_t i = 0; i < 83; i++)
    {
      if (strcmp(keybuf, keyname[i])==0)
      {
        ev->key.keysym.sym = i;
        break;
      }
    }
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  return SDL_PollEvent(event);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
