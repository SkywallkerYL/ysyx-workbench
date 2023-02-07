
package  npc
import chisel3._
import chisel3.util._

import chisel3.util.HasBlackBoxInline




class LSU extends Module{
    val io = IO(new Bundle {
      val EXLS = Flipped(new Exu2Lsu)
      val LSWB = new Lsu2Wbu
      //val Regfile_i = Flipped(new REGFILEIO)
      //val LsuRes = Output(UInt(parm.REGWIDTH.W))
      //val AluRes = Output(UInt(parm.REGWIDTH.W))
      //val choose = Output(UInt(parm.RegFileChooseWidth.W))
      //val pc     = Output(UInt(parm.PCWIDTH.W))
      //val NextPc  = Output(UInt(parm.PCWIDTH.W))
//if(parm.DIFFTEST){
      val SkipRef = Output(Bool())
//}
      val Clintls = new CLINTLS 
      //val CsrWb = new CSRWB
  })
  val CLINTREAD  = (io.EXLS.readaddr< parm.CLINTEND.U) && (io.EXLS.readaddr>=parm.CLINTBASE.U)
  val CLINTWRITE = (io.EXLS.writeaddr< parm.CLINTEND.U) && (io.EXLS.writeaddr>=parm.CLINTBASE.U)
  val readdata = Wire(UInt(parm.REGWIDTH.W))
  val LsuDpidata = Wire(UInt(parm.REGWIDTH.W))
  if(parm.DPI){
    val LsuDPI = Module(new LSUDPI) 
    LsuDPI.io.wflag := io.EXLS.wflag & !CLINTWRITE
    LsuDPI.io.rflag := io.EXLS.rflag & !CLINTREAD
    LsuDPI.io.raddr := io.EXLS.readaddr  
    LsuDPI.io.waddr := io.EXLS.writeaddr 
    LsuDPI.io.wdata := io.EXLS.writedata 
    LsuDPI.io.wmask := io.EXLS.wmask 
    LsuDpidata := LsuDPI.io.rdata
    //io.LsuRes := LsuDPI.io.rdata
  }

  readdata := Mux(CLINTREAD,io.Clintls.rdata,LsuDpidata)
  io.SkipRef := false.B
  if(parm.DIFFTEST){
      val readskip = (io.EXLS.readaddr< parm.PMEM_RIGHT.U) && (io.EXLS.readaddr>=parm.PMEM_LEFT.U)
      val writeskip= (io.EXLS.writeaddr< parm.PMEM_RIGHT.U) && (io.EXLS.writeaddr>=parm.PMEM_LEFT.U)
      io.SkipRef := (!readskip& io.EXLS.rflag)| (!writeskip&io.EXLS.wflag)
  }

  val maskRes = MuxLookup(io.EXLS.lsumask, readdata,Seq(
    "b11111".U   -> readdata,
    "b10111".U   ->func.SignExt(func.Mask ((readdata),"x00000000ffffffff".U),32),
    "b10011".U   ->func.SignExt(func.Mask ((readdata),"x000000000000ffff".U),16),
    "b10001".U   ->func.SignExt(func.Mask ((readdata),"x00000000000000ff".U),8),
    "b00111".U   ->func.UsignExt(func.Mask((readdata),"x00000000ffffffff".U),32),
    "b00011".U   ->func.UsignExt(func.Mask((readdata),"x000000000000ffff".U),16),
    "b00001".U   ->func.UsignExt(func.Mask((readdata),"x00000000000000ff".U),8)
  ))
  io.LSWB.LsuRes := maskRes
  io.LSWB.AluRes := io.EXLS.alures
  io.LSWB.choose := io.EXLS.choose
  io.LSWB.CsrWb <> io.EXLS.CsrWb
  io.LSWB.Regfile <> io.EXLS.RegFileIO
  io.LSWB.pc := io.EXLS.pc
  io.LSWB.NextPc := io.EXLS.NextPc
  io.Clintls.wen    := io.EXLS.wflag
  io.Clintls.ren    := io.EXLS.rflag 
  io.Clintls.raddr  := io.EXLS.readaddr 
  io.Clintls.waddr  := io.EXLS.writeaddr
  io.Clintls.wdata  := io.EXLS.writedata

}