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

static int symblenumber ;//记录符号的表的符号个数
//static int maxsymbolnumber = 4096;
static Elf64_Sym allsymble[4096];//最多4096个
void init_ftrace(char* elf_file)
{
  //创建ftrace写入文件
  FILE *file;
  file = fopen(elf_logfile,"w+");
  //char str[] = "mtrace file ";
  if (file == NULL)
  {
    printf("Fail to creat mtracefile!\n");
  }

	// 打开文件
	FILE *fp;
	fp = fopen(elf_file, "r");
	if (NULL == fp)
	{
		printf("fail to open the file");
		exit(0);
	}

	// 解析head
	Elf64_Ehdr elf_head;
	int  a;

	// 读取 head 到elf_head
	a = fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp);   //fread参数1：读取内容存储地址，参数2：读取内容大小，参数3：读取次数，参数4：文件读取引擎
	if (0 == a)
	{
		printf("fail to read head\n");
		exit(0);
	}

	// 判断elf文件类型
	if (elf_head.e_ident[0] != 0x7F ||
		elf_head.e_ident[1] != 'E' ||
		elf_head.e_ident[2] != 'L' ||
		elf_head.e_ident[3] != 'F')
	{
		printf("Not a ELF file\n");
		exit(0);
	}

	// 解析section 分配内存 section * 数量
	Elf64_Shdr *shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * elf_head.e_shnum);
	if (NULL == shdr)
	{
		printf("shdr malloc failed\n");
		exit(0);
	}

	// 设置fp偏移量 offset，e_shoff含义
	a = fseek(fp, elf_head.e_shoff, SEEK_SET); //fseek调整指针的位置，采用参考位置+偏移量
	if (0 != a)
	{
		printf("\nfaile to fseek\n");
		exit(0);
	}

	// 读取section 到 shdr, 大小为shdr * 数量
	a = fread(shdr, sizeof(Elf64_Shdr) * elf_head.e_shnum, 1, fp);
	if (0 == a)
	{
		printf("\nfail to read section\n");
		exit(0);
	}

	// 重置指针位置到文件流开头
	rewind(fp);

	// 将fp指针移到 字符串表偏移位置处
	fseek(fp, shdr[elf_head.e_shstrndx].sh_offset, SEEK_SET);

	// 第e_shstrndx项是字符串表 定义 字节 长度 char类型 数组
	char shstrtab[shdr[elf_head.e_shstrndx].sh_size];
	char *temp = shstrtab;

	// 读取内容
	a = fread(shstrtab, shdr[elf_head.e_shstrndx].sh_size, 1, fp);
	if (0 == a)
	{
		printf("\nfaile to read\n");
	}
    Elf64_Sym symble_entry;
    int symble_size = sizeof(symble_entry);
    //printf("%d\n",symble_size);
    //每一个symbol数据按照该顺序一次存储，小端序
    /*
    printf("%ld\n",sizeof(symble_entry.st_name));
    printf("%ld\n",sizeof(symble_entry.st_info));
    printf("%ld\n",sizeof(symble_entry.st_other));
    printf("%ld\n",sizeof(symble_entry.st_shndx));
    printf("%ld\n",sizeof(symble_entry.st_value));
    printf("%ld\n",sizeof(symble_entry.st_size));
    *///= 37;
    // 第一次遍历  确定symbol的个数以及symbol entry
  
  for (int i = 0; i < elf_head.e_shnum; i++)
	{
		temp = shstrtab;
		temp = temp + shdr[i].sh_name;
    if (strcmp(temp, ".symtab") == 0) {
        //printf("节的名称: %s\n", temp);
    //printf("节首的偏移: %lx\n", shdr[i].sh_offset);
    //printf("节的大小: %ld\n", shdr[i].sh_size);
      symblenumber = shdr[i].sh_size/symble_size;
    }
	}
  //Elf64_Sym allsymble[symblenumber];
  //printf("symbolnumber:%d\n",symblenumber);
	// 遍历
	for (int i = 0; i < elf_head.e_shnum; i++)
	{
		temp = shstrtab;
		temp = temp + shdr[i].sh_name;
    if (strcmp(temp, ".symtab") != 0) continue;//该section名称 
    uint8_t *sign_data=(uint8_t*)malloc(sizeof(uint8_t)*shdr[i].sh_size);
		// 依据此段在文件中的偏移读取出
		fseek(fp, shdr[i].sh_offset, SEEK_SET);
		if(fread(sign_data, sizeof(uint8_t)*shdr[i].sh_size, 1, fp)==1);
		// 显示读取的内容
		uint8_t *p = sign_data;
		int j = 0;
		for (j=0; j<shdr[i].sh_size; j = j+symble_size)
		{
      int symbolind = j/symble_size;
      //printf("ind:%d ",symbolind);
      int k = 0;
      //在elf.h中看Elf64_Sym的结构体，按照小端序一次存进去
      //首先是st_name 4个字节
      union var4 stname;
      while (k<4)
      {
          stname.p[k] = *p;
          k++;
          p++;
      }
      //printf("name:%08x ",stname.i);
      //name存储其在strtab内的索引
      allsymble[symbolind].st_name = stname.i;
      //info 一字节
      union var1 stinfo;
      while (k<4+1)
      {
          stinfo.p = *p;
          k++;
          p++;
      }
      //printf("info:%02x ",stinfo.i);
      allsymble[symbolind].st_info = stinfo.i;
      //other 一字节
      union var1 stother;
      while (k<5+1)
      {
          stother.p = *p;
          k++;
          p++;
      }
      //printf("other:%02x ",stother.i);
      allsymble[symbolind].st_other = stother.i;
      //shnndx 2字节
      union var2 stshndx;
      while (k<6+2)
      {
          stshndx.p[k-6] = *p;
          k++;
          p++;
      }
      //printf("stshndx:%04x ",stshndx.i);
      allsymble[symbolind].st_shndx = stshndx.i;
      //value 8字节
      union var8 stvalue;
      while (k<8+8)
      {
          stvalue.p[k-8] = *p;
          k++;
          p++;
      }
      //printf("stvalue:%016lx ",stvalue.i);
      allsymble[symbolind].st_value = stvalue.i;
      //size 8字节
      union var8 stsize;
      while (k<symble_size)
      {
          stsize.p[k-16] = *p;
          k++;
          p++;
      }
      //printf("stsize:%ld ",stsize.i);
      allsymble[symbolind].st_size = stsize.i;
      //printf("\n");
		}
	}
  return;
}

void log_ftrace(paddr_t addr,char* elf_file)
{
  FILE *file;
  file = fopen(elf_logfile,"a");
  if (file == NULL) {printf("No file!!!!\n");}
  FILE *fp;
	fp = fopen(elf_file, "r");
	if (NULL == fp)
	{
		printf("fail to open the file");
		exit(0);
	}
  //
	Elf64_Ehdr elf_head;
	int a;
	a = fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp);   //fread参数1：读取内容存储地址，参数2：读取内容大小，参数3：读取次数，参数4：文件读取引擎
	if (0 == a)
	{
		printf("fail to read head\n");
		exit(0);
	}
	if (elf_head.e_ident[0] != 0x7F ||
		elf_head.e_ident[1] != 'E' ||
		elf_head.e_ident[2] != 'L' ||
		elf_head.e_ident[3] != 'F')
	{
		printf("Not a ELF file\n");
		exit(0);
	}
	Elf64_Shdr *shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * elf_head.e_shnum);
	if (NULL == shdr)
	{
		printf("shdr malloc failed\n");
		exit(0);
	}
	a = fseek(fp, elf_head.e_shoff, SEEK_SET); //fseek调整指针的位置，采用参考位置+偏移量
	if (0 != a)
	{
		printf("\nfaile to fseek\n");
		exit(0);
	}
	a = fread(shdr, sizeof(Elf64_Shdr) * elf_head.e_shnum, 1, fp);
	if (0 == a)
	{
		printf("\nfail to read section\n");
		exit(0);
	}
	rewind(fp);
	fseek(fp, shdr[elf_head.e_shstrndx].sh_offset, SEEK_SET);
	char shstrtab[shdr[elf_head.e_shstrndx].sh_size];
	char *temp = shstrtab;
	a = fread(shstrtab, shdr[elf_head.e_shstrndx].sh_size, 1, fp);
	if (0 == a)
	{
		printf("\nfaile to read\n");
	}
  //这一部分读取与init_trace内部一样
  //下面通过strtab表的地址与name来
  for (int i = 0; i < elf_head.e_shnum; i++)
	{
		temp = shstrtab;
		temp = temp + shdr[i].sh_name;
    if (strcmp(temp, ".strtab") != 0) continue;//该section名称 
    uint8_t *sign_data=(uint8_t*)malloc(sizeof(uint8_t)*shdr[i].sh_size);
		// 依据此段在文件中的偏移读取出
		fseek(fp, shdr[i].sh_offset, SEEK_SET);
		if(fread(sign_data, sizeof(uint8_t)*shdr[i].sh_size, 1, fp)==1);
		// 显示读取的内容
    for (size_t j = 0; j < symblenumber; j++)
    {
      if (allsymble[j].st_value!=addr) continue;
      uint8_t *p = sign_data;
      int len = 0;
      //看elf里面 info 第一位是bind 第二位是type
      //printf("info:%02x\n",allsymble[j].st_info);
      if((allsymble[j].st_info&0x0f) == STT_FUNC)
      {
        int ind = allsymble[j].st_name;
        //p = p + ind;
        for (p = p + ind; *p!='\0'; p++)
        {
          len++;
        }
        char funcname [len+1];
        char* newp = (char*)(sign_data)+(char)(ind);
        strncpy(funcname,newp,len);
        funcname[len] = '\0';
        fprintf(file,"pc:%lx: Addr:%x call [%s]\n",cpu.pc,addr,funcname);
      }
    }    
	}
  fclose(file); 
}



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
