/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  exit(0);
  return 0;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  //最多只能執行四步，因爲img 只有4個
  //如果要增加執行的次數 ，修改img 的大小
  //並且img最後一個不要定義爲nemu_trap
  //printf("single excutaion step!!!\n");
  char *time = strtok(NULL," ");
  if (time == NULL) {
    cpu_exec(1);
    return 0;
  }
  else 
  {
    int num ;
    sscanf(args,"%d",&num);
    cpu_exec(num);
  }
  return 0;
}
//寄存器信息打印 r
//监视点打印 w
void print_wp();
static int cmd_info(char *args){
  char *arg = strtok(NULL," ");
  if (strcmp(arg,"r")==0)
  {
    isa_reg_display();
    /*
    for (size_t i = 0; i < 32; i++)
    {
      printf ("pc: %lx \t regi: %ld \t  info: %lx \n",cpu.pc,i,cpu.gpr[i]); 
    }
    */
  }
  else if (strcmp(arg,"w")==0)
  {
    print_wp();
  }
  
  else printf("Invalid SUBCMD!\n");
  return 0;
}
//paddr_read() 实现对内存的读取
//paddr_write()

word_t paddr_read(paddr_t addr, int len) ;
//从起始地址打印给定个数的地址存储的信息
//example x 10 0x8000_0000
static int cmd_x(char *args){
  char *N = strtok(NULL," ");
  char *EXPR = strtok(NULL," ");
  int addrn ;
  sscanf(N,"%d",&addrn);
  paddr_t addexpr;
  sscanf(EXPR,"%x",&addexpr);
  //printf ("%x\t",addexpr);
  for (size_t i = 0; i < addrn; i++)
  {
    printf("0x%08x\t 0x%08lx\n",addexpr,paddr_read(addexpr,4));
    addexpr+=4;
  }
  printf("\n");
  return 0;
}
// 表达式求值
//p exp
//(6+((7+(9)*(4)-(8))+8)+((8)-3*(9/8))+((9/3+1+6))*(9/((((6+(((0)*8))-(6)/9+1))))*(7)/(9/8/((((6*3))/7))))*(1))
//int bbb =(6+((((7))+(9)*(4)-(8))+8)+((8)-3*(9/8))+((9/3+1+6))*(9/((((6+(((0)*8))-(6)/9+1))))*(7)/(9/8/((((6*3))/7))))*(1));

static int cmd_p(char *args){
  if (args == NULL)
  {
    printf("Please input the expression to calculate!");
  }
  else 
  {
    init_regex();
    bool success = true;
    int result = expr(args,&success);
    if (success)
    {
      printf("result = %d\n",result);
    }
    else
    {
      printf("Invalid expression!\n");
    }
  }
  return 0;
}
static int cmd_pt(char* args){
  int len;
  if (args == NULL)
  {
    len = 100;
  }
  else {
    sscanf(args,"%d",&len);
  }
  printf("%d\n",len);
  FILE *fp = fopen("/home/yangli/ysyx-workbench/nemu/tools/gen-expr/input.txt","r");
  if (fp == NULL)
  {
    printf("No testfile input!!\n");
    return 0;
  }
  int a [len];
  char str [len][65536];
  int i = 0;
  while (!feof(fp)&&i<len)
  {
    //printf("%d\n",i);
    if(fscanf(fp,"%d",&a[i])==1)
    {
      //printf("result : %d ",a[i]);
    }

    
    if(fscanf(fp,"%[^\n]",str[i])==1)
    {
      //printf("expr : %s \n",str[i]);
    }
    
    i++;  
  }
  for (size_t j = 0; j < len&&j<i-1; j++)
  {
    int strl = strlen(str[j]);
    if (strl<=256)
    {
      int cal_result;
      init_regex();
      bool success = true;
      cal_result = expr(str[j],&success);
      if (success)
      {
        printf("index: %ld realresult = %d, result = %d\n",j,a[j],cal_result);
      }
      else
      {
        printf("Invalid expression!\n");
      }
    }
  }
  
  
  return 0;
}
//添加监视点
WP* new_wp(char *expre);
static int cmd_w (char *args){
  WP *wp = new_wp(args);
  printf("Watchpoint %d : %s has been set\n",wp->NO,wp->expre);
  return 0;
}
bool delete_wp(int NO);
static int cmd_d (char *args){
  char *arg = strtok(NULL," ");
  int NO = 0;
  sscanf(arg,"%d",&NO);
  bool dele = delete_wp(NO);
  if (dele)
  {
    printf("Watchpoint %d has been delete\n",NO);
  }
  else printf("NO Watchpoint %d \n",NO);
  return 0;
}




static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Single excutaion", cmd_si},
  {"info","info SUBCMD",cmd_info},
  {"x","EXPR SCAN",cmd_x},
  {"p","Expression calculation",cmd_p},
  {"pt","Expression calculation test",cmd_pt},
  {"w","Watchpoint add",cmd_w},
  {"d","Watchpoint delete",cmd_d}
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

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

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
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
