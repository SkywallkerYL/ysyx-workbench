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
#include "macro.h"
#include "monitor.h"
uint32_t Instr_Fetch ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.RiscvCpu.Idu");
  assert(scope);
  svSetScope(scope);
  uint32_t inst = instr_fetch();
  return inst;
}

uint32_t Instr_Fetch ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.RiscvCpu.");
  assert(scope);
  svSetScope(scope);
  uint32_t inst = instr_fetch();
  return inst;
}

#define CONFIG_ITRACE
typedef struct Decode {
  uint64_t pc;
  //vaddr_t snpc; //static next pc
  uint64_t dnpc; //dynamic next pc
  //ISADecodeInfo isa;
  IFDEF(CONFIG_ITRACE, char logbuf[128]);
  //char logbuf[128];
} Decode;
#ifdef  CONFIG_ITRACE
//itrace 
void instr_tracelog(){
    Decode s;
    FILE *file;
    file = fopen(log_file,"a");
    if (file == NULL) {printf("No file!!!!\n");}
    char *p = s->logbuf;
    //printf("p :%s logbuf:%s\n",p,s->logbuf);
    //printf("inside exec_once:p :%s, s->snpc: %ld, s->pc: %ld\n",p,s->snpc,s->pc);
    p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
    //printf("p :%s\n",s->logbuf);
    int ilen = s->snpc - s->pc;
    int i;
    uint8_t *inst = (uint8_t *)&s->isa.inst.val;
    for (i = ilen - 1; i >= 0; i --) {
      //printf("inside exec_once:%s\n",p);
      p += snprintf(p, 4, " %02x", inst[i]);
      //printf("i:%d inst:%02x\n",i,inst[i]);
    }
    //写进去的同时 p作为指针也+了
    //printf("p :%s\n",s->logbuf);
    //printf("inside exec_once:%s\n",p);
    int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
    //printf("inside exec_once:%s\n",p);
    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
        MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
      //fprintf(file,"pc:%lx: Addr:%x len:%x %c value:%lx\n",cpu.pc,addr,len,wrflag,data);
}   

#endif




//ftrace 





#endif