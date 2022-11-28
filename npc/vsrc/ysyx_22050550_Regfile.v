`include "ysyx_22050550_define.v"

module ysyx_22050550_Regfile (
    input clk,
    input rst,
    input wen,
    //input rden,

    input [`ysyx_22050550_RegAddrBus]   rs1 ,
    input [`ysyx_22050550_RegAddrBus]   rs2 ,
    input [`ysyx_22050550_RegAddrBus]   rd  ,

    input [`ysyx_22050550_RegBus]       wdata,
    //input [`ysyx_22050550_RegAddrBus]   waddr,

    output [`ysyx_22050550_RegBus]  rd_data1,
    output [`ysyx_22050550_RegBus]  rd_data2
);
    
    reg  [`ysyx_22050550_RegBus] regs [`ysyx_22050550_RegNum-1:0];
    reg  [`ysyx_22050550_RegNum-1:1] regwen;
    assign regs[0] = `ysyx_22050550_CPUWIDTH'h0;
    generate
        for (genvar i = 1; i < `ysyx_22050550_RegNum; i = i+1) begin : regfile
            assign regwen[i] = wen & (rd == i);
            
        end
    endgenerate
    /*
    always @(posedge clk ) begin
        if (wen&(rd!=0)) begin
            regs[rd] = wdata;
        end
    end
    */
    assign rd_data1 = (rs1==5'b0)?`ysyx_22050550_ZeroWord:regs[rs1];
    assign rd_data2 = (rs2==5'b0)?`ysyx_22050550_ZeroWord:regs[rs2];


endmodule