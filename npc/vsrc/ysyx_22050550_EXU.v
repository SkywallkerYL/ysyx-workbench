`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
//执行
module ysyx_22050550_EXU (
    input                                           clk         ,
    input                                           rst         ,
    input  reg [`ysyx_22050550_PCBus]               pc_i        ,   
    input  reg [`ysyx_22050550_InstBus]             instr_i     ,
    input  reg [`ysyx_22050550_RegBus]              op1_i       ,
    input  reg [`ysyx_22050550_RegBus]              op2_i       ,
    input  reg[4:0]                                 rd_addr_i   ,
    input  reg                                      rden_i      ,

    output  reg [4:0]                               o_rd        ,
    output  reg                                     o_wen       ,
    output  reg [`ysyx_22050550_CPUWIDTH-1:0]       o_wdata     ,
    output  reg                                     e_break                
    
);

    wire        [6:0]                       opcode ;  
    wire        [2:0]                       func3  ; 
    wire                                    func7   ;
    wire        [4:0]                       rs1     ;
    wire        [4:0]                       rs2     ;
    wire        [4:0]                       rd      ;
    wire        [11:0]                      imm     ;

    assign opcode = instr_i[6:0];
    assign func3  = instr_i[14:12];
    assign func7  = instr_i[30];
    assign rs1 = instr_i [19:15];
    assign rs2 = instr_i [24:20];
    assign rd  = instr_i [11:7];
    assign func3  = instr_i[14:12];
    assign imm = instr_i [31:20];

    always @(*) begin
        case (opcode) 
            `ysyx_22050550_I_type_alu :begin
                case (func3) 
                   3'b000: begin 
                        o_wdata = op1_i+op2_i;
                        o_rd = rd_addr_i;
                        o_wen = rden_i;
                        e_break = ~`ysyx_22050550_ebreakflag;
                   end
                    default: begin
                        o_wdata = `ysyx_22050550_RegWidth'b0;
                        o_rd = 5'b0;
                        o_wen = `ysyx_22050550_WriteDisable;
                        e_break = ~`ysyx_22050550_ebreakflag;
                    end
                endcase
            end
            `ysyx_22050550_I_type_ebreak :begin
                case (imm) 
                   12'b001: begin 
                        o_wdata = `ysyx_22050550_RegWidth'b0;
                        o_rd = 5'b0;
                        o_wen = `ysyx_22050550_WriteDisable;
                        e_break = `ysyx_22050550_ebreakflag;
                   end
                    default: begin
                        o_wdata = `ysyx_22050550_RegWidth'b0;
                        o_rd = 5'b0;
                        o_wen = `ysyx_22050550_WriteDisable;
                        e_break = ~`ysyx_22050550_ebreakflag;
                    end
                endcase
            end

        default:begin
            o_wdata = `ysyx_22050550_RegWidth'b0; 
            o_rd = 5'b0;
            o_wen = `ysyx_22050550_WriteDisable;
            e_break = ~`ysyx_22050550_ebreakflag;
        end
        endcase
    end


    /*
    //根据func3来决定需要运算器执行的操作
    ysyx_22050550_alu #(`ysyx_22050550_RegWidth) alucpu(
        .a(op1_i),
        .b(op2_i),
        .func(func3),
        .out(res),
        .overflowo(),
        .carryo()
    );
    */
    //回写通过另外的模块实现
    //根据计算的结果来进行寄存器的回写
    /*
    ysyx_22050550_Regfile regexu(
        .clk(clk),
        .rst(rst),
        .wen(`ysyx_22050550_WriteEnable),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .wdata(result),
        .rd_data1(regdata1),
        .rd_data2(regdata2)
    );
    */


endmodule