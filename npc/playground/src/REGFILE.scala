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

class RegFile extends Module{
    val io = IO(new Bundle {
    val wen = Input(Bool())
    val waddr = Input(UInt(parm.REGADDRWIDTH.W))
    val wdata = Input(UInt(parm.REGWIDTH.W))
    val raddr1 = Input(UInt(parm.REGADDRWIDTH.W))
    val raddr2 = Input(UInt(parm.REGADDRWIDTH.W))
    val pc = Input(UInt(parm.PCWIDTH.W))
    val rdata1 = Output(UInt(parm.REGWIDTH.W))
    val rdata2 = Output(UInt(parm.REGWIDTH.W))
    val a0data = Output(UInt(parm.REGWIDTH.W))
    val Reg17  = Output(UInt(parm.REGWIDTH.W))
    //val raddr = Input(Vec(parm.RegFileReadPorts,UInt(parm.REGADDRWIDTH.W)))
    //val rdata = Output(Vec(parm.RegFileReadPorts,UInt(parm.REGWIDTH.W)))
    //CSR
    //val csren   = Input(Bool())
    //val mepcen   = Input(Bool())  
    //val mcauseen = Input(Bool())
    //val mtvecen  = Input(Bool())
    //val mstatusen= Input(Bool())
    //val NO      = Input(UInt(parm.REGWIDTH.W))
    val csraddr = Input(UInt(parm.CSRNUMBER.W))
    val CSRInput= Flipped(new CSRIO)
    val CSR = (new CSRIO)
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
    regdpi.io.mepc      := io.CSR.mepc    
    regdpi.io.mcause    := io.CSR.mcause  
    regdpi.io.mtvec     := io.CSR.mtvec   
    regdpi.io.mstatus  := io.CSR.mstatus
    //regdpi.io.a(1) := reg(1)
    //regdpi.io.clock := io.clock
    //regdpi.io.reset := io.reset
    //printf(p"reg(1)=${(regdpi.io.b)} \n")
  }
  when (io.wen){
    when (io.waddr =/= 0.U) {reg(io.waddr) := io.wdata}
  }
  //生成出来的verilog文件似乎不会解决冲突的问题

  if(io.raddr1 == 0.U){
      io.rdata1 := 0.U(parm.REGWIDTH.W)
  }else if (io.raddr1 == io.waddr ){
      io.rdata1 := io.wdata
  }else io.rdata1 := reg(io.raddr1)
  
  if (io.raddr2 == 0.U){
      io.rdata2 := 0.U(parm.REGWIDTH.W)
  }else if (io.raddr2 == io.waddr ){
      io.rdata2 := io.wdata
  }else io.rdata2 := reg(io.raddr2)
  //这样写会有combinational loop
  /*
  when(io.raddr1 === 0.U){
      io.rdata1 := 0.U(parm.REGWIDTH.W)
  }.elsewhen (io.raddr1 === io.waddr ){
      io.rdata1 := io.wdata
  }.otherwise {io.rdata1 := reg(io.raddr1)}
  
  when (io.raddr2 === 0.U){
      io.rdata2 := 0.U(parm.REGWIDTH.W)
  }.elsewhen(io.raddr2 === io.waddr ){
      io.rdata2 := io.wdata
  }.otherwise {io.rdata2 := reg(io.raddr2)}
  */
  //CSR
  val mepcen   =  (io.csraddr(0))
  val mcauseen =  (io.csraddr(1))
  val mtvecen  =  (io.csraddr(2))
  val mstatusen=  (io.csraddr(3))

  when(mepcen){
    mepc := io.CSRInput.mepc
  }
  when(mcauseen){
    mcause := io.CSRInput.mcause
  }
  when(mtvecen){
    mtvec := io.CSRInput.mtvec
  }
  when(mstatusen){
    mstatus := io.CSRInput.mstatus
  }
  io.CSR.mepc     := mepc
  io.CSR.mcause   := mcause
  io.CSR.mtvec    := mtvec
  io.CSR.mstatus  := mstatus
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
  //for io_halt it can be removed when it is not need
  io.a0data := reg(10)
  //REG 17 STORE THE no FOR csrs
  io.Reg17 := reg(17)
}