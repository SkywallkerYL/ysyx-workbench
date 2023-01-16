#ifndef NPCSDB
#define NPCSDB
#include <readline/readline.h>
#include <readline/history.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "npc-exec.h"
#include "macro.h"
#include "state.h"
#include "vga.h"
using namespace std;
static VRiscvCpu* top;
#define max_instr_printnum 10
static void execute(uint64_t n) ;

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc_sdb) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

string mygetline(){
    //printf("in mygetline\n");
    string line ;
    getline(cin,line,'\n');
    //cin.getline(str);
    //printf("line_length:%ld\n",line.length());
    return line;
}
/*
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc-sdb) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}
*/
static int cmd_help(char *args);


static int cmd_si(char *args){
  //最多只能執行四步，因爲img 只有4個
  //如果要增加執行的次數 ，修改img 的大小
  //並且img最後一個不要定義爲nemu_trap
  //printf("single excutaion step!!!\n");
  char *time = strtok(NULL," ");
  if (time == NULL) {
    execute(1);
    return 0;
  }
  else 
  {
    int num ;
    sscanf(args,"%d",&num);
    execute(num);
  }
  return 0;
}

static int cmd_c(char *args) {
  execute(-1);
  return 0;
}
void sim_exit();
static int cmd_q(char *args) {
  npc_state.state= NPC_QUIT;
  sim_exit();
  exit(0);
  //exit(0);
  //printf("hhhh\n");
  return 0;
}

//从起始地址打印给定个数的地址存储的信息
//example x 10 0x8000_0000
static int cmd_x(char *args){
  char *N = strtok(NULL," ");
  char *EXPR = strtok(NULL," ");
  int addrn ;
  sscanf(N,"%d",&addrn);
  uint64_t addexpr;
  sscanf(EXPR,"%lx",&addexpr);
  //printf ("%x\t",addexpr);
  uint64_t init = (addexpr-0x80000000);
  uint32_t* p = (uint32_t *)(&p_mem + init);//&top->rootp->RiscvCpu__DOT__M[init];
  for (size_t i = 0; i < addrn; i++)
  {
    printf("0x%08lx\t 0x%08x\n",addexpr,*p);
    addexpr+=4;
    p++;
  }
  //printf("\n");
  return 0;
}
uint64_t  *cpu_gpr = NULL;
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void isa_reg_display(){
  for (size_t i = 0; i < 32; i++)
  {
    printf("%s \t 0x%08lx\n",regs[i],cpu_gpr[i]);
  }
  
  //printf("0x%08lx\n",*cpu_gpr);
  return;
}
static int cmd_info(char *args){
  if (args==NULL) return 0;
  char *arg = strtok(NULL," ");
  if (args==NULL) return 0;
  if (strcmp(arg,"r")==0)
  {
    isa_reg_display();

  }
  else if (strcmp(arg,"w")==0)
  {
    //print_wp();
  }
  else printf("Invalid SUBCMD!\n");
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
  { "si", "Single excutaion", cmd_si},
  {"info","info SUBCMD",cmd_info},
  {"x","EXPR SCAN",cmd_x}
  //{"p","Expression calculation",cmd_p},
  //{"pt","Expression calculation test",cmd_pt},
  //{"w","Watchpoint add",cmd_w},
  //{"d","Watchpoint delete",cmd_d}
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static bool is_batch_mode = false;

void sdb_set_batch_mode() {
  is_batch_mode = true;
}


void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
  //printf("hhhh\n");
  //string quit = "quit";
  //string enter = '\n';
  //for (char * str = mygetline(str);str!=NULL;){
  //for (string strcin=mygetline(); strcin.length()!= 0; ) {
  for (char *str; (str = rl_gets()) != NULL; ) {
    //printf("start:%ld\n",strcin.length());
    //cout<<strcin;
    char *str_end = str + strlen(str);
    //char str[20];
    //strcpy(str,strcin.c_str());
    //printf("hjhhhh\n");
    //char *str_end = str + strlen(str);
    //printf("str:%s\n",str);
    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    //cin.ignore();
    //acin.get();
    //strcin=mygetline();
    //cout<<strcin;
    //printf("end:%d\n",strcin.length());
  }
}


#endif
