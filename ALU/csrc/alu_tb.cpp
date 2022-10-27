#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "Valu.h"
#include "verilated_vcd_c.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Valu* top;
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
  top = new Valu;
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
	
	for (int i = -8; i <= 7; i = i+1)
	{
		for (int j = -8; j<= 7; j = j +1)
		{
			top->a = i;
			top->b = j;
			for (int k = 0; k<= 7;k= k+1)
			{
				top->func = k;
				step_and_dump_wave();
			}
		} 
	}
	sim_exit();
	return 0;
}
