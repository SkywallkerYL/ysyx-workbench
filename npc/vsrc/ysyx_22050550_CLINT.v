`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_CLINT(
	input			clock		, 
	input			reset		,
	input			ren			,
	input	[63:0]	raddr		,
	input	        wen			,
	input	[63:0]	waddr		,
	input	[63:0]	wdata		,

	output	[63:0]	rdata		,

	output			clintmtip	,

	output 	[63:0]	mtimereg	,
	output	[63:0]	mtimecmpreg	
);
//实现类似chisel  
//mtime  mtimecmp reg 
reg [63:0] mtime, mtimecmp ;
wire mtimewen ,mtimecmpwen;

wire [63:0] mtimein , mtimecmpin;

ysyx_22050550_Reg # (64,64'd0) Mtime(
    .clock(clock),.reset(reset),.wen(mtimewen),
    .din(mtimein),.dout(mtime));
	
ysyx_22050550_Reg # (64,64'd1000000) Mtimecmp(
.clock(clock),.reset(reset),.wen(mtimecmpwen),
.din(mtimecmpin),.dout(mtimecmp));

wire mtip = mtime >=mtimecmp ; 

assign mtimewen = (wen &&(waddr == `ysyx_22050550_MTIME)) || (!mtip);
assign mtimein = (wen &&(waddr == `ysyx_22050550_MTIME)) ? wdata 
				: !mtip ? mtime+64'h1 : mtime ; 

assign mtimecmpwen = wen &&(waddr == `ysyx_22050550_MTIMECMP);
assign mtimecmpin  = wdata  ; 

assign clintmtip = mtip ; 
assign mtimereg  = mtime ;
assign mtimecmpreg = mtimecmp ;  

assign rdata =		 (ren &&raddr == `ysyx_22050550_MTIME ) ? mtime 
					:(ren &&raddr == `ysyx_22050550_MTIMECMP) ? mtimecmp 
					: 0 ;



endmodule 
