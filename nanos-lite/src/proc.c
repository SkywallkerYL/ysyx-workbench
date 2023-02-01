#include <proc.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time!", (uintptr_t)arg, j);
    j ++;
    yield();
  }
}
void naive_uload(PCB *pcb, const char *filename);
void init_proc() {
  switch_boot_pcb();

  Log("Initializing processes...");

  // load program here
  //static uintptr_t loader(PCB *pcb, const char *filename);
  //loader(NULL,NULL);
  // /bin/hello /bin/file-test /bin/timer-test /bin/event-test
  // /bin/bmp-test /bin/nslider /bin/menu nterm bird
  const char filename []= "/bin/bird";
  naive_uload(NULL,filename);
  //printf("aaaa\n");
}

Context* schedule(Context *prev) {
  return NULL;
}
