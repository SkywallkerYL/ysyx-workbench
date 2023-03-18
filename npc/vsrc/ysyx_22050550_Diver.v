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
    output  [63:0]  io_Exu_Quotient       ,
    output  [63:0]  io_Exu_Remainder                     
);
    reg     [127:0] Divend;
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
        else if(io_Exu_DivValid) state <= next;
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
`ifdef ysyx_22050550_FAST
    always@(posedge clock) begin
        if      (state == Idle && io_Exu_DivValid)              DivRes <= choosdivend << 1      ;
        /*
        else if (state == Busy) begin
            if(divcount==0&&cmpRes >=cmpDivs) DivRes <= DivRes- Divsor+1      ;
            else if(divcount!=0) begin
                if(cmpRes >=cmpDivs) DivRes <= (DivRes- Divsor+1)<<1 ;
                else DivRes <= DivRes << 1           ;
            end
        end
        */
        else if (state == Busy && divcount==0&&cmpRes >=cmpDivs)DivRes <= DivRes- Divsor+1      ;
        else if (state == Busy && divcount!=0&&cmpRes >=cmpDivs)DivRes <= (DivRes- Divsor+1)<<1 ;
        else if (state == Busy && divcount!=0&&cmpRes < cmpDivs)DivRes <= DivRes << 1           ;
        else if (state == Valid)                                DivRes <= 0                     ;
    end 
    always@(posedge clock) begin
        if      (state == Idle && io_Exu_DivValid)divcount <= divcountInit       ;
        else if (state == Busy && divcount!=0    )divcount <= divcount - 1       ;
    end 
`else
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
`endif 

    assign io_Exu_DivReady = state == Idle;
    assign io_Exu_OutValid = state == Valid;
    wire [63:0] quotient  = io_Exu_Divw ? { {32{1'b0}},DivRes[31:0]}  : DivRes[63:0];
    assign io_Exu_Quotient   = io_Exu_DivSigned == 2'b11 && symbol ? ~quotient+1:quotient;
    wire [63:0] remainder = io_Exu_Divw ? { {32{1'b0}},DivRes[63:32]} : DivRes[127:64];
    assign io_Exu_Remainder  = io_Exu_DivSigned == 2'b11 &&divendsign ? ~remainder+1 :remainder;
endmodule