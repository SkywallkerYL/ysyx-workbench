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
    val wen = Input(Bool())
    val waddr = Input(UInt(parm.REGADDRWIDTH.W))
    val wdata = Input(UInt(parm.REGWIDTH.W))
    val IDRegFile = Flipped((new Idu2Regfile))
    val RegFileID = ((new Regfile2Idu))
    
    //val raddr1 = Input(UInt(parm.REGADDRWIDTH.W))
    //val raddr2 = Input(UInt(parm.REGADDRWIDTH.W))
    val pc = Input(UInt(parm.PCWIDTH.W))
    //val rdata1 = Output(UInt(parm.REGWIDTH.W))
    //val rdata2 = Output(UInt(parm.REGWIDTH.W))
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
  //CSR 
    val csraddr = Input(UInt(parm.CSRNUMBER.W))
    val CSRInput= Flipped(new CSRIO)
    //val CSR = (new CSRIO)
  //CLINT
      

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
    //regdpi.io.a(1) := reg(1)
    //regdpi.io.clock := io.clock
    //regdpi.io.reset := io.reset
    //printf(p"reg(1)=${(regdpi.io.b)} \n")
  }
  when (io.wen){
    when (io.waddr =/= 0.U) {reg(io.waddr) := io.wdata}
  }
  //生成出来的verilog文件似乎不会解决冲突的问题

  if(io.IDRegFile.raddr1 == 0.U){
      io.RegFileID.rdata1 := 0.U(parm.REGWIDTH.W)
  }else if (io.IDRegFile.raddr1 == io.waddr ){
      io.RegFileID.rdata1 := io.wdata
  }else io.RegFileID.rdata1 := reg(io.IDRegFile.raddr1)
  
  if (io.IDRegFile.raddr2 == 0.U){
      io.RegFileID.rdata2 := 0.U(parm.REGWIDTH.W)
  }else if (io.IDRegFile.raddr2 == io.waddr ){
      io.RegFileID.rdata2 := io.wdata
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
  val mieen = (io.csraddr(4))
  val mipen = (io.csraddr(5))
  val mie   = RegInit(0.U(parm.REGWIDTH.W))
  val mip   = RegInit(0.U(parm.REGWIDTH.W))

  when(mieen){
    mie := io.CSRInput.mie
  }
  when(mipen){
    mip := io.CSRInput.mip
  }

  io.RegFileID.CSRs.mie := mie 
  io.RegFileID.CSRs.mip := mip
  //for io_halt it can be removed when it is not need
  io.a0data := reg(10)
  //REG 17 STORE THE no FOR csrs
  io.Reg17 := reg(17)
}