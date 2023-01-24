package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline




class LS_WB extends Module{
    val io = IO(new Bundle {
      val pc_i  = Input(UInt(parm.PCWIDTH.W))  
      val NextPc_i  = Input(UInt(parm.PCWIDTH.W))
      val choose_i = Input(UInt(parm.RegFileChooseWidth.W))
      val Regfile_i = Flipped(new REGFILEIO)
      val CsrWb_i = Flipped(new CSRWB)
      val LsuRes_i = Input(UInt(parm.REGWIDTH.W))
      val AluRes_i = Input(UInt(parm.REGWIDTH.W))
      val choose_o = Output(UInt(parm.RegFileChooseWidth.W))
      val Regfile_o = new REGFILEIO
      val LsuRes_o = Output(UInt(parm.REGWIDTH.W))
      val AluRes_o = Output(UInt(parm.REGWIDTH.W))
      val CsrWb_o = (new CSRWB)
      val pc_o  = Output(UInt(parm.PCWIDTH.W))
      val NextPc_o  = Input(UInt(parm.PCWIDTH.W))
  })
  if(parm.pip){
      io.Regfile_o :=  RegNext(io.Regfile_i,0.U.asTypeOf(new REGFILEIO))
      io.CsrWb_o :=  RegNext(io.CsrWb_i,0.U.asTypeOf(new CSRWB))
      io.LsuRes_o :=  RegNext(io.LsuRes_i,0.U)
      io.AluRes_o := RegNext(io.AluRes_i,0.U)
      io.choose_o :=  RegNext(io.choose_i,0.U)
      io.pc_o := RegNext(io.pc_i,0.U)
      io.NextPc_o := RegNext(io.NextPc_i,0.U)
  }
  else {
      io.Regfile_o :=  io.Regfile_i
      io.AluRes_o := io.AluRes_i
      io.CsrWb_o := io.CsrWb_i
      io.LsuRes_o :=  io.LsuRes_i
      io.choose_o :=  io.choose_i
      io.pc_o := io.pc_i
      io.NextPc_o := io.NextPc_i
  }

  
}