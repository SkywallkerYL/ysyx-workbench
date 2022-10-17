module addertop(
	input [3:0]			a		,
	input [3:0]			b		,
	input				cin		,
	
	output reg [3:0]	res		,
	output				carry	,
	output				zero	,
	output				overflow
);
	subadder #(4) subadder_u(
		.a			(a			),
		.b			(b			),
		.cin		(cin		),
		.res		(res		),
		.carry		(carry		),
		.zero		(zero		),
		.overflow	(overflow	)

	);



endmodule
