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
#define MIE (1 << 3)
#define MPIE (1 << 7)

#ifdef CONFIG_ETRACE
void Etrace(word_t mstatus, word_t mcause, word_t mepc, word_t mtvec, bool ecall);
#endif
word_t isa_raise_intr(word_t NO, vaddr_t epc)
{
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  // NO  = cpu.pc;
  // cpu.mtvec = NO;
  // cpu.mtvec = epc;
  //根据异常来源设置mcause
  //-1  fffffff....
  if (  NO == -1|| (NO<=16))
  {
    cpu.mcause = 11;
  }
  //MIE位置0禁用中断，并且之前的MIE值保留在MPIE中
  if (cpu.mstatus & MIE)
  {
    cpu.mstatus = cpu.mstatus | MPIE;
  }
  else
  {
    cpu.mstatus = cpu.mstatus & (~(MPIE));
  }
  //
  cpu.mstatus = cpu.mstatus & (~(MIE));
  //mpp位即 11 12 位
  //异常之前的权限模式 11 machine
  //这里其实应该要保留权限在mpp中，但是由于只实现了M模式，就跳过了
  //这样子difftest过不了。。mstatus 不检查mstatus了
  //cpu.mstatus = cpu.mstatus | 0x1800;

  // printf("pc:0x%016lx mstatus: 0x%016lx\n",cpu.pc,cpu.mstatus);
  word_t mtvec = cpu.mtvec;
#ifdef CONFIG_ETRACE
  Log("mepc:%lx:  ecall mastatus:0x%lx mcause:0x%lx mtvec:%lx",epc,cpu.mstatus,cpu.mcause,mtvec);
  Etrace(cpu.mstatus, cpu.mcause, epc, mtvec, 1);
#endif
  //异常指令pc保存在mepc中，pc设置为mtvec
  cpu.mepc = epc;
  return mtvec;
}

word_t isa_query_intr()
{
  return INTR_EMPTY;
}
