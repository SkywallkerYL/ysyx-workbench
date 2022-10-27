module FSM_m(	
	input	clk		,
	input	reset	,
	input	w		,
	output	z		
);
	parameter [3:0] S0 = 0, S1 = 1, S2 = 2, S3 = 3 ,
					S4 = 4, S5 = 5, S6 = 6, S7 = 7 , S8 = 8;
	reg [3:0] state , next;
	
	always @(posedge clk) begin
		if (reset) begin
			state <= S0;
		end
		else begin
			state <= next;
		end
	end
	//自己实现
	/*
	always @(*) begin
		case (state)
			S0 : next = w ? S5 : S1 ;
			S1 : next = w ? S5 : S2 ;
			S2 : next = w ? S5 : S3 ;
			S3 : next = w ? S5 : S4 ;
			S4 : next = w ? S5 : S4 ;
			S5 : next = w ? S6 : S1 ;
			S6 : next = w ? S7 : S1 ;
			S7 : next = w ? S8 : S1 ;
			S8 : next = w ? S8 : S1 ;
			default : next  = S0;
		endcase
	end

	assign z = state == S8 || state == S4;
	*/
	//采用模板实现
	MuxKeyWithDefault#(9, 4, 1) outMux(.out(z), .key(state), .default_out(0), .lut({
	S0, 1'b0,
	S1, 1'b0,
	S2, 1'b0,
	S3, 1'b0,
	S4, 1'b1,
	S5, 1'b0,
	S6, 1'b0,
	S7, 1'b0,
	S8, 1'b1
	}));

	MuxKeyWithDefault#(9, 4, 4) stateMux(.out(next), .key(state), .default_out(S0), .lut({
	S0, w ? S5 : S1,
	S1, w ? S5 : S2,
	S2, w ? S5 : S3,
	S3, w ? S5 : S4,
	S4, w ? S5 : S4,
	S5, w ? S6 : S1,
	S6, w ? S7 : S1,
	S7, w ? S8 : S1,
	S8, w ? S8 : S1
	}));
endmodule
