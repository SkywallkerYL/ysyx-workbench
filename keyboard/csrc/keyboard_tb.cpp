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
void ps2clockntimes(int n,int ntimes)
{
	while (n--)
	{
		top->ps2_clk = 0b1;
		clockntimes(ntimes);
		top->ps2_clk = 0b0;
		clockntimes(ntimes);
	}
	
}
#define USE 1
void inputkey (int * a ,int ntimes,int ntimes2)
{
	
	int i = 0;
	//clockntimes(3); top->ps2_clk = 0b1; //step_and_dump_wave();
	//clockntimes(3); top->ps2_clk = 0b0;
	while (i < 11)
	{
		//top->ps2_data = a[i]; //step_and_dump_wave();
		//negedge detect     so while negedge   change the value
#if USE
		int n ;
		if (i==0) n = ntimes-ntimes2;
		else n = ntimes; 
		clockntimes(n); top->ps2_clk = 0b1; //step_and_dump_wave();
		top->ps2_data = a[i];
		clockntimes(ntimes); top->ps2_clk = 0b0; //step_and_dump_wave();
#else
		ps2clockntimes(1,ntimes);
		top->ps2_data = a[i];
		ps2clockntimes(1,ntimes);
#endif
		i++;
	}
	top->ps2_clk = 0b0;
}


int main(int argc , char** argv, char** env) {
	
	sim_init();
	int a[11];
	int back[11];
	back[0] = 0b0; for ( int i = 1; i <=4 ; i++) back[i] = 0b0;for ( int i = 5; i <=8 ; i++) back[i] = 0b1; back[9] = 0b1; back[10] = 0b1;
	// F0
	//a[0] = 0b0; a[1] = rand()%2 ;for (int i = 2;i<=8; i++){a[i] = rand()%2; a[9] = a[i]^a[i-1];} a[10] = 0b1;  	
	top->clrn = 0b0; clockntimes(2);
	top->clrn = 0b1; clockntimes(2);	
	//top.model.kbd_sendcode(8'h1C); clockntimes(2);
	a[0] = 0b0; a[1] = 0b0; a[2] = 0b0;a[3] = 0b1;a[4] = 0b1;a[5] = 0b1;a[6] = 0b0;a[7] = 0b0;a[8] = 0b0;a[9] = 0b0; a[10] = 0b1;  	
	//A    8'h1C
	int ntimes = 10;
	int ntimes2 = 2;
#if USE 
	//仿真过程中不要在更新nextdata_n时更新采样信号，因为那样会导致
	//增加sampling信号   会导致内部计数器出问题，这样就会读入错误
	inputkey(a,ntimes,0);
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1; //clockntimes(2);
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0; //clockntimes(2);

	inputkey(back,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1;
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0;

	inputkey(a,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1;
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0;
	inputkey(a,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1; //clockntimes(2);
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0; //clockntimes(2);
	inputkey(a,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1;
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0;
	inputkey(a,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1; //clockntimes(2);
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0; //clockntimes(2);

	inputkey(a,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1;
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0;

	inputkey(a,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1;
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0;

	inputkey(a,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1; //clockntimes(2);
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0; //clockntimes(2);

	inputkey(back,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1;
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0;

	inputkey(back,ntimes,2*ntimes2);//
	clockntimes(ntimes2);top->nextdata_n = 0b0;//top->ps2_clk = 0b1;
	clockntimes(ntimes2);top->nextdata_n = 0b1;//top->ps2_clk = 0b0;

#else
	int n = 0
	while (n <= 2000)
	{
		
	}
	
#endif
	//
	sim_exit();
	return 0;
}
