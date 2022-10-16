module top(
	input	[7:0]		x	,
	input				en	,
	
	output	reg			flag,
	output	reg [2:0]	y	,
	output	reg	[6:0]	h	
);
	encode83 encode83_u(
		.x		(x		),
		.en		(en		),
		.y		(y		),
		.flag	(flag	)
	);
	wire [3:0] wirey;
	assign wirey = {1'b0,y};
	bcd7seg bcd7seg_u(
		.b		(wirey		),
		.h		(h		)
	);
endmodule
