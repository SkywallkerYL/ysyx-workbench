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
	top->Y = 0b00; top->A = 00; top->B = 01;	top->C = 10;	top->D = 11;		
	step_and_dump_wave();
	top->Y = 0b01; top->A = 00; top->B = 01;	top->C = 10;	top->D = 11;		
	step_and_dump_wave();
	top->Y = 0b10; top->A = 00; top->B = 01;	top->C = 10;	top->D = 11;		
	step_and_dump_wave();
	top->Y = 0b11; top->A = 00; top->B = 01;	top->C = 10;	top->D = 11;		
	step_and_dump_wave();
	top->Y = 0b01; top->A = 00; top->B = 01;	top->C = 10;	top->D = 11;		
	step_and_dump_wave();
	top->Y = 0b10; top->A = 00; top->B = 01;	top->C = 10;	top->D = 11;		
	step_and_dump_wave();
	top->Y = 0b11; top->A = 00; top->B = 01;	top->C = 10;	top->D = 11;		
	step_and_dump_wave();
	
	
	/*
	
	while (!contextp->gotFinish()&&time0 <= 20)
	{ 
		int a = rand() & 1;
		int b = rand() & 1;
		example->a = a;
		example->b = b;
		example->eval();
		printf("a = %d,b=%d,f= %d\n",a,b,example->f);
		assert(example->f == a^b);
		tfp->dump(contextp->time());
		contextp->timeInc(1);
		time0 ++;
	}
	*/
	sim_exit();
	return 0;
}
