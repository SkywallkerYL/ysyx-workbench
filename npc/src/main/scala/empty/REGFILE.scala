package empty

import chisel3._
import chisel3.util._



class RegFile extends Module{
    val Regfile = IO(new Bundle {
    val wen = Input(Bool())
    val waddr = Input(UInt(parm.REGADDRWIDTH.W))
    val wdata = Input(UInt(parm.REGWIDTH.W))
    val raddr = Input(Vec(parm.RegFileReadPorts,UInt(parm.REGADDRWIDTH.W)))
    val rdata = Output(Vec(parm.RegFileReadPorts,UInt(parm.REGWIDTH.W)))
  })
  val reg = RegInit(VecInit(Seq.fill(parm.RegNumber)(0.U(parm.REGWIDTH.W))))
  when (Regfile.wen){
    when (Regfile.waddr =/= 0.U) {reg(Regfile.waddr) := Regfile.wdata}
  }
  for (i <- 0 until parm.RegFileReadPorts){
    when (Regfile.raddr(i) === 0.U){
        Regfile.rdata(i) := 0.U(parm.REGWIDTH)
    }.elsewhen (Regfile.raddr(i) === Regfile.waddr ){
        //when (Regfile.waddr === 0.U) {Regfile.rdata(i) := 0.U(parm.REGWIDTH)}
        //.otherwise
        Regfile.rdata(i) := Regfile.wdata
    }.otherwise (Regfile.rdata(i) := reg(Regfile.raddr(i)))
  }
}