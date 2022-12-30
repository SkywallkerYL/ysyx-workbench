#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "VAdd.h"
#include "verilated_vcd_c.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VAdd* top;
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
  top = new VAdd;
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
void simonetime(int a, int b )
{
    top->io_a = a;
    top->io_b = b;
    clockntimes(1);
}

int main(int argc , char** argv, char** env) {
	
	sim_init();
	
	top->reset = 0b1; clockntimes(2);
	top->reset = 0b0; clockntimes(2);	
	//top.model.kbd_sendcode(8'h1C); clockntimes(2);
	
    for (int a = 0; a < 128; a++)
    {
        for (int b = 0; b < 128; b++)
        {
            simonetime(a,b);
            assert(top->io_c == (a+b));
        }
        
    }
	
	sim_exit();
	return 0;
}