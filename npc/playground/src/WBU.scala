package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline




class WBU extends Module{
    val io = IO(new Bundle {
      val Regfile_i = Flipped(new REGFILEIO)
      val LsuRes_i = Input(UInt(parm.REGWIDTH.W))

      val Regfile_o = new REGFILEIO
      val LsuRes_o = Output(UInt(parm.REGWIDTH.W))
  })
    io.Regfile_o :=  io.Regfile_i
    io.LsuRes_o :=  io.LsuRes_i  
}