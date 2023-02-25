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
#include "common.h"
#include "difftest.h"





VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
//static VRiscvCpu* top;
int64_t wavecount = 0;
void step_and_dump_wave(){
  top->eval();
#ifdef WAVE
  if(!TRACE_CONDITION(wavecount,WAVE_BEGIN,WAVE_END)) {if(top->clock == 1)wavecount++;return;}
  if(top->clock == 1)wavecount++;
  //printf("pc:%x wavecount:%d\n",Pc_Fetch(),wavecount);
  contextp->timeInc(1);
  tfp->dump(contextp->time());
#endif
}
//初始化
void sim_init(){
  //top = new VRiscvCpu;
  //contextp = new VerilatedContext;
  //printf("hhh\n");
#ifdef WAVE
  //printf("hhh\n");
  contextp = new VerilatedContext;
  //top = new VRiscvCpu;
  tfp = new VerilatedVcdC;
#endif
  top = new VRiscvCpu;
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
bool checkebreak ()
{
  //这里的scpoe是调用函数位置的模块的名字
  const svScope scope = svGetScopeFromName("TOP.RiscvCpu.ebrdpi");
  assert(scope);
  svSetScope(scope);
  bool flag = ebreakflag();
  return flag;
}

extern int64_t instnum;
extern int64_t wavecount;
void assert_fail_msg() {
#ifdef CONFIG_ITRACE
  Log("Total Instr num:%ld",instnum );
  printiringbuf((iringbufind+iringbufsize-1)%iringbufsize);  
#endif
#ifdef WAVE
  Log("Wave Cycle num:%ld",wavecount);
#endif
  isa_reg_display();
}
//uint32_t instr_mem[MSIZE/4-1];
long load_prog(const char *bin){
  FILE *fp = fopen(bin,"r");
  //assert(fp!=NULL);
  if(fp==NULL) {printf("No Image Input\n");return 1024;} 
  else printf("Read file %s\n",bin);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp,0,SEEK_SET);
  //if(fread(&top->rootp->RiscvCpu__DOT__M,1,MSIZE,fp)==0) return 0;
  if(fread((uint8_t *)&p_mem,1,MSIZE,fp)==0) return 0;
  //printf("HHH\n");
  fclose(fp);
  return size;
}

long initial_default_img(){
  instr_mem[0] = 0x00700093;//0b00000000011100000000000010010011;//0x00000297;
  instr_mem[1] = 0x01300093;//0b00000001001100000000000010010011;
  instr_mem[2] = 0x00100093;//0b00000000000100000000000010010011;
  instr_mem[3] = 0x00300093;//0b00000000001100000000000010010011;
  instr_mem[4] = 0x00700113;//0b00000000011100001000000100010011;
  //instr_mem[5] = 0x00113423;
  instr_mem[5] = instr_break;
  instr_mem[6] = 0b00000000111100001000000100010011;
  instr_mem[7] = 0b00000001111100001000001100010011;
  //chisel不同模式下生成的Mem的名字不一样，一个不行的时候换另一个,这里是在cpu内部例化Mem的情况
  //RiscvCpu__DOT__M[0]
  //RiscvCpu__DOT__M_ext__DOT__Memory[0]
  //自己写失败了，之间memcpy
  //memcpy(&p_mem[0],(uint8_t*)&instr_mem,MSIZE);
  for (size_t i = 0; i < 10; i++)
  {
    memcpy(&p_mem[4*i],(uint8_t*)&instr_mem[i],4);
  }
  /*
  for (size_t i = 0; i < 7*4; i++)
  {
    printf("pmem 0x%02x\n",p_mem[i]);
  }
  */
  /*
  uint32_t* pinstr = (uint32_t*)&instr_mem[0];
  printf("0x%02x\n", * pinstr);
  uint8_t* ptmem = &p_mem[0];
  for (size_t i = 0; i < MSIZE/4; i++)
  {
    for (size_t j = 0; j < 4; j++)
    {
          
      *ptmem = *(pinstr);
    }
    ptmem++;
    pinstr++;
    //*p = instr_mem[i];
    //p++;
  }
  */
  return MSIZE;
}
#ifdef CONFIG_DIFFTEST
CPU_state npc_r;
#endif
void sim_once(uint64_t n){
  //clockntimes(1);
#ifdef CONFIG_ITRACE
  if(top->io_instvalid)instr_tracelog(n<=max_instr_printnum);
  uint64_t dnpc = Dnpc_Fetch();
  bool jalrflag = top->io_jalr;
  int d = rd_Fetch();
  int rs1 = rs1_Fetch();
  uint64_t src1 = cpu_gpr[rs1];
  uint64_t imm = imm_Fetch();
  //if (cpu_gpr[32] == 0x80000014)printf("jalr:%d rd:%d rs1:%d imm:0x%016lx\n",jalrflag,d,rs1,imm);
  //if(jalrflag&(d==0)&(rs1==1)&(imm==0)) printf("pc:0x%016lx\n",cpu_gpr[32]);
  if(top->io_instvalid)log_ftrace(dnpc,jalrflag,d,imm,rs1,src1);
#endif
  if(checkebreak()||top->io_abort){
    npc_state.state = NPC_ABORT;
    return;
  }
  clockntimes(1);
#ifdef CONFIG_DIFFTEST
  for (size_t i = 0; i < 32; i++)
  {
    npc_r.gpr[i]= cpu_gpr[i];
  }
  npc_r.pc = cpu_gpr[32];
  npc_r.mepc = cpu_gpr[33];
  npc_r.mcause = cpu_gpr[34];
  npc_r.mtvec = cpu_gpr[35];
  npc_r.mstatus = cpu_gpr[36];
#endif
}

static void execute(uint64_t n) {

    switch (npc_state.state) {
    case NPC_QUIT : exit(0);break;
    case NPC_END: case NPC_ABORT:
      //printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      Log("Program execution has ended. To restart the program, exit NPC and run again.");
      return;
    default: npc_state.state = NPC_RUNNING;
    }
  while (n--){

      //这个n用来决定是否打印指令 而不是执行多少次
      sim_once(n);

      //printf("hhhh\n");
      //注意这里由于单周期，下一条指令如果是ebreak，上面sim_once之后回
      //在sim_once只是更新波形，下一个周期的指令在上一个周期更新时就执行了
      //difftest在sim_once后面进行，因为这样子sim之后clock更新，npc的pc才会更新
      //并且单周期正好寄存器的写入是在下一个周期，pc和reg的更新正好和nemu同步
      //sim_once(n);
      if(npc_state.state!=NPC_RUNNING){
      //printf("%d\n",top->io_halt);
        //if(top->io_halt == 1) printf( ANSI_FMT("HIT GOOD TRAP\n", ANSI_FG_GREEN)) ;
        //else printf(ANSI_FMT("HIT BAD TRAP\n", ANSI_FG_RED));
        break;
      }
#ifdef CONFIG_DIFFTEST
    if (is_skip_ref) {
        //printf("hhhh\n");
      ref_difftest_regcpy(&npc_r, DIFFTEST_TO_REF);
      is_skip_ref = false;
       if (!top->io_SkipRef ) continue;
    }
    if (top->io_SkipRef ) {
      difftest_skip_ref();
      //printf("pc:0x%016lx \n",cpu_gpr[32]);
    }
    else {
      if(top->io_difftestvalid){
        uint64_t localpc  = Pc_Fetch();
        uint64_t localnpc = Dnpc_Fetch();
        printf("localpc:0x%lx\n",localpc);
        difftest_step(localpc,localnpc);
      }
    }
#endif
#ifdef VGA
  device_update();
#endif
      //sim_once();
  }
    switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: break;
    case NPC_ABORT:
      if (checkebreak())
      {
        if(top->io_halt == 1) printf( ANSI_FMT("HIT GOOD TRAP at pc:0x%016lx\n", ANSI_FG_GREEN),Pc_Fetch()) ;
        else printf(ANSI_FMT("HIT BAD TRAP at pc:0x%016lx\n", ANSI_FG_RED),Pc_Fetch());
        break;
      }
      else if (top->io_abort == 1) {
        int ilen = 4;
        char inst_buf[128];
        char *p = inst_buf; 
        uint64_t pc = Pc_Fetch();
        uint32_t instr = Instr_Fetch();
        //uint32_t intsr1 = p_mem[pc-CONFIG_MBASE];
        //printf("instr: 0x%08x\n",instr);
        //printf("instr1: 0x%08x\n",intsr1);
        uint8_t *inst =(uint8_t *)&instr;//(uint8_t *)&p_mem[pc-CONFIG_MBASE]; //(uint8_t *)&instr;
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
        printf(ANSI_FMT("Instr not implement or other situation!\n", ANSI_FG_RED));
        printf("pc: 0x%016lx Inst: %s\n",pc,inst_buf);
        break;
      }
      break;
      // fall through
    case NPC_QUIT: exit(0);break;
    }
    //if (npc_state.state != NPC_RUNNING) {break;}
    //IFDEF(CONFIG_DEVICE, device_update());
}
#endif

