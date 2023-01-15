
package  npc
import chisel3._
import chisel3.util._

import chisel3.util.HasBlackBoxInline

class LSU extends Module{
    val io = IO(new Bundle {
      val EXLS_i = Flipped(new EXLSIO)
      //val Regfile_i = Flipped(new REGFILEIO)
      val LsuRes = Output(UInt(parm.REGWIDTH.W))
      val choose = Output (UInt(parm.RegFileChooseWidth.W))
//if(parm.DIFFTEST){
      val SkipRef = Output(Bool())
//}
  })
  val readdata = Wire(UInt(parm.REGWIDTH.W))
  if(parm.DPI){
    val LsuDPI = Module(new LSUDPI) 
    LsuDPI.io.wflag := io.EXLS_i.wflag
    LsuDPI.io.rflag := io.EXLS_i.rflag 
    LsuDPI.io.raddr := io.EXLS_i.readaddr  
    LsuDPI.io.waddr := io.EXLS_i.writeaddr 
    LsuDPI.io.wdata := io.EXLS_i.writedata 
    LsuDPI.io.wmask := io.EXLS_i.wmask 
    readdata := LsuDPI.io.rdata
    //io.LsuRes := LsuDPI.io.rdata
  }
  io.SkipRef := false.B
  if(parm.DIFFTEST){
      val readskip = (io.EXLS_i.readaddr< parm.PMEM_RIGHT.U) && (io.EXLS_i.readaddr>=parm.PMEM_LEFT.U)
      val writeskip= (io.EXLS_i.writeaddr< parm.PMEM_RIGHT.U) && (io.EXLS_i.writeaddr>=parm.PMEM_LEFT.U)
      io.SkipRef := (!readskip& io.EXLS_i.rflag)| (!writeskip&io.EXLS_i.wflag)
}

  val maskRes = MuxLookup(io.EXLS_i.lsumask, readdata,Seq(
    "b11111".U   -> readdata,
    "b10111".U   ->func.SignExt(func.Mask((readdata),"x00000000ffffffff".U),32),
    "b10011".U   ->func.SignExt(func.Mask((readdata),"x000000000000ffff".U),16),
    "b10001".U   ->func.SignExt(func.Mask((readdata),"x00000000000000ff".U),8),
    "b00111".U   ->func.UsignExt(func.Mask((readdata),"x00000000ffffffff".U),32),
    "b00011".U   ->func.UsignExt(func.Mask((readdata),"x000000000000ffff".U),16),
    "b00001".U   ->func.UsignExt(func.Mask((readdata),"x00000000000000ff".U),8)
    //OpType.ADDW -> func.SignExt(func.Mask((src1+src2),"x0000ffff".U),32),
  ))
  io.LsuRes := maskRes
  io.choose := io.EXLS_i.choose

}