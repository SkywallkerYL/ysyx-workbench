package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.BlackBox
import chisel3.experimental._ 


class RegInOut extends Bundle{
    //val a = Input(UInt(parm.REGWIDTH.W))
    //val a = RegInit(VecInit(Seq.fill(parm.RegNumber)(0.U(parm.REGWIDTH.W))))
    val a = Input(Wire(VecInit(Seq.fill(parm.RegNumber)(0.U(parm.REGWIDTH.W)))))
    //val b = Output(UInt(parm.REGWIDTH.W))
}

//val ebrdpi = Module(new ebreakDPI)

class regDPI extends BlackBox with HasBlackBoxInline{
    val io = IO(new RegInOut)
    setInline("regDPI.v",
    """
    |module regDPI(
    |   //input clock,
    |   //input reset,
    |   input [63:0] a [31:0]
    |   //output [63:0] b
    |);
    |
    |//assign b = a;
    |
    |import "DPI-C" function void set_gpr_ptr(input logic [63:0] a[]);
    |//always@(a)begin
    |   //set_gpr_ptr(b);
    |   //b = a;
    |   //set_gpr_ptr(b);
    |//end
    |initial set_gpr_ptr(a);
    |
    |endmodule
    """.stripMargin
    )
}

class regDPIfunc extends Module{
    val io = IO(new InOut)
    val reg = Module(new regDPI)
    reg.io <> io 
}