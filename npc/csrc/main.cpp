#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "Vysyx_22050550_cpu.h"
#include "verilated_vcd_c.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vysyx_22050550_cpu* top;
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
  top = new Vysyx_22050550_cpu;
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
		top->clk = 0;
		step_and_dump_wave();
		top->clk = 1;
		step_and_dump_wave();
		temp --;
	}
}
int instr_mem[255];

void exuinstr(int pc){
	int mem_addr = (pc - 0b10000000000000000000000000000000)>>2;
	
  top-> clk   = 0;
  top-> pc    = pc;
  top-> instr = instr_mem[mem_addr];
  step_and_dump_wave();
  top->clk = 1;
  step_and_dump_wave();
  clockntimes(10);

}


int main(int argc , char** argv, char** env) {
  instr_mem[0] = 0b00000000000100000000000010010011;
  instr_mem[1] = 0b00000000001100000000000100010011;
  instr_mem[2] = 0b00000000011100001000000100010011;
	sim_init();
	top->rst = 0b1;
  clockntimes(4);
  top->rst = 0b0;
  top->pc = 0x80000000;
  clockntimes(10);
  int n = 3;
  
  while (n > 0)
  {
    int pc = top->pc;
    exuinstr(pc);
    top->pc = top->npc;
    n--;
  }
  
	sim_exit();
	return 0;
}
