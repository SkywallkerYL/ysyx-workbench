module scrram #(parameter
    hsize = 640,
    vsize = 480,
    mem_width = 70,
    mem_depth = 30,
    wordsize = 8,
    col_addrsize = 7,
    row_addrsize = 5,
    addrsize =12,
    high_z_pattern = {wordsize{1'bz}}
)(
    inout [wordsize-1:0] data,
    input [addrsize-1:0] addr,
    input wen,
    input ren
);

    reg [wordsize-1:0] ram  [0:mem_depth-1][0:mem_width];
    reg [wordsize-1:0] data_init;
    wire [col_addrsize-1:0] col_addr = addr[col_addrsize-1:0];
    wire [row_addrsize-1:0] row_addr = addr[addrsize-1:col_addrsize];
    assign data = (ren&!wen)? data_init:high_z_pattern;
    always @(*) begin
        data_init = high_z_pattern;
        if (wen) begin
            ram[row_addr][col_addr] = data;
        end
        else if (ren&!wen) begin
            data_init = ram[row_addr][col_addr];
        end
    end
endmodule