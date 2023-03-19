#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <assert.h>
#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};
static uint8_t keystates[sizeof(keyname)/sizeof(keyname[0])];
int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}
//https://wiki.libsdl.org/SDL2/SDL_PollEvent
int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  char* keybuf = buf;
  keybuf+=3;
  int len=0;
  //这样写有问题

  //printf("len:%d\n",len);
  if (NDL_PollEvent(buf, sizeof(buf))) {
    //printf("%s\n",keybuf);
    if(strncmp(buf,"kd",2)==0) {ev->type =SDL_KEYDOWN ;}
    else if(strncmp(buf,"kb",2)==0){ev->type =SDL_KEYUP ;}
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
        keystates[i] = ev->type ==SDL_KEYDOWN?1:0;
        printf("%s %s\n",keybuf,keyname[i]);
        ev->key.keysym.sym = i;
        break;
      }
    }
    return 1;
    //printf("key %s\n",keyname[ev->key.keysym.sym]);
  }
  else {
    //ev->type = SDL_USEREVENT;
    //ev->key.keysym.sym=0;
    return 0;
  }
  //return 1;
}
//https://wiki.libsdl.org/SDL2/SDL_WaitEvent
int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  char* keybuf = buf;
  keybuf+=3;
  int len=0;
  while (!NDL_PollEvent(buf, sizeof(buf)));
  
  //if (NDL_PollEvent(buf, sizeof(buf))) {
    //printf("%s\n",keybuf);
    bool findflag = 0;
    if(strncmp(buf,"kd",2)==0) {event->type =SDL_KEYDOWN ;}
    else if(strncmp(buf,"kb",2)==0){event->type =SDL_KEYUP ;}
    //else return 1;
    while (*keybuf!='\n')
    {
      keybuf++;
      len++;
    }
    keybuf=keybuf-len;
    for (int i = 0; i < sizeof(keyname)/sizeof(keyname[0]); i++)
    {
      //printf("%s %s\n",keybuf,keyname[i]);
      //printf("%s\n",keyname[i]);
      if (strncmp(keybuf, keyname[i],len)==0 && strlen(keyname[i])==len)
      {
        keystates[i] = event->type ==SDL_KEYDOWN?1:0;
        printf("%s %s\n",keybuf,keyname[i]);
        findflag = 1;
        event->key.keysym.sym = i;
        break;
      }
    }
  if(!findflag) return 0;
  //assert(findflag);
    //printf("key %s\n",keyname[ev->key.keysym.sym]);
  //}
  //else {
   // event->type = SDL_USEREVENT;
   // event->key.keysym.sym=0;
   // return 1;
  //}
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

//https://wiki.libsdl.org/SDL2/SDL_GetKeyboardState
//Returns a pointer to an array of key states.
uint8_t* SDL_GetKeyState(int *numkeys) {
  return keystates;
}
