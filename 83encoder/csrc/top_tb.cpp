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
	//double time = 0 ;
	//double time0 = 0;
	sim_init();
	top->en = 0b1;
	top->x = 0b00000001;  step_and_dump_wave();
	top->x = 0b10000001;  step_and_dump_wave();
	top->x = 0b10001111;  step_and_dump_wave();
	top->x = 0b01000001;  step_and_dump_wave();
	top->x = 0b00010001;  step_and_dump_wave();
	top->x = 0b11111000;  step_and_dump_wave();
	top->x = 0b00001001;  step_and_dump_wave();
	top->x = 0b00010001;  step_and_dump_wave();
	top->x = 0b00100000;  step_and_dump_wave();
		
	sim_exit();
	return 0;
}
