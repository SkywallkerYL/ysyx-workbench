`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550(
    input   clock               ,
            reset               ,
    output  io_halt             ,
            io_abort            ,
            io_jalr             ,
            io_instvalid        ,
            io_difftestvalid    ,
            io_SkipRef			,
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
	input      [3:0]io_slave_awid		, 
	input     [31:0]io_slave_awaddr		, 
	input      [7:0]io_slave_awlen		, 
	input      [2:0]io_slave_awsize		, 
	input      [1:0]io_slave_awburst	, 
	output          io_slave_wready		, 
	input           io_slave_wvalid		, 
	input     [63:0]io_slave_wdata		, 
	input      [7:0]io_slave_wstrb		, 
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
wire [63:0] NextPc          ;
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
    .npc        (if_pc) ,
    .NextPc     (NextPc)
);
wire Id_ready;
wire ICache_dataok;
wire [63:0] ICache_Data;
wire ICache_valid;
wire [63:0] ICache_addr ;
ysyx_22050550_IFU IFU(
    .reset       (reset)        ,
    .clock       (clock)        ,
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
wire							if_id_flush = realflush;
reg [`ysyx_22050550_RegBus]     Rif_id_pc;
reg [`ysyx_22050550_InstBus]    Rif_id_inst;
reg                             Rif_id_valid;
reg                             Rif_id_flush;
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regif_id_pc(
    .clock(clock),.reset(reset),.wen(Id_ready),.din(if_id_pc),      .dout(Rif_id_pc     ));
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
wire [ 4:0] idex_rs1addr     ;       
wire [ 0:0] idex_abort       ;       
wire [63:0] idex_rs2         ;       
wire [63:0] idex_imm         ;       
wire [63:0] idex_AluOp_rd1   ;       
wire [63:0] idex_AluOp_rd2   ;       
wire [ 4:0] idex_AluOp_op    ;       
wire [ 4:0] idex_waddr       ;       
wire [ 0:0] idex_wen         ;       
wire [ 0:0] idex_wflag       ;       
wire [ 0:0] idex_rflag       ;       
wire [ 0:0] idex_csrflag     ;       
wire [ 0:0] idex_jalrflag    ;       
wire [ 0:0] idex_ecallflag   ;       
wire [ 0:0] idex_mretflag    ;       
wire [ 0:0] idex_breakflag   ;       
wire [ 7:0] idex_wmask       ;       
wire [ 1:0] idex_choose      ;       
wire [ 0:0] idex_alumask     ;       
wire [ 2:0] idex_func3       ;       
//wire [ 6:0] idex_func7       ;       
wire [63:0] idex_NextPc      ;       
wire    fence	;
wire    idex_flush				;
ysyx_22050550_IDU IDU(
  .reset       (reset)        ,
  .clock       (clock)        ,
 //IF
  .io_IFID_inst  (Rif_id_valid?Rif_id_inst:0    )   ,
  .io_IFID_pc    (Rif_id_pc                     )   ,  
  .io_IFID_valid (Rif_id_valid                  )   ,
  //REGFILE
  .io_RegFileID_CSRs_mepc (RegFileID_CSRs_mepc )      ,
  .io_RegFileID_CSRs_mtvec(RegFileID_CSRs_mtvec)      ,
  .io_RegFileID_CSRs_mip  (RegFileID_CSRs_mip  )      ,
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
  .io_RegPc_nextpc (NextPc)    , // input

  .io_IDRegFile_raddr1  (rsaddr1),
  .io_IDRegFile_raddr2  (rsaddr2),
  .io_idex_pc              (idex_pc          ),
  .io_idex_inst            (idex_inst        ),
  .io_idex_valid           (idex_valid       ),
  .io_idex_rs1addr         (idex_rs1addr     ),
  .io_idex_abort           (idex_abort       ),
  .io_idex_rs2             (idex_rs2         ) ,
  .io_idex_imm             (idex_imm         ) ,
  .io_idex_AluOp_rd1       (idex_AluOp_rd1   ) ,
  .io_idex_AluOp_rd2       (idex_AluOp_rd2   ) ,
  .io_idex_AluOp_op        (idex_AluOp_op    ) ,
  .io_idex_waddr           (idex_waddr       ) ,
  .io_idex_wen             (idex_wen         ) ,
  .io_idex_wflag           (idex_wflag       ) ,
  .io_idex_rflag           (idex_rflag       ) ,
  .io_idex_csrflag         (idex_csrflag     ) ,
  .io_idex_jalrflag        (idex_jalrflag    ) ,
  .io_idex_ecallflag       (idex_ecallflag   ) ,
  .io_idex_mretflag        (idex_mretflag    ) ,
  .io_idex_breakflag       (idex_breakflag   ) ,
  .io_idex_wmask           (idex_wmask       ) ,
  .io_idex_choose          (idex_choose      ) ,
  .io_idex_alumask         (idex_alumask     ) ,
  .io_idex_func3           (idex_func3       ) ,
  //.io_idex_func7           (idex_func7       ) ,
  .io_idex_NextPc          (idex_NextPc      ) ,
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
reg [31:0] Ridex_inst        ;
reg [ 0:0] Ridex_valid       ;
reg [ 4:0] Ridex_rs1addr     ;
reg [ 0:0] Ridex_abort       ;
reg [63:0] Ridex_rs2         ;
reg [63:0] Ridex_imm         ;
reg [63:0] Ridex_AluOp_rd1   ;
reg [63:0] Ridex_AluOp_rd2   ;
reg [ 4:0] Ridex_AluOp_op    ;
reg [ 4:0] Ridex_waddr       ;
reg [ 0:0] Ridex_wen         ;
reg [ 0:0] Ridex_wflag       ;
reg [ 0:0] Ridex_rflag       ;
reg [ 0:0] Ridex_csrflag     ;
reg [ 0:0] Ridex_jalrflag    ;
reg [ 0:0] Ridex_ecallflag   ;
reg [ 0:0] Ridex_mretflag    ;
reg [ 0:0] Ridex_breakflag   ;
reg [ 7:0] Ridex_wmask       ;
reg [ 1:0] Ridex_choose      ;
reg [ 0:0] Ridex_alumask     ;
reg [ 2:0] Ridex_func3       ;
//reg [ 6:0] Ridex_func7       ;
reg [63:0] Ridex_NextPc      ;
reg		   Ridex_flush		;
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_pc       (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_pc        ),.dout(Ridex_pc       ));
ysyx_22050550_Reg # (`ysyx_22050550_INSTWIDTH,32'd0)Regidex_inst    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_inst      ),.dout(Ridex_inst     ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_valid    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_valid     ),.dout(Ridex_valid    ));
ysyx_22050550_Reg # (5,5'd0)                       Regidex_rs1addr  (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_rs1addr   ),.dout(Ridex_rs1addr  ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_abort    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_abort     ),.dout(Ridex_abort    ));
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_rs2      (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_rs2       ),.dout(Ridex_rs2      ));
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_imm      (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_imm       ),.dout(Ridex_imm      ));
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_AluOp_rd1(.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_AluOp_rd1 ),.dout(Ridex_AluOp_rd1));
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_AluOp_rd2(.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_AluOp_rd2 ),.dout(Ridex_AluOp_rd2));
ysyx_22050550_Reg # (5,5'd0)                       Regidex_AluOp_op (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_AluOp_op  ),.dout(Ridex_AluOp_op ));
ysyx_22050550_Reg # (5,5'd0)                       Regidex_waddr    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_waddr     ),.dout(Ridex_waddr    ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_wen      (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_wen       ),.dout(Ridex_wen      ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_wflag    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_wflag     ),.dout(Ridex_wflag    ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_rflag    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_rflag     ),.dout(Ridex_rflag    ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_csrflag  (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_csrflag   ),.dout(Ridex_csrflag  ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_jalrflag (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_jalrflag  ),.dout(Ridex_jalrflag ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_ecallflag(.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_ecallflag ),.dout(Ridex_ecallflag));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_mretflag (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_mretflag  ),.dout(Ridex_mretflag ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_breakflag(.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_breakflag ),.dout(Ridex_breakflag));
ysyx_22050550_Reg # (8,8'd0)                       Regidex_wmask    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_wmask     ),.dout(Ridex_wmask    ));
ysyx_22050550_Reg # (2,2'd0)                       Regidex_choose   (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_choose    ),.dout(Ridex_choose   ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_alumask  (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_alumask   ),.dout(Ridex_alumask  ));
ysyx_22050550_Reg # (3,3'd0)                       Regidex_func3    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_func3     ),.dout(Ridex_func3    ));
ysyx_22050550_Reg # (`ysyx_22050550_REGWIDTH,64'd0)Regidex_NextPc   (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_NextPc    ),.dout(Ridex_NextPc   ));
ysyx_22050550_Reg # (1,1'd0)                       Regidex_flush    (.clock(clock),.reset(reset),.wen(EX_ID_ready),.din(idex_flush     ),.dout(Ridex_flush    ));
//EXU TO LsU
wire [ 0:0] LS_ready       ; 
wire [63:0] EXLS_pc        ;
wire [63:0] EXLS_rs2       ;
wire [31:0] EXLS_inst      ;
wire [ 0:0] EXLS_valid     ;
wire [ 4:0] EXLS_rs1       ;
wire [63:0] EXLS_imm       ;
wire [ 4:0] EXLS_wdaddr    ;
wire [ 0:0] EXLS_wen       ;
wire [ 0:0] EXLS_csrflag   ;
wire [ 0:0] EXLS_jalrflag  ;
wire [ 0:0] EXLS_ecallflag ;
wire [ 0:0] EXLS_mretflag  ;
wire [ 0:0] EXLS_ebreak    ;
wire [ 0:0] EXLS_abort     ;
wire [63:0] EXLS_alures    ;
wire [ 0:0] EXLS_wflag     ;
wire [ 0:0] EXLS_rflag     ;
wire [63:0] EXLS_writedata ;
wire [ 7:0] EXLS_wmask     ;
wire [ 2:0] EXLS_func3     ;
wire [63:0] EXLS_NextPc    ;
wire		EXLS_flush	   ;

ysyx_22050550_EXU EXU(
    .clock            (clock)         ,
    .reset            (reset)         ,
    .io_id_pc         (            Ridex_pc           )         ,
    .io_id_inst       (            Ridex_inst         )         , 
    .io_id_valid      (            Ridex_valid        )         ,
    .io_id_rs1addr    (            Ridex_rs1addr      )         , 
    .io_id_abort      (Ridex_valid?Ridex_abort    :0  )         ,
    .io_id_jalrflag   (Ridex_valid?Ridex_jalrflag :0  )         ,
    .io_id_csrflag    (Ridex_valid?Ridex_csrflag  :0  )         ,
    .io_id_ecallflag  (Ridex_valid?Ridex_ecallflag:0  )         ,
    .io_id_mretflag   (Ridex_valid?Ridex_mretflag :0  )         ,
    .io_id_ebreak     (Ridex_valid?Ridex_breakflag:0  )         ,
    .io_id_rs2        (            Ridex_rs2          )         ,
    .io_id_imm        (            Ridex_imm          )         ,
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
    .io_id_NextPc     (            Ridex_NextPc       )         ,
    .io_ReadyLS_ready (LS_ready)                , 
    .io_EXLS_pc       (EXLS_pc        )         ,
    .io_EXLS_rs2      (EXLS_rs2       )         ,
    .io_EXLS_inst     (EXLS_inst      )         ,
    .io_EXLS_valid    (EXLS_valid     )         ,
    .io_EXLS_rs1      (EXLS_rs1       )         ,
    .io_EXLS_imm      (EXLS_imm       )         ,
    .io_EXLS_wdaddr   (EXLS_wdaddr    )         ,
    .io_EXLS_wen      (EXLS_wen       )         ,
    .io_EXLS_csrflag  (EXLS_csrflag   )         ,        
    .io_EXLS_jalrflag (EXLS_jalrflag  )         ,        
    .io_EXLS_ecallflag(EXLS_ecallflag )         ,        
    .io_EXLS_mretflag (EXLS_mretflag  )         ,        
    .io_EXLS_ebreak   (EXLS_ebreak    )         ,   
    .io_EXLS_abort    (EXLS_abort     )         ,     
    .io_EXLS_alures   (EXLS_alures    )         ,    
    .io_EXLS_wflag    (EXLS_wflag     )         ,
    .io_EXLS_rflag    (EXLS_rflag     )         ,
    .io_EXLS_writedata(EXLS_writedata )         ,
    .io_EXLS_wmask    (EXLS_wmask     )         ,
    .io_EXLS_func3    (EXLS_func3     )         ,
    .io_EXLS_NextPc   (EXLS_NextPc    )         ,  
	.io_id_flush	  (Ridex_flush    )			,
	.io_EXLS_flush    (EXLS_flush	  )			,
    .io_ReadyID_ready (EX_ID_ready    )         
);
//EX_LS
reg [63:0] REXLS_pc        ;
reg [63:0] REXLS_rs2       ;
reg [31:0] REXLS_inst      ;
reg [ 0:0] REXLS_valid     ;
reg [ 4:0] REXLS_rs1       ;
reg [63:0] REXLS_imm       ;
reg [ 4:0] REXLS_wdaddr    ;
reg [ 0:0] REXLS_wen       ;
reg [ 0:0] REXLS_csrflag   ;
reg [ 0:0] REXLS_jalrflag  ;
reg [ 0:0] REXLS_ecallflag ;
reg [ 0:0] REXLS_mretflag  ;
reg [ 0:0] REXLS_ebreak    ;
reg [ 0:0] REXLS_abort     ;
reg [63:0] REXLS_alures    ;
reg [ 0:0] REXLS_wflag     ;
reg [ 0:0] REXLS_rflag     ;
reg [63:0] REXLS_writedata ;
reg [ 7:0] REXLS_wmask     ;
reg [ 2:0] REXLS_func3     ;
reg [63:0] REXLS_NextPc    ;
reg		   REXLS_flush	   ;
ysyx_22050550_Reg # (64,64'd0)RegEXLS_pc        (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_pc        ),.dout(REXLS_pc        ));
ysyx_22050550_Reg # (64,64'd0)RegEXLS_rs2       (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_rs2       ),.dout(REXLS_rs2       ));
ysyx_22050550_Reg # (32,32'd0)RegEXLS_inst      (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_inst      ),.dout(REXLS_inst      ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_valid     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_valid     ),.dout(REXLS_valid     ));
ysyx_22050550_Reg # ( 5, 5'd0)RegEXLS_rs1       (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_rs1       ),.dout(REXLS_rs1       ));
ysyx_22050550_Reg # (64,64'd0)RegEXLS_imm       (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_imm       ),.dout(REXLS_imm       ));
ysyx_22050550_Reg # ( 5, 5'd0)RegEXLS_wdaddr    (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_wdaddr    ),.dout(REXLS_wdaddr    ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_wen       (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_wen       ),.dout(REXLS_wen       ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_csrflag   (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_csrflag   ),.dout(REXLS_csrflag   ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_jalrflag  (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_jalrflag  ),.dout(REXLS_jalrflag  ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_ecallflag (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_ecallflag ),.dout(REXLS_ecallflag ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_mretflag  (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_mretflag  ),.dout(REXLS_mretflag  ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_ebreak    (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_ebreak    ),.dout(REXLS_ebreak    ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_abort     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_abort     ),.dout(REXLS_abort     ));
ysyx_22050550_Reg # (64,64'd0)RegEXLS_alures    (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_alures    ),.dout(REXLS_alures    ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_wflag     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_wflag     ),.dout(REXLS_wflag     ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_rflag     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_rflag     ),.dout(REXLS_rflag     ));
ysyx_22050550_Reg # (64,64'd0)RegEXLS_writedata (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_writedata ),.dout(REXLS_writedata ));
ysyx_22050550_Reg # ( 8, 8'd0)RegEXLS_wmask     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_wmask     ),.dout(REXLS_wmask     ));
ysyx_22050550_Reg # ( 3, 3'd0)RegEXLS_func3     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_func3     ),.dout(REXLS_func3     ));
ysyx_22050550_Reg # (64,64'd0)RegEXLS_NextPc    (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_NextPc    ),.dout(REXLS_NextPc    ));
ysyx_22050550_Reg # ( 1, 1'd0)RegEXLS_flush     (.clock(clock),.reset(reset),.wen(LS_ready),.din(EXLS_flush     ),.dout(REXLS_flush     ));
//LS TO WB
wire [ 0:0] WB_ready  ;
wire [63:0] LSWB_pc        ;
wire [63:0] LSWB_rs2       ;
wire [31:0] LSWB_inst      ;
wire [ 0:0] LSWB_valid     ;
wire [ 4:0] LSWB_rs1       ;
wire [63:0] LSWB_imm       ;
wire [ 4:0] LSWB_wdaddr    ;
wire [ 0:0] LSWB_wen       ;
wire [ 0:0] LSWB_csrflag   ;
wire [ 0:0] LSWB_readflag  ;
wire [ 0:0] LSWB_jalrflag  ;
wire [ 0:0] LSWB_ecallflag ;
wire [ 0:0] LSWB_mretflag  ;
wire [ 0:0] LSWB_ebreak    ;
wire [ 0:0] LSWB_abort     ;
wire [ 0:0] LSWB_SkipRef   ;
wire [63:0] LSWB_alures    ;
wire [63:0] LSWB_lsures    ;
wire [ 2:0] LSWB_func3     ;
wire [63:0] LSWB_NextPc    ;
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


ysyx_22050550_LSU LSU(
    .clock            (clock)             ,
    .reset            (reset)             ,
    .io_EXLS_pc       (            REXLS_pc          ) ,
    .io_EXLS_inst     (            REXLS_inst        ) , 
    .io_EXLS_valid    (            REXLS_valid       ) ,
    .io_EXLS_rs1addr  (            REXLS_rs1         ) , 
    .io_EXLS_abort    (REXLS_valid?REXLS_abort    :0 ) ,
    .io_EXLS_jalrflag (REXLS_valid?REXLS_jalrflag :0 ) ,
    .io_EXLS_csrflag  (REXLS_valid?REXLS_csrflag  :0 ) ,
    .io_EXLS_ecallflag(REXLS_valid?REXLS_ecallflag:0 ) ,
    .io_EXLS_mretflag (REXLS_valid?REXLS_mretflag :0 ) ,
    .io_EXLS_ebreak   (REXLS_valid?REXLS_ebreak   :0 ) ,
    .io_EXLS_rs2      (            REXLS_rs2         ) ,
    .io_EXLS_imm      (            REXLS_imm         ) ,  
    .io_EXLS_alures   (            REXLS_alures      ) ,
    .io_EXLS_writedata(            REXLS_writedata   ) ,
    .io_EXLS_waddr    (            REXLS_wdaddr      ) ,    
    .io_EXLS_wen      (REXLS_valid?REXLS_wen      :0 ) ,  
    .io_EXLS_wflag    (REXLS_valid?REXLS_wflag    :0 ) ,   
    .io_EXLS_rflag    (REXLS_valid?REXLS_rflag    :0 ) ,   
    .io_EXLS_wmask    (            REXLS_wmask       ) ,          
    .io_EXLS_func3    (            REXLS_func3       ) , 
    .io_EXLS_NextPc   (REXLS_valid?REXLS_NextPc   :0 ) ,
    .io_ReadyWB_ready (WB_ready)             , 
    .io_LSWB_pc       (LSWB_pc        )      ,
    .io_LSWB_rs2      (LSWB_rs2       )      ,
    .io_LSWB_inst     (LSWB_inst      )      ,
    .io_LSWB_valid    (LSWB_valid     )      ,
    .io_LSWB_rs1      (LSWB_rs1       )      ,
    .io_LSWB_imm      (LSWB_imm       )      ,
    .io_LSWB_wdaddr   (LSWB_wdaddr    )      ,
    .io_LSWB_wen      (LSWB_wen       )      ,
    .io_LSWB_csrflag  (LSWB_csrflag   )      , 
    .io_LSWB_readflag (LSWB_readflag  )      , 
    .io_LSWB_jalrflag (LSWB_jalrflag  )      ,        
    .io_LSWB_ecallflag(LSWB_ecallflag )      ,        
    .io_LSWB_mretflag (LSWB_mretflag  )      ,        
    .io_LSWB_ebreak   (LSWB_ebreak    )      ,   
    .io_LSWB_abort    (LSWB_abort     )      , 
    .io_LSWB_SkipRef  (LSWB_SkipRef   )      ,    
    .io_LSWB_alures   (LSWB_alures    )      ,  
    .io_LSWB_lsures   (LSWB_lsures    )      ,
	.io_LSWB_func3    (LSWB_func3     )      ,
    .io_LSWB_NextPc   (LSWB_NextPc    )      ,  
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

	.ren				(ClintRen			)		,
	.wen				(ClintWen			)		,
	.raddr				(ClintRaddr			)		,
	.waddr				(ClintWaddr			)		,
	.wdata				(ClintWdata			)		,
	.rdata				(ClintRdata			)		
);
//LS_WB
reg [63:0] RLSWB_pc        ;
reg [63:0] RLSWB_rs2       ;
reg [31:0] RLSWB_inst      ;
reg [ 0:0] RLSWB_valid     ;
reg [ 4:0] RLSWB_rs1       ;
reg [63:0] RLSWB_imm       ;
reg [ 4:0] RLSWB_wdaddr    ;
reg [ 0:0] RLSWB_wen       ;
reg [ 0:0] RLSWB_csrflag   ;
reg [ 0:0] RLSWB_readflag  ;
//reg [ 0:0] RLSWB_writeflag ;
reg [ 0:0] RLSWB_jalrflag  ;
reg [ 0:0] RLSWB_ecallflag ;
reg [ 0:0] RLSWB_mretflag  ;
reg [ 0:0] RLSWB_ebreak    ;
reg [ 0:0] RLSWB_abort     ;
reg [ 0:0] RLSWB_SkipRef   ;
reg [63:0] RLSWB_alures    ;
reg [63:0] RLSWB_lsures    ;
reg [ 2:0] RLSWB_func3     ;
reg [63:0] RLSWB_NextPc    ;
reg		   RLSWB_flush	   ;
ysyx_22050550_Reg # (64,64'd0)RegLSWB_pc               (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_pc        ),.dout(RLSWB_pc         ));
ysyx_22050550_Reg # (64,64'd0)RegLSWB_rs2              (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_rs2       ),.dout(RLSWB_rs2        ));
ysyx_22050550_Reg # (32,32'd0)RegLSWB_inst             (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_inst      ),.dout(RLSWB_inst       ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_valid            (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_valid     ),.dout(RLSWB_valid      ));
ysyx_22050550_Reg # ( 5, 5'd0)RegLSWB_rs1              (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_rs1       ),.dout(RLSWB_rs1        ));
ysyx_22050550_Reg # (64,64'd0)RegLSWB_imm              (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_imm       ),.dout(RLSWB_imm        ));
ysyx_22050550_Reg # ( 5, 5'd0)RegLSWB_wdaddr           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_wdaddr    ),.dout(RLSWB_wdaddr     ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_wen              (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_wen       ),.dout(RLSWB_wen        ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_csrflag          (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_csrflag   ),.dout(RLSWB_csrflag    ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_readflag         (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_readflag  ),.dout(RLSWB_readflag   ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_jalrflag         (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_jalrflag  ),.dout(RLSWB_jalrflag   ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_ecallflag        (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_ecallflag ),.dout(RLSWB_ecallflag  ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_mretflag         (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_mretflag  ),.dout(RLSWB_mretflag   ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_ebreak           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_ebreak    ),.dout(RLSWB_ebreak     ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_abort            (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_abort     ),.dout(RLSWB_abort      ));
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_SkipRef          (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_SkipRef   ),.dout(RLSWB_SkipRef    ));
ysyx_22050550_Reg # (64,64'd0)RegLSWB_alures           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_alures    ),.dout(RLSWB_alures     ));
ysyx_22050550_Reg # (64,64'd0)RegLSWB_lsures           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_lsures    ),.dout(RLSWB_lsures     ));
ysyx_22050550_Reg # ( 3, 3'd0)RegLSWB_func3            (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_func3     ),.dout(RLSWB_func3      ));
ysyx_22050550_Reg # (64,64'd0)RegLSWB_NextPc           (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_NextPc    ),.dout(RLSWB_NextPc     )); 
ysyx_22050550_Reg # ( 1, 1'd0)RegLSWB_flush            (.clock(clock),.reset(reset),.wen(WB_ready),.din(LSWB_flush     ),.dout(RLSWB_flush      ));
 
//WBU REGFILE
wire [63:0] WBU_mepc    ;
wire [63:0] WBU_mcause  ;
wire [63:0] WBU_mtvec   ;
wire [63:0] WBU_mstatus ;
wire [63:0] WBU_mie     ;
wire [63:0] WBU_mip     ;
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
ysyx_22050550_WBU WBU(
    .clock             (clock)            ,
    .reset             (reset)            ,
    .io_LSWB_pc        (             RLSWB_pc          )            ,
    .io_LSWB_inst      (             RLSWB_inst        )            , 
    .io_LSWB_valid     (             RLSWB_valid       )            ,
    .io_LSWB_rs1addr   (             RLSWB_rs1         )            , 
    .io_LSWB_abort     (RLSWB_valid? RLSWB_abort    :0 )            ,
    .io_LSWB_jalrflag  (RLSWB_valid? RLSWB_jalrflag :0 )            ,
    .io_LSWB_readflag  (RLSWB_valid? RLSWB_readflag :0 )            ,
    .io_LSWB_csrflag   (RLSWB_valid? RLSWB_csrflag  :0 )            ,
    .io_LSWB_ecallflag (RLSWB_valid? RLSWB_ecallflag:0 )            ,
    .io_LSWB_mretflag  (RLSWB_valid? RLSWB_mretflag :0 )            ,
    .io_LSWB_ebreak    (RLSWB_valid? RLSWB_ebreak   :0 )            ,
    .io_LSWB_SkipRef   (RLSWB_valid? RLSWB_SkipRef  :0 )            ,
    .io_LSWB_rs2       (             RLSWB_rs2         )            ,
    .io_LSWB_imm       (             RLSWB_imm         )            ,  
    .io_LSWB_alures    (             RLSWB_alures      )            ,
    .io_LSWB_lsures    (             RLSWB_lsures      )            ,
    .io_LSWB_waddr     (             RLSWB_wdaddr      )            ,    
    .io_LSWB_wen       (RLSWB_valid? RLSWB_wen      :0 )            ,      
    .io_LSWB_func3     (             RLSWB_func3       )            , 
    .io_LSWB_NextPc    (             RLSWB_NextPc      )            ,

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
    .io_WBTOP_rs2      (DeBugrs2      )             ,
    .io_WBTOP_inst     (DeBuginst     )             ,
    .io_WBTOP_valid    (DeBugvalid    )             ,
    .io_WBTOP_rs1      (DeBugrs1      )             ,
    .io_WBTOP_imm      (DeBugimm      )             ,
    .io_WBTOP_waddr    (Wbu_waddr   )             ,
    .io_WBTOP_wdata    (Wbu_wdata   )             ,
    .io_WBTOP_wen      (Wbu_wen     )             ,
    .io_WBTOP_jalrflag (DeBugjalrflag )             ,               
    .io_WBTOP_ebreak   (DeBugebreak   )             ,   
    .io_WBTOP_abort    (DeBugabort    )             , 
    .io_WBTOP_SkipRef  (DeBugSkipRef  )             ,
    .io_WBTOP_NextPc   (DeBugNextPc   )             ,
    .io_ReadyWB_ready  (WB_ready	  )				,
	.interrupt         (io_interrupt  )				,
	.clintinterrupt    (clintinterrupt)				,
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

	.rdata	(ClintRdata	)			,

	.clintmtip(clintinterrupt)			,
	.mtimereg (			)			,
	.mtimecmpreg (				)	
);
wire [63:0] DeBugpc       ; 
wire [63:0] DeBugrs2      ; 
wire [31:0] DeBuginst     ; 
wire [ 0:0] DeBugvalid    ; 
wire [ 4:0] DeBugrs1      ; 
wire [63:0] DeBugimm      ;      
wire [ 0:0] DeBugjalrflag ; 
wire [ 0:0] DeBugebreak   ; 
wire [ 0:0] DeBugabort    ; 
wire [ 0:0] DeBugSkipRef  ; 
wire [63:0] DeBugNextPc   ; 
wire [63:0] Reg10         ;
reg difftest;
reg skipref ;

ysyx_22050550_Reg # ( 1, 1'd0)Rskipref         
 (.clock(clock),.reset(reset),.wen(1'b1),.din(DeBugSkipRef),.dout(skipref));
ysyx_22050550_Reg # ( 1, 1'd0)Rdifftest         
 (.clock(clock),.reset(reset),.wen(1'b1),.din(DeBugvalid),.dout(difftest));
//顶层信号在此定义
assign io_halt            = DeBugebreak && Reg10 == 0;
assign io_abort           = DeBugabort;
assign io_jalr            = DeBugjalrflag;
assign io_instvalid       = DeBugvalid;
assign io_difftestvalid   = difftest ;
assign io_SkipRef         = skipref ;
/*********** 部分DPI函数***********/
export "DPI-C" function ebreakflag;

function ebreakflag;
   ebreakflag = DeBugebreak;
endfunction

export "DPI-C" function pc_fetch;
export "DPI-C" function npc_fetch;
function longint pc_fetch;
   pc_fetch = DeBugpc;
endfunction

function longint npc_fetch;
   npc_fetch = DeBugNextPc;
endfunction

export "DPI-C" function instr_fetch;

function int instr_fetch;
   instr_fetch = DeBuginst;
endfunction

export "DPI-C" function rs1_fetch;

function int rs1_fetch;
   rs1_fetch = {{27{1'b0}},DeBugrs1};
endfunction

export "DPI-C" function rd_fetch;

function int rd_fetch;
   rd_fetch = {{27{1'b0}},Wbu_waddr};
endfunction

export "DPI-C" function imm_fetch;

function longint imm_fetch;
   imm_fetch = DeBugimm;
endfunction



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
    .Reg10         (Reg10                   ),
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
    .io_aw_ready  (0)             ,
    .io_aw_valid  ()             , 
    .io_aw_addr   ()             ,
    .io_aw_len    ()             ,
    .io_aw_size   ()             , 
    .io_aw_burst  ()             ,
    .io_w_ready   ()             , 
    .io_w_valid   ()             ,
    .io_w_data    ()             ,
    .io_w_strb    ()             ,
    .io_w_last    ()             ,
    .io_b_ready   ()             ,
    .io_b_valid   (0)             ,
	.io_b_bresp   (0)             ,

    .pc              (if_id_pc)             ,
    .io_Cache_valid  (ICache_valid  )          ,
    .io_Cache_op     (0             )          ,
    .io_Cache_addr   (ICache_addr)          ,
    .io_Cache_wdata  (0)          ,
    .io_Cache_wmask  (0)          ,
    .io_Cache_data   (ICache_Data   )          ,
    .io_Cache_dataok (ICache_dataok )			,         

	//.CacheFlush      (Flush			)			,
	.io_fence		 (	fence			)			,
	.io_wbu_flush	 (	Top_flush		)			,
	.io_fencei		 (	Icache_fence	)			,
	.ls_interrupt    (				)			

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

    .pc              (REXLS_valid?REXLS_pc       :0),
    .io_Cache_valid  (Lsu_Cache_valid    )          ,
    .io_Cache_op     (Lsu_Cache_op       )          ,
    .io_Cache_addr   (Lsu_Cache_addr     )          ,
    .io_Cache_wdata  (Lsu_Cache_wdata    )          ,
    .io_Cache_wmask  (Lsu_Cache_wmask    )          ,
    .io_Cache_data   (Lsu_Cache_data     )          ,
    .io_Cache_dataok (Lsu_Cache_dataok   )          ,
	//	.CacheFlush      (Flush			)			,
	.io_fence		 (	fence			)			,
	.io_wbu_flush	 (	Top_flush		)			,
	.io_fencei		 (	Dcache_fence	)			,
	.ls_interrupt    (				)			

);

ysyx_22050550_RamArbiter RamArbiter(	
  .io_ifu_Axi_ar_valid     (Icache_ar_valid )        ,
  .io_ifu_Axi_ar_bits_addr (Icache_ar_addr  )        ,
  .io_ifu_Axi_r_ready      (Icache_r_ready  )        ,
  .io_ifu_Axi_aw_valid     (0)        ,
  .io_ifu_Axi_aw_bits_addr (0)        ,
  .io_ifu_Axi_w_valid      (0)        ,
  .io_ifu_Axi_w_bits_data  (0)        ,
  .io_ifu_Axi_w_bits_strb  (0)        ,
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
  .io_ifu_Axi_aw_ready     ()        ,
  .io_ifu_Axi_w_ready      ()        ,
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
wire [ 7:0] Sram_ar_len      = 8'd1    ;
wire [ 2:0] Sram_ar_size     = 4        ;
wire [ 1:0] Sram_ar_burst    = 2'b01   ;
wire [ 0:0] Sram_aw_valid     ;
wire [63:0] Sram_aw_bits_addr ;
wire [ 7:0] Sram_aw_len      = 8'd1    ;
wire [ 2:0] Sram_aw_size     = 4       ;
wire [ 1:0] Sram_aw_burst    = 2'b01   ;
wire [ 0:0] Sram_w_valid      ;
wire [63:0] Sram_w_bits_data  ;
wire [ 7:0] Sram_w_bits_strb  ;
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
assign Sram_b_ready = Lsu_b_ready ;  
assign Lsu_b_bresp = Sram_b_bresp ; 

/*
ysyx_22050550_SRAM PSRAM(	
  .clock                (clock)   ,
  .reset                (reset)   ,
  .io_Sram_ar_valid     (Sram_ar_valid     )   ,
  .io_Sram_ar_bits_addr (Sram_ar_bits_addr )   ,
  .io_Sram_r_ready      (Sram_r_ready      )   ,
  .io_ar_len            (Sram_ar_len       )   ,
  .io_ar_size           (Sram_ar_size      )   ,
  .io_ar_burst          (Sram_ar_burst     )   ,
  .io_Sram_aw_valid     (Sram_aw_valid     )   ,
  .io_Sram_aw_bits_addr (Sram_aw_bits_addr )   ,
  .io_aw_len            (Sram_aw_len       )   ,
  .io_aw_size           (Sram_aw_size      )   ,   
  .io_aw_burst          (Sram_aw_burst     )   ,
  .io_Sram_w_valid      (Sram_w_valid      )   ,
  .io_Sram_w_bits_data  (Sram_w_bits_data  )   ,
  .io_Sram_w_bits_strb  (Sram_w_bits_strb  )   ,
  .io_Sram_ar_ready     (Sram_ar_ready     )   ,
  .io_Sram_r_valid      (Sram_r_valid      )   ,
  .io_Sram_r_bits_data  (Sram_r_bits_data  )   ,
  .io_Sram_r_bits_last  (Sram_r_bits_last  )   ,
  .io_Sram_r_rresp		(Sram_r_rresp	   )   ,	
  .io_Sram_aw_ready     (Sram_aw_ready     )   ,
  .io_Sram_w_ready      (Sram_w_ready      )   , 
  .io_b_ready			(Sram_b_ready	   )   ,	
  .io_b_valid			(Sram_b_valid      )   ,
  .io_b_bresp			(Sram_b_bresp	   )   
);
ysyx_22050550_SRAM DSRAM(	
  .clock                (clock)                 ,
  .reset                (reset)                 ,
  .io_Sram_ar_valid     (DevSram_ar_valid   )   ,
  .io_Sram_ar_bits_addr (DevSram_ar_addr    )   ,
  .io_Sram_r_ready      (DevSram_r_ready   )   ,
  .io_ar_len            (DevSram_ar_len     )   ,
  .io_ar_size           (DevSram_ar_size    )   ,
  .io_ar_burst          (DevSram_ar_burst   )   ,
  .io_Sram_aw_valid     (DevSram_aw_valid    )   ,
  .io_Sram_aw_bits_addr (DevSram_aw_addr    )   ,
  .io_aw_len            (DevSram_aw_len     )   ,
  .io_aw_size           (DevSram_aw_size    )   ,   
  .io_aw_burst          (DevSram_aw_burst   )   ,
  .io_Sram_w_valid      (DevSram_w_valid    )   ,
  .io_Sram_w_bits_data  (DevSram_w_data     )   ,
  .io_Sram_w_bits_strb  (DevSram_w_strb     )   ,
  .io_Sram_ar_ready     (DevSram_ar_ready   )   ,
  .io_Sram_r_valid      (DevSram_r_valid    )   ,
  .io_Sram_r_bits_data  (DevSram_r_rdata    )   ,
  .io_Sram_r_bits_last  (                   )   ,
  .io_Sram_r_rresp      (DevSram_r_rresp	)   ,
  .io_Sram_aw_ready     (DevSram_aw_ready   )   ,
  .io_Sram_w_ready      (DevSram_w_ready    )   ,
  .io_b_ready			(DevSram_b_ready    )   ,
  .io_b_valid			(DevSram_b_valid    )   ,
  .io_b_bresp			(DevSram_b_bresp    )   
);
*/ 
//修改成Device 和 内存的Sram 共用同一个SRAM   加一层arbiter
wire [ 0:0] TopSram_ar_valid     = DevSram_ar_valid || Sram_ar_valid ; 
wire [63:0] TopSram_ar_bits_addr = DevSram_ar_valid ? DevSram_ar_addr : Sram_ar_valid ? Sram_ar_bits_addr : 0;
wire [ 0:0] TopSram_r_ready      = DevSram_r_ready || Sram_r_ready  ;
//ready 信号应该不能与valid相关联
wire [ 7:0] TopSram_ar_len      = DevSram_ar_valid ? DevSram_ar_len : Sram_ar_valid ? Sram_ar_len : 8'd1   ;
wire [ 2:0] TopSram_ar_size     = DevSram_ar_valid ? DevSram_ar_size : Sram_ar_valid ? Sram_ar_size: 3'd4   ;
wire [ 1:0] TopSram_ar_burst    = 2'b01   ;
wire [ 0:0] TopSram_aw_valid     = DevSram_aw_valid || Sram_aw_valid  ;
wire [63:0] TopSram_aw_bits_addr = DevSram_aw_valid ? DevSram_aw_addr : Sram_aw_valid ? Sram_aw_bits_addr : 0;
wire [ 7:0] TopSram_aw_len      = DevSram_aw_valid ? DevSram_aw_len : Sram_aw_valid ? Sram_aw_len : 1    ;
wire [ 2:0] TopSram_aw_size     = DevSram_aw_valid ? DevSram_aw_size : Sram_aw_valid ? Sram_aw_size : 4    ;
wire [ 1:0] TopSram_aw_burst    = 2'b01   ;
wire [ 0:0] TopSram_w_valid     = DevSram_w_valid || Sram_w_valid  ;
wire [63:0] TopSram_w_bits_data = DevSram_w_valid ? DevSram_w_data :Sram_w_bits_data  ;
wire [ 7:0] TopSram_w_bits_strb = DevSram_w_valid ? DevSram_w_strb :Sram_w_bits_strb  ;
wire [ 0:0] TopSram_ar_ready     ;
//设备优先
assign DevSram_ar_ready = TopSram_ar_ready ;   
assign Sram_ar_ready    = TopSram_ar_ready && !DevSram_ar_valid;
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
assign DevSram_aw_ready = TopSram_aw_ready ; 
assign Sram_aw_ready    = TopSram_aw_ready && !DevSram_aw_valid;
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
ysyx_22050550_SRAM SRAM(	
  .clock                (clock)   ,
  .reset                (reset)   ,
  .io_Sram_ar_valid     (TopSram_ar_valid     )   ,
  .io_Sram_ar_bits_addr (TopSram_ar_bits_addr )   ,
  .io_Sram_r_ready      (TopSram_r_ready      )   ,
  .io_ar_len            (TopSram_ar_len       )   ,
  .io_ar_size           (TopSram_ar_size      )   ,
  .io_ar_burst          (TopSram_ar_burst     )   ,
  .io_Sram_aw_valid     (TopSram_aw_valid     )   ,
  .io_Sram_aw_bits_addr (TopSram_aw_bits_addr )   ,
  .io_aw_len            (TopSram_aw_len       )   ,
  .io_aw_size           (TopSram_aw_size      )   ,   
  .io_aw_burst          (TopSram_aw_burst     )   ,
  .io_Sram_w_valid      (TopSram_w_valid      )   ,
  .io_Sram_w_bits_data  (TopSram_w_bits_data  )   ,
  .io_Sram_w_bits_strb  (TopSram_w_bits_strb  )   ,
  .io_Sram_ar_ready     (TopSram_ar_ready     )   ,
  .io_Sram_r_valid      (TopSram_r_valid      )   ,
  .io_Sram_r_bits_data  (TopSram_r_bits_data  )   ,
  .io_Sram_r_bits_last  (TopSram_r_bits_last  )   ,
  .io_Sram_r_rresp		(TopSram_r_rresp	   )   ,	
  .io_Sram_aw_ready     (TopSram_aw_ready     )   ,
  .io_Sram_w_ready      (TopSram_w_ready      )   , 
  .io_b_ready			(TopSram_b_ready	   )   ,	
  .io_b_valid			(TopSram_b_valid      )   ,
  .io_b_bresp			(TopSram_b_bresp	   )   
);
ysyx_22050550_ByPass ByPass(
    .clock         (clock)                ,
    .reset         (reset)                ,
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


endmodule
