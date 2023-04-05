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

//Cache
`define ysyx_22050550_AddrWidth       64
`define ysyx_22050550_DataWidth       8     // 默认主存一个地址存8位
`define ysyx_22050550_BlockWidth      4     // CACHE一行128   8* 2^4
`define ysyx_22050550_BlockBus        (`ysyx_22050550_BlockWidth-1):0
`define ysyx_22050550_BlockNum        2**(`ysyx_22050550_BlockWidth)  
//`define ysyx_22050550_CACHEDEBUG
//`define ysyx_22050550_IDUDEBUG  
//`define ysyx_22050550_EXUDEBUG 
//`define ysyx_22050550_WBUDEBUG
//`define ysyx_22050550_LSUDEBUG
`define ysyx_22050550_DEBUGPC         64'h80001ff4
//64路感觉太多了 ，将一块CACHE分成多个组， 暂定4路组相连 一块CACHE分成16组
//只用一块RAM
`define ysyx_22050550_AssoWidth       2     //
`define ysyx_22050550_AssoNum         2**(`ysyx_22050550_AssoWidth)    //2^2   4路组相连
`define ysyx_22050550_GroupWidth       4     //两组
`define ysyx_22050550_GroupBus         (`ysyx_22050550_GroupWidth-1):0
`define ysyx_22050550_GroupBlockBus    (`ysyx_22050550_GroupWidth+`ysyx_22050550_AssoWidth-1):0
`define ysyx_22050550_GroupNum         2**(`ysyx_22050550_GroupWidth)
`define ysyx_22050550_TagWidth        24    // 64-4-4 addr-group-block  32减野性
`define ysyx_22050550_TagBus          (`ysyx_22050550_TagWidth-1):0    
//`define ysyx_22050550_TagUseRam
//`define ysyx_22050550_RealRam
//`define ysyx_22050550_DEVICEUSEAXI
`define ysyx_22050550_UseArbiter
`define ysyx_22050550_CacheUseLFSR

`define ysyx_22050550_LSUUSECACHE
`define ysyx_22050550_IFUUSECACHE


`define ysyx_22050550_PipBundle
//部分数组型的寄存器使用模板的话会极大的降低仿真效率，打开这个开关使用不用模板实现的寄存器
`define ysyx_22050550_FAST