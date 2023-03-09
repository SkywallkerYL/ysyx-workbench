`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_REGS(
    input         clock                         ,
                  reset                         ,
    /************Regfile*******Csr******/
    output [63:0] mepc                           ,
    output [63:0] mcause                         ,
    output [63:0] mtvec                          ,
    output [63:0] mstatus                        ,
    output [63:0] mie                            ,
    output [63:0] mip                            ,
    output [63:0] Reg17                          ,
    input  [63:0] pc                             ,
    input  [63:0] wbmepc                         ,
    input  [63:0] wbmcause                       ,
    input  [63:0] wbmtvec                        ,
    input  [63:0] wbmstatus                      ,
    input  [63:0] wbmie                          ,
    input  [63:0] wbmip                          ,
    input  [7:0]  wbcsren                        ,
    input  [4:0]  io_IDU_raddr1                  ,
    input  [4:0]  io_IDU_raddr2                  ,
    input  [4:0]  io_waddr                       ,
    input  [63:0] io_wdata                       ,
    input         io_wen                         ,
    output [63:0] io_IDU_rdata1                  ,
    output [63:0] io_IDU_rdata2                  
);
    //
    reg  [`ysyx_22050550_RegBus] regs [38 : 0] ;//32+pc+6 = 39
    wire [31:1] regwen;
    assign regs[0] = 64'd0;
    generate
        for (genvar i = 1; i < 32; i = i+1) begin : regfile
            assign regwen[i] = io_wen & (io_waddr == i);
            ysyx_22050550_Reg # (
                `ysyx_22050550_REGWIDTH,
                64'd0
            )
                regi (
                    .clock(clock),
                    .reset(reset),
                    .wen(regwen[i]),
                    .din(io_wdata),
                    .dout(regs[i])
            );
        end
    endgenerate
    //pc regs[32]
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)regpc (
        .clock(clock),
        .reset(reset),
        .wen(1'b1),
        .din(pc),
        .dout(regs[32])
    );
    //mepc 
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0) Rmepc (
        .clock(clock),
        .reset(reset),
        .wen(wbcsren[0]),
        .din(wbmepc),
        .dout(regs[33])
    );
    //mcause
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0) Rmcause (
        .clock(clock),
        .reset(reset),
        .wen(wbcsren[1]),
        .din(wbmcause),
        .dout(regs[34])
    );
    //mtvec
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Rmtvec (
        .clock(clock),
        .reset(reset),
        .wen(wbcsren[2]),
        .din(wbmtvec),
        .dout(regs[35])
    );
    //mstatus;
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'hA00001800)Rmstatus (
        .clock(clock),
        .reset(reset),
        .wen(wbcsren[3]),
        .din(wbmstatus),
        .dout(regs[36])
    );
    //mie;
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Rmie (
        .clock(clock),
        .reset(reset),
        .wen(wbcsren[4]),
        .din(wbmie),
        .dout(regs[37])
    );
    //mip
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Rmip (
        .clock(clock),
        .reset(reset),
        .wen(wbcsren[5]),
        .din(wbmip),
        .dout(regs[38])
    );
    //DPI
    import "DPI-C" function void set_gpr_ptr(input logic [63:0] regs[]);
    initial set_gpr_ptr(regs);
    
    assign mepc    = regs[33]       ;
    assign mcause  = regs[34]       ;
    assign mtvec   = regs[35]       ;
    assign mstatus = regs[36]       ; 
    assign mie     = regs[37]       ;
    assign mip     = regs[38]       ;
    assign Reg17   = regs[17]       ; 
    assign io_IDU_rdata1 = regs[{{1'b0},io_IDU_raddr1}]   ;
    assign io_IDU_rdata2 = regs[{{1'b0},io_IDU_raddr2}]   ;
endmodule

