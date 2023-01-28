#include <proc.h>
#include <elf.h>

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

#define MagicNumber  0x7f454c46020101000000000000000000
static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  Elf_Ehdr elf_head;
  ramdisk_read(&elf_head, 0, sizeof(Elf_Ehdr));
  //检查MagicNumber
  //printf("0x%x\n",*(uint32_t *)elf_head.e_ident);
  //序号要反转一下0x7f454c46 -> 0x464C457F
  assert(*(uint32_t *)elf_head.e_ident ==  0x464C457F);//0x7f E L F
  //检查架构
  assert(elf_head.e_machine == EXPECT_TYPE );
  //elf_head.e_phoff 记录了program的偏移，后边的实现都是参考trace.h
  Elf_Phdr *elf_phdr = (Elf_Phdr*)malloc(sizeof(Elf_Phdr) * elf_head.e_phnum);
  ramdisk_read(elf_phdr, elf_head.e_phoff, sizeof(Elf_Phdr) * elf_head.e_phnum);
  for (size_t i = 0; i < elf_head.e_phnum; i++)
  {
    //printf("hhhhhh%08x\n",111);
    if(elf_phdr[i].p_type != PT_LOAD) continue;
    //printf("hhhhhh%08x\n",111);
    char * buf_malloc = (char *)malloc(elf_phdr[i].p_filesz * sizeof(char) + 1);
    //printf("offset:%08x\n",elf_phdr[i].p_offset);
    ramdisk_read(buf_malloc, elf_phdr[i].p_offset,  elf_phdr[i].p_filesz );
    memcpy((void *)elf_phdr[i].p_vaddr, buf_malloc, elf_phdr[i].p_filesz );
    memset((void *)(elf_phdr[i].p_vaddr + elf_phdr[i].p_filesz), 0, elf_phdr[i].p_memsz - elf_phdr[i].p_filesz);
    free(buf_malloc);
  }
  
  //printf("hhhhhh\n");
  return elf_head.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
  //printf("aaaa\n");
}

