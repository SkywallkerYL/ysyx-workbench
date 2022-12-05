`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_ID_EX (
    input wire clk,
    input wire rst,

    //from id
    input [`ysyx_22050550_PCBus]            pc_i        ,
    input [`ysyx_22050550_InstBus]          instr_i     ,
    input [`ysyx_22050550_RegBus]           op1_i       ,
    input [`ysyx_22050550_RegBus]           op2_i       ,
    input [4:0]                           rd_addr_i   ,
    input                                 rden_i      ,

    output  reg [`ysyx_22050550_PCBus]          pc_o        ,
    output  reg [`ysyx_22050550_InstBus]        instr_o     ,
    output  reg [`ysyx_22050550_RegBus]         op1_o       ,
    output  reg [`ysyx_22050550_RegBus]         op2_o       ,
    output  reg [4:0]                           rd_addr_o   ,
    output  reg                                 rden_o   
);

    ysyx_22050550_Reg # (
                `ysyx_22050550_PCWIDTH,
                `ysyx_22050550_PCWIDTH'h0
            )
                pci (
                    .clk(clk),
                    .rst(rst),
                    .wen(1'b1),
                    .din(pc_i),
                    .dout(pc_o)
            );
    ysyx_22050550_Reg # (
                `ysyx_22050550_INSTWIDTH,
                `ysyx_22050550_INSTWIDTH'h0
            )
                instri (
                    .clk(clk),
                    .rst(rst),
                    .wen(1'b1),
                    .din(instr_i),
                    .dout(instr_o)
            );
    ysyx_22050550_Reg # (
                `ysyx_22050550_CPUWIDTH,
                `ysyx_22050550_CPUWIDTH'h0
            )
                op1 (
                    .clk(clk),
                    .rst(rst),
                    .wen(1'b1),
                    .din(op1_i),
                    .dout(op1_o)
            );
    ysyx_22050550_Reg # (
                `ysyx_22050550_CPUWIDTH,
                `ysyx_22050550_CPUWIDTH'h0
            )
                op2 (
                    .clk(clk),
                    .rst(rst),
                    .wen(1'b1),
                    .din(op2_i),
                    .dout(op2_o)
            );
    ysyx_22050550_Reg # (5,5'h0) rdi (.clk(clk),.rst(rst),.wen(1'b1),.din(rd_addr_i),.dout(rd_addr_o));
    ysyx_22050550_Reg # (1,1'b0)rdeni (.clk(clk),.rst(rst),.wen(1'b1),.din(rden_i),.dout(rden_o));
    
endmodule