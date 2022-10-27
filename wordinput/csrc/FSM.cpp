#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "VFSM_m.h"
#include "verilated_vcd_c.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VFSM_m* top;
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
  top = new VFSM_m;
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

void sim_onetime (int n){
	top->w = n;
	top->clk = 0;
	step_and_dump_wave();
	top->clk = 1;
	step_and_dump_wave();
	top->w = n;
	top->clk = 0;
	step_and_dump_wave();
	top->clk = 1;
	step_and_dump_wave();
	top->w = n;
	top->clk = 0;
	step_and_dump_wave();
	top->clk = 1;
	step_and_dump_wave();
	top->w = n;
	top->clk = 0;
	step_and_dump_wave();
	top->clk = 1;
	step_and_dump_wave();
}



int main(int argc , char** argv, char** env) {
	//double time = 0 ;
	//double time0 = 0;
	sim_init();
	top->reset = 0b1;
	int n = 10;
	while (n --> 0)
	 {
		 top->clk = 0;
		 step_and_dump_wave();
		 top->clk = 1;
		 step_and_dump_wave();
	 }
	top->clk = 0;
	top->reset = 0b0;
	step_and_dump_wave();
	top->clk =1;
	step_and_dump_wave();
	int time = 0;
	while (time <=20)
	{
		int n = rand()%2;
		
		sim_onetime(n);
		time++;
	}
	sim_exit();
	return 0;
}
