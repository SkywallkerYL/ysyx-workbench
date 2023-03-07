package npc

import chisel3._
import chisel3.util._

class REGFILEIO extends Bundle{
    val wen = Output(Bool())
    val waddr = Output(UInt(parm.REGADDRWIDTH.W))
    val wdata = Output(UInt(parm.REGWIDTH.W))
    //val rdata = Output(UInt(parm.REGWIDTH.W))
}
class CSRIO extends Bundle{
    //val wen = Output(Bool())
    //val waddr = Output(UInt(parm.REGADDRWIDTH.W))
    //val wdata = Output(UInt(parm.REGWIDTH.W))
    val mepc    = Output(UInt(parm.PCWIDTH.W))
    val mcause  = Output(UInt(parm.REGWIDTH.W))
    val mtvec   = Output(UInt(parm.REGWIDTH.W))
    val mstatus = Output(UInt(parm.REGWIDTH.W))

    val mie     = Output(UInt(parm.REGWIDTH.W))
    val mip     = Output(UInt(parm.REGWIDTH.W))
    //val rdata = Output(UInt(parm.REGWIDTH.W))
}


class CSRWB extends Bundle{
    //val wen = Output(Bool())
    //val waddr = Output(UInt(parm.REGADDRWIDTH.W))
    //val wdata = Output(UInt(parm.REGWIDTH.W))
    //val CSR = new CSRIO
    //val CsrAddr = Output(UInt(parm.CSRNUMBER.W))//寄存器写使能
    //val CSRs = Output(UInt(parm.REGWIDTH.W))
    val CsrAddr = Output(UInt(parm.CSRNUMBER.W))
    val CsrExuChoose = Output(UInt(parm.CSRNUMBER.W))
    val ecall = Output(Bool())
    val mret  = Output(Bool())
    val csrflag = Output(Bool())
    //val rdata = Output(UInt(parm.REGWIDTH.W))
}
class RegToTop extends Bundle{
  val Reg = Output(Vec(parm.RegNumber+7,UInt(parm.REGWIDTH.W)))
}



class RegFile extends Module{
    val io = IO(new Bundle {
    val IDRegFile = Flipped((new Idu2Regfile))
    val WBREG = Flipped((new Wbu2Regfile))
    val REGWB = new Regfile2Wbu
    val pc = Input(UInt(parm.PCWIDTH.W))
    val RegFileID = ((new Regfile2Idu))
    val a0data = Output(UInt(parm.REGWIDTH.W))
    //val TOP = new RegToTop
  })
  val reg = RegInit(VecInit(Seq.fill(parm.RegNumber)(0.U(parm.REGWIDTH.W))))
  val mepc    = RegInit(0.U(parm.REGWIDTH.W))
  val mstatus = RegInit(parm.INITIAL_MSTATUS.U(parm.REGWIDTH.W))
  val mtvec   = RegInit(0.U(parm.REGWIDTH.W))
  val mcause  = RegInit(0.U(parm.REGWIDTH.W))
  /*
  reg dpi 貌似会占用大量的仿真时间
  在这里考虑拉到顶层
  */
  
  if(parm.DPI){
    val regdpi = Module(new regDPI)
    for(i <- 1 until 32){
      regdpi.io.a(i) := reg(i)
    }
    regdpi.io.pc        := io.pc
    regdpi.io.mepc      := io.RegFileID.CSRs.mepc    
    regdpi.io.mcause    := io.RegFileID.CSRs.mcause  
    regdpi.io.mtvec     := io.RegFileID.CSRs.mtvec   
    regdpi.io.mstatus   := io.RegFileID.CSRs.mstatus
    regdpi.io.mie       := io.RegFileID.CSRs.mie
    regdpi.io.mip       := io.RegFileID.CSRs.mip
  }
  

  when (io.WBREG.Regfile.wen){
    when (io.WBREG.Regfile.waddr =/= 0.U) {reg(io.WBREG.Regfile.waddr) := io.WBREG.Regfile.wdata}
  }
  //when (io.IDRegFile.raddr1 === io.waddr ){
      io.RegFileID.rdata1 := reg(io.IDRegFile.raddr1)
  //}
  //when(io.IDRegFile.raddr2 === io.waddr ){
      io.RegFileID.rdata2 := reg(io.IDRegFile.raddr2)
  //}
  //生成出来的verilog文件似乎不会解决冲突的问题
  /*
  if(io.IDRegFile.raddr1 == 0.U){
      io.RegFileID.rdata1 := 0.U(parm.REGWIDTH.W)
  }else if (io.IDRegFile.raddr1 == io.WBREG.Regfile.waddr ){
      io.RegFileID.rdata1 := io.WBREG.Regfile.wdata
  }else io.RegFileID.rdata1 := reg(io.IDRegFile.raddr1)
  
  if (io.IDRegFile.raddr2 == 0.U){
      io.RegFileID.rdata2 := 0.U(parm.REGWIDTH.W)
  }else if (io.IDRegFile.raddr2 == io.WBREG.Regfile.waddr ){
      io.RegFileID.rdata2 := io.WBREG.Regfile.wdata
  }else io.RegFileID.rdata2 := reg(io.IDRegFile.raddr2)
  */
  //这样写会有combinational loop
  /*
  when(io.IDRegFile.raddr1 === 0.U){
      io.RegFileID.rdata1 := 0.U(parm.REGWIDTH.W)
  }.elsewhen (io.IDRegFile.raddr1 === io.waddr ){
      io.RegFileID.rdata1 := io.wdata
  }.otherwise {io.RegFileID.rdata1 := reg(io.IDRegFile.raddr1)}
  
  when (io.IDRegFile.raddr2 === 0.U){
      io.RegFileID.rdata2 := 0.U(parm.REGWIDTH.W)
  }.elsewhen(io.IDRegFile.raddr2 === io.waddr ){
      io.RegFileID.rdata2 := io.wdata
  }.otherwise {io.RegFileID.rdata2 := reg(io.IDRegFile.raddr2)}
  */
  //CSR
  val mepcen   =  (io.WBREG.CsrAddr(0))
  val mcauseen =  (io.WBREG.CsrAddr(1))
  val mtvecen  =  (io.WBREG.CsrAddr(2))
  val mstatusen=  (io.WBREG.CsrAddr(3))

  when(mepcen){
    mepc := io.WBREG.CsrRegfile.mepc
  }
  when(mcauseen){
    mcause := io.WBREG.CsrRegfile.mcause
  }
  when(mtvecen){
    mtvec := io.WBREG.CsrRegfile.mtvec
  }
  when(mstatusen){
    mstatus := io.WBREG.CsrRegfile.mstatus
  }
  io.RegFileID.CSRs.mepc     := mepc
  io.RegFileID.CSRs.mcause   := mcause
  io.RegFileID.CSRs.mtvec    := mtvec
  io.RegFileID.CSRs.mstatus  := mstatus
  /*
  for (i <- 0 until parm.RegFileReadPorts){
    when (io.raddr(i) === 0.U){
        io.rdata(i) := 0.U(parm.REGWIDTH)
    }.elsewhen (io.raddr(i) === io.waddr ){
        //when (io.waddr === 0.U) {io.rdata(i) := 0.U(parm.REGWIDTH)}
        //.otherwise
        io.rdata(i) := io.wdata
    }.otherwise (io.rdata(i) := reg(io.raddr(i)))
  }
  */
  //CLINT reg mie mip
  val mieen = (io.WBREG.CsrAddr(4))
  val mipen = (io.WBREG.CsrAddr(5))
  val mie   = RegInit(0.U(parm.REGWIDTH.W))
  val mip   = RegInit(0.U(parm.REGWIDTH.W))

  when(mieen){
    mie := io.WBREG.CsrRegfile.mie
  }
  when(mipen){
    mip := io.WBREG.CsrRegfile.mip
  }

  io.RegFileID.CSRs.mie := mie 
  io.RegFileID.CSRs.mip := mip

  io.REGWB.CSRs.mepc     := mepc
  io.REGWB.CSRs.mcause   := mcause
  io.REGWB.CSRs.mtvec    := mtvec
  io.REGWB.CSRs.mstatus  := mstatus
  io.REGWB.CSRs.mie      := mie 
  io.REGWB.CSRs.mip      := mip
  //for io_halt it can be removed when it is not need
  io.a0data := reg(10)
  //REG 17 STORE THE no FOR csrs
  io.REGWB.Reg17 := reg(17)
}
//计分板机制 用来处理RAW冒险
/*
ID阶段  指令需要写入R(x)，那么busy(x)置一
WB阶段  指令阶段 指令需要写入R(x) 则busy置0
ID阶段  如果指令需要读出R(x) 并且Busy位为1,那么发生了raw冒险，
//目前没有考虑转发 直接阻塞流水线，将idu的ready拉低。
//

*/
class WScoreBoardIO extends Bundle{
  val wen = Output(Bool())
  val waddr = Output(UInt(parm.REGADDRWIDTH.W))
}
class RScoreBoardIO extends Bundle{
  val valid   = Output(Bool())
  val rdaddr1 = Output(UInt(parm.REGADDRWIDTH.W))
  val rdaddr2 = Output(UInt(parm.REGADDRWIDTH.W))
  val busy1 = Input(Bool())
  val busy2 = Input(Bool())
}
//哦哦哦，这里LSU空写的问题还没解决，要回去该一下
class ScoreBoard extends Module{
  val io = IO(new Bundle{
    val IDU = Flipped(new Idu2Score)
    val WBU = Flipped(new Wbu2Score)
  })
  val Busy =RegInit(VecInit(Seq.fill(parm.RegNumber)(false.B)))//RegInit(0.U(parm.RegNumber.W))
  //增加了旁路转发之后有一个优先级的问题 应该以IDU优先级更高
  /*
  即某一个周期，通过旁路转发把寄存器的值发给IDU了，下一个周期WBU写回，然后busy该拉低了
  但是这个周期由于数据转发过去了， IDU如果又要写同一个寄存器，由于拿到了寄存器的数据
  IDU那边的valid会拉高，这样子就导致WBU和IDU同时对计分板申请，应该以IDU为准

  */
  when(io.IDU.WScore.wen){
    when(io.IDU.WScore.waddr=/=0.U){
      Busy(io.IDU.WScore.waddr) := 1.U
    }
  }
  //
  val WBUwrite = io.WBU.WScore.wen &((!io.IDU.WScore.wen)|(io.IDU.WScore.wen&(io.WBU.WScore.waddr=/=io.IDU.WScore.waddr)))
  when(WBUwrite){
    Busy(io.WBU.WScore.waddr) := 0.U
  }
  io.IDU.RScore.busy1 := false.B
  io.IDU.RScore.busy2 := false.B
  //这里有一个等待的问题
  //当前周期接收到了信号。。。那busy信号要一直拉高直到Busy寄存器拉低。
  //可以译码阶段valid一直拉高，然后阻塞EXU的寄存器。。即后面的流水继续流动。
  when(io.IDU.RScore.valid){
    when(Busy(io.IDU.RScore.rdaddr1)===1.U){
      io.IDU.RScore.busy1 := true.B
    }
    when(Busy(io.IDU.RScore.rdaddr2)===1.U){
      io.IDU.RScore.busy2 := true.B
    }
  }
}
//bypass forward 旁路转发
/*
根据WB级需要写入的寄存器的号码 判断其与ID-EX级需要读出的是否一致，
一致的话，把寄存器的值给转发给IDU，并且把发给IDU对应的busy拉低
相当于提前一个周期让IDU读到想要的寄存器的值
//接受WBU来的信号
//发送给IDU转发信号
*/
class Wforward extends Bundle{
  //此时里面的wen 信号充当valid
  val valid = Output(Bool())
  val waddr = Output(UInt(parm.REGADDRWIDTH.W))
  val wdata = Output(UInt(parm.REGWIDTH.W))
  //val Regfile = new REGFILEIO
}
class Rforward extends Bundle{
  //val raddr = Output(UInt(parm.REGADDRWIDTH.W))
  val rdata = Output(UInt(parm.REGWIDTH.W))
  val pass1 = Output(Bool())
  val pass2 = Output(Bool())
  
  val rs1   = Input(UInt(parm.REGADDRWIDTH.W))
  val rs2   = Input(UInt(parm.REGADDRWIDTH.W))
  val valid = Input(Bool())
}

class Bypass extends Module {
  val io = IO(new Bundle{
    val WBU = Flipped(new Wforward)
    val IDU = new Rforward
  })
  io.IDU.rdata := io.WBU.wdata
  io.IDU.pass1 := false.B
  io.IDU.pass2 := false.B
  //检测转发信号 和当前IDU的需要读的信号是否一致
  when(io.IDU.valid && io.WBU.valid) {
    when(io.IDU.rs1 === io.WBU.waddr){
      io.IDU.pass1 := true.B
    }
    when(io.IDU.rs2 === io.WBU.waddr){
      io.IDU.pass2 := true.B
    }
  }
}
