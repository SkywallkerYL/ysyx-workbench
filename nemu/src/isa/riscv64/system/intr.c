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
#define MIE  (1<<3)
#define MPIE (1<<7)
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  //NO  = cpu.pc;
  //cpu.mtvec = NO;
  //cpu.mtvec = epc;
  if(NO <=19 || NO==-1){
    cpu.mcause = 11;
  }
  if(cpu.mstatus&MIE) {
    cpu.mstatus = cpu.mstatus|MPIE;
  }
  else {
    cpu.mstatus = cpu.mstatus & (~ (MPIE));
  }
  cpu.mstatus = cpu.mstatus&(~(MIE));
  printf("pc:0x%016lx mstatus: 0x%016lx\n",cpu.pc,cpu.mstatus);
  word_t mtvec = cpu.mtvec; 
  cpu.mepc = epc;
  return mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
