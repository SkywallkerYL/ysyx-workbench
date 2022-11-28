`include "ysyx_22050550_define.v"
module ysyx_22050550_pcreg(
    input           rst,
    input           clk,
    input           [`ysyx_22050550_InstBus] pc ,
    input           ce,
    output          reg[`ysyx_22050550_InstBus] npc,
);

    ysyx_22050550_Reg #(32,32'h80000000) regpc (
        .rst(rst),
        .clk(clk),
        .wen(ce),
        .din(pc),
        .dout(npc)
    );
    
endmodule