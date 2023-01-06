package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.BlackBox
import chisel3.experimental._ 

class InstrIO extends Bundle{
    val a = Input(UInt(parm.INSTWIDTH.W))
}

class InstrFetchDPI extends BlackBox with HasBlackBoxInline{
    val io = IO(new InstrIO)
    setInline("InstrFetchDPI.v",
    """
    |module InstrFetchDPI(
    |   input [31:0]a
    |);
    |
    |export "DPI-C" function instr_fetch;
    |
    |function instr_fetch;
    |   instr_fetch = a;
    |endfunction
    |
    |endmodule
    """.stripMargin
    )
}