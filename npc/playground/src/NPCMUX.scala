package npc

import chisel3._
import chisel3.util._

class NPCMUX extends Module{
    val io = IO(new Bundle {
        val jal = Input(UInt(OpJType.OPJNUMWIDTH.W))
        val PcRegPc = Input(UInt(parm.PCWIDTH.W))
        val IdPc    = Input(UInt(parm.PCWIDTH.W))
        val imm = Input(UInt(parm.REGWIDTH.W))
        val rs1 = Input(UInt(parm.REGWIDTH.W))
        
        val NPC = Output(UInt(parm.PCWIDTH.W))
        val NOP = Output(Bool())
  })
  val pc_4 = io.PcRegPc + 4.U
  val jalpc  = io.IdPc + io.imm.asUInt
  val jalrpc = (io.imm.asUInt + io.rs1)&(~1.U(parm.REGWIDTH.W))
  val jumppc = MuxCase(pc_4,Array(
    io.jal === 1.U -> jalpc,
    io.jal === 2.U -> jalrpc
  ))
  io.NOP := io.jal=/=0.U
  io.NPC := Mux(io.NOP,jumppc,pc_4)
}