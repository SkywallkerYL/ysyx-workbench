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
	output reg [6:0] h2

);
	wire [3:0] out1,out2;
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
	assign {out2,out1} = data;
	bcd7seg bcd7seg_u1(.b(out1),.h(h1));
	bcd7seg bcd7seg_u2(.b(out2),.h(h2));

endmodule
