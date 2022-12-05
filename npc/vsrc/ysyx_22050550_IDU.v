`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_IDU (
    //input                                       rst    ,
    //from IF
    input wire [`ysyx_22050550_PCBus]               pc_i        ,
    input wire [`ysyx_22050550_InstBus]             instr_i     ,    
    //from regs
    input wire [`ysyx_22050550_RegBus]              rs1_data_i  ,
    input wire [`ysyx_22050550_RegBus]              rs2_data_i  ,
    //to regs
    output reg [`ysyx_22050550_RegAddrBus]          rs1_addr_o  ,
    output reg [`ysyx_22050550_RegAddrBus]          rs2_addr_o  ,
    // to exu
    output  reg [`ysyx_22050550_PCBus]              pc_o        ,
    output  reg [`ysyx_22050550_InstBus]            instr_o     ,
    output  reg [`ysyx_22050550_RegBus]             op1_o       ,
    output  reg [`ysyx_22050550_RegBus]             op2_o       ,
    output  reg [4:0]                               rd_addr_o   ,
    output  reg                                     rden_o   
);
    //wire I_type;
    //wire U_type;
    //wire J_type;
    //wire B_type;
    //wire S_type;
    wire    [6:0]                           opcode;  
    wire        [2:0]                       func3  ; 
    wire                                    func7   ;
    wire        [4:0]                       rs1     ;
    wire        [4:0]                       rs2     ;
    wire        [4:0]                       rd      ;
    wire     [`ysyx_22050550_ImmWidth-1:0]      imm   ;

    wire [`ysyx_22050550_ImmBus] I_imm;
    wire [`ysyx_22050550_ImmBus] U_imm;
    wire [`ysyx_22050550_ImmBus] J_imm;
    wire [`ysyx_22050550_ImmBus] B_imm;
    wire [`ysyx_22050550_ImmBus] S_imm;

    assign opcode = instr_i[6:0];
    assign func3  = instr_i[14:12];
    assign func7  = instr_i[30];
    assign rs1 = instr_i [19:15];
    assign rs2 = instr_i [24:20];
    assign rd  = instr_i [11:7];

    assign I_imm = {{(`ysyx_22050550_ImmWidth-12){instr_i[31]}},instr_i[31:20]};
    assign U_imm = {{(`ysyx_22050550_ImmWidth-32){instr_i[31]}},instr_i[31:12],{12{1'b0}}};
    assign J_imm = {{(`ysyx_22050550_ImmWidth-20){instr_i[31]}},instr_i[19:12],instr_i[20],instr_i[30:21],1'b0};
    assign B_imm = {{(`ysyx_22050550_ImmWidth-12){instr_i[31]}},instr_i[7],instr_i[30:25],instr_i[11:8],1'b0};
    assign S_imm = {{(`ysyx_22050550_ImmWidth-12){instr_i[31]}},instr_i[31:25],instr_i[11:7]};

    //assign I_type = (instr[6:0]==`jalr) | (instr[6:0] == `load) | (instr[6:0] == `I_type);
    //assign U_type = (instr[6:0]==`lui)  | (instr[6:0] == `auipc);
    //assign J_type = (instr[6:0]==`jal);
    //assign B_type = (instr[6:0]==`B_type);
    //assign S_type = (instr[6:0]==`store);

    ysyx_22050550_MuxKeyWithDefault#(8,7,`ysyx_22050550_ImmWidth) immdecode(.out(imm),.key(opcode),.default_out(`ysyx_22050550_ImmWidth'h0),.lut({
        `ysyx_22050550_jalr   ,I_imm,
        `ysyx_22050550_load   ,I_imm,
        `ysyx_22050550_I_type_alu   ,I_imm,
        `ysyx_22050550_lui    ,U_imm,
        `ysyx_22050550_auipc  ,U_imm,
        `ysyx_22050550_jal    ,J_imm,
        `ysyx_22050550_B_type ,B_imm,
        `ysyx_22050550_store  ,S_imm
    }));
    //  注意这里输入的IMM已经是经过有符号扩展的cpuwidth数
    //reg  [`ysyx_22050550_RegBus]    result;//某些指令还需要截断，因此加一个
    //reg  [`ysyx_22050550_InstBus]   nextpc;
    //reg  [`ysyx_22050550_RegBus]    regrddata;
    //根据opcode来决定要执行的指令以及操作数
    //目前先这样写，应该通过MUX来确定到底是哪几个操作数


    always @(*) begin
        instr_o = instr_i;
        pc_o = pc_i;
        case (opcode) 
            `ysyx_22050550_I_type_alu :begin
                //case (func3) 
                   // 3'b000: begin 
                rs1_addr_o = rs1;
                rs2_addr_o = rs2;
                op1_o = rs1_data_i;
                op2_o = imm     ;
                rd_addr_o = rd  ;
                rden_o = 1'b1;
                   // end
                   /*
                    default: begin
                    rs1_addr_o = 5'b0;
                    rs2_addr_o = 5'b0;
                    op1_o = `ysyx_22050550_CPUWIDTH'h0;
                    op2_o = `ysyx_22050550_CPUWIDTH'h0;
                    rd_addr_o = 5'h0  ;
                    rden_o = 1'b1;
                    end
                    */
                //endcase
            end

        default:begin
                rs1_addr_o = 5'b0;
                rs2_addr_o = 5'b0;
                op1_o = `ysyx_22050550_CPUWIDTH'h0;
                op2_o = `ysyx_22050550_CPUWIDTH'h0;
                rd_addr_o = 5'h0  ;
                rden_o = 1'b0;
        end
        endcase
    end

endmodule