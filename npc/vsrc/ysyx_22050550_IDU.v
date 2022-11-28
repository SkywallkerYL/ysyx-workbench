`include "ysyx_22050550_define.v"
module ysyx_22050550_IDU (
    input                            rst    ,
    input reg[`ysyx_22050550_InstBus] pc     ,
    input reg[`ysyx_22050550_InstBus] instr,

    output  [6:0]                    opcode  ,
    output  [2:0]                    func3   ,
    output                           func7   ,
    output  [4:0]                    rs1     ,
    output  [4:0]                    rs2     ,
    output  [4:0]                    rd      ,
    output  [31:0]                   imm     
);
    //wire I_type;
    //wire U_type;
    //wire J_type;
    //wire B_type;
    //wire S_type;


    wire [`ysyx_22050550_ImmBus] I_imm;
    wire [`ysyx_22050550_ImmBus] U_imm;
    wire [`ysyx_22050550_ImmBus] J_imm;
    wire [`ysyx_22050550_ImmBus] B_imm;
    wire [`ysyx_22050550_ImmBus] S_imm;

    assign opcode = instr[6:0];
    assign func3  = instr[14:12];
    assign func7  = instr[30];
    assign rs1 = instr [19:15];
    assign rs2 = instr [24:20];
    assign rd  = instr [11:7];

    assign I_imm = {{20{instr[31]}},instr[31:20]};
    assign U_imm = {instr[31:12],{12{1'b0}}};
    assign J_imm = {{12{instr[31]}},instr[19:12],instr[20],instr[30:21],1'b0};
    assign B_imm = {{20{instr[31]}},instr[7],instr[30:25],instr[11:8],1'b0};
    assign S_imm = {{20{instr[31]}},instr[31:25],instr[11:7]};

    //assign I_type = (instr[6:0]==`jalr) | (instr[6:0] == `load) | (instr[6:0] == `I_type);
    //assign U_type = (instr[6:0]==`lui)  | (instr[6:0] == `auipc);
    //assign J_type = (instr[6:0]==`jal);
    //assign B_type = (instr[6:0]==`B_type);
    //assign S_type = (instr[6:0]==`store);

    ysyx_22050550_MuxKeyWithDefault#(8,7,`ysyx_22050550_INSTWIDTH) immdecode(.out(imm),.key(opcode),.default_out(`ysyx_22050550_INSTWIDTH'h0),.lut({
        `jalr   ,I_imm,
        `load   ,I_imm,
        `I_type ,I_imm,
        `lui    ,U_imm,
        `auipc  ,U_imm,
        `jal    ,J_imm,
        `B_type ,B_imm,
        `store  ,S_imm
    }));

endmodule