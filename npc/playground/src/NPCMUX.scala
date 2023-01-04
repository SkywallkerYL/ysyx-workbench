package npc

import chisel3._
import chisel3.util._

class NPCMUX extends Module{
    val io = IO(new Bundle {
        val jal = Input(UInt(OpJType.OPJNUMWIDTH.W))
        val PcRegPc = Input(UInt(parm.PCWIDTH.W))
        val IdPc    = Input(UInt(parm.PCWIDTH.W))
        val imm = Input(UInt(parm.REGWIDTH.W))
        val NPC = Output(UInt(parm.PCWIDTH.W))
        val NOP = Output(Bool())
  })
  val pc_4 = PcRegPc + 4.U
  val jalpc = io.IdPc + io.imm.asUInt
  val jumppc = jalpc
  io.NOP := io.jal=/=0.U
  io.NPC := MUX(io.NOP,jumppc,pc_4)
}