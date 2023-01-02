package empty

import chisel3._
import chisel3.util._



class IF_ID extends Module{
    val io = IO(new Bundle {
    val ifpc = Input(UInt(parm.PCWIDTH.W))
    val ifinstr = Input(UInt(parm.INSTWIDTH.W))
    val idpc = Output(UInt(parm.PCWIDTH.W))
    val idinstr =  Output(UInt(parm.INSTWIDTH.W))
  })
  val regpc = RegNext(io.ifpc,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  io.idpc := regpc
  val reginstr = RegNext(io.ifinstr,0.U(parm.INSTWIDTH.W))
  io.idinstr := reginstr
}