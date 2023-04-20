`include "./vsrc/ysyx_22050550_define.v"
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
    output [63:0]    io_Exu_ResultH      ,  
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
        else if (io_Exu_MulValid)state <= next;
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
                //if(io_Exu_Flush) next = Idle;
                if(ind != maxind) next = Busy;
                else next = Valid;
            end
            Valid: begin
                next = Idle;
            end
            default: next = Idle;
        endcase
    end
`ifdef ysyx_22050550_FAST
    always @(posedge clock) begin
        if(state == Busy)       Prod <= Prodin  ;
        else if (state == Valid)Prod <= 0       ;
    end
    wire [127:0] MultiplicandEx1 = {{32{1'b0}},io_Exu_Multiplicand,{32{1'b0}}};
    wire [127:0] MultiplicandEx2 = {io_Exu_Multiplicand,{64{1'b0}}};
    always @(posedge clock) begin
        if(state == Idle && io_Exu_MulValid) Sum <= io_Exu_Mulw ? MultiplicandEx1 : MultiplicandEx2;
    end
    always @(posedge clock) begin
        if(state == Busy)                           ind <= ind + 2;
        else if (state == Idle && io_Exu_MulValid)  ind <= 0      ;
    end
`else 
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
        .din(io_Exu_Mulw?{{64{1'b0}},io_Exu_Multiplicand}<<32:{{64{1'b0}},io_Exu_Multiplicand}<<64),
        .dout(Sum)
    );
    wire inden =  (state == Idle && io_Exu_MulValid) || (state == Busy);
    wire [5:0] indinput = (state == Idle && io_Exu_MulValid) ? 0 :(state == Busy) ? ind + 2:0;
    ysyx_22050550_Reg # (6,6'd0)IndReg(
        .clock(clock),
        .reset(reset),
        .wen(inden),
        .din(indinput),
        .dout(ind)
    );
`endif 
    assign io_Exu_MulReady = state == Idle;
    assign io_Exu_OutValid = state == Valid;
    assign io_Exu_ResultL  = Prod[63:0];
    assign io_Exu_ResultH  = Prod[127:64];

endmodule



