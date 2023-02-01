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
  int len=0;
  while (*keybuf!='\n')
  {
    keybuf++;
    len++;
  }
  keybuf=keybuf-len;
  if (NDL_PollEvent(buf, sizeof(buf))) {
    //printf("%s\n",keybuf);
    if(strncmp(buf,"kd",2)==0) {ev->type =SDL_KEYDOWN ;}
    else if(strncmp(buf,"kb",2)==0){ev->type =SDL_KEYUP ;}
    //else return 1;
    for (size_t i = 0; i < 83; i++)
    {
      //printf("%s %s\n",keybuf,keyname[i]);
      //printf("%s\n",keyname[i]);
      if (strncmp(keybuf, keyname[i],len)==0 && strlen(keyname[i]) == strlen(buf) - 4)
      {
        //printf("%s %s\n",keybuf,keyname[i]);
        ev->key.keysym.sym = i;
        break;
      }
    }
    return 1;
    //printf("key %s\n",keyname[ev->key.keysym.sym]);
  }
  else {
    ev->type = SDL_USEREVENT;
    ev->key.keysym.sym=0;
    return 0;
  }
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  char* keybuf = buf;
  keybuf+=3;
  int len=0;
  while (*keybuf!='\n')
  {
    keybuf++;
    len++;
  }
  keybuf=keybuf-len;
  while (!NDL_PollEvent(buf, sizeof(buf)));
  
  //if (NDL_PollEvent(buf, sizeof(buf))) {
    //printf("%s\n",keybuf);
    if(strncmp(buf,"kd",2)==0) {event->type =SDL_KEYDOWN ;}
    else if(strncmp(buf,"kb",2)==0){event->type =SDL_KEYUP ;}
    //else return 1;
    for (size_t i = 0; i < 83; i++)
    {
      //printf("%s %s\n",keybuf,keyname[i]);
      //printf("%s\n",keyname[i]);
      if (strncmp(keybuf, keyname[i],len)==0 && strlen(keyname[i]) == strlen(buf) - 4)
      {
        //printf("%s %s\n",keybuf,keyname[i]);
        event->key.keysym.sym = i;
        break;
      }
    }
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

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
