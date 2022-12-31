package empty

import chisel3._
import chisel3.util._



class IF_ID extends Module{
    val if_id = IO(new Bundle {
    val ifpc = Input(UInt(parm.PCWIDTH.W))
    val ifinstr = Input(UInt(parm.INSTWIDTH.W))
    val idpc = Output(UInt(parm.PCWIDTH.W))
    val idinstr =  Output(UInt(parm.INSTWIDTH.W))
  })
  val regpc = RegNext(if_id.ifpc,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  if_id.idpc := regpc
  val reginstr = RegNext(if_id.ifinstr,0.U(parm.INSTWIDTH.W))
  if_id.idinstr := reginstr
}