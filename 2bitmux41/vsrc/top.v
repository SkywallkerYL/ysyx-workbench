module top(
	input	[1:0]		Y	, 
	input	[1:0]		A	, 
	input	[1:0]		B	,
	input	[1:0]		C	,
	input	[1:0]		D	,
	
	output	reg [1:0]	F	
);
	MuxKey #(4,2,2) Mux_Key_u(
		.out	(F		),
		.key	(Y		),
		.lut	({2'b00,A,2'b01,B,2'b10,C,2'b11,D})	
	);



endmodule
