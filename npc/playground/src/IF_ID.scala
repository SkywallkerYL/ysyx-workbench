package npc

import chisel3._
import chisel3.util._



class IF_ID extends Module{
    val io = IO(new Bundle {
    val ifpc = Input(UInt(parm.PCWIDTH.W))
    val ifinstr = Input(UInt(parm.INSTWIDTH.W))
    val nop = Input(Bool())
    val idpc = Output(UInt(parm.PCWIDTH.W))
    val idinstr =  Output(UInt(parm.INSTWIDTH.W))
  })
  //由于中途会有pc跳转，如果这一级是流水线的话，那么会导致后面一条指令被执行，因此
  //这里要根据NOP指令来决定是否刷新
  
  if(parm.pip){

    io.idpc := RegNext(io.ifpc,parm.INITIAL_PC.U(parm.PCWIDTH.W))
    io.idinstr := RegNext(io.ifinstr,0.U(parm.INSTWIDTH.W))
  }
  else {
    io.idpc := Mux(io.nop,parm.INITIAL_PC.U,io.ifpc)
    io.idinstr := Mux(io.nop,0.U,io.ifinstr)
  }
}