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
`define ysyx_22050550_I4              7'b1100111 //jalr
`define ysyx_22050550_I5              7'b1110011 //CSR
`define ysyx_22050550_I6			  7'b0001111 // fence.i
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

//CLINT 
`define ysyx_22050550_CLINTBASE			64'h02000000
`define ysyx_22050550_CLINTEND			64'h0200BFFF
`define ysyx_22050550_MTIMECMP			64'h02004000
`define ysyx_22050550_MTIME				64'h0200BFF8
`define ysyx_22050550_MSIPADDR			64'h02000000



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
`define ysyx_22050550_TagUseRam
`define ysyx_22050550_RealRam
`define ysyx_22050550_DEVICEUSEAXI
`define ysyx_22050550_UseArbiter
`define ysyx_22050550_CacheUseLFSR

`define ysyx_22050550_LSUUSECACHE
`define ysyx_22050550_IFUUSECACHE


`define ysyx_22050550_PipBundle
module ysyx_22050550_RamArbiter(	
  input         io_ifu_Axi_ar_valid             ,
  input  [63:0] io_ifu_Axi_ar_bits_addr         ,
  input         io_ifu_Axi_r_ready              ,
                io_ifu_Axi_aw_valid             ,
  input  [63:0] io_ifu_Axi_aw_bits_addr         ,
  input         io_ifu_Axi_w_valid              ,
  input  [63:0] io_ifu_Axi_w_bits_data          ,
  input  [7:0]  io_ifu_Axi_w_bits_strb          ,
  input         io_lsu_Axi_ar_valid             ,
  input  [63:0] io_lsu_Axi_ar_bits_addr         ,
  input         io_lsu_Axi_r_ready              , 
                io_lsu_Axi_aw_valid             ,
  input  [63:0] io_lsu_Axi_aw_bits_addr         ,
  input         io_lsu_Axi_w_valid              ,
  input  [63:0] io_lsu_Axi_w_bits_data          ,
  input  [7:0]  io_lsu_Axi_w_bits_strb          ,
  input         io_sram_Axi_ar_ready            ,
                io_sram_Axi_r_valid             ,
  input  [63:0] io_sram_Axi_r_bits_data         ,
  input  [ 1:0] io_sram_Axi_r_rresp				,
  input         io_sram_Axi_r_bits_last         ,
                io_sram_Axi_aw_ready            ,
                io_sram_Axi_w_ready             ,
  output        io_ifu_Axi_ar_ready             ,
                io_ifu_Axi_r_valid              ,
  output [63:0] io_ifu_Axi_r_bits_data          ,
  output [1:0]  io_ifu_Axi_r_rresp				,
  output        io_ifu_Axi_r_bits_last          ,
                io_ifu_Axi_aw_ready             ,
                io_ifu_Axi_w_ready              ,
                io_lsu_Axi_ar_ready             ,
                io_lsu_Axi_r_valid              ,
  output [63:0] io_lsu_Axi_r_bits_data          ,
  output [1:0 ] io_lsu_Axi_r_rresp				,
  output        io_lsu_Axi_r_bits_last          ,
                io_lsu_Axi_aw_ready             ,
                io_lsu_Axi_w_ready              ,
                io_sram_Axi_ar_valid            ,
  output [63:0] io_sram_Axi_ar_bits_addr        ,
  output        io_sram_Axi_r_ready             ,    
                io_sram_Axi_aw_valid            ,
  output [63:0] io_sram_Axi_aw_bits_addr        ,
  output        io_sram_Axi_w_valid             ,
  output [63:0] io_sram_Axi_w_bits_data         ,
  output [7:0]  io_sram_Axi_w_bits_strb
);
  //好像直接用chisel生存的会快一些         
  //这里直接从chisel 赋值过来
  //ar 
  
    assign io_sram_Axi_ar_valid = (io_ifu_Axi_ar_valid&&!io_lsu_Axi_r_ready) || (io_lsu_Axi_ar_valid  && !io_ifu_Axi_r_ready  )                      ;
    assign io_ifu_Axi_ar_ready = io_sram_Axi_ar_ready &&(!io_lsu_Axi_ar_valid)&&(!io_lsu_Axi_r_ready) ;
    assign io_lsu_Axi_ar_ready = io_sram_Axi_ar_ready &&(!io_ifu_Axi_r_ready) ;
    assign io_sram_Axi_ar_bits_addr = io_lsu_Axi_ar_valid ? io_lsu_Axi_ar_bits_addr :
										io_ifu_Axi_ar_bits_addr;
    //这几个信号由于一直是同一个值，chisel生成的时候好像就省略了
    //assign io_sram_Axi_ar_bits_len  = io_lsu_Axi_ar_ready ? io_lsu_Axi_ar_bits_len  :
    //                                  io_ifu_Axi_ar_ready ? io_ifu_Axi_ar_bits_len  : 0;
    //assign io_sram_Axi_ar_bits_size = io_lsu_Axi_ar_ready ? io_lsu_Axi_ar_bits_size :
    //                                  io_ifu_Axi_ar_ready ? io_ifu_Axi_ar_bits_size : 3'b011;
    //assign io_sram_Axi_ar_bits_burst= io_lsu_Axi_ar_ready ? io_lsu_Axi_ar_bits_burst:
    //                                  io_ifu_Axi_ar_ready ? io_ifu_Axi_ar_bits_burst: 2'b01 ;
    
    assign io_sram_Axi_r_ready  = io_ifu_Axi_r_ready || io_lsu_Axi_r_ready                            ; 
    assign io_ifu_Axi_r_valid   = io_sram_Axi_r_valid &&(!io_lsu_Axi_r_ready)   ;
    assign io_lsu_Axi_r_valid   = io_sram_Axi_r_valid                           ;
    assign io_ifu_Axi_r_bits_data = io_sram_Axi_r_bits_data;
    assign io_ifu_Axi_r_bits_last = io_sram_Axi_r_bits_last;
    assign io_lsu_Axi_r_bits_data = io_sram_Axi_r_bits_data;
    assign io_lsu_Axi_r_bits_last = io_sram_Axi_r_bits_last;
	assign io_lsu_Axi_r_rresp     = io_sram_Axi_r_rresp    ; 
	assign io_ifu_Axi_r_rresp     = io_sram_Axi_r_rresp	   ; 
    //actually write signal from ifu is always false
    // 
    //aw
    assign io_sram_Axi_aw_valid = io_ifu_Axi_aw_valid || io_lsu_Axi_aw_valid                          ;
    assign io_ifu_Axi_aw_ready = io_sram_Axi_aw_ready&&(!io_lsu_Axi_aw_valid)  ;
    assign io_lsu_Axi_aw_ready = io_sram_Axi_aw_ready                          ;
    assign io_sram_Axi_aw_bits_addr = io_lsu_Axi_aw_valid?io_lsu_Axi_aw_bits_addr:                  
                                      io_ifu_Axi_aw_valid?io_ifu_Axi_aw_bits_addr: 0;
    //assign io_sram_Axi_aw_size = io_lsu_Axi_aw_ready?io_lsu_Axi_aw_bits_size:
    //                             io_ifu_Axi_aw_ready?io_ifu_Axi_aw_bits_size:3'b011;
    //assign io_sram_Axi_aw_len  = io_lsu_Axi_aw_ready?io_lsu_Axi_aw_bits_len :
    //                             io_ifu_Axi_aw_ready?io_ifu_Axi_aw_bits_len : 0 ;
    //assign io_sram_Axi_aw_burst= io_lsu_Axi_aw_ready?io_lsu_Axi_aw_bits_burst:
    //                                  io_ifu_Axi_aw_ready?io_ifu_Axi_aw_bits_burst:2'b01;

    //w
    assign io_sram_Axi_w_valid = io_ifu_Axi_w_valid || io_lsu_Axi_w_valid                         ;
    assign io_ifu_Axi_w_ready = io_sram_Axi_w_ready&&(!io_lsu_Axi_w_valid)  ;
    assign io_lsu_Axi_w_ready = io_sram_Axi_w_ready                         ;
    assign io_sram_Axi_w_bits_data =  io_lsu_Axi_w_valid?io_lsu_Axi_w_bits_data:
                                      io_ifu_Axi_w_valid ?io_ifu_Axi_w_bits_data:0;
    assign io_sram_Axi_w_bits_strb =  io_lsu_Axi_w_valid ?io_lsu_Axi_w_bits_strb:
                                      io_ifu_Axi_w_valid ?io_ifu_Axi_w_bits_strb:8'h0;
    //assign io_sram_Axi_w_bits_last =  io_lsu_Axi_w_ready?io_lsu_Axi_w_bits_last:
    //                                  io_ifu_Axi_w_ready?io_ifu_Axi_w_bits_last:0;
    //b
    //assign io_sram_Axi_b_ready = io_ifu_Axi_b_ready || io_lsu_Axi_b_ready                         ;
    //assign io_ifu_Axi_b_valid = io_ifu_Axi_b_ready && io_sram_Axi_b_valid&&(!io_lsu_Axi_b_ready)  ;
    //assign io_lsu_Axi_b_valid = io_lsu_Axi_b_ready && io_sram_Axi_b_valid                         ;
    //assign io_ifu_Axi_b_bits_resp = io_sram_Axi_b_bits_resp                                       ;
    //assign io_lsu_Axi_b_bits_resp = io_sram_Axi_b_bits_resp                                       ;
  

endmodule
//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_ByPass(
   // input         clock                         ,
     //             reset                         ,
    /**************ByPass**************/
    input         io_IDU_valid                   ,
    input  [4:0]  io_IDU_raddr1                  ,
    input  [4:0]  io_IDU_raddr2                  ,
    output [63:0] io_IDU_rdata                   ,
    output        io_IDU_pass1                   ,
    output        io_IDU_pass2                   ,




    input  [4:0]  io_WBU_waddr                   ,
    input         io_WBU_valid                   ,
    input [63:0]  io_WBU_rdata                   
);
    //旁路转发 
    //增加从EXU 和LSU来的路径那条路valid了 并且和要读的一样 就选那条
    assign io_IDU_rdata    = io_WBU_rdata;
    //(io_IDU_raddr1==io_WBU_waddr || io_IDU_raddr2==io_WBU_waddr) && io_WBU_valid && io_WBU_waddr!=0 ? io_WBU_rdata:
    //(io_IDU_raddr1==io_LSU_waddr || io_IDU_raddr2==io_LSU_waddr) && io_LSU_valid && io_LSU_waddr!=0 ? io_LSU_rdata:
    //(io_IDU_raddr1==io_EXU_waddr || io_IDU_raddr2==io_EXU_waddr) && io_EXU_valid && io_EXU_waddr!=0 ? io_EXU_rdata: 0;
    //wire   passvalid = io_IDU_valid && (io_WBU_valid || io_LSU_valid || io_EXU_valid);
    assign io_IDU_pass1 = (io_IDU_valid&& io_IDU_raddr1==io_WBU_waddr && io_WBU_valid);
    //((io_IDU_raddr1==io_WBU_waddr && io_WBU_valid && io_WBU_waddr!=0)||
    // (io_IDU_raddr1==io_LSU_waddr && io_LSU_valid && io_LSU_waddr!=0)||
    // (io_IDU_raddr1==io_EXU_waddr && io_EXU_valid && io_EXU_waddr!=0)
    //));
    assign io_IDU_pass2 = (io_IDU_valid&& io_IDU_raddr2==io_WBU_waddr && io_WBU_valid);
    //((io_IDU_raddr2==io_WBU_waddr && io_WBU_valid && io_WBU_waddr!=0)||
    // (io_IDU_raddr2==io_LSU_waddr && io_LSU_valid && io_LSU_waddr!=0)||
    // (io_IDU_raddr2==io_EXU_waddr && io_EXU_valid && io_EXU_waddr!=0)
    //));
endmodule
//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_PCREG(
    input           reset,
    input           clock,
    input                                       ready       ,
    input           [4:0]                       Id_jal      ,
    input           [`ysyx_22050550_RegBus]     Id_Pc       ,
    input           [`ysyx_22050550_RegBus]     Id_imm      ,
    input           [`ysyx_22050550_RegBus]     Id_rs1      ,
    input           [`ysyx_22050550_RegBus]     Id_ecallpc  , 
    input           [`ysyx_22050550_RegBus]     Id_mretpc   ,     
    input                                       Id_valid    , 
    input										irujump     ,
	//input           ce,
    output          [`ysyx_22050550_RegBus] npc ,
	output			[31:0]					outjumpc
   // output          [`ysyx_22050550_RegBus] NextPc
);
    reg  [`ysyx_22050550_RegBus] RegPc ;
    wire [`ysyx_22050550_RegBus] Pc_4   = RegPc + 64'h4;
    
    wire [`ysyx_22050550_RegBus] jumpc1 = 
    (!(|Id_jal))&& (!irujump)	? Pc_4                          :
	//irujump						? Id_ecallpc					:
    (Id_jal[0] || Id_jal[2])	? (Id_Pc + Id_imm)              :
    Id_jal[4]					? (Id_imm + Id_rs1) & (~(64'h1)):
    Id_jal[3]					? Id_ecallpc                    :
    Id_jal[1]					? Id_mretpc                     : Pc_4;
	//irujump						? (Id_ecallpc)					: Pc_4;
	wire [63:0] jumpc = irujump ? Id_ecallpc : jumpc1 ;
    wire jumpcvalid = jumpc[31:28] == 4'h3 || jumpc[31:28] >= 4'h8;
    wire wen;
    assign wen = (ready || (|Id_jal && Id_valid)||irujump) && jumpcvalid ;
	ysyx_22050550_Reg #(`ysyx_22050550_REGWIDTH,`ysyx_22050550_REGWIDTH'h30000000) regpc (
        .reset(reset),
        .clock(clock),
        .wen(wen),
        .din(jumpc),
        .dout(RegPc)
    );
	wire [`ysyx_22050550_RegBus] Idnextpc = 
    //(!(|Id_jal))&& (!irujump)	? Pc_4                          :
	//irujump						? Id_ecallpc					:
    (Id_jal[0] || Id_jal[2])	? (Id_Pc + Id_imm)              :
    Id_jal[4]					? (Id_imm + Id_rs1) & (~(64'h1)):
    Id_jal[3]					? Id_ecallpc                    :
    Id_jal[1]					? Id_mretpc                     : Id_Pc+4;

    assign npc = ((Id_jal != 5'd0 && Id_valid && jumpcvalid))? jumpc:RegPc;
	assign outjumpc = Idnextpc[31:0];
    //assign NextPc = npc;
endmodule
//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_IDU(
  //input         clock                     ,
    //            reset                     ,
 //IF
  input  [31:0]     io_IFID_inst            ,
  input  [63:0]     io_IFID_pc              ,
  input             io_IFID_valid           ,
  //REGFILE
  input  [63:0]     io_RegFileID_CSRs_mepc  ,
                    io_RegFileID_CSRs_mtvec ,
 //                   io_RegFileID_CSRs_mip   ,
                    io_RegFileID_rdata1     ,
                    io_RegFileID_rdata2     ,
  // Ex
  input             io_ReadyEX_ready        ,
                    io_Score_RScore_busy1   ,
                    io_Score_RScore_busy2   ,
  // bypass
  input  [63:0]     io_Pass_rdata           ,
  input             io_Pass_pass1           ,
                    io_Pass_pass2           ,
    //regpc
  //input  [63:0]     io_RegPc_nextpc         ,
  output [4:0]      io_IDRegFile_raddr1     ,
                    io_IDRegFile_raddr2     ,
  output [63:0]     io_idex_pc              ,
  output [31:0]     io_idex_inst            ,
  //output [2:0]      io_idex_instType,
  output            io_idex_valid           ,
 // output [4:0]      io_idex_rs1addr         ,
//  output            io_idex_abort           ,
                    //io_idex_jalr,
  output [63:0]     io_idex_rs2             ,
  //                  io_idex_imm             ,
                    io_idex_AluOp_rd1       ,
                    io_idex_AluOp_rd2       ,
  output [4:0]      io_idex_AluOp_op        ,
  output [4:0]      io_idex_waddr           ,
  output            io_idex_wen             ,
                    io_idex_wflag           ,
                    io_idex_rflag           ,
                    io_idex_csrflag         ,
  //                  io_idex_jalrflag        ,
                    io_idex_ecallflag       ,
                    io_idex_mretflag        ,
    //                io_idex_breakflag       ,
  output [7:0]      io_idex_wmask           ,
  //output [1:0]      io_idex_choose          ,
  output            io_idex_alumask         ,
  output [2:0]      io_idex_func3           ,
  //output [63:0]     io_idex_NextPc          ,
  output [4:0]      io_IDNPC_jal            ,
  output [63:0]     io_IDNPC_IdPc           ,
                     io_IDNPC_imm            ,
                    io_IDNPC_rs1            ,
                    io_IDNPC_ecallpc        ,
                    io_IDNPC_mretpc         ,
  output            io_IDNPC_valid          ,
                    io_ReadyIF_ready        ,
  //                  io_Score_WScore_wen,
  //output [4:0]      io_Score_WScore_waddr,
  output            io_Score_RScore_valid   ,
  output            io_Score_RScore_wen     ,
  output [4:0]      io_Score_RScore_rdaddr1 ,
                    io_Score_RScore_rdaddr2 ,
                    io_Score_RScore_waddr   ,
                    io_Pass_rs1             ,
                    io_Pass_rs2             ,
  output            io_Pass_valid			,
  input				io_if_flush				,
  output			io_id_flush				,
  output			io_fence			
  //input             printflag 
);
    //assign io_idex_pc = io_IFID_pc;
    //assign io_idex_inst = io_IFID_inst;
    //assign io_IDNPC_IdPc =io_IFID_pc;

    localparam    R_type = 3'd0,I_type = 3'd1,S_type   = 3'd2,
    B_type = 3'd3,U_type = 3'd4,J_type = 3'd5,Bad_type = 3'd6;
   
    wire    [6:0] opcode = io_IFID_inst    [6:0];   
    wire    [2:0] func3  = io_IFID_inst    [14:12];
    //I型指令指示逻辑是逻辑移位还是算术移位  
    wire          ALflag = io_IFID_inst    [30];
    wire    [6:0] func7  = io_IFID_inst    [31:25]; 
    wire    [5:0] shamt  = io_IFID_inst    [25:20];
    wire    [4:0] rs1    = io_IFID_inst    [19:15]; 
    wire    [4:0] rs2    = io_IFID_inst    [24:20]; 
    wire    [4:0] rd     = io_IFID_inst    [11:7]; 
    //assign io_IDRegFile_raddr1 = rs1;
    //assign io_IDRegFile_raddr2 = rs2;
    //assign io_idex_waddr       = rd ;

    
    //faster
    /*
    reg     [2:0] InstType;
    always@(opcode) begin
             if(!io_IFID_valid)                                             InstType = Bad_type;
        else if(opcode ==`ysyx_22050550_R1 ||opcode ==`ysyx_22050550_R2 )   InstType = R_type ;
        else if ((opcode ==`ysyx_22050550_I1 ||opcode ==`ysyx_22050550_I2||opcode ==`ysyx_22050550_I3)||
    (opcode ==`ysyx_22050550_I4 ||opcode ==`ysyx_22050550_I5))              InstType = I_type ;
        else if ((opcode ==`ysyx_22050550_S1 ))                             InstType = S_type ;
        else if ((opcode ==`ysyx_22050550_J1 ))                             InstType = J_type ;
        else if ((opcode ==`ysyx_22050550_B1 ))                             InstType = B_type ;
        else if (opcode ==`ysyx_22050550_U1 ||opcode ==`ysyx_22050550_U2  ) InstType = U_type ; 
        else                                                                InstType = Bad_type;
    end
    */
    
    wire    [2:0] InstType;
    
    //
    assign InstType = (opcode ==`ysyx_22050550_R1 ||opcode ==`ysyx_22050550_R2 )? R_type:
    (opcode ==`ysyx_22050550_I1 ||opcode ==`ysyx_22050550_I2||opcode ==`ysyx_22050550_I3)||
    (opcode ==`ysyx_22050550_I4 ||opcode ==`ysyx_22050550_I5||opcode ==`ysyx_22050550_I6) ? I_type :
    (opcode ==`ysyx_22050550_S1 )? S_type :
    (opcode ==`ysyx_22050550_J1 )? J_type :
    (opcode ==`ysyx_22050550_B1 )? B_type :
    (opcode ==`ysyx_22050550_U1 ||opcode ==`ysyx_22050550_U2  )? U_type : Bad_type;
    
    /*
    ysyx_22050550_MuxKeyWithDefault#(12,7,3) InstMux(
        .out(InstType),.key(opcode),.default_out(Bad_type),.lut({
        `ysyx_22050550_R1   ,R_type,`ysyx_22050550_R2   ,R_type,
        `ysyx_22050550_I1   ,I_type,`ysyx_22050550_I2   ,I_type,
        `ysyx_22050550_I3   ,I_type,`ysyx_22050550_I4   ,I_type,
        `ysyx_22050550_I5   ,I_type,
        `ysyx_22050550_S1   ,S_type,
        `ysyx_22050550_U1   ,U_type,`ysyx_22050550_U2   ,U_type,
        `ysyx_22050550_J1   ,J_type,`ysyx_22050550_B1   ,B_type
    }));
    */
    //assign io_idex_instType = InstType;
    //assign io_idex_wen = (InstType !=S_type) && (InstType != B_type)&& (InstType != Bad_type);
    //貌似这样写的话，这几个imm每个周期都在计算，额把这些给写到里面去看看 额没有什么太大的差别
    
    wire [`ysyx_22050550_RegBus] I_imm= {{(`ysyx_22050550_REGWIDTH-12){io_IFID_inst[31]}},io_IFID_inst[31:20]};
    wire [`ysyx_22050550_RegBus] U_imm= {{(`ysyx_22050550_REGWIDTH-32){io_IFID_inst[31]}},io_IFID_inst[31:12],{12{1'b0}}};
    wire [`ysyx_22050550_RegBus] J_imm= {{(`ysyx_22050550_REGWIDTH-20){io_IFID_inst[31]}},io_IFID_inst[19:12],io_IFID_inst[20],io_IFID_inst[30:21],1'b0};
    wire [`ysyx_22050550_RegBus] B_imm= {{(`ysyx_22050550_REGWIDTH-12){io_IFID_inst[31]}},io_IFID_inst[7],io_IFID_inst[30:25],io_IFID_inst[11:8],1'b0};
    wire [`ysyx_22050550_RegBus] S_imm= {{(`ysyx_22050550_REGWIDTH-12){io_IFID_inst[31]}},io_IFID_inst[31:25],io_IFID_inst[11:7]};
    /*
    reg     [`ysyx_22050550_RegBus] imm  ;
    always@(InstType)begin
             if (!io_IFID_valid)     imm = 0    ;
        else if (InstType == I_type) imm = I_imm; 
        else if (InstType == U_type) imm = U_imm; 
        else if (InstType == J_type) imm = J_imm; 
        else if (InstType == B_type) imm = B_imm; 
        else if (InstType == S_type) imm = S_imm;
        //else                         imm = 0    ;
    end
    */
    /*
    reg     [`ysyx_22050550_RegBus] imm  ;
    always@(InstType)begin
             if (!io_IFID_valid)     imm = 0    ;
        else if (InstType == I_type) imm = {{(`ysyx_22050550_REGWIDTH-12){io_IFID_inst[31]}},io_IFID_inst[31:20]}                                           ; 
        else if (InstType == U_type) imm = {{(`ysyx_22050550_REGWIDTH-32){io_IFID_inst[31]}},io_IFID_inst[31:12],{12{1'b0}}}                                ; 
        else if (InstType == J_type) imm = {{(`ysyx_22050550_REGWIDTH-20){io_IFID_inst[31]}},io_IFID_inst[19:12],io_IFID_inst[20],io_IFID_inst[30:21],1'b0} ; 
        else if (InstType == B_type) imm = {{(`ysyx_22050550_REGWIDTH-12){io_IFID_inst[31]}},io_IFID_inst[7],io_IFID_inst[30:25],io_IFID_inst[11:8],1'b0}   ; 
        else if (InstType == S_type) imm = {{(`ysyx_22050550_REGWIDTH-12){io_IFID_inst[31]}},io_IFID_inst[31:25],io_IFID_inst[11:7]}                        ;
        //else                         imm = 0    ;
    end
    */
    wire     [`ysyx_22050550_RegBus] imm  ;
    assign imm =InstType == I_type ? I_imm :
                InstType == U_type ? U_imm :
                InstType == J_type ? J_imm :
                InstType == B_type ? B_imm :
                InstType == S_type ? S_imm :`ysyx_22050550_REGWIDTH'h0;
    
    /*
    ysyx_22050550_MuxKeyWithDefault#(5,3,`ysyx_22050550_REGWIDTH) ImmMux(
        .out(imm),.key(InstType),.default_out(`ysyx_22050550_REGWIDTH'h0),.lut({
        I_type   ,I_imm,
        U_type   ,U_imm,
        J_type   ,J_imm,
        B_type   ,B_imm,
        S_type   ,S_imm
    }));
    */
    //assign io_idex_imm = imm;
    //assign io_IDNPC_imm = imm;
    reg  [`ysyx_22050550_RegBus] rd1,rd2;
    wire [`ysyx_22050550_RegBus] rData1,rData2;
    //注意一下Busy了才使用旁路转发的数据，不然的话比如某些指令有对0号寄存器写入的行为
    //会把写入的值给转发过来，但是取0号寄存器的时候，只是要一个0
    assign rData1  = (io_Score_RScore_busy1&io_Pass_pass1)?io_Pass_rdata:io_RegFileID_rdata1;
    assign rData2  = (io_Score_RScore_busy2&io_Pass_pass2)?io_Pass_rdata:io_RegFileID_rdata2;
    //load
    //wbu还有一个choose信号用来指示使用从内存里读出来的还是用alu计算的 这里与readflag是一个信号
    wire readflag = (opcode == `ysyx_22050550_I3);
    //func3 指示lsu模块加载时的截断以及是否进行符号位拓展
    //chisel 的lsumask换成这个func3
    //assign io_idex_func3 = func3;
    //用来指示EXU模块是否需要对计算结果进行32位的符号拓展
    //chisel alumask 现在换成这一个flag  
    //addi sraiw srliw ... Rtype MULW divw...
    wire alumaskflag = (opcode == `ysyx_22050550_I1) || (opcode == `ysyx_22050550_R2);
    //assign io_idex_alumask = alumaskflag;
    //I型指令选择shamt
    wire shamtflag   =  (io_idex_inst[31:26]==0 ||io_idex_inst[31:26]==6'b010000 ) 
                    &&(opcode==`ysyx_22050550_I1 || opcode==`ysyx_22050550_I2) 
                    && (func3 == 3'b101 || func3 == 3'b001);
    //处理一下csr指令
    //目前只考虑csrrs:t|x[rs1] csrrw:x[rs1]  x[rd] = t
    //csrflag拉高的时候 wbu阶段写回 csr寄存器的读出和写回都放到WBU阶段去做 用的时候截取Imm低12位即可
    //csrflag拉高了 那么在WBU阶段  rd1就是x[rs1] rd2就是t 在WBU阶段作运算就行
    //根据func3决定做什么运算，并且x[rd]在csrflag拉高的情况下就不选择alu或者lsu的运算结果了
    //exu阶段发现csrflag拉高的时候，把alures直接赋值位x[rs1]
    //这样子I型指令就确定了。
    // mret 和 ecall的时候要拉低
    wire csrflag = opcode == `ysyx_22050550_I5 && !ecallflag && !mret;
    //assign io_idex_csrflag = csrflag;
    //srliw sraiw 特殊情况要对x[rs1]进行阶段和(无)符号拓展后，再送给EXU 方便进行逻辑移位和算术移位
    wire srliw = opcode == `ysyx_22050550_I1 && (func3 == 3'b101) &&(func7[6:1]==6'b000000); 
    wire sraiw = opcode == `ysyx_22050550_I1 && (func3 == 3'b101) &&(func7[6:1]==6'b010000);
    wire [`ysyx_22050550_RegBus] Signedrs1  = {{32{rData1[31]}},rData1[31:0]};
    wire [`ysyx_22050550_RegBus] USignedrs1 = {{32{1'b0}},rData1[31:0]};
    wire [`ysyx_22050550_RegBus] Signedrs2  = {{32{rData2[31]}},rData2[31:0]};
    wire [`ysyx_22050550_RegBus] USignedrs2 = {{32{1'b0}},rData2[31:0]};
    //EXU 检测到jalr 采用加法
    wire jalrflag = opcode == `ysyx_22050550_I4;
    //assign io_idex_jalrflag = jalrflag;
    wire ecallflag = io_IFID_inst == `ysyx_22050550_INSTWIDTH'h00000073;
    //ecall flag拉高的时候WBU再对寄存器进行写入什么的
    //assign io_idex_ecallflag = ecallflag;
    //assign io_IDNPC_ecallpc = io_RegFileID_CSRs_mtvec;

    
    wire[9:0] ItypeOpKey = {func3,opcode};
    /*
    reg [4:0] Itype_Op;
    always @(ItypeOpKey)begin
             if(InstType !=  I_type)                     Itype_Op = `ysyx_22050550_ADD                          ;
        else if(ItypeOpKey == {3'b100,`ysyx_22050550_I2})Itype_Op = `ysyx_22050550_XOR                          ;
        else if(ItypeOpKey == {3'b110,`ysyx_22050550_I2})Itype_Op = `ysyx_22050550_OR                           ;
        else if(ItypeOpKey == {3'b111,`ysyx_22050550_I2})Itype_Op = `ysyx_22050550_AND                          ;
        else if(ItypeOpKey == {3'b011,`ysyx_22050550_I2})Itype_Op = `ysyx_22050550_SLTU                         ;
        else if(ItypeOpKey == {3'b010,`ysyx_22050550_I2})Itype_Op = `ysyx_22050550_SLT                          ;
        else if(ItypeOpKey == {3'b101,`ysyx_22050550_I2})Itype_Op = ALflag?`ysyx_22050550_SRA:`ysyx_22050550_SRL;
        else if(ItypeOpKey == {3'b101,`ysyx_22050550_I1})Itype_Op = ALflag?`ysyx_22050550_SRA:`ysyx_22050550_SRL;
        else if(ItypeOpKey == {3'b001,`ysyx_22050550_I2})Itype_Op = `ysyx_22050550_SLL                          ;
        else if(ItypeOpKey == {3'b001,`ysyx_22050550_I1})Itype_Op = `ysyx_22050550_SLLW                         ;
        //else                                             Itype_Op = `ysyx_22050550_ADD                          ;
    end
    */
    
    wire[4:0] Itype_Op;
    assign Itype_Op = 
    ItypeOpKey == {3'b100,`ysyx_22050550_I2}? `ysyx_22050550_XOR                          :                           
    ItypeOpKey == {3'b110,`ysyx_22050550_I2}? `ysyx_22050550_OR                           : 
    ItypeOpKey == {3'b111,`ysyx_22050550_I2}? `ysyx_22050550_AND                          : 
    ItypeOpKey == {3'b011,`ysyx_22050550_I2}? `ysyx_22050550_SLTU                         : 
    ItypeOpKey == {3'b010,`ysyx_22050550_I2}? `ysyx_22050550_SLT                          : 
    ItypeOpKey == {3'b101,`ysyx_22050550_I2}? ALflag?`ysyx_22050550_SRA:`ysyx_22050550_SRL: 
    ItypeOpKey == {3'b101,`ysyx_22050550_I1}? ALflag?`ysyx_22050550_SRA:`ysyx_22050550_SRL: 
    ItypeOpKey == {3'b001,`ysyx_22050550_I2}? `ysyx_22050550_SLL                          : 
    ItypeOpKey == {3'b001,`ysyx_22050550_I1}? `ysyx_22050550_SLLW  :  `ysyx_22050550_ADD;
    
        /*
    ysyx_22050550_MuxKeyWithDefault#(9,10,5) ItypeOpMux(
        .out(Itype_Op),.key(ItypeOpKey),.default_out(`ysyx_22050550_ADD),.lut({
        {3'b100,`ysyx_22050550_I2},`ysyx_22050550_XOR                           ,//xori
        {3'b110,`ysyx_22050550_I2},`ysyx_22050550_OR                            ,//ori
        {3'b111,`ysyx_22050550_I2},`ysyx_22050550_AND                           ,     //andi
        {3'b011,`ysyx_22050550_I2},`ysyx_22050550_SLTU                          ,//sltiu
        {3'b010,`ysyx_22050550_I2},`ysyx_22050550_SLT                           ,//slti
        {3'b101,`ysyx_22050550_I2},ALflag?`ysyx_22050550_SRA:`ysyx_22050550_SRL ,    
        {3'b101,`ysyx_22050550_I1},ALflag?`ysyx_22050550_SRA:`ysyx_22050550_SRL ,//
        {3'b001,`ysyx_22050550_I2},`ysyx_22050550_SLL                           ,
        {3'b001,`ysyx_22050550_I1},`ysyx_22050550_SLLW
    }));
        */
    
    wire[16:0] RtypeOpKey = {func7,func3,opcode};
    //貌似三目运算符没有always 快，改称always试试 额 效果不大 还变慢了。。
    //发现一个提升性能的方法，就是用·用ifelse，这样子对于条件的判断会提前结束。
    //最先给一个条件，这样子就省掉了许多不必要的，性能会提升很多很多。
    /*
    reg [4:0] Rtype_Op;
    always @(RtypeOpKey) begin
             if(InstType !=  R_type)                                 Rtype_Op = `ysyx_22050550_ADD   ;
        else if(RtypeOpKey == {7'b0100000,3'b000,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_SUB   ;
        else if(RtypeOpKey == {7'b0000001,3'b000,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_MUL   ;
        else if(RtypeOpKey == {7'b0000001,3'b101,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_DIV   ;
        else if(RtypeOpKey == {7'b0000001,3'b100,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_DIVS  ;
        else if(RtypeOpKey == {7'b0000000,3'b100,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_XOR   ;
        else if(RtypeOpKey == {7'b0000001,3'b111,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_REM   ;
        else if(RtypeOpKey == {7'b0000001,3'b110,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_REMS  ;
        else if(RtypeOpKey == {7'b0000000,3'b010,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_SLT   ;
        else if(RtypeOpKey == {7'b0000000,3'b011,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_SLTU  ;
        else if(RtypeOpKey == {7'b0100000,3'b000,`ysyx_22050550_R2}) Rtype_Op = `ysyx_22050550_SUB   ;
        else if(RtypeOpKey == {7'b0000001,3'b000,`ysyx_22050550_R2}) Rtype_Op = `ysyx_22050550_MUL   ;
        else if(RtypeOpKey == {7'b0000001,3'b100,`ysyx_22050550_R2}) Rtype_Op = `ysyx_22050550_DIVS  ;
        else if(RtypeOpKey == {7'b0000001,3'b101,`ysyx_22050550_R2}) Rtype_Op = `ysyx_22050550_DIV   ;
        else if(RtypeOpKey == {7'b0000001,3'b110,`ysyx_22050550_R2}) Rtype_Op = `ysyx_22050550_REMS  ;
        else if(RtypeOpKey == {7'b0000001,3'b111,`ysyx_22050550_R2}) Rtype_Op = `ysyx_22050550_REM   ;
        else if(RtypeOpKey == {7'b0000000,3'b001,`ysyx_22050550_R2}) Rtype_Op = `ysyx_22050550_SLLW  ;
        else if(RtypeOpKey == {7'b0000000,3'b001,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_SLL   ;
        else if(RtypeOpKey == {7'b0100000,3'b101,`ysyx_22050550_R2}) Rtype_Op = `ysyx_22050550_SRA   ;
        else if(RtypeOpKey == {7'b0000000,3'b101,`ysyx_22050550_R2}) Rtype_Op = `ysyx_22050550_SRL   ;
        else if(RtypeOpKey == {7'b0000000,3'b101,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_SRL   ;
        else if(RtypeOpKey == {7'b0000000,3'b111,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_AND   ;
        else if(RtypeOpKey == {7'b0000000,3'b110,`ysyx_22050550_R1}) Rtype_Op = `ysyx_22050550_OR    ;
        //else                                                         Rtype_Op =`ysyx_22050550_ADD    ;
    end
    */
    
    wire [4:0] Rtype_Op;
    assign Rtype_Op = 
    RtypeOpKey == {7'b0100000,3'b000,`ysyx_22050550_R1} ? `ysyx_22050550_SUB   :
    RtypeOpKey == {7'b0000001,3'b000,`ysyx_22050550_R1} ? `ysyx_22050550_MUL   :
    RtypeOpKey == {7'b0000001,3'b101,`ysyx_22050550_R1} ? `ysyx_22050550_DIV   :
    RtypeOpKey == {7'b0000001,3'b100,`ysyx_22050550_R1} ? `ysyx_22050550_DIVS  :
    RtypeOpKey == {7'b0000000,3'b100,`ysyx_22050550_R1} ? `ysyx_22050550_XOR   :
    RtypeOpKey == {7'b0000001,3'b111,`ysyx_22050550_R1} ? `ysyx_22050550_REM   : 
    RtypeOpKey == {7'b0000001,3'b110,`ysyx_22050550_R1} ? `ysyx_22050550_REMS  :
    RtypeOpKey == {7'b0000000,3'b010,`ysyx_22050550_R1} ? `ysyx_22050550_SLT   :
    RtypeOpKey == {7'b0000000,3'b011,`ysyx_22050550_R1} ? `ysyx_22050550_SLTU  :
    RtypeOpKey == {7'b0100000,3'b000,`ysyx_22050550_R2} ? `ysyx_22050550_SUB   :
    RtypeOpKey == {7'b0000001,3'b000,`ysyx_22050550_R2} ? `ysyx_22050550_MUL   :
    RtypeOpKey == {7'b0000001,3'b100,`ysyx_22050550_R2} ? `ysyx_22050550_DIVS  :
    RtypeOpKey == {7'b0000001,3'b101,`ysyx_22050550_R2} ? `ysyx_22050550_DIV   :
    RtypeOpKey == {7'b0000001,3'b110,`ysyx_22050550_R2} ? `ysyx_22050550_REMS  :
    RtypeOpKey == {7'b0000001,3'b111,`ysyx_22050550_R2} ? `ysyx_22050550_REM   : 
    RtypeOpKey == {7'b0000000,3'b001,`ysyx_22050550_R2} ? `ysyx_22050550_SLLW  :
    RtypeOpKey == {7'b0000000,3'b001,`ysyx_22050550_R1} ? `ysyx_22050550_SLL   :
    RtypeOpKey == {7'b0100000,3'b101,`ysyx_22050550_R2} ? `ysyx_22050550_SRA   :
    RtypeOpKey == {7'b0000000,3'b101,`ysyx_22050550_R2} ? `ysyx_22050550_SRL   :
    RtypeOpKey == {7'b0000000,3'b101,`ysyx_22050550_R1} ? `ysyx_22050550_SRL   :
    RtypeOpKey == {7'b0000000,3'b111,`ysyx_22050550_R1} ? `ysyx_22050550_AND   :
    RtypeOpKey == {7'b0000000,3'b110,`ysyx_22050550_R1} ? `ysyx_22050550_OR    :`ysyx_22050550_ADD;
    
    /*
    ysyx_22050550_MuxKeyWithDefault#(22,17,5) RtypeOpMux(
        .out(Rtype_Op),.key(RtypeOpKey),.default_out(`ysyx_22050550_ADD),.lut({
        {7'b0100000,3'b000,`ysyx_22050550_R1},`ysyx_22050550_SUB,
        {7'b0000001,3'b000,`ysyx_22050550_R1},`ysyx_22050550_MUL ,
        {7'b0000001,3'b101,`ysyx_22050550_R1},`ysyx_22050550_DIV,
        {7'b0000001,3'b100,`ysyx_22050550_R1},`ysyx_22050550_DIVS,
        {7'b0000000,3'b100,`ysyx_22050550_R1},`ysyx_22050550_XOR,
        {7'b0000001,3'b111,`ysyx_22050550_R1},`ysyx_22050550_REM, // REMU
        {7'b0000001,3'b110,`ysyx_22050550_R1},`ysyx_22050550_REMS, // REM
        {7'b0000000,3'b010,`ysyx_22050550_R1},`ysyx_22050550_SLT,
        {7'b0000000,3'b011,`ysyx_22050550_R1},`ysyx_22050550_SLTU,
        {7'b0100000,3'b000,`ysyx_22050550_R2},`ysyx_22050550_SUB,
        {7'b0000001,3'b000,`ysyx_22050550_R2},`ysyx_22050550_MUL,
        {7'b0000001,3'b100,`ysyx_22050550_R2},`ysyx_22050550_DIVS,
        {7'b0000001,3'b101,`ysyx_22050550_R2},`ysyx_22050550_DIV,
        {7'b0000001,3'b110,`ysyx_22050550_R2},`ysyx_22050550_REMS,
        {7'b0000001,3'b111,`ysyx_22050550_R2},`ysyx_22050550_REM, //REMUW
        {7'b0000000,3'b001,`ysyx_22050550_R2},`ysyx_22050550_SLLW,
        {7'b0000000,3'b001,`ysyx_22050550_R1},`ysyx_22050550_SLL,
        {7'b0100000,3'b101,`ysyx_22050550_R2},`ysyx_22050550_SRA,
        {7'b0000000,3'b101,`ysyx_22050550_R2},`ysyx_22050550_SRL,
        {7'b0000000,3'b101,`ysyx_22050550_R1},`ysyx_22050550_SRL,
        {7'b0000000,3'b111,`ysyx_22050550_R1},`ysyx_22050550_AND,
        {7'b0000000,3'b110,`ysyx_22050550_R1},`ysyx_22050550_OR
    }));
    */
    wire mret = io_IFID_inst == 32'h30200073;
    //assign io_idex_mretflag = mret;
    /*
    wire [4:0] lsumask; 
    ysyx_22050550_MuxKeyWithDefault#(7,3,5) LoadMux(
    .out(lsumask),.key(func3),.default_out(5'b11111),.lut({
        `ysyx_22050550_LB ,5'b10001,
        `ysyx_22050550_LH ,5'b10011,
        `ysyx_22050550_LW ,5'b10111,
        `ysyx_22050550_LD ,5'b11111,
        `ysyx_22050550_LWU,5'b10001,
        `ysyx_22050550_LHU,5'b10001,
        `ysyx_22050550_LBU,5'b10001
    }));
    */
    //Rtype 对src进行掩模的flag
    wire divw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b1) &&(func3 == 3'b100);
    wire divuw = (opcode == `ysyx_22050550_R2) && (func7 == 7'b1) &&(func3 == 3'b101);
    wire remw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b1) &&(func3 == 3'b110);
    wire remuw = (opcode == `ysyx_22050550_R2) && (func7 == 7'b1) &&(func3 == 3'b111);
    wire sllw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b0) &&(func3 == 3'b001);
    wire sraw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b0100000) &&(func3 == 3'b101);
    wire srlw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b0) &&(func3 == 3'b101);
    wire srl   = (opcode == `ysyx_22050550_R1) && (func7 == 7'b0) &&(func3 == 3'b101);
    wire sign32  = divw || divuw || remw;
    wire usign32 = remuw;
    wire rs2low5 = srlw || sllw  || sraw;
    //Btype相关 这里与chisel相同的思路
    /*
    reg [4:0] Btype;
    wire[2:0] BtypeKey = {func3};
    always@(func3) begin
        if(InstType != B_type)   Btype = 5'd0     ;
        else if(func3 == 3'b000) Btype = 5'b01000 ;
        else if(func3 == 3'b001) Btype = 5'b10000 ;
        else if(func3 == 3'b101) Btype = 5'b01100 ;
        else if(func3 == 3'b111) Btype = 5'b01101 ;
        else if(func3 == 3'b100) Btype = 5'b00010 ;
        else if(func3 == 3'b110) Btype = 5'b00011 ;
        //else                     Btype = 5'd0     ;
    end
    */
    
    wire[4:0] Btype;
    wire[2:0] BtypeKey = {func3};
    assign Btype =
    BtypeKey == 3'b000 ? 5'b01000 :
    BtypeKey == 3'b001 ? 5'b10000 :
    BtypeKey == 3'b101 ? 5'b01100 :
    BtypeKey == 3'b111 ? 5'b01101 :
    BtypeKey == 3'b100 ? 5'b00010 :
    BtypeKey == 3'b110 ? 5'b00011 : 5'd0;
    
    /*
    ysyx_22050550_MuxKeyWithDefault#(6,3,5) BtypeOpMux(
        .out(Btype),.key(BtypeKey),.default_out(5'd0),.lut({
        3'b000,5'b01000,//BEQ  = 000    b01000
        3'b001,5'b10000,//BNE  = 001    b10000
        3'b101,5'b01100,//BGE  = 101    b01100
        3'b111,5'b01101,//BGEU = 111    b01101
        3'b100,5'b00010,//BLT  = 100    b00010
        3'b110,5'b00011 //BLTU = 110    b00011
    }));
    */
    wire Unless = rData1 < rData2; wire Unbigger = rData1 > rData2;
    wire Sless  = $signed(rData1) < $signed(rData2); wire Sbigger  = $signed(rData1) > $signed(rData2);
    wire less = Btype[0] ? Unless : Sless; wire bigger = Btype[0] ? Unbigger : Sbigger;
    wire eq = rData1 == rData2; wire ueq = rData1 != rData2;
    wire jump = InstType == B_type &&((less&Btype[1])||(bigger&Btype[2])||(eq&Btype[3])||(ueq&Btype[4]));
    //S_type
    wire writeflag = opcode == `ysyx_22050550_S1;
    /*
    reg [7:0] wmask ;
    wire[2:0] StypeKey = {func3};
    always@(func3) begin
        if (InstType != S_type)      wmask = 8'd0        ;
        else if (StypeKey == 3'b011) wmask = 8'b11111111 ;
        else if (StypeKey == 3'b010) wmask = 8'b00001111 ;
        else if (StypeKey == 3'b001) wmask = 8'b00000011 ;
        else if (StypeKey == 3'b000) wmask = 8'b00000001 ;
        //else                         wmask = 8'd0        ;
    end
    */
    
    wire [7:0] wmask;
    wire[2:0] StypeKey = {func3};
    assign wmask = 
    StypeKey == 3'b011 ? 8'b11111111 :
    StypeKey == 3'b010 ? 8'b00001111 :
    StypeKey == 3'b001 ? 8'b00000011 :
    StypeKey == 3'b000 ? 8'b00000001 : 8'hff ;
    
    /*
    ysyx_22050550_MuxKeyWithDefault#(4,3,8) StypeMaskMux(
        .out(wmask),.key(StypeKey),.default_out(8'd0),.lut({
        3'b011,8'b11111111,
        3'b010,8'b00001111,
        3'b001,8'b00000011,
        3'b000,8'b00000001
    }));
    */
    //U_type
    wire aupic = opcode == `ysyx_22050550_U1;
    //wire lui   = opcode == `ysyx_22050550_U2;

    //final op
    /*
    reg [4:0]ExuOp;
    always@(opcode) begin
             if(InstType == I_type) ExuOp = Itype_Op;
        else if(InstType == R_type) ExuOp = Rtype_Op;
                               else ExuOp = `ysyx_22050550_ADD;
    end
    */
    
    wire[4:0] ExuOp;
    assign ExuOp = InstType == I_type ? Itype_Op:
                   InstType == R_type ? Rtype_Op:`ysyx_22050550_ADD;
    
    /*
    ysyx_22050550_MuxKeyWithDefault#(2,3,5) ExuOpMux(
        .out(ExuOp),.key(InstType),.default_out(`ysyx_22050550_ADD),.lut({
            I_type , Itype_Op,
            R_type , Rtype_Op
    }));
    */
    wire Jalflag = InstType == J_type;
    wire [4:0] jal = {jalrflag,ecallflag,jump,mret,Jalflag} ;
    //wire [3:0] jal = jalrflag?4'd2:ecallflag?4'd4:jump ?4'd3 :mret?4'd5 :Jalflag?4'd1: 4'd0;
    /*
    这个感觉也可以换掉，应该会更快 还是用always快一些
    */
    /*
    assign rd1 =
    InstType == I_type ? (jalrflag?io_IFID_pc:sraiw?Signedrs1:srliw?USignedrs1:rData1)                          :
    InstType == R_type ? (usign32? USignedrs1:sign32 ? Signedrs1 : srlw ? USignedrs1: sraw ? Signedrs1 : rData1):
    InstType == B_type ?  0         :
    InstType == S_type ?  rData1    :
    InstType == U_type ? (aupic?io_IFID_pc:lui?0:0) :
    InstType == J_type ? io_IFID_pc : 0;
    assign rd2 =
    InstType == I_type ? (csrflag? 64'd0 : jalrflag?4:shamtflag ?{{58{1'b0}},shamt} : imm)                      :
    InstType == R_type ? (usign32? USignedrs2:sign32 ? Signedrs2 : rs2low5 ?{{59{1'b0}},rData2[4:0]}:srl?{{58{1'b0}},rData2[5:0]}:rData2) :
    InstType == B_type ?  0         :
    InstType == S_type ? imm        :
    InstType == U_type ? imm        :
    InstType == J_type ? `ysyx_22050550_REGWIDTH'd4 : 0;
    */
    
    always@(*)begin
        case (InstType)
            I_type : begin
                rd1 = jalrflag?io_IFID_pc:sraiw?Signedrs1:srliw?USignedrs1:rData1; 
                rd2 = csrflag? 64'd0 : jalrflag?4:shamtflag ?{{58{1'b0}},shamt} : imm; 
            end 
            R_type : begin
                rd1 = usign32? USignedrs1:sign32 ? Signedrs1 : srlw ? USignedrs1: sraw ? Signedrs1 : rData1;
                rd2 = usign32? USignedrs2:sign32 ? Signedrs2 : rs2low5 ?{{59{1'b0}},rData2[4:0]}:srl?{{58{1'b0}},rData2[5:0]}:rData2;
            end
            /*
            B_type : begin
                rd1 = 0;
                rd2 = 0;
            end
            */
            S_type : begin
                rd1 = rData1;
                rd2 = imm;
            end
            U_type : begin
                rd1 = aupic?io_IFID_pc:0;
                rd2 = imm;
            end
            J_type : begin
                rd1 = io_IFID_pc;
                rd2 = `ysyx_22050550_REGWIDTH'd4;
            end
            default: begin
                rd1 = 0;
                rd2 = 0;
            end
        endcase
    end
    
    //流水冲突处理 计分板以及旁路转发
    wire ebreak = io_IFID_inst == `ysyx_22050550_INSTWIDTH'h00100073;
    wire realbusy1 = io_Score_RScore_busy1 & (!io_Pass_pass1);
    wire realbusy2 = io_Score_RScore_busy2 & (!io_Pass_pass2);

	//fence.i 整理一下执行fence.i 时要做的事，一个是冲刷流水线  
	//一个是 Cache 中所有指令缓存都标记为无效，  所有指令缓存中的脏数据写会内
	//存，以确保内存中的数据与指令缓存中的数据一致  
	//并且禁止指令流的预取  
	wire fence  = io_IFID_inst == 32'h0000100f;
	assign io_fence = fence					;

    assign io_IDRegFile_raddr1  = rs1;
    assign io_IDRegFile_raddr2  = rs2;
    assign io_idex_pc           = io_IFID_pc;
    assign io_idex_inst         = io_IFID_inst;
    /************valid握手信号***************/
    assign io_idex_valid        = io_IFID_valid && (!realbusy1) && (!realbusy2) && !io_if_flush ;//*
   // assign io_idex_rs1addr      = rs1;
  //  assign io_idex_abort        = InstType == Bad_type;
    assign io_idex_rs2          = rData2;
    //assign io_idex_imm          = imm;
    assign io_idex_AluOp_rd1    = rd1;
    assign io_idex_AluOp_rd2    = rd2;
    assign io_idex_AluOp_op     = ExuOp;
    assign io_idex_waddr        = rd;
    //注意ret指令也会把wen拉高，但是这个时候rd
	//fence.i 指令没有对寄存器的写
    assign io_idex_wen          = (InstType !=S_type) && (InstType != B_type)&& (InstType != Bad_type)&&(opcode != `ysyx_22050550_I6);
    assign io_idex_wflag        = writeflag ;
    assign io_idex_rflag        = readflag  ;
    assign io_idex_csrflag      = csrflag   ;
//    assign io_idex_jalrflag     = jalrflag  ;
    assign io_idex_ecallflag    = ecallflag ;
 //   assign io_idex_breakflag    = ebreak    ;
    assign io_idex_mretflag     = mret      ;
    assign io_idex_wmask        = wmask;
    assign io_idex_alumask      = alumaskflag;
    assign io_idex_func3        = func3;
    //assign io_idex_func7        = func7;
  //  assign io_idex_NextPc       = io_RegPc_nextpc;
    assign io_IDNPC_jal         = jal;
    assign io_IDNPC_IdPc        = io_IFID_pc;
    assign io_IDNPC_imm         = imm;
    assign io_IDNPC_rs1         = rData1;
    assign io_IDNPC_ecallpc     = io_RegFileID_CSRs_mtvec;
    assign io_IDNPC_mretpc      = io_RegFileID_CSRs_mepc ;
    assign io_IDNPC_valid       = io_idex_valid;
    /************计分板以及旁路转发**************/
    assign io_ReadyIF_ready = io_ReadyEX_ready & (!realbusy1) & (!realbusy2);// & (!ebreak);//*
    assign io_Score_RScore_rdaddr1 = rs1; 
    assign io_Score_RScore_rdaddr2 = rs2;
    assign io_Score_RScore_valid = io_IFID_valid & (!ebreak);
    assign io_Score_RScore_wen   = io_idex_valid && io_idex_wen &&io_ReadyEX_ready;
    assign io_Score_RScore_waddr = rd;
    assign io_Pass_rs1 = rs1; 
    assign io_Pass_rs2 = rs2;
    //assign io_Score_WScore_wen = io_idex_wen && io_ReadyEX_ready && io_idex_valid;
    //assign io_Score_WScore_waddr = io_idex_waddr;

    assign io_Pass_valid = io_IFID_valid;
	assign io_id_flush   = io_if_flush  ;

`ifdef ysyx_22050550_IDUDEBUG
    wire printflagin =  1;
    always@(posedge clock) begin
        if (io_idex_pc == `ysyx_22050550_DEBUGPC && printflagin) begin
            $display("src1:%x src2:%x rd1:%x rd2:%x pass:%x",rd1,rd2,rData1,rData2,io_Pass_rdata);
        end
    end
    always@(posedge clock) begin
        if (io_idex_pc == `ysyx_22050550_DEBUGPC && printflagin) begin
            $display("pc:%x inst:%x imm:%x addr:%x",io_IFID_pc,io_IFID_inst,imm,rd1+imm);
            $display("rs2:%d regfilerd2:%x rd2:%x pass:%x",rs2,io_RegFileID_rdata2,rData2,io_Pass_rdata);
        end
    end
`endif


endmodule
//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_PartProductGen(
    input          io_Choose_BAdd           ,
    input          io_Choose_B              ,
    input          io_Choose_BSub           ,
    input          io_Choose_HighUsign      ,
    input  [127:0] io_Choose_PartProdIn     ,
    input  [127:0] io_Choose_S              ,
    output [127:0] io_Choose_PartProdOut
);
    wire [2:0] chooseSignal = {io_Choose_BAdd,io_Choose_B,io_Choose_BSub};

    /*
    reg [127:0] add;
    always@(chooseSignal)begin
             if(chooseSignal == 3'b000) add = 128'd0                                                                  ;
        else if(chooseSignal == 3'b001) add = io_Choose_S                                                             ;
        else if(chooseSignal == 3'b010) add = io_Choose_S                                                             ;
        else if(chooseSignal == 3'b011) add = io_Choose_S << 1                                                        ;
        else if(chooseSignal == 3'b100) add = (io_Choose_HighUsign?io_Choose_S << 1: (~io_Choose_S+1)<<1             );
        else if(chooseSignal == 3'b101) add = (io_Choose_HighUsign?(io_Choose_S << 1) + io_Choose_S: (~io_Choose_S+1));
        else if(chooseSignal == 3'b110) add = (io_Choose_HighUsign?(io_Choose_S << 1) + io_Choose_S: (~io_Choose_S+1));
        else if(chooseSignal == 3'b111) add = (io_Choose_HighUsign?io_Choose_S << 2: 0  )                             ;
        //else                            add = 128'd0                                                                  ;

    end
    */
    
    wire [127:0] add;
    
    assign add = 
    chooseSignal == 3'b000 ? 128'd0                                                                  :
    chooseSignal == 3'b001 ? io_Choose_S                                                             :
    chooseSignal == 3'b010 ? io_Choose_S                                                             :
    chooseSignal == 3'b011 ? io_Choose_S << 1                                                        :
    chooseSignal == 3'b100 ? (io_Choose_HighUsign?io_Choose_S << 1: (~io_Choose_S+1)<<1             ):
    chooseSignal == 3'b101 ? (io_Choose_HighUsign?(io_Choose_S << 1) + io_Choose_S: (~io_Choose_S+1)):
    chooseSignal == 3'b110 ? (io_Choose_HighUsign?(io_Choose_S << 1) + io_Choose_S: (~io_Choose_S+1)):
    chooseSignal == 3'b111 ? (io_Choose_HighUsign?io_Choose_S << 2: 0  ):128'b0;
    
    /*
    assign add = 
    chooseSignal == 3'b000 ? 128'd0                                                                  :
    chooseSignal == 3'b001 ? io_Choose_S                                                             :
    chooseSignal == 3'b010 ? io_Choose_S                                                             :
    chooseSignal == 3'b011 ? io_Choose_S  * 2                                                        :
    chooseSignal == 3'b100 ? (io_Choose_HighUsign?io_Choose_S * 2: (~io_Choose_S+1) * 2             ):
    chooseSignal == 3'b101 ? (io_Choose_HighUsign?(io_Choose_S  * 3)              : (~io_Choose_S+1)):
    chooseSignal == 3'b110 ? (io_Choose_HighUsign?(io_Choose_S  * 3)              : (~io_Choose_S+1)):
    chooseSignal == 3'b111 ? (io_Choose_HighUsign? io_Choose_S  * 3 : 0  ):128'b0;
    */
    /*
    ysyx_22050550_MuxKeyWithDefault#(8,3,128) ProductMux(
        .out(add),.key(chooseSignal),.default_out(128'b0),.lut({
        3'b000   ,   128'd0                                                                 ,
        3'b001   ,   io_Choose_S                                                            ,
        3'b010   ,   io_Choose_S                                                            ,
        3'b011   ,   io_Choose_S << 1                                                       ,
        3'b100   ,   io_Choose_HighUsign?io_Choose_S << 1: (~io_Choose_S+1)<<1              ,
        3'b101   ,   io_Choose_HighUsign?(io_Choose_S << 1) + io_Choose_S: (~io_Choose_S+1) ,
        3'b110   ,   io_Choose_HighUsign?(io_Choose_S << 1) + io_Choose_S: (~io_Choose_S+1) ,
        3'b111   ,   io_Choose_HighUsign?io_Choose_S << 2: 0                                
    }));
    */
    wire [127:0] out = (io_Choose_PartProdIn + add);
    assign io_Choose_PartProdOut = {{2'b0},out[127:2]};
endmodule
module  ysyx_22050550_Multi(
    input  [0:0]     clock               ,  
    input  [0:0]     reset               ,  
    input  [0:0]     io_Exu_MulValid     ,  
    input  [0:0]     io_Exu_Flush        ,  
    input  [0:0]     io_Exu_Mulw         ,  
    input  [1:0]     io_Exu_MulSigned    ,  
    input  [63:0]    io_Exu_Multiplicand ,  
    input  [63:0]    io_Exu_Multiplier   ,  
    output [0:0]     io_Exu_MulReady     ,  
    output [0:0]     io_Exu_OutValid     ,  
    //output [63:0]    io_Exu_ResultH      ,  
    output [63:0]    io_Exu_ResultL        
);
//Radix4-booth 
    reg     [127:0] Prod;
    wire    [127:0] Prodin;
    reg     [127:0] Sum ;
    reg     [5:0]   ind ;
    wire    [5:0]   maxind = io_Exu_Mulw ? 30 : 62;
    wire    Bsub  = ind == 0 ? 0 : io_Exu_Multiplier[ind-1];
    wire    B     = io_Exu_Multiplier[ind];
    wire    Badd  = io_Exu_Multiplier[ind+1];
    ysyx_22050550_PartProductGen ProdGen(
    .io_Choose_BAdd       (Badd),
    .io_Choose_B          (B),
    .io_Choose_BSub       (Bsub),
    .io_Choose_HighUsign  ((ind==maxind &&io_Exu_MulSigned==2'b00)),
    .io_Choose_PartProdIn (Prod),
    .io_Choose_S          (Sum),
    .io_Choose_PartProdOut(Prodin)
    );
    localparam Idle = 2'd0, Busy = 2'd1, Valid = 2'd2;
    reg [1:0] state,next;
    always@(posedge clock)begin
        if(reset) begin
            state <= Idle;
        end
        else state <= next;
    end 
    always @(*) begin
        case (state)
            Idle: begin
                if(io_Exu_MulValid) begin
                    next = Busy;
                end
                else next = Idle;
            end 
            Busy: begin
                if(io_Exu_Flush) next = Idle;
                else if(ind != maxind) next = Busy;
                else next = Valid;
            end
            Valid: begin
                next = Idle;
            end
            default: next = Idle;
        endcase
    end
    wire Proden = state == Busy || state == Valid;
    wire [127:0] realProd = state == Busy ? Prodin : 0;
    ysyx_22050550_Reg # (128,128'd0)ProdReg(
        .clock(clock),
        .reset(reset),
        .wen(Proden),
        .din(realProd),
        .dout(Prod)
    );
    wire Sumen = state == Idle && io_Exu_MulValid ;
    ysyx_22050550_Reg # (128,128'd0)SumReg(
        .clock(clock),
        .reset(reset),
        .wen(Sumen),
        .din(io_Exu_Mulw?{{32{1'b0}},io_Exu_Multiplicand,{32{1'b0}}}:{io_Exu_Multiplicand,{64{1'b0}}}),
        .dout(Sum)
    );
    wire inden =  (state == Idle && io_Exu_MulValid) || (state == Busy);
    wire [5:0] indinput = (state == Busy) ? ind + 2:0;
    ysyx_22050550_Reg # (6,6'd0)IndReg(
        .clock(clock),
        .reset(reset),
        .wen(inden),
        .din(indinput),
        .dout(ind)
    );
    assign io_Exu_MulReady = state == Idle;
    assign io_Exu_OutValid = state == Valid;
    assign io_Exu_ResultL  = Prod[63:0];
    //assign io_Exu_ResultH  = Prod[127:64];

endmodule



module ysyx_22050550_Reg #(
    WIDTH = 1, RESET_VAL = 0
) (
    input                   clock,
    input                   reset,
    input                   wen,
    input      [WIDTH-1:0]  din,
    output reg [WIDTH-1:0] dout
);
    always @(posedge clock) begin
        if (reset) dout <= RESET_VAL;
        else if (wen) dout <= din;
    end
endmodule
//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_CLINT(
	input			clock		, 
	input			reset		,
	input			ren			,
	input	[63:0]	raddr		,
	input	        wen			,
	input	[63:0]	waddr		,
	input	[63:0]	wdata		,
	input			timervalid  ,
	output	[63:0]	rdata		,

	output			clintmtip	

//	output 	[63:0]	mtimereg	,
//	output	[63:0]	mtimecmpreg	
);
//实现类似chisel  
//mtime  mtimecmp reg 
reg [63:0] mtime, mtimecmp ;
wire mtimewen ,mtimecmpwen;

wire [63:0] mtimein , mtimecmpin;

ysyx_22050550_Reg # (64,64'd0) Mtime(
    .clock(clock),.reset(reset),.wen(mtimewen),
    .din(mtimein),.dout(mtime));
	
ysyx_22050550_Reg # (64,64'd100000000) Mtimecmp(
.clock(clock),.reset(reset),.wen(mtimecmpwen),
.din(mtimecmpin),.dout(mtimecmp));

wire mtip = mtime >=mtimecmp ; 

assign mtimewen = (wen &&(waddr == `ysyx_22050550_MTIME)) || (!mtip && timervalid) || (mtip);
assign mtimein = (wen &&(waddr == `ysyx_22050550_MTIME)) ? wdata 
				: (!mtip&&timervalid) ? mtime+64'h1 : (mtip) ? 0 : mtime ; 

assign mtimecmpwen = wen &&(waddr == `ysyx_22050550_MTIMECMP);
assign mtimecmpin  = wdata  ; 

assign clintmtip = mtip ; 
//assign mtimereg  = mtime ;
//assign mtimecmpreg = mtimecmp ;  

assign rdata =		 (ren &&raddr == `ysyx_22050550_MTIME ) ? mtime 
					:(ren &&raddr == `ysyx_22050550_MTIMECMP) ? mtimecmp 
					: 0 ;



endmodule 
//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550(
    input			clock               ,
    input			reset               ,
	input			io_interrupt		,
	input			io_master_awready	,
	output			io_master_awvalid	,	
	output [3:0]	io_master_awid		,   
	output [31:0]	io_master_awaddr	,   
	output [7:0]	io_master_awlen		,   
	output [2:0]	io_master_awsize 	,   
	output [1:0]	io_master_awburst	,	
	input			io_master_wready 	,   
	output			io_master_wvalid 	,   
	output [63:0]	io_master_wdata	 	,   
	output [7:0]	io_master_wstrb	 	,   
	output			io_master_wlast	 	,   
	output			io_master_bready 	,   
	input			io_master_bvalid 	,   
	input [3:0]		io_master_bid	 	,   
	input [1:0]		io_master_bresp	 	,   
	input			io_master_arready	,	
	output			io_master_arvalid	,	
	output [3:0]	io_master_arid	 	,   
	output [31:0]	io_master_araddr 	,   
	output [7:0]	io_master_arlen	 	,   
	output [2:0]	io_master_arsize 	,   
	output [1:0]	io_master_arburst	,	
	output			io_master_rready 	,   
	input			io_master_rvalid 	,   
	input [3:0]		io_master_rid	 	,   
	input [1:0]		io_master_rresp	 	,   
	input [63:0]	io_master_rdata	 	,   
	input			io_master_rlast	 	,   
	output          io_slave_awready	, 
	input           io_slave_awvalid	, 
	input [3:0]		io_slave_awid		, 
	input [31:0]	io_slave_awaddr		, 
	input [7:0]		io_slave_awlen		, 
	input [2:0]		io_slave_awsize		, 
	input [1:0]		io_slave_awburst	, 
	output          io_slave_wready		, 
	input           io_slave_wvalid		, 
	input [63:0]	io_slave_wdata		, 
	input [7:0]		io_slave_wstrb		, 
	input           io_slave_wlast		, 
	input           io_slave_bready		, 
	output          io_slave_bvalid		, 
	output    [3:0] io_slave_bid		, 
	output    [1:0] io_slave_bresp		, 
	output          io_slave_arready	, 
	input           io_slave_arvalid	, 
	input     [3:0] io_slave_arid		, 
	input    [31:0] io_slave_araddr		, 
	input     [7:0] io_slave_arlen		, 
	input     [2:0] io_slave_arsize		, 
	input     [1:0] io_slave_arburst	, 
	input           io_slave_rready		, 
	output          io_slave_rvalid		, 
	output    [3:0] io_slave_rid		, 
	output    [1:0] io_slave_rresp		, 
	output   [63:0] io_slave_rdata		, 
	output          io_slave_rlast		,
    output [5:0]	io_sram0_addr		,
    output			io_sram0_cen		,
    output			io_sram0_wen		,
    output [127:0]	io_sram0_wmask		,
    output [127:0]	io_sram0_wdata		,
    input [127:0]	io_sram0_rdata		,
    output [5:0]	io_sram1_addr		,
    output			io_sram1_cen		,
    output			io_sram1_wen		,
    output [127:0]	io_sram1_wmask		,
    output [127:0]	io_sram1_wdata		,
    input [127:0]	io_sram1_rdata		,
    output [5:0]	io_sram2_addr		,
    output			io_sram2_cen		,
    output			io_sram2_wen		,
    output [127:0]	io_sram2_wmask		,
    output [127:0]	io_sram2_wdata		,
    input [127:0]	io_sram2_rdata		,
    output [5:0]	io_sram3_addr		,
    output			io_sram3_cen		,
    output			io_sram3_wen		,
    output [127:0]	io_sram3_wmask		,
    output [127:0]	io_sram3_wdata		,
    input [127:0]	io_sram3_rdata		,
    output [5:0]	io_sram4_addr		,
    output			io_sram4_cen		,
    output			io_sram4_wen		,
    output [127:0]	io_sram4_wmask		,
    output [127:0]	io_sram4_wdata		,
    input [127:0]	io_sram4_rdata		,
    output [5:0]	io_sram5_addr		,
    output			io_sram5_cen		,
    output			io_sram5_wen		,
    output [127:0]	io_sram5_wmask		,
    output [127:0]	io_sram5_wdata		,
    input [127:0]	io_sram5_rdata		,
    output [5:0]	io_sram6_addr		,
    output			io_sram6_cen		,
    output			io_sram6_wen		,
    output [127:0]	io_sram6_wmask		,
    output [127:0]	io_sram6_wdata		,
    input [127:0]	io_sram6_rdata		,
    output [5:0]	io_sram7_addr		,
    output			io_sram7_cen		,
    output			io_sram7_wen		,
    output [127:0]	io_sram7_wmask		,
    output [127:0]	io_sram7_wdata		,
    input [127:0]	io_sram7_rdata			
);

//流水线冲刷信号
//记录一下对流水线冲刷的理解， 冲刷应该从第一级开始通过流水线向后清空，但是清
//空时，应该保证这一级的指令已经执行完毕
//冲刷信号应该要一直拉高   直到其传递到WBU 。此时也要暂停取指，直到冲刷信号拉
//低， 这样子才能保证之前的指令都执行完毕。
wire Flush; 
//fence.i 信号   
reg FLUSH ;
wire flushen = Flush || Top_flush ; 
wire flushin = Flush   ;
ysyx_22050550_Reg # (1,1'd0)RegFlush(
    .clock(clock),.reset(reset),.wen(flushen),.din(flushin),.dout(FLUSH     ));
wire realflush = Flush || FLUSH ;


wire IF_ready;
wire [ 4:0] io_IDNPC_jal    ;
wire [63:0] io_IDNPC_IdPc   ;
wire [63:0] io_IDNPC_imm    ;
wire [63:0] io_IDNPC_rs1    ;
wire [63:0] io_IDNPC_ecallpc;
wire [63:0] io_IDNPC_mretpc ;
wire [ 0:0] io_IDNPC_valid  ;
wire [63:0] if_pc           ;
wire [31:0] if_npc			;
//wire [63:0] NextPc          ;
ysyx_22050550_PCREG PCREG(                                                                                              
    .reset      (reset) ,
    .clock      (clock) ,
    .ready      (IF_ready) ,
    .Id_jal     (io_IDNPC_jal) ,
    .Id_Pc      (io_IDNPC_IdPc) ,
    .Id_imm     (io_IDNPC_imm) ,
    .Id_rs1     (io_IDNPC_rs1) ,
    .Id_ecallpc (io_IDNPC_ecallpc) , 
    .Id_mretpc  (io_IDNPC_mretpc) ,     
    .Id_valid   (io_IDNPC_valid) , 
    .irujump    (irujump		),   
    .npc        (if_pc),  
	.outjumpc   (if_npc)
  //  .NextPc     (NextPc)
);
wire Id_ready;
wire ICache_dataok;
wire [63:0] ICache_Data;
wire ICache_valid;/* verilator lint_off UNOPTFLAT*/
wire [63:0] ICache_addr ;
ysyx_22050550_IFU IFU(
    //.reset       (reset)        ,
    //.clock       (clock)        ,
    .Id_ready    (Id_ready)     ,
    .Cache_DataOk(ICache_dataok),
    .Pc          (if_pc)        ,
    .Cache_Data  (ICache_Data)  ,
    //to id 
    .pc          (if_id_pc)     ,
    .inst        (if_id_inst)   ,
    .valid       (if_id_valid)  ,
    //to pc 
    .ready       (IF_ready)       ,
    //to cache
    .Cache_valid (ICache_valid  )   ,
    .Cache_addr  (ICache_addr   )   ,
	.io_flush    (realflush		)	
);
//IF_ID
wire [`ysyx_22050550_RegBus]    if_id_pc;
wire [`ysyx_22050550_InstBus]   if_id_inst;
wire                            if_id_valid;
wire							if_id_flush = realflush && !Icache_busy ;
reg [`ysyx_22050550_RegBus]     Rif_id_pc;
//reg [31:0]						Rif_id_npc;
reg [`ysyx_22050550_InstBus]    Rif_id_inst;
reg                             Rif_id_valid;
reg                             Rif_id_flush;
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regif_id_pc(
    .clock(clock),.reset(reset),.wen(Id_ready),.din(if_id_pc),      .dout(Rif_id_pc     ));
//ysyx_22050550_Reg # (32,32'd0)Regif_id_npc(
  //  .clock(clock),.reset(reset),.wen(Id_ready),.din(if_npc),      .dout(Rif_id_npc     ));

ysyx_22050550_Reg # (`ysyx_22050550_INSTWIDTH,32'd0)Regif_id_inst(
    .clock(clock),.reset(reset),.wen(Id_ready),.din(if_id_inst),    .dout(Rif_id_inst   ));
ysyx_22050550_Reg # (1,1'd0)Regif_id_valid(
    .clock(clock),.reset(reset),.wen(Id_ready),.din(if_id_valid),   .dout(Rif_id_valid  ));
ysyx_22050550_Reg # (1,1'd0)Regif_id_flush(
    .clock(clock),.reset(reset),.wen(Id_ready),.din(if_id_flush),   .dout(Rif_id_flush  ));

// ID_Regfile
wire [63:0] RegFileID_CSRs_mepc  ;
wire [63:0] RegFileID_CSRs_mtvec ;
wire [63:0] RegFileID_CSRs_mip   ;
wire [63:0] RegFileID_rdata1     ;
wire [63:0] RegFileID_rdata2     ;
wire [4:0]  rsaddr1             ;
wire [4:0]  rsaddr2             ;

wire EX_ID_ready;
//ID_Bypass
wire [63:0] Pass_rdata    ;
wire [0 :0] Pass_pass1    ;
wire [0 :0] Pass_pass2    ;
wire [4:0]  Pass_rs1   ;
wire [4:0]  Pass_rs2   ;
wire [0:0]  Pass_valid ;
//ID_ScoreBoard
wire Score_RScore_busy1         ;
wire Score_RScore_busy2         ;

wire [0:0] Score_RScore_valid   ;
wire [4:0] Score_RScore_rdaddr1 ;
wire [4:0] Score_RScore_rdaddr2 ;
wire [0:0] Score_RScore_wen     ;
wire [4:0] Score_RScore_waddr   ;
//ID_EX;
wire [63:0] idex_pc          ;       
wire [31:0] idex_inst        ;       
wire [ 0:0] idex_valid       ;       
//wire [ 4:0] idex_rs1addr     ;       
//wire [ 0:0] idex_abort       ;       
wire [63:0] idex_rs2         ;       
//wire [63:0] idex_imm         ;       
wire [63:0] idex_AluOp_rd1   ;       
wire [63:0] idex_AluOp_rd2   ;       
wire [ 4:0] idex_AluOp_op    ;       
wire [ 4:0] idex_waddr       ;       
wire [ 0:0] idex_wen         ;       
wire [ 0:0] idex_wflag       ;       
wire [ 0:0] idex_rflag       ;       
wire [ 0:0] idex_csrflag     ;       
//wire [ 0:0] idex_jalrflag    ;       
wire [ 0:0] idex_ecallflag   ;       
wire [ 0:0] idex_mretflag    ;       
//wire [ 0:0] idex_breakflag   ;       
wire [ 7:0] idex_wmask       ;       
//wire [ 1:0] idex_choose      ;       
wire [ 0:0] idex_alumask     ;       
wire [ 2:0] idex_func3       ;       
//wire [ 6:0] idex_func7       ;       
//wire [63:0] idex_NextPc      ;       
wire    fence	;
wire    idex_flush				;
ysyx_22050550_IDU IDU(
//  .reset       (reset)        ,
  //.clock       (clock)        ,
 //IF
  .io_IFID_inst  (Rif_id_valid?Rif_id_inst:0    )   ,
  .io_IFID_pc    (Rif_id_pc                     )   ,  
  .io_IFID_valid (Rif_id_valid                  )   ,
  //REGFILE
  .io_RegFileID_CSRs_mepc (RegFileID_CSRs_mepc )      ,
  .io_RegFileID_CSRs_mtvec(RegFileID_CSRs_mtvec)      ,
  //.io_RegFileID_CSRs_mip  (RegFileID_CSRs_mip  )      ,
  .io_RegFileID_rdata1    (RegFileID_rdata1    )      ,
  .io_RegFileID_rdata2    (RegFileID_rdata2    )      ,
  // Ex
  .io_ReadyEX_ready       (EX_ID_ready)               ,
  .io_Score_RScore_busy1  (Score_RScore_busy1)      ,
  .io_Score_RScore_busy2  (Score_RScore_busy2)      ,
  // bypass
  .io_Pass_rdata          (Pass_rdata) ,
  .io_Pass_pass1          (Pass_pass1) ,
  .io_Pass_pass2          (Pass_pass2) ,  
    //regpc
 // .io_RegPc_nextpc (NextPc)    , // input

  .io_IDRegFile_raddr1  (rsaddr1),
  .io_IDRegFile_raddr2  (rsaddr2),
  .io_idex_pc              (idex_pc          ),
  .io_idex_inst            (idex_inst        ),
  .io_idex_valid           (idex_valid       ),
  //.io_idex_rs1addr         (idex_rs1addr     ),
 // .io_idex_abort           (idex_abort       ),
  .io_idex_rs2             (idex_rs2         ) ,
 // .io_idex_imm             (idex_imm         ) ,
  .io_idex_AluOp_rd1       (idex_AluOp_rd1   ) ,
  .io_idex_AluOp_rd2       (idex_AluOp_rd2   ) ,
  .io_idex_AluOp_op        (idex_AluOp_op    ) ,
  .io_idex_waddr           (idex_waddr       ) ,
  .io_idex_wen             (idex_wen         ) ,
  .io_idex_wflag           (idex_wflag       ) ,
  .io_idex_rflag           (idex_rflag       ) ,
  .io_idex_csrflag         (idex_csrflag     ) ,
 // .io_idex_jalrflag        (idex_jalrflag    ) ,
  .io_idex_ecallflag       (idex_ecallflag   ) ,
  .io_idex_mretflag        (idex_mretflag    ) ,
 // .io_idex_breakflag       (idex_breakflag   ) ,
  .io_idex_wmask           (idex_wmask       ) ,
  //.io_idex_choose          (idex_choose      ) ,
  .io_idex_alumask         (idex_alumask     ) ,
  .io_idex_func3           (idex_func3       ) ,
  //.io_idex_func7           (idex_func7       ) ,
 // .io_idex_NextPc          (idex_NextPc      ) ,
  .io_IDNPC_jal            (io_IDNPC_jal    ) ,
  .io_IDNPC_IdPc           (io_IDNPC_IdPc   ) ,
  .io_IDNPC_imm            (io_IDNPC_imm    ) ,
  .io_IDNPC_rs1            (io_IDNPC_rs1    ) ,
  .io_IDNPC_ecallpc        (io_IDNPC_ecallpc) ,
  .io_IDNPC_mretpc         (io_IDNPC_mretpc ) ,
  .io_IDNPC_valid          (io_IDNPC_valid  ) ,
  .io_ReadyIF_ready        (Id_ready        ) ,
  .io_Score_RScore_valid   (Score_RScore_valid   ) ,
  .io_Score_RScore_wen     (Score_RScore_wen     ) ,
  .io_Score_RScore_waddr   (Score_RScore_waddr   ) ,
  .io_Score_RScore_rdaddr1 (Score_RScore_rdaddr1 ) ,
  .io_Score_RScore_rdaddr2 (Score_RScore_rdaddr2 ) ,
  .io_Pass_rs1             (Pass_rs1   ) ,     
  .io_Pass_rs2             (Pass_rs2   ) ,
  .io_Pass_valid           (Pass_valid ) ,
  .io_if_flush			   (Rif_id_flush) ,
  .io_id_flush			   (idex_flush  ),
  .io_fence				   (fence	   ) 
  //.printflag                (printflag)
);
//wire printflag;
//ID_EX
reg [63:0] Ridex_pc          ;
reg [31:0] Ridex_npc		 ;
reg [31:0] Ridex_inst        ;
reg [ 0:0] Ridex_valid       ;
//reg [ 4:0] Ridex_rs1addr     ;
//reg [ 0:0] Ridex_abort       ;
reg [63:0] Ridex_rs2         ;
//reg [63:0] Ridex_imm         ;
reg [63:0] Ridex_AluOp_rd1   ;
reg [63:0] Ridex_AluOp_rd2   ;
reg [ 4:0] Ridex_AluOp_op    ;
reg [ 4:0] Ridex_waddr       ;
reg [ 0:0] Ridex_wen         ;
reg [ 0:0] Ridex_wflag       ;
reg [ 0:0] Ridex_rflag       ;
reg [ 0:0] Ridex_csrflag     ;
//reg [ 0:0] Ridex_jalrflag    ;
reg [ 0:0] Ridex_ecallflag   ;
reg [ 0:0] Ridex_mretflag    ;
//reg [ 0:0] Ridex_breakflag   ;
reg [ 7:0] Ridex_wmask       ;
//reg [ 1:0] Ridex_choose      ;
reg [ 0:0] Ridex_alumask     ;
reg [ 2:0] Ridex_func3       ;
//reg [ 6:0] Ridex_func7       ;
//reg [63:0] Ridex_NextPc      ;
reg		   Ridex_flush		;
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_pc       (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_pc        ),.dout(Ridex_pc       ));
ysyx_22050550_Reg # (32,32'd0)Regidex_npc       (.clock(clock),.reset(reset),.wen(EX_ID_ready&&idex_valid),.din(if_npc        ),.dout(Ridex_npc       ));
ysyx_22050550_Reg # (`ysyx_22050550_INSTWIDTH,32'd0)Regidex_inst    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_inst      ),.dout(Ridex_inst     ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_valid    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_valid     ),.dout(Ridex_valid    ));

//ysyx_22050550_Reg # (5,5'd0)                       Regidex_rs1addr  (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_rs1addr   ),.dout(Ridex_rs1addr  ));
//ysyx_22050550_Reg # (1,1'd0)                       Regidex_abort    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_abort     ),.dout(Ridex_abort    ));
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_rs2      (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_rs2       ),.dout(Ridex_rs2      ));

//ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_imm      (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_imm       ),.dout(Ridex_imm      ));
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_AluOp_rd1(.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_AluOp_rd1 ),.dout(Ridex_AluOp_rd1));
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_AluOp_rd2(.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_AluOp_rd2 ),.dout(Ridex_AluOp_rd2));
ysyx_22050550_Reg # (5,5'd0)                       Regidex_AluOp_op (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_AluOp_op  ),.dout(Ridex_AluOp_op ));
ysyx_22050550_Reg # (5,5'd0)                       Regidex_waddr    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_waddr     ),.dout(Ridex_waddr    ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_wen      (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_wen       ),.dout(Ridex_wen      ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_wflag    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_wflag     ),.dout(Ridex_wflag    ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_rflag    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_rflag     ),.dout(Ridex_rflag    ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_csrflag  (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_csrflag   ),.dout(Ridex_csrflag  ));
//ysyx_22050550_Reg # (1,1'd0)                       Regidex_jalrflag (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_jalrflag  ),.dout(Ridex_jalrflag ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_ecallflag(.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_ecallflag ),.dout(Ridex_ecallflag));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_mretflag (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_mretflag  ),.dout(Ridex_mretflag ));
//ysyx_22050550_Reg # (1,1'd0)                       Regidex_breakflag(.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_breakflag ),.dout(Ridex_breakflag));
ysyx_22050550_Reg # (8,8'd0)                       Regidex_wmask    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_wmask     ),.dout(Ridex_wmask    ));
//ysyx_22050550_Reg # (2,2'd0)                       Regidex_choose   (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_choose    ),.dout(Ridex_choose   ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_alumask  (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_alumask   ),.dout(Ridex_alumask  ));
ysyx_22050550_Reg # (3,3'd0)                       Regidex_func3    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_func3     ),.dout(Ridex_func3    ));

//ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_NextPc   (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_NextPc    ),.dout(Ridex_NextPc   ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_flush    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_flush     ),.dout(Ridex_flush    ));
//EXU TO LsU
wire [ 0:0] LS_ready       ; 
wire [63:0] EXLS_pc        ;
wire [63:0] EXLS_rs2       ;
wire [31:0] EXLS_inst      ;
wire [ 0:0] EXLS_valid     ;
//wire [ 4:0] EXLS_rs1       ;
//wire [63:0] EXLS_imm       ;
wire [ 4:0] EXLS_wdaddr    ;
wire [ 0:0] EXLS_wen       ;
wire [ 0:0] EXLS_csrflag   ;
//wire [ 0:0] EXLS_jalrflag  ;
wire [ 0:0] EXLS_ecallflag ;
wire [ 0:0] EXLS_mretflag  ;
//wire [ 0:0] EXLS_ebreak    ;
//wire [ 0:0] EXLS_abort     ;
wire [63:0] EXLS_alures    ;
wire [ 0:0] EXLS_wflag     ;
wire [ 0:0] EXLS_rflag     ;
wire [63:0] EXLS_writedata ;
wire [ 7:0] EXLS_wmask     ;
wire [ 2:0] EXLS_func3     ;
//wire [63:0] EXLS_NextPc    ;
wire		EXLS_flush	   ;

ysyx_22050550_EXU EXU(
    .clock            (clock)         ,
    .reset            (reset)         ,
    .io_id_pc         (            Ridex_pc           )         ,
    .io_id_inst       (            Ridex_inst         )         , 
    .io_id_valid      (            Ridex_valid        )         ,
    //.io_id_rs1addr    (            Ridex_rs1addr      )         , 
   // .io_id_abort      (Ridex_valid?Ridex_abort    :0  )         ,
   // .io_id_jalrflag   (Ridex_valid?Ridex_jalrflag :0  )         ,
    .io_id_csrflag    (Ridex_valid?Ridex_csrflag  :0  )         ,
    .io_id_ecallflag  (Ridex_valid?Ridex_ecallflag:0  )         ,
    .io_id_mretflag   (Ridex_valid?Ridex_mretflag :0  )         ,
   // .io_id_ebreak     (Ridex_valid?Ridex_breakflag:0  )         ,
    .io_id_rs2        (            Ridex_rs2          )         ,
    //.io_id_imm        (            Ridex_imm          )         ,
    .io_id_AluOp_rd1  (            Ridex_AluOp_rd1    )         ,       
    .io_id_AluOp_rd2  (            Ridex_AluOp_rd2    )         ,       
    .io_id_AluOp_op   (            Ridex_AluOp_op     )         ,      
    .io_id_waddr      (            Ridex_waddr        )         ,    
    .io_id_wen        (            Ridex_wen          )         ,  
    .io_id_wflag      (            Ridex_wflag        )         ,   
    .io_id_rflag      (            Ridex_rflag        )         ,   
    .io_id_wmask      (            Ridex_wmask        )         ,      
    .io_id_alumask    (            Ridex_alumask      )         ,     
    .io_id_func3      (            Ridex_func3        )         ,     
   // .io_id_NextPc     (            Ridex_NextPc       )         ,
    .io_ReadyLS_ready (LS_ready)                , 
    .io_EXLS_pc       (EXLS_pc        )         ,
    .io_EXLS_rs2      (EXLS_rs2       )         ,
    .io_EXLS_inst     (EXLS_inst      )         ,
    .io_EXLS_valid    (EXLS_valid     )         ,
   // .io_EXLS_rs1      (EXLS_rs1       )         ,
    //.io_EXLS_imm      (EXLS_imm       )         ,
    .io_EXLS_wdaddr   (EXLS_wdaddr    )         ,
    .io_EXLS_wen      (EXLS_wen       )         ,
    .io_EXLS_csrflag  (EXLS_csrflag   )         ,        
   // .io_EXLS_jalrflag (EXLS_jalrflag  )         ,        
    .io_EXLS_ecallflag(EXLS_ecallflag )         ,        
    .io_EXLS_mretflag (EXLS_mretflag  )         ,        
   // .io_EXLS_ebreak   (EXLS_ebreak    )         ,   
   // .io_EXLS_abort    (EXLS_abort     )         ,     
    .io_EXLS_alures   (EXLS_alures    )         ,    
    .io_EXLS_wflag    (EXLS_wflag     )         ,
    .io_EXLS_rflag    (EXLS_rflag     )         ,
    .io_EXLS_writedata(EXLS_writedata )         ,
    .io_EXLS_wmask    (EXLS_wmask     )         ,
    .io_EXLS_func3    (EXLS_func3     )         ,
    //.io_EXLS_NextPc   (EXLS_NextPc    )         ,  
	.io_id_flush	  (Ridex_flush    )			,
	.io_EXLS_flush    (EXLS_flush	  )			,
    .io_ReadyID_ready (EX_ID_ready    )         
);
//EX_LS
reg [63:0] REXLS_pc        ;
reg [31:0] REXLS_npc		;
reg [63:0] REXLS_rs2       ;
reg [31:0] REXLS_inst      ;
reg [ 0:0] REXLS_valid     ;
//reg [ 4:0] REXLS_rs1       ;
//reg [63:0] REXLS_imm       ;
reg [ 4:0] REXLS_wdaddr    ;
reg [ 0:0] REXLS_wen       ;
reg [ 0:0] REXLS_csrflag   ;
//reg [ 0:0] REXLS_jalrflag  ;
reg [ 0:0] REXLS_ecallflag ;
reg [ 0:0] REXLS_mretflag  ;
//reg [ 0:0] REXLS_ebreak    ;
//reg [ 0:0] REXLS_abort     ;
reg [63:0] REXLS_alures    ;
reg [ 0:0] REXLS_wflag     ;
reg [ 0:0] REXLS_rflag     ;
reg [63:0] REXLS_writedata ;
reg [ 7:0] REXLS_wmask     ;
reg [ 2:0] REXLS_func3     ;
//reg [63:0] REXLS_NextPc    ;
reg		   REXLS_flush	   ;
ysyx_22050550_Reg # (64,64'd0)RegEXLS_pc        (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_pc        ),.dout(REXLS_pc        ));
ysyx_22050550_Reg # (32,32'd0)RegEXLS_npc        (.clock(clock),.reset(reset),.wen(LS_ready&&EXLS_valid),.din(Ridex_npc        ),.dout(REXLS_npc        ));
ysyx_22050550_Reg # (64,64'd0)RegEXLS_rs2       (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_rs2       ),.dout(REXLS_rs2       ));
ysyx_22050550_Reg # (32,32'd0)RegEXLS_inst      (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_inst      ),.dout(REXLS_inst      ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_valid     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_valid     ),.dout(REXLS_valid     ));

//ysyx_22050550_Reg # ( 5, 5'd0)RegEXLS_rs1       (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_rs1       ),.dout(REXLS_rs1       ));
//ysyx_22050550_Reg # (64,64'd0)RegEXLS_imm       (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_imm       ),.dout(REXLS_imm       ));
ysyx_22050550_Reg # ( 5, 5'd0)RegEXLS_wdaddr    (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_wdaddr    ),.dout(REXLS_wdaddr    ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_wen       (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_wen       ),.dout(REXLS_wen       ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_csrflag   (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_csrflag   ),.dout(REXLS_csrflag   ));
//ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_jalrflag  (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_jalrflag  ),.dout(REXLS_jalrflag  ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_ecallflag (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_ecallflag ),.dout(REXLS_ecallflag ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_mretflag  (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_mretflag  ),.dout(REXLS_mretflag  ));
//ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_ebreak    (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_ebreak    ),.dout(REXLS_ebreak    ));
//ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_abort     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_abort     ),.dout(REXLS_abort     ));
ysyx_22050550_Reg # (64,64'd0)RegEXLS_alures    (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_alures    ),.dout(REXLS_alures    ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_wflag     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_wflag     ),.dout(REXLS_wflag     ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_rflag     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_rflag     ),.dout(REXLS_rflag     ));
ysyx_22050550_Reg # (64,64'd0)RegEXLS_writedata (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_writedata ),.dout(REXLS_writedata ));
ysyx_22050550_Reg # ( 8, 8'd0)RegEXLS_wmask     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_wmask     ),.dout(REXLS_wmask     ));
ysyx_22050550_Reg # ( 3, 3'd0)RegEXLS_func3     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_func3     ),.dout(REXLS_func3     ));
//ysyx_22050550_Reg # (64,64'd0)RegEXLS_NextPc    (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_NextPc    ),.dout(REXLS_NextPc    ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_flush     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_flush     ),.dout(REXLS_flush     ));
//LS TO WB
wire [ 0:0] WB_ready  ;
wire [63:0] LSWB_pc        ;
//wire [63:0] LSWB_rs2       ;
wire [31:0] LSWB_inst      ;
wire [ 0:0] LSWB_valid     ;
//wire [ 4:0] LSWB_rs1       ;
//wire [63:0] LSWB_imm       ;
wire [ 4:0] LSWB_wdaddr    ;
wire [ 0:0] LSWB_wen       ;
wire [ 0:0] LSWB_csrflag   ;
wire [ 0:0] LSWB_readflag  ;
//wire [ 0:0] LSWB_jalrflag  ;
wire [ 0:0] LSWB_ecallflag ;
wire [ 0:0] LSWB_mretflag  ;
//wire [ 0:0] LSWB_ebreak    ;
//wire [ 0:0] LSWB_abort     ;
//wire [ 0:0] LSWB_SkipRef   ;
wire [63:0] LSWB_alures    ;
wire [63:0] LSWB_lsures    ;
wire [ 2:0] LSWB_func3     ;
//wire [63:0] LSWB_NextPc    ;
wire        LSWB_flush     ;
`ifdef  ysyx_22050550_DEVICEUSEAXI
wire [ 0:0] DevSram_ar_ready   ; 
wire [ 0:0] DevSram_ar_valid   ; 
wire [63:0] DevSram_ar_addr    ; 
wire [ 7:0] DevSram_ar_len     ; 
wire [ 2:0] DevSram_ar_size    ; 
wire [ 1:0] DevSram_ar_burst   ; 
wire [ 0:0] DevSram_r_valid    ; 
wire [63:0] DevSram_r_rdata    ; 
wire [ 1:0] DevSram_r_rresp    ;
wire [ 0:0] DevSram_r_ready    ; 
wire [ 0:0] DevSram_aw_ready   ; 
wire [ 0:0] DevSram_aw_valid   ; 
wire [63:0] DevSram_aw_addr    ; 
wire [ 7:0] DevSram_aw_len     ; 
wire [ 2:0] DevSram_aw_size    ; 
wire [ 1:0] DevSram_aw_burst   ; 
wire [ 0:0] DevSram_w_ready    ; 
wire [ 0:0] DevSram_w_valid    ; 
wire [63:0] DevSram_w_data     ; 
wire [ 7:0] DevSram_w_strb     ; 
wire [ 0:0] DevSram_w_last     ; 
wire [ 0:0] DevSram_b_ready    ; 
wire [ 0:0] DevSram_b_valid    ; 
wire [ 1:0] DevSram_b_bresp	   ;   
`endif 
//LS TO Abiter
wire [ 0:0] Lsu_Cache_valid    ;  
wire [ 0:0] Lsu_Cache_op       ;  
wire [63:0] Lsu_Cache_addr     ;  
wire [63:0] Lsu_Cache_wdata    ;  
wire [ 7:0] Lsu_Cache_wmask    ;  
wire [63:0] Lsu_Cache_data     ;  
wire [ 0:0] Lsu_Cache_dataok   ;  
//
//wire timervalid ;

ysyx_22050550_LSU LSU(
    .clock            (clock)             ,
    .reset            (reset)             ,
    .io_EXLS_pc       (            REXLS_pc          ) ,
    .io_EXLS_inst     (            REXLS_inst        ) , 
    .io_EXLS_valid    (            REXLS_valid       ) ,
    //.io_EXLS_rs1addr  (            REXLS_rs1         ) , 
    //.io_EXLS_abort    (REXLS_valid?REXLS_abort    :0 ) ,
   // .io_EXLS_jalrflag (REXLS_valid?REXLS_jalrflag :0 ) ,
    .io_EXLS_csrflag  (REXLS_valid?REXLS_csrflag  :0 ) ,
    .io_EXLS_ecallflag(REXLS_valid?REXLS_ecallflag:0 ) ,
    .io_EXLS_mretflag (REXLS_valid?REXLS_mretflag :0 ) ,
   // .io_EXLS_ebreak   (REXLS_valid?REXLS_ebreak   :0 ) ,
    .io_EXLS_rs2      (            REXLS_rs2         ) ,
    //.io_EXLS_imm      (            REXLS_imm         ) ,  
    .io_EXLS_alures   (            REXLS_alures      ) ,
    .io_EXLS_writedata(            REXLS_writedata   ) ,
    .io_EXLS_waddr    (            REXLS_wdaddr      ) ,    
    .io_EXLS_wen      (REXLS_valid?REXLS_wen      :0 ) ,  
    .io_EXLS_wflag    (REXLS_valid?REXLS_wflag    :0 ) ,   
    .io_EXLS_rflag    (REXLS_valid?REXLS_rflag    :0 ) ,   
    .io_EXLS_wmask    (            REXLS_wmask       ) ,          
    .io_EXLS_func3    (            REXLS_func3       ) , 
   // .io_EXLS_NextPc   (REXLS_valid?REXLS_NextPc   :0 ) ,
    .io_ReadyWB_ready (WB_ready)             , 
    .io_LSWB_pc       (LSWB_pc        )      ,
    //.io_LSWB_rs2      (LSWB_rs2       )      ,
    .io_LSWB_inst     (LSWB_inst      )      ,
    .io_LSWB_valid    (LSWB_valid     )      ,
   // .io_LSWB_rs1      (LSWB_rs1       )      ,
    //.io_LSWB_imm      (LSWB_imm       )      ,
    .io_LSWB_wdaddr   (LSWB_wdaddr    )      ,
    .io_LSWB_wen      (LSWB_wen       )      ,
    .io_LSWB_csrflag  (LSWB_csrflag   )      , 
    .io_LSWB_readflag (LSWB_readflag  )      , 
   // .io_LSWB_jalrflag (LSWB_jalrflag  )      ,        
    .io_LSWB_ecallflag(LSWB_ecallflag )      ,        
    .io_LSWB_mretflag (LSWB_mretflag  )      ,        
    //.io_LSWB_ebreak   (LSWB_ebreak    )      ,   
   // .io_LSWB_abort    (LSWB_abort     )      , 
   // .io_LSWB_SkipRef  (LSWB_SkipRef   )      ,    
    .io_LSWB_alures   (LSWB_alures    )      ,  
    .io_LSWB_lsures   (LSWB_lsures    )      ,
	.io_LSWB_func3    (LSWB_func3     )      ,
    //.io_LSWB_NextPc   (LSWB_NextPc    )      ,  
    .io_ReadyEX_ready (LS_ready)             ,
	.io_EXLS_flush    (REXLS_flush    )		 ,
	.io_LSWB_flush	  (LSWB_flush     )		 ,
`ifdef ysyx_22050550_DEVICEUSEAXI
    .io_ar_ready      (DevSram_ar_ready )         ,
    .io_ar_valid      (DevSram_ar_valid )         ,    
    .io_ar_addr       (DevSram_ar_addr  )         ,
    .io_ar_len        (DevSram_ar_len   )         ,
    .io_ar_size       (DevSram_ar_size  )         ,    
    .io_ar_burst      (DevSram_ar_burst )         , 
    .io_r_valid       (DevSram_r_valid  )         ,
    .io_r_rdata       (DevSram_r_rdata  )         ,
	.io_r_rresp		  (DevSram_r_rresp  )		  ,
    .io_r_ready       (DevSram_r_ready  )         ,
    .io_aw_ready      (DevSram_aw_ready )         ,
    .io_aw_valid      (DevSram_aw_valid )         , 
    .io_aw_addr       (DevSram_aw_addr  )         ,
    .io_aw_len        (DevSram_aw_len   )         ,
    .io_aw_size       (DevSram_aw_size  )         , 
    .io_aw_burst      (DevSram_aw_burst )         ,
    .io_w_ready       (DevSram_w_ready  )         , 
    .io_w_valid       (DevSram_w_valid  )         ,
    .io_w_data        (DevSram_w_data   )         ,
    .io_w_strb        (DevSram_w_strb   )         ,
    .io_w_last        (DevSram_w_last   )         ,
    .io_b_ready       (DevSram_b_ready  )         ,
    .io_b_valid       (DevSram_b_valid  )         ,
	.io_b_bresp       (DevSram_b_bresp  )	      ,
`endif
    .io_Cache_valid   (Lsu_Cache_valid    )         ,
    .io_Cache_op      (Lsu_Cache_op       )         ,
    .io_Cache_addr    (Lsu_Cache_addr     )         ,
    .io_Cache_wdata   (Lsu_Cache_wdata    )         ,
    .io_Cache_wmask   (Lsu_Cache_wmask    )         ,
    .io_Cache_data    (Lsu_Cache_data     )         ,
    .io_Cache_dataok  (Lsu_Cache_dataok   )			,        
	.io_Cache_busy	 (Dcache_busy )					,
	.ren				(ClintRen			)		,
	.wen				(ClintWen			)		,
	.raddr				(ClintRaddr			)		,
	.waddr				(ClintWaddr			)		,
	.wdata				(ClintWdata			)		,
	.rdata				(ClintRdata			)		
);
//LS_WB
reg [63:0] RLSWB_pc        ;
reg [31:0] RLSWB_npc		;
//reg [63:0] RLSWB_rs2       ;
reg [31:0] RLSWB_inst      ;
reg [ 0:0] RLSWB_valid     ;
//reg [ 4:0] RLSWB_rs1       ;
//reg [63:0] RLSWB_imm       ;
reg [ 4:0] RLSWB_wdaddr    ;
reg [ 0:0] RLSWB_wen       ;
reg [ 0:0] RLSWB_csrflag   ;
reg [ 0:0] RLSWB_readflag  ;
//reg [ 0:0] RLSWB_writeflag ;
//reg [ 0:0] RLSWB_jalrflag  ;
reg [ 0:0] RLSWB_ecallflag ;
reg [ 0:0] RLSWB_mretflag  ;
//reg [ 0:0] RLSWB_ebreak    ;
//reg [ 0:0] RLSWB_abort     ;
//reg [ 0:0] RLSWB_SkipRef   ;
reg [63:0] RLSWB_alures    ;
reg [63:0] RLSWB_lsures    ;
reg [ 2:0] RLSWB_func3     ;
//reg [63:0] RLSWB_NextPc    ;
reg		   RLSWB_flush	   ;
ysyx_22050550_Reg # (64,64'd0)RegLSWB_pc               (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_pc        ),.dout(RLSWB_pc         ));

ysyx_22050550_Reg # (32,32'd0)RegLSWB_npc               (.clock(clock),.reset(reset),.wen(WB_ready&&LSWB_valid ),.din(REXLS_npc        ),.dout(RLSWB_npc         ));
//ysyx_22050550_Reg # (64,64'd0)RegLSWB_rs2              (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_rs2       ),.dout(RLSWB_rs2        ));
ysyx_22050550_Reg # (32,32'd0)RegLSWB_inst             (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_inst      ),.dout(RLSWB_inst       ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_valid            (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_valid     ),.dout(RLSWB_valid      ));
//ysyx_22050550_Reg # ( 5, 5'd0)RegLSWB_rs1              (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_rs1       ),.dout(RLSWB_rs1        ));
//ysyx_22050550_Reg # (64,64'd0)RegLSWB_imm              (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_imm       ),.dout(RLSWB_imm        ));
ysyx_22050550_Reg # ( 5, 5'd0)RegLSWB_wdaddr           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_wdaddr    ),.dout(RLSWB_wdaddr     ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_wen              (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_wen       ),.dout(RLSWB_wen        ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_csrflag          (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_csrflag   ),.dout(RLSWB_csrflag    ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_readflag         (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_readflag  ),.dout(RLSWB_readflag   ));
//ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_jalrflag         (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_jalrflag  ),.dout(RLSWB_jalrflag   ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_ecallflag        (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_ecallflag ),.dout(RLSWB_ecallflag  ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_mretflag         (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_mretflag  ),.dout(RLSWB_mretflag   ));
//ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_ebreak           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_ebreak    ),.dout(RLSWB_ebreak     ));
//ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_abort            (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_abort     ),.dout(RLSWB_abort      ));
//ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_SkipRef          (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_SkipRef   ),.dout(RLSWB_SkipRef    ));
ysyx_22050550_Reg # (64,64'd0)RegLSWB_alures           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_alures    ),.dout(RLSWB_alures     ));
ysyx_22050550_Reg # (64,64'd0)RegLSWB_lsures           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_lsures    ),.dout(RLSWB_lsures     ));
ysyx_22050550_Reg # ( 3, 3'd0)RegLSWB_func3            (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_func3     ),.dout(RLSWB_func3      ));
//ysyx_22050550_Reg # (64,64'd0)RegLSWB_NextPc           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_NextPc    ),.dout(RLSWB_NextPc     )); 
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_flush            (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_flush     ),.dout(RLSWB_flush      ));
 
//WBU REGFILE
//wire [63:0] WBU_mepc    ;
wire [63:0] WBU_mcause  ;
//wire [63:0] WBU_mtvec   ;
wire [63:0] WBU_mstatus ;
wire [63:0] WBU_mie     ;
//wire [63:0] WBU_mip     ;
wire [63:0] WBU_Reg17   ;        
wire [63:0] wbmepc      ;
wire [63:0] wbmcause    ;
wire [63:0] wbmtvec     ;
wire [63:0] wbmstatus   ;
wire [63:0] wbmie       ;
wire [63:0] wbmip       ;
wire [ 7:0] wbcsren     ;
wire [ 4:0] Wbu_waddr   ;
wire [63:0] Wbu_wdata   ;
wire [ 0:0] Wbu_wen     ;
wire [0:0] Score_WScore_wen    =  Wbu_wen   ;
wire [4:0] Score_WScore_waddr  =  Wbu_waddr ;
wire [63:0] regfilepc	; 
wire irujump			;
wire iruflush			;
wire Top_flush			;
wire timervalid			;			
ysyx_22050550_WBU WBU(
    .clock             (clock)            ,
    .reset             (reset)            ,
    .io_LSWB_pc        (             RLSWB_pc          )            ,
	//.io_LSWB_immnpc    (			)
	.io_LSWB_npc       (			RLSWB_npc	),
    .io_LSWB_inst      (             RLSWB_inst        )            , 
    .io_LSWB_valid     (             RLSWB_valid       )            ,
   // .io_LSWB_rs1addr   (             RLSWB_rs1         )            , 
    //.io_LSWB_abort     (RLSWB_valid? RLSWB_abort    :0 )            ,
    //.io_LSWB_jalrflag  (RLSWB_valid? RLSWB_jalrflag :0 )            ,
    .io_LSWB_readflag  (RLSWB_valid? RLSWB_readflag :0 )            ,
    .io_LSWB_csrflag   (RLSWB_valid? RLSWB_csrflag  :0 )            ,
    .io_LSWB_ecallflag (RLSWB_valid? RLSWB_ecallflag:0 )            ,
    .io_LSWB_mretflag  (RLSWB_valid? RLSWB_mretflag :0 )            ,
    //.io_LSWB_ebreak    (RLSWB_valid? RLSWB_ebreak   :0 )            ,
    //.io_LSWB_SkipRef   (RLSWB_valid? RLSWB_SkipRef  :0 )            ,
    //.io_LSWB_rs2       (             RLSWB_rs2         )            ,
    //.io_LSWB_imm       (             RLSWB_imm         )            ,  
    .io_LSWB_alures    (             RLSWB_alures      )            ,
    .io_LSWB_lsures    (             RLSWB_lsures      )            ,
    .io_LSWB_waddr     (             RLSWB_wdaddr      )            ,    
    .io_LSWB_wen       (RLSWB_valid? RLSWB_wen      :0 )            ,      
    .io_LSWB_func3     (             RLSWB_func3       )            , 
    //.io_LSWB_NextPc    (             RLSWB_NextPc      )            ,

    .mepc              (RegFileID_CSRs_mepc )             ,
    .mcause            (WBU_mcause          )             ,
    .mtvec             (RegFileID_CSRs_mtvec)             ,
    .mstatus           (WBU_mstatus         )             ,
    .mie               (WBU_mie             )             ,
    .mip               (RegFileID_CSRs_mip  )             ,
    .Reg17             (WBU_Reg17           )             ,
	.regfilepc		   (regfilepc			)			  ,
    .wbmepc            (wbmepc              )             ,
    .wbmcause          (wbmcause            )             ,
    .wbmtvec           (wbmtvec             )             ,
    .wbmstatus         (wbmstatus           )             ,
    .wbmie             (wbmie               )             ,
    .wbmip             (wbmip               )             ,
    .wbcsren           (wbcsren             )             ,  

	.io_WBTOP_pc       (DeBugpc       )             ,
    //.io_WBTOP_rs2      (DeBugrs2      )             ,
    //.io_WBTOP_inst     (DeBuginst     )             ,
    .io_WBTOP_valid    (DeBugvalid    )             ,
    //.io_WBTOP_rs1      (DeBugrs1      )             ,
    //.io_WBTOP_imm      (DeBugimm      )             ,
    .io_WBTOP_waddr    (Wbu_waddr   )             ,
    .io_WBTOP_wdata    (Wbu_wdata   )             ,
    .io_WBTOP_wen      (Wbu_wen     )             ,
   // .io_WBTOP_jalrflag (DeBugjalrflag )             ,               
   // .io_WBTOP_ebreak   (DeBugebreak   )             ,   
   // .io_WBTOP_abort    (DeBugabort    )             , 
   // .io_WBTOP_SkipRef  (DeBugSkipRef  )             ,
   // .io_WBTOP_NextPc   (DeBugNextPc   )             ,
    .io_ReadyWB_ready  (WB_ready	  )				,
	.interrupt         (io_interrupt  )				,
	.clintinterrupt    (clintinterrupt)				,
	.timervalid		   (timervalid	  )				,
	.io_wbu_flush	   (RLSWB_flush	  )				,
	.io_topflush	   (Top_flush	  )				,	
	.iruflush		   (iruflush	  )				,
	.irujump           (irujump		  )				
);
//Clint 
assign Flush = iruflush || fence || Icache_fence || Dcache_fence      ; 
wire clintinterrupt ;
wire ClintRen  ;
wire [63:0] ClintRaddr ;
wire ClintWen ;
wire [63:0] ClintWaddr ;
wire [63:0] ClintWdata  ;
wire [63:0] ClintRdata  ; 
ysyx_22050550_CLINT CLINT (
	.clock	(clock		)			, 
	.reset	(reset		)			,
	.ren	(ClintRen	)			,
	.raddr	(ClintRaddr	)			,
	.wen	(ClintWen	)			,
	.waddr	(ClintWaddr	)			,
	.wdata	(ClintWdata	)			,	
	.timervalid (timervalid)		,

	.rdata	(ClintRdata	)			,

	.clintmtip(clintinterrupt)		
	//.mtimereg (			)			,
	//.mtimecmpreg (				)	
);
wire [63:0] DeBugpc       ; 
//wire [63:0] DeBugrs2      ; 
//wire [31:0] DeBuginst     ; 
wire [ 0:0] DeBugvalid    ; 
//wire [ 4:0] DeBugrs1      ; 
//wire [63:0] DeBugimm      ;      
//wire [ 0:0] DeBugjalrflag ; 
//wire [ 0:0] DeBugebreak   ; 
//wire [ 0:0] DeBugabort    ; 
//wire [ 0:0] DeBugSkipRef  ; 
//wire [63:0] DeBugNextPc   ; 
//wire [63:0] Reg10         ;
//reg difftest;
//reg skipref ;
//
//ysyx_22050550_Reg # ( 1, 1'd0)Rskipref         
// (.clock(clock),.reset(reset),.wen(1'b1),.din(DeBugSkipRef),.dout(skipref));
//ysyx_22050550_Reg # ( 1, 1'd0)Rdifftest         
// (.clock(clock),.reset(reset),.wen(1'b1),.din(DeBugvalid),.dout(difftest));
////顶层信号在此定义
//assign io_halt            = DeBugebreak && Reg10 == 0;
//assign io_abort           = DeBugabort;
//assign io_jalr            = DeBugjalrflag;
//assign io_instvalid       = DeBugvalid;
//assign io_difftestvalid   = difftest ;
//assign io_SkipRef         = skipref ;
/*********** 部分DPI函数***********/
//export "DPI-C" function ebreakflag;
//
//function ebreakflag;
//   ebreakflag = DeBugebreak;
//endfunction
//
//export "DPI-C" function pc_fetch;
//export "DPI-C" function npc_fetch;
//function longint pc_fetch;
//   pc_fetch = DeBugpc;
//endfunction
//
//function longint npc_fetch;
//   npc_fetch = DeBugNextPc;
//endfunction
//
//export "DPI-C" function instr_fetch;
//
//function int instr_fetch;
//   instr_fetch = DeBuginst;
//endfunction
//
//export "DPI-C" function rs1_fetch;
//
//function int rs1_fetch;
//   rs1_fetch = {{27{1'b0}},DeBugrs1};
//endfunction
//
//export "DPI-C" function rd_fetch;
//
//function int rd_fetch;
//   rd_fetch = {{27{1'b0}},Wbu_waddr};
//endfunction
//
//export "DPI-C" function imm_fetch;
//
//function longint imm_fetch;
//   imm_fetch = DeBugimm;
//endfunction



ysyx_22050550_REGS REGS(
    .clock         (clock)                 ,
    .reset         (reset)                 ,
    .mepc          (RegFileID_CSRs_mepc     ),     
    .mcause        (WBU_mcause              ),
    .mtvec         (RegFileID_CSRs_mtvec    ),     
    .mstatus       (WBU_mstatus             ),
    .mie           (WBU_mie                 ),
    .mip           (RegFileID_CSRs_mip      ),     
    .Reg17         (WBU_Reg17               ),
    //.Reg10         (Reg10                   ),
	.regfilepc     (regfilepc				),
    .pc            (DeBugpc             )                  ,
    .wbmepc        (wbmepc              )                  ,
    .wbmcause      (wbmcause            )                  ,
    .wbmtvec       (wbmtvec             )                  ,
    .wbmstatus     (wbmstatus           )                  ,
    .wbmie         (wbmie               )                  ,
    .wbmip         (wbmip               )                  ,
    .wbcsren       (wbcsren             )                  ,
    .io_IDU_raddr1 (rsaddr1)           ,
    .io_IDU_raddr2 (rsaddr2)           ,
    .io_waddr      (Wbu_waddr       )                  ,
    .io_wdata      (Wbu_wdata       )                  ,
    .io_wen        (Wbu_wen         )                  ,
    .io_valid      (DeBugvalid      )                  ,
    .io_IDU_rdata1 (RegFileID_rdata1)                  ,
    .io_IDU_rdata2 (RegFileID_rdata2)                  
);
wire [ 0:0] Icache_ar_ready ; 
wire [ 0:0] Icache_ar_valid ; 
wire [63:0] Icache_ar_addr  ; 
wire [ 7:0] Icache_ar_len   ; 
wire [ 2:0] Icache_ar_size  ; 
wire [ 1:0] Icache_ar_burst ; 
wire [ 0:0] Icache_r_valid  ; 
wire [ 0:0] Icache_r_last   ; 
wire [63:0] Icache_r_rdata  ; 
wire [ 1:0] Icache_r_rresp  ;
wire [ 0:0] Icache_r_ready  ; 
wire		Icache_fence    ;
wire [ 5:0] Icache_sram_addr ;
wire [ 0:0] Icache_sram_cen	 ; 
wire [ 0:0] Icache_sram_wen  ; 
wire [127:0]Icache_sram_wmask;
wire [127:0]Icache_sram_wdata;
wire [127:0]Icache_sram_rdata;
wire		Icache_aw_ready ;
wire		Icache_w_ready	;
wire		Icache_aw_valid ;
wire [63:0] Icache_aw_addr	;
wire [7:0]  Icache_aw_len	;
wire [2:0]  Icache_aw_size	;
wire [1:0]	Icache_aw_burst ; 
wire		Icache_w_valid  ; 
wire [63:0]	Icache_w_data	;
wire [ 7:0] Icache_w_strb	;
wire		Icache_w_last	;
wire		Icache_b_ready	;
wire		Icache_busy		; 
ysyx_22050550_CACHE ICache(
    .clock        (clock)             ,
    .reset        (reset)             ,
    .io_ar_ready  (Icache_ar_ready )  ,
    .io_ar_valid  (Icache_ar_valid )  ,    
    .io_ar_addr   (Icache_ar_addr  )  ,
    .io_ar_len    (Icache_ar_len   )  ,
    .io_ar_size   (Icache_ar_size  )  ,    
    .io_ar_burst  (Icache_ar_burst )  , 
    .io_r_valid   (Icache_r_valid  )  ,
    .io_r_last    (Icache_r_last   )  ,
    .io_r_rdata   (Icache_r_rdata  )  ,
	.io_r_rresp   (Icache_r_rresp  )  ,
    .io_r_ready   (Icache_r_ready  )  ,
	.io_aw_ready  (Icache_aw_ready)             ,
    .io_aw_valid  (Icache_aw_valid)             , 
    .io_aw_addr   (Icache_aw_addr )             ,
    .io_aw_len    (Icache_aw_len  )             ,
    .io_aw_size   (Icache_aw_size )             , 
    .io_aw_burst  (Icache_aw_burst )             ,
    .io_w_ready   (Icache_w_ready)             , 
    .io_w_valid   (Icache_w_valid )             ,
    .io_w_data    (Icache_w_data )             ,
    .io_w_strb    (Icache_w_strb )             ,
    .io_w_last    (Icache_w_last )             ,
    .io_b_ready   (Icache_b_ready)             ,
    .io_b_valid   (0)             ,
	.io_b_bresp   (0)             ,

    //.pc              (if_id_pc)             ,
    .io_Cache_valid  (ICache_valid  )          ,
    .io_Cache_op     (0             )          ,
    .io_Cache_addr   (ICache_addr)          ,
    .io_Cache_wdata  (0)          ,
    .io_Cache_wmask  (0)          ,
    .io_Cache_data   (ICache_Data   )          ,
    .io_Cache_dataok (ICache_dataok )			,         
	.io_Cache_busy	(Icache_busy	)			,
	.io_sram_addr	(Icache_sram_addr), 
    .io_sram_cen	(Icache_sram_cen), 
    .io_sram_wen	(Icache_sram_wen), 
    .io_sram_wmask	(Icache_sram_wmask),
    .io_sram_wdata	(Icache_sram_wdata),
    .io_sram_rdata	(Icache_sram_rdata),
	//.CacheFlush      (Flush			)			,
	.io_fence		 (	fence			)			,
	.io_wbu_flush	 (	Top_flush		)			,
	.io_fencei		 (	Icache_fence	)			
	//.ls_interrupt    (				)			

);
wire [ 0:0] Lsu_ar_ready ; 
wire [ 0:0] Lsu_ar_valid ; 
wire [63:0] Lsu_ar_addr  ; 
wire [ 7:0] Lsu_ar_len   ; 
wire [ 2:0] Lsu_ar_size  ; 
wire [ 1:0] Lsu_ar_burst ; 
wire [ 0:0] Lsu_r_valid  ; 
wire [ 0:0] Lsu_r_last   ; 
wire [63:0] Lsu_r_rdata  ;
wire [ 1:0] Lsu_r_rresp  ; 
wire [ 0:0] Lsu_r_ready  ; 
wire [ 0:0] Lsu_aw_ready ; 
wire [ 0:0] Lsu_aw_valid ; 
wire [63:0] Lsu_aw_addr  ; 
wire [ 7:0] Lsu_aw_len   ; 
wire [ 2:0] Lsu_aw_size  ; 
wire [ 1:0] Lsu_aw_burst ; 
wire [ 0:0] Lsu_w_ready  ; 
wire [ 0:0] Lsu_w_valid  ; 
wire [63:0] Lsu_w_data   ; 
wire [ 7:0] Lsu_w_strb   ; 
wire [ 0:0] Lsu_w_last   ; 
wire [ 0:0] Lsu_b_ready  ; 
wire [ 0:0] Lsu_b_valid  ; 
wire [ 1:0] Lsu_b_bresp  ; 
wire		Dcache_fence ; 
wire [ 5:0] Dcache_sram_addr ;
wire [ 0:0] Dcache_sram_cen	 ;
wire [ 0:0] Dcache_sram_wen  ;
wire [127:0]Dcache_sram_wmask;
wire [127:0]Dcache_sram_wdata;
wire [127:0]Dcache_sram_rdata;
wire		Dcache_busy		;
ysyx_22050550_CACHE DCache(
    .clock        (clock)             ,
    .reset        (reset)             ,
    .io_ar_ready  (Lsu_ar_ready )             ,
    .io_ar_valid  (Lsu_ar_valid )             ,    
    .io_ar_addr   (Lsu_ar_addr  )             ,
    .io_ar_len    (Lsu_ar_len   )             ,
    .io_ar_size   (Lsu_ar_size  )             ,    
    .io_ar_burst  (Lsu_ar_burst )             , 
    .io_r_valid   (Lsu_r_valid  )             ,
    .io_r_last    (Lsu_r_last   )             ,
    .io_r_rdata   (Lsu_r_rdata  )             ,
	.io_r_rresp   (Lsu_r_rresp  )			  ,
    .io_r_ready   (Lsu_r_ready  )             ,
    .io_aw_ready  (Lsu_aw_ready )             ,
    .io_aw_valid  (Lsu_aw_valid )             , 
    .io_aw_addr   (Lsu_aw_addr  )             ,
    .io_aw_len    (Lsu_aw_len   )             ,
    .io_aw_size   (Lsu_aw_size  )             , 
    .io_aw_burst  (Lsu_aw_burst )             ,
    .io_w_ready   (Lsu_w_ready  )             , 
    .io_w_valid   (Lsu_w_valid  )             ,
    .io_w_data    (Lsu_w_data   )             ,
    .io_w_strb    (Lsu_w_strb   )             ,
    .io_w_last    (Lsu_w_last   )             ,
    .io_b_ready   (Lsu_b_ready  )             ,
    .io_b_valid   (Lsu_b_valid  )             ,
	.io_b_bresp   (Lsu_b_bresp  )			  ,

    //.pc              (REXLS_valid?REXLS_pc       :0),
    .io_Cache_valid  (Lsu_Cache_valid    )          ,
    .io_Cache_op     (Lsu_Cache_op       )          ,
    .io_Cache_addr   (Lsu_Cache_addr     )          ,
    .io_Cache_wdata  (Lsu_Cache_wdata    )          ,
    .io_Cache_wmask  (Lsu_Cache_wmask    )          ,
    .io_Cache_data   (Lsu_Cache_data     )          ,
    .io_Cache_dataok (Lsu_Cache_dataok   )          ,
	.io_Cache_busy	(Dcache_busy		)			,		
	.io_sram_addr	(Dcache_sram_addr), 
    .io_sram_cen	(Dcache_sram_cen), 
    .io_sram_wen	(Dcache_sram_wen), 
    .io_sram_wmask	(Dcache_sram_wmask),
    .io_sram_wdata	(Dcache_sram_wdata),
    .io_sram_rdata	(Dcache_sram_rdata),

	//	.CacheFlush      (Flush			)			,
	.io_fence		 (	fence			)			,
	.io_wbu_flush	 (	Top_flush		)			,
	.io_fencei		 (	Dcache_fence	)			
	//.ls_interrupt    (				)			

);

ysyx_22050550_RamArbiter RamArbiter(	
  .io_ifu_Axi_ar_valid     (Icache_ar_valid )        ,
  .io_ifu_Axi_ar_bits_addr (Icache_ar_addr  )        ,
  .io_ifu_Axi_r_ready      (Icache_r_ready  )        ,
  .io_ifu_Axi_aw_valid     (Icache_aw_valid)        ,
  .io_ifu_Axi_aw_bits_addr (Icache_aw_addr)        ,
  .io_ifu_Axi_w_valid      (Icache_w_valid)        ,
  .io_ifu_Axi_w_bits_data  (Icache_w_data)        ,
  .io_ifu_Axi_w_bits_strb  (Icache_w_strb)        ,
  .io_lsu_Axi_ar_valid     (Lsu_ar_valid )        ,
  .io_lsu_Axi_ar_bits_addr (Lsu_ar_addr  )        ,
  .io_lsu_Axi_r_ready      (Lsu_r_ready  )        , 
  .io_lsu_Axi_aw_valid     (Lsu_aw_valid )        ,
  .io_lsu_Axi_aw_bits_addr (Lsu_aw_addr  )        ,
  .io_lsu_Axi_w_valid      (Lsu_w_valid  )        ,
  .io_lsu_Axi_w_bits_data  (Lsu_w_data   )        ,
  .io_lsu_Axi_w_bits_strb  (Lsu_w_strb   )        ,
  .io_sram_Axi_ar_ready    (Sram_ar_ready)        ,
  .io_sram_Axi_r_valid     (Sram_r_valid    )        ,
  .io_sram_Axi_r_bits_data (Sram_r_bits_data)        ,
  .io_sram_Axi_r_rresp     (Sram_r_rresp)		  ,
  .io_sram_Axi_r_bits_last (Sram_r_bits_last)        ,
  .io_sram_Axi_aw_ready    (Sram_aw_ready)        ,
  .io_sram_Axi_w_ready     (Sram_w_ready)        ,
  .io_ifu_Axi_ar_ready     ( Icache_ar_ready)        ,
  .io_ifu_Axi_r_valid      ( Icache_r_valid )        ,
  .io_ifu_Axi_r_bits_data  ( Icache_r_rdata )        ,
  .io_ifu_Axi_r_rresp	   ( Icache_r_rresp )		 ,
  .io_ifu_Axi_r_bits_last  ( Icache_r_last  )        ,
  .io_ifu_Axi_aw_ready     ( Icache_aw_ready)        ,
  .io_ifu_Axi_w_ready      ( Icache_w_ready)        ,
  .io_lsu_Axi_ar_ready     (Lsu_ar_ready    )        ,
  .io_lsu_Axi_r_valid      (Lsu_r_valid     )        ,
  .io_lsu_Axi_r_bits_data  (Lsu_r_rdata     )        ,
  .io_lsu_Axi_r_rresp	   (Lsu_r_rresp     )		 ,
  .io_lsu_Axi_r_bits_last  (Lsu_r_last      )        ,
  .io_lsu_Axi_aw_ready     (Lsu_aw_ready    )        ,
  .io_lsu_Axi_w_ready      (Lsu_w_ready     )        ,
  .io_sram_Axi_ar_valid    (Sram_ar_valid    )        ,
  .io_sram_Axi_ar_bits_addr(Sram_ar_bits_addr)        ,
  .io_sram_Axi_r_ready     (Sram_r_ready     )        ,    
  .io_sram_Axi_aw_valid    (Sram_aw_valid)        ,
  .io_sram_Axi_aw_bits_addr(Sram_aw_bits_addr)        ,
  .io_sram_Axi_w_valid     (Sram_w_valid)        ,
  .io_sram_Axi_w_bits_data (Sram_w_bits_data)        ,
  .io_sram_Axi_w_bits_strb (Sram_w_bits_strb)
);
wire [ 0:0] Sram_ar_valid     ;
wire [63:0] Sram_ar_bits_addr ;
wire [ 0:0] Sram_r_ready      ;
wire [ 7:0] Sram_ar_len      = Lsu_ar_valid ? Lsu_ar_len : Icache_ar_len			;
wire [ 2:0] Sram_ar_size     = Lsu_ar_valid ? Lsu_ar_size : Icache_ar_size         ;
wire [ 1:0] Sram_ar_burst    = Lsu_ar_valid ? Lsu_ar_burst : Icache_ar_burst   ;
wire [ 0:0] Sram_aw_valid     ;
wire [63:0] Sram_aw_bits_addr ;
wire [ 7:0] Sram_aw_len      = Lsu_aw_valid ? Lsu_aw_len : Icache_aw_len    ;
wire [ 2:0] Sram_aw_size     = Lsu_aw_valid ? Lsu_aw_size : Icache_aw_size        ;
wire [ 1:0] Sram_aw_burst    = Lsu_aw_valid ? Lsu_aw_burst : Icache_aw_burst   ;
wire [ 0:0] Sram_w_valid      ;
wire [63:0] Sram_w_bits_data  ;
wire [ 7:0] Sram_w_bits_strb  ;
wire [ 0:0] Sram_w_bits_last  =  Lsu_w_valid ? Lsu_w_last : Icache_w_last;
wire [ 0:0] Sram_ar_ready     ;
wire [ 0:0] Sram_r_valid      ;
wire [63:0] Sram_r_bits_data  ;
wire [ 1:0] Sram_r_rresp	  ;
wire [ 0:0] Sram_r_bits_last  ;
wire [ 0:0] Sram_aw_ready     ;
wire [ 0:0] Sram_w_ready      ;
wire [ 0:0] Sram_b_valid      ;
wire [ 0:0] Sram_b_ready      ;
wire [ 1:0] Sram_b_bresp      ;
assign Lsu_b_valid = Sram_b_valid ;  
assign Sram_b_ready = Lsu_b_ready || Icache_b_ready ;  
assign Lsu_b_bresp = Sram_b_bresp ; 
//修改成Device 和 内存的Sram 共用同一个SRAM   加一层arbiter
wire [ 0:0] TopSram_ar_valid     = DevSram_ar_valid || Sram_ar_valid ; 
wire [63:0] TopSram_ar_bits_addr = DevSram_ar_valid ? DevSram_ar_addr : Sram_ar_bits_addr;
wire [ 0:0] TopSram_r_ready      = DevSram_r_ready || Sram_r_ready  ;
//ready 信号应该不能与valid相关联
wire [ 7:0] TopSram_ar_len      = DevSram_ar_valid ? DevSram_ar_len : Sram_ar_len   ;
wire [ 1:0] TopSram_ar_burst     = DevSram_ar_valid ? DevSram_ar_burst :Sram_ar_burst  ;
wire [ 2:0] TopSram_ar_size     = DevSram_ar_valid ? DevSram_ar_size : Sram_ar_valid ? Sram_ar_size: 3'd0   ;
wire [ 0:0] TopSram_aw_valid     = DevSram_aw_valid || Sram_aw_valid  ;
wire [63:0] TopSram_aw_bits_addr = DevSram_aw_valid || DevSram_w_valid ||DevSram_b_ready ? DevSram_aw_addr : Sram_aw_bits_addr ;
wire [ 7:0] TopSram_aw_len      = DevSram_aw_valid || DevSram_w_valid ||DevSram_b_ready? DevSram_aw_len : Sram_aw_len    ;
wire [ 2:0] TopSram_aw_size     = DevSram_aw_valid || DevSram_w_valid ||DevSram_b_ready ? DevSram_aw_size :  Sram_aw_size    ;
wire [ 1:0] TopSram_aw_burst    =  DevSram_aw_valid || DevSram_w_valid ||DevSram_b_ready? DevSram_aw_burst : Sram_aw_burst;
wire [ 0:0] TopSram_w_valid     = DevSram_w_valid || Sram_w_valid  ;
wire [63:0] TopSram_w_bits_data =  DevSram_aw_valid || DevSram_w_valid ||DevSram_b_ready? DevSram_w_data :Sram_w_bits_data  ;
wire [ 7:0] TopSram_w_bits_strb = DevSram_aw_valid || DevSram_w_valid ||DevSram_b_ready ? DevSram_w_strb :Sram_w_bits_strb  ;
wire		TopSram_w_bits_last =DevSram_aw_valid || DevSram_w_valid ||DevSram_b_ready ? DevSram_w_last : Sram_w_bits_last	  ;
wire [ 0:0] TopSram_ar_ready     ;
//设备优先
//但是注意另一个已经进入状态机的时候，这个信号也不要发过去
assign DevSram_ar_ready = TopSram_ar_ready && !Sram_r_ready;    
assign Sram_ar_ready    = TopSram_ar_ready && !DevSram_ar_valid && !(DevSram_r_ready);
wire [ 0:0] TopSram_r_valid      ;
assign DevSram_r_valid = TopSram_r_valid ;
assign Sram_r_valid    = TopSram_r_valid ; 
wire [63:0] TopSram_r_bits_data   ;
assign DevSram_r_rdata = TopSram_r_bits_data ;
assign Sram_r_bits_data= TopSram_r_bits_data ;
wire [ 1:0] TopSram_r_rresp	    ;
assign DevSram_r_rresp = TopSram_r_rresp ; 
assign Sram_r_rresp    = TopSram_r_rresp ; 
wire [ 0:0] TopSram_r_bits_last  ;
assign Sram_r_bits_last  = TopSram_r_bits_last ; 
wire [ 0:0] TopSram_aw_ready     ;
assign DevSram_aw_ready = TopSram_aw_ready &&(!Sram_w_valid) && (!Sram_b_ready)  ; 
assign Sram_aw_ready    = TopSram_aw_ready && !DevSram_aw_valid&&(!DevSram_w_valid)&&(!DevSram_b_ready);
wire [ 0:0] TopSram_w_ready      ;
assign DevSram_w_ready  = TopSram_w_ready ; 
assign Sram_w_ready     = TopSram_w_ready && !DevSram_w_valid ; 
wire [ 0:0] TopSram_b_valid      ;
assign DevSram_b_valid = TopSram_b_valid ;
assign Sram_b_valid    = TopSram_b_valid ;
wire [ 0:0] TopSram_b_ready = DevSram_b_ready || Sram_b_ready     ;
wire [ 1:0] TopSram_b_bresp      ;
assign DevSram_b_bresp = TopSram_b_bresp ; 
assign Sram_b_bresp    = TopSram_b_bresp ;
//ysyx_22050550_SRAM SRAM(	
//  .clock                (clock)   ,
//  .reset                (reset)   ,
//  .io_Sram_ar_valid     (TopSram_ar_valid     )   ,
//  .io_Sram_ar_bits_addr (TopSram_ar_bits_addr )   ,
//  .io_Sram_r_ready      (TopSram_r_ready      )   ,
//  .io_ar_len            (TopSram_ar_len       )   ,
//  .io_ar_size           (TopSram_ar_size      )   ,
//  .io_ar_burst          (TopSram_ar_burst     )   ,
//  .io_Sram_aw_valid     (TopSram_aw_valid     )   ,
//  .io_Sram_aw_bits_addr (TopSram_aw_bits_addr )   ,
//  .io_aw_len            (TopSram_aw_len       )   ,
//  .io_aw_size           (TopSram_aw_size      )   ,   
//  .io_aw_burst          (TopSram_aw_burst     )   ,
//  .io_Sram_w_valid      (TopSram_w_valid      )   ,
//  .io_Sram_w_bits_data  (TopSram_w_bits_data  )   ,
//  .io_Sram_w_bits_strb  (TopSram_w_bits_strb  )   ,
//  .io_Sram_ar_ready     (TopSram_ar_ready     )   ,
//  .io_Sram_r_valid      (TopSram_r_valid      )   ,
//  .io_Sram_r_bits_data  (TopSram_r_bits_data  )   ,
//  .io_Sram_r_bits_last  (TopSram_r_bits_last  )   ,
//  .io_Sram_r_rresp		(TopSram_r_rresp	   )   ,	
//  .io_Sram_aw_ready     (TopSram_aw_ready     )   ,
//  .io_Sram_w_ready      (TopSram_w_ready      )   , 
//  .io_b_ready			(TopSram_b_ready	   )   ,	
//  .io_b_valid			(TopSram_b_valid      )   ,
//  .io_b_bresp			(TopSram_b_bresp	   )   
//);
ysyx_22050550_ByPass ByPass(
//    .clock         (clock)                ,
  //  .reset         (reset)                ,
    .io_IDU_valid  (Pass_valid)                 ,
    .io_IDU_raddr1 (Pass_rs1)                 ,
    .io_IDU_raddr2 (Pass_rs2)                 ,
    .io_IDU_rdata  (Pass_rdata)                 ,
    .io_IDU_pass1  (Pass_pass1)                 ,
    .io_IDU_pass2  (Pass_pass2)                 ,
    
    .io_WBU_waddr  (Wbu_waddr   )                 ,
    .io_WBU_valid  (Wbu_wen     )                 ,
    .io_WBU_rdata  (Wbu_wdata   )                 
);

ysyx_22050550_ScoreBoard ScoreBoard(
    .clock        (clock)                 ,
    .reset        (reset)                 ,
    .io_IDU_valid (Score_RScore_valid)                  ,
    .io_IDU_raddr1(Score_RScore_rdaddr1)                  ,
    .io_IDU_raddr2(Score_RScore_rdaddr2)                  ,
    .io_IDU_waddr (Score_RScore_waddr)                  ,
    .io_IDU_wen   (Score_RScore_wen)                  ,
    .io_IDU_busy1 (Score_RScore_busy1  )                  ,
    .io_IDU_busy2 (Score_RScore_busy2  )                  ,

    .io_WBU_waddr (Score_WScore_waddr)                  ,
    .io_WBU_wen   (Score_WScore_wen)                  
);
//顶层    
//assign io_interrupt		=	
assign TopSram_aw_ready =  io_master_awready;	
assign io_master_awvalid=  TopSram_aw_valid ; 	
assign io_master_awid	=  0				;	
assign io_master_awaddr	=  TopSram_aw_bits_addr[31:0];
assign io_master_awlen	=	TopSram_aw_len  ;
assign io_master_awsize =	TopSram_aw_size ;
assign io_master_awburst=	TopSram_aw_burst;
assign TopSram_w_ready  =   io_master_wready; 
assign io_master_wvalid =	TopSram_w_valid ;	
assign io_master_wdata	= 	TopSram_w_bits_data;
assign io_master_wstrb	= 	TopSram_w_bits_strb;
assign io_master_wlast	=   TopSram_w_bits_last;	 
assign io_master_bready =	TopSram_b_ready	   ;
assign TopSram_b_valid  =   io_master_bvalid   ;	
//assign  = io_master_bid ;	 	
assign TopSram_b_bresp  =   io_master_bresp	   ; 	
assign TopSram_ar_ready =   io_master_arready  ;	
assign io_master_arvalid=	TopSram_ar_valid   ;
assign io_master_arid	= 	0;
assign io_master_araddr =	TopSram_ar_bits_addr[31:0];	
assign io_master_arlen	= 	TopSram_ar_len	   ;
assign io_master_arsize =	TopSram_ar_size	   ;
assign io_master_arburst=	TopSram_ar_burst   ;
assign io_master_rready =	TopSram_r_ready    ;
assign TopSram_r_valid  =   io_master_rvalid   ;	
//assign  = io_master_rid; 	
assign TopSram_r_rresp  =   io_master_rresp	   ; 	
assign TopSram_r_bits_data =  io_master_rdata  ;	
assign TopSram_r_bits_last =  io_master_rlast  ;
assign io_slave_awready	= 0 ;
//assign io_slave_awvalid	=
//assign io_slave_awid	=	
//assign io_slave_awaddr	=	
//assign io_slave_awlen	=	
//assign io_slave_awsize	=	
//assign io_slave_awburst	=
assign io_slave_wready	= 0 ;	
//assign io_slave_wvalid	=	
//assign io_slave_wdata	=	
//assign io_slave_wstrb	=	
//assign io_slave_wlast	=	
//assign io_slave_bready	=	
assign io_slave_bvalid	=0;	
assign io_slave_bid		=0;
assign io_slave_bresp	=0;	
assign io_slave_arready	=0;
//assign io_slave_arvalid	=
//assign io_slave_arid	=	
//assign io_slave_araddr	=	
//assign io_slave_arlen	=	
//assign io_slave_arsize	=	
//assign io_slave_arburst	=
//assign io_slave_rready	=	
assign io_slave_rvalid	=0;	
assign io_slave_rid		=0;
assign io_slave_rresp	=0;	
assign io_slave_rdata	=0;	
assign io_slave_rlast	=0;	
assign io_sram0_addr	=Icache_sram_addr ;	
assign io_sram0_cen		=Icache_sram_cen  ;
assign io_sram0_wen		=Icache_sram_wen  ;
assign io_sram0_wmask	=Icache_sram_wmask;
assign io_sram0_wdata	=Icache_sram_wdata;
assign Icache_sram_rdata=io_sram0_rdata	  ;	
assign io_sram1_addr	=Dcache_sram_addr ;	
assign io_sram1_cen		=Dcache_sram_cen  ;
assign io_sram1_wen		=Dcache_sram_wen  ;
assign io_sram1_wmask	=Dcache_sram_wmask;
assign io_sram1_wdata	=Dcache_sram_wdata;
assign Dcache_sram_rdata=io_sram1_rdata	  ;	
assign io_sram2_addr	=0;	
assign io_sram2_cen		=0;
assign io_sram2_wen		=0;
assign io_sram2_wmask	=0;	
assign io_sram2_wdata	=0;	
//assign io_sram2_rdata	=	
assign io_sram3_addr	=0;	
assign io_sram3_cen		=0;
assign io_sram3_wen		=0;
assign io_sram3_wmask	=0;	
assign io_sram3_wdata	=0;	
//assign io_sram3_rdata	=	
assign io_sram4_addr	=0;	
assign io_sram4_cen		=0;
assign io_sram4_wen		=0;
assign io_sram4_wmask	=0;	
assign io_sram4_wdata	=0;	
//assign io_sram4_rdata	=	
assign io_sram5_addr	=0;	
assign io_sram5_cen		=0;
assign io_sram5_wen		=0;
assign io_sram5_wmask	=0;	
assign io_sram5_wdata	=0;	
//assign io_sram5_rdata	=	
assign io_sram6_addr	=0;	
assign io_sram6_cen		=0;
assign io_sram6_wen		=0;
assign io_sram6_wmask	=0;	
assign io_sram6_wdata	=0;	
//assign io_sram6_rdata	=	
assign io_sram7_addr	=0;	
assign io_sram7_cen		=0;
assign io_sram7_wen		=0;
assign io_sram7_wmask	=0;	
assign io_sram7_wdata	=0;	
//assign io_sram7_rdata	=	





endmodule
module ysyx_22050550_SRAM(	
  input         clock                   ,
                reset                   ,
                io_Sram_ar_valid        ,
  input  [63:0] io_Sram_ar_bits_addr    ,
  input         io_Sram_r_ready         ,
  input  [7:0]  io_ar_len               ,
  input  [2:0]  io_ar_size              ,
  input  [1:0]  io_ar_burst             ,
  input         io_Sram_aw_valid        ,
  input  [63:0] io_Sram_aw_bits_addr    ,
  input  [7:0]  io_aw_len               ,
  input  [2:0]  io_aw_size              ,   
  input  [1:0]  io_aw_burst             ,
  input         io_Sram_w_valid         ,
  input  [63:0] io_Sram_w_bits_data     ,
  input  [7:0]  io_Sram_w_bits_strb     ,
  input			io_b_ready				,
  output		io_b_valid				,
  output [1:0]  io_b_bresp				,
  output        io_Sram_ar_ready        ,
                io_Sram_r_valid         ,
  output [63:0] io_Sram_r_bits_data     ,
  output [ 1:0] io_Sram_r_rresp			,
  output        io_Sram_r_bits_last     ,
                io_Sram_aw_ready        ,
                io_Sram_w_ready
);
    wire Dpi_wflag ,Dpi_rflag;
    wire [63:0] Dpi_raddr, Dpi_waddr ,Dpi_rdata, Dpi_wdata;
    wire [7:0]  Dpi_wmask; 
    reg [63:0] raddrReg, waddrReg;
	wire raddren =( io_Sram_ar_valid && io_Sram_ar_ready )||(io_Sram_r_valid && io_Sram_r_ready);
	wire [63:0] raddrin = ( io_Sram_ar_valid && io_Sram_ar_ready ) ? io_Sram_ar_bits_addr 
						: ( io_Sram_r_valid  && io_Sram_r_ready  ) ? raddrReg + 64'd8 : raddrReg ;
    ysyx_22050550_Reg # (64,64'd0)Regraddr(
    .clock(clock),.reset(reset),.wen(raddren),
    .din(raddrin),.dout(raddrReg));
	wire waddren =( io_Sram_aw_valid && io_Sram_aw_ready )||(io_Sram_w_valid && io_Sram_w_ready);
	wire [63:0] waddrin = ( io_Sram_aw_valid && io_Sram_aw_ready ) ? io_Sram_aw_bits_addr 
						: ( io_Sram_w_valid  && io_Sram_w_ready  ) ? waddrReg + 64'd8 : waddrReg ; 
    ysyx_22050550_Reg # (64,64'd0)Regwaddr(
    .clock(clock),.reset(reset),.wen(waddren),
    .din(waddrin),.dout(waddrReg));
 
    //实现类似chisel 只不过用DPI访问内存
    //仅支持INCR型突发传输   size 设定为 128//CACHE那边的突发传输类型只能是这个
    //读状态机
	//read 的response 信号跟rdata是在一起的 
	//write 的response 需要一个新的状态，因为是一个新的通道
    localparam readwait = 1'b0 , read = 1'b1;
    reg ReadState,ReadNext;
    always @(posedge clock) begin
        if (reset) ReadState <= readwait;
        else ReadState <= ReadNext;
    end
    reg [7:0] Reglen;
    always @(*) begin
        case (ReadState)
            readwait: begin
                if(io_Sram_ar_valid&&io_Sram_ar_ready) begin
                    ReadNext = read;
                end
                else ReadNext = readwait;
            end 
            read: begin
                if(Reglen!=ARLEN) begin
                    ReadNext = read;
                end
                else ReadNext = readwait;
            end
           default: ReadNext = readwait;
        endcase
    end
    //faster
    
    wire [6:0] ReadAddrAdd;
    //DPI最多只支持64位，更大的size一次也只传64个
    assign ReadAddrAdd = io_ar_size ==  3'b000 ? 7'd1
                        :io_ar_size ==  3'b001 ? 7'd2   
                        :io_ar_size ==  3'b010 ? 7'd4   
                        :io_ar_size ==  3'b011 ? 7'd8 : 7'd8;
     
    wire [63:0] ReadData ;
    assign ReadData = io_ar_size == 3'b000 ? {{56{1'b0}},Dpi_rdata[ 7:0]} :
                      io_ar_size == 3'b001 ? {{48{1'b0}},Dpi_rdata[15:0]} :
                      io_ar_size == 3'b010 ? {{32{1'b0}},Dpi_rdata[31:0]} :
                      io_ar_size == 3'b011 ? Dpi_rdata : Dpi_rdata;
                      
    
    assign io_Sram_ar_ready = ReadState == readwait;
    wire ReglenEn = (ReadState == readwait && io_Sram_ar_valid) 
                 || (ReadState == read && io_Sram_r_valid);
    wire [7:0] RegLenIn = (ReadState == readwait && io_Sram_ar_valid) ? 0
                        : (ReadState == read && io_Sram_r_ready) ? Reglen+1 : Reglen;
    ysyx_22050550_Reg # (8,8'd0) RegLen (
        .clock(clock),
        .reset(reset),
        .wen(ReglenEn),
        .din(RegLenIn),
        .dout(Reglen)
    );
	reg [7:0] ARLEN ; 
	ysyx_22050550_Reg # (8,8'd0) arlen (
        .clock(clock),
        .reset(reset),
        .wen(ReadState == readwait &&io_Sram_ar_valid),
        .din(io_ar_len),
        .dout(ARLEN)
    );

    /*
		00 : OKAY   : NORMAL access success
		01 : EXOKAY : Exclusive accsess OKAY 
		10 : SLEVRR : Slave error 
		11 : DECERR : Decode error 
	*/ 
    assign io_Sram_r_bits_last = ReadState == read && Reglen == ARLEN;
    //目前只有两种情况，先这样写了  作为设备内存 arlen本身就是0
    assign Dpi_raddr =  raddrReg ; 
    assign io_Sram_r_bits_data = ReadData;	
    assign io_Sram_r_rresp = 2'b00;			
    assign io_Sram_r_valid = ReadState == read;
    assign Dpi_rflag = io_Sram_r_valid && io_Sram_r_ready;
    //写状态机
    localparam writewait = 2'b00 , write = 2'b01 , writeresponse = 2'b10;
    reg [1:0]WriteState,WriteNext;
    always @(posedge clock) begin
        if (reset) WriteState <= writewait ;
        else WriteState <= WriteNext;
 
    end
    reg [7:0] WReglen;
    always @(*) begin
        case (WriteState)
            writewait: begin
                if(io_Sram_aw_valid&&io_Sram_aw_ready) begin
                    WriteNext = write;
                end
                else WriteNext = writewait;
            end 
            write: begin
                if(WReglen!=AwLEN) begin
                    WriteNext = write;
                end
				else begin 
					WriteNext = writeresponse; 
				end
            end
			writeresponse: begin 
				if (io_b_ready && io_b_valid) begin 
					if(io_b_bresp == 2'b00) begin 
						WriteNext = writewait; 
					end 
					else writeresponse = writewait ;
				end
				else WriteNext = writeresponse ; 
			end 
            default: WriteNext = writewait;
        endcase
    end
    wire writeOkay = 1'b1; 
	assign io_b_bresp = 2'b00;
    assign io_b_valid = WriteState == writeresponse;
    wire [6:0] WriteAddrAdd;
    //DPI最多只支持64位，更大的size一次也只传64个
    assign WriteAddrAdd =  io_aw_size == 3'b000 ?  7'd1 :
                           io_aw_size == 3'b001 ?  7'd2 :
                           io_aw_size == 3'b010 ?  7'd4 :
                           io_aw_size == 3'b011 ?  7'd8 :7'd8;
        
    
    wire [63:0] WriteData ;
    assign WriteData = io_aw_size == 3'b000 ? {{56{1'b0}},io_Sram_w_bits_data[ 7:0]}: 
                       io_aw_size == 3'b001 ? {{48{1'b0}},io_Sram_w_bits_data[15:0]}: 
                       io_aw_size == 3'b010 ? {{32{1'b0}},io_Sram_w_bits_data[31:0]}: 
                       io_aw_size == 3'b011 ? io_Sram_w_bits_data :io_Sram_w_bits_data;
    
  
    assign io_Sram_aw_ready = WriteState == writewait;
    wire WReglenEn = (WriteState == writewait && io_Sram_aw_valid) 
                 || (WriteState == write && io_Sram_w_valid);
    wire [7:0] WRegLenIn = (WriteState == writewait && io_Sram_aw_valid) ? 0
                        : (WriteState == write && io_Sram_w_valid) ? WReglen+1 : WReglen;
    ysyx_22050550_Reg # (8,8'd0) WRegLen (
        .clock(clock),
        .reset(reset),
        .wen(WReglenEn),
        .din(WRegLenIn),
        .dout(WReglen)
    );
	reg [7:0] AwLEN ; 
	ysyx_22050550_Reg # (8,8'd0) awlen (
        .clock(clock),
        .reset(reset),
        .wen(WriteState == writewait && io_Sram_aw_valid),
        .din(io_aw_len),
        .dout(AwLEN)
    );

    //目前只有两种情况，先这样写了
    assign Dpi_waddr =  waddrReg ;
    assign Dpi_wdata =  WriteData;
    assign Dpi_wmask =  io_Sram_w_bits_strb;
    assign io_Sram_w_ready = WriteState == write;
    assign Dpi_wflag =  io_Sram_w_valid && io_Sram_w_ready;
    
//import "DPI-C" function void pmem_read(input longint Dpi_raddr, output longint Dpi_rdata);
//import "DPI-C" function void pmem_write(input longint Dpi_waddr, input longint Dpi_wdata,input byte Dpi_wmask);
//
//    always@(negedge clock )begin
//       if(Dpi_wflag) pmem_write(Dpi_waddr,Dpi_wdata,Dpi_wmask);
//    end
//    always@(negedge clock)begin
//       if(Dpi_rflag) pmem_read(Dpi_raddr,Dpi_rdata);
//    end
    /*
    always@(Dpi_wflag)begin
       if(Dpi_wflag) pmem_write(Dpi_waddr,Dpi_wdata,Dpi_wmask);
    end
    always@(Dpi_rflag)begin
       if(Dpi_rflag) pmem_read(Dpi_raddr,Dpi_rdata);
    end
    */
endmodule
//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_WBU(
    input         clock                         ,
                  reset                         ,
    /*********Ls***********/
    input  [63:0] io_LSWB_pc                    ,
	input  [31:0] io_LSWB_npc					,
    input  [31:0] io_LSWB_inst                  , 
    input         io_LSWB_valid                 ,
   // input  [4:0]  io_LSWB_rs1addr               , 
 //   input         io_LSWB_abort                 ,
   //               io_LSWB_jalrflag              ,
    input			io_LSWB_readflag              ,
//                  io_LSWB_writeflag             ,
                  io_LSWB_csrflag               ,
                  io_LSWB_ecallflag             ,
                  io_LSWB_mretflag              ,
     //             io_LSWB_ebreak                ,
       //           io_LSWB_SkipRef               ,
    //input  [63:0] io_LSWB_rs2                   ,
     //             io_LSWB_imm                   ,  
    input [63:0]  io_LSWB_alures                ,
                  io_LSWB_lsures                ,
    input  [4:0]  io_LSWB_waddr                 ,    
    input         io_LSWB_wen                   ,      
    input  [2:0]  io_LSWB_func3                 , 
    //input  [6:0]  io_LSWB_func7                 ,      
   // input  [63:0] io_LSWB_NextPc                ,
    /************Regfile*******Csr******/
    input  [63:0] mepc                           ,
    input  [63:0] mcause                         ,
    input  [63:0] mtvec                          ,
    input  [63:0] mstatus                        ,
    input  [63:0] mie                            ,
    input  [63:0] mip                            ,
    input  [63:0] Reg17                          ,
    input  [63:0] regfilepc						 ,
	output [63:0] wbmepc                         ,
    output [63:0] wbmcause                       ,
    output [63:0] wbmtvec                        ,
    output [63:0] wbmstatus                      ,
    output [63:0] wbmie                          ,
    output [63:0] wbmip                          ,
    output [7:0]  wbcsren                        ,  
    /********regfile topdebug************/
	 output [63:0] io_WBTOP_pc                    ,
   //               io_WBTOP_rs2                   ,
   // output [31:0] io_WBTOP_inst                  ,
	output        io_WBTOP_valid                 ,
   // output [4:0]  io_WBTOP_rs1                   ,
   // output [63:0] io_WBTOP_imm                   ,
    output [4:0]  io_WBTOP_waddr                 ,
    output [63:0] io_WBTOP_wdata                 ,
    output        io_WBTOP_wen                   ,
   // output        io_WBTOP_jalrflag              ,               
   //               io_WBTOP_ebreak                ,   
   //               io_WBTOP_abort                 , 
   //               io_WBTOP_SkipRef               ,
    //              io_WBTOP_writeflag             ,
    //output [63:0] io_WBTOP_writeaddr             ,
    //output [63:0] io_WBTOP_NextPc                ,  
    output        io_ReadyWB_ready              ,  
	input		  interrupt						,//外部中断 时钟中断 或者 其他的异步中断  比如访存等，，，虽然还没实现。
	input		  clintinterrupt				,
	output	      timervalid					,
	//input	      io_iru_flush						, 
	// 来自顶层的冲刷信号寄存器的信息，当这个信号拉高的时候，表明此时正在进行流水线
	// 的冲刷，需要对ecallpc啥的进行写入，保证记录到执行完毕的最后一条指令的pc。
	input		  io_wbu_flush					, 
		// 来自流水线的冲刷信息  
	output		  io_topflush					, 
	// 这个信号用来送给顶层的冲刷寄存器，表明WBU已经收到了冲刷的信息，然后把顶层的冲刷给置0，
	// 表明冲刷完成
	output		  iruflush						,
	// 异常处理模块受到了中断信号 需要发送中断,对流水线进行冲刷
	output        irujump						
);
	assign io_topflush = io_wbu_flush			;
    //根据是否是csr 指令或者load指令 决定对寄存器的写回的数据的选取
    wire [11:0] csrind = io_LSWB_inst[31:20]; 
    
    wire [63:0] csrwritedata;
    assign csrwritedata = 
    csrind ==`ysyx_22050550_MTVEC   ? mtvec  :
    csrind ==`ysyx_22050550_MCAUSE  ? mcause :
    csrind ==`ysyx_22050550_MSTATUS ? mstatus:
    csrind ==`ysyx_22050550_MEPC    ? mepc   :
    csrind ==`ysyx_22050550_CSRMIE  ? mie    :
    csrind ==`ysyx_22050550_CSRMIP  ? mip    : 0;
//	csrind == 12'h180				? 64'h8000000000000000 :	64'h0;
    
    wire [`ysyx_22050550_RegBus] writebackdata = io_LSWB_csrflag?csrwritedata : io_LSWB_readflag ? io_LSWB_lsures : io_LSWB_alures;
    //处理csr指令 对csr进行写回 
	wire [63:0] zimm = {   {59{1'b0}}   , io_LSWB_inst[19:15]};
    wire [63:0] csrwrite;
    //Idu那边在csrflag拉高的时候就把 rd2置0 这样子这里过来的就是rs1
    assign csrwrite = 
    io_LSWB_func3 == 3'b001 ? io_LSWB_alures :
    io_LSWB_func3 == 3'b010 ? io_LSWB_alures | csrwritedata : 
	io_LSWB_func3 == 3'b111 ? csrwritedata &(~zimm) :
	io_LSWB_func3 == 3'b110 ? csrwritedata | zimm : 
	io_LSWB_func3 == 3'b011 ? (~io_LSWB_alures) & ( csrwritedata) :  
	io_LSWB_func3 == 3'b101 ? zimm       : 64'h0;
    
//	wire [7:0] csren;
//    assign csren = 
//    csrind == `ysyx_22050550_MTVEC   ? 8'b00000100 : 
//    csrind == `ysyx_22050550_MCAUSE  ? 8'b00000010 : 
//    csrind == `ysyx_22050550_MSTATUS ? 8'b00001000 : 
//    csrind == `ysyx_22050550_MEPC    ? 8'b00000001 : 
//    csrind == `ysyx_22050550_CSRMIE  ? 8'b00010000 : 
//    csrind == `ysyx_22050550_CSRMIP  ? 8'b00100000 : 8'h0;
    
    //csrflag为高的情况下的写回使能
    wire [`ysyx_22050550_RegBus] flagwbcsr = csrwrite;
    //wire [7:0] flagwbcsren = csren & {(8){io_LSWB_csrflag}};
    //处理一下ecall 和mret
    //ecall时要写Mepc 和mstatus
	//注意一下 时钟中断的处理也与ecall类似，只不过是mcause不一样
	//其他的中断 比如外部中断， 或者访存错误引起的中断应该也是一样
   // wire [7:0] ecallcsren = 8'b00001011; 
    wire [`ysyx_22050550_RegBus] oldmie = mstatus & (64'h8);//保存mie位
    wire [`ysyx_22050550_RegBus] ecallnewmstatus = (mstatus & (~64'h80)) | (oldmie << 4);//赋给mpie
    wire [`ysyx_22050550_RegBus] ecallfinal = ecallnewmstatus & (~64'h8); //mie置0禁用中断
    wire [`ysyx_22050550_RegBus] ecallpc = io_LSWB_valid ? io_LSWB_pc : regfilepc  ; // 这里要更换一下，如果当前指令有效，就用当前的pc， 如果无效，则用寄存器的pc
    wire [`ysyx_22050550_RegBus] ecallmcause = (Reg17==(~64'h0)||Reg17<=64'h13)? 64'hb:0;
    
	//处理以下计时器中断以及其他异步中断   首先对于计时器中断来说，满足  以下
	//三个条件时 即产生计时器中断，此时Mip寄存器的MTIP位置为1   
	//1.mstatus 的MIE为1   2.mie 的MTIE 位为 1 3. mtime >= mtimecmp 
	//首先满足以上条件时 mip 的 写如使能拉高。     产生一次计时器中断之后 mip 
	//的mtip 位要拉低
	wire clintintr = mstatus[3] && mie[7] && clintinterrupt ;
	assign timervalid = mstatus[3] && mie[7] ;
	wire outintr   = mstatus[3] && mie[7] && interrupt      ;
	reg  inter; 
	//中断会导致流水线的冲刷， 在因为中断导致的冲刷完成之前， 
	//都要一直记录ecallpc等数值，这样子才能保证记录到最后一条完成的指令 ，然后
	//再跳转到中断处理程序 因为fencei指令导致的中断可不管 
	wire interen   =( clintintr ||outintr ) || io_wbu_flush ;
	wire interin   = clintintr || outintr ; 
	ysyx_22050550_Reg # (1,1'd0)RegInter(
    .clock(clock),.reset(reset),.wen(interen),.din(interin ),.dout(inter     ));

	wire intr = clintintr || outintr || inter ; 
	wire mtipvalid = mip[7];
	//wire [7:0] interrupten = 8'b00001011;  
//	wire [7:0] clintintren = 8'b00100000;
    //mret
//    wire [7:0] mretcsren  = 8'b00001000;
    wire [`ysyx_22050550_RegBus] oldmpie = mstatus & (64'h80);//保存mpie位
    wire [`ysyx_22050550_RegBus] mretnewmstatus = (mstatus & (~64'h8)) | (oldmpie >> 4);//赋给mie
    wire [`ysyx_22050550_RegBus] mretfinal = mretnewmstatus | (64'h80); //恢复使能
	
    wire [63:0] inwbmepc   =   io_LSWB_csrflag?flagwbcsr :io_LSWB_ecallflag? ecallpc: 0;
    wire [63:0] inwbmcause =   io_LSWB_csrflag?flagwbcsr :io_LSWB_ecallflag? ecallmcause:0 ;
    wire [63:0] inwbmtvec  =   io_LSWB_csrflag?flagwbcsr : 0 ;
    wire [63:0] inwbmstatus=   io_LSWB_csrflag?flagwbcsr :io_LSWB_ecallflag? ecallfinal: io_LSWB_mretflag?mretfinal: 0 ;
    wire [63:0] inwbmie    =   io_LSWB_csrflag?flagwbcsr : 0 ;
    wire [63:0] inwbmip    =   io_LSWB_csrflag?flagwbcsr : 0 ;
//    wire [7:0 ] inwbcsren  =   io_LSWB_csrflag?flagwbcsren :  io_LSWB_ecallflag?ecallcsren:io_LSWB_mretflag?mretcsren:0;
	//这个中断的异常号暂时没找到，暂定为16
	//中断 时 最高位置1
	wire [63:0] intrmcause ={{1'b1},63'd7};
	//记录一下当前执行的或者已经执行完成的
	//pc ,保证后面返回正确 。。
	//流水线冲刷完成后再把 
	assign wbmepc   = intr ? {{32'd0},io_LSWB_npc} : inwbmepc ; 
	assign wbmcause = intr&&io_wbu_flush ? intrmcause : inwbmcause ; 
	assign wbmtvec  = inwbmtvec						 ; 
	assign wbmstatus= intr&&io_wbu_flush ? ecallfinal : inwbmstatus;
	assign wbmie    = inwbmie						 ;  
	assign wbmip    = mtipvalid ? inwbmip &(~64'h80): inwbmip   ; // mip 的mtip位拉低仅用计时器中断
//	wire [7:0] intrcsren  = intr ? ecallcsren|inwbcsren : inwbcsren		;
	wire mepcen   = intr    || io_LSWB_ecallflag  ||(io_LSWB_csrflag && csrind == `ysyx_22050550_MEPC); 
	wire mcauseen = (intr&&io_wbu_flush) || io_LSWB_ecallflag  ||(io_LSWB_csrflag && csrind == `ysyx_22050550_MCAUSE);
	wire mtvecen  = (io_LSWB_csrflag && csrind == `ysyx_22050550_MTVEC );
	wire mstatusen= (intr&&io_wbu_flush) || io_LSWB_ecallflag|| io_LSWB_mretflag   ||(io_LSWB_csrflag && csrind == `ysyx_22050550_MSTATUS);
	wire mieen    = (io_LSWB_csrflag && csrind == `ysyx_22050550_CSRMIE) ;
	wire mipen	  = mtipvalid || (io_LSWB_csrflag && csrind == `ysyx_22050550_CSRMIP) ;
	assign wbcsren  = {2'b00,mipen,mieen,mstatusen,mtvecen,mcauseen,mepcen} ;
		//mtipvalid ? intrcsren | clintintren : intrcsren ;
	


    assign io_WBTOP_pc       =      io_LSWB_pc                         ;
   // assign io_WBTOP_inst     =      io_LSWB_inst                       ;
    /*************valid-ready握手信号****************/      
	assign io_WBTOP_valid    =      io_LSWB_valid                      ;
    assign io_ReadyWB_ready  =      1'b1                               ;

  //  assign io_WBTOP_rs1      =      io_LSWB_rs1addr                    ;
  //  assign io_WBTOP_abort    =      io_LSWB_abort                      ;
  //  assign io_WBTOP_rs2      =      io_LSWB_rs2                        ;
    assign io_WBTOP_waddr    =      io_LSWB_waddr                      ;
    assign io_WBTOP_wen      =      io_LSWB_wen                        ;
    assign io_WBTOP_wdata    =      writebackdata                      ;
  //  assign io_WBTOP_jalrflag =      io_LSWB_jalrflag                   ;
  //  assign io_WBTOP_SkipRef  =      io_LSWB_SkipRef                    ;
  //  assign io_WBTOP_ebreak   =      io_LSWB_ebreak                     ;
  //  assign io_WBTOP_NextPc   =      io_LSWB_NextPc                     ;
	assign irujump			 =		intr							   ;
	assign iruflush			 =      clintintr || outintr			   ;
    //assign io_WBTOP_writeflag=      io_LSWB_writeflag                  ;
    
	//assign io_WBTOP_writeaddr=      io_LSWB_alures                     ;
`ifdef ysyx_22050550_WBUDEBUG
    always@(posedge clock) begin
        if (io_WBTOP_pc == `ysyx_22050550_DEBUGPC) begin
            $display("csrflag:%d ecallflag:%d mretflag:%d ",io_LSWB_csrflag,io_LSWB_ecallflag,io_LSWB_mretflag);
            $display("NO:%x ecallmcause:%x",Reg17,ecallmcause);
        end
    end
`endif
endmodule

//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_LSU(
    input         clock                         ,
                  reset                         ,
    input  [63:0] io_EXLS_pc                    ,
    input  [31:0] io_EXLS_inst                  , 
    input         io_EXLS_valid                 ,
//    input  [4:0]  io_EXLS_rs1addr               , 

  //  input         io_EXLS_abort                 ,
  //                io_EXLS_jalrflag              ,
   input		  io_EXLS_csrflag               ,
                  io_EXLS_ecallflag             ,
                  io_EXLS_mretflag              ,
//                  io_EXLS_ebreak                ,
    input  [63:0] io_EXLS_rs2                   ,
                  //io_EXLS_imm                   ,  
                  io_EXLS_alures                ,
                  io_EXLS_writedata             ,
    input  [4:0]  io_EXLS_waddr                 ,    
    input         io_EXLS_wen                   ,  
                  io_EXLS_wflag                 ,   
                  io_EXLS_rflag                 ,   
    input  [7:0]  io_EXLS_wmask                 ,          
    input  [2:0]  io_EXLS_func3                 , 
    //input  [6:0]  io_EXLS_func7                 ,      
 //   input  [63:0] io_EXLS_NextPc                ,
    input         io_ReadyWB_ready              , 
    output [63:0] io_LSWB_pc                    ,
                  //io_LSWB_rs2                   ,
    output [31:0] io_LSWB_inst                  ,
    output        io_LSWB_valid                 ,
    //output [4:0]  io_LSWB_rs1                   ,
  //  output [63:0] io_LSWB_imm                   ,
    output [4:0]  io_LSWB_wdaddr                ,
    output        io_LSWB_wen                   ,
    output        io_LSWB_csrflag               , 
                  io_LSWB_readflag              ,  
//                  io_LSWB_writeflag             ,     
    //              io_LSWB_jalrflag              ,        
                  io_LSWB_ecallflag             ,        
                  io_LSWB_mretflag              ,        
      //            io_LSWB_ebreak                ,   
        //          io_LSWB_abort                 , 
          //        io_LSWB_SkipRef               ,    
    output [63:0] io_LSWB_alures                ,  
    output [63:0] io_LSWB_lsures                ,
    output [2:0]  io_LSWB_func3                 ,
    //output [6:0]  io_LSWB_func7                 ,
  //  output [63:0] io_LSWB_NextPc                ,  
    output        io_ReadyEX_ready              ,
	input		  io_EXLS_flush					,
	output        io_LSWB_flush					,
    //bypass
    //output  [4:0]  io_LSU_waddr                   ,
    //output         io_LSU_valid                   ,
    //output [63:0]  io_LSU_rdata                   ,
    /***********AxiSram***********/
`ifdef ysyx_22050550_DEVICEUSEAXI
    input  [0:0]  io_ar_ready               ,
    output [0:0]  io_ar_valid               ,    
    output [63:0] io_ar_addr                ,
    output [7:0]  io_ar_len                 ,
    output [2:0]  io_ar_size                ,    
    output [1:0]  io_ar_burst               , 
    input  [0:0]  io_r_valid                ,
    input  [63:0] io_r_rdata                ,
	input  [1:0]  io_r_rresp				,
    output [0:0]  io_r_ready                ,
    input  [0:0]  io_aw_ready               ,
    output [0:0]  io_aw_valid               , 
    output [63:0] io_aw_addr                ,
    output [7:0]  io_aw_len                 ,
    output [2:0]  io_aw_size                , 
    output [1:0]  io_aw_burst               ,
    input  [0:0]  io_w_ready                , 
    output [0:0]  io_w_valid                ,
    output [63:0] io_w_data                 ,
    output [7:0]  io_w_strb                 ,
    output [0:0]  io_w_last                 ,
    output [0:0]  io_b_ready                ,
    input  [0:0]  io_b_valid                ,
	input  [1:0]  io_b_bresp				, 
`endif 
    /***********Cache***********/
    output [0:0]  io_Cache_valid            ,
    output [0:0]  io_Cache_op               ,
    output [63:0] io_Cache_addr             ,
    output [63:0] io_Cache_wdata            ,
    output [7:0]  io_Cache_wmask            ,
    input  [63:0] io_Cache_data             ,
    input         io_Cache_dataok			,
	input		  io_Cache_busy				,
    //To IDU for DEGUB
    //output printflag 
	// CLINT 
	output			ren			,
	output 	[63:0]	raddr		,
	output	        wen			,
	output	[63:0]	waddr		,
	output	[63:0]	wdata		,
	input	[63:0]  rdata					
);  
    //设备地址都在 a0000000+ 这里判断可以简单一点
    wire Pmem = io_EXLS_alures[31:28] == 4'h3|| (io_EXLS_alures[31:28] >= 4'h8) ;// && io_EXLS_alures[31:24]<=8'hff);
	wire Clint = (io_EXLS_alures >= `ysyx_22050550_CLINTBASE) && (io_EXLS_alures <= `ysyx_22050550_CLINTEND); 
    //wire Pmem = io_EXLS_alures>=`ysyx_22050550_PLeft && io_EXLS_alures < `ysyx_22050550_PRight;

	reg  reglen ; 
	always@(posedge clock) begin 
		if (reset) reglen <= 1'd0; 
		// 写双字   
		else if (io_EXLS_wflag &&!( Pmem) && !(Clint) && (Wstate == sresp && io_b_valid) && (io_LSWB_func3 ==3'b011 ) ) 
			reglen <= reglen + 1'd1  ; 
		// 读双字 
		else if (io_EXLS_rflag &&!( Pmem) && !(Clint) && (Rstate == sread && io_r_valid) && (io_LSWB_func3 == `ysyx_22050550_LD) )
			reglen <= reglen + 1'd1  ; 
	end 
    //设备通信状态机 读状态机

    localparam swait = 2'd0, swaitready = 2'd1, sread = 2'd2;
    reg [1:0] Rstate, Rnext;
    //状态跳转
    always@(posedge clock) begin
        if(reset) Rstate <= swait;
        else Rstate <= Rnext;
    end
    //读状态机组合逻辑
    always@(*) begin
        case (Rstate)
            swait:begin
				if(io_ar_ready&&io_ar_valid) begin 
					Rnext = sread;
				end 
				else if(io_ar_valid) begin 
					Rnext = swaitready; 
				end 
				else Rnext = swait; 
			end 
            swaitready:begin
                if(io_ar_ready&&io_ar_valid) Rnext = sread;
                else Rnext = swaitready;
            end
            sread:begin
                if(io_r_ready&&io_r_valid) begin 
					if ( io_r_rresp == 2'b00) 
						Rnext = swait;
					else 
						Rnext = swait ; 
                end
                else Rnext = sread;
            end
            default:Rnext = swait; 
        endcase
    end 	
	wire readdevice = io_EXLS_rflag && (!Pmem) && (!Clint) ; 
	wire loaddouble = readdevice && io_EXLS_func3 == `ysyx_22050550_LD ; 
    assign io_ar_valid = (Rstate== swait && readdevice) || (Rstate == swait && loaddouble && (reglen == 1)) || (Rstate == swaitready);  
    assign io_ar_addr  = (loaddouble && (reglen == 1)) ? io_EXLS_alures +4 : io_EXLS_alures ;
    assign io_ar_len   = 0;           
    //assign io_ar_size  = 2;          
	assign io_ar_size = io_EXLS_func3 ==`ysyx_22050550_LB  ? 0  :    
                      io_EXLS_func3 ==`ysyx_22050550_LH  ?   1  :
                      io_EXLS_func3 ==`ysyx_22050550_LW  ?   2  :
                      io_EXLS_func3 ==`ysyx_22050550_LD  ?   3  :      
                      io_EXLS_func3 ==`ysyx_22050550_LWU ?   2  :      
                      io_EXLS_func3 ==`ysyx_22050550_LHU ?   1       :       
                      io_EXLS_func3 ==`ysyx_22050550_LBU ?  0 : 0; 
    
    assign io_ar_burst = 2'b00;          
    assign io_r_ready  = Rstate == sread; 
	wire [1:0] addrmod = io_ar_addr[1:0];
	wire [31:0] shiftdata = addrmod == 2'b01 ? io_r_rdata[39:8]:
							addrmod == 2'b10 ? io_r_rdata[47:16]:
							addrmod == 2'b11 ? io_r_rdata[55:24] : io_r_rdata[31:0];

	reg [31:0]tmpdevicedata; 
	always@(posedge clock) begin 
		if(reset) tmpdevicedata  <= 0 ; 
		else if ( io_r_valid && io_r_ready) tmpdevicedata <= io_r_rdata[31:0] ; 
	end 
    //wire [`ysyx_22050550_RegBus] Devicedata = ( reglen == 1 ) ? { io_r_rdata[63:32] ,tmpdevicedata } : io_r_rdata;
    //wire [`ysyx_22050550_RegBus] Devicedata = ( reglen == 1 ) ? { io_r_rdata[31:0] ,tmpdevicedata } : io_r_rdata;
    wire [`ysyx_22050550_RegBus] Devicedata = ( reglen == 1 ) ? { shiftdata ,tmpdevicedata } :{ shiftdata,shiftdata};
    wire DeviceReadNotBusy = (Rstate == swait && (!io_ar_valid)) || (Rstate == sread && (io_r_valid) && (!(loaddouble &&(reglen == 0))));
	wire DeviceReadBusy = !DeviceReadNotBusy;//(Rstate == swait &&(io_ar_valid))||(Rstate==swaitready)||(Rstate==sread &&(!(io_r_ready&&io_r_valid)))
	//||(Rstate == sread && (io_r_valid) && (loaddouble) && reglen == 0);
	
    
    localparam swaitW = 2'd0, swaitreadyW = 2'd1, swrite = 2'd2, sresp = 2'd3;
    reg [1:0] Wstate, Wnext;
    //状态跳转
    always@(posedge clock) begin
        if(reset) Wstate <= swaitW;
        else Wstate <= Wnext;
    end
    //读状态机组合逻辑
    always@(*) begin
        case (Wstate)
            swaitW:begin
                if(io_aw_ready&&io_aw_valid) begin
                    Wnext = swrite;
                end
                else if(io_aw_valid) begin
                    Wnext = swaitreadyW;
                end
                else Wnext = swaitW;
            end 
            swaitreadyW:begin
                if(io_aw_ready&&io_aw_valid) Wnext = swrite;
                else Wnext = swaitreadyW;
            end
            swrite:begin
                if(io_w_ready&&io_w_valid) begin
                    Wnext = sresp;
                end
                else Wnext = swrite;
            end
            sresp:begin
                if(io_b_valid&&io_b_ready)begin
					if(io_b_bresp == 2'b00)
                    Wnext = swaitW;
					else Wnext = swaitW ;
                end
                else Wnext = sresp;
            end
            default:Wnext = swaitW; 
        endcase
    end 
	wire writedevicedata = io_EXLS_wflag && (!Pmem) && (!Clint) ; 
	wire storedouble	 = writedevicedata && (io_EXLS_func3 == 3'b011); 

    assign io_aw_valid = (Wstate == swaitW && writedevicedata )||(Wstate==swaitreadyW)||(Wstate == swaitW && writedevicedata && storedouble && reglen == 1);
    assign io_aw_addr  = (storedouble && reglen == 1) ?  io_EXLS_alures+4 : io_EXLS_alures; 
    assign io_aw_len   = 0;           
    assign io_aw_size = io_EXLS_func3 == 3'b000  ? 0  :    
                      io_EXLS_func3 == 3'b001    ?   1  :
                      io_EXLS_func3 ==  3'b010  ?   2  :
                      io_EXLS_func3 ==  3'b011  ?   3  : 0 ;      
                     // io_EXLS_func3 == ?   2  :      
                     // io_EXLS_func3 ==`ysyx_22050550_LHU ?   1       :       
                     // io_EXLS_func3 ==`ysyx_22050550_LBU ?  0 : 0; 
    //assign io_aw_size  = 2;          
    assign io_aw_burst = 2'b00; 
    assign io_w_valid  = Wstate == swrite;
	wire [2:0] waddrmod = io_aw_addr[2:0] ;
	//wire [63:0] finalwritedata = waddrmod == 3'b001 ? { io_EXLS_writedata[55:0],{8'b0}} :
	//							 waddrmod == 3'b010 ? { io_EXLS_writedata[47:0],{16'b0}} :
	//							 waddrmod == 3'b011 ? { io_EXLS_writedata[39:0],{24'b0}} :
	//							 waddrmod == 3'b100 ? { io_EXLS_writedata[63:32],{32'b0}}: 
	//							 waddrmod == 3'b101 ? { io_EXLS_writedata[63:40],{40'b0}} :
	//							 waddrmod == 3'b110 ? { io_EXLS_writedata[63:48],{48'b0}} :
	//						 	 waddrmod == 3'b111 ? { io_EXLS_writedata[63:56],{56'b0}} : io_EXLS_writedata ;
	//wire [7:0] finalstrb  =		 waddrmod == 3'b001 ? { io_EXLS_writedata[55:0],{8'b0}} :
	//							 waddrmod == 3'b010 ? { io_EXLS_writedata[47:0],{16'b0}} :
	//							 waddrmod == 3'b011 ? { io_EXLS_writedata[39:0],{24'b0}} :
	//							 waddrmod == 3'b100 ? { io_EXLS_writedata[63:32],{32'b0}}: 
	//							 waddrmod == 3'b101 ? { io_EXLS_writedata[63:40],{40'b0}} :
	//							 waddrmod == 3'b110 ? { io_EXLS_writedata[63:48],{48'b0}} :
	//						 	 waddrmod == 3'b111 ? { io_EXLS_writedata[63:56],{56'b0}} :  {4'h0,io_EXLS_wmask[3:0]};
	wire [7:0]  bytewrite = io_EXLS_writedata[7:0]; 
	wire [15:0] halfwrite = io_EXLS_writedata[15:0];
	wire [31:0] wordwrite = io_EXLS_writedata[31:0]; 
	wire [63:0] finalwritedata =  io_EXLS_func3 == 3'b000  ? {8{bytewrite}}  :    
                      io_EXLS_func3 == 3'b001    ?   {4{halfwrite}}  :
                      io_EXLS_func3 ==  3'b010  ?    {2{wordwrite}}  : io_EXLS_writedata;
//                      io_EXLS_func3 ==  3'b011  ?    io_EXLS_writedata :  ;
    assign io_w_data   = (storedouble && reglen == 1) ? {2{finalwritedata[63:32]}} : {2{finalwritedata[31:0]}} ;
    //assign io_w_data   =  (storedouble && reglen == 1) ? {{32{1'b0}},io_EXLS_writedata[63:32]} : {{32{1'b0}},io_EXLS_writedata[31:0]} ;
	//wire [2:0] waddrmod = io_aw_addr[2:0] ;
	//wire [7:0] realstrb = waddrmod == 3'b001; 
    assign io_w_strb   = (storedouble && reglen == 1) ? {io_EXLS_wmask[7:4],4'h0} : {4'h0,io_EXLS_wmask[3:0]}; 
    //assign io_w_strb   = (storedouble && reglen == 1) ? {{4{1'b0}},io_EXLS_wmask[7:4]} : {4'h0,io_EXLS_wmask[3:0]}; 
    assign io_w_last   = 1'b1;
    assign io_b_ready  = Wstate == sresp ; 
	wire DeviceWriteNotBusy = (Wstate == swaitW &&(!io_aw_valid)) ||(Wstate==sresp &&(io_b_valid)&&(!(storedouble && (reglen == 0))));
    wire DeviceWriteBusy = !DeviceWriteNotBusy;//(Wstate == swaitW &&io_aw_valid)||(Wstate==swaitreadyW)||(Wstate ==swrite)||(Wstate == sresp && ((storedouble && (reglen == 0))));

    //写状态地址连线 // 这里还没有考虑CLint
   
    wire [`ysyx_22050550_RegBus] LsuData   = io_Cache_dataok?cachedata:io_r_ready&&io_r_valid?Devicedata:64'h0;

    /****************Cache 通信读写内存*******************/
    localparam Cachewait= 2'd0, CacheBusy = 2'd1;
    reg [1:0] Cache , Cachenext;
    always@(posedge clock)begin
        if(reset)  Cache <= Cachewait;
        else  Cache <= Cachenext;
    end
    always@(*)begin
        case (Cache)
            Cachewait: begin
                if (io_Cache_valid)begin
                    Cachenext = CacheBusy;
                end
                else Cachenext = Cachewait;
            end 
            CacheBusy : begin
                if (io_Cache_dataok) begin
                    Cachenext = Cachewait;
                end
                else Cachenext = CacheBusy;
            end
            default: Cachenext = Cachewait;
        endcase
    end
    //Cache逻辑连线
    //注意cachedataok那个周期  这里的valid不能拉高， 
    /*
        因为dataok那个周期 是lookup的后一个周期，lookup那个周期 读数据是拿不出来的
        如果lookuph后又跳转回idle，会因为这边的valid又进行状态跳转。
    */
    assign io_Cache_valid = Pmem&&(io_EXLS_rflag||io_EXLS_wflag) && !(io_Cache_dataok)    ; 
    assign io_Cache_op    = io_EXLS_wflag & (!io_EXLS_rflag)        ;
    assign io_Cache_addr  = io_EXLS_alures                          ;  
    assign io_Cache_wdata = io_EXLS_writedata                       ;  
    assign io_Cache_wmask = io_EXLS_wmask                           ;  
    wire cachebusy =(io_Cache_busy) || (Cache == Cachewait && io_Cache_valid) || (Cache==CacheBusy && (!(io_Cache_dataok)));
    wire lsubusy = DeviceReadBusy || DeviceWriteBusy || cachebusy   ;
    wire lsuvalid = !lsubusy                                        ;
    wire [`ysyx_22050550_RegBus] cachedata = io_Cache_data          ; 


    
    wire [`ysyx_22050550_RegBus] maskData ;
    assign maskData = io_EXLS_func3 ==`ysyx_22050550_LB  ? {{(56){LsuData[7]}},LsuData[7:0]}  :    
                      io_EXLS_func3 ==`ysyx_22050550_LH  ? {{(48){LsuData[15]}},LsuData[15:0]}:
                      io_EXLS_func3 ==`ysyx_22050550_LW  ? {{(32){LsuData[31]}},LsuData[31:0]}:
                      io_EXLS_func3 ==`ysyx_22050550_LD  ? LsuData                            :      
                      io_EXLS_func3 ==`ysyx_22050550_LWU ? {{(32){1'b0}},LsuData[31:0]}       :      
                      io_EXLS_func3 ==`ysyx_22050550_LHU ? {{(48){1'b0}},LsuData[15:0]}       :       
                      io_EXLS_func3 ==`ysyx_22050550_LBU ? {{(56){1'b0}},LsuData[7:0]}:   LsuData; 
    
    assign io_LSWB_pc       =      io_EXLS_pc                         ;
    assign io_LSWB_inst     =      io_EXLS_inst                       ;
    /*************valid-ready握手信号****************/      
    assign io_LSWB_valid    =      io_EXLS_valid    && lsuvalid &&!io_EXLS_flush ;
    assign io_ReadyEX_ready =      io_ReadyWB_ready && (!lsubusy)     ;

    //assign io_LSWB_rs1      =      io_EXLS_rs1addr                    ;
  //  assign io_LSWB_abort    =      io_EXLS_abort                      ;
    //这个是为了记录写内存或设备的写数据  以便更好地进行difftest;
    //assign io_LSWB_rs2      =       io_EXLS_rs2                       ;
    assign io_LSWB_wdaddr   =      io_EXLS_waddr                      ;
    assign io_LSWB_wen      =      io_EXLS_wen                        ;
    assign io_LSWB_csrflag  =      io_EXLS_csrflag                    ;
    assign io_LSWB_readflag =      io_EXLS_rflag                      ;
    //assign io_LSWB_jalrflag =      io_EXLS_jalrflag                   ;
    assign io_LSWB_ecallflag=      io_EXLS_ecallflag                  ;
    assign io_LSWB_mretflag =      io_EXLS_mretflag                   ;
  //  assign io_LSWB_ebreak   =      io_EXLS_ebreak                     ;
    //assign io_LSWB_SkipRef  =      (io_EXLS_wflag||io_EXLS_rflag) &&(!Pmem)&&(!Clint);//读写内存并且非pmem地址
    assign io_LSWB_func3    =      io_EXLS_func3                      ;
    //assign io_LSWB_func7    =      io_EXLS_func7                      ;
   // assign io_LSWB_NextPc   =      io_EXLS_NextPc                     ;
    assign io_LSWB_alures   =      io_EXLS_alures                     ;
    assign io_LSWB_lsures   =      Clint? rdata : maskData					    ; 
	assign io_LSWB_flush    =	   io_EXLS_flush						;
	//CLINT  
	assign ren				=		io_EXLS_rflag						;
	assign wen				=		io_EXLS_wflag						;
	assign raddr			=		io_EXLS_alures						;
	assign waddr			=		io_EXLS_alures						;
	assign wdata			=		io_EXLS_rs2							;
    
    
`ifdef ysyx_22050550_LSUDEBUG
    
    always@(posedge clock) begin
        //io_EXLS_alures io_idex_pc == `ysyx_22050550_DEBUGPC 
        if (io_EXLS_alures == 64'h80290100) begin
            $display("pc:%x inst:%x ",io_EXLS_pc,io_EXLS_inst);
            $display("rs2:%d",io_EXLS_inst[24:20]);
            $display("VGA data:%x x:%d y:%d",io_EXLS_writedata,(io_EXLS_alures-64'ha1000000)%64'd400,(io_EXLS_alures-64'ha1000000)/64'd400);
        end
    end
`endif
endmodule

module ysyx_22050550_MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_22050550_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule
module ysyx_22050550_MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_22050550_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule

//部分数组型的寄存器使用模板的话会极大的降低仿真效率，打开这个开关使用不用模板实现的寄存器
//`define ysyx_22050550_FAST
//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_CACHE(
    input         clock                         ,
                  reset                         ,
    
    /***********AxiSram***********/
    input  [0:0]  io_ar_ready               ,
    output [0:0]  io_ar_valid               ,    
    output [63:0] io_ar_addr                ,
    output [7:0]  io_ar_len                 ,
    output [2:0]  io_ar_size                ,    
    output [1:0]  io_ar_burst               , 
    input  [0:0]  io_r_valid                ,
    input  [0:0]  io_r_last                 ,
	input  [1:0]  io_r_rresp				, // read resp  , same channel with rData 
    input  [63:0] io_r_rdata                ,
    output [0:0]  io_r_ready                ,
    input  [0:0]  io_aw_ready               ,
    output [0:0]  io_aw_valid               , 
    output [63:0] io_aw_addr                ,
    output [7:0]  io_aw_len                 ,
    output [2:0]  io_aw_size                , 
    output [1:0]  io_aw_burst               ,
    input  [0:0]  io_w_ready                , 
    output [0:0]  io_w_valid                ,
    output [63:0] io_w_data                 ,
    output [7:0]  io_w_strb                 ,
    output [0:0]  io_w_last                 ,
    output [0:0]  io_b_ready                , // write resp , bresp channel 
    input  [0:0]  io_b_valid                ,
	input  [1:0]  io_b_bresp				,
    
    /***********Cache***********/
   // input  [63:0] pc                        ,
    input  [0:0]  io_Cache_valid            ,
    input  [0:0]  io_Cache_op               ,
    input  [63:0] io_Cache_addr             ,
    input  [63:0] io_Cache_wdata            ,
    input  [7:0]  io_Cache_wmask            ,
    output [63:0] io_Cache_data             ,
    output        io_Cache_dataok           ,
	output		  io_Cache_busy				,
    /*********DataArray·的Sram 例化在顶层 这里内部只保留tagarray********/
    /*********暂时先实现在内部 **********/                   
	output [5:0]	io_sram_addr		,
    output			io_sram_cen		,
    output			io_sram_wen		,
    output [127:0]	io_sram_wmask		,
    output [127:0]	io_sram_wdata		,
    input [127:0]	io_sram_rdata		,
 

	/*************CACHE冲刷信号，用来冲刷掉CACHE的状态机*****************/
//	input		CacheFlush					,
	input		io_fence					,
	input		io_wbu_flush				,
	output		io_fencei					
	/****************访存异常信号，给WBU，进行一次异常处理***************/
//	output		ls_interrupt					

);
	wire wrbusy = next != idle ;
	wire fencebusy = fnext != fenceidle; 
	assign io_Cache_busy  = wrbusy || fencebusy ;
	assign DataRead		 = io_sram_rdata ; 
	assign io_sram_addr  = useaddr		;
	assign io_sram_cen   = DataCen		;
	assign io_sram_wen   = DataWen		;
	assign io_sram_wmask = DataBen		;
	assign io_sram_wdata = DataWrite	;
    wire [5:0]      useaddr;
    wire [127:0]    DataRead;
    wire DataWen;
    wire [127:0] DataBen  ;
    wire [127:0] DataWrite;
    wire DataCen;

   // ysyx_22050550_S011HD1P_X32Y2D128_BW Data_Array(
   //     .Q(DataRead), .CLK(clock), .CEN(DataCen),
   //     .WEN(DataWen), .BWEN(DataBen), .A(useaddr), .D(DataWrite)
   // );
    //Tag array  16组 每组4路   一共64行
    /**** Tag例化4块，同时对一组内每一路读出Tag*****/
    //不要Last那个周期写，进入refill了 valid了就写，这样子下个周期就能读Tag，下下个周期进入lookup就能拿到tag的数据
	wire [`ysyx_22050550_TagBus] Tag[3:0];
    wire Tag0Wen = ( REFILL && io_r_valid && chooseway==2'd0) ;
    wire [`ysyx_22050550_TagBus] Tag0Data = AddrTag; //写数据
    reg [`ysyx_22050550_TagWidth-1:0] Tag0 [0:`ysyx_22050550_GroupNum-1];
    assign Tag[0] = Tag0[AddrGroup];
    wire Tag0en[0:`ysyx_22050550_GroupNum-1];
    generate
        for (genvar i = 0; i < `ysyx_22050550_GroupNum; i = i+1) begin 
            assign Tag0en[i] = Tag0Wen & (AddrGroup == i);
            ysyx_22050550_Reg # (`ysyx_22050550_TagWidth,`ysyx_22050550_TagWidth'd0)
                Treg0 (.clock(clock),.reset(reset),.wen(Tag0en[i]),
                .din(Tag0Data),.dout(Tag0[i]));
        end
    endgenerate
    wire Tag1Wen = ( REFILL && io_r_valid && chooseway==2'd1);
    wire [`ysyx_22050550_TagBus] Tag1Data = AddrTag; //写数据
    reg [`ysyx_22050550_TagWidth-1:0] Tag1 [0:`ysyx_22050550_GroupNum-1];
    assign Tag[1] = Tag1[AddrGroup];
    wire Tag1en[0:`ysyx_22050550_GroupNum-1];
    generate
        for (genvar i = 0; i < `ysyx_22050550_GroupNum; i = i+1) begin  
            assign Tag1en[i] = Tag1Wen & (AddrGroup == i);
            ysyx_22050550_Reg # (`ysyx_22050550_TagWidth,`ysyx_22050550_TagWidth'd0)
                Treg1 (.clock(clock),.reset(reset),.wen(Tag1en[i]),
                .din(Tag1Data),.dout(Tag1[i]));
        end
    endgenerate
    wire Tag2Wen = (  REFILL && io_r_valid && chooseway==2'd2);
    wire [`ysyx_22050550_TagBus] Tag2Data = AddrTag; //写数据
    reg [`ysyx_22050550_TagWidth-1:0] Tag2 [0:`ysyx_22050550_GroupNum-1];
    assign Tag[2] = Tag2[AddrGroup];
    wire Tag2en[0:`ysyx_22050550_GroupNum-1];
    generate
        for (genvar i = 0; i < `ysyx_22050550_GroupNum; i = i+1) begin  
            assign Tag2en[i] = Tag2Wen & (AddrGroup == i);
            ysyx_22050550_Reg # (`ysyx_22050550_TagWidth,`ysyx_22050550_TagWidth'd0)
                Treg2 (.clock(clock),.reset(reset),.wen(Tag2en[i]),
                .din(Tag2Data),.dout(Tag2[i]));
        end
    endgenerate
    wire Tag3Wen = (  REFILL && io_r_valid && chooseway==2'd3);
    wire [`ysyx_22050550_TagBus] Tag3Data = AddrTag; //写数据
    reg [`ysyx_22050550_TagWidth-1:0] Tag3 [0:`ysyx_22050550_GroupNum-1];
    assign Tag[3] = Tag3[AddrGroup];
    wire Tag3en[0:`ysyx_22050550_GroupNum-1];
    generate
        for (genvar i = 0; i < `ysyx_22050550_GroupNum; i = i+1) begin  
            assign Tag3en[i] = Tag3Wen & (AddrGroup == i);
            ysyx_22050550_Reg # (`ysyx_22050550_TagWidth,`ysyx_22050550_TagWidth'd0)
                Treg2 (.clock(clock),.reset(reset),.wen(Tag3en[i]),
                .din(Tag3Data),.dout(Tag3[i]));
        end
    endgenerate
    
    //reg [`ysyx_22050550_TagBus] tag [63 : 0];
    //valid dirty
    reg  valid [63:0];
    reg  dirty [63:0];
    
    wire validWriteEn ;
    wire validWriteData;
    
    wire dirtyWriteEn ;
    wire dirtyWriteData;
    wire [63:0] validen ;
    wire [63:0] dirtyen ;
    generate
        for (genvar i = 0; i < 64; i = i+1) begin : valid_dirty
            assign validen[i] = validWriteEn & (useaddr == i);
            ysyx_22050550_Reg # (1,1'd0) regvalid (
                .clock(clock),.reset(reset),.wen(validen[i]),.din(validWriteData),
                .dout(valid[i]));
            assign dirtyen[i] = dirtyWriteEn & (useaddr == i);
            ysyx_22050550_Reg # (1,1'd0) regdirty (
                .clock(clock),.reset(reset),.wen(dirtyen[i]),.din(dirtyWriteData),
                .dout(dirty[i]));
        end
    endgenerate
    wire [3:0] hit   ;
	reg [31:0] RegCacheAddr; 
	always @(posedge clock) begin 
		if (reset) RegCacheAddr <= 0 ;
		else if(io_Cache_valid) RegCacheAddr <= io_Cache_addr[31:0] ; 
	end 
	wire[31:0]  true_cache_addr = io_Cache_valid ? io_Cache_addr[31:0] : RegCacheAddr ; 
    //wire [`ysyx_22050550_AddrWidth-1:0] AddrTagshift =(io_Cache_addr >> (`ysyx_22050550_GroupWidth+`ysyx_22050550_BlockWidth));
    //wire [`ysyx_22050550_TagBus] AddrTag = AddrTagshift[`ysyx_22050550_TagBus];
    //移位的操作好像也会降低性能，能够不移位的地方就换成位拼接
    wire [`ysyx_22050550_TagBus]  AddrTag    = true_cache_addr[31:`ysyx_22050550_GroupWidth+`ysyx_22050550_BlockWidth];// : Cache_addr[31:8];
    wire [`ysyx_22050550_BlockBus]AddrBlock  = true_cache_addr[`ysyx_22050550_BlockBus];// : Cache_addr[3:0];
    //wire [`ysyx_22050550_AddrWidth-1:0]AddrGroupshift = (io_Cache_addr >> (`ysyx_22050550_BlockWidth));
    //wire [`ysyx_22050550_GroupBus] AddrGroup = AddrGroupshift[`ysyx_22050550_GroupBus];
    wire [`ysyx_22050550_GroupBus] AddrGroup = true_cache_addr[7:`ysyx_22050550_BlockWidth];// : Cache_addr[7:4];
    wire [`ysyx_22050550_RegBus] DataOut;
    //根据块内地址确定输出的   默认32位对齐
    //实际情况是存在非对齐的访问，这里不用MUX来写了，直接通过移位解决。
    wire [3+`ysyx_22050550_BlockWidth-1:0] addrblockshift = {AddrBlock,{3'b0}} ;
    wire [127:0] DataReadshift = (DataRead >> addrblockshift);
    assign DataOut = DataReadshift[63:0];
    /*
        根据组号定位属于哪一组 然后在组内的每一路来比较tag看是否命中
        第i组第j路在tag内的行地址为i*4+j =>  {i,j}  这样子就没有乘法了
    */
    //generate
       // for (genvar i = 2'd0; i < 4; i = i+1'd1) begin : regfile
       //     wire [5:0]groupaddr = {AddrGroup,i};//(AddrGroup <<2) | i;
       //     assign hit[i] = (AddrTag == tag[groupaddr]) && valid[groupaddr];
      //  end
    //endgenerate
    wire [5:0]groupaddr1 = {AddrGroup,2'd0};
    //assign hit[0] = (AddrTag == Tag[0]) && valid[groupaddr1];
    wire [5:0]groupaddr2 = {AddrGroup,2'd1};
    //assign hit[1] = (AddrTag == Tag[1]) && valid[groupaddr2];
    wire [5:0]groupaddr3 = {AddrGroup,2'd2};
    //assign hit[2] = (AddrTag == Tag[2]) && valid[groupaddr3];
    wire [5:0]groupaddr4 = {AddrGroup,2'd3};
    //assign hit[3] = (AddrTag == Tag[3]) && valid[groupaddr4];
    assign hit = {
        (AddrTag == Tag[3]) && valid[groupaddr4],
        (AddrTag == Tag[2]) && valid[groupaddr3],
        (AddrTag == Tag[1]) && valid[groupaddr2],
        (AddrTag == Tag[0]) && valid[groupaddr1]
    };
    wire cachehit = |hit;//hit[3] | hit[2] | hit[1] | hit[0];
    //wire hit = cachehit;
    wire [1:0] hitway = hit[3]? 2'd3:  hit[2]? 2'd2 :hit[1]? 2'd1 :hit[0]? 2'd0 : 2'd0;
    wire [5:0] hitaddr = {AddrGroup,hitway};//(AddrGroup <<2) | hitway;
    //lfsr 用于随机选取某一路
    wire [1:0] random;
`ifdef ysyx_22050550_CacheUseLFSR
    reg [15:0] lfsr;
    /*	
    ysyx_22050550_Reg # (16,16'd1) reglfsr (
        .clock(clock)                   ,
        .reset(reset)                   ,
        .wen(1'b1)      ,
        .din({lfsr[0] ^ lfsr[2] ^ lfsr[3] ^ lfsr[5], lfsr[15:1]})               ,
        .dout(lfsr)
    );
    */
    
    always @(posedge clock) begin
        if (reset)
          lfsr <= 16'b1;	
        else
          lfsr <= {lfsr[0] ^ lfsr[2] ^ lfsr[3] ^ lfsr[5], lfsr[15:1]};	
    end 
    assign random = lfsr[1:0];
`else 
    assign random = {$random}%4;
`endif 
    //用来记录保存选中路数的寄存器 在进入miss的前一个周期保存
    wire saveen;
    //
    ysyx_22050550_Reg # (2,2'd0) regvalid (
                .clock(clock),.reset(reset),.wen(saveen),.din(random),
                .dout(chooseway));
    wire [1:0] chooseway ;
         
    
    wire [5:0] chooseaddr = {AddrGroup,chooseway};//(AddrGroup <<2) | chooseway;
    wire axivalid ;//有效且脏的情况下向总线申请 把cache内容写回内存 
	//fence  相关寄存器  
	reg fencei;
	// 受到io_fence时写入   当完成遍历时，拉低 
	wire fenceen = io_fence ||(fstate == fencevalid && fnext == fenceidle );
	wire fencein = io_fence ;
    ysyx_22050550_Reg # (1,1'd0) regfence(
        .clock(clock),
        .reset(reset),
        .wen(fenceen),
        .din(fencein),
        .dout(fencei)
    );
	//wire FENCE = state == fence ;
	wire realfence = io_fence || fencei  ;
	assign io_fencei  = realfence ;
	reg [5:0] fencecnt ;//cacheline 的计数器 用来遍历每一行 决定当前行是否写回
	wire fencecnten ;
	//进入valid态的时候， fencecnt 置0  
	//当在valid态并且当前行不脏的时候，fencecnt +1 
	//
	assign fencecnten = (fstate == fenceidle  && realfence && io_wbu_flush &&IDLE) 
					||  (fstate == fencevalid && !io_aw_valid  ); 
	wire [5:0] fencecntin; 
	assign fencecntin =  (fstate == fenceidle  && realfence && io_wbu_flush &&IDLE) ? 0
						: (fstate == fencevalid && !io_aw_valid  ) ? fencecnt + 6'd1 : fencecnt ;
	ysyx_22050550_Reg # (6,6'd0) regfencecnt(
        .clock(clock),
        .reset(reset),
        .wen(fencecnten),
        .din(fencecntin),
        .dout(fencecnt) 
    );
	wire [5:0] fenceaddr = fencecnt; 
	//fence 相关的状态机  用来进行dirtycacheline的写回 
	//只有当主状态机回到idle之后，这边的状态机才会启动
	//应该是idu收到fence指令后，立刻发送流水线冲刷信号 
	//直到wbu收到冲刷信号，表明流水线冲刷完成，此时开始执行fencei指令，并且取
	//指级的取指也要暂停，直到fencei指令执行完毕,这样子就保证了 fencei之前的指
	//令都全部执行完成
	localparam fenceidle=2'd0,fencevalid=2'd1 ,fencedirty=2'd2,fenceresp=2'd3;
	reg [1:0] fstate , fnext ;
	always@(posedge clock) begin 
		if (reset) fstate <= fenceidle;
		else fstate <= fnext ;
	end 

	always @(*) begin 
		case (fstate)  
			fenceidle : begin 
				if(realfence && io_wbu_flush &&IDLE ) begin 
					//   保证冲刷的信号是由fencei指令引起的  
					fnext = fencevalid ;
				end 
				else fnext = fenceidle ;
			end 
			fencevalid : begin 
				//计数器开始遍历所有的行   如果当前的行不是脏的话，就单纯的将
				//valid 给置0 否则就 进行写回操作，将脏的行写回   
				if(io_aw_valid && io_aw_ready) begin 
					fnext = fencedirty ;
				end 
				else if (io_aw_valid) begin 
					fnext = fencevalid ;
				end 
				else if (fencecnt == 6'd63) begin 
					fnext = fenceidle ;
				end 
				else fnext = fencevalid ;
			end
			fencedirty : begin 
				if(io_w_valid && io_w_ready )begin 
					if (io_w_last) begin 
						fnext = fenceresp ;
					end 
					else fnext = fencedirty ;
				end 
				else fnext = fencedirty ;
			end 
			fenceresp : begin 
				if(io_b_valid && io_b_ready) begin 
					if(io_b_bresp == 2'b00) begin 
						fnext = fencevalid ;
					end 
					else fnext = fencevalid ;
				end 
				else fnext = fenceresp;
			end 
			default : fnext = fenceidle ; 
		endcase 
	end 
				
    //cache 状态机 idle :: lookup :: miss :: replace :: refill 
    localparam idle = 3'd0, lookup = 3'd1, miss = 3'd2, replace = 3'd3,refill = 3'd4;
	localparam wresp = 3'd5 ;// fence = 3'd6 ; //another state to handle bresp 
	//添加fence.i指令的实现     
	//将cache 内的dirty line 给全部写回 ，然后将多有的cacheline 给置无效。。
	//cache  内置一个寄存器  ，只有在idle 或者能跳回idle的态，才能跳转到fencei
	//态。这样子就保证了执行fencei之前，其他的指令都已经执行完成，并且保证了,
	//并且跳转到fencei 之后，以及fencei信号发送过来的时候，流水线都要发送冲刷
	//信号 这样子性能虽然会有损失，但是因该可以比较简单的实现  
    reg [2:0] state ;
    reg [2:0] next  ;
    //状态跳转 省掉一些状态的跳转，这样子性能又能快一些了。
    always@(posedge clock) begin
        if(reset) state <= idle;
        else state <= next;
 
    end
    
    always@(*) begin
        case (state)
            idle:begin 
				if(io_Cache_valid && fnext == fenceidle)  begin
                    next = lookup;
                end
				//else if (realfence) begin 
				//	next = fence ;
				//end 
                else begin
                    next = idle;
                end
            end 
            lookup:begin
                //命中
				if(cachehit) begin 
                    //读命中 直接读出数据 
                    //写命中 ...
					//if (realfence) begin 
					//	next = fence ;
					//end
					 next = idle;
                end
                else  begin
                    next = miss;
                end
            end
            miss:begin
                //需要写回 向总线申请写回
               if(axivalid) begin
                    if(io_aw_valid && io_aw_ready) begin
                        next = replace;
                    end
                    else begin
                         next = miss;
                    end
                end
                //不需要写回，向总线申请refill
                else begin
                    if(io_ar_valid && io_ar_ready) begin
                        next = refill;
                    end   
                    else begin
                        next = miss;
                     end
                end 
            end
			wresp : begin 
				if(io_b_valid && io_b_ready) begin 
					if(io_b_bresp == 2'b00) begin // OKAY  
						next = miss;  
					end 
					//else if (realfence) begin 
					//	next = fence ;
					//end 
					//  not OKAY 
					else next = idle ; 
				end 
				else next = wresp; 
			end 
            replace:begin
                //从总线写回cacheline   last => miss
				//last -> wresp ; 
				if (io_w_valid && io_w_ready) begin
                    if(io_w_last) begin
                        next = wresp;
                    end
                    else begin
                        next = replace;   
                    end
                end
                else begin
                    next = replace;
                end
            end 
            refill:begin
                //从RAM读取 last => lookup
				if(io_r_valid && io_r_ready)begin
                    if (io_r_last) begin
						if(Reglen == 2'd3)
							next = lookup;
						else next = miss; 
                    end
                    else begin
                        next = refill;
                    end
                end
                else begin
                    next = refill;
                end
            end 
            default:next = idle; 
        endcase
    end 
    // 添加了Cache的异常处理，整理一下要做的事，  读写异常的 
	// 都是将对应的行标记为无效。
    /*
        根据不同的状态对总线 以及Mem申请读或者写 整理一下每个状态下做的事情
        注意Tag和Mem的数据都是延迟一周期才能拿到
        Tag使用寄存器的时候当周期即拿到了hitaddr
        idle:  
            cache valid的情况下 向Tag申请读
    */
    wire IDLE = state == idle; // Tag一直在读 不用管 
    //data addr mux
    assign useaddr = fstate!=fenceidle ? fenceaddr : IDLE||LOOKUP ? hitaddr : chooseaddr;
    /*
        lookup 
            Hit 
                读操作 向Mem申请读HITWAY的数据 dataok延迟一周期拉高
                写操作 向hitway写 并且dirty使能拉高
            !hit 
                要跳转miss了 这个周期chooseway的random拉高 保存随即选择的路
    */
    wire LOOKUP = state == lookup;
    //读
    //写也是一样的 cachehit了就行

    //hit 情况下的写入
    //data write mux 
    //需要考虑非对齐的情况 ，不用Mux了
    wire [127:0] CacheWdata = {{64{1'b0}},io_Cache_wdata};
    wire [127:0] CacheWdatashift = CacheWdata << addrblockshift;
    wire [127:0] hitDataWrite = CacheWdatashift;
    //data write ben mux  //低有效
    wire [127:0] low8mask  = 128'hff        ; wire [127:0] low16mask = 128'hffff                ; 
    wire [127:0] low32mask = 128'hffff_ffff ; wire [127:0] low64mask = 128'hffff_ffff_ffff_ffff ;
    
    wire [127:0] hitDataBen;
    assign hitDataBen = 
    io_Cache_wmask == {8'b1}  ? ~(low8mask << addrblockshift):
    io_Cache_wmask == {8'b11} ? ~(low16mask<< addrblockshift):
    io_Cache_wmask == {8'hf}  ? ~(low32mask<< addrblockshift):
    io_Cache_wmask == {8'hff} ? ~(low64mask<< addrblockshift):~128'b0;
    
        //dirty只在两种情况下写 一个是lookup命中了 写脏  一个是replace完成
    //dirty write   data en mux  en 高有效
    assign dirtyWriteEn = (LOOKUP & cachehit & io_Cache_op) ||  
                          (REPLACE& io_w_valid & io_w_last &(Reglen == 2'd3)) || 
						  (fstate==fencedirty &io_w_valid & io_w_last&(Reglen == 2'd3)) ; 
    
    assign dirtyWriteData = (LOOKUP& cachehit & io_Cache_op); 
    //如果Tag使用寄存器  idle那个周期useaddr就发过去了，hit的话，lookup当周期就能拿到数据
    //所以dataok不用延迟一周期。 但如果是从refill跳回lookup 回到lookup当周期才申请读，此时dataok还是要延迟的
    //Ram那边改了，支持同时读写 CACHE仍然使用寄存器，这样子仿真可以更快
    wire dataokin = LOOKUP && cachehit;
	wire Cache_DataOk ;
    ysyx_22050550_Reg # (1,1'd0) dataok (
                .clock(clock),.reset(reset),.wen(1'b1),.din(dataokin),
                .dout(Cache_DataOk));
    assign io_Cache_data = DataOut;
	assign io_Cache_dataok = Cache_DataOk ;//&& !(realflush);
    assign saveen = LOOKUP && !cachehit;
    reg [1:0] Reglen ;
    always @ (posedge clock) begin
        if (reset) begin
            Reglen <=2'b00;
        end
        //else if((io_aw_valid && io_aw_ready) || (io_ar_valid && io_ar_ready))  begin
        //    Reglen <= 1'b1;
        //end
        else if((io_w_valid && io_w_ready))  begin 
            if(io_w_last )  Reglen <= Reglen + 2'b1;
            //else                        Reglen <=  Reglen - 1'b1;
        end
		else if ((io_r_valid && io_r_ready)) begin 
			if (io_r_last) Reglen <= Reglen + 2'b1 ; 
		end 
    end
    wire MISS = state == miss;
    assign axivalid    = valid[useaddr] && dirty[useaddr];
    assign io_aw_valid =  (MISS & axivalid) || (fstate==fencevalid && axivalid)  ;
    assign io_aw_len   = 0;
    assign io_aw_size  = 2;
    assign io_aw_burst = 2'b00;
    //要根据当前选中的Tag获取其在主存的块号确定回传的地址 低位舍掉 
	wire [`ysyx_22050550_TagBus] fenceTag = fenceaddr[1:0] == 2'd0 ? Tag0[fenceaddr[5:2]] : 
											fenceaddr[1:0] == 2'd1 ? Tag1[fenceaddr[5:2]] :
											fenceaddr[1:0] == 2'd2 ? Tag2[fenceaddr[5:2]] :
											fenceaddr[1:0] == 2'd3 ? Tag3[fenceaddr[5:2]] : 0;
    wire [`ysyx_22050550_RegBus] addr = fstate != fenceidle ? {32'b0,fenceTag,fenceaddr[5:2],4'b0} : {32'b0,Tag[chooseway],AddrGroup,4'b0}; 
    assign io_aw_addr = Reglen==0? addr		: 
						Reglen==1? addr + 4 :
						Reglen==2? addr + 8 : 
						Reglen==3? addr + 12 : addr ;
//	assign io_aw_addr = Reglen[1]? addr+8 : addr; 
						//Reglen==1? addr + 4 :
						//Reglen==2? addr + 8 : 
						//Reglen==3? addr + 12 : addr ;
      


	//不需要写回 不需要写回的时候用
    assign io_ar_valid = MISS & !(axivalid);
    assign io_ar_len   = 0;
    assign io_ar_burst = 2'b00; 
    assign io_ar_size  = 2;
    assign io_ar_addr  = Reglen == 0 ? {32'b0,AddrTag,AddrGroup,4'b0} :  
						 Reglen == 1 ? {32'b0,AddrTag,AddrGroup,4'd4} : 
						 Reglen == 2 ? {32'b0,AddrTag,AddrGroup,4'd8} : 
						 Reglen == 3 ? {32'b0,AddrTag,AddrGroup,4'd12}: {32'b0,AddrTag,AddrGroup,4'b0};
	wire REPLACE = state == replace         ;
    assign io_w_valid   = REPLACE ||(fstate == fencedirty )       ;
    assign io_w_last    = io_w_valid ;//(REPLACE&&Reglen == 0)||(fstate == fencedirty && Reglen == 0) ;
//    assign io_w_data    = Reglen == 0  ? {{32'd0},   DataRead[31:0]  } : 
//						  Reglen ==	1  ? {{32'd0},	 DataRead[63:32] } :
//						  Reglen == 2  ? {{32'd0},   DataRead[95:64] } :
//						  Reglen == 3  ? {{32'd0},   DataRead[127:96]} : 64'b0 ;
//	wire [63:0] w_data_mem = Reglen[1] == 0  ? {   DataRead[63:0]  } : 
//						  Reglen[1] ==	1  ? {  DataRead[63:32]    } :
//						  Reglen == 2  ? {{32'd0},   DataRead[95:64] } :
//						  Reglen == 3  ? { {32'd0} ,DataRead[127:96]} : 64'b0 ;
	
	wire [63:0] w_data_flash = Reglen == 0  ? {{32'd0},   DataRead[31:0]  } : 
						  Reglen ==	1  ? {DataRead[63:32],{32'd0}    } :
						  Reglen == 2  ? {{32'd0},   DataRead[95:64] } :
						  Reglen == 3  ? { DataRead[127:96], {32'd0}} : 64'b0 ;
	assign io_w_data = w_data_flash ;
    assign io_w_strb    = Reglen[0]  ? 8'hf0 : 8'h0f;
    assign io_b_ready   = state == wresp || (fstate == fenceresp ) ;
    /*
        refill :
            r valid 并且ready的时候
                写data 的地址是掩去block的地址加上 (1-Reglen)*8
                写tag
                len = 0 的时候 last拉高 // 这个是外面来的
                同时 valid 拉高 并且 dirty拉低。
        注意一下refill last 拉高那个周期，发送Tag写的信号
        下一个周期如果跳到lookup的话，这个时候是读不出来数据的，因为上个周期在写
        还要下一个周期才能读到，这种情况状态就走了。因此进入refill的那个周期 
        r_valid r_ready了就把tag写入，
    */
    wire REFILL = state == refill;
        //refill情况下的写入
    wire[127:0] refilldata =Reglen == 0 ? {{96{1'b0}} ,io_r_rdata[31:0]} :
							Reglen == 1 ? {{64{1'b0}} ,io_r_rdata[31:0],{32{1'b0}}} :
							Reglen == 2 ? {{32{1'b0}} ,io_r_rdata[31:0],{64{1'b0}}} :
							Reglen == 3 ? {io_r_rdata[31:0],{96{1'b0}}} :0 ;
    wire[127:0] refillben  = Reglen == 0 ? {{32{1'b1}},{32{1'b1}},{32{1'b1}},{32{1'b0}}} : 
							 Reglen == 1 ? {{32{1'b1}},{32{1'b1}},{32{1'b0}},{32{1'b1}}} :
							 Reglen == 2 ? {{32{1'b1}},{32{1'b0}},{32{1'b1}},{32{1'b1}}} :	
							 Reglen == 3 ? {{32{1'b0}},{32{1'b1}},{32{1'b1}},{32{1'b1}}} : {128{1'b1}} ; 
                         //:REPLACE ? !(io_w_valid & io_w_last): 0;
   
   
    assign validWriteEn = (REFILL && io_r_last& io_r_valid && (Reglen == 3)) ||(fstate ==fencevalid && !io_aw_valid );
    assign validWriteData = REFILL && io_r_last & io_r_valid && (Reglen == 3) ;//&&(!realflush);
    assign io_r_ready = REFILL;
    //向tag和mem写  valid 拉高 dirty 拉低
    //只有这样个状态需要向mem写入   写入都是低位有效
    //Tag的写使能已经在tag初始化的时候处理了
    //Data 只有这两种情况需要写入
    assign DataWen = !((REFILL&&(io_r_valid))||(LOOKUP && cachehit && io_Cache_op));
    assign DataWrite = (LOOKUP && cachehit && io_Cache_op)? hitDataWrite : (REFILL&&(io_r_valid)) ? refilldata :0;
    assign DataBen   = (LOOKUP && cachehit && io_Cache_op)? hitDataBen   : (REFILL&&(io_r_valid)) ? refillben  : {128{1'b1}};
    //Data 需要读出的情况有 一：IDLE并且valid 二：refill完成跳转回lookup
    //三向总线写回cacheline miss的时候要跳replace 或者在replace并且不会跳miss
    //这样子该后可以在部分周期内省掉对寄存器的操作，仿真更快
    assign DataCen = 1'b0;
    //print一些debug信息
	  
`ifdef ysyx_22050550_CACHEDEBUG
    always@(posedge clock) begin
        //pc == `ysyx_22050550_DEBUGPC
    if(1) begin
        if (LOOKUP) begin
            if(cachehit && io_Cache_op) begin
                $display("group:%d hitway:%d hitwrite addr: %x  data: %x",AddrGroup,hitway,io_Cache_addr,hitDataWrite);
            end
        end
        else if (REFILL) begin
            $display("refill group%d chooseway%d refilladdr: %x dara %x",AddrGroup,chooseway,io_Cache_addr,refilldata);
        end
    end
    end
`endif 
endmodule 


//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_TagAaaryMem(
    Q, CLK, CEN, WEN, BWEN, A, D
);
parameter Bits =`ysyx_22050550_TagWidth;
parameter Word_Depth = `ysyx_22050550_GroupNum;
parameter Add_Width = `ysyx_22050550_GroupWidth;
parameter Wen_Width = `ysyx_22050550_TagWidth;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Bits-1:0]      D;

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [Wen_Width-1:0] bwen = ~BWEN;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    Q <= cen && !wen ? ram[A] : (D & bwen) | {24'b0};

end

endmodule
//`include "./vsrc/ysyx_22050550_define.v"
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
    //output [63:0] Reg10                          ,
	output [63:0] regfilepc						 ,
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
    input         io_valid                       ,    
    //input         addrdataen                     ,
    //input  [63:0] waddr                          ,
    //input  [63:0] wdata                          ,
    output [63:0] io_IDU_rdata1                  ,
    output [63:0] io_IDU_rdata2                  
);
    //
    reg  [`ysyx_22050550_RegBus] regs [38 : 0] ;//32+pc+6 = 39  + 2
    //wire   [31:1] regwen  ;
    assign regs[0] = 64'd0;
    wire   [31:1] regwen  ;
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
        .wen(io_valid),
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
    //waddr
    /*
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Rwaddr (
        .clock(clock),
        .reset(reset),
        .wen(addrdataen),
        .din(waddr),
        .dout(regs[39])
    );
    //wdata
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Rwdata (
        .clock(clock),
        .reset(reset),
        .wen(addrdataen),
        .din(wdata),
        .dout(regs[40])
    );
    */
    //DPI
//    import "DPI-C" function void set_gpr_ptr(input logic [63:0] regs[]);
//    initial set_gpr_ptr(regs);
    
    assign mepc    = regs[33]       ;
    assign mcause  = regs[34]       ;
    assign mtvec   = regs[35]       ;
    assign mstatus = regs[36]       ; 
    assign mie     = regs[37]       ;
    assign mip     = regs[38]       ;
    assign Reg17   = regs[17]       ; 
    //assign Reg10   = regs[10]       ;
	assign regfilepc = regs[32]		;
    assign io_IDU_rdata1 = regs[{{1'b0},io_IDU_raddr1}]   ;
    assign io_IDU_rdata2 = regs[{{1'b0},io_IDU_raddr2}]   ;
endmodule

module ysyx_22050550_Diver (
    input   [0:0]   clock                 ,    
    input   [0:0]   reset                 ,           
    input   [0:0]   io_Exu_DivValid       ,       
    input   [0:0]   io_Exu_Flush          ,       
    input   [0:0]   io_Exu_Divw           ,       
    input   [1:0]   io_Exu_DivSigned      ,       
    input   [63:0]  io_Exu_Divdend        ,       
    input   [63:0]  io_Exu_Divisor        ,       
    output  [0:0]   io_Exu_DivReady       ,       
    output  [0:0]   io_Exu_OutValid       ,       
    output  [63:0]  io_Exu_Quotient       
    //output  [63:0]  io_Exu_Remainder                     
);
    //reg     [127:0] Divend;
    wire    [127:0] Divsor;
    reg     [127:0] DivRes ;
    wire    [63:0]  cmpRes  = !io_Exu_Divw ? DivRes[127:64] :{ {32{DivRes[63]}},DivRes[63:32]};
    wire    [63:0]  cmpDivs = !io_Exu_Divw ? Divsor[127:64] :{ {32{Divsor[63]}},Divsor[63:32]};
    //wire    [63:0]  cmpRes = io_Exu_DivSigned==2'b11 ?$signed(cmpResraw) : cmpResraw;
    //wire    [63:0]  cmpDivs = io_Exu_DivSigned==2'b11 ?$signed(cmpDivsraw) : cmpDivsraw;
    wire    divendsign = io_Exu_Divw ? io_Exu_Divdend[31] : io_Exu_Divdend[63];
    wire    divsorsign = io_Exu_Divw ? io_Exu_Divisor[31] : io_Exu_Divisor[63];
    wire    symbol = divendsign ^ divsorsign;
    wire    [127:0] choosdivend  = (io_Exu_DivSigned==2'b11 && divendsign )? {{64{1'b0}},(~io_Exu_Divdend+1)}: { {64{1'b0}},io_Exu_Divdend};
    wire    [63:0]  choosdivsior = (io_Exu_DivSigned==2'b11 && divsorsign )? (~io_Exu_Divisor+1): io_Exu_Divisor;
    assign  Divsor  = io_Exu_Divw ? {{32{1'b0}},choosdivsior,{32{1'b0}}} :{choosdivsior,{64{1'b0}}};
    reg     [5:0]   divcount ;
    wire    [5:0]   divcountInit = io_Exu_Divw ? 31 : 63;
    localparam Idle = 2'd0, Busy = 2'd1, Valid = 2'd2;
    reg [1:0] state,next;
    always@(posedge clock)begin
        if(reset) begin
            state <= Idle;
        end
        else state <= next;
    end 
    always @(*) begin
        case (state)
            Idle: begin
                if(io_Exu_DivValid) begin
                    next = Busy;
                end
                else next = Idle;
            end 
            Busy: begin
                if(io_Exu_Flush) next = Idle;
                else if(divcount == 0) next = Valid;
                else next = Busy;
            end
            Valid: begin
                next = Idle;
            end
            default: next = Idle;
        endcase
    end
    wire DivResEn = (state == Idle)|| (state == Busy) || (state== Valid) ;

    wire [127:0] DivResIn = (state == Idle && io_Exu_DivValid) ? choosdivend << 1 
                           :(state == Busy && io_Exu_Flush) ? 0 
                           :(state == Busy && divcount==0&&cmpRes >=cmpDivs) ? DivRes- Divsor+1
                           :(state == Busy && divcount==0&&cmpRes < cmpDivs) ? DivRes
                           :(state == Busy && divcount!=0&&cmpRes >=cmpDivs) ? (DivRes- Divsor+1)<<1
                           :(state == Busy && divcount!=0&&cmpRes < cmpDivs) ? DivRes << 1
                           :(state == Valid) ? 0 : DivRes;
    ysyx_22050550_Reg # (128,128'd0)DivResReg(
        .clock(clock),
        .reset(reset),
        .wen(DivResEn),
        .din(DivResIn),
        .dout(DivRes)
    );    
    wire inden =  (state == Idle && io_Exu_DivValid) || (state == Busy);
    wire [5:0] indinput = (state == Idle && io_Exu_DivValid) ? divcountInit 
                        : (state == Busy && divcount!=0) ? divcount - 1 : 0;
    ysyx_22050550_Reg # (6,6'd0)IndReg(
        .clock(clock),
        .reset(reset),
        .wen(inden),
        .din(indinput),
        .dout(divcount)
    );

    assign io_Exu_DivReady = state == Idle;
    assign io_Exu_OutValid = state == Valid;
    wire [63:0] quotient  = io_Exu_Divw ? { {32{1'b0}},DivRes[31:0]}  : DivRes[63:0];
    assign io_Exu_Quotient   = io_Exu_DivSigned == 2'b11 && symbol ? ~quotient+1:quotient;
    //wire [63:0] remainder = io_Exu_Divw ? { {32{1'b0}},DivRes[63:32]} : DivRes[127:64];
    //assign io_Exu_Remainder  = io_Exu_DivSigned == 2'b11 &&divendsign ? ~remainder+1 :remainder;
endmodule
module ysyx_22050550_MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  generate
    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end

endmodule
//`include "./vsrc/ysyx_22050550_define.v"
////`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_Multi.v"
////`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_Diver.v"
module ysyx_22050550_EXU(
    input         clock                     ,
                  reset                     ,
    input  [63:0] io_id_pc                  ,
    input  [31:0] io_id_inst                , 
    input         io_id_valid               ,
   // input  [4:0]  io_id_rs1addr             , 
   // input         io_id_abort               ,
     //             io_id_jalrflag            ,
   input          io_id_csrflag             ,
                  io_id_ecallflag           ,
                  io_id_mretflag            ,
    //              io_id_ebreak              ,
    input  [63:0] io_id_rs2                 ,
  //                io_id_imm                 ,
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
    //input  [6:0]  io_id_func7               ,      
//    input  [63:0] io_id_NextPc              ,
    input         io_ReadyLS_ready          , 
    output [63:0] io_EXLS_pc                ,
                  io_EXLS_rs2               ,
    output [31:0] io_EXLS_inst              ,
    output        io_EXLS_valid             ,
  //  output [4:0]  io_EXLS_rs1               ,
    //output [63:0] io_EXLS_imm               ,
    output [4:0]  io_EXLS_wdaddr            ,
    output        io_EXLS_wen               ,
    output        io_EXLS_csrflag           ,        
  //                 io_EXLS_jalrflag          ,        
                  io_EXLS_ecallflag         ,        
                  io_EXLS_mretflag          ,        
  //                io_EXLS_ebreak            ,   
  //                io_EXLS_abort             ,     
    output [63:0] io_EXLS_alures            ,    
    output        io_EXLS_wflag             ,
                  io_EXLS_rflag             ,
    output [63:0] io_EXLS_writedata         ,
    output [7:0]  io_EXLS_wmask             ,
    output [2:0]  io_EXLS_func3             ,
   //output [6:0]  io_EXLS_func7             ,
    //output [63:0] io_EXLS_NextPc            ,  

    //output  [4:0]  io_EXU_waddr              ,
    //output         io_EXU_valid              ,
    //output [63:0]  io_EXU_rdata              ,  
	input		  io_id_flush			   ,
	output		  io_EXLS_flush				,

    output        io_ReadyID_ready          
);
    /*************ALU****************/
    
    wire  [`ysyx_22050550_RegBus] MulDivRes;
    wire [`ysyx_22050550_RegBus] src1 = io_id_AluOp_rd1;
    wire [`ysyx_22050550_RegBus] src2 = io_id_AluOp_rd2;
    wire [4:0] OP = io_id_AluOp_op;
    //faster
    /*
    reg  [`ysyx_22050550_RegBus] ALURes;
    always@(io_id_AluOp_op) begin
             if(!io_id_valid)              ALURes = 0                                         ;
        else if(OP == `ysyx_22050550_ADD ) ALURes = src1 + src2                               ;
        else if(OP == `ysyx_22050550_SUB ) ALURes = src1 - src2                               ;
        else if(OP == `ysyx_22050550_MUL ) ALURes = MulDivRes                                 ;
        else if(OP == `ysyx_22050550_MULW) ALURes = MulDivRes                                 ;
        else if(OP == `ysyx_22050550_DIV ) ALURes = MulDivRes                                 ;
        else if(OP == `ysyx_22050550_DIVS) ALURes = MulDivRes                                 ;
        else if(OP == `ysyx_22050550_REM ) ALURes = src1 % src2                               ;
        else if(OP == `ysyx_22050550_REMS) ALURes = $signed(src1) % $signed(src2)             ;
        else if(OP == `ysyx_22050550_XOR ) ALURes = src1 ^ src2                               ;
        else if(OP == `ysyx_22050550_OR  ) ALURes = src1 | src2                               ;
        else if(OP == `ysyx_22050550_AND ) ALURes = src1 & src2                               ;
        else if(OP == `ysyx_22050550_SLTU) ALURes = {{63{1'b0}},src1 < src2}                  ;
        else if(OP == `ysyx_22050550_SLT ) ALURes = {{63{1'b0}},$signed(src1) < $signed(src2)};
        else if(OP == `ysyx_22050550_SRA ) ALURes = $signed(src1) >>> src2                    ;
        else if(OP == `ysyx_22050550_SRL ) ALURes = src1 >> src2                              ;
        else if(OP == `ysyx_22050550_SLL ) ALURes = src1 << src2[5:0]                         ;
        else if(OP == `ysyx_22050550_SLLW) ALURes = src1 << src2[4:0]                         ;
        //else                               ALURes = 0                                         ;
    end
    */
    
    wire [`ysyx_22050550_RegBus] ALURes;
    assign ALURes = 
    OP == `ysyx_22050550_ADD  ? src1 + src2                               :
    OP == `ysyx_22050550_SUB  ? src1 - src2                               :
    OP == `ysyx_22050550_MUL  ? MulDivRes                                 :
    OP == `ysyx_22050550_MULW ? MulDivRes                                 :
    OP == `ysyx_22050550_DIV  ? MulDivRes                                 :
    OP == `ysyx_22050550_DIVS ? MulDivRes                                 :
    OP == `ysyx_22050550_REM  ? src1 % src2                               :
    OP == `ysyx_22050550_REMS ? $signed(src1) % $signed(src2)             :
    OP == `ysyx_22050550_XOR  ? src1 ^ src2                               :
    OP == `ysyx_22050550_OR   ? src1 | src2                               :
    OP == `ysyx_22050550_AND  ? src1 & src2                               :
    OP == `ysyx_22050550_SLTU ? {{63{1'b0}},src1 < src2}                  :
    OP == `ysyx_22050550_SLT  ? {{63{1'b0}},$signed(src1) < $signed(src2)}:
    OP == `ysyx_22050550_SRA  ? $signed(src1) >>> src2                    :
    OP == `ysyx_22050550_SRL  ? src1 >> src2                              :
    OP == `ysyx_22050550_SLL  ? src1 << src2[5:0]                         :
    OP == `ysyx_22050550_SLLW ? src1 << src2[4:0]                         :   src1+src2;
    
    /* 
    ysyx_22050550_MuxKeyWithDefault#(17,5,`ysyx_22050550_REGWIDTH) AluMux(
        .out(ALURes),.key(OP),.default_out(src1+src2),.lut({
        `ysyx_22050550_ADD  , src1 + src2                               ,
        `ysyx_22050550_SUB  , src1 - src2                               ,
        `ysyx_22050550_MUL  , MulDivRes                                 ,
        `ysyx_22050550_MULW , MulDivRes                                 ,
        `ysyx_22050550_DIV  , MulDivRes                                 ,
        `ysyx_22050550_DIVS , MulDivRes                                 ,
        `ysyx_22050550_REM  , src1 % src2                               ,
        `ysyx_22050550_REMS , $signed(src1) % $signed(src2)             ,
        `ysyx_22050550_XOR  , src1 ^ src2                               ,
        `ysyx_22050550_OR   , src1 | src2                               ,
        `ysyx_22050550_AND  , src1 & src2                               ,
        `ysyx_22050550_SLTU , {{63{1'b0}},src1 < src2}                  ,
        `ysyx_22050550_SLT  , {{63{1'b0}},$signed(src1) < $signed(src2)},
        `ysyx_22050550_SRA  , $signed(src1) >>> src2                    ,
        `ysyx_22050550_SRL  , src1 >> src2                              ,
        `ysyx_22050550_SLL  , src1 << src2[5:0]                         ,
        `ysyx_22050550_SLLW , src1 << src2[4:0]                         
    }));
    */
    wire [`ysyx_22050550_RegBus] maskres = io_id_alumask ? {{(32){ALURes[31]}},ALURes[31:0]} : ALURes;
    //乘除法模块例化 以及相关信号
    wire mulvalid = (OP == `ysyx_22050550_MUL || OP ==`ysyx_22050550_MULW)&&io_id_valid;
    wire mulw = OP ==`ysyx_22050550_MULW;
    wire divvalid = (OP == `ysyx_22050550_DIV || OP ==`ysyx_22050550_DIVS)&&io_id_valid;
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
        .io_Exu_Multiplicand  (mulvalid?src1:0),
        .io_Exu_Multiplier    (mulvalid?src2:0),
        .io_Exu_MulReady      (mulready),
        .io_Exu_OutValid      (muloutvalid),
        //.io_Exu_ResultH       (),
        .io_Exu_ResultL       (mulres)
    );
    ysyx_22050550_Diver Divder(
        .clock                (clock), 
        .reset                (reset),
        .io_Exu_DivValid      (divvalid),
        .io_Exu_Flush         (1'b0),
        .io_Exu_Divw          (1'b0),
        .io_Exu_DivSigned     (divsigned),
        .io_Exu_Divdend       (divvalid?src1:0),
        .io_Exu_Divisor       (divvalid?src2:0),
        .io_Exu_DivReady      (divready),
        .io_Exu_OutValid      (divoutvalid),
        .io_Exu_Quotient      (divres)
        //.io_Exu_Remainder     ()
    );
    //乘除法部分状态机
    localparam swait = 2'd0, swaitready = 2'd1, sdoing = 2'd2, swaitlsu = 2'd3;
    reg [1:0] state, next;
    reg [`ysyx_22050550_RegBus] RegMulDiv;
    //状态跳转
    /*
    ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)RegMulDivR (
        .clock(clock),
        .reset(reset),
        .wen(1'b1),
        .din(muloutvalid ? mulres : divoutvalid ? divres : RegMulDiv),
        .dout(RegMulDiv)
    );
    */
    //把寄存器的保持信号给删掉也可以极大的提高仿真效率
    always@(posedge clock) begin
        if(reset) state <= swait;
        else if (mulvalid || divvalid) state <= next;
        if(reset) RegMulDiv <= `ysyx_22050550_REGWIDTH'h0;
        else if(muloutvalid) RegMulDiv <= mulres;
        else if(divoutvalid) RegMulDiv <= divres;
        //else RegMulDiv <= RegMulDiv;
        
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
    //faster
    // always@(*) begin
    //     if(!muloutvalid && !divoutvalid) MulDivRes = RegMulDiv;
    //     else if (muloutvalid)            MulDivRes = mulres   ;
    //     else if (divoutvalid)            MulDivRes = divres   ;
    // end
    assign MulDivRes = muloutvalid ? mulres : divoutvalid ? divres : RegMulDiv;

    assign io_EXLS_pc       =      io_id_pc                         ;
    assign io_EXLS_inst     =      io_id_inst                       ;
    /*************valid-ready握手信号****************/      
    assign io_EXLS_valid    =      io_id_valid && aluvalid && !io_id_flush ;
    assign io_ReadyID_ready =      io_ReadyLS_ready && (!alubusy)   ;

   // assign io_EXLS_rs1      =      io_id_rs1addr                    ;
   // assign io_EXLS_abort    =      io_id_abort                      ;
    assign io_EXLS_writedata=      io_id_rs2                        ;
    assign io_EXLS_rs2      =      io_id_rs2                        ;
    assign io_EXLS_wdaddr   =      io_id_waddr                      ;
    assign io_EXLS_wen      =      io_id_wen                        ;
    assign io_EXLS_wflag    =      io_id_wflag                      ;
    assign io_EXLS_rflag    =      io_id_rflag                      ;
    assign io_EXLS_csrflag  =      io_id_csrflag                    ;
  //  assign io_EXLS_jalrflag =      io_id_jalrflag                   ;
    assign io_EXLS_ecallflag=      io_id_ecallflag                  ;
    assign io_EXLS_mretflag =      io_id_mretflag                   ;
   // assign io_EXLS_ebreak   =      io_id_ebreak                     ;
    assign io_EXLS_wmask    =      io_id_wmask                      ;
    assign io_EXLS_func3    =      io_id_func3                      ;

   // assign io_EXLS_NextPc   =      io_id_NextPc                     ;
    assign io_EXLS_alures   =      maskres                          ;

	assign io_EXLS_flush    =	   io_id_flush						;
    //bypass
    //assign io_EXU_waddr = io_EXLS_wdaddr;
    //assign io_EXU_valid = io_EXLS_wen && io_EXLS_valid && !io_id_csrflag && !io_id_rflag;
    //assign io_EXU_rdata = io_EXLS_alures;
`ifdef ysyx_22050550_EXUDEBUG
    reg [31:0] divcount;
    reg [31:0] mulcount;
    always@(posedge clock) begin
        if (io_EXLS_pc == `ysyx_22050550_DEBUGPC) begin
            $display("optype:%d src1:%x src2:%x res:%x",OP,src1,src2,maskres);
        end
        if (reset ) begin
            divcount <= 0;
            mulcount <= 0;
        end 
        if (divoutvalid) begin
            divcount <= divcount + 1;
        end
        if (muloutvalid) begin
            mulcount <= mulcount + 1;
        end
        if(io_EXLS_inst == `ysyx_22050550_INSTWIDTH'h00100073)
            $display("divtimes:%d multimes:%d",divcount,mulcount);
    end
`endif 
endmodule

module ysyx_22050550_S011HD1P_X32Y2D128_BW(
    Q, CLK, CEN, WEN, BWEN, A, D
);
parameter Bits = 128;
parameter Word_Depth = 64;
parameter Add_Width = 6;
parameter Wen_Width = 128;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Bits-1:0]      D;

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [Wen_Width-1:0] bwen = ~BWEN;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    //改一下 支持同时读写这样子仿真快一些

    Q <= cen && !wen ? ram[A] : (D & bwen) | {4{$random}};
end

endmodule
//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_ScoreBoard(
    input         clock                         ,
                  reset                         ,
    /*******************************/
    input         io_IDU_valid                   ,
    input  [4:0]  io_IDU_raddr1                  ,
    input  [4:0]  io_IDU_raddr2                  ,
    input  [4:0]  io_IDU_waddr                   ,
    input         io_IDU_wen                     ,
    output        io_IDU_busy1                   ,
    output        io_IDU_busy2                   ,

    input  [4:0]  io_WBU_waddr                   ,
    input         io_WBU_wen                     
);
    //idu优先，即优先把寄存器busy拉高
    // Idu 申请写的情况下，busy拉高
    //WBU申请写回的情况下，Busy拉低 但是如果此时IDU也是拉高的，那么busy也要拉高 !(Iduwen&&io_IDU_waddr==io_WBU_waddr)
    
    reg  busy [31 : 0] ;//32
    assign busy[0] =1'd0;
    
    wire  [31:1] Iduwen     ;
    wire  [31:1] Wbuwen     ;
    wire  [31:1] busydata   ;
    generate
        for (genvar i = 1; i < 32; i = i+1) begin : regfile
            assign Iduwen[i]    = io_IDU_wen & (io_IDU_waddr == i);
            assign Wbuwen[i]    = io_WBU_wen & (io_WBU_waddr == i);
            assign busydata[i]  = Iduwen[i]?1'd1:1'd0;
            
            ysyx_22050550_Reg # (1,1'd0) regi (
                .clock(clock)                   ,
                .reset(reset)                   ,
                .wen(Iduwen[i]||Wbuwen[i])      ,
                .din(busydata[i])               ,
                .dout(busy[i])
            );
            
        end
    endgenerate
    assign io_IDU_busy1    = busy[io_IDU_raddr1] & io_IDU_valid;
    assign io_IDU_busy2    = busy[io_IDU_raddr2] & io_IDU_valid;
    

endmodule

//`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_IFU(
    //input                                       reset       ,
    //input                                       clock       ,
    input                                       Id_ready    ,
    input                                       Cache_DataOk,
    input           [`ysyx_22050550_RegBus]     Pc          ,
    input           [`ysyx_22050550_RegBus]     Cache_Data  ,
    //to id 
    output          [`ysyx_22050550_RegBus]     pc          ,
    output          [`ysyx_22050550_InstBus]    inst        ,
    output                                      valid       ,
    //to pc 
    output                                      ready       ,
    //to cache
    output                                      Cache_valid ,
    output          [`ysyx_22050550_RegBus]     Cache_addr  ,
	input										io_flush    
);
	//有冲刷信号的时候暂停取指
    assign ready = Cache_DataOk && Id_ready && !io_flush ;	
    assign inst = Cache_DataOk ? Cache_Data[31:0] : 32'h0;	
    assign pc = Pc;
    assign valid = Cache_DataOk && !io_flush ;	
    //这里也是  
    /*  
        cache 那边的发出dataok的那个周期已经是idle了，所以如果这边的valid一直拉高的话
        就会导致那边又进行状态跳转，导致取道错误的指令
    */
    assign Cache_valid = Id_ready & !Cache_DataOk && !io_flush ;	
    assign Cache_addr  = Pc;
endmodule
