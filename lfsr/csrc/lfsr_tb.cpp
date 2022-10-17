#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "Vtop.h"
#include "verilated_vcd_c.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;
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
  top = new Vtop;
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





int main(int argc , char** argv, char** env) {
	
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
	while (time <= 255)
	{
		top->clk = 0;
		step_and_dump_wave();
		top->clk = 1;
		step_and_dump_wave();
		time++;
	}
	sim_exit();
	return 0;
}
