module top(
	input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
	input nextdata_n,
	output reg [7:0] data,
	output reg [11:0] ps2_count,
	output reg overflow,
	output reg ready ,
	output reg [6:0] h1,
	output reg [6:0] h2,
	output reg [6:0] h3,
	output reg [6:0] h4,
	output reg [6:0] h5,
	output reg [6:0] h6,
	output reg [6:0] h7,
	output reg [6:0] h8

);
	wire [3:0] out1,out2;
	wire [3:0] outasc1,outasc2,outasc3;
	wire [3:0] count1,count2,count3;
	ps2_keyboard my_keyboard(
     	.clk(clk),
    	.clrn(~rst),
     	.ps2_clk(ps2_clk),
     	.ps2_data(ps2_data),
	.data(data),
	.ps2_count(ps2_count),
	.ready(ready),
	.nextdata_n(nextdata_n),
	.overflow(overflow),
	.flagen(flagen2)
	);
	//flagen的判断与内部ps2_count的计数相似，只是按下重复案件时，仍然判断为要计数
	//即flagen拉高，这样子可以输出当前按键值
	//目前仍然有问题，显示的键码会相比实际按下的延后两个剑
	//目前按下的按键其实是fifo[r_ptr-1] 该过来后正常了
	wire flagen2;
	wire flagen3;
	assign flagen3 = flagen2&(ps2_count>12'd0);
	wire [11:0] asciout;
	wire [7:0] flagdata;
	assign flagdata = flagen2?data : 8'h00;
	key2asc key2asc_u(.keybuffer(data),.asci(asciout));
	assign {out2,out1} = data;
	assign {outasc3,outasc2,outasc1} = asciout;
	assign {count3,count2,count1}  = ps2_count;
	bcd7seg_en bcd7seg_u1(.en(flagen3),.b(out1),.h(h1));
	bcd7seg_en bcd7seg_u2(.en(flagen3),.b(out2),.h(h2));
	bcd7seg_en bcd7seg_u3(.en(flagen3),.b(outasc1),.h(h3));
	bcd7seg_en bcd7seg_u4(.en(flagen3),.b(outasc2),.h(h4));
	bcd7seg_en bcd7seg_u5(.en(flagen3),.b(outasc3),.h(h5));
	bcd7seg_en bcd7seg_u6(.en(1'b1),.b(count1),.h(h6));
	bcd7seg_en bcd7seg_u7(.en(1'b1),.b(count2),.h(h7));
	bcd7seg_en bcd7seg_u8(.en(1'b1),.b(count3),.h(h8));
endmodule
