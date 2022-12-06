`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
/*
取指令
这里的MEM不通过RTL实现，而是通过C++来实现
这里INST拉到顶层，通过顶层来实现取出指令
*/
module ysyx_22050550_IF_ID (
    input                                   rst         ,
    input                                   clk         ,
    input reg [`ysyx_22050550_PCBus]      if_pc       ,
    input reg [`ysyx_22050550_InstBus]      if_inst     ,

    output  reg [`ysyx_22050550_PCBus]    id_pc       ,
    output  reg [`ysyx_22050550_InstBus]    id_inst     
);
    ysyx_22050550_Reg #(`ysyx_22050550_PCWIDTH,`ysyx_22050550_PCWIDTH'h80000000) regpc (
        .rst(rst),
        .clk(clk),
        .wen(`ysyx_22050550_WriteEnable),
        .din(if_pc),
        .dout(id_pc)
    );
    //也可以复位到nop指令，什么都不做，这个后面实现了再说
    ysyx_22050550_Reg #(`ysyx_22050550_INSTWIDTH,`ysyx_22050550_INSTWIDTH'h00000000) reginst(
        .rst(rst),
        .clk(clk),
        .wen(`ysyx_22050550_WriteEnable),
        .din(if_inst),
        .dout(id_inst)
    );
    
endmodule