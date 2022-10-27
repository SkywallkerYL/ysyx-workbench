module scrram #(parameter
    hsize = 640,
    vsize = 480,
    mem_width = 70,
    mem_depth = 30,
    wordsize = 8,
    col_addrsize = $clog2(mem_width),
    row_addrsize = $clog2(mem_depth),
    addrsize =col_addrsize+row_addrsize,
    high_z_pattern = {wordsize{1'bz}}
)(
    input [wordsize-1:0] data,
    input [addrsize-1:0] waddr,
    input [addrsize-1:0] raddr,
    input wen,
    input ren, 
    output [wordsize-1:0] ramout
);

    reg [wordsize-1:0] ram  [0:mem_depth-1][0:mem_width-1];
    reg [wordsize-1:0] data_init;
    wire [col_addrsize-1:0] wcol_addr = waddr[col_addrsize-1:0];
    wire [row_addrsize-1:0] wrow_addr = waddr[addrsize-1:col_addrsize];
    wire [col_addrsize-1:0] rcol_addr = raddr[col_addrsize-1:0];
    wire [row_addrsize-1:0] rrow_addr = raddr[addrsize-1:col_addrsize];
    assign ramout = (ren&!wen)? data_init:high_z_pattern;
    always @(*) begin
        data_init = high_z_pattern;
        if (wen) begin
            ram[wrow_addr][wcol_addr] = data;
        end
        else if (ren&!wen) begin
            data_init = ram[rrow_addr][rcol_addr];
        end
    end
endmodule