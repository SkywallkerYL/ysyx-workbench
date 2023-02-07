package npc

import chisel3._
import chisel3.util._



class PC_REG extends Module{
    val io = IO(new Bundle {
    
    val NPC = Flipped(Decoupled((new Npc2Pcreg)))
    
    val RegPc = Decoupled(new Pcreg2Npc)
    val PcIf  = Decoupled(new Pc2Ifu)
  })
  val reg = RegNext(io.NPC.bits.npc,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  io.RegPc.bits.RegPc := reg
  io.PcIf.bits.pc := reg
}