`include "./vsrc/ysyx_22050550_define.v"
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
    input  [63:0] pc                        ,
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

	/*************CACHE冲刷信号，用来冲刷掉CACHE的状态机*****************/
//	input		CacheFlush					,
	input		io_fence					,
	input		io_wbu_flush				,
	output		io_fencei					,
	/****************访存异常信号，给WBU，进行一次异常处理***************/
	output		ls_interrupt					

);
	assign ls_interrupt  = 1'b0;
	wire wrbusy = next != idle ;
	wire fencebusy = fnext != fenceidle; 
	assign io_Cache_busy  = wrbusy || fencebusy ; 
	//用一个flush的寄存器   
	//如果冲刷的时候   CACHE不在idle 状态， 那么 flush寄存器拉高，
	//直到当前cache的操作完成发送dataok后，再把flush拉低。   并且在此期间如果
	//要写入valid的信号，则把valid要写无效。真正发送的dataok信号应该是状态机的
	//dataok和!flush相与 这个flush 是外部的flush信号和寄存器的flush相或 
	/*
	reg flush ;
	wire flushen = CacheFlush || LOOKUP ; 
	wire flushin = CacheFlush ? 1'b1 : LOOKUP ? 1'b0 : flush ;
    ysyx_22050550_Reg #(1,1'b0) flushreg (
        .reset(reset),
        .clock(clock),
        .wen(flushen),
        .din(flushin),
        .dout(flush)
    );
	wire realflush = flush || CacheFlush ;
	*/
	//addr的寄存器 因为考虑到流水线的冲刷，io_cache_addr是直接LSU的组合逻辑链
	//接过来的 流水线冲刷后，那边置0了，这样子，此时还给SRAM发送的话就会导致访
	//存错误 那么就要锁存一下数据，应该就不会有访存错误了，同时也保证AXI的状态
	//机正常跳转。
	/*
	reg [63:0] Cache_addr ;
	ysyx_22050550_Reg #(64,64'b0) AddrReg (
        .reset(reset),
        .clock(clock),
        .wen(IDLE||io_Cache_valid),
        .din(io_Cache_addr ),
        .dout(Cache_addr)  
    );
	*/  

	//让Cache的状态机继续执行 暂时还不实现。
    /*
        采用官方提供的RAM模板实现，
        data array采用1块sram实现
    */
    wire [5:0]      useaddr;
    wire [127:0]    DataRead;
    wire DataWen;
    wire [127:0] DataBen  ;
    wire [127:0] DataWrite;
    wire DataCen;
    ysyx_22050550_S011HD1P_X32Y2D128_BW Data_Array(
        .Q(DataRead), .CLK(clock), .CEN(DataCen),
        .WEN(DataWen), .BWEN(DataBen), .A(useaddr), .D(DataWrite)
    );
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
    wire Tag2Wen = (REFILL && io_r_valid && chooseway==2'd2);
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
    wire Tag3Wen = (REFILL && io_r_valid && chooseway==2'd3);
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
    //记录对应组 某一路是否命中
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
    ysyx_22050550_MuxKeyWithDefault#(4,`ysyx_22050550_BlockWidth,`ysyx_22050550_REGWIDTH) DataMux(
        .out(DataOut),.key(AddrBlock),.default_out(DataRead[63:0]),.lut({
        4'd0    , DataRead[63:0],
        4'd4    , DataRead[95:32],
        4'd8    , DataRead[127:64],
        4'd12   , {{32{1'b0}},DataRead[127:96]}
    }));
    */
    
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
				if(io_Cache_valid && fnext == fenceidle) begin
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
						if (Reglen == 2'd3) begin 
							next = lookup; 
						end 
						//只读完了一个，说明还要接着读，返回miss  
						else begin 
							next = miss ;
						end 
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
						  (fstate==fencedirty &io_w_valid & io_w_last & (Reglen == 2'd3)) ; 
    //REFILL? io_r_last& io_r_valid : 0;
    /*
    ysyx_22050550_MuxKeyWithDefault#(2,3,1) DirtyEnMux(
        .out(dirtyWriteEn),.key(state),.default_out(0),.lut({
        lookup  , cachehit & io_Cache_op ? 1'b1:1'b0,
        refill  , io_r_last& io_r_valid 
    }));
    */
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
    //写 hit dirty拉高
    //assign dirtyWriteEn = LOOKUP && hit & io_Cache_op;
    //assign dirtyWriteData = LOOKUP
    /*
        miss:
            此时用chooseway的地址
            axivalid 有效且脏 向总线写回
                aw valid的时候传写回地址  把行内地址归0 即低block位掩去
                同时向data array申请读 这样子下一个周期进入replace能把数据拿出来
                写回的是一行cache 128位 一次最多写64位 突发写 写两次 写16个bytes
                用一个len的寄存器记录
                aw len = 1    aw size = 4  (2^4=16)
            不需要写回 向总线申请refill
                ar addr 行内地址归0 把低block位掩去
                用一个len 寄存器记录
                ar len = 1    ar size = 4  
    */
   // 没有突发传输了  Reglen 只有在  一次传输结束的时候，才+  
   // 进入下一次传输后 状态机的跳转也该一下，
   // read 只有Reglen = 1 的时候才标志结束    否则跳回miss 进行下一次传输  
   // write 以axialid 为标志  ，修改dirty的写即可
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
    assign io_aw_burst = 2'b01;
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
    //不需要写回 不需要写回的时候用
    assign io_ar_valid = MISS & !(axivalid);
    assign io_ar_len   = 0;
    assign io_ar_burst = 2'b01; 
    assign io_ar_size  = 2;
    //Reglen 当前这个周期还是  miss这个周期  下一个周期变1
     //这里其实应该有一个addrreg一直加的，直到last满足，但是只有两种情况，就简单一点了。
     //其实这里的addr不用+ sram那边检测到突发传输，会自动+地址
    assign io_ar_addr  = Reglen == 0 ? {32'b0,AddrTag,AddrGroup,4'b0} :  
						 Reglen == 1 ? {32'b0,AddrTag,AddrGroup,4'd4} : 
						 Reglen == 2 ? {32'b0,AddrTag,AddrGroup,4'd8} : 
						 Reglen == 3 ? {32'b0,AddrTag,AddrGroup,4'd12}: {32'b0,AddrTag,AddrGroup,4'b0};

    /*
        replace :
            w valid 并且 ready的时候
                写回地址是掩去block的地址加上  (1-RegLen)*8  
                同时向data申请读 addr + Reglen*8 这样子下个周期才能把数据拿出来
                len = 0的时候 last拉高
    */
    wire REPLACE = state == replace         ;
    assign io_w_valid   = REPLACE ||(fstate == fencedirty )       ;
    assign io_w_last    = io_w_valid ;//(REPLACE&&Reglen == 0)||(fstate == fencedirty && Reglen == 0) ;
    assign io_w_data    = Reglen == 0  ? {{32'd0},   DataRead[31:0]  } : 
						  Reglen ==	1  ? {{32'd0},	 DataRead[63:32] } :
						  Reglen == 2  ? {{32'd0},   DataRead[95:64] } :
						  Reglen == 3  ? {{32'd0},   DataRead[127:96]} : 64'b0 ;
	
    assign io_w_strb    = 8'h0f;
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
    // REFILL? !(io_r_last& io_r_valid) : 0;
    /*
    ysyx_22050550_MuxKeyWithDefault#(2,3,1) DirtyDataMux(
        .out(dirtyWriteData),.key(state),.default_out(0),.lut({
        lookup  , cachehit & io_Cache_op ? 1'b1:1'b0,
        refill  , !(io_r_last& io_r_valid)   
    }));
    */
    //valid只有一种情况需要写入  refill完成写valid
	//现在新增了一种情况， 就是读写异常，此时需要把 valid 写无效。
	//一个是读异常 此时     state == refill  resp!0
	//一个是写异常 此时     state == wresp   resp != 0
	//这个功能还是暂时不实现了。先解决clint中断的问题。
	//还有一个是当冲刷信号到来的时候，要对已经写入的valid行置无效
	//新增一个 flushwrite 信号 注意usaddr 是hitaddr是，要检验是否是真的hit  
	//感觉很复杂 ，先不实现
	//wire flushwrite = CacheFlush 
	//当处于fencevalid 状态并且不需要写回的时候 将valid 置无效   
    assign validWriteEn = (REFILL && io_r_last& io_r_valid && Reglen == 3) ||(fstate ==fencevalid && !io_aw_valid );
    assign validWriteData = REFILL && io_r_last & io_r_valid && (Reglen == 3);//&&(!realflush);
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


