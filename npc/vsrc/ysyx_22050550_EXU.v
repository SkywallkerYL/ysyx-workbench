`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
//`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_Multi.v"
//`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_Diver.v"
module ysyx_22050550_EXU(
    input         clock                     ,
                  reset                     ,
    input  [63:0] io_id_pc                  ,
    input  [31:0] io_id_inst                , 
    input         io_id_valid               ,
    input  [4:0]  io_id_rs1addr             , 
    input         io_id_abort               ,
                  io_id_jalrflag            ,
                  io_id_csrflag             ,
                  io_id_ecallflag           ,
                  io_id_mretflag            ,
                  io_id_ebreak              ,
    input  [63:0] io_id_rs2                 ,
                  io_id_imm                 ,
                  io_id_AluOp_rd1           ,       
                  io_id_AluOp_rd2           ,       
    input  [4:0]  io_id_AluOp_op            ,      
    input  [4:0]  io_id_waddr               ,    
    input         io_id_wen                 ,  
                  io_id_wflag               ,   
                  io_id_rflag               ,   
    input  [7:0]  io_id_wmask               ,      
    input         io_id_alumask             ,     
    input  [2:0]  io_id_func3               , 
    input  [6:0]  io_id_func7               ,      
    input  [63:0] io_id_NextPc              ,
    input         io_ReadyLS_ready          , 
    output [63:0] io_EXLS_pc                ,
                  io_EXLS_rs2               ,
    output [31:0] io_EXLS_inst              ,
    output        io_EXLS_valid             ,
    output [4:0]  io_EXLS_rs1               ,
    output [63:0] io_EXLS_imm               ,
    output [4:0]  io_EXLS_wdaddr            ,
    output        io_EXLS_wen               ,
    output        io_EXLS_csrflag           ,        
                  io_EXLS_jalrflag          ,        
                  io_EXLS_ecallflag         ,        
                  io_EXLS_mretflag          ,        
                  io_EXLS_ebreak            ,   
                  io_EXLS_abort             ,     
    output [63:0] io_EXLS_alures            ,    
    output        io_EXLS_wflag             ,
                  io_EXLS_rflag             ,
    output [63:0] io_EXLS_writedata         ,
    output [7:0]  io_EXLS_wmask             ,
    output [2:0]  io_EXLS_func3             ,
    output [6:0]  io_EXLS_func7             ,
    output [63:0] io_EXLS_NextPc            ,  
    output        io_ReadyID_ready          
);
    /*************ALU****************/
    wire [`ysyx_22050550_RegBus] ALURes;
    wire [`ysyx_22050550_RegBus] MulDivRes;
    wire [`ysyx_22050550_RegBus] src1 = io_id_AluOp_rd1;
    wire [`ysyx_22050550_RegBus] src2 = io_id_AluOp_rd2;
    wire [4:0] OP = io_id_AluOp_op;
    ysyx_22050550_MuxKeyWithDefault#(17,5,`ysyx_22050550_REGWIDTH) AluMux(
        .out(ALURes),.key(OP),.default_out(src1+src2),.lut({
        `ysyx_22050550_ADD  , src1 + src2,
        `ysyx_22050550_SUB  , src1 - src2,
        `ysyx_22050550_MUL  , MulDivRes  ,
        `ysyx_22050550_MULW , MulDivRes  ,
        `ysyx_22050550_DIV  , MulDivRes  ,
        `ysyx_22050550_DIVS , MulDivRes  ,
        `ysyx_22050550_REM  , src1 % src2,
        `ysyx_22050550_REMS , $signed(src1) % $signed(src2),
        `ysyx_22050550_XOR  , src1 ^ src2,
        `ysyx_22050550_OR   , src1 | src2,
        `ysyx_22050550_AND  , src1 & src2,
        `ysyx_22050550_SLTU , {{63{1'b0}},src1 < src2},
        `ysyx_22050550_SLT  , {{63{1'b0}},$signed(src1) < $signed(src2)},
        `ysyx_22050550_SRA  , $signed(src1) >>> src2,
        `ysyx_22050550_SRL  , src1 >> src2,
        `ysyx_22050550_SLL  , src1 << src2[5:0],
        `ysyx_22050550_SLLW , src1 << src2[4:0]
    }));
    wire [`ysyx_22050550_RegBus] maskres = io_id_alumask ? {{(32){ALURes[31]}},ALURes[31:0]} : ALURes;
    //乘除法模块例化 以及相关信号
    wire mulvalid = OP == `ysyx_22050550_MUL || OP ==`ysyx_22050550_MULW;
    wire mulw = OP ==`ysyx_22050550_MULW;
    wire divvalid = OP == `ysyx_22050550_DIV || OP ==`ysyx_22050550_DIVS;
    wire [1:0] divsigned = OP ==`ysyx_22050550_DIVS ? 2'b11: 2'b00;
    wire mulready,divready;
    wire muloutvalid,divoutvalid;
    wire [`ysyx_22050550_RegBus] mulres, divres;
    /*****MUL*****/
    ysyx_22050550_Multi Multi(
        .clock                (clock), 
        .reset                (reset),
        .io_Exu_MulValid      (mulvalid),
        .io_Exu_Flush         (1'b0),
        .io_Exu_Mulw          (mulw),
        .io_Exu_MulSigned     (2'b00),
        .io_Exu_Multiplicand  (src1),
        .io_Exu_Multiplier    (src2),
        .io_Exu_MulReady      (mulready),
        .io_Exu_OutValid      (muloutvalid),
        .io_Exu_ResultH       (),
        .io_Exu_ResultL       (mulres)
    );
    ysyx_22050550_Diver Divder(
        .clock                (clock), 
        .reset                (reset),
        .io_Exu_DivValid      (divvalid),
        .io_Exu_Flush         (1'b0),
        .io_Exu_Divw          (1'b0),
        .io_Exu_DivSigned     (divsigned),
        .io_Exu_Divdend       (src1),
        .io_Exu_Divisor       (src2),
        .io_Exu_DivReady      (divready),
        .io_Exu_OutValid      (divoutvalid),
        .io_Exu_Quotient      (divres),
        .io_Exu_Remainder     ()
    );
    //乘除法部分状态机
    localparam swait = 2'd0, swaitready = 2'd1, sdoing = 2'd2, swaitlsu = 2'd3;
    reg [1:0] state, next;
    reg [`ysyx_22050550_RegBus] RegMulDiv;
    //状态跳转
    always@(posedge clock) begin
        if(reset) state <= swait;
        else state <= next;
        if(reset) RegMulDiv <= `ysyx_22050550_REGWIDTH'h0;
        else if(muloutvalid) RegMulDiv <= mulres;
        else if(divoutvalid) RegMulDiv <= divres;
        else RegMulDiv <= RegMulDiv;
    end
    //组合逻辑
    always@(*) begin
        case (state)
            swait:begin
                if(mulvalid||divvalid) begin
                    if((mulvalid&&mulready)||(divvalid&&divready))begin
                        next = sdoing;
                    end
                    else next = swaitready;
                end
                else next = swait;
            end 
            swaitready:begin
                if((mulvalid&&mulready)||(divvalid&&divready)) next = sdoing;
                else next = swaitready;
            end
            sdoing:begin
                if(muloutvalid||divoutvalid) begin
                    //RegMulDiv = muloutvalid?mulres:divoutvalid?divres:`ysyx_22050550_REGWIDTH'h0;
                    if(io_ReadyLS_ready)begin
                        next = swait;
                    end
                    else next = swaitlsu;
                end
                else next = sdoing;
            end
            swaitlsu:begin
                if(io_ReadyLS_ready) next = swait;
                else next = swaitlsu;
            end 
            default:next = swait; 
        endcase
    end 
    wire alubusy  = (state==swait && (mulvalid||divvalid)) || (state==swaitready) ||(state==sdoing &&(!(muloutvalid||divoutvalid)));
    wire aluvalid = !alubusy;
    assign MulDivRes = muloutvalid ? mulres : divoutvalid ? divres : RegMulDiv;
    assign io_EXLS_pc       =      io_id_pc                         ;
    assign io_EXLS_inst     =      io_id_inst                       ;
    /*************valid-ready握手信号****************/      
    assign io_EXLS_valid    =      io_id_valid && aluvalid          ;
    assign io_ReadyID_ready =      io_ReadyLS_ready && (!alubusy)   ;

    assign io_EXLS_rs1      =      io_id_rs1addr                    ;
    assign io_EXLS_abort    =      io_id_abort                      ;
    assign io_EXLS_writedata=      io_id_rs2                        ;
    assign io_EXLS_rs2      =      io_id_rs2                        ;
    assign io_EXLS_wdaddr   =      io_id_waddr                      ;
    assign io_EXLS_wen      =      io_id_wen                        ;
    assign io_EXLS_wflag    =      io_id_wflag                      ;
    assign io_EXLS_rflag    =      io_id_rflag                      ;
    assign io_EXLS_csrflag  =      io_id_csrflag                    ;
    assign io_EXLS_jalrflag =      io_id_jalrflag                   ;
    assign io_EXLS_ecallflag=      io_id_ecallflag                  ;
    assign io_EXLS_mretflag =      io_id_mretflag                   ;
    assign io_EXLS_ebreak   =      io_id_ebreak                     ;
    assign io_EXLS_wmask    =      io_id_wmask                      ;
    assign io_EXLS_func3    =      io_id_func3                      ;
    assign io_EXLS_func7    =      io_id_func7                      ;
    assign io_EXLS_NextPc   =      io_id_NextPc                     ;
    assign io_EXLS_alures   =      maskres                          ;
endmodule

