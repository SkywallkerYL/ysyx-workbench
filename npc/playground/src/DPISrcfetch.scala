package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.BlackBox
import chisel3.experimental._ 

class SrcIO extends Bundle{
    val rs1 = Input(UInt(parm.REGADDRWIDTH.W))
    val rd = Input(UInt(parm.REGADDRWIDTH.W))
    val imm = Input(UInt(parm.REGWIDTH.W))
}

class SrcFetchDPI extends BlackBox with HasBlackBoxInline{
    val io = IO(new SrcIO)
    setInline("SrcFetchDPI.v",
    """
    |module SrcFetchDPI(
    |   input [4:0] rs1,
    |   input [4:0] rd,
    |   input [63:0] imm
    |);
    |
    |export "DPI-C" function rs1_fetch;
    |
    |function int rs1_fetch;
    |   rs1_fetch = rs1;
    |endfunction
    |
    |export "DPI-C" function rd_fetch;
    |
    |function int rd_fetch;
    |   rd_fetch = rd;
    |endfunction
    |
    |export "DPI-C" function imm_fetch;
    |
    |function longint imm_fetch;
    |   imm_fetch = imm;
    |endfunction
    |
    |endmodule
    """.stripMargin
    )
}