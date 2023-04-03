`include "./vsrc/ysyx_22050550_define.v"
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
    //input           ce,
    output          [`ysyx_22050550_RegBus] npc,
    
    output          [`ysyx_22050550_RegBus] NextPc
);
    reg  [`ysyx_22050550_RegBus] RegPc ;
    wire [`ysyx_22050550_RegBus] Pc_4   = RegPc + 64'h4;
    //J B
    //{jalrflag,ecallflag,jump,mret,Jalflag} ;
    //wire [`ysyx_22050550_RegBus] jalpc  = (Id_jal == 4'd1 || Id_jal == 4'd3)?(Id_Pc + Id_imm):0;
    //wire [`ysyx_22050550_RegBus] jalrpc = Id_jal == 4'd2 ?(Id_imm + Id_rs1) & (~(64'h1)):0;
    //wire [`ysyx_22050550_RegBus] jumpc;
    //assign jumpc = 
    //Id_jal == 4'd0 ? Pc_4       :
    //Id_jal == 4'd1 ? jalpc      :
    //Id_jal == 4'd2 ? jalrpc     :
    //Id_jal == 4'd3 ? jalpc      :
    //Id_jal == 4'd4 ? Id_ecallpc :
    //Id_jal == 4'd5 ? Id_mretpc  :Pc_4;
    //wire [`ysyx_22050550_RegBus] jalpc  = (Id_jal[0] || Id_jal[2])?(Id_Pc + Id_imm) : 0     ;
    //wire [`ysyx_22050550_RegBus] jalrpc = Id_jal[4]?(Id_imm + Id_rs1) & (~(64'h1)):0  ;
    //faster
    reg  [`ysyx_22050550_RegBus] jumpc;
    always@(Id_jal) begin
             if (!(|Id_jal)              ) jumpc = Pc_4                          ;
        else if ((Id_jal[0] || Id_jal[2])) jumpc = (Id_Pc + Id_imm)              ;
        else if (Id_jal[4]               ) jumpc = (Id_imm + Id_rs1) & (~(64'h1));
        else if (Id_jal[3]               ) jumpc = Id_ecallpc                    ;
        else if (Id_jal[1]               ) jumpc = Id_mretpc                     ;
        else                               jumpc = Pc_4                          ;
    end
    /*
    wire [`ysyx_22050550_RegBus] jumpc = 
    !(|Id_jal)              ? Pc_4                          :     
    (Id_jal[0] || Id_jal[2])? (Id_Pc + Id_imm)              :
    Id_jal[4]               ? (Id_imm + Id_rs1) & (~(64'h1)):
    Id_jal[3]               ? Id_ecallpc                    :
    Id_jal[1]               ? Id_mretpc                     : Pc_4;
    */
    /*
    ysyx_22050550_MuxKeyWithDefault #(6,4,`ysyx_22050550_REGWIDTH) PCMUX(
        .out(jumpc),.key(Id_jal),.default_out(Pc_4),.lut({
            4'd0,Pc_4       ,
            4'd1,jalpc      ,
            4'd2,jalrpc     ,
            4'd3,jalpc      ,
            4'd4,Id_ecallpc ,
            4'd5,Id_mretpc      
        })
    );
    */
    wire wen;
    assign wen = ready || (|Id_jal && Id_valid);
`ifdef ysyx_22050550_FAST
    always @( posedge clock) begin
        if(reset)     RegPc <= `ysyx_22050550_REGWIDTH'h80000000;
        else if (wen) RegPc <= jumpc;
    end
`else 
    ysyx_22050550_Reg #(`ysyx_22050550_REGWIDTH,`ysyx_22050550_REGWIDTH'h80000000) regpc (
        .reset(reset),
        .clock(clock),
        .wen(wen),
        .din(jumpc),
        .dout(RegPc)
    );
`endif
    assign npc = ((Id_jal != 5'd0 && Id_valid))? jumpc:RegPc;
    assign NextPc = npc;
endmodule