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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

const char *regs0[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

#define CHECK_CSR
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if (ref_r->pc!=cpu.pc) {printf("refpc:%08lx nemupc:%08lx lastpc:%08lx\n",ref_r->pc,cpu.pc,pc);return false;}
  bool regflag = true;
  for (int i = 0; i < 32; i++)
  {
    //printf("jjjjj\n");
    if (ref_r->gpr[i]!=cpu.gpr[i])
    {
      printf("reg: %s ref:%08lx nemu:%08lx lastpc:%08lx\n",regs0[i],ref_r->gpr[i],cpu.gpr[i],pc);
      //return regflag;
      //printf("mstatus ref:%08lx nemu:%08lx lastpc:%08lx\n",ref_r->mstatus,cpu.mstatus,pc);
      regflag = false;
    }
  }
#ifdef CHECK_CSR
  if (ref_r->mepc !=cpu.mepc){
      printf("mepc ref:%08lx nemu:%08lx lastpc:%08lx\n",ref_r->mepc,cpu.mepc,pc);
      regflag = false;
  }
  if (ref_r->mcause !=cpu.mcause){
      printf("mcause ref:%08lx nemu:%08lx lastpc:%08lx\n",ref_r->mcause,cpu.mcause,pc);
      regflag = false;
  }
  if (ref_r->mtvec !=cpu.mtvec){
      printf("mtvec ref:%08lx nemu:%08lx lastpc:%08lx\n",ref_r->mtvec,cpu.mtvec,pc);
      regflag = false;
  }
  /*
  if (ref_r->mstatus !=cpu.mstatus){
      printf("mstatus ref:%08lx nemu:%08lx lastpc:%08lx\n",ref_r->mstatus,cpu.mstatus,pc);
      regflag = false;
  }
  */
#endif
  return regflag;
}
extern long IMGSIZE ;
#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

/* convert the guest physical address in the guest program to host virtual address in NEMU */

uint8_t* guest_to_host(paddr_t paddr);
#ifdef CONFIG_DIFFTEST
  extern bool open_difftest;
#endif
void isa_difftest_attach() {
#ifdef CONFIG_DIFFTEST

  open_difftest = true;
  printf("IMG_SIZE:%ld\n",IMGSIZE);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), IMGSIZE, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
#endif
}

void isa_difftest_detach() {
#ifdef CONFIG_DIFFTEST
  open_difftest = false;
#endif
}
