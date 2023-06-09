package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class Debug extends Bundle{
  val valid = Output(Bool())
  val pc = Output(UInt(parm.REGWIDTH.W))
  val NextPc  = Output(UInt(parm.PCWIDTH.W))
  val inst = Output(UInt(parm.INSTWIDTH.W))
  val SkipRef = Output(Bool())
  val abort = Output(Bool())
  val jalr  = Output(Bool())
  val rs1         = Output(UInt(parm.REGADDRWIDTH.W))
  val imm         = Output(UInt(parm.REGWIDTH.W))
  val rdaddr      = Output(UInt(parm.REGADDRWIDTH.W))
  val ebreak  = Output(Bool())  
}


class WBU extends Module{
    val io = IO(new Bundle {
      val LSWB = Flipped((new Lsu2Wbu))
      val REGWB = Flipped((new Regfile2Wbu))

      val WBREG = new Wbu2Regfile

      //CLINT
      val CLINTWB = Flipped((new Clint2Wbu))

      val ReadyLS = new Wbu2Lsu

      val Score = new Wbu2Score
      val Pass = new Wforward
      val debug = new Debug
      
  })
    io.debug.pc := io.LSWB.pc
    io.debug.inst := io.LSWB.inst
    io.debug.NextPc := io.LSWB.NextPc
    io.debug.SkipRef := io.LSWB.SkipRef
    io.debug.valid := io.LSWB.valid
    io.debug.abort := io.LSWB.abort
    io.debug.rs1 := io.LSWB.rs1
    io.debug.jalr := io.LSWB.jalr
    io.debug.imm := io.LSWB.imm
    io.debug.rdaddr := io.LSWB.rdaddr
    io.debug.ebreak := io.debug.inst === "x00100073".U
    io.ReadyLS.ready := true.B
    val CSR = MuxLookup(io.LSWB.CsrWb.CsrAddr, 0.U(parm.REGWIDTH.W),Seq(    
      "b00000001".U    ->io.REGWB.CSRs.mepc,
      "b00000010".U    ->io.REGWB.CSRs.mcause,
      "b00000100".U    ->io.REGWB.CSRs.mtvec,
      "b00001000".U    ->io.REGWB.CSRs.mstatus,
      "b00010000".U    ->io.REGWB.CSRs.mie,
      "b00100000".U    ->io.REGWB.CSRs.mip
    ))
    io.WBREG.Regfile.wen :=  io.LSWB.Regfile.wen
    io.WBREG.Regfile.waddr :=  io.LSWB.Regfile.waddr
    io.Score.WScore.wen :=  io.LSWB.Regfile.wen
    io.Score.WScore.waddr := io.LSWB.Regfile.waddr
    io.Pass.waddr := io.LSWB.Regfile.waddr
    io.Pass.valid := io.LSWB.Regfile.wen

    val WbuRes  = MuxLookup(io.LSWB.choose,0.U,Seq(
      "b0000".U -> io.LSWB.AluRes,
      "b0001".U -> io.LSWB.LsuRes,
      "b0010".U -> CSR
    ))
    io.Pass.wdata := WbuRes
    io.WBREG.Regfile.wdata := WbuRes
    //IRU模块也在这里实现   来处理异常，来自CLINT的信号不经过流水线，直接输入给这里的IRU部分
    //Mtip部分要打开了TIP才有效，不然会csrwen也拉高之后
    //如果某条指令的inst正好跟CSR那条部分匹配了(x300) 等。就会造成CSR的写入
    val OpenMtip = io.CLINTWB.Mtip & io.REGWB.CSRs.mie(7) //中断启用位
    val csrwen =io.LSWB.CsrWb.csrflag | io.LSWB.CsrWb.ecall | io.LSWB.CsrWb.mret | OpenMtip
    io.WBREG.CsrAddr := Mux(csrwen,io.LSWB.CsrWb.CsrAddr,"b00000000".U)
    
    //io.CsrWb_o := io.CsrWb_i
    //计时器中断信号
    val MtipValid = ((io.REGWB.CSRs.mip & parm.MTIP.U(parm.REGWIDTH.W))=/=0.U)
    //Mcause
    
    //Mcauseflag := 0.U;
    val NO = io.REGWB.Reg17
    //val Mcauseflag0 = ((NO === "xffffffffffffffff".U)||NO<=16.U) & (io.LSWB.CsrWb.ecall)
    //val Mcauseflag1 = MtipValid
    //val Mcauseflag = Mcauseflag1 ## Mcauseflag0
    val mstatus = Wire(UInt(parm.REGWIDTH.W))
    val mcause = Wire(UInt(parm.REGWIDTH.W))
    val mepc = Wire(UInt(parm.REGWIDTH.W))
    mstatus := 0.U
    mcause := 0.U
    //mcause  := func.Mcause(Mcauseflag,io.REGWB.CSRs.mcause)
    when(io.LSWB.CsrWb.ecall){
      mcause := parm.EcallFromM.U
    }.elsewhen(MtipValid){
      mcause := parm.CountInter.U
    }
    mepc    := 0.U
    when(io.LSWB.CsrWb.ecall || MtipValid){
      //io.CsrRegfile.
      mstatus := func.EcallMstatus(io.REGWB.CSRs.mstatus)
      //io.rs_addr2 := 17.U
      //io.CsrRegfile.
      //mcause := func.Mcause(io.REGWB.Reg17,io.REGWB.CSRs.mcause)
      //io.CsrRegfile.
      mepc := io.LSWB.pc
    }
    when(io.LSWB.CsrWb.mret){
      //io.CsrRegfile.
      mstatus := func.MretMstatus(io.REGWB.CSRs.mstatus)
    }

    //io.CsrRegfile<>io.CsrIn
    //io.CsrWb_o.csrflag := io.LSWB.CsrWb.csrflag
    //io.CsrWb_o.mret := io.LSWB.CsrWb.mret
    //io.CsrWb_o.ecall := 

    //io.LsuRes_o :=  io.LsuRes_i  
    //CLINT

    io.WBREG.CsrRegfile.mie := Mux(io.LSWB.CsrWb.CsrExuChoose(4),io.LSWB.AluRes,io.REGWB.CSRs.mie)

    val MieFlag  = (io.REGWB.CSRs.mstatus(3) )//&parm.MIE.U(parm.REGWIDTH.W)) =/= 0.U
    val MtieFlag = (io.REGWB.CSRs.mie(7))//& parm.MTIE.U(parm.REGWIDTH.W)) =/= 0.U 
    val MtipFlag = MieFlag & MtieFlag & io.CLINTWB.Mtip
    val MtipHigh = io.REGWB.CSRs.mip | parm.MTIP.U(parm.REGWIDTH.W)
    //val MtipLow = io.REGWB.CSRs.mip & (~parm.MTIP.U(parm.REGWIDTH.W))
    //如果有写入的话，优先写入  否则根据MTIPflag对mip寄存器写入 当然也有可能还有其他信号，后面再加
    when(MtipFlag){
      //io.WBREG.CsrAddr := Mux(csrwen,io.LSWB.CsrWb.CsrAddr(7,6),"b00".U) ##"b1".U##Mux(csrwen,io.LSWB.CsrWb.CsrAddr(4,0),"b0000".U)
      io.WBREG.CsrAddr := io.LSWB.CsrWb.CsrAddr | "b0010000".U
    }
    //io.CsrAddr(5) := Mux(io.LSWB.CsrWb.CsrAddr(6),io.LSWB.CsrWb.CsrAddr(6),MtipFlag)
    io.WBREG.CsrRegfile.mip :=  Mux(io.LSWB.CsrWb.CsrExuChoose(5),io.LSWB.AluRes,Mux(MtipFlag,MtipHigh,io.REGWB.CSRs.mip))

    //处理时钟中断
    //val MtipValid = ((io.REGWB.CSRs.mip & parm.MTIP.U(parm.REGWIDTH.W))=/=0.U)
    when(MtipValid){
      //io.CsrAddr  := "b00101011".U
     // mepc := io.NextPc
      //在这里加一行会导致部分地址指令识别不出来，目前还不知道为啥
      //mstatus := io.REGWB.CSRs.mstatus
      io.WBREG.CsrRegfile.mip := io.REGWB.CSRs.mip & ~parm.MTIP.U(parm.REGWIDTH.W)
    }


    io.WBREG.CsrRegfile.mepc    := Mux(io.LSWB.CsrWb.CsrExuChoose(0),io.LSWB.AluRes,mepc)
    io.WBREG.CsrRegfile.mcause  := Mux(io.LSWB.CsrWb.CsrExuChoose(1),io.LSWB.AluRes,mcause)
    io.WBREG.CsrRegfile.mtvec   := Mux(io.LSWB.CsrWb.CsrExuChoose(2),io.LSWB.AluRes,io.REGWB.CSRs.mtvec)
    io.WBREG.CsrRegfile.mstatus := Mux(io.LSWB.CsrWb.CsrExuChoose(3),io.LSWB.AluRes,mstatus)
    
}