/*
 * Dummy file to start a Chisel project.
 *
 * Author: Martin Schoeberl (martin@jopdesign.com)
 * 
 */

package empty

import chisel3._
import chisel3.util._

class Add extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(8.W))
    val b = Input(UInt(8.W))
    val c = Output(UInt(8.W))
  })

  val reg = RegInit(0.U(8.W))
  reg := io.a + io.b

  io.c := reg
}

class Add1(val width : Int = 4) extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(width.W))
    val b = Input(UInt(width.W))
    val c = Output(UInt(width.W))
  })

  val reg = RegInit(0.U(width.W))
  reg := io.a + io.b

  io.c := reg
}
