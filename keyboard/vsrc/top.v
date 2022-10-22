module top(
	input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
	input nextdata_n,
	output reg [7:0] data,
	output reg overflow,
	output reg ready ,
	output reg [6:0] h1,
	output reg [6:0] h2,
	output reg [6:0] h3,
	output reg [6:0] h4,
	output reg [6:0] h5

);
	wire [3:0] out1,out2;
	wire [3:0] outasc1,outasc2,outasc3;
	ps2_keyboard my_keyboard(
     	.clk(clk),
    	.clrn(~rst),
     	.ps2_clk(ps2_clk),
     	.ps2_data(ps2_data),
	.data(data),
	.ready(ready),
	.nextdata_n(nextdata_n),
	.overflow(overflow)
	);
	wire [11:0] asciout;
	key2asc key2asc_u(.keybuffer(data),.asci(asciout));
	assign {out2,out1} = data;
	assign {outasc3,outasc2,outasc1} = asciout;
	bcd7seg bcd7seg_u1(.b(out1),.h(h1));
	bcd7seg bcd7seg_u2(.b(out2),.h(h2));
	bcd7seg bcd7seg_u3(.b(outasc1),.h(h3));
	bcd7seg bcd7seg_u4(.b(outasc2),.h(h4));
	bcd7seg bcd7seg_u5(.b(outasc3),.h(h5));
endmodule
