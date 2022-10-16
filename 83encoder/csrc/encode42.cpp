#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "Vencode42.h"
#include "verilated_vcd_c.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vencode42* top;
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
  top = new Vencode42;
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
	//double time = 0 ;
	//double time0 = 0;
	sim_init();
	top->en = 0b1;
	top->x = 0b0001;  step_and_dump_wave();
	top->x = 0b0011;  step_and_dump_wave();
	top->x = 0b0111;  step_and_dump_wave();
	top->x = 0b1111;  step_and_dump_wave();
	top->x = 0b1010;  step_and_dump_wave();
	top->x = 0b1100;  step_and_dump_wave();
	top->x = 0b1001;  step_and_dump_wave();
	top->x = 0b0000;  step_and_dump_wave();
	top->x = 0b0101;  step_and_dump_wave();
	top->x = 0b0110;  step_and_dump_wave();
	sim_exit();
	return 0;
}
