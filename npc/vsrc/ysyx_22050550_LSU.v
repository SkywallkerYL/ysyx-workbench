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
`endif 
    /***********Cache***********/
    output [0:0]  io_Cache_valid            ,
    output [0:0]  io_Cache_op               ,
    output [63:0] io_Cache_addr             ,
    output [63:0] io_Cache_wdata            ,
    output [7:0]  io_Cache_wmask            ,
    input  [63:0] io_Cache_data             ,
    input         io_Cache_dataok           
    //To IDU for DEGUB
    //output printflag 
);  
    //设备地址都在 a0000000+ 这里判断可以简单一点
    wire Pmem = io_EXLS_alures[31:28] == 4'h8;
    //wire Pmem = io_EXLS_alures>=`ysyx_22050550_PLeft && io_EXLS_alures < `ysyx_22050550_PRight;

    //访问设备地址时，采用AXI总线与设备通信，暂时不与总线通信 加快仿真效率
    //设备通信状态机 读状态机
`ifdef ysyx_22050550_DEVICEUSEAXI
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
                    Rnext = swait;
                end
                else Rnext = sread;
            end
            default:Rnext = swait; 
        endcase
    end 
    //读状态地址连线 // 这里还没有考虑CLint
    assign io_ar_valid = (Rstate == swait && io_EXLS_rflag && (!Pmem))||(Rstate==swaitready);
    assign io_ar_addr  = io_EXLS_alures;
    assign io_ar_len   = 0;           
    assign io_ar_size  = 3;          
    assign io_ar_burst = 2'b01;          
    assign io_r_ready  = Rstate == sread;
    wire [`ysyx_22050550_RegBus] Devicedata = io_r_rdata;
    wire DeviceReadBusy = (Rstate == swait &&(io_ar_ready&&io_ar_valid))||(Rstate==swaitready)||(Rstate==sread &&(!(io_r_ready&&io_r_valid)));
    /*******************写状态机*******************/
    
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
                    Wnext = swaitW;
                end
                else Wnext = swrite;
            end
            sresp:begin
                if(io_b_valid&&io_b_ready)begin
                    Wnext = swaitW;
                end
                else Wnext = sresp;
            end
            default:Wnext = swaitW; 
        endcase
    end 
    //写状态地址连线 // 这里还没有考虑CLint
    assign io_aw_valid = (Wstate == swaitW && io_EXLS_wflag && (!Pmem))||(Wstate==swaitreadyW);
    assign io_aw_addr  = io_EXLS_alures;
    assign io_aw_len   = 0;           
    assign io_aw_size  = 3;          
    assign io_aw_burst = 2'b01; 
    assign io_w_valid  = Wstate == swrite;
    assign io_w_data   = io_EXLS_writedata;
    assign io_w_strb   = io_EXLS_wmask;
    assign io_w_last   = 1'b1;
    assign io_b_ready  = 1'b0;
    wire DeviceWriteBusy = (Wstate == swaitW &&(io_aw_ready&&io_aw_valid))||(Wstate==swaitreadyW)||(Wstate==swrite &&(!(io_w_ready&&io_w_valid)));

    wire [`ysyx_22050550_RegBus] LsuData   = io_Cache_dataok?cachedata:io_r_ready&&io_r_valid?Devicedata:64'h0;

`else
    /*
    assign io_ar_valid = 0;
    assign io_ar_addr  = io_EXLS_alures;
    assign io_ar_len   = 0;           
    assign io_ar_size  = 3;          
    assign io_ar_burst = 2'b01;          
    assign io_r_ready  = 0;
    */
    wire DeviceReadBusy = 0;
    /*
    assign io_aw_valid = 0;
    assign io_aw_addr  = io_EXLS_alures;
    assign io_aw_len   = 0;           
    assign io_aw_size  = 3;          
    assign io_aw_burst = 2'b01; 
    assign io_w_valid  = 0;
    assign io_w_data   = io_EXLS_writedata;
    assign io_w_strb   = io_EXLS_wmask;
    assign io_w_last   = 1'b1;
    assign io_b_ready  = 1'b0;
    */
    wire DeviceWriteBusy = 0;
    wire [`ysyx_22050550_RegBus] Devicedata ;
import "DPI-C" function void pmem_read(input longint Dpi_raddr, output longint Dpi_rdata);
import "DPI-C" function void pmem_write(input longint Dpi_waddr, input longint Dpi_wdata,input byte Dpi_wmask);
    wire Dpi_wflag = io_EXLS_wflag && !Pmem;
    always@(Dpi_wflag)begin
       if(Dpi_wflag) pmem_write(io_EXLS_alures,io_EXLS_writedata,io_EXLS_wmask);
    end
    wire Dpi_rflag = io_EXLS_rflag && !Pmem;
    always@(Dpi_rflag)begin
       if(Dpi_rflag) pmem_read(io_EXLS_alures,Devicedata);
    end

    wire [`ysyx_22050550_RegBus] LsuData   = io_Cache_dataok?cachedata:Dpi_rflag?Devicedata:64'h0;
`endif 
    
    /****************Cache 通信读写内存*******************/
    localparam Cachewait= 2'd0, CacheBusy = 2'd1;
    reg [1:0] Cache , Cachenext;
    always@(posedge clock)begin
        if(reset) Cache <= Cachewait;
        else Cache <= Cachenext;
    end
    always@(*)begin
        case (Cache)
            Cachewait: begin
                if (Pmem&&io_EXLS_rflag)begin
                    Cachenext = CacheBusy;
                end
                else if(Pmem&&io_EXLS_wflag) begin
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
    wire cachebusy = (Cache == Cachewait && io_Cache_valid) || (Cache==CacheBusy && (!(io_Cache_dataok)));
    wire lsubusy = DeviceReadBusy || DeviceWriteBusy || cachebusy   ;
    wire lsuvalid = !lsubusy                                        ;
    wire [`ysyx_22050550_RegBus] cachedata = io_Cache_data          ;
    //for faster
    //
    reg [`ysyx_22050550_RegBus] maskData ;
    always @(*) begin
             if (!io_EXLS_rflag) maskData <= 0;
        else if (io_EXLS_func3 ==`ysyx_22050550_LB ) maskData <= {{(56){LsuData[7]}},LsuData[7:0]}  ;   
        else if (io_EXLS_func3 ==`ysyx_22050550_LH ) maskData <= {{(48){LsuData[15]}},LsuData[15:0]};
        else if (io_EXLS_func3 ==`ysyx_22050550_LW ) maskData <= {{(32){LsuData[31]}},LsuData[31:0]};
        else if (io_EXLS_func3 ==`ysyx_22050550_LD ) maskData <= LsuData                            ;   
        else if (io_EXLS_func3 ==`ysyx_22050550_LWU) maskData <= {{(32){1'b0}},LsuData[31:0]}       ;   
        else if (io_EXLS_func3 ==`ysyx_22050550_LHU) maskData <= {{(48){1'b0}},LsuData[15:0]}       ;   
        else if (io_EXLS_func3 ==`ysyx_22050550_LBU) maskData <= {{(56){1'b0}},LsuData[7:0]}        ; 
        else                                         maskData <= LsuData                            ; 
    end
    /*
    wire [`ysyx_22050550_RegBus] maskData ;
    assign maskData = io_EXLS_func3 ==`ysyx_22050550_LB  ? {{(56){LsuData[7]}},LsuData[7:0]}  :    
                      io_EXLS_func3 ==`ysyx_22050550_LH  ? {{(48){LsuData[15]}},LsuData[15:0]}:
                      io_EXLS_func3 ==`ysyx_22050550_LW  ? {{(32){LsuData[31]}},LsuData[31:0]}:
                      io_EXLS_func3 ==`ysyx_22050550_LD  ? LsuData                            :      
                      io_EXLS_func3 ==`ysyx_22050550_LWU ? {{(32){1'b0}},LsuData[31:0]}       :      
                      io_EXLS_func3 ==`ysyx_22050550_LHU ? {{(48){1'b0}},LsuData[15:0]}       :       
                      io_EXLS_func3 ==`ysyx_22050550_LBU ? {{(56){1'b0}},LsuData[7:0]}:   LsuData; 
    */
    /*
    ysyx_22050550_MuxKeyWithDefault#(7,3,`ysyx_22050550_REGWIDTH) LsuDataMux(
        .out(maskData),.key(io_EXLS_func3),.default_out(LsuData),.lut({
        `ysyx_22050550_LB   ,   {{(56){LsuData[7]}},LsuData[7:0]}   ,  
        `ysyx_22050550_LH   ,   {{(48){LsuData[15]}},LsuData[15:0]} ,
        `ysyx_22050550_LW   ,   {{(32){LsuData[31]}},LsuData[31:0]} ,
        `ysyx_22050550_LD   ,   LsuData                             ,
        `ysyx_22050550_LWU  ,   {{(32){1'b0}},LsuData[31:0]}        , 
        `ysyx_22050550_LHU  ,   {{(48){1'b0}},LsuData[15:0]}        ,  
        `ysyx_22050550_LBU  ,   {{(56){1'b0}},LsuData[7:0]}
    }));
    */
    assign io_LSWB_pc       =      io_EXLS_pc                         ;
    assign io_LSWB_inst     =      io_EXLS_inst                       ;
    /*************valid-ready握手信号****************/      
    assign io_LSWB_valid    =      io_EXLS_valid    && lsuvalid       ;
    assign io_ReadyEX_ready =      io_ReadyWB_ready && (!lsubusy)     ;

    assign io_LSWB_rs1      =      io_EXLS_rs1addr                    ;
    assign io_LSWB_abort    =      io_EXLS_abort                      ;
    //这个是为了记录写内存或设备的写数据  以便更好地进行difftest;
    assign io_LSWB_rs2      =       io_EXLS_rs2                       ;
                                //io_EXLS_wmask==8'hff ? io_EXLS_rs2:
                                //io_EXLS_wmask==8'h0f ? {{(32){1'b0}},io_EXLS_rs2[31:0]}: 
                                //io_EXLS_wmask==8'h03 ? {{(48){1'b0}},io_EXLS_rs2[15:0]}:  
                                //io_EXLS_wmask==8'h01 ? {{(56){1'b0}},io_EXLS_rs2[7:0]} : io_EXLS_rs2;
    assign io_LSWB_wdaddr   =      io_EXLS_waddr                      ;
    assign io_LSWB_wen      =      io_EXLS_wen                        ;
    assign io_LSWB_csrflag  =      io_EXLS_csrflag                    ;
    assign io_LSWB_readflag =      io_EXLS_rflag                      ;
//    assign io_LSWB_writeflag=      io_EXLS_wflag                      ; //***
    assign io_LSWB_jalrflag =      io_EXLS_jalrflag                   ;
    assign io_LSWB_ecallflag=      io_EXLS_ecallflag                  ;
    assign io_LSWB_mretflag =      io_EXLS_mretflag                   ;
    assign io_LSWB_ebreak   =      io_EXLS_ebreak                     ;
    assign io_LSWB_SkipRef  =      (io_EXLS_wflag||io_EXLS_rflag) &&(!Pmem);//读写内存并且非pmem地址
    assign io_LSWB_func3    =      io_EXLS_func3                      ;
    //assign io_LSWB_func7    =      io_EXLS_func7                      ;
    assign io_LSWB_NextPc   =      io_EXLS_NextPc                     ;
    assign io_LSWB_alures   =      io_EXLS_alures                     ;
    assign io_LSWB_lsures   =      maskData                           ; 
    
    //
    //assign io_LSU_waddr = io_EXLS_waddr                                     ; 
    //assign io_LSU_valid = io_EXLS_wen && io_LSWB_valid && !io_EXLS_csrflag  ;
    //assign io_LSU_rdata = io_EXLS_rflag ?io_LSWB_lsures : io_LSWB_alures    ;
    
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

