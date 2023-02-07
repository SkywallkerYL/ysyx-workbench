package npc

import chisel3._
import chisel3.util._



class PC_REG extends Module{
    val io = IO(new Bundle {
    val NPC = Flipped(Decoupled(new MessageNpcPcreg))
    val PcIf  = Decoupled(new MessagePcIfu)
  })
  val reg = RegNext(io.NPC.npc,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  io.NPC.RegPc = reg
  io.PcIf.pc = reg
}