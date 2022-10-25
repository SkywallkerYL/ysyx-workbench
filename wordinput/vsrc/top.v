//vga可显示640*480的画面
//每一个占9*16
//显存大小为70*30
/*
初步思路 keyboard 接受键盘输入 并且计数  计数对应显存的位置
地址计算模块 根据键盘的计数以及enterflag计算显存的位置
显存每个单元存储8bit的ASCII码 读入keyboard的地址数据  
根据每个单元内存的地址 
ROM模块根据显存单元内存的地址 读取字符的16行数据，将其作为输出的vgadata


*/



module top (
    clk,
    rst,

    VGA_CLK,
    VGA_HSYNC,
    VGA_VSYNC,
    VGA_BLANK_N,
    VGA_R,
    VGA_G,
    VGA_B,
    realaddr
);
    
	
	clkgen # (1000) clkgen_u(
		.clkin	(clk	),
		.rst	(rst),
		.clken	(1'b1),
		.clkout	(VGA_CLK)
	);
	
    input clk;
    input rst;

    output VGA_CLK;
    output VGA_HSYNC;
    output VGA_VSYNC;
    output VGA_BLANK_N;
    output [7:0] VGA_R;
    output [7:0] VGA_G;
    output [7:0] VGA_B;
    parameter hsize = 640;
    parameter vsize = 480;
    parameter hwidth = $clog2(hsize);
    parameter vwidth = $clog2(vsize);
    output [hwidth+vwidth-1:0] realaddr;
	//assign VGA_CLK = clk;
	wire	[hwidth-1:0]	h_addr	;
	wire	[vwidth-1:0]	v_addr	;
    wire [23:0] vga_data;
    wire rd_en;
    wire [23:0] pic_data;
    wire [23:0] pix_data;
    assign pix_data = 24'hFF00DD;

    vga_ctrl #(hsize,vsize)my_vga_ctrl(
        .pclk(VGA_CLK),
        .reset(rst),
        .vga_data(vga_data),
        .h_addr(h_addr),
        .v_addr(v_addr),
        .hsync(VGA_HSYNC),
        .vsync(VGA_VSYNC),
        .valid(VGA_BLANK_N),
        .vga_r(VGA_R),
        .vga_g(VGA_G),
        .vga_b(VGA_B)
    );
    parameter pichsize = 100;
    parameter picvsize = 100;
    parameter picsize = pichsize*picvsize;
    parameter pichwidth = $clog2(pichsize);
    parameter picvwidth = $clog2(picvsize);
    parameter picx = (hsize-pichsize)/2;
    parameter picy = (vsize-picvsize)/2;
    reg  [$clog2(hsize)-1:0] nexth_addr;
    reg  [$clog2(vsize)-1:0] nextv_addr;
    
    reg [$clog2(pichsize)+$clog2(picvsize)-1:0] rom_addr;
    always @(posedge VGA_CLK) begin
        if (rst) rom_addr <= 0;
        else if (rd_en & VGA_BLANK_N)begin
        if (rom_addr == picsize-1'b1) 
            rom_addr <= 0;
            else rom_addr <= rom_addr + 1'b1;
        end
    end
    //assign 
    picen #(pichsize,picvsize,hsize,vsize)picen_u(
        .h_addr(h_addr),
        .v_addr(v_addr),
        .inith_addr(nexth_addr),
        .initv_addr(nextv_addr),
        .rd_en(rd_en)
    );
    assign vga_data = ( rd_en & VGA_BLANK_N)? pic_data : pix_data;


endmodule

