`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_IDU(
  input         clock                     ,
                reset                     ,
 //IF
  input  [31:0]     io_IFID_inst,
  input  [63:0]     io_IFID_pc,
  input             io_IFID_valid,
  //REGFILE
  input  [63:0]     io_RegFileID_CSRs_mepc,
                    io_RegFileID_CSRs_mtvec,
                    io_RegFileID_CSRs_mip,
                    io_RegFileID_rdata1,
                    io_RegFileID_rdata2,
  // Ex
  input             io_ReadyEX_ready,
                    io_Score_RScore_busy1,
                    io_Score_RScore_busy2,
  // bypass
  input  [63:0]     io_Pass_rdata,
  input             io_Pass_pass1,
                    io_Pass_pass2,
    //regpc
  input  [63:0]     io_RegPc_nextpc,
  output [4:0]      io_IDRegFile_raddr1,
                    io_IDRegFile_raddr2,
  output [63:0]     io_idex_pc,
  output [31:0]     io_idex_inst,
  //output [2:0]      io_idex_instType,
  output            io_idex_valid,
  output [4:0]      io_idex_rs1addr,
  output            io_idex_abort,
                    //io_idex_jalr,
  output [63:0]     io_idex_rs2,
                    io_idex_imm,
                    io_idex_AluOp_rd1,
                    io_idex_AluOp_rd2,
  output [4:0]      io_idex_AluOp_op,
  output [4:0]      io_idex_waddr,
  output            io_idex_wen,
                    io_idex_wflag,
                    io_idex_rflag,
                    io_idex_csrflag,
                    io_idex_jalrflag,
                    io_idex_ecallflag,
                    io_idex_mretflag,
                    io_idex_breakflag,
  output [7:0]      io_idex_wmask,
  output [1:0]      io_idex_choose,
  output            io_idex_alumask,
  output [2:0]      io_idex_func3,
  output [6:0]      io_idex_func7,
  output [63:0]     io_idex_NextPc,
  output [3:0]      io_IDNPC_jal,
  output [63:0]     io_IDNPC_IdPc,
                    io_IDNPC_imm,
                    io_IDNPC_rs1,
                    io_IDNPC_ecallpc,
                    io_IDNPC_mretpc,
  output            io_IDNPC_valid,
                    io_ReadyIF_ready,
  //                  io_Score_WScore_wen,
  //output [4:0]      io_Score_WScore_waddr,
  output            io_Score_RScore_valid,
  output            io_Score_RScore_wen ,
  output [4:0]      io_Score_RScore_rdaddr1,
                    io_Score_RScore_rdaddr2,
                    io_Score_RScore_waddr  ,
                    io_Pass_rs1,
                    io_Pass_rs2,
  output            io_Pass_valid   
);
    //assign io_idex_pc = io_IFID_pc;
    //assign io_idex_inst = io_IFID_inst;
    //assign io_IDNPC_IdPc =io_IFID_pc;

    localparam  R_type   = 3'd0,I_type = 3'd1,S_type   = 3'd2,
    B_type = 3'd3,U_type = 3'd4,J_type = 3'd5,Bad_type = 3'd6;
   
    wire    [6:0] opcode = io_IFID_inst    [6:0];   
    wire    [2:0] func3  = io_IFID_inst    [14:12];
    //I型指令指示逻辑是逻辑移位还是算术移位  
    wire          ALflag = io_IFID_inst    [30];
    wire    [6:0] func7  = io_IFID_inst    [31:25]; 
    wire    [5:0] shamt  = io_IFID_inst    [25:20];
    wire    [4:0] rs1    = io_IFID_inst    [19:15]; 
    wire    [4:0] rs2    = io_IFID_inst    [24:20]; 
    wire    [4:0] rd     = io_IFID_inst    [11:7]; 
    //assign io_IDRegFile_raddr1 = rs1;
    //assign io_IDRegFile_raddr2 = rs2;
    //assign io_idex_waddr       = rd ;
    wire [`ysyx_22050550_RegBus] I_imm= {{(`ysyx_22050550_REGWIDTH-12){io_IFID_inst[31]}},io_IFID_inst[31:20]};
    wire [`ysyx_22050550_RegBus] U_imm= {{(`ysyx_22050550_REGWIDTH-32){io_IFID_inst[31]}},io_IFID_inst[31:12],{12{1'b0}}};
    wire [`ysyx_22050550_RegBus] J_imm= {{(`ysyx_22050550_REGWIDTH-20){io_IFID_inst[31]}},io_IFID_inst[19:12],io_IFID_inst[20],io_IFID_inst[30:21],1'b0};
    wire [`ysyx_22050550_RegBus] B_imm= {{(`ysyx_22050550_REGWIDTH-12){io_IFID_inst[31]}},io_IFID_inst[7],io_IFID_inst[30:25],io_IFID_inst[11:8],1'b0};
    wire [`ysyx_22050550_RegBus] S_imm= {{(`ysyx_22050550_REGWIDTH-12){io_IFID_inst[31]}},io_IFID_inst[31:25],io_IFID_inst[11:7]};
    wire    [2:0] InstType;
    wire    [`ysyx_22050550_RegBus] imm  ;
    ysyx_22050550_MuxKeyWithDefault#(12,7,3) InstMux(
        .out(InstType),.key(opcode),.default_out(Bad_type),.lut({
        `ysyx_22050550_R1   ,R_type,`ysyx_22050550_R2   ,R_type,
        `ysyx_22050550_I1   ,I_type,`ysyx_22050550_I2   ,I_type,
        `ysyx_22050550_I3   ,I_type,`ysyx_22050550_I4   ,I_type,
        `ysyx_22050550_I5   ,I_type,
        `ysyx_22050550_S1   ,S_type,
        `ysyx_22050550_U1   ,U_type,`ysyx_22050550_U2   ,U_type,
        `ysyx_22050550_J1   ,J_type,`ysyx_22050550_B1   ,B_type
    }));
    //assign io_idex_instType = InstType;
    //assign io_idex_wen = (InstType !=S_type) && (InstType != B_type)&& (InstType != Bad_type);
    ysyx_22050550_MuxKeyWithDefault#(5,3,`ysyx_22050550_REGWIDTH) ImmMux(
        .out(imm),.key(InstType),.default_out(`ysyx_22050550_REGWIDTH'h0),.lut({
        I_type   ,I_imm,
        U_type   ,U_imm,
        J_type   ,J_imm,
        B_type   ,B_imm,
        S_type   ,S_imm
    }));
    //assign io_idex_imm = imm;
    //assign io_IDNPC_imm = imm;
    reg [`ysyx_22050550_RegBus] rd1,rd2;
    wire [`ysyx_22050550_RegBus] rData1,rData2;
    //注意一下Busy了才使用旁路转发的数据，不然的话比如某些指令有对0号寄存器写入的行为
    //会把写入的值给转发过来，但是取0号寄存器的时候，只是要一个0
    assign rData1  = (io_Score_RScore_busy1&io_Pass_pass1)?io_Pass_rdata:io_RegFileID_rdata1;
    assign rData2  = (io_Score_RScore_busy2&io_Pass_pass2)?io_Pass_rdata:io_RegFileID_rdata2;
    //load
    //wbu还有一个choose信号用来指示使用从内存里读出来的还是用alu计算的 这里与readflag是一个信号
    wire readflag = (opcode == `ysyx_22050550_I3);
    //func3 指示lsu模块加载时的截断以及是否进行符号位拓展
    //chisel 的lsumask换成这个func3
    //assign io_idex_func3 = func3;
    //用来指示EXU模块是否需要对计算结果进行32位的符号拓展
    //chisel alumask 现在换成这一个flag  
    //addi sraiw srliw ... Rtype MULW divw...
    wire alumaskflag = (opcode == `ysyx_22050550_I1) || (opcode == `ysyx_22050550_R2);
    //assign io_idex_alumask = alumaskflag;
    //I型指令选择shamt
    wire shamtflag   =  io_idex_inst[31:26]==0 &&(opcode==`ysyx_22050550_I1 || opcode==`ysyx_22050550_I2) && (func3 == 3'b101 || func3 == 3'b001);
    //处理一下csr指令
    //目前只考虑csrrs:t|x[rs1] csrrw:x[rs1]  x[rd] = t
    //csrflag拉高的时候 wbu阶段写回 csr寄存器的读出和写回都放到WBU阶段去做 用的时候截取Imm低12位即可
    //csrflag拉高了 那么在WBU阶段  rd1就是x[rs1] rd2就是t 在WBU阶段作运算就行
    //根据func3决定做什么运算，并且x[rd]在csrflag拉高的情况下就不选择alu或者lsu的运算结果了
    //exu阶段发现csrflag拉高的时候，把alures直接赋值位x[rs1]
    //这样子I型指令就确定了。
    // mret 和 ecall的时候要拉低
    wire csrflag = opcode == `ysyx_22050550_I5 && !ecallflag && !mret;
    //assign io_idex_csrflag = csrflag;
    //srliw sraiw 特殊情况要对x[rs1]进行阶段和(无)符号拓展后，再送给EXU 方便进行逻辑移位和算术移位
    wire srliw = opcode == `ysyx_22050550_I1 && (func3 == 3'b101) &&(func7[6:1]==6'b000000); 
    wire sraiw = opcode == `ysyx_22050550_I1 && (func3 == 3'b101) &&(func7[6:1]==6'b010000);
    wire [`ysyx_22050550_RegBus] Signedrs1  = {{32{rData1[31]}},rData1[31:0]};
    wire [`ysyx_22050550_RegBus] USignedrs1 = {{32{1'b0}},rData1[31:0]};
    wire [`ysyx_22050550_RegBus] Signedrs2  = {{32{rData2[31]}},rData2[31:0]};
    wire [`ysyx_22050550_RegBus] USignedrs2 = {{32{1'b0}},rData2[31:0]};
    //EXU 检测到jalr 采用加法
    wire jalrflag = opcode == `ysyx_22050550_I4;
    //assign io_idex_jalrflag = jalrflag;
    wire ecallflag = io_IFID_inst == `ysyx_22050550_INSTWIDTH'h00000073;
    //ecall flag拉高的时候WBU再对寄存器进行写入什么的
    //assign io_idex_ecallflag = ecallflag;
    //assign io_IDNPC_ecallpc = io_RegFileID_CSRs_mtvec;

    wire[4:0] Itype_Op;
    wire[9:0] ItypeOpKey = {func3,opcode};
    ysyx_22050550_MuxKeyWithDefault#(9,10,5) ItypeOpMux(
        .out(Itype_Op),.key(ItypeOpKey),.default_out(`ysyx_22050550_ADD),.lut({
        {3'b100,`ysyx_22050550_I2},`ysyx_22050550_XOR,//xori
        {3'b110,`ysyx_22050550_I2},`ysyx_22050550_OR ,//ori
        {3'b111,`ysyx_22050550_I2},`ysyx_22050550_AND,//andi
        {3'b011,`ysyx_22050550_I2},`ysyx_22050550_SLTU,//sltiu
        {3'b010,`ysyx_22050550_I2},`ysyx_22050550_SLT,//slti
        {3'b101,`ysyx_22050550_I2},ALflag?`ysyx_22050550_SRA:`ysyx_22050550_SRL,
        {3'b101,`ysyx_22050550_I1},ALflag?`ysyx_22050550_SRA:`ysyx_22050550_SRL,//
        {3'b001,`ysyx_22050550_I2},`ysyx_22050550_SLL,
        {3'b001,`ysyx_22050550_I1},`ysyx_22050550_SLLW
    }));
    wire[4:0] Rtype_Op;
    wire[16:0] RtypeOpKey = {func7,func3,opcode};
    ysyx_22050550_MuxKeyWithDefault#(20,17,5) RtypeOpMux(
        .out(Rtype_Op),.key(RtypeOpKey),.default_out(`ysyx_22050550_ADD),.lut({
        {7'b0100000,3'b000,`ysyx_22050550_R1},`ysyx_22050550_SUB,
        {7'b0000001,3'b000,`ysyx_22050550_R1},`ysyx_22050550_MUL ,
        {7'b0000001,3'b101,`ysyx_22050550_R1},`ysyx_22050550_DIV,
        {7'b0000001,3'b100,`ysyx_22050550_R1},`ysyx_22050550_DIVS,
        {7'b0000000,3'b100,`ysyx_22050550_R1},`ysyx_22050550_XOR,
        {7'b0000001,3'b111,`ysyx_22050550_R1},`ysyx_22050550_REM, // REMU
        {7'b0000000,3'b010,`ysyx_22050550_R1},`ysyx_22050550_SLT,
        {7'b0000000,3'b011,`ysyx_22050550_R1},`ysyx_22050550_SLTU,
        {7'b0100000,3'b000,`ysyx_22050550_R2},`ysyx_22050550_SUB,
        {7'b0000001,3'b000,`ysyx_22050550_R2},`ysyx_22050550_MUL,
        {7'b0000001,3'b100,`ysyx_22050550_R2},`ysyx_22050550_DIVS,
        {7'b0000001,3'b101,`ysyx_22050550_R2},`ysyx_22050550_DIV,
        {7'b0000001,3'b110,`ysyx_22050550_R2},`ysyx_22050550_REMS,
        {7'b0000000,3'b001,`ysyx_22050550_R2},`ysyx_22050550_SLLW,
        {7'b0000000,3'b001,`ysyx_22050550_R1},`ysyx_22050550_SLL,
        {7'b0100000,3'b101,`ysyx_22050550_R2},`ysyx_22050550_SRA,
        {7'b0000000,3'b101,`ysyx_22050550_R2},`ysyx_22050550_SRL,
        {7'b0000000,3'b101,`ysyx_22050550_R1},`ysyx_22050550_SRL,
        {7'b0000000,3'b111,`ysyx_22050550_R1},`ysyx_22050550_AND,
        {7'b0000000,3'b110,`ysyx_22050550_R1},`ysyx_22050550_OR
    }));
    wire mret = io_IFID_inst == 32'h30200073;
    assign io_idex_mretflag = mret;
    /*
    wire [4:0] lsumask; 
    ysyx_22050550_MuxKeyWithDefault#(7,3,5) LoadMux(
    .out(lsumask),.key(func3),.default_out(5'b11111),.lut({
        `ysyx_22050550_LB ,5'b10001,
        `ysyx_22050550_LH ,5'b10011,
        `ysyx_22050550_LW ,5'b10111,
        `ysyx_22050550_LD ,5'b11111,
        `ysyx_22050550_LWU,5'b10001,
        `ysyx_22050550_LHU,5'b10001,
        `ysyx_22050550_LBU,5'b10001
    }));
    */
    //Rtype 对src进行掩模的flag
    wire divw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b1) &&(func3 == 3'b100);
    wire divuw = (opcode == `ysyx_22050550_R2) && (func7 == 7'b1) &&(func3 == 3'b101);
    wire remw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b1) &&(func3 == 3'b110);
    wire sllw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b0) &&(func3 == 3'b001);
    wire sraw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b0100000) &&(func3 == 3'b101);
    wire srlw  = (opcode == `ysyx_22050550_R2) && (func7 == 7'b0) &&(func3 == 3'b101);
    wire srl   = (opcode == `ysyx_22050550_R1) && (func7 == 7'b0) &&(func3 == 3'b101);
    wire sign32  = divw || divuw || remw;
    wire rs2low5 = srlw || sllw  || sraw;
    //Btype相关 这里与chisel相同的思路
    wire[4:0] Btype;
    wire[2:0] BtypeKey = {func3};
    ysyx_22050550_MuxKeyWithDefault#(6,3,5) BtypeOpMux(
        .out(Btype),.key(BtypeKey),.default_out(5'd0),.lut({
        3'b000,5'b01000,//BEQ  = 000    b01000
        3'b001,5'b10000,//BNE  = 001    b10000
        3'b101,5'b01100,//BGE  = 101    b01100
        3'b111,5'b01101,//BGEU = 111    b01101
        3'b100,5'b00010,//BLT  = 100    b00010
        3'b110,5'b00011 //BLTU = 110    b00011
    }));
    wire Unless = rData1 < rData2; wire Unbigger = rData1 > rData2;
    wire Sless  = $signed(rData1) < $signed(rData2); wire Sbigger  = $signed(rData1) > $signed(rData2);
    wire less = Btype[0] ? Unless : Sless; wire bigger = Btype[0] ? Unbigger : Sbigger;
    wire eq = rData1 == rData2; wire ueq = rData1 != rData2;
    wire jump = InstType == B_type &&((less&Btype[1])||(bigger&Btype[2])||(eq&Btype[3])||(ueq&Btype[4]));
    //S_type
    wire writeflag = opcode == `ysyx_22050550_S1;
    wire [7:0] wmask;
    wire[2:0] StypeKey = {func3};
    ysyx_22050550_MuxKeyWithDefault#(4,3,8) StypeMaskMux(
        .out(wmask),.key(StypeKey),.default_out(8'd0),.lut({
        3'b011,8'b11111111,//
        3'b010,8'b00001111,
        3'b001,8'b00000011,
        3'b000,8'b00000001
    }));
    //U_type
    wire aupic = opcode == `ysyx_22050550_U1;
    wire lui   = opcode == `ysyx_22050550_U2;

    //final op
    wire[4:0] ExuOp;
    ysyx_22050550_MuxKeyWithDefault#(2,3,5) ExuOpMux(
        .out(ExuOp),.key(InstType),.default_out(`ysyx_22050550_ADD),.lut({
            I_type , Itype_Op,
            R_type , Rtype_Op
    }));
    wire Jalflag = InstType == J_type;
    wire [3:0] jal = jalrflag?4'd2:ecallflag?4'd4:jump ?4'd3 :mret?4'd5 :Jalflag?4'd1: 4'd0;
    always@(*)begin
        case (InstType)
            I_type : begin
                rd1 = jalrflag?io_IFID_pc:sraiw?Signedrs1:srliw?USignedrs1:rData1; 
                rd2 = csrflag? 64'd0 : jalrflag?4:shamtflag ?{{58{1'b0}},shamt} : imm; 
            end 
            R_type : begin
                rd1 = sign32 ? Signedrs1 : srlw ? USignedrs1: sraw ? Signedrs1 : rData1;
                rd2 = sign32 ? Signedrs2 : rs2low5 ?{{59{1'b0}},rData2[4:0]}:srl?{{58{1'b0}},rData2[5:0]}:rData2;
            end
            B_type : begin
                rd1 = 0;
                rd2 = 0;
            end
            S_type : begin
                rd1 = rData1;
                rd2 = imm;
            end
            U_type : begin
                rd1 = aupic?io_IFID_pc:lui?0:0;
                rd2 = imm;
            end
            J_type : begin
                rd1 = io_IFID_pc;
                rd2 = `ysyx_22050550_REGWIDTH'd4;
            end
            default: begin
                rd1 = 0;
                rd2 = 0;
            end
        endcase
    end
    
    //流水冲突处理 计分板以及旁路转发
    wire ebreak = io_IFID_inst == `ysyx_22050550_INSTWIDTH'h00100073;
    wire realbusy1 = io_Score_RScore_busy1 & (!io_Pass_pass1);
    wire realbusy2 = io_Score_RScore_busy2 & (!io_Pass_pass2);


    assign io_IDRegFile_raddr1  = rs1;
    assign io_IDRegFile_raddr2  = rs2;
    assign io_idex_pc           = io_IFID_pc;
    assign io_idex_inst         = io_IFID_inst;
    /************valid握手信号***************/
    assign io_idex_valid        = io_IFID_valid && (!realbusy1) && (!realbusy2);//*
    assign io_idex_rs1addr      = rs1;
    assign io_idex_abort        = InstType == Bad_type;
    assign io_idex_rs2          = rData2;
    assign io_idex_imm          = imm;
    assign io_idex_AluOp_rd1    = rd1;
    assign io_idex_AluOp_rd2    = rd2;
    assign io_idex_AluOp_op     = ExuOp;
    assign io_idex_waddr        = rd;
    //注意ret指令也会把wen拉高，但是这个时候rd
    assign io_idex_wen          = (InstType !=S_type) && (InstType != B_type)&& (InstType != Bad_type);
    assign io_idex_wflag        = writeflag;
    assign io_idex_rflag        = readflag;
    assign io_idex_csrflag      = csrflag;
    assign io_idex_jalrflag     = jalrflag;
    assign io_idex_ecallflag    = ecallflag;
    assign io_idex_breakflag    = ebreak;
    assign io_idex_mretflag     = mret;
    assign io_idex_wmask        = wmask;
    assign io_idex_alumask      = alumaskflag;
    assign io_idex_func3        = func3;
    assign io_idex_func7        = func7;
    assign io_idex_NextPc       = io_RegPc_nextpc;
    assign io_IDNPC_jal         = jal;
    assign io_IDNPC_IdPc        = io_IFID_pc;
    assign io_IDNPC_imm         = imm;
    assign io_IDNPC_rs1         = rData1;
    assign io_IDNPC_ecallpc     = io_RegFileID_CSRs_mtvec;
    assign io_IDNPC_mretpc      = io_RegFileID_CSRs_mepc ;
    assign io_IDNPC_valid       = io_idex_valid;
    /************计分板以及旁路转发**************/
    assign io_ReadyIF_ready = io_ReadyEX_ready & (!realbusy1) & (!realbusy2) & (!ebreak);//*
    assign io_Score_RScore_rdaddr1 = rs1; 
    assign io_Score_RScore_rdaddr2 = rs2;
    assign io_Score_RScore_valid = io_IFID_valid & (!ebreak);
    assign io_Score_RScore_wen   = io_idex_valid && io_idex_wen &&io_ReadyEX_ready;
    assign io_Score_RScore_waddr = rd;
    assign io_Pass_rs1 = rs1; 
    assign io_Pass_rs2 = rs2;
    //assign io_Score_WScore_wen = io_idex_wen && io_ReadyEX_ready && io_idex_valid;
    //assign io_Score_WScore_waddr = io_idex_waddr;

    assign io_Pass_valid = io_IFID_valid;

`ifdef ysyx_22050550_CACHEDEBUG
    always@(posedge clock) begin
        if (io_idex_pc == `ysyx_22050550_DEBUGPC) begin
            $display("src1:%x src2:%x rd1:%x rd2:%x pass:%x",rd1,rd2,rData1,rData2,io_Pass_rdata);
        end
    end
`endif


endmodule