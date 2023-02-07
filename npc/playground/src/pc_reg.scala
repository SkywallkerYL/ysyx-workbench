package npc

import chisel3._
import chisel3.util._



class PC_REG extends Module{
    val io = IO(new Bundle {
    
    val NPC = Flipped(((new Npc2Pcreg)))//Decoupled
    
    val RegPc = (new Pcreg2Npc)
    val PcIf  = (new Pc2Ifu)
  })
  val reg = RegNext(io.NPC.npc,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  io.RegPc.RegPc := reg
  io.PcIf.pc := reg
}