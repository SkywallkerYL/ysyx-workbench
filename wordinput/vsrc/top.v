//vga可显示640*480的画面
//每一个占9*16
//显存大小为70*30
/*
初步思路 keyboard 接受键盘输入 并且计数  计数对应显存的位置
地址计算模块 根据键盘的计数以及enterflag计算显存的位置
显存每个单元存储8bit的ASCII码 读入keyboard的地址数据  
根据每个单元内存的地址 
ROM模块根据显存单元内存的地址 读取字符的16行数据，将其作为输出的vgadata


*/



module top (
    clk,
    rst,
    ps2_clk,
    ps2_data,
    nextdata_n,
    VGA_CLK,
    VGA_HSYNC,
    VGA_VSYNC,
    VGA_BLANK_N,
    VGA_R,
    VGA_G,
    VGA_B,
    addflagout,
    h1,
    h2,
    h3,
    h4
);
    
	
    //assign VGA_CLK = clk;
	
    input clk;
    input rst;
    input ps2_clk;
    input ps2_data;
	input nextdata_n;
    output VGA_CLK;
    output VGA_HSYNC;
    output VGA_VSYNC;
    output VGA_BLANK_N;
    output [7:0] VGA_R;
    output [7:0] VGA_G;
    output [7:0] VGA_B;
    output addflagout;
    output reg [6:0] h1;
	output reg [6:0] h2;
    output reg [6:0] h3;
	output reg [6:0] h4;
    parameter hsize = 640;
    parameter vsize = 480;
    parameter hwidth = $clog2(hsize);
    parameter vwidth = $clog2(vsize);
    parameter [3:0] pichsize = 9;
    parameter [4:0] picvsize = 16;
    parameter picsize = pichsize*picvsize;
    parameter pichwidth = $clog2(pichsize);
    parameter picvwidth = $clog2(picvsize);
    parameter fontcolor = 24'hFFFFFF;
    parameter baccolor = 24'h00aaee;
    parameter mem_width = 70;
    parameter mem_depth = 30;
    parameter wordsize = 8;
    parameter col_addrsize = 7;
    parameter row_addrsize = 5;
    parameter high_z_pattern = {wordsize{1'bz}};
    wire wen;
    wire ren;
	//assign VGA_CLK = clk;
	wire	[hwidth-1:0]	h_addr	;
	wire	[vwidth-1:0]	v_addr	;
    wire [23:0] vga_data;
    wire rd_en;
    wire [23:0] pic_data;
    wire [23:0] pix_data;
    wire [pichwidth-1:0] inhaddr ;
    wire [picvwidth-1:0] invaddr ;
    assign pix_data = baccolor;


    reg [7:0] data;
    reg [11:0] ps2_count;
    reg overflow;
    reg ready ;
    reg enterflag;
    reg addflag;
    assign addflagout = addflag;
    wire clockkeyboard;
    clkgen#(25_000_000)clkgen_u1(
     .clkin(clk),
     .rst(rst),
     .clken(1'b1),
     .clkout(clockkeyboard)
    );
    /*
    clkgen#(100_000_000,300_000_000)clkgen_u2(
     .clkin(clk),
     .rst(rst),
     .clken(1'b1),
     .clkout(VGA_CLK)
    );
    */
    assign VGA_CLK = clk;
    ps2_keyboard  ps2_keyboard_u(
        .clk        (clockkeyboard),
        .clrn       (~rst),
        .ps2_clk    (ps2_clk),
        .ps2_data   (ps2_data),  
        .data       (data),
        .ps2_count  (ps2_count),
        .ready      (ready),
        .nextdata_n (nextdata_n),
        .overflow   (overflow),
        .enterflag  (enterflag),
        .addflag    (addflag),
        .outflag()
    );
    wire [wordsize-1:0] asciout;
    //wire [wordsize-1:0] realdata;
    //assign realdata = addflag?data:8'hF0;
	key2asc key2asc_u(.keybuffer(data),.asci(asciout));
    reg [$clog2(mem_width)-1:0] ramx ;
    reg [$clog2(mem_depth)-1:0] ramy ;
    //rampos 的时钟与键盘同步
    rampos rampos_u(
        .clk(clockkeyboard),
        .rst(rst),
        .addflag(addflag),
        .enterflag(enterflag),
        .x(ramx),
        .y(ramy)
    );
    
    wire [$clog2(mem_width)+$clog2(mem_depth)-1:0] ramaddr;
    assign ramaddr = {ramy,ramx};
    assign wen = addflag;
    assign ren = 1'b1;
    //assign rd_en = 1'b1;
    wire [$clog2(mem_width)-1:0] rxaddr;
    wire [$clog2(mem_depth)-1:0] ryaddr;
    //assign rxaddr = h_addr/pichsize; // 用了除法
    //assign ryaddr = v_addr/picvsize;//用了除法
    wire [$clog2(mem_width)+$clog2(mem_depth)-1:0] raddr;
    assign raddr = {ryaddr,rxaddr}; 
    wire [wordsize-1:0] ramout;
    scrram #(hsize ,
        vsize ,
        mem_width ,
        mem_depth ,
        wordsize )  
        scrram_u(
        .data(asciout),
        .waddr(ramaddr),
        .raddr(raddr),
        .wen(wen),
        .ren(ren),
        .ramout(ramout)
        );
    assign inhaddr = h_addr-rxaddr*pichsize;
    assign invaddr = v_addr-ryaddr*picvsize;
    wire [wordsize-1:0] romin;
    assign romin = ramout;
    rom #(     hsize    ,
               vsize    ,
               pichsize ,
               picvsize ,
               wordsize ,
               fontcolor,
               baccolor )
        rom_u(
     .rd_en(rd_en),
     .assciaddr(romin),//显存输入的ASSCI坐标
     .inhaddr(inhaddr),//字符内部的x y坐标
     .invaddr(invaddr),
     .vga_data(pic_data)
    );

    vga_ctrl #(hsize,vsize)my_vga_ctrl(
        .pclk(VGA_CLK),
        .reset(rst),
        .vga_data(vga_data),
        .h_addr(h_addr),
        .x_addr(rxaddr),//通过VGA模块输出当前扫描到的像素值位于的显存地址
        .v_addr(v_addr),
        .y_addr(ryaddr),
        .hsync(VGA_HSYNC),
        .vsync(VGA_VSYNC),
        .valid(VGA_BLANK_N),
        .vga_r(VGA_R),
        .vga_g(VGA_G),
        .vga_b(VGA_B)
    );
    /*
    reg  [$clog2(hsize)-1:0] inith_addr;
    reg  [$clog2(vsize)-1:0] initv_addr;
    assign inith_addr = ramx*hsize;
    assign initv_addr = ramy*vsize;
    */
    //assign 
    picen #(hsize,vsize,hsize,vsize)picen_u(
        .h_addr(h_addr),
        .v_addr(v_addr),
        .inith_addr(0),
        .initv_addr(0),
        .rd_en(rd_en)
    );
    assign vga_data = ( rd_en && (ren&!wen))? pic_data : pix_data;
    wire [3:0] out1,out2;
    assign out1 = ramx[3:0];
    assign out2 = ramy [3:0];
    reg [7:0] inputdata;
    always @ (posedge clockkeyboard) begin
        if (addflag) begin
            inputdata <= data;
        end
        else inputdata<= inputdata;
    end
    wire [wordsize-1:0] inputasciout;
    //assign inputasciout = scrram_u.ram[0][3];
    //wire [wordsize-1:0] realdata;
    //assign realdata = addflag?data:8'hF0;
	key2asc key2asc_u1(.keybuffer(inputdata),.asci(inputasciout));
    
    bcd7seg bcd7seg_u1(.b(out1),.h(h1));
	bcd7seg bcd7seg_u2(.b(out2),.h(h2));
    wire [3:0] outasc1,outasc2,outasc3;
	wire [11:0] asciout;
    assign outasc2 = inputasciout/10;
    assign outasc1 = inputasciout - outasc2*10;
    //assign {outasc2,outasc1} = inputasciout;
	//assign {outasc3,outasc2,outasc1} = asciout;
	bcd7seg bcd7seg_u3(.b(outasc1),.h(h3));
	bcd7seg bcd7seg_u4(.b(outasc2),.h(h4));
	//bcd7seg bcd7seg_u5(.b(outasc3),.h(h5));
endmodule

