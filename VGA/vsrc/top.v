module top (
    input clk,
    input rst,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B
);


assign VGA_CLK = clk;

wire [9:0] h_addr;
wire [9:0] v_addr;
wire [23:0] vga_data;
parameter hsize = 640;
parameter vsize = 480;
vga_ctrl #(hsize,vsize)my_vga_ctrl(
    .pclk(clk),
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

vmem #(hsize,vsize) my_vmem(
    .h_addr(h_addr),
    .v_addr(v_addr[8:0]),
    .vga_data(vga_data)
);

endmodule

module vmem #(parameter h_size = 640,v_size = 480)(
    input [9:0] h_addr,
    input [8:0] v_addr,
    output [23:0] vga_data
);

reg [23:0] vga_mem [0:524287];

initial begin
    $readmemh("src/pre_img.txt", vga_mem);
end

assign vga_data = vga_mem[{h_addr,v_addr}];

endmodule
