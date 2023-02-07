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
    val CSR = new CSRIO
    //val CsrAddr = Output(UInt(parm.CSRNUMBER.W))//寄存器写使能
    //val CSRs = Output(UInt(parm.REGWIDTH.W))
    val CsrAddr = Output(UInt(parm.CSRNUMBER.W))
    val CsrExuChoose = Output(UInt(parm.CSRNUMBER.W))
    val ecall = Output(Bool())
    val mret  = Output(Bool())
    val csrflag = Output(Bool())
    //val rdata = Output(UInt(parm.REGWIDTH.W))
}

class RegFile extends Module{
    val io = IO(new Bundle {
    //val wen = Input(Bool())
    //val waddr = Input(UInt(parm.REGADDRWIDTH.W))
    //val wdata = Input(UInt(parm.REGWIDTH.W))
    val IDRegFile = Flipped((new Idu2Regfile))
    val WBREG = Flipped((new Wbu2Regfile))
    val REGWB = new Regfile2Wbu
    val pc = Input(UInt(parm.PCWIDTH.W))
    val RegFileID = ((new Regfile2Idu))
    val a0data = Output(UInt(parm.REGWIDTH.W))
    val Reg17  = Output(UInt(parm.REGWIDTH.W))

      

  })
  val reg = RegInit(VecInit(Seq.fill(parm.RegNumber)(0.U(parm.REGWIDTH.W))))
  val mepc    = RegInit(0.U(parm.REGWIDTH.W))
  val mstatus = RegInit(parm.INITIAL_MSTATUS.U(parm.REGWIDTH.W))
  val mtvec   = RegInit(0.U(parm.REGWIDTH.W))
  val mcause  = RegInit(0.U(parm.REGWIDTH.W))
  if(parm.DPI){
    val regdpi = Module(new regDPI)
    for(i <- 1 until 32){
      regdpi.io.a(i) := reg(i)
    }
    regdpi.io.pc        := io.pc
    regdpi.io.mepc      := io.RegFileID.CSRs.mepc    
    regdpi.io.mcause    := io.RegFileID.CSRs.mcause  
    regdpi.io.mtvec     := io.RegFileID.CSRs.mtvec   
    regdpi.io.mstatus  := io.RegFileID.CSRs.mstatus
    regdpi.io.mie      := io.RegFileID.CSRs.mie
    regdpi.io.mip      := io.RegFileID.CSRs.mip
  }
  when (io.WBREG.Regfile.wen){
    when (io.WBREG.Regfile.waddr =/= 0.U) {reg(io.WBREG.Regfile.waddr) := io.WBREG.Regfile.wdata}
  }
  //生成出来的verilog文件似乎不会解决冲突的问题

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
  //for io_halt it can be removed when it is not need
  io.a0data := reg(10)
  //REG 17 STORE THE no FOR csrs
  io.REGWB.Reg17 := reg(17)
}