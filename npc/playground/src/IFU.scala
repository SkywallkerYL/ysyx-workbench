package npc

import chisel3._
import chisel3.util._



class IFU extends Module{
    val io = IO(new Bundle {
    val PcIf  = Flipped((new Pc2Ifu))
    val instr_i = Input(UInt(parm.INSTWIDTH.W))
    val IFID  = new Ifu2Idu
  })
  io.IFID.inst := io.instr_i
  io.IFID.pc   := io.PcIf.pc

}