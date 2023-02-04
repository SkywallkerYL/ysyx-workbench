#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>

char handle_key(SDL_Event *ev);

static void sh_printf(const char *format, ...) {
  static char buf[256] = {};
  va_list ap;
  va_start(ap, format);
  //printf("sh_printf\n");
  int len = vsnprintf(buf, 256, format, ap);
  //printf("buf:%s\n",buf);
  va_end(ap);
  term->write(buf, len);
}

static void sh_banner() {
  sh_printf("Built-in Shell in NTerm (NJU Terminal)\n\n");
}

static void sh_prompt() {
  sh_printf("sh> ");
}
char bufsize = 64;
char tempbuf[64];

static void sh_handle_cmd(const char *cmd) {
  if(cmd == NULL) return;
  if (strlen(cmd) > bufsize)
  {
    sh_printf("Too Long Commond\n");
    return;
  }
  memset(tempbuf,0,bufsize);
  //最后有一个\n 要去掉
  strncpy(tempbuf,cmd,strlen(cmd)-1);
  //man 2 execve
  //printf("%s",tempbuf);
  //printf("aaaaa\n");
  execve(tempbuf, NULL, NULL);
  //execvp(tempbuf, NULL);
}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();

  while (1) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
      if (ev.type == SDL_KEYUP || ev.type == SDL_KEYDOWN) {
        const char *res = term->keypress(handle_key(&ev));
        if (res) {
          sh_handle_cmd(res);
          sh_prompt();
        }
        //printf("key %d\n",ev.key.keysym.sym);
      }
    }
    //printf("hhhhh\n");
    refresh_terminal();
  }
}
