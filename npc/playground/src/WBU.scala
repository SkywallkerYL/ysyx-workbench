package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline




class WBU extends Module{
    val io = IO(new Bundle {
      val choose = Input(UInt(parm.RegFileChooseWidth.W))
      val Regfile_i = Flipped(new REGFILEIO)
      val LsuRes_i = Input(UInt(parm.REGWIDTH.W))

      val Regfile_o = new REGFILEIO
      val wbRes_o = Output(UInt(parm.REGWIDTH.W))
  })
    io.Regfile_o :=  io.Regfile_i
    io.wbRes_o = MuxLookup(io.choose,0.U,Seq(
      0.U -> io.Regfile_i.wdata,
      1.U -> io.LsuRes_i
    ))
    //io.LsuRes_o :=  io.LsuRes_i  
}