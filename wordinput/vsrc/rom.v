module rom #( parameter h_size   = 640,
              parameter v_size  = 480,
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

    reg [11:0] vga_mem [4096-1:0];
    //reg [11:0] font_addr [256-1:0]; // fontaddr 存在VGAmem中的索引，避免使用乘法器
    initial begin
        $readmemh("src/vga_font.txt", vga_mem);
    end
    //initial begin
       // $readmemd("src/romaddr.txt", font_addr);
    //end
    //取出当前行的值
    wire [11:0] realaddr = assciaddr*5'd16;
    wire [8:0] vnum ;
    assign vnum = vga_mem[realaddr+invaddr][8:0]; 
    wire xnum ;
    assign xnum = vnum[inhaddr];
    assign vga_data = (xnum)? fontcolor:baccolor;
endmodule