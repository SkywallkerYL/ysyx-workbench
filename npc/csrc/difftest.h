#ifndef DIFFTEST_H
#define DIFFTEST_H


#include <dlfcn.h>

#include "npc-exec.h"
#include "common.h"
#include "state.h"
#include "npcsdb.h"
#include "trace.h"
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }
uint8_t* pmembase(){
  return pmem;
}

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if (ref_r->pc!=pc) {Log("%s ref_pc: 0x%016lx npc_pc:0x%016lx ",ANSI_FMT("PC DIIF", ANSI_FG_RED) ,ref_r->pc,pc);return false;}
  bool regflag = true;
  for (size_t i = 0; i < 32; i++)
  {
    if (ref_r->gpr[i]!=cpu_gpr[i])
    {
      regflag = false;
      Log("%s reg:%s ref: 0x%016lx npc:0x%016lx ",ANSI_FMT("REG DIIF", ANSI_FG_RED),regs[i],ref_r->gpr[i],cpu_gpr[i]);
      //return false;
    }
    
  }
  return regflag;
}

void isa_difftest_attach();
// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}
uint64_t Pc_Fetch ();
void init_difftest(char *ref_so_file, long img_size, int port) {


  CPU_state refcpu;
  for (size_t i = 0; i < 32; i++)
  {
    refcpu.gpr[i] = cpu_gpr[i];
  }
  refcpu.pc = CONFIG_MBASE;//0x80000000;
  //printf("0x%08lx\n",refcpu.pc);
  assert(ref_so_file != NULL);
  printf("%s\n",ref_so_file);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint64_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can change the CONFIG_DIFFTEST macro in common.h!", ref_so_file);

  ref_difftest_init(port);
  //Log("nemu difftest init");
  //&top->rootp->RiscvCpu__DOT__M
  //&instr_mem
  //guest_to_host(RESET_VECTOR)
  ref_difftest_memcpy(RESET_VECTOR, (uint8_t *)&p_mem, img_size, DIFFTEST_TO_REF);
  //Log("nemu memcpy init");
  ref_difftest_regcpy(&refcpu, DIFFTEST_TO_REF);
}
void assert_fail_msg();
static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    //printf("Not same!!!\n");
    assert_fail_msg();
    //isa_reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  CPU_state ref_r;
  CPU_state npc_r;
  //printf("pc: 0x%016x \n",cpu_gpr[32]);
  if (top->io_SkipRef && cpu_gpr[32]!=0x00000000) {
    difftest_skip_ref();
    //printf("pc: hhh\n");
  }
  //printf("pc:%08lx npc:%08lx\n",pc,npc);
  //printf("skip_dut_nr_inst:%d \n",skip_dut_nr_inst);
  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    printf("ref_r_pc:%08lx \n",ref_r.pc);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }
  //printf("is_skip_ref:%d \n",is_skip_ref);
  if (is_skip_ref) {
    //这里可能有问题，还没搞明白
    //printf("npc_pc: 0x%016x \n",cpu_gpr[32]);
    //ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    for (size_t i = 0; i < 32; i++)
    {
      npc_r.gpr[i]= cpu_gpr[i];
    }
    npc_r.pc = cpu_gpr[32];
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&npc_r, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }
  //Log("ref_pc: 0x%016lx npc_pc:0x%016lx ",ref_r->pc,pc);
  //printf("hhhhhh\n");
  uint64_t pcnow = Pc_Fetch();
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  printf("before exe ref_r_pc:%08lx \n",ref_r.pc);
  printf("npc_pc:%08lx \n",pcnow);
   //Log("ref_pc: 0x%016lx npc_pc:0x%016lx ",ref_r.pc,pc);
  ref_difftest_exec(1);
  //printf("ref_r_pc:%08lx \n",ref_r.pc);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  printf("ref_r_pc:%08lx \n",ref_r.pc);
  //Log("ref_pc: 0x%016lx npc_pc:0x%016lx ",ref_r.pc,pcnow);
  //printf("ref_r_pc:%08lx \n",ref_r.pc);
  checkregs(&ref_r, pc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif



#endif