`include "./vsrc/ysyx_22050550_define.v"
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
//                  io_LSWB_writeflag             ,
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
    //input  [6:0]  io_LSWB_func7                 ,      
    input  [63:0] io_LSWB_NextPc                ,
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
    //              io_WBTOP_writeflag             ,
    //output [63:0] io_WBTOP_writeaddr             ,
    output [63:0] io_WBTOP_NextPc                ,  
    output        io_ReadyWB_ready              ,  
	input		  interrupt						,//外部中断 时钟中断 或者 其他的异步中断  比如访存等，，，虽然还没实现。
	input		  clintinterrupt				,
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
    csrind ==`ysyx_22050550_CSRMIP  ? mip    :64'h0;
    
    wire [`ysyx_22050550_RegBus] writebackdata = io_LSWB_csrflag?csrwritedata : io_LSWB_readflag ? io_LSWB_lsures : io_LSWB_alures;
    //处理csr指令 对csr进行写回
    wire [63:0] csrwrite;
    //Idu那边在csrflag拉高的时候就把 rd2置0 这样子这里过来的就是rs1
    assign csrwrite = 
    io_LSWB_func3 == 3'b001 ? io_LSWB_alures :
    io_LSWB_func3 == 3'b010 ? io_LSWB_alures | csrwritedata : 64'h0;
    
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
	wire [63:0] intrmcause = 64'd16;
	//记录一下当前执行的或者已经执行完成的
	//pc ,保证后面返回正确 。。
	assign wbmepc   = intr ? ecallpc : inwbmepc ; 
	assign wbmcause = interin ? intrmcause : inwbmcause ; 
	assign wbmtvec  = inwbmtvec						 ; 
	assign wbmstatus= interin ? ecallfinal : inwbmstatus;
	assign wbmie    = inwbmie						 ;  
	assign wbmip    = mtipvalid ? inwbmip &(~64'h80): inwbmip   ; // mip 的mtip位拉低仅用计时器中断
//	wire [7:0] intrcsren  = intr ? ecallcsren|inwbcsren : inwbcsren		;
	wire mepcen   = intr    || io_LSWB_ecallflag  ||(io_LSWB_csrflag && csrind == `ysyx_22050550_MEPC); 
	wire mcauseen = interin || io_LSWB_ecallflag  ||(io_LSWB_csrflag && csrind == `ysyx_22050550_MCAUSE);
	wire mtvecen  = (io_LSWB_csrflag && csrind == `ysyx_22050550_MTVEC );
	wire mstatusen= interin || io_LSWB_ecallflag|| io_LSWB_mretflag   ||(io_LSWB_csrflag && csrind == `ysyx_22050550_MSTATUS);
	wire mieen    = (io_LSWB_csrflag && csrind == `ysyx_22050550_CSRMIE) ;
	wire mipen	  = mtipvalid || (io_LSWB_csrflag && csrind == `ysyx_22050550_CSRMIP) ;
	assign wbcsren  = {2'b00,mipen,mieen,mstatusen,mtvecen,mcauseen,mepcen} ;
		//mtipvalid ? intrcsren | clintintren : intrcsren ;
	


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

