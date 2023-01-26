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
  assert(*(uint32_t *)elf_head.e_ident ==  0x7f454c46);
  assert(elf_head.e_machine == EXPECT_TYPE );
  //printf("hhhhhh\n");
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

