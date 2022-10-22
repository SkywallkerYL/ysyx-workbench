module vga_ctrl #(parameter h_size = 100,
                parameter v_size = 100)(
    pclk,
    reset,
    vga_data,
    h_addr,
     v_addr,
     hsync,
     vsync,
     valid,
     vga_r,
     vga_g,
      vga_b
);
    input pclk;
    input reset;
    input [23:0] vga_data;
    output [$clog2(h_size)-1:0] h_addr;
    output [$clog2(v_size)-1:0] v_addr;
    output hsync;
    output vsync;
    output valid;
    output [7:0] vga_r;
    output [7:0] vga_g;
    output [7:0] vga_b;


parameter h_frontporch = 96;
parameter h_active = 144;
parameter h_backporch = h_active + h_size;
parameter h_total = h_backporch + 16;

parameter v_frontporch = 2;
parameter v_active = 35;
parameter v_backporch = v_active + v_size;
parameter v_total = v_backporch+10;

reg [9:0] x_cnt;
reg [9:0] y_cnt;
wire h_valid;
wire v_valid;

always @(posedge pclk) begin
    if(reset == 1'b1) begin
        x_cnt <= 1;
        y_cnt <= 1;
    end
    else begin
        if(x_cnt == h_total)begin
            x_cnt <= 1;
            if(y_cnt == v_total) y_cnt <= 1;
            else y_cnt <= y_cnt + 1;
        end
        else x_cnt <= x_cnt + 1;
    end
end

//生成同步信号    
assign hsync = (x_cnt > h_frontporch);
assign vsync = (y_cnt > v_frontporch);
//生成消隐信号
assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
assign valid = h_valid & v_valid;
//计算当前有效像素坐标
assign h_addr = h_valid ? (x_cnt - 10'd145) : 10'd0;
assign v_addr = v_valid ? (y_cnt - 10'd36) : 10'd0;
//设置输出的颜色值
assign {vga_r, vga_g, vga_b} = vga_data;

endmodule
