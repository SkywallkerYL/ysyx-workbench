`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_LSU(
    input         clock                         ,
                  reset                         ,
    input  [63:0] io_EXLS_pc                    ,
    input  [31:0] io_EXLS_inst                  , 
    input         io_EXLS_valid                 ,
    input  [4:0]  io_EXLS_rs1addr               , 
    input         io_EXLS_abort                 ,
                  io_EXLS_jalrflag              ,
                  io_EXLS_csrflag               ,
                  io_EXLS_ecallflag             ,
                  io_EXLS_mretflag              ,
                  io_EXLS_ebreak                ,
    input  [63:0] io_EXLS_rs2                   ,
                  io_EXLS_imm                   ,  
                  io_EXLS_alures                ,
                  io_EXLS_writedata             ,
    input  [4:0]  io_EXLS_waddr                 ,    
    input         io_EXLS_wen                   ,  
                  io_EXLS_wflag                 ,   
                  io_EXLS_rflag                 ,   
    input  [7:0]  io_EXLS_wmask                 ,          
    input  [2:0]  io_EXLS_func3                 , 
    //input  [6:0]  io_EXLS_func7                 ,      
    input  [63:0] io_EXLS_NextPc                ,
    input         io_ReadyWB_ready              , 
    output [63:0] io_LSWB_pc                    ,
                  io_LSWB_rs2                   ,
    output [31:0] io_LSWB_inst                  ,
    output        io_LSWB_valid                 ,
    output [4:0]  io_LSWB_rs1                   ,
    output [63:0] io_LSWB_imm                   ,
    output [4:0]  io_LSWB_wdaddr                ,
    output        io_LSWB_wen                   ,
    output        io_LSWB_csrflag               , 
                  io_LSWB_readflag              ,  
//                  io_LSWB_writeflag             ,     
                  io_LSWB_jalrflag              ,        
                  io_LSWB_ecallflag             ,        
                  io_LSWB_mretflag              ,        
                  io_LSWB_ebreak                ,   
                  io_LSWB_abort                 , 
                  io_LSWB_SkipRef               ,    
    output [63:0] io_LSWB_alures                ,  
    output [63:0] io_LSWB_lsures                ,
    output [2:0]  io_LSWB_func3                 ,
    //output [6:0]  io_LSWB_func7                 ,
    output [63:0] io_LSWB_NextPc                ,  
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
    wire Pmem = io_EXLS_alures[31:28] == 4'h8 ;//||  (io_EXLS_alures[31:28] >= 4'h8 && io_EXLS_alures[31:24]<=8'hfb);
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
    assign io_ar_size  = 2;          
    assign io_ar_burst = 2'b01;          
    assign io_r_ready  = Rstate == sread; 
	reg [31:0]tmpdevicedata; 
	always@(posedge clock) begin 
		if(reset) tmpdevicedata  <= 0 ; 
		else if ( io_r_valid && io_r_ready) tmpdevicedata <= io_r_rdata[31:0] ; 
	end 
    wire [`ysyx_22050550_RegBus] Devicedata = ( reglen == 1 ) ? { io_r_rdata[31:0] ,tmpdevicedata } : io_r_rdata;
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
    assign io_aw_size  = 2;          
    assign io_aw_burst = 2'b01; 
    assign io_w_valid  = Wstate == swrite;
    assign io_w_data   = (storedouble && reglen == 1) ? {{32{1'b0}},io_EXLS_writedata[63:32]} : {{32{1'b0}},io_EXLS_writedata[31:0]} ;
    assign io_w_strb   = (storedouble && reglen == 1) ? {{4{1'b0}},io_EXLS_wmask[7:4]} : io_EXLS_wmask; 
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

    assign io_LSWB_rs1      =      io_EXLS_rs1addr                    ;
    assign io_LSWB_abort    =      io_EXLS_abort                      ;
    //这个是为了记录写内存或设备的写数据  以便更好地进行difftest;
    assign io_LSWB_rs2      =       io_EXLS_rs2                       ;
    assign io_LSWB_wdaddr   =      io_EXLS_waddr                      ;
    assign io_LSWB_wen      =      io_EXLS_wen                        ;
    assign io_LSWB_csrflag  =      io_EXLS_csrflag                    ;
    assign io_LSWB_readflag =      io_EXLS_rflag                      ;
    assign io_LSWB_jalrflag =      io_EXLS_jalrflag                   ;
    assign io_LSWB_ecallflag=      io_EXLS_ecallflag                  ;
    assign io_LSWB_mretflag =      io_EXLS_mretflag                   ;
    assign io_LSWB_ebreak   =      io_EXLS_ebreak                     ;
    assign io_LSWB_SkipRef  =      (io_EXLS_wflag||io_EXLS_rflag) &&(!Pmem)&&(!Clint);//读写内存并且非pmem地址
    assign io_LSWB_func3    =      io_EXLS_func3                      ;
    //assign io_LSWB_func7    =      io_EXLS_func7                      ;
    assign io_LSWB_NextPc   =      io_EXLS_NextPc                     ;
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

