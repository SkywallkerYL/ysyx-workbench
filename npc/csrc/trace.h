#ifndef _TRACE_
#define _TRACE_


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include <elf.h>
#include "Vysyx_22050550.h"
#include "Vysyx_22050550___024root.h"
#include "Vysyx_22050550__Dpi.h"
#include "verilated_dpi.h"
#include "verilated_vcd_c.h"
#include "svdpi.h"
#include "macro.h"
#include "monitor.h"
#include "common.h"
//#include "npc-exec.h"



typedef struct Decode {
  uint64_t pc;
  //vaddr_t snpc; //static next pc
  uint64_t dnpc; //dynamic next pc
  //ISADecodeInfo isa;
  char logbuf[128];
  //char logbuf[128];
} Decode;
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#ifdef  CONFIG_ITRACE
//itrace 
#define iringbufsize 16
char iringbuf[iringbufsize][128];
int iringbufind = 0;
void printiringbuf(int finalinst);


char default_log[100] = "./build/npc-flog.txt" ;
#endif

//ftrace 

union var8
{
    char p[8];
    int64_t i;
};
union var4
{
    char p[4];
    int32_t i;
};
union var2
{
    char p[2];
    int16_t i;
};
union var1
{
    char p;
    int8_t i;
};



static int symblenumber ;//记录符号的表的符号个数
//static int maxsymbolnumber = 4096;
static Elf64_Sym allsymble[4096];//最多4096个
char* strtab;//存储所有变量名
int strstart;//记录strtab的起始地址

//一个表格  对应记录pc 以及其调用的函数
word_t pc_ftrace[256];
char  funcname_ftrace[256][32];
void init_ftrace(char* elf_file);
int callcount = 0;
void log_ftrace(paddr_t addr,bool jarlflag, int rd ,word_t imm, int rs1,word_t src1);




uint64_t Pc_Fetch ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.ysyx_22050550");
  assert(scope);
  svSetScope(scope);
  //printf("No file!!!!\n");
  uint64_t pc = (uint64_t)pc_fetch();
  //cout<<pc<<endl;
  //printf("pc:%lx \n",pc);
  return pc;
}
uint64_t Dnpc_Fetch ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.ysyx_22050550");
  assert(scope);
  svSetScope(scope);
  uint64_t pc = (uint64_t)npc_fetch();
  return pc;
}

uint64_t imm_Fetch ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.ysyx_22050550");
  assert(scope);
  svSetScope(scope);
  uint64_t imm = (uint64_t)imm_fetch();
  return imm;
}
int8_t rs1_Fetch ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.ysyx_22050550");
  assert(scope);
  svSetScope(scope);
  uint64_t rs1 = (uint64_t)rs1_fetch();
  return rs1;
}

int8_t rd_Fetch ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.ysyx_22050550");
  assert(scope);
  svSetScope(scope);
  uint64_t rd = (uint64_t)rd_fetch();
  return rd;
}

uint32_t Instr_Fetch ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.ysyx_22050550");
  assert(scope);
  svSetScope(scope);
  uint32_t inst = instr_fetch();
  return inst;
}

//int64_t instnum = 0;
#ifdef  CONFIG_ITRACE
//itrace 
#define iringbufsize 16
void printiringbuf(int finalinst)
{
  for (int i = 0; i < iringbufsize; i++)
  {
    if (i == finalinst) printf("-->");
    printf("%s\n",iringbuf[i]);
  }
}

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

//int maxinst = 10000;


void instr_tracelog(bool flag){
    Decode s;
    //printf("No file!!!!\n");
    s.pc = Pc_Fetch();
    //printf("pc: %lx\n",s.pc);
    s.dnpc = Dnpc_Fetch();
    //printf("No file!!!!\n");
    FILE *file;
    file = fopen(log_file,"a");
    if (file == NULL) {file = fopen(default_log,"a");}
    char *p = s.logbuf;
    //printf("p :%s logbuf:%s\n",p,s.logbuf);
    //printf("inside exec_once:p :%s, s->snpc: %ld, s->pc: %ld\n",p,s->snpc,s->pc);
    p += snprintf(p, sizeof(s.logbuf), FMT_WORD ":", s.pc);
    //printf("size:%ld\n",s.logbuf + sizeof(s.logbuf) - p);
    //printf("p: %saaa\n",s.logbuf);
    int ilen = 4;
    int i;
    uint32_t instr = Instr_Fetch();
    uint8_t *inst = (uint8_t *)&instr;
    for (i = ilen - 1; i >= 0; i --) {
      //printf("inside exec_once:%s\n",p);
      p += snprintf(p, 4, " %02x", inst[i]);
      //printf("size:%ld\n",s.logbuf + sizeof(s.logbuf) - p);
      //printf("i:%d inst:%02x\n",i,inst[i]);
    }
    //写进去的同时 p作为指针也+了
    //printf("%s\n",s.logbuf);
    //printf("inside exec_once:%s\n",p);
    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
    //printf("inside exec_once:%s\n",p);
    //int size = s.logbuf + sizeof(s.logbuf) - p;
    //printf("size:%ld\n",s.logbuf + sizeof(s.logbuf) - p);
    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(p,  s.logbuf + sizeof(s.logbuf) - p,s.pc, inst , ilen);
    if(flag)printf("%s\n",s.logbuf);
    //if(TRACE_CONDITION(instnum,ITRACE_BEGIN,ITRACE_END))
    fprintf(file,"%s\n",s.logbuf);
    //instnum++;
    fclose(file);
    strcpy(iringbuf[iringbufind],s.logbuf);
    iringbufind=(iringbufind+1)%iringbufsize;
}   



//ftrace 



void init_ftrace(char* elf_file)
{
  for (int i = 0; i < 256; i++)
  {
    pc_ftrace[i] = 0;
    //funcname_ftrace[i] = {'\0'};
  }
  
  //创建ftrace写入文件
  FILE *file;
  file = fopen(elf_logfile,"w+");
  //char str[] = "mtrace file ";
  if (file == NULL)
  {
    //printf("Fail to creat mtracefile!\n");
    file = fopen(defaultelf_logfile,"w+");
    if(file == NULL)
    {
      printf("No elf logfile\n");return;
    }
  }
  else printf("ftrace log file initial\n");

	// 打开文件
	FILE *fp;
	fp = fopen(elf_file, "r");
	if (NULL == fp)
	{
		printf("fail to open the file");
		exit(0);
	}
  else printf("elf file opened\n");

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
		printf("\fail to read section\n");
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
  for (int i = 0; i < elf_head.e_shnum; i++)
	{
		temp = shstrtab;
		temp = temp + shdr[i].sh_name;
    if (strcmp(temp, ".strtab") != 0) continue;//该section名称 
    uint8_t *sign_data=(uint8_t*)malloc(sizeof(uint8_t)*shdr[i].sh_size);
    strtab = (char*)malloc(sizeof(char)*shdr[i].sh_size);
		// 依据此段在文件中的偏移读取出
		fseek(fp, shdr[i].sh_offset, SEEK_SET);
		if(fread(sign_data, sizeof(uint8_t)*shdr[i].sh_size, 1, fp)==1);
    //将strtab中的内容存进strtab
    //int len = 0;
    uint8_t *p = sign_data;
    char *pstr = strtab;
    int j = 0;
		for (j=0; j<shdr[i].sh_size; j ++)
		{
      *pstr = *p;
      pstr++;
      p++;
    }
	}
  return;
}
//int maxftrace = 10000;
int64_t ftracecount = 0;
void log_ftrace(paddr_t addr,bool jarlflag, int rd ,word_t imm, int rs1,word_t src1)
{
  if (!TRACE_CONDITION(ftracecount,FTRACE_BEGIN,FTRACE_END)) {return;}
  FILE *file;
  file = fopen(elf_logfile,"a");
  if (file == NULL) {
    file = fopen(defaultelf_logfile,"a");
  }
  
  //这一部分读取与init_trace内部一样
  //下面通过strtab表的地址与name来
  bool retflag = jarlflag&(rd==0)&(rs1==1)&(imm==0);
  //printf("pc:%lx: Addr:%x func [%s] rd:%d rs1:%d imm:%ld jarl:%d\n",cpu.pc,addr,funcname,rd,rs1,imm,jarlflag);
  if (retflag)
  {
    //printf("pc:%lx:\n",cpu_gpr[32]);
    //ret返回的是调用函数的后一个Pc地址
    vaddr_t realpc = src1-0x4;
    //读pc处的指令
    int tableind = 0;
    for (int i = 0; i < 256; i++)
    {
      if (realpc == pc_ftrace[i])
      {
        tableind = i;
        break;
      }
    }
    int len = 0;
    char *p;
    for (p=funcname_ftrace[tableind]; *p!='\0'; p++)
    {
      //printf("%c",*p);
      len++;
    }
    //printf("\n");
    char funcname [len+1];
    char* newp = funcname_ftrace[tableind];
    strncpy(funcname,newp,len);
    funcname[len] = '\0';
    callcount--;
    uint64_t localpc = Pc_Fetch();
    if (!TRACE_CONDITION(ftracecount,FTRACE_BEGIN,FTRACE_END)) {ftracecount++;fclose(file); return;}
    ftracecount++;
    fprintf(file,"pc:%lx:\t funpc:%lx\t",localpc,realpc);
    for (int i = 0;i<callcount;i++)  fprintf(file," ");
    fprintf(file,"ret  [%s]\n",funcname);
    //ret[%s] \n
    //fprintf(file,"pc:%lx: Addr:%x ret \n",cpu.pc,addr);
  }
  else
  {
    for (int j = 0; j < symblenumber; j++)
    {
      if (allsymble[j].st_value!=addr) continue;
      //uint8_t *p = sign_data;
      //int len = 0;
      //看elf里面 info 第一位是bind 第二位是type
      //printf("info:%02x\n",allsymble[j].st_info);
      if((allsymble[j].st_info&0x0f) == STT_FUNC)
      {
        
        int len = 0;
        int ind = allsymble[j].st_name;
        char* start = strtab;
        //p = p + ind;
        char *p;
        for (p=start+ind; *p!='\0'; p++)
        {
          //printf("%c",*p);
          len++;
        }
        //printf("\n");
        char funcname [len+1];
        char* newp = (char*)(start)+ind;
        strncpy(funcname,newp,len);
        funcname[len] = '\0';
        bool pccallflag = 0;
        word_t localpc = Pc_Fetch();
        for (int i = 0; i < 256; i++)
        {
          //说明该函数已经调用过了
          if (pc_ftrace[i]==localpc) pccallflag=1;
        }
        int addind = 0;
        for (int i = 0; i < 256; i++)
        {
          if (pc_ftrace[i]==0) 
          {
            //加入的索引值
            addind = i;
            break;
          }
        }
        if (!pccallflag)
        {
          pc_ftrace[addind] = localpc;
          //printf("kkk\n");
          /*
          char *funcp = funcname_ftrace[addind];
          for (char* namep =start+ind; *namep !='\0'; namep++)
          {
            *funcp = *namep;
            funcp++;
          }
          
          *funcp = '\0';*/
          strncpy(funcname_ftrace[addind],funcname,len);
        }
        if (!TRACE_CONDITION(ftracecount,FTRACE_BEGIN,FTRACE_END)) {ftracecount++;fclose(file); return;}
        ftracecount++;
        //printf(" %s",funcname); printf("\n");
        //printf("pc:%lx: Addr:%x func [%s] rd:%d rs1:%d imm:%ld jarl:%d\n",cpu.pc,addr,funcname,rd,rs1,imm,jarlflag);
        fprintf(file,"pc:%lx:\t Addr:%lx\t",localpc,addr);
        //call [%s]\n
        for (int i = 0;i<callcount;i++)  fprintf(file," ");
        fprintf(file,"call [%s]\n",funcname);
        callcount++;
      }
    } 
  } 
  fclose(file);  
}

#endif
#ifdef CONFIG_MTRACE
char mtracefilepath[] = "./build/mtrace-log.txt";
char mtracelog[128];
void init_mtrace()
{
  FILE *file;
  if (elf_file == NULL)  file = fopen(mtracefilepath,"w+");
  else {
    char tempelffile[128];
    //printf("hhh:%s\n",elf_file);
    strcpy(tempelffile,elf_file);
    //printf("hhh: %s\n",tempelffile);
    char *dirname = strrchr(tempelffile,'/');
    if(dirname){
      *(dirname + 1) = 0;
    }
    //printf("%s\n",tempelffile);
    strcat(tempelffile,"mtrace-log.txt");
    printf("%s\n",tempelffile);
    strcpy(mtracelog,tempelffile);
    file = fopen(mtracelog,"w+");
  }
  //file = fopen(mtracefilepath,"w+");
  //char str[] = "mtrace file ";
  if (file == NULL)
  {
    file = fopen(mtracefilepath,"w+");
    //printf("Fail to creat mtracefile!\n");
  }
  
  //fwrite(str,sizeof(str),1,file);
  //assert(file!=NULL);
  return;
}
int64_t mtracecount = 0;
//int maxmtrace = 10000;
void mtrace(bool wrrd,paddr_t addr, int len,word_t data)
{
  if (!TRACE_CONDITION(mtracecount,MTRACE_BEGIN,MTRACE_END)){return;}
  FILE *file;
  if (elf_file == NULL) file = fopen(mtracefilepath,"a");
  else file = fopen(mtracelog,"a");
  if (file == NULL)file = fopen(mtracefilepath,"a");
  char wrflag;
  //1是写 0是读
  wrflag = wrrd?'w':'r';
  if (file == NULL) {printf("No file!!!!\n");}
  if (!TRACE_CONDITION(mtracecount,MTRACE_BEGIN,MTRACE_END)) {mtracecount++;fclose(file); return;}
  mtracecount++;
  fprintf(file,"pc:%lx: Addr:%lx len:%x %c value:%lx\n",cpu_gpr[32],addr,len,wrflag,data);
  //printf("pc:%lx Addr:%x len:%x %c value:%lx\n",cpu.pc,addr,len,wrflag,data);
  fclose(file); 
}


#endif



#endif
