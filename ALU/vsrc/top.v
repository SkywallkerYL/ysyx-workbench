module top(
	input [3:0]			a		,
	input [3:0]			b		,
	input [2:0]				func	,

	output reg [3:0]	out		,
	output					overflowo,
	output					carryo	

);
	alu #(4) alu_u(
			.a			(a			),
			.b			(b			),
			.func		(func		),

			.out		(out		),
			.overflowo	(overflowo	),
			.carryo		(carryo		)	
);




endmodule
