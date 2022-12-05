`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_IFU (
    input   [`ysyx_22050550_PCBus]      pc         ,
    input   [`ysyx_22050550_InstBus]    rom_inst   ,
    output  [`ysyx_22050550_PCBus]      rom_pc_addr,
    output  [`ysyx_22050550_PCBus]      if_pc      ,
    output  [`ysyx_22050550_InstBus]    if_inst
);
    assign rom_pc_addr = pc;
    assign if_inst = rom_inst;
    assign if_pc = pc;
endmodule