module vga_top(
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
    
	/*
	clkgen # (1000) clkgen_u(
		.clkin	(clk	),
		.rst	(reset),
		.clken	(1'b1),
		.clkout	(VGA_CLK)
	);
	*/
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
	assign VGA_CLK = clk;
	wire	[hwidth-1:0]	h_addr	;
	wire	[vwidth-1:0]	v_addr	;
	wire	[23:0]	vga_data;
	vga_ctrl #(hsize,vsize) my_vga_ctrl(
		.pclk		(clk	),
		.reset	(rst		),
		.vga_data	(vga_data	),
		.h_addr		(h_addr		),
		.v_addr		(v_addr		),
		.hsync		(VGA_HSYNC	),
		.vsync		(VGA_VSYNC	),
		.valid		(VGA_BLANK_N	),
		.vga_r		(VGA_R		),
		.vga_g		(VGA_G		),
		.vga_b		(VGA_B		)
	);
	vmem1 #(hsize,vsize) my_vmem(
    	.h_addr(h_addr),
    	.v_addr(v_addr),
    	.vga_data(vga_data),
        .realaddr(realaddr)
	);
endmodule

module vmem1 #(parameter h_size = 640,v_size = 480)(
    h_addr,
    v_addr,
    vga_data,
    realaddr
);

    input [$clog2(h_size)-1:0] h_addr;
    input [$clog2(v_size)-1:0] v_addr;
    output [23:0] vga_data;
    output [$clog2(h_size)+$clog2(v_size)-1:0] realaddr;
reg [23:0] vga_mem [2**($clog2(h_size)+$clog2(v_size))-1:0];

initial begin
    $readmemh("src/pre_img.txt", vga_mem);
end
assign realaddr = {h_addr, v_addr};
assign vga_data = vga_mem[{h_addr, v_addr}];

endmodule
