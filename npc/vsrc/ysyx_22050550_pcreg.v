`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_pcreg(
    input           rst,
    input           clk,
    input           [`ysyx_22050550_PCBus] pc ,
    input           ce,
    output          reg[`ysyx_22050550_PCBus] npc
);

    ysyx_22050550_Reg #(`ysyx_22050550_PCWIDTH,`ysyx_22050550_PCWIDTH'h80000000) regpc (
        .rst(rst),
        .clk(clk),
        .wen(ce),
        .din(pc),
        .dout(npc)
    );
    
endmodule