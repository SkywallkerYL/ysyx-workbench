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
/*
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
*/



int main(int argc , char** argv, char** env) {
	
	sim_init();
	int n = 10;
	while (n--)
	{
		int a = rand()&1;
		int b = rand()&1;
		top->a = a;
		top->b = b;
		step_and_dump_wave();
		printf("a = %d, b = %d ,f = %d\n",a,b,top->f);
		assert(top->f == (a^b));
	}
	
	sim_exit();
	return 0;
}
