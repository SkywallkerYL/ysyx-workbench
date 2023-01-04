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
    val pcin = Mux(io.nop,parm.INITIAL_PC.U,io.ifpc)
    val instrin = Mux(io.nop,io.ifinstr,io.ifinstr)
    io.idpc := RegNext(pcin,parm.INITIAL_PC.U(parm.PCWIDTH.W))
    io.idinstr := RegNext(instrin,0.U(parm.INSTWIDTH.W))
  }
  else {
    //单周期的时候不要在这里引入MUX，即调用nop信号，否则会导致combinational loop
    //因为此时IF_ID 和IFU模块一起组成了组合逻辑，而nop信号来自idu模块通过组合逻辑计算，其本身也是组合逻辑
    //这样子就会有loop 而且单周期也不需要调用
    val pcin = io.ifpc
    val instrin = io.ifinstr
    io.idpc := pcin
    io.idinstr := instrin
  }
}