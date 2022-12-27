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

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if (ref_r->pc!=cpu.pc) {printf("refpc:%08lx nemupc:%08lx lastpc:%08lx\n",ref_r->pc,cpu.pc,pc);return false;}
  for (size_t i = 0; i < 32; i++)
  {
    //printf("jjjjj\n");
    if (ref_r->gpr[i]!=cpu.gpr[i])
    {
      printf("i: %ld ref:%08lx nemu:%08lx lastpc:%08lx\n",i,ref_r->gpr[i],cpu.gpr[i],pc);
      return false;
    }
    
  }
  return true;
}

void isa_difftest_attach() {
}
