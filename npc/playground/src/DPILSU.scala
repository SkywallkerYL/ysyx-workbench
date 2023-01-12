package  npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.BlackBox
import chisel3.experimental._ 
//read instr from Mem in C++
class LSUIO extends Bundle{
    val wflag = Input(Bool())
    val rflag = Input(Bool())
    val raddr = Input(UInt(parm.REGWIDTH.W))
    val waddr = Input(UInt(parm.REGWIDTH.W))
    val wdata = Input(UInt(parm.REGWIDTH.W))
    val wmask = Input (UInt(parm.BYTEWIDTH.W))
    val rdata = Output(UInt(parm.REGWIDTH.W))
}

class LSUDPI extends BlackBox with HasBlackBoxInline{
    val io = IO(new LSUIO)
    setInline("LSUDPI.v",
    """
    |module LSUDPI(
    |    input wflag ,
    |    input rflag ,
    |    input [63:0]  raddr,
    |    input [63:0]  waddr,
    |    input [63:0]  wdata,
    |    input [7:0]  wmask,
    |    output [63:0]  rdata
    |);
    |
    |import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
    |import "DPI-C" function void pmem_write(input longint waddr, input longint wdata,input byte wmask);
    |
    |wire [63:0] rdata1;
    |
    |always@(*)begin
    |   if(wflag) pmem_write(waddr,wdata,wmask);
    |   //else pmem_write(0,0,0);
    |   if(rflag) pmem_read(raddr,rdata1);
    |   //else pmem_read(0,rdata1);
    |end
    |assign rdata = rdata1;
    |
    |endmodule
    """.stripMargin
    )
}