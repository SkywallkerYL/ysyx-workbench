/*
此模块用于实现图片的移动碰撞反弹

*/



module picmove#(
    parameter pichsize = 100,
    parameter picvsize = 100,
    parameter h_size = 640,
    parameter v_size = 480
)(
    input clk ,
    input rst,
    //input valid,
    input [$clog2(h_size)-1:0] inith_addr,
    input [$clog2(v_size)-1:0] initv_addr,
    input [$clog2(h_size)-1:0] h_addr,
    input [$clog2(v_size)-1:0] v_addr,
    output reg  [$clog2(h_size)-1:0] nexth_addr,
    output reg  [$clog2(v_size)-1:0] nextv_addr

);
    // 0表示 + 1表示 -
    reg x_flag;
    reg y_flag;
    wire valid = (h_addr==h_size-1'b1)&&(v_addr==v_size-1'b1);
    always @ (posedge clk) begin
        if (rst) begin
            nexth_addr<= inith_addr;
            nextv_addr<= initv_addr;
        end
        else if (valid)begin
            if (!x_flag) begin
                nexth_addr <= nexth_addr + 1'b1;
            end
            else if (x_flag) begin
                nexth_addr <= nexth_addr - 1'b1;
            end
            if (!y_flag) begin
                nextv_addr <= nextv_addr + 1'b1;
            end
            else if (y_flag) begin
                nextv_addr <= nextv_addr - 1'b1;
            end 
        end
    end

    always @ (posedge clk) begin
        if (rst) begin
            x_flag <= 1'b0;
            y_flag <= 1'b0;
        end
        else if (valid)begin
            if (nexth_addr == 'b0 || nexth_addr == 'b0+1'b1) begin
                x_flag <= 1'b0;
            end
            else if (nexth_addr == (h_size-pichsize-1'b1 ) ) begin
                x_flag <= 1'b1;
            end
            if (nextv_addr == 'b0|| nextv_addr == 'b0+1'b1) begin
                y_flag <= 1'b0;
            end
            else if (nextv_addr == (v_size-picvsize-1'b1 ) ) begin
                y_flag <= 1'b1;
            end
        end
    end


endmodule