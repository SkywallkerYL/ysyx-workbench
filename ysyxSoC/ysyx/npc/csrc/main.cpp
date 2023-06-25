#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Dpi.h"
#include "verilated_vcd_c.h"
#include "svdpi.h"
#include "state.h"
#include "types.h"
#include "npc-exec.h"
#include "monitor.h"
#include "common.h"
#include "raddr.h"
#include "verilated_dpi.h"
#include "verilated.h"
#include "keyboard.h"

//寄存器堆的值

/*
extern "C" void set_gpr_ptr(const svOpenArrayHandle r){
  //printf("hhhh\n");
  //printf("reg_addr: %d\n",r);
  cpu_gpr = ((uint64_t *)(((VerilatedDpiOpenVar*)r)->datap()));  
}
*/

extern "C" void pmem_read(long long raddr, long long *rdata);

//extern "C" void pmem_write(long long waddr, long long *wdata,char wmask);

void reset(int n ){
  top->reset = 0b1;
  //top->io_PcFlag = 0b1;
  //top->io_PCIN = 0x80000000;
  clockntimes(n);
  //top->io_PcFlag = 0b0;
  top->reset = 0b0;
}


void engine_start() {
#ifdef CONFIG_TARGET_AM
  execute(maxstepnum);
#else
  /* Receive commands from user. */
  sdb_mainloop();
#endif
}



int main(int argc , char* argv[]) {
	sim_init();
	Verilated::commandArgs(argc,argv);
  //printf("jjjjj\n");
  //先读文件，再reset，不然第一条指令始终是0
  //Initial IMG
  //开了difftest要先reset一下，不然img有问题
#ifdef CONFIG_DIFFTEST
  reset(1);
#endif
  init_monitor(argc, argv);

  reset(10);

  /*
  while (1)
  {
    //printf("pc: %lx\n",top->rootp->RiscvCpu__DOT__PcReg__DOT__reg_0);
    clockntimes(1);
    if(checkebreak()){
      //printf("%d\n",top->io_halt);
      if(top->io_halt == 1) printf( ANSI_FMT("HIT GOOD TRAP\n", ANSI_FG_GREEN)) ;
      else printf(ANSI_FMT("HIT BAD TRAP\n", ANSI_FG_RED));
      break;
    }
  }
  */
  //printf("hhh\n");
  engine_start();
	sim_exit();
	return 0;
}
