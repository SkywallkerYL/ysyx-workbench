package empty

import chisel3._
import chisel3.util._



class PC_REG extends Module{
    val pcreg = IO(new Bundle {
    val pc_i = Input(UInt(parm.PCWIDTH.W))
    val pc_o = Output(UInt(parm.PCWIDTH.W))
  })
  val reg = RegNext(pcreg.pc_i,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  pcreg.pc_o := reg
}