package npc
import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.BlackBox
import chisel3.experimental._ 


class RegInOut extends Bundle{
    //val a = Input(UInt(parm.REGWIDTH.W))
    //val a = RegInit(VecInit(Seq.fill(parm.RegNumber)(0.U(parm.REGWIDTH.W))))
    val a = Input(Vec(parm.RegNumber,UInt(parm.REGWIDTH.W)))
    val pc = Input(UInt(parm.PCWIDTH.W))
    //val b = Output(UInt(parm.REGWIDTH.W))
}

//val ebrdpi = Module(new ebreakDPI)

class regDPI extends BlackBox with HasBlackBoxInline{
    val io = IO(new RegInOut)
    setInline("regDPI.v",
    """
    |module regDPI(
    |   //input clock,
    |   input [63:0] a_0 ,
    |   input [63:0] a_1 ,
    |   input [63:0] a_2 ,
    |   input [63:0] a_3 ,
    |   input [63:0] a_4 ,
    |   input [63:0] a_5 ,
    |   input [63:0] a_6 ,
    |   input [63:0] a_7 ,
    |   input [63:0] a_8 ,
    |   input [63:0] a_9 ,
    |   input [63:0] a_10,
    |   input [63:0] a_11,
    |   input [63:0] a_12,
    |   input [63:0] a_13,
    |   input [63:0] a_14,
    |   input [63:0] a_15,
    |   input [63:0] a_16,
    |   input [63:0] a_17,
    |   input [63:0] a_18,
    |   input [63:0] a_19,
    |   input [63:0] a_20,
    |   input [63:0] a_21,
    |   input [63:0] a_22,
    |   input [63:0] a_23,
    |   input [63:0] a_24,
    |   input [63:0] a_25,
    |   input [63:0] a_26,
    |   input [63:0] a_27,
    |   input [63:0] a_28,
    |   input [63:0] a_29,
    |   input [63:0] a_30,
    |   input [63:0] a_31,
    |   input [63:0] pc
    |   //input reset,
    |   //input [63:0] a [31:0]
    |   //output [63:0] b
    |);
    |reg [63:0] a [32:0];
    |assign a[0] = a_0 ;
    |assign a[1] = a_1 ;
    |assign a[2] = a_2 ;
    |assign a[3] = a_3 ;
    |assign a[4] = a_4 ;
    |assign a[5] = a_5 ;
    |assign a[6] = a_6 ;
    |assign a[7] = a_7 ;
    |assign a[8] = a_8 ;
    |assign a[9] = a_9 ;
    |assign a[10] = a_10;
    |assign a[11] = a_11;
    |assign a[12] = a_12;
    |assign a[13] = a_13;
    |assign a[14] = a_14;
    |assign a[15] = a_15;
    |assign a[16] = a_16;
    |assign a[17] = a_17;
    |assign a[18] = a_18;
    |assign a[19] = a_19;
    |assign a[20] = a_20;
    |assign a[21] = a_21;
    |assign a[22] = a_22;
    |assign a[23] = a_23;
    |assign a[24] = a_24;
    |assign a[25] = a_25;
    |assign a[26] = a_26;
    |assign a[27] = a_27;
    |assign a[28] = a_28;
    |assign a[29] = a_29;
    |assign a[30] = a_30;
    |assign a[31] = a_31;
    |assign a[32] = pc;
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