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
    
	/*
	clkgen # (25_000_000) clkgen_u(
		.clkin	(clk	),
		.rst	(rst),
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
    wire [23:0] vga_data;
    wire rd_en;
    wire [23:0] pic_data;
    wire [23:0] pix_data;
    assign pix_data = 24'hFFeeDD;

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
    
    picmove #(pichsize,picvsize,hsize,vsize)picmove_u(
        .clk (VGA_CLK),
        .rst (rst),
        //.valid (VGA_BLANK_N),
        .inith_addr(picx),
        .initv_addr(picy),
        .h_addr(h_addr),
        .v_addr(v_addr),
        .nexth_addr(nexth_addr),
        .nextv_addr(nextv_addr)
    );
    wire    [$clog2(hsize)-1:0] nexth_addr1;
    wire    [$clog2(hsize)-1:0] nextv_addr1;
    assign nexth_addr1 = picx;
    assign nextv_addr1 = picy;
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
    vmem #(hsize,vsize,pichsize,picvsize,picx,picy) my_vmem(
        .rd_en(rd_en),
        .rom_addr(rom_addr),
        //.h_addr(h_addr),
        //.v_addr(v_addr),
        .vga_data(pic_data)
        //.realaddr(realaddr[picvwidth+pichwidth-1:0])
    );

endmodule

module vmem #(parameter h_size = 640,
              parameter v_size = 480,
              parameter pichsize = 100,
              parameter picvsize = 100,
              parameter picx = (h_size-pichsize)/2,
              parameter picy = (v_size-picvsize)/2
)(
    rd_en,
    rom_addr,

    //h_addr,
    //v_addr,

    vga_data
     //realaddr
);
    parameter picsize = pichsize*picvsize;
    input rd_en;
    input [$clog2(pichsize)+$clog2(picvsize)-1:0] rom_addr;
    //input [$clog2(h_size)-1:0] h_addr;
    //input [$clog2(v_size)-1:0] v_addr;
    output [23:0] vga_data;
    //output [$clog2(h_size)+$clog2(v_size)-1:0] realaddr;
    reg [23:0] vga_mem [picsize-1:0];

    initial begin
        $readmemh("src/pre_img_100_100.txt", vga_mem);
    end
    /*
    wire [$clog2(h_size)-1:0] realh_addr; 
    wire [$clog2(v_size)-1:0] realv_addr;
    assign realh_addr = h_addr - picx;
    assign realv_addr = v_addr - picy;
   // assign realaddr = {h_addr, v_addr};
   //这里其实应该开一个romaddr
    assign vga_data = rd_en? vga_mem[realh_addr+ realv_addr*pichsize]:24'h0;
    */
    assign vga_data = rd_en? vga_mem[rom_addr]:24'h0;
endmodule
