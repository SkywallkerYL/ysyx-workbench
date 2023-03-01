#include <stdint.h>
#include <stdlib.h>
#include <assert.h>



//程序的入口即在Start函数  riscv64.s
/*
内部跳转到call main
然后调用程序的main

*/
int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  char *empty[] =  {NULL };
  environ = empty;
  exit(main(0, empty, empty));
  assert(0);
}
