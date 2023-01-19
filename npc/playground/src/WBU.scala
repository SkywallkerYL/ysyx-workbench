package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline




class WBU extends Module{
    val io = IO(new Bundle {
      val choose = Input(UInt(parm.RegFileChooseWidth.W))
      val Regfile_i = Flipped(new REGFILEIO)
      val LsuRes_i = Input(UInt(parm.REGWIDTH.W))
      val CsrWb_i = Flipped(new CSRWB)
      val Regfile_o = new REGFILEIO
      val wbRes_o = Output(UInt(parm.REGWIDTH.W))
  })
    io.Regfile_o :=  io.Regfile_i
    io.wbRes_o := MuxLookup(io.choose,0.U,Seq(
      "b0000".U -> io.Regfile_i.wdata,
      "b0001".U -> io.LsuRes_i,
      "b0010".U -> io.CsrWb_i.CSRs
    ))
    //io.LsuRes_o :=  io.LsuRes_i  
}