module rampos(
    input clk,
    input rst,
    input addflag,
    input enterflag,
    output reg [6:0] x,
    output reg [4:0] y
);
    wire realenterflag ;
    assign realenterflag = enterflag ||(x == 7'd69) ;
    always @ (posedge clk) begin
        if (rst) begin
            x <= 7'd0;
            y <= 5'd0;
        end
        else begin
            if (addflag) begin
                if (realenterflag) begin
                    x <= 7'd0;
                    y <= y + 1'b1;
                    //$display("x: %d, y: %d",x,y);
                end
                else begin
                    x <= x + 1'b1;
                    y <= y;
                    //$display("x: %d, y: %d",x,y);
                end
            end
            else begin
                x <= x;
                y <= y;
            end
        end
    end 


endmodule