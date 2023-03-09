`define ysyx_22050550_REGWIDTH        64
`define ysyx_22050550_INSTWIDTH       32

`define ysyx_22050550_InstBus         (`ysyx_22050550_INSTWIDTH-1):0
`define ysyx_22050550_RegAddrBus      4:0 // 寄存器堆的地址线宽度
`define ysyx_22050550_RegBus          (`ysyx_22050550_REGWIDTH-1):0 //寄存器堆的数据线宽度

`define ysyx_22050550_U1              7'b0010111
`define ysyx_22050550_U2              7'b0110111
`define ysyx_22050550_I1              7'b0011011
`define ysyx_22050550_I2              7'b0010011
`define ysyx_22050550_I3              7'b0000011
`define ysyx_22050550_I4              7'b1100111
`define ysyx_22050550_I5              7'b1110011 //CSR
`define ysyx_22050550_J1              7'b1101111
`define ysyx_22050550_R1              7'b0110011
`define ysyx_22050550_R2              7'b0111011
`define ysyx_22050550_S1              7'b0100011
`define ysyx_22050550_B1              7'b1100011

//Load func3
`define ysyx_22050550_LB              3'b000
`define ysyx_22050550_LH              3'b001
`define ysyx_22050550_LW              3'b010
`define ysyx_22050550_LD              3'b011
`define ysyx_22050550_LWU             3'b110
`define ysyx_22050550_LHU             3'b101
`define ysyx_22050550_LBU             3'b100
//ExuOp
//部分指令需要细分 因为要在EXU阶段进行阶段以及符号拓展
`define ysyx_22050550_ADD             5'd0
`define ysyx_22050550_SUB             5'd1
`define ysyx_22050550_SLTU            5'd2
`define ysyx_22050550_SRA             5'd3
`define ysyx_22050550_AND             5'd4
`define ysyx_22050550_SLL             5'd5
`define ysyx_22050550_SLLW            5'd15
`define ysyx_22050550_XOR             5'd6
`define ysyx_22050550_OR              5'd7
`define ysyx_22050550_SRL             5'd8
`define ysyx_22050550_MUL             5'd9
`define ysyx_22050550_MULW            5'd16
`define ysyx_22050550_DIVS            5'd10
`define ysyx_22050550_REMS            5'd11
`define ysyx_22050550_SLT             5'd12
`define ysyx_22050550_DIV             5'd13
`define ysyx_22050550_REM             5'd14
//Pmem
`define ysyx_22050550_PLeft           64'h80000000
`define ysyx_22050550_PRight          64'h87ffffff
//csr
`define ysyx_22050550_MTVEC           12'h305
`define ysyx_22050550_MCAUSE          12'h342
`define ysyx_22050550_MSTATUS         12'h300
`define ysyx_22050550_MEPC            12'h341
`define ysyx_22050550_CSRMIE          12'h304
`define ysyx_22050550_CSRMIP          12'h344