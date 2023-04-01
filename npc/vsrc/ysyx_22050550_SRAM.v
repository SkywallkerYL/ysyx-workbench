module ysyx_22050550_SRAM(	
  input         clock                   ,
                reset                   ,
                io_Sram_ar_valid        ,
  input  [63:0] io_Sram_ar_bits_addr    ,
  input         io_Sram_r_ready         ,
  input  [7:0]  io_ar_len               ,
  input  [2:0]  io_ar_size              ,
  input  [1:0]  io_ar_burst             ,
  input         io_Sram_aw_valid        ,
  input  [63:0] io_Sram_aw_bits_addr    ,
  input  [7:0]  io_aw_len               ,
  input  [2:0]  io_aw_size              ,   
  input  [1:0]  io_aw_burst             ,
  input         io_Sram_w_valid         ,
  input  [63:0] io_Sram_w_bits_data     ,
  input  [7:0]  io_Sram_w_bits_strb     ,
  output        io_Sram_ar_ready        ,
                io_Sram_r_valid         ,
  output [63:0] io_Sram_r_bits_data     ,
  output        io_Sram_r_bits_last     ,
                io_Sram_aw_ready        ,
                io_Sram_w_ready
);
    wire Dpi_wflag ,Dpi_rflag;
    wire [63:0] Dpi_raddr, Dpi_waddr ,Dpi_rdata, Dpi_wdata;
    wire [7:0]  Dpi_wmask; 
    reg [63:0] raddrReg, waddrReg;
`ifdef ysyx_22050550_FAST
    always@(posedge clock) begin
        if(io_Sram_ar_valid&&io_Sram_ar_ready) raddrReg <= io_Sram_ar_bits_addr;
        if(io_Sram_aw_valid&&io_Sram_aw_ready) waddrReg <= io_Sram_aw_bits_addr;
    end
`else
    ysyx_22050550_Reg # (64,64'd0)Regraddr(
    .clock(clock),.reset(reset),.wen(io_Sram_ar_valid&&io_Sram_ar_ready),
    .din(io_Sram_ar_bits_addr),.dout(raddrReg));
    ysyx_22050550_Reg # (64,64'd0)Regwaddr(
    .clock(clock),.reset(reset),.wen(io_Sram_aw_valid&&io_Sram_aw_ready),
    .din(io_Sram_aw_bits_addr),.dout(waddrReg));
`endif 
    //实现类似chisel 只不过用DPI访问内存
    //仅支持INCR型突发传输   size 设定为 128//CACHE那边的突发传输类型只能是这个
    //读状态机
    localparam readwait = 1'b0 , read = 1'b1;
    reg ReadState,ReadNext;
    always @(posedge clock) begin
        if (reset) ReadState <= readwait;
`ifdef ysyx_22050550_FAST
        else if(!(ReadState==readwait&&!(io_Sram_ar_valid&&io_Sram_ar_ready))) 
            ReadState <= ReadNext;
`else
        else ReadState <= ReadNext;
`endif 
    end
    reg [7:0] Reglen;
    always @(*) begin
        case (ReadState)
            readwait: begin
                if(io_Sram_ar_valid&&io_Sram_ar_ready) begin
                    ReadNext = read;
                end
                else ReadNext = readwait;

            end 
            read: begin
                if(Reglen!=0) begin
                    ReadNext = read;
                end
                else ReadNext = readwait;
            end
            default: ReadNext = readwait;
        endcase
    end
    //faster
    /*
    wire [6:0] ReadAddrAdd;
    //DPI最多只支持64位，更大的size一次也只传64个
    assign ReadAddrAdd = io_ar_size ==  3'b000 ? 7'd1
                        :io_ar_size ==  3'b001 ? 7'd2   
                        :io_ar_size ==  3'b010 ? 7'd4   
                        :io_ar_size ==  3'b011 ? 7'd8 : 7'd8;
    */
    reg  [6:0] ReadAddrAdd;
    always@(io_ar_size) begin
        if(io_ar_size == 3'b100)       ReadAddrAdd = 7'd8;
        else if(io_ar_size ==  3'b000) ReadAddrAdd = 7'd1;
        else if(io_ar_size ==  3'b001) ReadAddrAdd = 7'd2;
        else if(io_ar_size ==  3'b010) ReadAddrAdd = 7'd4;
        else if(io_ar_size ==  3'b011) ReadAddrAdd = 7'd8;
        else                           ReadAddrAdd = 7'd8;
    end
    /*
    ysyx_22050550_MuxKeyWithDefault#(4,3,7) AddrAddMux(
        .out(ReadAddrAdd),.key(io_ar_size),.default_out(7'd8),.lut({
        3'b000   ,   7'd1   ,
        3'b001   ,   7'd2   ,
        3'b010   ,   7'd4   ,
        3'b011   ,   7'd8 
    }));
    */
    reg  [63:0] ReadData;
    always@(io_ar_size) begin
        if(io_ar_size == 3'b100)       ReadData = Dpi_rdata                    ;
        else if(io_ar_size ==  3'b000) ReadData = {{56{1'b0}},Dpi_rdata[ 7:0]} ;
        else if(io_ar_size ==  3'b001) ReadData = {{48{1'b0}},Dpi_rdata[15:0]} ;
        else if(io_ar_size ==  3'b010) ReadData = {{32{1'b0}},Dpi_rdata[31:0]} ;
        else if(io_ar_size ==  3'b011) ReadData = Dpi_rdata                    ;
        else                           ReadData = Dpi_rdata                    ;
    end
    /*
    wire [63:0] ReadData ;
    assign ReadData = io_ar_size == 3'b000 ? {{56{1'b0}},Dpi_rdata[ 7:0]} :
                      io_ar_size == 3'b001 ? {{48{1'b0}},Dpi_rdata[15:0]} :
                      io_ar_size == 3'b010 ? {{32{1'b0}},Dpi_rdata[31:0]} :
                      io_ar_size == 3'b011 ? Dpi_rdata : Dpi_rdata;
                      */
    /*
    ysyx_22050550_MuxKeyWithDefault#(4,3,64) ReadDataMux(
        .out(ReadData),.key(io_ar_size),.default_out(Dpi_rdata),.lut({
        3'b000   ,   {{56{1'b0}},Dpi_rdata[ 7:0]}   ,
        3'b001   ,   {{48{1'b0}},Dpi_rdata[15:0]}   ,
        3'b010   ,   {{32{1'b0}},Dpi_rdata[31:0]}   ,
        3'b011   ,   Dpi_rdata 
    }));
    */
    assign io_Sram_ar_ready = ReadState == readwait;
`ifdef ysyx_22050550_FAST
    always @ (posedge clock) begin
        if((ReadState == readwait && io_Sram_ar_valid)) Reglen <= io_ar_len;
        else if((ReadState == read && io_Sram_r_ready)) Reglen <= Reglen-1 ;
    end
`else
    wire ReglenEn = (ReadState == readwait && io_Sram_ar_valid) 
                 || (ReadState == read && io_Sram_r_valid);
    wire [7:0] RegLenIn = (ReadState == readwait && io_Sram_ar_valid) ? io_ar_len
                        : (ReadState == read && io_Sram_r_ready) ? Reglen-1 : Reglen;
    ysyx_22050550_Reg # (8,8'd0) RegLen (
        .clock(clock),
        .reset(reset),
        .wen(ReglenEn),
        .din(RegLenIn),
        .dout(Reglen)
    );
`endif 
    assign io_Sram_r_bits_last = ReadState == read && Reglen == 0;
    //目前只有两种情况，先这样写了  作为设备内存 arlen本身就是0
    assign Dpi_raddr =  (io_ar_len==0 || Reglen==1) ? raddrReg : raddrReg + {{57'b0},ReadAddrAdd};
    assign io_Sram_r_bits_data = ReadData;
    assign io_Sram_r_valid = ReadState == read;
    assign Dpi_rflag = io_Sram_r_valid && io_Sram_r_ready;
    //写状态机
    localparam writewait = 1'b0 , write = 1'b1;
    reg WriteState,WriteNext;
    always @(posedge clock) begin
        if (reset) WriteState <= writewait ;
`ifdef ysyx_22050550_FAST
        else if(!(WriteState==writewait&&!(io_Sram_aw_valid&&io_Sram_aw_ready))) 
            WriteState <= WriteNext;
`else
        else WriteState <= WriteNext;
`endif 
    end
    reg [7:0] WReglen;
    always @(*) begin
        case (WriteState)
            writewait: begin
                if(io_Sram_aw_valid&&io_Sram_aw_ready) begin
                    WriteNext = write;
                end
                else WriteNext = writewait;

            end 
            write: begin
                if(WReglen!=0) begin
                    WriteNext = write;
                end
                else WriteNext = writewait;
            end
            default: WriteNext = writewait;
        endcase
    end
    //faster
    reg [6:0] WriteAddrAdd;
    always @ (io_aw_size) begin
        if(io_aw_size == 3'b100)       WriteAddrAdd =  7'd8 ;
        else if(io_aw_size == 3'b000)  WriteAddrAdd =  7'd1 ;
        else if(io_aw_size == 3'b001)  WriteAddrAdd =  7'd2 ;
        else if(io_aw_size == 3'b010)  WriteAddrAdd =  7'd4 ;
        else if(io_aw_size == 3'b011)  WriteAddrAdd =  7'd8 ;
        else                           WriteAddrAdd =  7'd8 ;
    end
    /*
    wire [6:0] WriteAddrAdd;
    //DPI最多只支持64位，更大的size一次也只传64个
    assign WriteAddrAdd =  io_aw_size == 3'b000 ?  7'd1 :
                           io_aw_size == 3'b001 ?  7'd2 :
                           io_aw_size == 3'b010 ?  7'd4 :
                           io_aw_size == 3'b011 ?  7'd8 :7'd8;
    */
    
    /*
    ysyx_22050550_MuxKeyWithDefault#(4,3,7) WAddrAddMux(
        .out(WriteAddrAdd),.key(io_aw_size),.default_out(7'd8),.lut({
        3'b000   ,   7'd1   ,
        3'b001   ,   7'd2   ,
        3'b010   ,   7'd4   ,
        3'b011   ,   7'd8 
    }));
    */
    reg [63:0] WriteData;
    always @ (io_aw_size) begin
        if(io_aw_size == 3'b100)       WriteData =  io_Sram_w_bits_data                   ;
        else if(io_aw_size == 3'b000)  WriteData =  {{56{1'b0}},io_Sram_w_bits_data[ 7:0]};
        else if(io_aw_size == 3'b001)  WriteData =  {{48{1'b0}},io_Sram_w_bits_data[15:0]};
        else if(io_aw_size == 3'b010)  WriteData =  {{32{1'b0}},io_Sram_w_bits_data[31:0]};
        else if(io_aw_size == 3'b011)  WriteData =  io_Sram_w_bits_data                   ;
        else                           WriteData =  io_Sram_w_bits_data                   ;
    end
    /*
    wire [63:0] WriteData ;
    assign WriteData = io_aw_size == 3'b000 ? {{56{1'b0}},io_Sram_w_bits_data[ 7:0]}: 
                       io_aw_size == 3'b001 ? {{48{1'b0}},io_Sram_w_bits_data[15:0]}: 
                       io_aw_size == 3'b010 ? {{32{1'b0}},io_Sram_w_bits_data[31:0]}: 
                       io_aw_size == 3'b011 ? io_Sram_w_bits_data :io_Sram_w_bits_data;
    */
    /*
    ysyx_22050550_MuxKeyWithDefault#(4,3,64) WriteDataMux(
        .out(WriteData),.key(io_aw_size),.default_out(io_Sram_w_bits_data),.lut({
        3'b000   ,   {{56{1'b0}},io_Sram_w_bits_data[ 7:0]}   ,
        3'b001   ,   {{48{1'b0}},io_Sram_w_bits_data[15:0]}   ,
        3'b010   ,   {{32{1'b0}},io_Sram_w_bits_data[31:0]}   ,
        3'b011   ,   io_Sram_w_bits_data 
    }));
    */
    assign io_Sram_aw_ready = WriteState == writewait;
    wire WReglenEn = (WriteState == writewait && io_Sram_aw_valid) 
                 || (WriteState == write && io_Sram_w_valid);
    wire [7:0] WRegLenIn = (WriteState == writewait && io_Sram_aw_valid) ? io_aw_len
                        : (WriteState == write && io_Sram_w_valid) ? WReglen-1 : WReglen;
    ysyx_22050550_Reg # (8,8'd0) WRegLen (
        .clock(clock),
        .reset(reset),
        .wen(WReglenEn),
        .din(WRegLenIn),
        .dout(WReglen)
    );
    //目前只有两种情况，先这样写了
    assign Dpi_waddr =  (io_aw_len==0 || WReglen==1) ? waddrReg : waddrReg + {{57'b0},WriteAddrAdd };
    assign Dpi_wdata =  io_Sram_w_bits_data;
    assign Dpi_wmask =  io_Sram_w_bits_strb;
    assign io_Sram_w_ready = WriteState == write;
    assign Dpi_wflag =  io_Sram_w_valid && io_Sram_w_ready;
    
import "DPI-C" function void pmem_read(input longint Dpi_raddr, output longint Dpi_rdata);
import "DPI-C" function void pmem_write(input longint Dpi_waddr, input longint Dpi_wdata,input byte Dpi_wmask);

    always@(Dpi_wflag)begin
       if(Dpi_wflag) pmem_write(Dpi_waddr,Dpi_wdata,Dpi_wmask);
    end
    always@(Dpi_rflag)begin
       if(Dpi_rflag) pmem_read(Dpi_raddr,Dpi_rdata);
    end
endmodule