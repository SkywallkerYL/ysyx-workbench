#ifndef _NPC_EXEC_
#define _NPC_EXEC_

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
#include "state.h"
#include "types.h"
#include "macro.h"
#include "trace.h"
#include "npcsdb.h"
#define instr_break 0b00000000000100000000000001110011
#define MSIZE 1024 //this should be same with npc

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

//static VRiscvCpu* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
//初始化
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VRiscvCpu;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
  delete top;
  delete contextp;
}
void clockntimes(int n ){
	
	int temp = n;
	while (temp >= 1)
	{
		top->clock = 0;
		step_and_dump_wave();
		top->clock = 1;
		step_and_dump_wave();
		temp --;
	}
}
bool checkebreak ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.RiscvCpu.ebrdpi");
  assert(scope);
  svSetScope(scope);
  bool flag = ebreakflag();
  return flag;
}

void load_prog(const char *bin){
  FILE *fp = fopen(bin,"r");
  //assert(fp!=NULL);
  if(fp==NULL) {printf("No Image Input\n");return;} 
  else printf("Read file %s\n",bin);
  fseek(fp,0,SEEK_SET);
  if(fread(&top->rootp->RiscvCpu__DOT__M,1,MSIZE,fp)==0) return;
  //printf("HHH\n");
  fclose(fp);
}
int instr_mem[MSIZE/4-1];
void initial_default_img(){
  instr_mem[0] = 0x00000297;
  instr_mem[1] = 0b00000000000100000000000010010011;
  instr_mem[2] = 0b00000000000100000000000010010011;
  instr_mem[3] = 0b00000000001100000000000010010011;
  instr_mem[4] = 0b00000000011100001000000100010011;
  instr_mem[5] = instr_break;
  instr_mem[6] = 0b00000000111100001000000100010011;
  instr_mem[7] = 0b00000001111100001000001100010011;
  //chisel不同模式下生成的Mem的名字不一样，一个不行的时候换另一个
  //RiscvCpu__DOT__M
  //RiscvCpu__DOT__M_ext__DOT__Memory
  uint* p = &top->rootp->RiscvCpu__DOT__M[0];
  for (size_t i = 0; i < 6; i++)
  {
    *p = instr_mem[i];
    p++;
  }
  
}
void sim_once(){
  clockntimes(1);
#ifdef CONFIG_ITRACE
  instr_tracelog();
#endif
}
static bool firstinst = 1;
static void execute(uint64_t n) {
if (firstinst) {
#ifdef CONFIG_ITRACE
  instr_tracelog();
#endif
firstinst = 0;
}
    while (n--){
      sim_once();
      //注意这里由于单周期，下一条指令如果是ebreak，上面sim_once之后回
      //在sim_once只是更新波形，下一个周期的指令在上一个周期更新时就执行了
      if(checkebreak()){
      //printf("%d\n",top->io_halt);
        if(top->io_halt == 1) printf( ANSI_FMT("HIT GOOD TRAP\n", ANSI_FG_GREEN)) ;
        else printf(ANSI_FMT("HIT BAD TRAP\n", ANSI_FG_RED));
        break;
      }
      //sim_once();
    }
    //if (nemu_state.state != NEMU_RUNNING) {break;}
    //IFDEF(CONFIG_DEVICE, device_update());
}
#endif

