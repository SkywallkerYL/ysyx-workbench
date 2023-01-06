package npc

import chisel3._
import chisel3.util._



class RegFile extends Module{
    val io = IO(new Bundle {
    val wen = Input(Bool())
    val waddr = Input(UInt(parm.REGADDRWIDTH.W))
    val wdata = Input(UInt(parm.REGWIDTH.W))
    val raddr1 = Input(UInt(parm.REGADDRWIDTH.W))
    val raddr2 = Input(UInt(parm.REGADDRWIDTH.W))
    val rdata1 = Output(UInt(parm.REGWIDTH.W))
    val rdata2 = Output(UInt(parm.REGWIDTH.W))
    //val raddr = Input(Vec(parm.RegFileReadPorts,UInt(parm.REGADDRWIDTH.W)))
    //val rdata = Output(Vec(parm.RegFileReadPorts,UInt(parm.REGWIDTH.W)))
  })
  val reg = RegInit(VecInit(Seq.fill(parm.RegNumber)(0.U(parm.REGWIDTH.W))))
  if(parm.DPI){
    val regdpi = Module(new regDPI)
    for(i <- 1 until 32){
      regdpi.io.a(i) := reg(i)
    }
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
}