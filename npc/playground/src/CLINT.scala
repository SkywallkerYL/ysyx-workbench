package npc

import chisel3._
import chisel3.util._
//CLINT 外设， mtime 和 mtimecmp寄存器在这里实现
//接受Lsu读入的读写使能和数据
//根据计时器输出中断信号

class CLINTIO extends Bundle{
    //val mie      = Output(UInt(parm.PCWIDTH.W))
    //val mip      = Output(UInt(parm.REGWIDTH.W))
    val mtime    = Output(UInt(parm.REGWIDTH.W))
    val mtimecmp = Output(UInt(parm.REGWIDTH.W))
}


class CLINTLS extends Bundle{
    val ren = Output(Bool())
    val raddr = Output(UInt(parm.REGWIDTH.W))
    val wen = Output(Bool())
    val waddr = Output(UInt(parm.REGWIDTH.W))
    val wdata = Output(UInt(parm.REGWIDTH.W))

    val rdata = Input(UInt(parm.REGWIDTH.W))
}

class CLINT extends Module{
    val io = IO(new Bundle {
    val LsuIn       = Flipped(new Lsu2Clint)
    val ClintReg    = (new CLINTIO)
    val Mtip        = Output(Bool()) 
    val CLINTWB     = new Clint2Wbu
  })

  val mtime = RegInit(0.U(parm.REGWIDTH.W))
  val mtimecmp = RegInit(1000.U(parm.REGWIDTH.W))

  val mtimeren = io.LsuIn.Clintls.ren & (io.LsuIn.Clintls.raddr === parm.MTIMEADDR.U)
  val mtimecmpren = io.LsuIn.Clintls.ren & (io.LsuIn.Clintls.raddr === parm.MTIMECMPADDR.U)

  io.LsuIn.Clintls.rdata := Mux(mtimeren,mtime,Mux(mtimecmpren,mtimecmp,0.U))

  val MTIP = mtime >= mtimecmp

  val mtimewen = io.LsuIn.Clintls.wen & (io.LsuIn.Clintls.waddr === parm.MTIMEADDR.U)
  when(mtimewen) {
    mtime := io.LsuIn.Clintls.wdata
  }.elsewhen(!MTIP){
    mtime := mtime + 1.U
  }.otherwise{
    mtime := mtime
  }



  val mtimecmpwen = io.LsuIn.Clintls.wen & (io.LsuIn.Clintls.waddr === parm.MTIMECMPADDR.U)
  when (mtimecmpwen){
    mtimecmp := io.LsuIn.Clintls.wdata
  }

  io.CLINTWB.Mtip := MTIP
  io.ClintReg.mtime    := mtime
  io.ClintReg.mtimecmp := mtimecmp
}