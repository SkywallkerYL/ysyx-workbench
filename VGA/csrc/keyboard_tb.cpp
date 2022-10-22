#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "Vkeyboard_top.h"
#include "verilated_vcd_c.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vkeyboard_top* top;
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
  top = new Vkeyboard_top;
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
void inputkey (int a )
{
	top->kbd_sendcode(a);
	int i = 0;
	while (i < 11)
	{
		top->ps2_data = top->send_buffer[i];
		clockntimes(3); top->ps2_clk = 0b0; step_and_dump_wave();
		clockntimes(3); top->ps2_clk = 0b1; step_and_dump_wave();
		i++;
	}
	
}


int main(int argc , char** argv, char** env) {
	
	sim_init();
	
	top->clrn = 0b0; clockntimes(2);
	top->clrn = 0b1; clockntimes(2);	
	//top.model.kbd_sendcode(8'h1C); clockntimes(2);
	inputkey(0x1C);
	top->nextdata_n = 0b0; clockntimes(2);
	top->nextdata_n = 0b1; clockntimes(2);
	
	sim_exit();
	return 0;
}
