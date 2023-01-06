package  npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.BlackBox
import chisel3.experimental._ 

class PcIO extends Bundle{
    val pc = Input(UInt(parm.PCWIDTH.W))
    val dnpc = Input(UInt(parm.PCWIDTH.W))
}

class pcDPI extends BlackBox with HasBlackBoxInline{
    val io = IO(new PcIO)
    setInline("pcDPI.v",
    """
    |module pcDPI(
    |   input [63:0] pc,
    |   input [63:0] dnpc
    |);
    |
    |export "DPI-C" function [63:0] pc_fetch;
    |export "DPI-C" function [63:0] npc_fetch;
    |function pc_fetch;
    |   pc_fetch = pc;
    |endfunction
    |function npc_fetch;
    |   npc_fetch = dnpc;
    |endfunction
    |endmodule
    """.stripMargin
    )
}