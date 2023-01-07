package npc

import chisel3._
import chisel3.util._



class PC_REG extends Module{
    val io = IO(new Bundle {
    val pc_i = Input(UInt(parm.PCWIDTH.W))
    val pc_o = Output(UInt(parm.PCWIDTH.W))
  })
  val reg = RegNext(io.pc_i,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  io.pc_o := reg
}