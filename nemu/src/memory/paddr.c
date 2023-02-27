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
#include <./cpu/cpu.h>
#include <./cpu/ifetch.h>
#include <./cpu/decode.h>
#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#include <stdio.h>
#include <elf.h>
#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
uint8_t *cache_pmem = &pmem[0];
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }
//#define CACHE_CHECK 1
#ifndef CONFIG_CACHE
static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}
static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}
#else
#ifdef CACHE_CHECK


#endif
word_t cache_read(uintptr_t addr,int len);
void cache_write(uintptr_t addr, word_t data, int len);
#endif
static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}
#ifdef CONFIG_MTRACE
int mtracenum= 0;
int maxmtrace = 10000;
char mtracefilepath[] = "./mtrace-log.txt";
void init_mtrace()
{
  FILE *file;
  file = fopen(mtracefilepath,"w+");
  //char str[] = "mtrace file ";
  if (file == NULL)
  {
    printf("Fail to creat mtracefile!\n");
  }
  
  //fwrite(str,sizeof(str),1,file);
  //assert(file!=NULL);
  return;
}
void mtrace(bool wrrd,paddr_t addr, int len,word_t data)
{
  mtracenum++;
  if(mtracenum > maxmtrace) return;
  FILE *file;
  file = fopen(mtracefilepath,"a");
  char wrflag;
  //1是写 0是读
  wrflag = wrrd?'w':'r';
  if (file == NULL) {printf("No file!!!!\n");}
  fprintf(file,"pc:%lx: Addr:%x len:%x %c value:%lx\n",cpu.pc,addr,len,wrflag,data);
  //printf("pc:%lx Addr:%x len:%x %c value:%lx\n",cpu.pc,addr,len,wrflag,data);
  fclose(file); 
}

static int symblenumber ;//记录符号的表的符号个数
//static int maxsymbolnumber = 4096;
static Elf64_Sym allsymble[4096];//最多4096个
char elf_logfile[] = "./ftrace-log.txt";
char* strtab;//存储所有变量名
int strstart;//记录strtab的起始地址

//一个表格  对应记录pc 以及其调用的函数
word_t pc_ftrace[256];
char  funcname_ftrace[256][32];
void init_ftrace(char* elf_file)
{
  for (size_t i = 0; i < 256; i++)
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
    printf("Fail to creat mtracefile!\n");
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
    /*
    for (size_t j = 0; j < symblenumber; j++)
    {
      //if (allsymble[j].st_value!=addr) continue;
      uint8_t *p = sign_data;
      int ind = allsymble[j].st_name;
      //p = p + ind;
      for (p = p + ind; *p!='\0'; p++)
      {
        strtab[ind] = *p;
        ind++;
      }
      strtab[ind] = '\0';
    }    
    */
	}
  return;
}
int ftracenum = 0;
int maxftrace = 10000;
int callcount = 0;
void log_ftrace(paddr_t addr,bool jarlflag, int rd ,word_t imm, int rs1,word_t src1)
{
  FILE *file;
  file = fopen(elf_logfile,"a");
  if(ftracenum>maxftrace) return;
  if (file == NULL) {printf("fracenum:%d No file %s!!!!\n",ftracenum,elf_logfile);}
  //这一部分读取与init_trace内部一样
  //下面通过strtab表的地址与name来
  bool retflag = jarlflag&(rd==0)&(rs1==1)&(imm==0);
  //printf("pc:%lx: Addr:%x func [%s] rd:%d rs1:%d imm:%ld jarl:%d\n",cpu.pc,addr,funcname,rd,rs1,imm,jarlflag);
  if (retflag)
  {
    ftracenum++;
    if(ftracenum>maxftrace) return;
    //ret返回的是调用函数的后一个Pc地址
    vaddr_t realpc = src1-0x4;
    //读pc处的指令
    int tableind = 0;
    for (size_t i = 0; i < 256; i++)
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
    fprintf(file,"pc:%lx:\t funpc:%lx\t",cpu.pc,realpc);
    for (int i = 0;i<callcount;i++)  fprintf(file," ");
    fprintf(file,"ret  [%s]\n",funcname);
    
    //fprintf(file,"pc:%lx: Addr:%x ret \n",cpu.pc,addr);
  }
  else
  {
    for (size_t j = 0; j < symblenumber; j++)
    {
      if (allsymble[j].st_value!=addr) continue;
      //uint8_t *p = sign_data;
      //int len = 0;
      //看elf里面 info 第一位是bind 第二位是type
      //printf("info:%02x\n",allsymble[j].st_info);
      if((allsymble[j].st_info&0x0f) == STT_FUNC)
      {
        ftracenum++;
        if(ftracenum>maxftrace) return;
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
        word_t localpc = cpu.pc;
        for (size_t i = 0; i < 256; i++)
        {
          //说明该函数已经调用过了
          if (pc_ftrace[i]==localpc) pccallflag=1;
        }
        int addind = 0;
        for (size_t i = 0; i < 256; i++)
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
        
        //printf(" %s",funcname); printf("\n");
        //printf("pc:%lx: Addr:%x func [%s] rd:%d rs1:%d imm:%ld jarl:%d\n",cpu.pc,addr,funcname,rd,rs1,imm,jarlflag);
        //fprintf(file,"pc:%lx: Addr:%x call [%s]\n",localpc,addr,funcname);
        fprintf(file,"pc:%lx:\t Addr:%x\t",localpc,addr);
        for (int i = 0;i<callcount;i++)  fprintf(file," ");
        fprintf(file,"call [%s]\n",funcname);
        callcount++;
      }
    } 
  } 
  fclose(file);  
}


#endif
word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))){
#ifndef CONFIG_CACHE
    word_t value =pmem_read(addr, len);
#else
    word_t value = cache_read(addr-CONFIG_MBASE,len);
    //word_t value2 = pmem_read(addr, len);
    //if(len==8)printf("len:%d cache:%lx cpu:%lx\n",len,value,value2);
    //assert(value == value2);
#endif
#ifdef CONFIG_MTRACE 
mtrace(0,addr,len,value);
//log_ftrace(value);
#endif
    return value;
  }
  IFDEF(CONFIG_DEVICE, word_t value =mmio_read(addr, len); 
#ifdef CONFIG_MTRACE 
mtrace(0,addr,len,value);
//log_ftrace(value);
#endif
  return value);
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { 
#ifndef CONFIG_CACHE
    pmem_write(addr, len, data);
#else
    cache_write(addr-CONFIG_MBASE,data,len);
#endif
#ifdef CONFIG_MTRACE 
  mtrace(1,addr,len,data);//  log_ftrace(data);
#endif
  return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data);
#ifdef CONFIG_MTRACE
  mtrace(1,addr,len,data); 
//  log_ftrace(data);
#endif
  return);
  out_of_bound(addr);
}


#ifdef CONFIG_ETRACE
int etracenum = 0;
int maxetrace = 10000;
char Etracefilepath[] = "./Etrace-log.txt";
void init_Etrace()
{
  FILE *file;
  file = fopen(Etracefilepath,"w+");
  //char str[] = "mtrace file ";
  if (file == NULL)
  {
    printf("Fail to creat Etracefile!\n");
  }
  
  //fwrite(str,sizeof(str),1,file);
  //assert(file!=NULL);
  return;
}
void Etrace(word_t mstatus, word_t mcause ,word_t mepc, word_t mtvec,bool ecall)
{
  etracenum++;
  if(etracenum>maxetrace) return;
  FILE *file;
  file = fopen(Etracefilepath,"a");
  if (file == NULL) {printf("No file!!!!\n");}
  if (ecall)
  fprintf(file,"mepc:%lx:  ecall mastatus:0x%lx mcause:0x%lx mtvec:%lx\n",mepc,mstatus,mcause,mtvec);
  else 
  fprintf(file,"cpupc:%lx: mret  mastatus:0x%lx mcause:0x%lx mtvec:%lx\n",mepc,mstatus,mcause,mtvec);
  //printf("pc:%lx Addr:%x len:%x %c value:%lx\n",cpu.pc,addr,len,wrflag,data);
  fclose(file); 
}
#endif
#ifdef CONFIG_CACHE
#include <inttypes.h>
#include <malloc.h>

#define exp2(x) (1 << (x))
#define mask_with_len(x) (exp2(x) - 1)

#define BLOCK_WIDTH  6  // 64B  (Bytes)
#define BLOCK_SIZE exp2(BLOCK_WIDTH)
//typedef uint8_t bool;
#define true 1
#define false 0
//extern uint8_t cache_pmem;
void mem_read(uintptr_t block_num, uint8_t *buf){
  memcpy(buf, cache_pmem + (block_num << BLOCK_WIDTH), BLOCK_SIZE);
}
void mem_write(uintptr_t block_num, const uint8_t *buf){
  memcpy(cache_pmem + (block_num << BLOCK_WIDTH), buf, BLOCK_SIZE);
}

static uint64_t cycle_cnt = 0;

void cycle_increase(int n) { cycle_cnt += n; }

// TODO: implement the following functions
// physical_addr
//     tag      |  line_index(ceil_Log2(line_width))  or group | offset in block(block_width)
// a cache line 
// valid | dirty | tag                                            | data area
//   1   |  0    | addr>>(line_width(group_width)+block_width)    | data at addr(block_width-1：0)
//uint64_t  read_hit,read_count = 0;
//uint64_t  write_hit, write_count = 0;
struct CACHE
{
  bool valid ;
  bool dirty ;
  uintptr_t tag;
  uint8_t data[BLOCK_SIZE];
};
static struct CACHE *cache;

static uint32_t group_width,size_width,assoc_width,line_width;
static uintptr_t tag_mask,group_mask,block_mask;
static uintptr_t get_tag(uintptr_t addr){
  return (addr&tag_mask) >> (group_width+BLOCK_WIDTH);
}
static uintptr_t get_group(uintptr_t addr){
  return (addr&group_mask) >> (BLOCK_WIDTH);
}
static uintptr_t get_block(uintptr_t addr){
  return (addr&block_mask);
}
static uintptr_t get_blocknum(uintptr_t addr){
  return (addr&(~(block_mask)))>>BLOCK_WIDTH;
}
/**/
static uintptr_t get_blocknum_cache(uintptr_t tag,uint32_t group){
  return (tag<<group_width)| group;
}

//get the line in group for cache for an addr
//change it to the i th cache
// i = group*associati+line 
static int cache_line_addr(uintptr_t addr,int line){
  return (get_group(addr)<<assoc_width)+line;
}
//读写的对地址操作的最小单位是4Bytes 要把最低两位给除掉
//这里是和cpu统一
static word_t getlenBytes(uintptr_t addr,int index,int len){
  uintptr_t block_addr = get_block(addr);
  switch (len)
  {
  case 1: return *(uint8_t *)&(cache[index].data[block_addr]);
    break;
  case 2: return *(uint16_t *)&(cache[index].data[block_addr]);
    break; 
  case 4: return *(uint32_t *)&(cache[index].data[block_addr]);
    break;
  case 8:return *(uint64_t *)&(cache[index].data[block_addr]);
    break;
  default: return 0;
    break;
  }
  //return *(uint32_t *)&(cache[index].data[block_addr&~0x3]);
}
static void writelenBytes(struct CACHE* temp,intptr_t addr,word_t data,int len){
  uintptr_t block_addr = get_block(addr);
  void *cache_data = (void *)&(temp->data[block_addr]);
  switch (len)
  {
  case 1 : *(uint8_t *) cache_data = data;return ;
    break;
  case 2 : *(uint16_t *) cache_data = data;return ;
    break;
  case 4 : *(uint32_t *) cache_data = data;return ;
    break;
  case 8 : *(uint64_t *) cache_data = data;return ;
    break;
  default: assert(0);
    break;
  }
  //printf("Waddr:%lx write:%x\n",addr,*(cache_data) );
  return ;
}
static int ramdchoose(int size){
  return rand()%size;
}
//cache write back
static void wirte_cache(struct CACHE* temp,intptr_t addr){
  //mem_write(get_blocknum(addr),(temp->data));
  //这里是没有命中的写回，所以是把cache内的内容写回
  //根据tag 以及组号复原出块号
  //组号cache没有记录，通过addr得到
  mem_write(get_blocknum_cache(temp->tag,get_group(addr)),(temp->data));
  temp->dirty = 0;
  temp->valid = 1;
}
//cache read from Mem
static void read_cache(struct CACHE* temp,intptr_t addr){
  //没有命中的情况下，将内存中的值读到cache中
  mem_read(get_blocknum(addr),(temp->data));
  temp->valid = 1;
  temp->dirty = 0;
  temp->tag = get_tag(addr);
}
//从cache中读出 addr地址处的len字节数据
//若确实，先从内存中读
word_t cache_read(uintptr_t addr,int len) {
  //read_count++;
  int group_base = cache_line_addr(addr,0);
  for (int i = group_base; i < group_base+exp2(assoc_width); i++)
  {
    if (cache[i].tag == get_tag(addr))
    {
      if (cache[i].valid)
      {
        //hit
        //read_hit++;
        //printf("hit cacheline:%d\n",i);
        return getlenBytes(addr,i,len);
      }
    }
  }
  //Not hit find it in Mem
  //ramdon replace
  int line = ramdchoose(exp2(assoc_width));
  struct CACHE *cache_p = &cache[group_base+line];
  //dirty 写回
  if(cache_p->dirty&&cache_p->valid) {
    //printf("dirty cacheline:%d\n",group_base+line);
    wirte_cache(cache_p,addr);
  }
  //
  //printf("no hit cacheline:%d\n",group_base+line);
  read_cache(cache_p,addr);
  /*
  for (size_t i = 0; i < BLOCK_SIZE; i++)
  {
    assert(cache_p->data[i] == cache[group_base+line].data[i]);
  }
  */
  //assert(cache_p->data[0] == cache[group_base+line].data[0]);
  return getlenBytes(addr,cache_line_addr(addr,line),len);
  //return 0;
}
// 往 cache 中 addr 地址所属的块写入数据 data，写掩码为 wmask
// 例如当 wmask 为 0xff 时，只写入低8比特
// 若缺失，需要从先内存中读入数据
void cache_write(uintptr_t addr, word_t data, int len) {
  //write_count++;
  int group_base = cache_line_addr(addr,0);
  
  for (int i = group_base; i < group_base+exp2(assoc_width); i++)
  {
    if (cache[i].tag == get_tag(addr))
    {
      if (cache[i].valid)
      {
        //hit
        //write_hit++;
        //printf("hit dirty cacheline:%d\n",i);
        writelenBytes(&cache[i],addr,data,len);
        cache[i].dirty = true;
        return;
      }
    }
  }
  //No hit 
  int line = ramdchoose(exp2(assoc_width));
  struct CACHE *cache_p = &cache[group_base+line];
  //如果是藏的，先写回内存
  if(cache_p->dirty && cache_p->valid) {
    wirte_cache(cache_p,addr);
    //printf("No hit write\n");
  }
  read_cache(cache_p,addr);
  writelenBytes(cache_p,addr,data,len);
  cache_p->dirty = true;
  //printf("No hit dirty cacheline:%d\n",group_base+line);
  return;
}
// 初始化一个数据大小为 2^total_size_width B，关联度为 2^associativity_width 的 cache
// 例如 init_cache(14, 2) 将初始化一个 16KB，4 路组相联的cache
// cache 数据区·提供2^c 行   划分成2^q组  q<c   一个组里有2^s = 2^(c-q)行  即2^s路组相连
// [m-q  | q   |    低b位 ]
// [tag  |组号  |  块内地址 ] // 组号可以缺省
// B = q+s+b  // 组数+路数+块大小 = 总大小
// 一行cache的位数 m-q+b  
// q = c - s    c = B-b
/*
  //行 
  valid  |  dirty  |  M>>(g+b) | data(block_size)
*/
//其实说的cache的大小 没有包括 valid 和dirty 和tag位占的，只有data*q*s
// 将所有 valid bit 置为无效即可
void init_cache(int total_size_width, int associativity_width) {
  //首先确定cache参数
  size_width = total_size_width;
  assoc_width = associativity_width;
  line_width = total_size_width - BLOCK_WIDTH;
  group_width = total_size_width - BLOCK_WIDTH - associativity_width;
  block_mask = mask_with_len(BLOCK_WIDTH);
  group_mask = mask_with_len(group_width) << BLOCK_WIDTH;
  tag_mask   = ~mask_with_len(group_width+BLOCK_WIDTH);
  //分配cache;
  cache = (struct CACHE *)malloc(sizeof(struct CACHE)*exp2(total_size_width - BLOCK_WIDTH));
  //printf("aaaaa\n");
  assert(cache);
  for (size_t i = 0; i < exp2(total_size_width - BLOCK_WIDTH); i++)
  {
    cache[i].valid = 0;
    cache[i].dirty = 0;
    for (size_t j = 0; j < BLOCK_SIZE; j++)
    {
      cache[i].data[j] = 0x00;
    }
  }
  //printf("aaaaa\n");
  return;
}

void display_statistic(void) {
}
#endif