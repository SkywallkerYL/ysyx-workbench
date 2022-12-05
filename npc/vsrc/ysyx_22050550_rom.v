/*
简化实现的rom
*/
`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"

module ysyx_22050550_rom(
    input [`ysyx_22050550_PCBus] instr_addr,
    output reg [`ysyx_22050550_InstBus] instr_o
);

    reg [`ysyx_22050550_InstBus] rom_mem [`ysyx_22050550_InatAddrBus];
    //简化版本，本来一个rom的4个空间存一个指令
    //现在一个空间存一个，所以除以4
    always @(*) begin
        instr_o = rom_mem[instr_addr>>2];
    end



endmodule