module rom #(parameter h_size = 640,
              parameter v_size = 480,
              parameter pichsize = 9,
              parameter picvsize = 16,
              parameter wordsize = 8,
              parameter fontcolor = 24'h000000,
              parameter baccolor = 24'hFFFFFF
)(
    input rd_en,
    input [wordsize-1:0]assciaddr,//显存输入的ASSCI坐标
    input [$clog2(pichsize)-1:0]inhaddr,//字符内部的x y坐标
    input [$clog2(picvsize)-1:0]invaddr,
    
    output reg [23:0]vga_data

);
    parameter picsize = pichsize*picvsize;

    reg [23:0] vga_mem [4096-1:0];
    reg [11:0] font_addr [255:0]; // fontaddr 存在VGAmem中的索引，避免使用乘法器
    initial begin
        $readmemh("src/vga_font.txt", vga_mem);
        $readmemh("src/romaddr.txt", font_addr);
    end
    //取出当前行的值
    wire [8:0] vnum = vga_mem[font_addr[assciaddr]+invaddr][8:0]; 
    wire xnum = vnum[inhaddr];
    assign vga_data = (rd_en&xnum)? fontcolor:baccolor;
endmodule