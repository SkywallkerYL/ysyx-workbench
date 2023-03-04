#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#define MUL
#ifdef MUL
#include "VMulti.h"
#include "VMulti___024root.h"
#else
#include "VDivder.h"
#include "VDivder___024root.h"
#endif
#include "verilated_vcd_c.h"
#define WAVE
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
//static VRiscvCpu* top;
#ifdef MUL
VMulti* top;
#else
VDivder* top;
#endif
void step_and_dump_wave(){
  top->eval();
  //printf("pc:%x wavecount:%d\n",Pc_Fetch(),wavecount);
#ifdef WAVE
  contextp->timeInc(1);
  tfp->dump(contextp->time());
#endif
}
//初始化
void sim_init(){
#ifdef WAVE
  contextp = new VerilatedContext;
  //top = new VRiscvCpu;
  tfp = new VerilatedVcdC;
#endif
#ifdef MUL
  top = new VMulti;
#else 
  top = new VDivder;
#endif
#ifdef WAVE
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
#endif

}

void sim_exit(){
  step_and_dump_wave();
#ifdef WAVE
  tfp->close();
#endif
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


void reset(int n ){
  top->reset = 0b1;
  //top->io_PcFlag = 0b1;
  //top->io_PCIN = 0x80000000;
  clockntimes(n);
  //top->io_PcFlag = 0b0;
  top->reset = 0b0;
}
//overflow...not realy max
int64_t INTMAX = (((int64_t)1<<31) -1);
int64_t INTMIN = -INTMAX-1;
uint64_t UINTMAX = (((uint64_t)1<<32) -1);
uint64_t UINT64MAX = (((uint64_t)1<<63) -1);
#ifdef MUL
void Mulinttest(){
  for (size_t i = 0; i < 20000; i++)
  {
    int64_t multicand = (int64_t)(rand()%(2000)-1000);(int64_t)(rand()%(2*(int64_t)INTMAX+1)-(int64_t)INTMAX-1);
    int64_t multiplier = (int64_t)(rand()%(2000)-1000);//(int64_t)(rand()%(2*(int64_t)INTMAX+1)-(int64_t)INTMAX-1);
    top->io_Exu_MulValid = 0b1;
    top->io_Exu_Flush = 0b0;
    top->io_Exu_Mulw = 0;rand()%2;
    top->io_Exu_MulSigned = 0b11;
    top->io_Exu_Multiplicand = multicand;
    top->io_Exu_Multiplier = multiplier;
    //printf("%d\n",top->io_Exu_OutValid);
    while (!top->io_Exu_OutValid)
    {
      clockntimes(1);
    }
    //if(i == 0) printf("multicand:%ld  multiplier:%ld\n",multicand,multiplier);
    if(top->io_Exu_OutValid){
      //考虑到wallace的情况，此时电路状态每更新 先更新一下
      top->eval();
      //clockntimes(1);
      //clockntimes(1);
      //printf("multicand:%ld  multiplier:%ld\n",top->io_Exu_Multiplicand ,top->io_Exu_Multiplier);
      //printf("ref:%ld  dut:%ld\n",i*j,top->io_Exu_ResultL);
      //进行32位运算时，把top转化为int，不然不能比较
      if((top->io_Exu_ResultL) != multicand*multiplier){
        printf("multicand:%ld  multiplier:%ld\n",multicand,multiplier);
        printf("ref:%ld  dut:%ld\n",multicand*multiplier,top->io_Exu_ResultL);
        clockntimes(1);
        sim_exit();
        exit(0);
      }
      
    }
    clockntimes(1);
  }
  printf("/*********Multi Int Test Pass**********/\n");
  return;
}

void MulUinttest(){
  for (size_t i = 0; i < 20000; i++)
  {
    uint64_t multicand = rand()%(UINTMAX);
    uint64_t multiplier = rand()%(UINTMAX);
    top->io_Exu_MulValid = 0b1;
    top->io_Exu_Flush = 0b0;
    top->io_Exu_Mulw = rand()%2;
    top->io_Exu_MulSigned = 0b00;
    top->io_Exu_Multiplicand = multicand;
    top->io_Exu_Multiplier = multiplier;
    //printf("%d\n",top->io_Exu_OutValid);
    while (!top->io_Exu_OutValid)
    {
      clockntimes(1);
    }
    if(top->io_Exu_OutValid){
      top->eval();
      //clockntimes(1);
      //printf("%d\n",top->io_Exu_OutValid);
      //printf("ref:%ld  dut:%ld\n",i*j,top->io_Exu_ResultL);
      if(top->io_Exu_ResultL != multicand*multiplier){
        printf("multicand:%ld  multiplier:%ld\n",multicand,multiplier);
        printf("ref:%ld  dut:%ld\n",multicand*multiplier,top->io_Exu_ResultL);
        
        sim_exit();
        exit(0);
      }
      
    }
    clockntimes(1);
  }
  printf("/*********Multi UInt Test Pass**********/\n");
  return;
}
#else
void DivUinttest(){
  for (size_t i = 0; i < 20000; i++)
  {
    uint64_t divdend = rand()%(UINTMAX);
    uint64_t divsior = rand()%(UINTMAX)+1;
    top->io_Exu_DivValid = 0b1;
    top->io_Exu_Flush = 0b0;
    top->io_Exu_Divw = 0b0;
    top->io_Exu_DivSigned = 0b00;
    top->io_Exu_Divdend = divdend;
    top->io_Exu_Divisor = divsior;
    while (!top->io_Exu_OutValid)
    {
      clockntimes(1);
    }
    if(top->io_Exu_OutValid){
      //printf("ref:%ld  dut:%ld\n",i*j,top->io_Exu_ResultL);
      if(top->io_Exu_Quotient != divdend/divsior){
        printf("Quotient: ref:%ld  dut:%ld\n",divdend/divsior,top->io_Exu_Quotient);
        sim_exit();
        exit(0);
      }
      if(top->io_Exu_Remainder != divdend%divsior){
        printf("Remainder: ref:%ld  dut:%ld\n",divdend%divsior,top->io_Exu_Remainder);
        sim_exit();
        exit(0);
      }
      
    }
    clockntimes(1);
  }
  printf("/*********Div UInt Test Pass**********/\n");
  return;
}

void DivInttest(){
  for (size_t i = 0; i < 20000; i++)
  {
    int64_t divdend = (int64_t)(rand()%(2*(int64_t)UINTMAX+1)-(int64_t)UINTMAX-1);
    int64_t divsior = rand()%(2000)-1000;//(int64_t)(rand()%(2*(int64_t)INTMAX+1)-(int64_t)INTMAX-1);
    if(divsior == 0) {
      i--;
      continue;
    }
    top->io_Exu_DivValid = 0b1;
    top->io_Exu_Flush = 0b0;
    top->io_Exu_Divw = 0b0;
    top->io_Exu_DivSigned = 0b11;
    top->io_Exu_Divdend = divdend;
    top->io_Exu_Divisor = divsior;
    while (!top->io_Exu_OutValid)
    {
      clockntimes(1);
    }
    //printf("divdend:%ld  divsior:%ld\n",divdend,divsior);
    //printf("Quotient: ref:%ld  dut:%ld\n",divdend/divsior,top->io_Exu_Quotient);
    if(top->io_Exu_OutValid){
      //printf("ref:%ld  dut:%ld\n",i*j,top->io_Exu_ResultL);
      if(top->io_Exu_Quotient != divdend/divsior){
        printf("Quotient: ref:%ld  dut:%ld\n",divdend/divsior,top->io_Exu_Quotient);
        sim_exit();
        exit(0);
      }
      if(top->io_Exu_Remainder != divdend%divsior){
        printf("Remainder: ref:%ld  dut:%ld\n",divdend%divsior,top->io_Exu_Remainder);
        sim_exit();
        exit(0);
      }
      
    }
    clockntimes(1);
  }
  printf("/*********Div Int Test Pass**********/\n");
  return;
}
#endif

int main(int argc , char* argv[]) {
  //时间种子 每次运行时产生不一样的岁技术
  srand((unsigned)time(NULL));
	sim_init();
  reset(5);
  //printf("hhh\n");
#ifdef MUL
  Mulinttest();
  MulUinttest();
#else
  DivUinttest();
  DivInttest();
#endif
  sim_exit();
	return 0;
}
