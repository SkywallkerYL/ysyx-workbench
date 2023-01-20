package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline




class WBU extends Module{
    val io = IO(new Bundle {
      val pc  = Input(UInt(parm.PCWidth.W))
      val choose = Input(UInt(parm.RegFileChooseWidth.W))
      val Regfile_i = Flipped(new REGFILEIO)
      val LsuRes_i = Input(UInt(parm.REGWIDTH.W))
      val Reg17  = Input(UInt(parm.REGWIDTH.W))
      val AluRes_i = Input(UInt(parm.REGWIDTH.W))
      //val CSRs_i = Input(UInt(parm.REGWIDTH.W))
      val CsrWb_i = Flipped(new CSRWB)
      val CsrIn = Flipped(new CSRIO)
      val Regfile_o = new REGFILEIO
      val wbRes_o = Output(UInt(parm.REGWIDTH.W))
      val CsrRegfile = new CSRIO
      val CsrWb_o = new CSRWB
      //val pc_o  = Output(UInt(parm.PCWidth.W))
      //val CsrWb_o = (new CSRWB)
      //val csraddr = Input(UInt(parm.CSRNUMBER.W))
      //val CSRInput= Flipped(new CSRIO)
  })
    val CSR = MuxLookup(io.CsrWb_i.CsrAddr, 0.U(parm.REGWIDTH.W),Seq(    
      "b0001".U    ->io.CsrIn.mepc,
      "b0010".U    ->io.CsrIn.mcause,
      "b0100".U    ->io.CsrIn.mtvec,
      "b1000".U    ->io.CsrIn.mstatus
    ))
    io.Regfile_o :=  io.Regfile_i
    io.wbRes_o := MuxLookup(io.choose,0.U,Seq(
      "b0000".U -> io.AluRes_i,
      "b0001".U -> io.LsuRes_i,
      "b0010".U -> CSR
    ))
    io.CsrWb_o.CsrAddr = Mux(io.CsrWb_i.csrflag,io.CsrWb_i.CsrAddr,"b0000".U)
    //io.CsrWb_o := io.CsrWb_i
    when(io.CsrWb_i.ecall){
      io.CsrRegfile.mstatus := func.EcallMstatus(io.CsrIn.mstatus)
      //io.rs_addr2 := 17.U
      io.CsrRegfile.mcause := func.Mcause(io.Reg17,io.CsrIn.mcause)
      io.CsrRegfile.mepc := io.pc_i
    }
    when(io.CsrWb_i.mret){
      io.CsrRegfile.mstatus := func.MretMstatus(io.CsrIn.mstatus)
    }
    //io.LsuRes_o :=  io.LsuRes_i  
}