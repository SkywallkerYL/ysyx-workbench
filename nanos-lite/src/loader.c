#include <proc.h>
#include <elf.h>
#include "fs.h"
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
#if defined(__ISA_AM_NATIVE__) || defined(__ISA_X86_64__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE panic("Unknown type")
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#elif defined(__ISA_MIPS32__)
# define EXPECT_TYPE panic("Unknown type")
#else
# error Unsupported ISA
#endif
size_t ramdisk_read(void *buf, size_t offset, size_t len);
int fs_open(const char *pathname, int flags, int mode);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);
//extern Finfo file_table[] ;

#define MagicNumber  0x7f454c46020101000000000000000000

/*
nano slite这里是通过编译把程序的ramdisk包含进来，即resources.S
然后通过uload 跳转到程序的入口
*/



static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  // 多个文件要根据文件名字确定read的起始地址
  int fd = fs_open(filename,0,0);
  assert(fd >=2); 
  //assert((fd != FD_STDIN)&&( fd != FD_STDOUT) && (fd != FD_STDERR));
  size_t fileoffset = file_table[fd].disk_offset; 
  Log("file %s offset:%d",file_table[fd].name,fileoffset);
  
  Elf_Ehdr elf_head;
  //这种方式读取文件的范式
  //首先设置偏移量，然后读取
  //记住read读取的位置是disk_offset+open_offset,不用再加disk了
  //lseek也是，设置的是相对disk_offset的相对值
  assert(fs_lseek(fd, 0, SEEK_SET) >= 0);
  assert(fs_read(fd,&elf_head,sizeof(Elf_Ehdr)) >= 0);
  //ramdisk_read(&elf_head, fileoffset, sizeof(Elf_Ehdr));
  //检查MagicNumber
  //printf("0x%x\n",*(uint32_t *)elf_head.e_ident);
  //序号要反转一下0x7f454c46 -> 0x464C457F
  assert(*(uint32_t *)elf_head.e_ident ==  0x464C457F);//0x7f E L F
  //检查架构
  assert(elf_head.e_machine == EXPECT_TYPE );
  //elf_head.e_phoff 记录了program的偏移，后边的实现都是参考trace.h
  Elf_Phdr *elf_phdr = (Elf_Phdr*)malloc(sizeof(Elf_Phdr) * elf_head.e_phnum);
  //size_t prooffset = elf_head.e_phoff;
  //Log("e_phoff %x",elf_head.e_phoff);
  assert(fs_lseek(fd, elf_head.e_phoff, SEEK_SET) >= 0);
  assert(fs_read(fd,elf_phdr,sizeof(Elf_Phdr) * elf_head.e_phnum) == sizeof(Elf_Phdr) * elf_head.e_phnum);
  //ramdisk_read(elf_phdr, elf_head.e_phoff, sizeof(Elf_Phdr) * elf_head.e_phnum);
  for (int i = 0; i < elf_head.e_phnum; i++)
  {
    //printf("hhhhhh%08x\n",111);
    if(elf_phdr[i].p_type != PT_LOAD) continue;
    //printf("%d\n",i);
    char * buf_malloc = (char *)malloc(elf_phdr[i].p_filesz * sizeof(char) + 1);
    //printf("offset:%08x\n",elf_phdr[i].p_offset);
    //修改之后不直接用ramdisk_read,而是用fs_read();
    assert(fs_lseek(fd, elf_phdr[i].p_offset, SEEK_SET) >= 0);
    assert(fs_read(fd,buf_malloc,elf_phdr[i].p_filesz ) == elf_phdr[i].p_filesz);
    //ramdisk_read(buf_malloc, elf_phdr[i].p_offset,  elf_phdr[i].p_filesz );
    memcpy((void *)elf_phdr[i].p_vaddr, buf_malloc, elf_phdr[i].p_filesz );
    memset((void *)(elf_phdr[i].p_vaddr + elf_phdr[i].p_filesz), 0, elf_phdr[i].p_memsz - elf_phdr[i].p_filesz);
    free(buf_malloc);
  }

  assert(fs_close(fd) == 0);
  //printf("hhhhhh\n");
  return elf_head.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
  //printf("aaaa\n");
}

