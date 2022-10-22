module top(
	input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
	input nextdata_n,
	output reg [7:0] data,
	output reg [11:0] ps2_count,
	output reg overflow,
	output reg ready ,
	output reg [6:0] h1,
	output reg [6:0] h2,
	output reg [6:0] h3,
	output reg [6:0] h4,
	output reg [6:0] h5,
	output reg [6:0] h6,
	output reg [6:0] h7,
	output reg [6:0] h8

);
	wire [3:0] out1,out2;
	wire [3:0] outasc1,outasc2,outasc3;
	wire [3:0] count1,count2,count3;
	ps2_keyboard my_keyboard(
     	.clk(clk),
    	.clrn(~rst),
     	.ps2_clk(ps2_clk),
     	.ps2_data(ps2_data),
	.data(data),
	.ps2_count(ps2_count),
	.ready(ready),
	.nextdata_n(nextdata_n),
	.overflow(overflow)
	);
	wire [11:0] asciout;
	key2asc key2asc_u(.keybuffer(data),.asci(asciout));
	assign {out2,out1} = data;
	assign {outasc3,outasc2,outasc1} = asciout;
	assign {count3,count2,count1}  = ps2_count;
	bcd7seg bcd7seg_u1(.b(out1),.h(h1));
	bcd7seg bcd7seg_u2(.b(out2),.h(h2));
	bcd7seg bcd7seg_u3(.b(outasc1),.h(h3));
	bcd7seg bcd7seg_u4(.b(outasc2),.h(h4));
	bcd7seg bcd7seg_u5(.b(outasc3),.h(h5));
	bcd7seg bcd7seg_u6(.b(count1),.h(h6));
	bcd7seg bcd7seg_u7(.b(count2),.h(h7));
	bcd7seg bcd7seg_u8(.b(count3),.h(h8));
endmodule
