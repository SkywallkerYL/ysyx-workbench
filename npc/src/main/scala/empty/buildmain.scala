package empty

import chisel3._
import chisel3.util._


object cpubuild extends App {
  println("Generating the riscv-cpu hardware")
  //emitVerilog(new Add(), Array("--target-dir", "vsrc"))
  //emitVerilog(new Add1(parm.CPUWIDTH), Array("--target-dir", "vsrc"))
  emitVerilog(new PC_REG(), Array("--target-dir", "vsrc"))
  emitVerilog(new IFU(), Array("--target-dir", "vsrc"))
  emitVerilog(new IF_ID(), Array("--target-dir", "vsrc"))
  emitVerilog(new RegFile(), Array("--target-dir", "vsrc"))
  emitVerilog(new IDU(), Array("--target-dir", "vsrc"))
  
}
