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
    
    wire [`ysyx_22050550_RegBus] jumpc = 
    !(|Id_jal)              ? Pc_4                          :     
    (Id_jal[0] || Id_jal[2])? (Id_Pc + Id_imm)              :
    Id_jal[4]               ? (Id_imm + Id_rs1) & (~(64'h1)):
    Id_jal[3]               ? Id_ecallpc                    :
    Id_jal[1]               ? Id_mretpc                     : Pc_4;
    
    wire wen;
    assign wen = ready || (|Id_jal && Id_valid);
    ysyx_22050550_Reg #(`ysyx_22050550_REGWIDTH,`ysyx_22050550_REGWIDTH'h80000000) regpc (
        .reset(reset),
        .clock(clock),
        .wen(wen),
        .din(jumpc),
        .dout(RegPc)
    );

    assign npc = ((Id_jal != 5'd0 && Id_valid))? jumpc:RegPc;
    assign NextPc = npc;
endmodule
