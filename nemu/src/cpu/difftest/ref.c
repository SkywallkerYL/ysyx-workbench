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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
//direction指定拷贝的方向，
//DIFFTEST_TO_DUT 获取ref的寄存器状态到DUT 表示往DUT拷贝
//DIDDTEST_TO_REF 设置REF的寄存器的状态位DUT 表示往REF拷贝


void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  
  if (direction == DIFFTEST_TO_REF)
  {
    for (size_t i = 0; i < n; i++)
    {
      paddr_write(addr+i,1,((uint8_t *)buf)[i]);
    }
    
  }
  else assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  if(direction == DIFFTEST_TO_REF){
    //nemu作为ref//把npc的寄存器拷贝给nemu的cpu
    for (size_t i = 0; i < 32; i++)
    {
      cpu.gpr[i] = ((uint64_t *)dut)[i];
    }
    //看riscv64-nemu.h的实现还有几个寄存器，目前还没实现，先写在这里
    //为了地址的连续性，把pc放在dut的第32个
    cpu.pc = ((uint64_t *)dut)[32];
    printf("cpu.pc : 0x%08x\n",cpu.pc );
    //cpu.mepc = ((uint64_t *)dut)[33];
    //cpu.mcause = ((uint64_t *)dut)[34];
    //cpu.mtvec = ((uint64_t *)dut)[35];
    //cpu.mstatus = ((uint64_t *)dut)[36];
  }
  else {
    for (size_t i = 0; i < 32; i++)
    {
      ((uint64_t *)dut)[i]= cpu.gpr[i];
    }
    ((uint64_t *)dut)[32] = cpu.pc;
  }
  //assert(0);
}

void difftest_exec(uint64_t n) {
  printf("in difftest_exec\n");
  cpu_exec(n);
  //assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  printf("in nemu initial!!\n");
  Log("nemu difftest init");
  init_isa();
}

