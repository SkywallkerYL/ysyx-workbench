package empty

import chisel3._
import chisel3.util._



class RegFile extends Module{
    val Regfile = IO(new Bundle {
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
  when (Regfile.wen){
    when (Regfile.waddr =/= 0.U) {reg(Regfile.waddr) := Regfile.wdata}
  }
  //生成出来的verilog文件似乎不会解决冲突的问题
  if(Regfile.raddr1 == 0.U){
      Regfile.rdata1 := 0.U(parm.REGWIDTH)
  }else if (Regfile.raddr1 == Regfile.waddr ){
      Regfile.rdata1 := Regfile.wdata
  }else Regfile.rdata1 := reg(Regfile.raddr1)
  
  if (Regfile.raddr2 == 0.U){
      Regfile.rdata2 := 0.U(parm.REGWIDTH)
  }else if (Regfile.raddr2 == Regfile.waddr ){
      Regfile.rdata2 := Regfile.wdata
  }else Regfile.rdata2 := reg(Regfile.raddr2)
  
  /*
  for (i <- 0 until parm.RegFileReadPorts){
    when (Regfile.raddr(i) === 0.U){
        Regfile.rdata(i) := 0.U(parm.REGWIDTH)
    }.elsewhen (Regfile.raddr(i) === Regfile.waddr ){
        //when (Regfile.waddr === 0.U) {Regfile.rdata(i) := 0.U(parm.REGWIDTH)}
        //.otherwise
        Regfile.rdata(i) := Regfile.wdata
    }.otherwise (Regfile.rdata(i) := reg(Regfile.raddr(i)))
  }
  */
}