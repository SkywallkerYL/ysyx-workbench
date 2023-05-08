module ysyx_22050550_RamArbiter(	
  input         io_ifu_Axi_ar_valid             ,
  input  [63:0] io_ifu_Axi_ar_bits_addr         ,
  input         io_ifu_Axi_r_ready              ,
                io_ifu_Axi_aw_valid             ,
  input  [63:0] io_ifu_Axi_aw_bits_addr         ,
  input         io_ifu_Axi_w_valid              ,
  input  [63:0] io_ifu_Axi_w_bits_data          ,
  input  [7:0]  io_ifu_Axi_w_bits_strb          ,
  input         io_lsu_Axi_ar_valid             ,
  input  [63:0] io_lsu_Axi_ar_bits_addr         ,
  input         io_lsu_Axi_r_ready              , 
                io_lsu_Axi_aw_valid             ,
  input  [63:0] io_lsu_Axi_aw_bits_addr         ,
  input         io_lsu_Axi_w_valid              ,
  input  [63:0] io_lsu_Axi_w_bits_data          ,
  input  [7:0]  io_lsu_Axi_w_bits_strb          ,
  input         io_sram_Axi_ar_ready            ,
                io_sram_Axi_r_valid             ,
  input  [63:0] io_sram_Axi_r_bits_data         ,
  input  [ 1:0] io_sram_Axi_r_rresp				,
  input         io_sram_Axi_r_bits_last         ,
                io_sram_Axi_aw_ready            ,
                io_sram_Axi_w_ready             ,
  output        io_ifu_Axi_ar_ready             ,
                io_ifu_Axi_r_valid              ,
  output [63:0] io_ifu_Axi_r_bits_data          ,
  output [1:0]  io_ifu_Axi_r_rresp				,
  output        io_ifu_Axi_r_bits_last          ,
                io_ifu_Axi_aw_ready             ,
                io_ifu_Axi_w_ready              ,
                io_lsu_Axi_ar_ready             ,
                io_lsu_Axi_r_valid              ,
  output [63:0] io_lsu_Axi_r_bits_data          ,
  output [1:0 ] io_lsu_Axi_r_rresp				,
  output        io_lsu_Axi_r_bits_last          ,
                io_lsu_Axi_aw_ready             ,
                io_lsu_Axi_w_ready              ,
                io_sram_Axi_ar_valid            ,
  output [63:0] io_sram_Axi_ar_bits_addr        ,
  output        io_sram_Axi_r_ready             ,    
                io_sram_Axi_aw_valid            ,
  output [63:0] io_sram_Axi_aw_bits_addr        ,
  output        io_sram_Axi_w_valid             ,
  output [63:0] io_sram_Axi_w_bits_data         ,
  output [7:0]  io_sram_Axi_w_bits_strb
);
  //好像直接用chisel生存的会快一些         
  //这里直接从chisel 赋值过来
  //ar 
  
    assign io_sram_Axi_ar_valid = io_ifu_Axi_ar_valid || io_lsu_Axi_ar_valid                          ;
    assign io_ifu_Axi_ar_ready = io_ifu_Axi_ar_valid && io_sram_Axi_ar_ready &&(!io_lsu_Axi_ar_valid) ;
    assign io_lsu_Axi_ar_ready = io_lsu_Axi_ar_valid && io_sram_Axi_ar_ready                          ;
    assign io_sram_Axi_ar_bits_addr = io_lsu_Axi_ar_ready ? io_lsu_Axi_ar_bits_addr : 
                                      io_ifu_Axi_ar_ready ? io_ifu_Axi_ar_bits_addr : 0;
    //这几个信号由于一直是同一个值，chisel生成的时候好像就省略了
    //assign io_sram_Axi_ar_bits_len  = io_lsu_Axi_ar_ready ? io_lsu_Axi_ar_bits_len  :
    //                                  io_ifu_Axi_ar_ready ? io_ifu_Axi_ar_bits_len  : 0;
    //assign io_sram_Axi_ar_bits_size = io_lsu_Axi_ar_ready ? io_lsu_Axi_ar_bits_size :
    //                                  io_ifu_Axi_ar_ready ? io_ifu_Axi_ar_bits_size : 3'b011;
    //assign io_sram_Axi_ar_bits_burst= io_lsu_Axi_ar_ready ? io_lsu_Axi_ar_bits_burst:
    //                                  io_ifu_Axi_ar_ready ? io_ifu_Axi_ar_bits_burst: 2'b01 ;
    
    assign io_sram_Axi_r_ready  = io_ifu_Axi_r_ready || io_lsu_Axi_r_ready                            ; 
    assign io_ifu_Axi_r_valid   = io_ifu_Axi_r_ready && io_sram_Axi_r_valid &&(!io_lsu_Axi_r_ready)   ;
    assign io_lsu_Axi_r_valid   = io_lsu_Axi_r_ready && io_sram_Axi_r_valid                           ;
    assign io_ifu_Axi_r_bits_data = io_sram_Axi_r_bits_data;
    assign io_ifu_Axi_r_bits_last = io_sram_Axi_r_bits_last;
    assign io_lsu_Axi_r_bits_data = io_sram_Axi_r_bits_data;
    assign io_lsu_Axi_r_bits_last = io_sram_Axi_r_bits_last;
	assign io_lsu_Axi_r_rresp     = io_sram_Axi_r_rresp    ; 
	assign io_ifu_Axi_r_rresp     = io_sram_Axi_r_rresp	   ; 
    //actually write signal from ifu is always false
    // 
    //aw
    assign io_sram_Axi_aw_valid = io_ifu_Axi_aw_valid || io_lsu_Axi_aw_valid                          ;
    assign io_ifu_Axi_aw_ready = io_ifu_Axi_aw_valid && io_sram_Axi_aw_ready&&(!io_lsu_Axi_aw_valid)  ;
    assign io_lsu_Axi_aw_ready = io_lsu_Axi_aw_valid && io_sram_Axi_aw_ready                          ;
    assign io_sram_Axi_aw_bits_addr = io_lsu_Axi_aw_ready?io_lsu_Axi_aw_bits_addr:                  
                                      io_ifu_Axi_aw_ready?io_ifu_Axi_aw_bits_addr: 0;
    //assign io_sram_Axi_aw_size = io_lsu_Axi_aw_ready?io_lsu_Axi_aw_bits_size:
    //                             io_ifu_Axi_aw_ready?io_ifu_Axi_aw_bits_size:3'b011;
    //assign io_sram_Axi_aw_len  = io_lsu_Axi_aw_ready?io_lsu_Axi_aw_bits_len :
    //                             io_ifu_Axi_aw_ready?io_ifu_Axi_aw_bits_len : 0 ;
    //assign io_sram_Axi_aw_burst= io_lsu_Axi_aw_ready?io_lsu_Axi_aw_bits_burst:
    //                                  io_ifu_Axi_aw_ready?io_ifu_Axi_aw_bits_burst:2'b01;

    //w
    assign io_sram_Axi_w_valid = io_ifu_Axi_w_valid || io_lsu_Axi_w_valid                         ;
    assign io_ifu_Axi_w_ready = io_ifu_Axi_w_valid && io_sram_Axi_w_ready&&(!io_lsu_Axi_w_valid)  ;
    assign io_lsu_Axi_w_ready = io_lsu_Axi_w_valid && io_sram_Axi_w_ready                         ;
    assign io_sram_Axi_w_bits_data =  io_lsu_Axi_w_ready?io_lsu_Axi_w_bits_data:
                                      io_ifu_Axi_w_ready?io_ifu_Axi_w_bits_data:0;
    assign io_sram_Axi_w_bits_strb =  io_lsu_Axi_w_ready?io_lsu_Axi_w_bits_strb:
                                      io_ifu_Axi_w_ready?io_ifu_Axi_w_bits_strb:0;
    //assign io_sram_Axi_w_bits_last =  io_lsu_Axi_w_ready?io_lsu_Axi_w_bits_last:
    //                                  io_ifu_Axi_w_ready?io_ifu_Axi_w_bits_last:0;
    //b
    //assign io_sram_Axi_b_ready = io_ifu_Axi_b_ready || io_lsu_Axi_b_ready                         ;
    //assign io_ifu_Axi_b_valid = io_ifu_Axi_b_ready && io_sram_Axi_b_valid&&(!io_lsu_Axi_b_ready)  ;
    //assign io_lsu_Axi_b_valid = io_lsu_Axi_b_ready && io_sram_Axi_b_valid                         ;
    //assign io_ifu_Axi_b_bits_resp = io_sram_Axi_b_bits_resp                                       ;
    //assign io_lsu_Axi_b_bits_resp = io_sram_Axi_b_bits_resp                                       ;
  

endmodule
