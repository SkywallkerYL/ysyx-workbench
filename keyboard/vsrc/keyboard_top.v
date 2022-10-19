`timescale 1ns/1ps
module keyboard_top(
	input clk,clrn,
	input [7:0] sendcode ,
	input ps2_clk,
	input ps2_data,
	input nextdata_n,
	output reg [7:0] outdata
);

	wire [10:0] send_buffer;
	wire [7:0] data ;
	wire ready ,overflow;
	//wire kbd_clk, kbd_data;
	//reg nextdata_n	;
	/*
	ps2_keyboard_model model(
    //.ps2_clk(kbd_clk),
    	.send_buffer(send_buffer)
	);
	*/
	task kbd_sendcode;
	    input [7:0] code; // key to be sent
	    integer i;

	    //reg[10:0] send_buffer;
	    begin
		send_buffer[0]   = 1'b0;  // start bit
		send_buffer[8:1] = code;  // code
		send_buffer[9]   = ~(^code); // odd parity bit
		send_buffer[10]  = 1'b1;  // stop bit
		/*
		i = 0;
		while( i < 11) begin
		    // set kbd_data
		    ps2_data = send_buffer[i];
		    #(kbd_clk_period/2) ps2_clk = 1'b0;
		    #(kbd_clk_period/2) ps2_clk = 1'b1;
		    i = i + 1;
		end
		*/
	    end
	endtask
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
