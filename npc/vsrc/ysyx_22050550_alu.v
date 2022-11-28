module ysyx_22050550_alu #(parameter len = 4)(
	input [len-1:0]			a		,
	input [len-1:0]			b		,
	input [2:0]				func	,

	output reg [len-1:0]	out		,
	output					overflowo,
	output					carryo	
);
	//输入为带符号数的补码
	wire [len-1:0] outaddsub	; //加 减
	wire [len-1:0] outcom		;
	wire [len-1:0] nota			;//取反
	wire [len-1:0] aandb		;//与
	wire [len-1:0] aorb			;//或
	wire [len-1:0] axorb		;//异或
	wire  alessb		;//比较大小
	wire  aeqb			;//相等

	wire cin					;

	assign cin = func [0]		;
	wire eq						;
	wire overflow				;
	wire overflowcom			;
	wire carry					;

	ysyx_22050550_subadder #(len) subadder_u(
		.a			(a			),
		.b			(b			),
		.cin		(cin		),
		.res		(outaddsub	),
		.carry		(carry		),
		.zero		(eq			),
		.overflow	(overflow	)
	);
	ysyx_22050550_subadder #(len) subadder_u_com(
		.a			(a			),
		.b			(b			),
		.cin		(!func[0]	),
		.res		(outcom		),
		.carry		(			),
		.zero		(			),
		.overflow	(overflowcom)
	);
	assign nota = ~a;
	assign aandb = a&b;
	assign aorb = a|b;
	assign axorb = a^b;
	//考虑减法  来比较
	//分溢出和不溢出的情况考虑，比较容易得到这样的结果
	assign alessb = outcom[len-1] ^ overflowcom;
	
	assign aeqb = eq;
	always @(func or a or b ) begin
		case (func) 
			3'b000 : out = outaddsub	;
			3'b001 : out = outaddsub	;
			3'b010 : out = nota			;
			3'b011 : out = aandb		;
			3'b100 : out = aorb			;
			3'b101 : out = axorb		;
			3'b110 : out = {{(len-1){1'b0}},alessb}		;
			3'b111 : out = {{(len-1){1'b0}},aeqb  }		;
		default : out = outaddsub	;
		endcase
	end
	assign overflowo = overflow	;
	assign carryo = carry		;


endmodule
