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
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

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
char mtracefilepath[] = "/home/yangli/ysyx-workbench/nemu/build/mtrace-log.txt";
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
char elf_logfile[] = "/home/yangli/ysyx-workbench/nemu/build/ftrace-log.txt";
char* strtab;//存储所有变量名
int strstart;//记录strtab的起始地址
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

void log_ftrace(paddr_t addr)
{
  FILE *file;
  file = fopen(elf_logfile,"a");
  if (file == NULL) {printf("No file!!!!\n");}
  //这一部分读取与init_trace内部一样
  //下面通过strtab表的地址与name来
  for (size_t j = 0; j < symblenumber; j++)
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
        len++;
      }
      char funcname [len+1];
      char* newp = (char*)(start);
      strncpy(funcname,newp,len);
      funcname[len] = '\0';
      fprintf(file,"pc:%lx: Addr:%x call [%s]\n",cpu.pc,addr,funcname);
    }
  }  
  fclose(file);  
}


#endif
word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))){word_t value =pmem_read(addr, len);
#ifdef CONFIG_MTRACE 
mtrace(0,addr,len,value);
log_ftrace(addr);
#endif
return value;}
  IFDEF(CONFIG_DEVICE, word_t value =mmio_read(addr, len); 
#ifdef CONFIG_MTRACE 
mtrace(0,addr,len,value);
log_ftrace(addr);
#endif
  return value);
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); 
#ifdef CONFIG_MTRACE 
  mtrace(1,addr,len,data);
  log_ftrace(addr);
#endif
  return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data);
#ifdef CONFIG_MTRACE
  mtrace(1,addr,len,data); 
  log_ftrace(addr);
#endif
  return);
  out_of_bound(addr);
}
