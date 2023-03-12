`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_WBU(
    input         clock                         ,
                  reset                         ,
    /*********Ls***********/
    input  [63:0] io_LSWB_pc                    ,
    input  [31:0] io_LSWB_inst                  , 
    input         io_LSWB_valid                 ,
    input  [4:0]  io_LSWB_rs1addr               , 
    input         io_LSWB_abort                 ,
                  io_LSWB_jalrflag              ,
                  io_LSWB_readflag              ,
                  io_LSWB_csrflag               ,
                  io_LSWB_ecallflag             ,
                  io_LSWB_mretflag              ,
                  io_LSWB_ebreak                ,
                  io_LSWB_SkipRef               ,
    input  [63:0] io_LSWB_rs2                   ,
                  io_LSWB_imm                   ,  
                  io_LSWB_alures                ,
                  io_LSWB_lsures                ,
    input  [4:0]  io_LSWB_waddr                 ,    
    input         io_LSWB_wen                   ,      
    input  [2:0]  io_LSWB_func3                 , 
    input  [6:0]  io_LSWB_func7                 ,      
    input  [63:0] io_LSWB_NextPc                ,
    /************Regfile*******Csr******/
    input  [63:0] mepc                           ,
    input  [63:0] mcause                         ,
    input  [63:0] mtvec                          ,
    input  [63:0] mstatus                        ,
    input  [63:0] mie                            ,
    input  [63:0] mip                            ,
    input  [63:0] Reg17                          ,
    output [63:0] wbmepc                         ,
    output [63:0] wbmcause                       ,
    output [63:0] wbmtvec                        ,
    output [63:0] wbmstatus                      ,
    output [63:0] wbmie                          ,
    output [63:0] wbmip                          ,
    output [7:0]  wbcsren                        ,  
    /********regfile topdebug************/
    output [63:0] io_WBTOP_pc                    ,
                  io_WBTOP_rs2                   ,
    output [31:0] io_WBTOP_inst                  ,
    output        io_WBTOP_valid                 ,
    output [4:0]  io_WBTOP_rs1                   ,
    output [63:0] io_WBTOP_imm                   ,
    output [4:0]  io_WBTOP_waddr                 ,
    output [63:0] io_WBTOP_wdata                 ,
    output        io_WBTOP_wen                   ,
    output        io_WBTOP_jalrflag              ,               
                  io_WBTOP_ebreak                ,   
                  io_WBTOP_abort                 , 
                  io_WBTOP_SkipRef               ,
    output [63:0] io_WBTOP_NextPc                ,  
    output        io_ReadyWB_ready               
);
    //根据是否是csr 指令或者load指令 决定对寄存器的写回的数据的选取
    wire [11:0] csrind = io_LSWB_inst[31:20]; 
    wire [63:0] csrwritedata;
    ysyx_22050550_MuxKeyWithDefault#(6,12,`ysyx_22050550_REGWIDTH) CsrMux(
        .out(csrwritedata),.key(csrind),.default_out(64'h0),.lut({
        `ysyx_22050550_MTVEC    ,   mtvec   ,
        `ysyx_22050550_MCAUSE   ,   mcause  ,
        `ysyx_22050550_MSTATUS  ,   mstatus ,
        `ysyx_22050550_MEPC     ,   mepc    ,
        `ysyx_22050550_CSRMIE   ,   mie     ,
        `ysyx_22050550_CSRMIP   ,   mip     
    }));
    wire [`ysyx_22050550_RegBus] writebackdata = io_LSWB_csrflag?csrwritedata : io_LSWB_readflag ? io_LSWB_lsures : io_LSWB_alures;
    //处理csr指令 对csr进行写回
    wire [63:0] csrwrite;
    //Idu那边在csrflag拉高的时候就把 rd2置0 这样子这里过来的就是rs1
    ysyx_22050550_MuxKeyWithDefault#(2,3,`ysyx_22050550_REGWIDTH) CsrwriteMux(
        .out(csrwrite),.key(io_LSWB_func3),.default_out(64'h0),.lut({
        3'b001 , io_LSWB_alures, 
        3'b010 , io_LSWB_alures | csrwritedata 
    }));
    //根据匹配结果进行写回
    wire [7:0] csren;
    ysyx_22050550_MuxKeyWithDefault#(6,12,8) CsrenMux(
        .out(csren),.key(csrind),.default_out(8'h0),.lut({
        `ysyx_22050550_MTVEC    ,   8'b00000100 ,
        `ysyx_22050550_MCAUSE   ,   8'b00000010 ,
        `ysyx_22050550_MSTATUS  ,   8'b00001000 ,
        `ysyx_22050550_MEPC     ,   8'b00000001 ,
        `ysyx_22050550_CSRMIE   ,   8'b00010000 ,
        `ysyx_22050550_CSRMIP   ,   8'b00100000     
    }));
    //csrflag为高的情况下的写回使能
    wire [`ysyx_22050550_RegBus] flagwbcsr = csrwrite;
    wire [7:0] flagwbcsren = csren & {(8){io_LSWB_csrflag}};
    //处理一下ecall 和mret
    //ecall时要写Mepc 和mstatus
    wire [7:0] ecallcsren = 8'b00001011; 
    wire [`ysyx_22050550_RegBus] oldmie = mstatus & (64'h8);//保存mie位
    wire [`ysyx_22050550_RegBus] ecallnewmstatus = (mstatus & (~64'h80)) | (oldmie << 4);//赋给mpie
    wire [`ysyx_22050550_RegBus] ecallfinal = ecallnewmstatus & (~64'h8); //mie置0禁用中断
    wire [`ysyx_22050550_RegBus] ecallpc = io_LSWB_pc;
    wire [`ysyx_22050550_RegBus] ecallmcause = (Reg17==(~64'h0)||Reg17<=64'd15)? 64'd11:0;
    //mret
    wire [7:0] mretcsren  = 8'b00001000;
    wire [`ysyx_22050550_RegBus] oldmpie = mstatus & (64'h80);//保存mpie位
    wire [`ysyx_22050550_RegBus] mretnewmstatus = (mstatus & (~64'h8)) | (oldmpie >> 4);//赋给mie
    wire [`ysyx_22050550_RegBus] mretfinal = mretnewmstatus | (64'h80); //恢复使能
    assign wbmepc   =   io_LSWB_csrflag?flagwbcsr :io_LSWB_ecallflag? ecallpc: 0;
    assign wbmcause =   io_LSWB_csrflag?flagwbcsr :io_LSWB_ecallflag? ecallmcause:0 ;
    assign wbmtvec  =   io_LSWB_csrflag?flagwbcsr : 0 ;
    assign wbmstatus=   io_LSWB_csrflag?flagwbcsr :io_LSWB_ecallflag? ecallfinal: io_LSWB_mretflag?mretfinal: 0 ;
    assign wbmie    =   io_LSWB_csrflag?flagwbcsr : 0 ;
    assign wbmip    =   io_LSWB_csrflag?flagwbcsr : 0 ;
    assign wbcsren  =   io_LSWB_csrflag?flagwbcsren :  io_LSWB_ecallflag?ecallcsren:io_LSWB_mretflag?mretcsren:0;

    assign io_WBTOP_pc       =      io_LSWB_pc                         ;
    assign io_WBTOP_inst     =      io_LSWB_inst                       ;
    /*************valid-ready握手信号****************/      
    assign io_WBTOP_valid    =      io_LSWB_valid                      ;
    assign io_ReadyWB_ready  =      1'b1                               ;

    assign io_WBTOP_rs1      =      io_LSWB_rs1addr                    ;
    assign io_WBTOP_abort    =      io_LSWB_abort                      ;
    assign io_WBTOP_rs2      =      io_LSWB_rs2                        ;
    assign io_WBTOP_waddr    =      io_LSWB_waddr                      ;
    assign io_WBTOP_wen      =      io_LSWB_wen                        ;
    assign io_WBTOP_wdata    =      writebackdata                      ;
    assign io_WBTOP_jalrflag =      io_LSWB_jalrflag                   ;
    assign io_WBTOP_SkipRef  =      io_LSWB_SkipRef                    ;
    assign io_WBTOP_ebreak   =      io_LSWB_ebreak                     ;
    assign io_WBTOP_NextPc   =      io_LSWB_NextPc                     ;
endmodule

