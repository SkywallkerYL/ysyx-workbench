`define ysyx_22050550_CPUWIDTH        64
`define ysyx_22050550_INSTWIDTH       32

`define ysyx_22050550_RstEnable       1'b1
`define ysyx_22050550_RstDisable      1'b0
`define ysyx_22050550_ZeroWord        `ysyx_22050550_CPUWIDTH'h0
`define ysyx_22050550_WriteEnable     1'b1
`define ysyx_22050550_WriteDisable    1'b0
`define ysyx_22050550_ReadEnable      1'b1
`define ysyx_22050550_ReadDisable     1'b0
`define ysyx_22050550_InstValid       1'b0
`define ysyx_22050550_InstInvalid     1'b1
`define ysyx_22050550_True_v          1'b1
`define ysyx_22050550_False_v         1'b0
`define ysyx_22050550_ChipEnable      1'b1
`define ysyx_22050550_ChipDisable     1'b0

`define ysyx_22050550_InatAddrBus     (`ysyx_22050550_INSTWIDTH-1):0 // rom 地址总线宽度
`define ysyx_22050550_InstBus         (`ysyx_22050550_INSTWIDTH-1):0 // rom 数据总线宽度

`define ysyx_22050550_RegAddrBus      4:0 // 寄存器堆的地址线宽度
`define ysyx_22050550_RegBus          (`ysyx_22050550_CPUWIDTH-1):0 //寄存器堆的数据线宽度
`define ysyx_22050550_ImmBus          (`ysyx_22050550_INSTWIDTH-1):0
`define ysyx_22050550_RegWidth        `ysyx_22050550_CPUWIDTH
//`define ysyx_22050550_DoubleRegWidth  2*`ysyx_22050550_CPUWIDTH
//`define ysyx_22050550_DoubleRegBus    (2*`ysyx_22050550_CPUWIDTH-1):0
`define ysyx_22050550_RegNum          32
`define ysyx_22050550_RegNumlog2      5
`define ysyx_22050550_NOPRegAddr      5'b00000

`define lui                             7'b0110111
`define auipc                           7'b0010111
`define jal                             7'b1101111
`define jalr                            7'b1100111
`define B_type                          7'b1100011
`define I_type                          7'b0010011
`define R_type                          7'b0110011
`define load                            7'b0000011
`define store                           7'b0100011

`define sext12(imm)         {{(`ysyx_22050550_RISCV-1){imm[11]}},imm};