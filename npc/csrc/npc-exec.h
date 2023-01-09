#ifndef _NPC_EXEC_
#define _NPC_EXEC_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include "VRiscvCpu.h"
#include "VRiscvCpu___024root.h"
#include "VRiscvCpu__Dpi.h"
#include "verilated_dpi.h"
#include "verilated_vcd_c.h"
#include "svdpi.h"
#include "state.h"
#include "types.h"
#include "macro.h"
#include "trace.h"
#include "npcsdb.h"
#define instr_break 0b00000000000100000000000001110011
#define MSIZE 1024 //this should be same with npc

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

//static VRiscvCpu* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
//初始化
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VRiscvCpu;
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
		top->clock = 1;
		step_and_dump_wave();
		top->clock = 0;
		step_and_dump_wave();
		temp --;
	}
}
bool checkebreak ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.RiscvCpu.ebrdpi");
  assert(scope);
  svSetScope(scope);
  bool flag = ebreakflag();
  return flag;
}


void assert_fail_msg() {
  printiringbuf((iringbufind+iringbufsize-1)%iringbufsize);
  isa_reg_display();
}

long load_prog(const char *bin){
  FILE *fp = fopen(bin,"r");
  //assert(fp!=NULL);
  if(fp==NULL) {printf("No Image Input\n");return 1024;} 
  else printf("Read file %s\n",bin);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp,0,SEEK_SET);
  if(fread(&top->rootp->RiscvCpu__DOT__M,1,MSIZE,fp)==0) return 0;
  //printf("HHH\n");
  fclose(fp);
  return size;
}
int instr_mem[MSIZE/4-1];
long initial_default_img(){
  instr_mem[0] = 0x00000297;
  instr_mem[1] = 0b00000000000100000000000010010011;
  instr_mem[2] = 0b00000000000100000000000010010011;
  instr_mem[3] = 0b00000000001100000000000010010011;
  instr_mem[4] = 0b00000000011100001000000100010011;
  instr_mem[5] = instr_break;
  instr_mem[6] = 0b00000000111100001000000100010011;
  instr_mem[7] = 0b00000001111100001000001100010011;
  //chisel不同模式下生成的Mem的名字不一样，一个不行的时候换另一个
  //RiscvCpu__DOT__M
  //RiscvCpu__DOT__M_ext__DOT__Memory
  uint* p = &top->rootp->RiscvCpu__DOT__M[0];
  for (size_t i = 0; i < 6; i++)
  {
    *p = instr_mem[i];
    p++;
  }
  return MSIZE;
}
void sim_once(uint64_t n){
  clockntimes(1);
#ifdef CONFIG_ITRACE
  instr_tracelog(n<=max_instr_printnum);
  uint64_t dnpc = Dnpc_Fetch();
  bool jalrflag = top->io_jalr;
  int d = rd_Fetch();
  int rs1 = rs1_Fetch();
  uint64_t src1 = cpu_gpr[rs1];
  uint64_t imm = imm_Fetch();
  log_ftrace(dnpc,jalrflag,d,imm,rs1,src1);
#endif
  if(checkebreak()||top->io_abort){
     npc_state.state = NPC_ABORT;
  }
}
static void execute(uint64_t n) {

    switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
      //printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      Log("Program execution has ended. To restart the program, exit NPC and run again.");
      return;
    default: npc_state.state = NPC_RUNNING;
    }
    while (n--){
      //这个n用来决定是否打印指令
      sim_once(n);
      //printf("hhhh\n");
      //注意这里由于单周期，下一条指令如果是ebreak，上面sim_once之后回
      //在sim_once只是更新波形，下一个周期的指令在上一个周期更新时就执行了
#ifdef CONFIG_DIFFTEST
      uint64_t localpc = Pc_Fetch();
      uint64_t localnpc = Dnpc_Fetch();
      //printf("hhhh\n");
      difftest_step(localpc,localnpc);
#endif
      if(npc_state.state!=NPC_RUNNING){
      //printf("%d\n",top->io_halt);
        //if(top->io_halt == 1) printf( ANSI_FMT("HIT GOOD TRAP\n", ANSI_FG_GREEN)) ;
        //else printf(ANSI_FMT("HIT BAD TRAP\n", ANSI_FG_RED));
        break;
      }
      //sim_once();
    }
    switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: break;
    case NPC_ABORT:
      if (checkebreak())
      {
        if(top->io_halt == 1) printf( ANSI_FMT("HIT GOOD TRAP\n", ANSI_FG_GREEN)) ;
        else printf(ANSI_FMT("HIT BAD TRAP\n", ANSI_FG_RED));
      }
      if (top->io_abort == 1) {
        int ilen = 4;
        char inst_buf[128];
        char *p = inst_buf; 
        uint64_t pc = Pc_Fetch();
        uint32_t instr = Instr_Fetch();
        uint8_t *inst = (uint8_t *)&instr;
        for (int i = ilen - 1; i >= 0; i --) {
         p += snprintf(p, 4, " %02x", inst[i]);
        }
        int ilen_max = 4;
        int space_len = ilen_max - ilen;
        if (space_len < 0) space_len = 0;
        space_len = space_len * 3 + 1;
        memset(p, ' ', space_len);
        p += space_len;
        void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
        disassemble(p,  inst_buf + sizeof(inst_buf) - p,pc, inst , ilen);
        //assert_fail_msg();
        printf("Instr not implement or other situation!\n");
        printf("pc: 0x%016lx Inst: %s\n",pc,inst_buf);
      }
      
      // fall through
    case NPC_QUIT: break;
    }
    //if (npc_state.state != NPC_RUNNING) {break;}
    //IFDEF(CONFIG_DEVICE, device_update());
}
#endif

