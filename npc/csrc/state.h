#ifndef _STATE_
#define _STATE_
#include "types.h"
#include "common.h"
#define NPCTRAP(thispc, code) set_npc_state(NPC_END, thispc, code)

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  uint64_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;


NPCState npc_state = { .state = NPC_STOP };
void set_npc_state(int state, uint64_t pc, int halt_ret) {
  //difftest_skip_ref();
  npc_state.state = state;
  npc_state.halt_pc = pc;
  npc_state.halt_ret = halt_ret;
}

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} riscv64_CPU_state;

typedef riscv64_CPU_state CPU_state;


CPU_state cpu;

#endif