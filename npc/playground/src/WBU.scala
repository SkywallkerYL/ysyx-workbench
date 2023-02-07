package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline




class WBU extends Module{
    val io = IO(new Bundle {
      val LSWB = Flipped((new Lsu2Wbu))
      //val pc  = Input(UInt(parm.PCWIDTH.W))
      //val NextPc  = Input(UInt(parm.PCWIDTH.W))
      //val choose = Input(UInt(parm.RegFileChooseWidth.W))
      //val Regfile_i = Flipped(new REGFILEIO)
      //val LsuRes_i = Input(UInt(parm.REGWIDTH.W))
      val Reg17  = Input(UInt(parm.REGWIDTH.W))
      //val AluRes_i = Input(UInt(parm.REGWIDTH.W))
      //val CSRs_i = Input(UInt(parm.REGWIDTH.W))
      //val CsrWb_i = Flipped(new CSRWB)
      //val CsrIn = Flipped(new CSRIO)
      val WBREG = new Wbu2Regfile
      //val Regfile_o = new REGFILEIO
      //val wbRes_o = Output(UInt(parm.REGWIDTH.W))
      //val CsrRegfile = new CSRIO
      //val CsrWb_o = new CSRWB
      //val CsrAddr = Output(UInt(parm.CSRNUMBER.W))
      
      //CLINT
      val Mtip = Input(Bool()) 
  })
    val CSR = MuxLookup(io.LSWB.CsrWb.CsrAddr, 0.U(parm.REGWIDTH.W),Seq(    
      "b00000001".U    ->io.LSWB.CsrWb.CSR.mepc,
      "b00000010".U    ->io.LSWB.CsrWb.CSR.mcause,
      "b00000100".U    ->io.LSWB.CsrWb.CSR.mtvec,
      "b00001000".U    ->io.LSWB.CsrWb.CSR.mstatus,
      "b00010000".U    ->io.LSWB.CsrWb.CSR.mie,
      "b00100000".U    ->io.LSWB.CsrWb.CSR.mip
    ))
    io.WBREG.Regfile.wen :=  io.LSWB.Regfile.wen
    io.WBREG.Regfile.waddr :=  io.LSWB.Regfile.waddr
    val WbuRes  = MuxLookup(io.LSWB.choose,0.U,Seq(
      "b0000".U -> io.LSWB.AluRes,
      "b0001".U -> io.LSWB.LsuRes,
      "b0010".U -> CSR
    ))
    io.WBREG.Regfile.wdata := WbuRes
    //IRU模块也在这里实现   来处理异常，来自CLINT的信号不经过流水线，直接输入给这里的IRU部分
    val csrwen =io.LSWB.CsrWb.csrflag | io.LSWB.CsrWb.ecall | io.LSWB.CsrWb.mret | io.Mtip
    io.WBREG.CsrAddr := Mux(csrwen,io.LSWB.CsrWb.CsrAddr,"b00000000".U)
    
    //io.CsrWb_o := io.CsrWb_i
    //计时器中断信号
    val MtipValid = ((io.LSWB.CsrWb.CSR.mip & parm.MTIP.U(parm.REGWIDTH.W))=/=0.U)
    //Mcause
    
    //Mcauseflag := 0.U;
    val NO = io.Reg17
    val Mcauseflag0 = ((NO === "xffffffffffffffff".U)||NO<=19.U) & (io.LSWB.CsrWb.ecall)
    val Mcauseflag1 = MtipValid
    val Mcauseflag = Mcauseflag1 ## Mcauseflag0
    val mstatus = Wire(UInt(parm.REGWIDTH.W))
    val mcause = Wire(UInt(parm.REGWIDTH.W))
    val mepc = Wire(UInt(parm.REGWIDTH.W))
    mstatus := 0.U
    mcause  := func.Mcause(Mcauseflag,io.LSWB.CsrWb.CSR.mcause)
    mepc    := 0.U
    when(io.LSWB.CsrWb.ecall || MtipValid){
      //io.CsrRegfile.
      mstatus := func.EcallMstatus(io.LSWB.CsrWb.CSR.mstatus)
      //io.rs_addr2 := 17.U
      //io.CsrRegfile.
      //mcause := func.Mcause(io.Reg17,io.LSWB.CsrWb.CSR.mcause)
      //io.CsrRegfile.
      mepc := io.LSWB.pc
    }
    when(io.LSWB.CsrWb.mret){
      //io.CsrRegfile.
      mstatus := func.MretMstatus(io.LSWB.CsrWb.CSR.mstatus)
    }

    //io.CsrRegfile<>io.CsrIn
    //io.CsrWb_o.csrflag := io.LSWB.CsrWb.csrflag
    //io.CsrWb_o.mret := io.LSWB.CsrWb.mret
    //io.CsrWb_o.ecall := 

    //io.LsuRes_o :=  io.LsuRes_i  
    //CLINT

    io.WBREG.CsrRegfile.mie := Mux(io.LSWB.CsrWb.CsrExuChoose(4),io.LSWB.AluRes,io.LSWB.CsrWb.CSR.mie)

    val MieFlag  = (io.LSWB.CsrWb.CSR.mstatus &parm.MIE.U(parm.REGWIDTH.W)) =/= 0.U
    val MtieFlag = (io.LSWB.CsrWb.CSR.mie & parm.MTIE.U(parm.REGWIDTH.W)) =/= 0.U 
    val MtipFlag = MieFlag & MtieFlag & io.Mtip
    val MtipHigh = io.LSWB.CsrWb.CSR.mip | parm.MTIP.U(parm.REGWIDTH.W)
    //val MtipLow = io.LSWB.CsrWb.CSR.mip & (~parm.MTIP.U(parm.REGWIDTH.W))
    //如果有写入的话，优先写入  否则根据MTIPflag对mip寄存器写入 当然也有可能还有其他信号，后面再加
    when(MtipFlag){
      io.WBREG.CsrAddr := Mux(csrwen,io.LSWB.CsrWb.CsrAddr(7,6),"b00".U) ##"b1".U##Mux(csrwen,io.LSWB.CsrWb.CsrAddr(4,0),"b0000".U)
    }
    //io.CsrAddr(5) := Mux(io.LSWB.CsrWb.CsrAddr(6),io.LSWB.CsrWb.CsrAddr(6),MtipFlag)
    io.WBREG.CsrRegfile.mip :=  Mux(io.LSWB.CsrWb.CsrExuChoose(5),io.LSWB.AluRes,Mux(MtipFlag,MtipHigh,io.LSWB.CsrWb.CSR.mip))

    //处理时钟中断
    //val MtipValid = ((io.LSWB.CsrWb.CSR.mip & parm.MTIP.U(parm.REGWIDTH.W))=/=0.U)
    when(MtipValid){
      //io.CsrAddr  := "b00101011".U
     // mepc := io.NextPc
      //在这里加一行会导致部分地址指令识别不出来，目前还不知道为啥
      //mstatus := io.LSWB.CsrWb.CSR.mstatus
      io.WBREG.CsrRegfile.mip := io.LSWB.CsrWb.CSR.mip & ~parm.MTIP.U(parm.REGWIDTH.W)
    }


    io.WBREG.CsrRegfile.mepc    := Mux(io.LSWB.CsrWb.CsrExuChoose(0),io.LSWB.AluRes,mepc)
    io.WBREG.CsrRegfile.mcause  := Mux(io.LSWB.CsrWb.CsrExuChoose(1),io.LSWB.AluRes,mcause)
    io.WBREG.CsrRegfile.mtvec   := Mux(io.LSWB.CsrWb.CsrExuChoose(2),io.LSWB.AluRes,io.LSWB.CsrWb.CSR.mtvec)
    io.WBREG.CsrRegfile.mstatus := Mux(io.LSWB.CsrWb.CsrExuChoose(3),io.LSWB.AluRes,mstatus)
    
}