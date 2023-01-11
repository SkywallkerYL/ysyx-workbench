package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.BlackBox
import chisel3.experimental._ 
//read instr from Mem in C++
class InstrReadIO extends Bundle{
    val a = Input(UInt(parm.PCWIDTH.W))
    val b = Output(UInt(parm.INSTWIDTH.W))
}

class InstrReadDPI extends BlackBox with HasBlackBoxInline{
    val io = IO(new InstrReadIO)
    setInline("InstrReadDPI.v",
    """
    |module InstrReadDPI(
    |   input [63:0]    a,
    |   output reg [31:0] b
    |);
    |
    |import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
    |
    |wire [31:0] rdata;
    |
    |always(*)begin
    |   pmem_read(a,b);
    |end
    |assign b = rdata;
    |
    |endmodule
    """.stripMargin
    )
}