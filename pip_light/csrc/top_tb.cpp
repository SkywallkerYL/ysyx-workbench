#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "Vtop.h"
#include "verilated_vcd_c.h"

int main(int argc , char** argv, char** env) {
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	Vexample* example = new Vexample{contextp};
	

	//double time = 0 ;
	double time0 = 0;
	VerilatedVcdC* tfp = new VerilatedVcdC;
	Verilated::traceEverOn(true);	
	example -> trace(tfp,0);
	tfp		-> open("wave.vcd");
	

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
		example -> final();
		tfp		-> close();
		delete example;
		delete contextp;
	return 0;
}
