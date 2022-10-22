`timescale 1ns/1ps
module keyboard_top(
	input clk,clrn,
	input ps2_clk,
	input ps2_data,
	output reg [7:0] data,
	output reg ready,
	input nextdata_n,
	output overflow,
	output reg [7:0] outdata
	
);

	//wire [10:0] send_buffer;
	//wire [7:0] data ;
	//wire ready ,overflow;
	 
	//wire [7:0] code; // key to be sent
	//assign code = sendcode;
	//integer i;
	//assign send_buffer = {{1'b1},{~(^code)},code,{1'b0}};
	//reg[10:0] send_buffer;
	//send_buffer[0]   = 1'b0;  // start bit
	//send_buffer[8:1] = code;  // code
	//send_buffer[9]   = ~(^code); // odd parity bit
	//send_buffer[10]  = 1'b1;  // stop bit

	ps2_keyboard inst(
		.clk(clk),
		.clrn(clrn),
		.ps2_clk(ps2_clk),
		.ps2_data(ps2_data),
		.data(data),
		.ready(ready),
		.nextdata_n(nextdata_n),
		.overflow(overflow)
	);
	
	
endmodule
