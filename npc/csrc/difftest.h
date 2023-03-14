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
  extern bool open_difftest;
#endif
bool difftestfail = 0;
extern long IMGSIZE ;
void isa_difftest_attach() {
#ifdef CONFIG_DIFFTEST

  open_difftest = true;
  printf("IMG_SIZE:%ld\n",IMGSIZE);
  ref_difftest_memcpy(RESET_VECTOR, &p_mem, IMGSIZE, DIFFTEST_TO_REF);
  ref_difftest_regcpy(cpu_gpr, DIFFTEST_TO_REF);
#endif
}
void isa_difftest_detach() {
#ifdef CONFIG_DIFFTEST
  open_difftest = false;
#endif
}
#ifdef CONFIG_DIFFTEST

bool is_skip_ref = false;
int skip_dut_nr_inst = 0;
extern uint64_t localpc  ;
extern uint32_t localinst;
extern uint64_t localnpc ;
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if (ref_r->pc!=pc) {Log("%s ref_npc: 0x%016lx npc_npc:0x%016lx ",ANSI_FMT("PC DIIF", ANSI_FG_RED) ,ref_r->pc,pc);return false;}
  bool regflag = true;
  for (int i = 0; i < 32; i++)
  {
    if (ref_r->gpr[i]!=cpu_gpr[i])
    {
      regflag = false;
      Log("%s reg:%s ref: 0x%016lx npc:0x%016lx ",ANSI_FMT("REG DIIF", ANSI_FG_RED),regs[i],ref_r->gpr[i],cpu_gpr[i]);
      //return false;
    }
    
  }
  if (ref_r->mepc !=cpu_gpr[33]){
      Log("%s mepc ref:%08lx npc:%08lx nextpc:%08lx ",ANSI_FMT("MEPC DIIF", ANSI_FG_RED),ref_r->mepc,cpu_gpr[33],pc);
      //printf("mepc ref:%08lx npc:%08lx nextpc:%08lx\n",ref_r->mepc,cpu_gpr[33],pc);
      regflag = false;
  }
  if (ref_r->mcause !=cpu_gpr[34]){
      Log("%s mcause ref:%08lx npc:%08lx nextpc:%08lx ",ANSI_FMT("MCAUSE DIIF", ANSI_FG_RED),ref_r->mcause,cpu_gpr[34],pc);
      //printf("mcause ref:%08lx npc:%08lx nextpc:%08lx\n",ref_r->mcause,cpu_gpr[34],pc);
      regflag = false;
  }
  if (ref_r->mtvec !=cpu_gpr[35]){
      Log("%s mtvec ref:%08lx npc:%08lx nextpc:%08lx ",ANSI_FMT("MTVEC DIIF", ANSI_FG_RED),ref_r->mtvec ,cpu_gpr[35],pc);
      //printf("mtvec ref:%08lx npc:%08lx nextpc:%08lx\n",ref_r->mtvec ,cpu_gpr[35],pc);
      regflag = false;
  }
  if (ref_r->mstatus !=cpu_gpr[36]){
      Log("%s mstatus ref:%08lx npc:%08lx nextpc:%08lx ",ANSI_FMT("MSTATUS DIIF", ANSI_FG_RED),ref_r->mstatus,cpu_gpr[36],pc);
      //printf("mstatus ref:%08lx npc:%08lx nextpc:%08lx\n",ref_r->mstatus,cpu_gpr[36],pc);
      regflag = false;
  }
  if (ref_r->mie !=cpu_gpr[37]){
      Log("%s mie ref:%08lx npc:%08lx nextpc:%08lx ",ANSI_FMT("MIE DIIF", ANSI_FG_RED),ref_r->mie,cpu_gpr[37],pc);
      //printf("mie ref:%08lx npc:%08lx nextpc:%08lx\n",ref_r->mie,cpu_gpr[37],pc);
      regflag = false;
  }
  if (ref_r->mip !=cpu_gpr[38]){
      Log("%s mip ref:%08lx npc:%08lx nextpc:%08lx ",ANSI_FMT("MIP DIIF", ANSI_FG_RED),ref_r->mip,cpu_gpr[38],pc);
      //printf("mip ref:%08lx npc:%08lx nextpc:%08lx\n",ref_r->mip,cpu_gpr[38],pc);
      regflag = false;
  }
  if(!regflag) {
    Log("Difftest Fail for npc at :%08lx inst:%08x  npc:%08lx",localpc,localinst,localnpc);
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
  for (int i = 0; i < 32; i++)
  {
    refcpu.gpr[i] = cpu_gpr[i];
  }
  refcpu.pc = CONFIG_MBASE;//0x80000000;
  refcpu.mepc = 0;//cpu_gpr[33];
  refcpu.mcause = 0;//cpu_gpr[34];
  refcpu.mtvec = 0;//cpu_gpr[35];
  refcpu.mstatus = 0xa00001800;//cpu_gpr[36];
  refcpu.mie = 0;
  refcpu.mip = 0;
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
  Log("nemu memcpy init");
  ref_difftest_regcpy(&refcpu, DIFFTEST_TO_REF);
}
//void assert_fail_msg();

static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    difftestfail = 1;
    npc_state.halt_pc = pc;
    //printf("Not same!!!\n");
    //assert_fail_msg();
    //isa_reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  CPU_state ref_r;
  //CPU_state npc_r;
  //printf("pc: 0x%016x \n",cpu_gpr[32]);
  //if (top->io_SkipRef ) {
    //difftest_skip_ref();
    //printf("pc: hhh\n");
  //}
  //printf("pc:%08lx npc:%08lx\n",pc,npc);
  //printf("skip_dut_nr_inst:%d \n",skip_dut_nr_inst);
  //这一段可能也要移出去，目前还没发现这个用途，暂时不动
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
  //if (is_skip_ref) {
    //这里可能有问题，还没搞明白
    //printf("npc_pc: 0x%016x \n",cpu_gpr[32]);
    //ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    //for (size_t i = 0; i < 32; i++)
    //{
      //npc_r.gpr[i]= cpu_gpr[i];
    //}
    //这里应该把npc拷贝给ref，因为当前指令要跳转的话就是目前的指令跳过了
    //这是由仿真环境决定的，仿真环境取到的pc是cpu真正的pc，
    //对单周期cpu而言，该pc指令对应的寄存器堆的写回是在下一个周期完成的
    //而nemu  在该pc指令执行后，寄存器等也写入完成了,pc更新到下一个,但实际上下一个pc还未执行.
    //而对于npc来说 更新后，pc也是下一个，regfile也是该条指令对应的，但实际情况是，此时的其他操作已经完成了。
    //这样子正好可以和nemu对上。即pc和nemu执行后的pc 以及寄存器的状态都对应。
    //但如果识别到当前指令要跳过，则应该在当前周期更新后，再将寄存器和pc等拷贝给nemu
    //这件事不应该在这里面做，应该在外层执行时做。
    //npc_r.pc = cpu_gpr[32];
    // to skip the checking of an instruction, just copy the reg state to reference design
    //ref_difftest_regcpy(&npc_r, DIFFTEST_TO_REF);
    //is_skip_ref = false;
    //return;
  //}
  //Log("ref_pc: 0x%016lx npc_pc:0x%016lx ",ref_r->pc,pc);
  //printf("hhhhhh\n");
  //uint64_t pcnow = Pc_Fetch();
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  //printf("before exe ref_r_pc:%08lx \n",ref_r.pc);
  //printf("npc_pc:%08lx \n",pcnow);
   //Log("ref_pc: 0x%016lx npc_pc:0x%016lx ",ref_r.pc,pc);
  ref_difftest_exec(1);
  //printf("ref_r_pc:%08lx \n",ref_r.pc);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  //printf("ref_r_pc:%08lx \n",ref_r.pc);
  //Log("ref_pc: 0x%016lx npc_pc:0x%016lx ",ref_r.pc,pcnow);
  //printf("ref_r_pc:%08lx \n",ref_r.pc);
  //这里要换成Npc 
  //因为nemu那边执行完了 进下一个周期 相当于pc自动加了。。。即这个pc不是当前指令的pc了
  //npc这边比较的时候以WBU为准，wbu进下一个周期，寄存器写入了，，但是由于IFU取指和中间阻塞等原因，pc是不会加的。就默认
  //其可以跳转到Npc,这样子就用npc了。。
  checkregs(&ref_r, npc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif



#endif