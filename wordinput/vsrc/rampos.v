module rampos(
    input addflag,
    input enterflag,
    input reg [6:0] lastx,
    input reg [4:0] lasty,
    output reg [6:0] x,
    output reg [4:0] y
);
    wire realenterflag ;
    assign realenterflag = enterflag &&(lastx == 7'd69) ;
    always @ (addflag or enterflag or lastx or lasty) begin
        if (addflag) begin
            if (enterflag) begin
                x = 7'd0;
                y = lasty + 1'b1;
            end
            else begin
                x = lastx + 1'b1;
                y = lasty;
            end
        end
        else begin
            x = lastx;
            y = lasty;
        end

    end 


endmodule