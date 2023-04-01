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
    output [0:0]  io_b_ready                ,
    input  [0:0]  io_b_valid                ,
    
    /***********Cache***********/
    input  [63:0] pc                        ,
    input  [0:0]  io_Cache_valid            ,
    input  [0:0]  io_Cache_op               ,
    input  [63:0] io_Cache_addr             ,
    input  [63:0] io_Cache_wdata            ,
    input  [7:0]  io_Cache_wmask            ,
    output [63:0] io_Cache_data             ,
    output        io_Cache_dataok           
    /*********DataArray·的Sram 例化在顶层 这里内部只保留tagarray********/
    /*********暂时先实现在内部 **********/                   
);
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
`ifdef ysyx_22050550_TagUseRam
    wire [`ysyx_22050550_TagBus] Tag[3:0];
    wire Tag0Wen = !(!io_r_last && REFILL && io_r_valid && chooseway==2'd0) ;
    wire [`ysyx_22050550_TagBus] Tag0Ben = 0;//写使能，写掩码，都是低位有效
    wire [`ysyx_22050550_TagBus] Tag0Data = AddrTag; //写数据
    ysyx_22050550_TagAaaryMem Tag_Array0(
        .Q(Tag[0]), .CLK(clock), .CEN(1'b0), 
        .WEN(Tag0Wen), .BWEN(Tag0Ben), .A(AddrGroup), .D(Tag0Data)
    );
    wire Tag1Wen = !(!io_r_last && REFILL && io_r_valid && chooseway==2'd1);
    wire [`ysyx_22050550_TagBus] Tag1Ben = 0;//写使能，写掩码，都是低位有效
    wire [`ysyx_22050550_TagBus] Tag1Data = AddrTag; //写数据
    ysyx_22050550_TagAaaryMem Tag_Array1(
        .Q(Tag[1]), .CLK(clock), .CEN(1'b0), 
        .WEN(Tag1Wen), .BWEN(Tag1Ben), .A(AddrGroup), .D(Tag1Data)
    );
    wire Tag2Wen = !(!io_r_last && REFILL && io_r_valid && chooseway==2'd2);
    wire [`ysyx_22050550_TagBus] Tag2Ben = 0;//写使能，写掩码，都是低位有效
    wire [`ysyx_22050550_TagBus] Tag2Data = AddrTag; //写数据
    ysyx_22050550_TagAaaryMem Tag_Array2(
        .Q(Tag[2]), .CLK(clock), .CEN(1'b0), 
        .WEN(Tag2Wen), .BWEN(Tag2Ben), .A(AddrGroup), .D(Tag2Data)
    );
    wire Tag3Wen = !(!io_r_last && REFILL && io_r_valid && chooseway==2'd3);
    wire [`ysyx_22050550_TagBus] Tag3Ben = 0;//写使能，写掩码，都是低位有效
    wire [`ysyx_22050550_TagBus] Tag3Data = AddrTag; //写数据
    ysyx_22050550_TagAaaryMem Tag_Array3(
        .Q(Tag[3]), .CLK(clock), .CEN(1'b0), 
        .WEN(Tag3Wen), .BWEN(Tag3Ben), .A(AddrGroup), .D(Tag3Data)
    );
`else
`ifdef ysyx_22050550_FAST
    wire [`ysyx_22050550_TagBus] Tag[3:0];
    wire Tag0Wen = (!io_r_last && REFILL && io_r_valid && chooseway==2'd0) ;
    //wire [`ysyx_22050550_TagBus] Tag0Data = AddrTag; //写数据
    reg [`ysyx_22050550_TagWidth-1:0] Tag0 [0:`ysyx_22050550_GroupNum-1];
    assign Tag[0] = Tag0[AddrGroup];
    always @(posedge clock) begin
        if (Tag0Wen) Tag0[AddrGroup] <= AddrTag;
    end
    wire Tag1Wen = (!io_r_last && REFILL && io_r_valid && chooseway==2'd1);
    //wire [`ysyx_22050550_TagBus] Tag1Data = AddrTag; //写数据
    reg [`ysyx_22050550_TagWidth-1:0] Tag1 [0:`ysyx_22050550_GroupNum-1];
    assign Tag[1] = Tag1[AddrGroup];
    wire Tag1en[0:`ysyx_22050550_GroupNum-1];
    always @(posedge clock) begin
        if (Tag1Wen) Tag1[AddrGroup] <= AddrTag;
    end
    wire Tag2Wen = (!io_r_last && REFILL && io_r_valid && chooseway==2'd2);
    //wire [`ysyx_22050550_TagBus] Tag2Data = AddrTag; //写数据
    reg [`ysyx_22050550_TagWidth-1:0] Tag2 [0:`ysyx_22050550_GroupNum-1];
    assign Tag[2] = Tag2[AddrGroup];
    wire Tag2en[0:`ysyx_22050550_GroupNum-1];
    always @(posedge clock) begin
        if (Tag2Wen) Tag2[AddrGroup] <= AddrTag;
    end
    wire Tag3Wen = (!io_r_last && REFILL && io_r_valid && chooseway==2'd3);
    //wire [`ysyx_22050550_TagBus] Tag3Data = AddrTag; //写数据
    reg [`ysyx_22050550_TagWidth-1:0] Tag3 [0:`ysyx_22050550_GroupNum-1];
    assign Tag[3] = Tag3[AddrGroup];
    wire Tag3en[0:`ysyx_22050550_GroupNum-1];
    always @(posedge clock) begin
        if (Tag3Wen) Tag3[AddrGroup] <= AddrTag;
    end
`else
    wire [`ysyx_22050550_TagBus] Tag[3:0];
    wire Tag0Wen = (!io_r_last && REFILL && io_r_valid && chooseway==2'd0) ;
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
    wire Tag1Wen = (!io_r_last && REFILL && io_r_valid && chooseway==2'd1);
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
    wire Tag2Wen = (!io_r_last && REFILL && io_r_valid && chooseway==2'd2);
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
    wire Tag3Wen = (!io_r_last && REFILL && io_r_valid && chooseway==2'd3);
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
`endif 
`endif 
    //reg [`ysyx_22050550_TagBus] tag [63 : 0];
    //valid dirty
    reg  valid [63:0];
    reg  dirty [63:0];
    wire [63:0] validen ;
    wire validWriteEn ;
    wire validWriteData;
    wire [63:0] dirtyen ;
    wire dirtyWriteEn ;
    wire dirtyWriteData;
`ifdef ysyx_22050550_FAST
    always @(posedge clock) begin
        if(validWriteEn) valid[useaddr] <= validWriteData;
        if(dirtyWriteEn) dirty[useaddr] <= dirtyWriteData;
    end
`else
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
`endif
    //记录对应组 某一路是否命中
    wire [3:0] hit   ;
    //wire [`ysyx_22050550_AddrWidth-1:0] AddrTagshift =(io_Cache_addr >> (`ysyx_22050550_GroupWidth+`ysyx_22050550_BlockWidth));
    //wire [`ysyx_22050550_TagBus] AddrTag = AddrTagshift[`ysyx_22050550_TagBus];
    //移位的操作好像也会降低性能，能够不移位的地方就换成位拼接
    wire [`ysyx_22050550_TagBus] AddrTag = io_Cache_addr[31:`ysyx_22050550_GroupWidth+`ysyx_22050550_BlockWidth];
    wire [`ysyx_22050550_BlockBus]AddrBlock =  io_Cache_addr[`ysyx_22050550_BlockBus];
    //wire [`ysyx_22050550_AddrWidth-1:0]AddrGroupshift = (io_Cache_addr >> (`ysyx_22050550_BlockWidth));
    //wire [`ysyx_22050550_GroupBus] AddrGroup = AddrGroupshift[`ysyx_22050550_GroupBus];
    wire [`ysyx_22050550_GroupBus] AddrGroup = io_Cache_addr[7:`ysyx_22050550_BlockWidth];
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
`ifdef ysyx_22050550_FAST
    reg [1:0] chooseway ;
    always @ (posedge clock) begin
        if(saveen ) chooseway<= random;
    end
`else
    ysyx_22050550_Reg # (2,2'd0) regvalid (
                .clock(clock),.reset(reset),.wen(saveen),.din(random),
                .dout(chooseway));
    wire [1:0] chooseway ;
`endif         
    
    /*
    always @(posedge clock) begin
        if(reset) chooseway <= 2'd0;
        else if (saveen) chooseway <= lfsr[1:0];
    end
    */
    wire [5:0] chooseaddr = {AddrGroup,chooseway};//(AddrGroup <<2) | chooseway;
    wire axivalid ;//有效且脏的情况下向总线申请 把cache内容写回内存
    //cache 状态机 idle :: lookup :: miss :: replace :: refill 
    localparam idle = 3'd0, lookup = 3'd1, miss = 3'd2, replace = 3'd3,refill = 3'd4;
    reg [2:0] state ;
    reg [2:0] next  ;
    //状态跳转 省掉一些状态的跳转，这样子性能又能快一些了。
    always@(posedge clock) begin
        if(reset) state <= idle;
`ifdef ysyx_22050550_FAST
        else if(!(state==idle && !io_Cache_valid))state <= next;
`else
        else state <= next;
`endif 
    end
    //读状态机组合逻辑
    /*
        优化一下状态机的写法 不用always好像会更快 额，用always好像快一些。。
    */
    /*
    assign next = 
    state == idle   ? (io_Cache_valid ? lookup : idle)      :    
    state == lookup ? (cachehit ? idle : miss )             :
    state == miss   ? 
        axivalid ? 
        (io_aw_valid && io_aw_ready ? replace : miss) :
        (io_ar_valid && io_ar_ready ? refill  : miss)       :
    state == replace?  
        io_w_valid && io_w_ready ? 
        (io_w_last ? miss : replace): 
                            replace                         :
    state == refill ?    
        io_r_valid && io_r_ready ?
        (io_r_last ? lookup : refill):
                              refill            : idle; 
    */
    
    always@(*) begin
        case (state)
            idle:begin
                if(io_Cache_valid) begin
                    next = lookup;
                end
                else begin
                    next = idle;
                end
            end 
            lookup:begin
                //命中
                if(cachehit) begin 
                    //读命中 直接读出数据 
                    //写命中 ...
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
            replace:begin
                //从总线写回cacheline
                if (io_w_valid && io_w_ready) begin
                    if(io_w_last) begin
                        next = miss;
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
                if(io_r_valid && io_r_ready)begin
                    if (io_r_last) begin
                        next = lookup;
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
    
    /*
        根据不同的状态对总线 以及Mem申请读或者写 整理一下每个状态下做的事情
        注意Tag和Mem的数据都是延迟一周期才能拿到
        Tag使用寄存器的时候当周期即拿到了hitaddr
        idle:  
            cache valid的情况下 向Tag申请读
    */
    wire IDLE = state == idle; // Tag一直在读 不用管 
    //data addr mux
    assign useaddr = IDLE||LOOKUP ? hitaddr : chooseaddr;
    /*
    ysyx_22050550_MuxKeyWithDefault#(5,3,6) DataAddrMux(
        .out(useaddr),.key(state),.default_out(hitaddr),.lut({
        idle    , hitaddr,
        lookup  , hitaddr,
        miss    , chooseaddr,
        replace , chooseaddr,
        refill  , chooseaddr
    }));
    */
    //hit 情况下的写入
    //data write mux 
    //需要考虑非对齐的情况 ，不用Mux了
    wire [127:0] CacheWdata = {{64{1'b0}},io_Cache_wdata};
    wire [127:0] CacheWdatashift = CacheWdata << addrblockshift;
    wire [127:0] hitDataWrite = CacheWdatashift;
    /*
    ysyx_22050550_MuxKeyWithDefault#(4,`ysyx_22050550_BlockWidth,128) hitDataWriteMux(
        .out(hitDataWrite),.key(AddrBlock),.default_out(CacheWdata),.lut({
            4'd0    , CacheWdata,
            4'd4    , CacheWdata << 32,
            4'd8    , CacheWdata << 64,
            4'd12   , CacheWdata << 96
    }));
    */
    //data write ben mux  //低有效
    wire [127:0] low8mask  = 128'hff        ; wire [127:0] low16mask = 128'hffff                ; 
    wire [127:0] low32mask = 128'hffff_ffff ; wire [127:0] low64mask = 128'hffff_ffff_ffff_ffff ;
    //for faster
    reg  [127:0] hitDataBen;
    always@(*) begin
             if (io_Cache_wmask == 0)        hitDataBen <= ~128'b0                      ;
        else if (io_Cache_wmask == {8'b1}  ) hitDataBen <= ~(low8mask << addrblockshift);
        else if (io_Cache_wmask == {8'b11} ) hitDataBen <= ~(low16mask<< addrblockshift);
        else if (io_Cache_wmask == {8'hf}  ) hitDataBen <= ~(low32mask<< addrblockshift);
        else if (io_Cache_wmask == {8'hff} ) hitDataBen <= ~(low64mask<< addrblockshift);
    end
    /*
    wire [127:0] hitDataBen;
    assign hitDataBen = 
    io_Cache_wmask == {8'b1}  ? ~(low8mask << addrblockshift):
    io_Cache_wmask == {8'b11} ? ~(low16mask<< addrblockshift):
    io_Cache_wmask == {8'hf}  ? ~(low32mask<< addrblockshift):
    io_Cache_wmask == {8'hff} ? ~(low64mask<< addrblockshift):~128'b0;
    */
    /*
    ysyx_22050550_MuxKeyWithDefault#(4,8,128) hitDataBenMux(
        .out(hitDataBen),.key({io_Cache_wmask}),.default_out(~128'b0),.lut({
            {8'b1}       , ~(low8mask << addrblockshift),
            {8'b11}      , ~(low16mask<< addrblockshift),
            {8'hf}       , ~(low32mask<< addrblockshift),
            {8'hff}      , ~(low64mask<< addrblockshift) 
    }));
    */
    //refill情况下的写入
    wire[127:0] refilldata = !io_r_last ? {{64{1'b0}} ,io_r_rdata} : {io_r_rdata,{64{1'b0}}};
    wire[127:0] refillben  = !io_r_last ? {{64{1'b1}} ,{64{1'b0}}} : {{64{1'b0}},{64{1'b1}}};
    //dirty只在两种情况下写 一个是lookup命中了 写脏  一个是replace完成
    //dirty write   data en mux  en 高有效
    assign dirtyWriteEn = (LOOKUP & cachehit & io_Cache_op) ||  
                          (REPLACE& io_w_valid & io_w_last); 
    //REFILL? io_r_last& io_r_valid : 0;
    /*
    ysyx_22050550_MuxKeyWithDefault#(2,3,1) DirtyEnMux(
        .out(dirtyWriteEn),.key(state),.default_out(0),.lut({
        lookup  , cachehit & io_Cache_op ? 1'b1:1'b0,
        refill  , io_r_last& io_r_valid 
    }));
    */
    assign dirtyWriteData = (LOOKUP& cachehit & io_Cache_op); 
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
    assign validWriteEn = REFILL && io_r_last& io_r_valid;
    assign validWriteData = 1'b1;
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
    //如果Tag使用寄存器  idle那个周期useaddr就发过去了，hit的话，lookup当周期就能拿到数据
    //所以dataok不用延迟一周期。 但如果是从refill跳回lookup 回到lookup当周期才申请读，此时dataok还是要延迟的
    //Ram那边改了，支持同时读写 CACHE仍然使用寄存器，这样子仿真可以更快
    wire dataokin = LOOKUP && cachehit;
`ifdef ysyx_22050550_TagUseRam
`ifdef ysyx_22050550_RealRam
    ysyx_22050550_Reg # (1,1'd0) dataok (
                .clock(clock),.reset(reset),.wen(1'b1),.din(dataokin),
                .dout(io_Cache_dataok));
`else
    ysyx_22050550_Reg # (1,1'd0) dataok (
                .clock(clock),.reset(reset),.wen(1'b1),.din(dataokin),
                .dout(io_Cache_dataok));
`endif 
`else
    assign io_Cache_dataok = dataokin;
`endif 
    assign io_Cache_data = DataOut;
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
    reg Reglen ;
`ifdef ysyx_22050550_FAST
    always @ (posedge clock) begin
        if((io_aw_valid && io_aw_ready))  begin
            Reglen <= 1'b1;
        end
        else if((io_w_valid && io_w_ready))  begin 
            if(io_w_last ) Reglen <= 1'b0;
            else Reglen <=  Reglen - 1'b1;
        end
    end
`else
    always @ (posedge clock) begin
        if (reset) begin
            Reglen <= 1'b0;
        end
        else if((io_aw_valid && io_aw_ready) || (io_ar_valid && io_ar_ready))  begin
            Reglen <= 1'b1;
        end
        else if((io_w_valid && io_w_ready) || (io_r_valid&&io_r_ready))  begin 
            if(io_w_last || io_r_last) Reglen <= 1'b0;
            else Reglen <=  Reglen - 1'b1;
        end
        else 
            Reglen <= Reglen;
    end
`endif 
    wire MISS = state == miss;
    assign axivalid    = valid[useaddr] && dirty[useaddr];
    assign io_aw_valid =  MISS & axivalid ;
    assign io_aw_len   = 1;
    assign io_aw_size  = 4;
    assign io_aw_burst = 2'b01;
    //要根据当前选中的Tag获取其在主存的块号确定回传的地址 低位舍掉
   
    wire [`ysyx_22050550_RegBus] addr = {Tag[chooseway],AddrGroup,4'b0}; 
    assign io_aw_addr = Reglen==0? addr : addr + 8;
    //不需要写回 不需要写回的时候用
    assign io_ar_valid = MISS & !(axivalid);
    assign io_ar_len   = 1;
    assign io_ar_burst = 2'b01; 
    assign io_ar_size  = 4;
    //Reglen 当前这个周期还是  miss这个周期  下一个周期变1
     //这里其实应该有一个addrreg一直加的，直到last满足，但是只有两种情况，就简单一点了。
     //其实这里的addr不用+ sram那边检测到突发传输，会自动+地址
    assign io_ar_addr  = {AddrTag,AddrGroup,4'b0} ;//Reglen==0? {AddrTag,AddrGroup,4'b0} : {AddrTag,AddrGroup,4'b0} + 8;
    /*
        replace :
            w valid 并且 ready的时候
                写回地址是掩去block的地址加上  (1-RegLen)*8  
                同时向data申请读 addr + Reglen*8 这样子下个周期才能把数据拿出来
                len = 0的时候 last拉高
    */
    wire REPLACE = state == replace         ;
    assign io_w_valid   = REPLACE              ;
    assign io_w_last    = REPLACE&&Reglen == 0 ;
    assign io_w_data    = Reglen ? DataRead[63:0] : DataRead[127:64];
    assign io_w_strb    = 8'hff;
    assign io_b_ready   = 1'b1 ;
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
`ifndef ysyx_22050550_RealRam
`ifdef ysyx_22050550_TagUseRam
    assign DataCen = 1'b0;
`else
    assign DataCen = !((IDLE&&io_Cache_valid) || (REFILL && io_r_last)||
     (io_aw_valid&&io_aw_ready ) || (REPLACE && !io_w_last));
`endif 
`else
    assign DataCen = 1'b0;
`endif
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
