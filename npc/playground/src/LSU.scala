
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
  })
  if(parm.DPI){
    val LsuDPI = Module(new LSUDPI) 
    LsuDPI.io.wflag := io.EXLS_i.wflag
    LsuDPI.io.rflag := io.EXLS_i.rflag 
    LsuDPI.io.raddr := io.EXLS_i.readaddr  
    LsuDPI.io.waddr := io.EXLS_i.writeaddr 
    LsuDPI.io.wdata := io.EXLS_i.writedata 
    LsuDPI.io.wmask := io.EXLS_i.wmask 
    io.LsuRes := LsuDPI.io.rdata
  }
  io.choose := io.EXLS_i.choose

}