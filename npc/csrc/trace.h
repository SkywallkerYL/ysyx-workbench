#ifndef _TRACE_
#define _TRACE_


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "VRiscvCpu.h"
#include "VRiscvCpu___024root.h"
#include "VRiscvCpu__Dpi.h"
#include "verilated_dpi.h"
#include "verilated_vcd_c.h"
#include "svdpi.h"


uint32_t Instr_Fetch ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.RiscvCpu.Idu");
  assert(scope);
  svSetScope(scope);
  uint32_t inst = instr_fetch();
  return inst;
}


//itrace 







//ftrace 





#endif