#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "VRiscvCpu.h"
#include "VRiscvCpu___024root.h"
#include "VRiscvCpu__Dpi.h"
#include "verilated_vcd_c.h"
#include "svdpi.h"
#include "state.h"
#include "types.h"
#include "npc-exec.h"
#include "monitor.h"
#define instr_break 0b00000000000100000000000001110011
#define MSIZE 1024 //this should be same with npc


//每一步更新波形


void reset(int n ){
  top->reset = 0b1;
  clockntimes(n);
  top->reset = 0b0;
}
int instr_mem[255];
void initial_default_img(){
  instr_mem[0] = 0b00000000000100000000000010010011;
  instr_mem[1] = 0b00000000001100000000000100010011;
  instr_mem[2] = 0b00000000011100001000000100010011;
  instr_mem[3] = instr_break;
  instr_mem[4] = 0b00000000111100001000000100010011;
  instr_mem[5] = 0b00000001111100001000001100010011;
  //chisel不同模式下生成的Mem的名字不一样，一个不行的时候换另一个
  //RiscvCpu__DOT__M
  //RiscvCpu__DOT__M_ext__DOT__Memory
  uint* p = &top->rootp->RiscvCpu__DOT__M[0];
  for (size_t i = 0; i < 6; i++)
  {
    *p = instr_mem[i];
    p++;
  }
  
}

void engine_start() {
#ifdef CONFIG_TARGET_AM
  execute(-1);
#else
  /* Receive commands from user. */
  sdb_mainloop();
#endif
}



int main(int argc , char* argv[]) {
	sim_init();

  //先读文件，再reset，不然第一条指令始终是0
  //Initial IMG
  
  init_monitor();

  reset(5);

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
  engine_start()
	sim_exit();
	return 0;
}
