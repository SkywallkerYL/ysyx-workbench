#include <nvboard.h>
#include <Vtop.h>


static TOP_NAME top0;
void nvboard_bind_all_pins (Vtop* top);

void single_cycle(){
	top0.clk = 0; top0.eval();
	top0.clk = 1; top0.eval();
}

void reset(int n){
	top0.rst = 1;
	while (n --> 0) single_cycle();
	top0.rst = 0;
}

int main (){
	nvboard_bind_all_pins(&top0);
	nvboard_init();
	reset(10);

	while (1){
		nvboard_update();
		single_cycle();
	}
	nvboard_quit();
	return 0 ;
}
