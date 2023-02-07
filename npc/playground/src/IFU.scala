package npc

import chisel3._
import chisel3.util._



class IFU extends Module{
    val io = IO(new Bundle {
    val PcIf  = Flipped(Decoupled(new Pc2Ifu))
    val instr_i = Input(UInt(parm.INSTWIDTH.W))
    val instr_o = Output(UInt(parm.INSTWIDTH.W))
    val pc_o = Output(UInt(parm.PCWIDTH.W))
  })
  io.instr_o := io.instr_i
  io.pc_o := io.PcIf.bits.pc

}