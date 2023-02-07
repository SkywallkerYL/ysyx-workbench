package npc

import chisel3._
import chisel3.util._



class PC_REG extends Module{
    val io = IO(new Bundle {
    val NPC = (Decoupled(Flipped(new MessageNpcPcreg)))
    val PcIf  = Decoupled(new MessagePcIfu)
  })
  val reg = RegNext(io.NPC.bits.npc,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  io.NPC.bits.RegPc := reg
  io.PcIf.bits.pc := reg
}