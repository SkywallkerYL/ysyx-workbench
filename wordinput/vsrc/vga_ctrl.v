module vga_ctrl #(
    parameter h_size = 640,
    parameter v_size = 480,
    parameter xaddrwidth = 7,
    parameter yaddrwidth = 5,
    parameter pichsize = 4'd9,
    parameter picvsize = 5'd16 
    )(
    pclk,
    reset,
    vga_data,
    h_addr,
    x_addr,
     v_addr,
     y_addr,
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
    output wire [xaddrwidth-1:0] x_addr;
    output [$clog2(v_size)-1:0] v_addr;
    output wire [yaddrwidth-1:0] y_addr;
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
reg [3:0] picxcnt;
reg [4:0] picycnt;
wire h_valid;
wire v_valid;

always @(posedge pclk) begin
    if(reset == 1'b1) begin
        x_cnt <= 1;
        y_cnt <= 1;
        //x_addr <= 0;
        //y_addr <= 0;
        picxcnt <= 0;
        picycnt <= 0;
    end
    else begin
        if(x_cnt == h_total)begin
            x_cnt <= 1;
            if(y_cnt == v_total) y_cnt <= 1;
            else y_cnt <= y_cnt + 1;
        end
        else x_cnt <= x_cnt + 1;
        /*
        if(h_valid) begin
            if(picxcnt == pichsize-1) begin
                picxcnt <= 0;
                if (x_cnt>=h_backporch-4'd10&&x_cnt<=h_backporch) begin
                    x_addr <= x_addr;
                end
                else if (x_addr == 7'd69) begin
                    x_addr <= 0;
                end
                else x_addr <= x_addr + 1'b1;
            end
            else picxcnt <= picxcnt + 1'b1;
        end
        if (v_valid && x_cnt == h_total) begin
            if (picycnt == picvsize-1) begin
                picycnt <= 0;
                if (y_addr == 5'd29) begin
                    y_addr <= 0;
                end
                else y_addr <= y_addr + 1'b1;
            end
            else picycnt <= picycnt + 1'b1;
        end
        */
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
assign x_addr = h_addr/ pichsize;
assign y_addr = v_addr / picvsize;
//设置输出的颜色值
assign {vga_r, vga_g, vga_b} = vga_data;

endmodule
