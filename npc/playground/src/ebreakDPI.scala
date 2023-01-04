package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.BlackBox
import chisel3.experimental._ 

class InOut extends Bundle{
    val a = Input(Bool(1.W))
    val b = Output(Bool(1.W))
}

class ebreakDPI extends BlackBox with HasBlackBoxInline{
    val io = IO(new InOut)
    setInline("ebreakDPI.v",
    """
    |module ebreakDPI(
    |   input a,
    |   output b
    |);
    |
    |assign b = a;
    |
    |export "DPI-C" function ebreakflag;
    |
    |function ebreakflag;
    |   ebreakflag = b;
    |endfunction
    |
    |endmodule
    """.stripMargin
    )
}

class ebreakfunc extends Module{
    val io = IO(new InOut)
    val ebk = Module(new InOut)
    ebk.io <> io 
}