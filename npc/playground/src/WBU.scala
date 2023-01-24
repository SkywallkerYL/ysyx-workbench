package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline




class WBU extends Module{
    val io = IO(new Bundle {
      val pc  = Input(UInt(parm.PCWIDTH.W))
      val NextPc  = Input(UInt(parm.PCWIDTH.W))
      val choose = Input(UInt(parm.RegFileChooseWidth.W))
      val Regfile_i = Flipped(new REGFILEIO)
      val LsuRes_i = Input(UInt(parm.REGWIDTH.W))
      val Reg17  = Input(UInt(parm.REGWIDTH.W))
      val AluRes_i = Input(UInt(parm.REGWIDTH.W))
      //val CSRs_i = Input(UInt(parm.REGWIDTH.W))
      val CsrWb_i = Flipped(new CSRWB)
      //val CsrIn = Flipped(new CSRIO)
      val Regfile_o = new REGFILEIO
      val wbRes_o = Output(UInt(parm.REGWIDTH.W))
      val CsrRegfile = new CSRIO
      //val CsrWb_o = new CSRWB
      val CsrAddr = Output(UInt(parm.CSRNUMBER.W))
      
      //CLINT
      val Mtip = Input(Bool()) 
  })
    val CSR = MuxLookup(io.CsrWb_i.CsrAddr, 0.U(parm.REGWIDTH.W),Seq(    
      "b00000001".U    ->io.CsrWb_i.CSR.mepc,
      "b00000010".U    ->io.CsrWb_i.CSR.mcause,
      "b00000100".U    ->io.CsrWb_i.CSR.mtvec,
      "b00001000".U    ->io.CsrWb_i.CSR.mstatus,
      "b00010000".U    ->io.CsrWb_i.CSR.mie,
      "b00100000".U    ->io.CsrWb_i.CSR.mip
    ))
    io.Regfile_o :=  io.Regfile_i
    io.wbRes_o := MuxLookup(io.choose,0.U,Seq(
      "b0000".U -> io.AluRes_i,
      "b0001".U -> io.LsuRes_i,
      "b0010".U -> CSR
    ))
    //IRU模块也在这里实现   来处理异常，来自CLINT的信号不经过流水线，直接输入给这里的IRU部分
    val csrwen =io.CsrWb_i.csrflag | io.CsrWb_i.ecall | io.CsrWb_i.mret | io.Mtip
    io.CsrAddr := Mux(csrwen,io.CsrWb_i.CsrAddr,"b00000000".U)
    
    //io.CsrWb_o := io.CsrWb_i
    //计时器中断信号
    val MtipValid = ((io.CsrWb_i.CSR.mip & parm.MTIP.U(parm.REGWIDTH.W))=/=0.U)
    //Mcause
    
    //Mcauseflag := 0.U;
    val NO = io.Reg17
    val Mcauseflag0 = ((NO === "xffffffffffffffff".U))
    val Mcauseflag1 = MtipValid
    val Mcauseflag = Mcauseflag1 ## Mcauseflag0
    val mstatus = Wire(UInt(parm.REGWIDTH.W))
    val mcause = Wire(UInt(parm.REGWIDTH.W))
    val mepc = Wire(UInt(parm.REGWIDTH.W))
    mstatus := 0.U
    mcause  := func.Mcause(Mcauseflag,io.CsrWb_i.CSR.mcause)
    mepc    := 0.U
    when(io.CsrWb_i.ecall){
      //io.CsrRegfile.
      mstatus := func.EcallMstatus(io.CsrWb_i.CSR.mstatus)
      //io.rs_addr2 := 17.U
      //io.CsrRegfile.
      //mcause := func.Mcause(io.Reg17,io.CsrWb_i.CSR.mcause)
      //io.CsrRegfile.
      mepc := io.pc
    }
    when(io.CsrWb_i.mret){
      //io.CsrRegfile.
      mstatus := func.MretMstatus(io.CsrWb_i.CSR.mstatus)
    }

    //io.CsrRegfile<>io.CsrIn
    //io.CsrWb_o.csrflag := io.CsrWb_i.csrflag
    //io.CsrWb_o.mret := io.CsrWb_i.mret
    //io.CsrWb_o.ecall := 
    io.CsrRegfile.mepc    := Mux(io.CsrWb_i.CsrExuChoose(0),io.AluRes_i,mepc)
    io.CsrRegfile.mcause  := Mux(io.CsrWb_i.CsrExuChoose(1),io.AluRes_i,mcause)
    io.CsrRegfile.mtvec   := Mux(io.CsrWb_i.CsrExuChoose(2),io.AluRes_i,io.CsrWb_i.CSR.mtvec)
    io.CsrRegfile.mstatus := Mux(io.CsrWb_i.CsrExuChoose(3),io.AluRes_i,mstatus)
    //io.LsuRes_o :=  io.LsuRes_i  
    //CLINT

    io.CsrRegfile.mie := Mux(io.CsrWb_i.CsrExuChoose(4),io.AluRes_i,io.CsrWb_i.CSR.mie)

    val MieFlag  = (io.CsrWb_i.CSR.mstatus &parm.MIE.U(parm.REGWIDTH.W)) =/= 0.U
    val MtieFlag = (io.CsrWb_i.CSR.mie & parm.MTIE.U(parm.REGWIDTH.W)) =/= 0.U 
    val MtipFlag = MieFlag & MtieFlag & io.Mtip
    val MtipHigh = io.CsrWb_i.CSR.mip | parm.MTIP.U(parm.REGWIDTH.W)
    //val MtipLow = io.CsrWb_i.CSR.mip & (~parm.MTIP.U(parm.REGWIDTH.W))
    //如果有写入的话，优先写入  否则根据MTIPflag对mip寄存器写入 当然也有可能还有其他信号，后面再加
    when(MtipFlag){
      io.CsrAddr := Mux(csrwen,io.CsrWb_i.CsrAddr(7,6),"b00".U) ##"b1".U##Mux(csrwen,io.CsrWb_i.CsrAddr(4,0),"b0000".U)
    }
    //io.CsrAddr(6) := Mux(io.CsrWb_i.CsrAddr(6),io.CsrWb_i.CsrAddr(6),MtipFlag)
    io.CsrRegfile.mip :=  Mux(io.CsrWb_i.CsrExuChoose(5),io.AluRes_i,Mux(MtipFlag,MtipHigh,io.CsrWb_i.CSR.mip))

    //处理时钟中断
    //val MtipValid = ((io.CsrWb_i.CSR.mip & parm.MTIP.U(parm.REGWIDTH.W))=/=0.U)
    when(MtipValid){
      io.CsrAddr  := "b00101011".U
      mepc := io.NextPc
      mstatus := io.CsrWb_i.CSR.mstatus
      io.CsrRegfile.mip := io.CsrWb_i.CSR.mip & ~parm.MTIP.U(parm.REGWIDTH.W)
    }
    
}