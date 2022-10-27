#include <nvboard.h>
#include <Vtop.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
using namespace std;

static TOP_NAME top0;
void nvboard_bind_all_pins (Vtop* top);

void single_cycle(){
	//top0.A= 0b00; top0.B = 0b01; top0.C = 0b10; top0.D = 0b11;
	//top0.Y = y;
	
	top0.clk = 0; top0.eval();
	top0.clk = 1; top0.eval();
	//top0.clk = 0; top0.eval();
	//top0.clk = 1; top0.eval();
}
static void reset(int n) {
  top0.rst = 1;
  while (n -- > 0) single_cycle();
  top0.rst = 0;
}
int main (){
	nvboard_bind_all_pins(&top0);
	nvboard_init();
	reset(10);
	//int y ;
	
	while (1){
		nvboard_update();
		// y = rand()%4;
		single_cycle();
		/*
		int time  = 0;
		while (time<=100000) time++;
		*/
		
	}
	nvboard_quit();
	return 0 ;
}
