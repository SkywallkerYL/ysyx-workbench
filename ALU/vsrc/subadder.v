module subadder #(
	parameter wordsize = 32
)(
	input [wordsize-1:0]		a		, // 输入为参与运算的数的补码//负数实际上直接以补码形式存储
	input [wordsize-1:0]		b		,
	input						cin		,//控制作加法还是减法 加法0 减法1
	//A-B 即 A+(-B)  对补码来说 -B 即将B连同符号位取反再加1 cin为1时，是减法
	output reg [wordsize-1:0]	res		,
	output reg					carry	,
	output reg					zero	,
	output reg					overflow
);
	wire [wordsize-1:0]	Bin;
	assign Bin = (b^{wordsize{cin}}) + cin; //这里要加括号 不然Cin = 1,Bin = b;  //应该是符号优先级的问题 
	//不加括号 先执行加操作   全1加1变全0,作异或还是自己 
	assign {carry,res} = a + Bin;
	assign zero = ~|res;
	assign overflow = (a[wordsize-1]==Bin[wordsize-1])&&(res[wordsize-1]!=a[wordsize-1]); 

endmodule
