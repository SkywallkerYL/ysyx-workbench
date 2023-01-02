#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "VRiscvCpu.h"
#include "VRiscvCpu___024root.h"
//#include "VRiscvCpu__Dpi.h"
#include "verilated_vcd_c.h"
#include "svdpi.h"
#define instr_break 0b00000000000100000000000001110011
#define MSIZE 1024

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VRiscvCpu* top;
//每一步更新波形
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
/*
bool checkebreak ()
{
  const svScope scope = svGetScopeFromName("TOP.RiscvCpu");
  assert(scope);
  svSetScope(scope);
  bool flag = ebreakflag();
  return flag;
}
*/

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

void reset(int n ){
  top->reset = 0b1;
  clockntimes(n);
  top->reset = 0b0;
}

void load_prog(const char *bin){
  FILE *fp = fopen(bin,"r");
  //assert(fp!=NULL);
  if(fp==NULL) {printf("No Image Input\n");return;} 
  fread(&top->rootp->RiscvCpu__DOT__M_ext__DOT__Memory,1,MSIZE,fp);
  printf("HHH\n");
  fclose(fp);
}
/*
int instr_mem[255];

void exuinstr(int pc){
	int mem_addr = (pc - 0b10000000000000000000000000000000)>>2;
	//printf("mem_addr :%d\n",mem_addr);
  top-> clock   = 0;
  //top-> pc    = pc;
  //top-> io_instr = instr_mem[mem_addr];
  step_and_dump_wave();
  top->clock = 1;
  step_and_dump_wave();
  //clockntimes(1);
}
*/

int main(int argc , char** argv, char** env) {
  /*
  instr_mem[0] = 0b00000000000100000000000010010011;
  instr_mem[1] = 0b00000000001100000000000100010011;
  instr_mem[2] = 0b00000000011100001000000100010011;
  instr_mem[3] = instr_break;
  instr_mem[4] = 0b00000000111100001000000100010011;
  instr_mem[5] = 0b00000001111100001000001100010011;
  */
	sim_init();
  reset(5);
  //printf("%s\n",argv[1]);
  load_prog(argv[1]);
  //top->pc = 0x80000000;
  
  
  while (!top->io_halt)
  {
    clockntimes(1);
    //int pc = top->io_PcRegOut;
   //printf("n %d: pc %x \n",n,pc);
    //exuinstr(pc);
    //top->pc = top->npc;
    //if (checkebreak()) break;
  }
  
	sim_exit();
	return 0;
}
