`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_cpu(
	input 								clk			,
	input 								rst			,
	input [`ysyx_22050550_InstBus] 		pc  		,
	input [`ysyx_22050550_InstBus]  	instr		,

	output reg [`ysyx_22050550_PCBus] 	npc  	
	//output reg [`ysyx_22050550_RegBus] res
);

wire [`ysyx_22050550_PCBus] nextpc;
wire [`ysyx_22050550_PCBus] if_pc;
assign nextpc = pc;
ysyx_22050550_pcreg pc_reg(
	.rst(rst),
	.clk(clk),
	.pc (nextpc),
	.ce(`ysyx_22050550_ChipEnable),
	.npc (if_pc)
);
//这里instr暂且直接从顶层拉进来
ysyx_22050550_IFU ifu(
	.pc         	(if_pc),
	.rom_inst   	(instr),
	.rom_pc_addr	(),
	.if_pc      	(ifid_pc),
	.if_inst		(ifid_inst)
);

wire [`ysyx_22050550_PCBus] ifid_pc		;
wire [`ysyx_22050550_InstBus] ifid_inst	;
wire [`ysyx_22050550_PCBus] id_pc		;
wire [`ysyx_22050550_InstBus] id_inst	;
ysyx_22050550_IF_ID  if_idu(
	.rst		(rst),      
	.clk       	(clk),
 	.if_pc    	(ifid_pc),
 	.if_inst  	(ifid_inst),
 	.id_pc    	(id_pc),
 	.id_inst  	(id_inst)
);
wire [`ysyx_22050550_RegBus] rs1_data;
wire [`ysyx_22050550_RegBus] rs2_data;

wire [`ysyx_22050550_RegAddrBus] rs1_addr;
wire [`ysyx_22050550_RegAddrBus] rs2_addr;
wire [`ysyx_22050550_RegAddrBus] rd_addr;
wire 							 rd_en;

wire [`ysyx_22050550_RegBus] op1;
wire [`ysyx_22050550_RegBus] op2;

wire [`ysyx_22050550_PCBus] ido_pc		;
wire [`ysyx_22050550_InstBus] ido_inst	;

ysyx_22050550_IDU idu(
	.pc_i      	(id_pc),
	.instr_i   	(id_inst),
	.rs1_data_i	(rs1_data),
	.rs2_data_i	(rs2_data),
	.rs1_addr_o	(rs1_addr),
	.rs2_addr_o	(rs2_addr),
	.pc_o      	(ido_pc),
	.instr_o   	(ido_inst),
	.op1_o     	(op1),
	.op2_o     	(op2),
	.rd_addr_o 	(rd_addr),
	.rden_o    	(rd_en)

);

wire [`ysyx_22050550_RegAddrBus] ex_rd_addr;
wire 							 ex_rd_en;

wire [`ysyx_22050550_RegBus] ex_op1;
wire [`ysyx_22050550_RegBus] ex_op2;

wire [`ysyx_22050550_PCBus] ex_pc		;
wire [`ysyx_22050550_InstBus] ex_inst	;


ysyx_22050550_ID_EX id_ex(
	.clk(clk),
	.rst(rst),
	.pc_i       (ido_pc),
	.instr_i    (ido_inst),
	.op1_i      (op1),
	.op2_i      (op2),
	.rd_addr_i  (rd_addr),
	.rden_i     (rd_en),

	.pc_o       (ex_pc), 
	.instr_o    (ex_inst), 
	.op1_o      (ex_op1), 
	.op2_o      (ex_op2), 
	.rd_addr_o  (ex_rd_addr), 
	.rden_o   	(ex_rd_en)
);

wire [`ysyx_22050550_RegAddrBus] 	exo_rd		;
wire [`ysyx_22050550_RegBus] 		exo_wdata	;
wire 								exo_wen		;
wire 								ex_ebreak	;
ysyx_22050550_EXU exu(
	.clk       (clk),
	.rst       (rst),
	.pc_i      (ex_pc),
	.instr_i   (ex_inst),
	.op1_i     (ex_op1),
	.op2_i     (ex_op2),
	.rd_addr_i (ex_rd_addr),
	.rden_i    (ex_rd_en),
	.o_rd      (exo_rd),
	.o_wen     (exo_wen),
	.o_wdata   (exo_wdata),
	.e_break	(ex_ebreak)
);

ysyx_22050550_Regfile regfile(
	.clk     (clk),
	.rst     (rst),
	.wen     (exo_wen),
	.rs1     (rs1_addr),
	.rs2     (rs2_addr),
	.rd      (exo_rd),
	.wdata   (exo_wdata),
	.rd_data1(rs1_data),
	.rd_data2(rs2_data)
);

assign npc = pc + `ysyx_22050550_PCWIDTH'h4;
//import "DPI-C" function int ebreak_inst();
export "DPI-C" function ebreakflag;
//always #5 if (ex_ebreak) ebreak_inst(ex_ebreak); 

/*
import "DPI-C" function int add (input int a, input int b);
initial begin
	 $display("%x+%x = %x",1,2,add(1,2));
end
*/
function  ebreakflag ;
	ebreakflag = ex_ebreak;
endfunction


endmodule
