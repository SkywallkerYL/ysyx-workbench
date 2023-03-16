`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_PCREG(
    input           reset,
    input           clock,
    input                                       ready       ,
    input           [3:0]                       Id_jal      ,
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
    wire [`ysyx_22050550_RegBus] RegPc ;
    wire [`ysyx_22050550_RegBus] Pc_4   = RegPc + 64'h4;
    wire [`ysyx_22050550_RegBus] jalpc  = Id_Pc + Id_imm;
    wire [`ysyx_22050550_RegBus] jalrpc = (Id_imm + Id_rs1) & (~(64'h1));
    wire [`ysyx_22050550_RegBus] jumpc;
    assign jumpc = 
    Id_jal == 4'd0 ? Pc_4       :
    Id_jal == 4'd1 ? jalpc      :
    Id_jal == 4'd2 ? jalrpc     :
    Id_jal == 4'd3 ? jalpc      :
    Id_jal == 4'd4 ? Id_ecallpc :
    Id_jal == 4'd5 ? Id_mretpc  :Pc_4;
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
    assign wen = ready || (Id_jal != 4'd0 && Id_valid);
    ysyx_22050550_Reg #(`ysyx_22050550_REGWIDTH,`ysyx_22050550_REGWIDTH'h80000000) regpc (
        .reset(reset),
        .clock(clock),
        .wen(wen),
        .din(jumpc),
        .dout(RegPc)
    );
    assign npc = ((Id_jal != 4'd0 && Id_valid))? jumpc:RegPc;
    assign NextPc = npc;
endmodule