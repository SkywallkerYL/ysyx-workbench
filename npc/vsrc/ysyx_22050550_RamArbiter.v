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
  input         io_sram_Axi_r_bits_last         ,
                io_sram_Axi_aw_ready            ,
                io_sram_Axi_w_ready             ,
  output        io_ifu_Axi_ar_ready             ,
                io_ifu_Axi_r_valid              ,
  output [63:0] io_ifu_Axi_r_bits_data          ,
  output        io_ifu_Axi_r_bits_last          ,
                io_ifu_Axi_aw_ready             ,
                io_ifu_Axi_w_ready              ,
                io_lsu_Axi_ar_ready             ,
                io_lsu_Axi_r_valid              ,
  output [63:0] io_lsu_Axi_r_bits_data          ,
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
`ifdef ysyx_22050550_FAST
  wire _io_ifu_Axi_ar_ready_T_2 = io_ifu_Axi_ar_valid & io_sram_Axi_ar_ready & ~io_lsu_Axi_ar_valid;	
  wire _io_lsu_Axi_ar_ready_T = io_lsu_Axi_ar_valid & io_sram_Axi_ar_ready;	
  wire _io_ifu_Axi_aw_ready_T_2 = io_ifu_Axi_aw_valid & io_sram_Axi_aw_ready & ~io_lsu_Axi_aw_valid;	
  wire _io_lsu_Axi_aw_ready_T = io_lsu_Axi_aw_valid & io_sram_Axi_aw_ready;	
  wire _io_ifu_Axi_w_ready_T_2 = io_ifu_Axi_w_valid & io_sram_Axi_w_ready & ~io_lsu_Axi_w_valid;	
  wire _io_lsu_Axi_w_ready_T = io_lsu_Axi_w_valid & io_sram_Axi_w_ready;	
  assign io_ifu_Axi_ar_ready = _io_ifu_Axi_ar_ready_T_2;	
  assign io_ifu_Axi_r_valid = io_ifu_Axi_r_ready & io_sram_Axi_r_valid & ~io_lsu_Axi_r_ready;	
  assign io_ifu_Axi_r_bits_data = io_sram_Axi_r_bits_data;	
  assign io_ifu_Axi_r_bits_last = io_sram_Axi_r_bits_last;	
  assign io_ifu_Axi_aw_ready = _io_ifu_Axi_aw_ready_T_2;	
  assign io_ifu_Axi_w_ready = _io_ifu_Axi_w_ready_T_2;	
  assign io_lsu_Axi_ar_ready = _io_lsu_Axi_ar_ready_T;	
  assign io_lsu_Axi_r_valid = io_lsu_Axi_r_ready & io_sram_Axi_r_valid;
  assign io_lsu_Axi_r_bits_data = io_sram_Axi_r_bits_data;	
  assign io_lsu_Axi_r_bits_last = io_sram_Axi_r_bits_last;	
  assign io_lsu_Axi_aw_ready = _io_lsu_Axi_aw_ready_T;	
  assign io_lsu_Axi_w_ready = _io_lsu_Axi_w_ready_T;	
  assign io_sram_Axi_ar_valid = io_ifu_Axi_ar_valid | io_lsu_Axi_ar_valid;	
  assign io_sram_Axi_ar_bits_addr = _io_lsu_Axi_ar_ready_T ? io_lsu_Axi_ar_bits_addr : _io_ifu_Axi_ar_ready_T_2 ?
                io_ifu_Axi_ar_bits_addr : 64'h0;	
  assign io_sram_Axi_r_ready = io_ifu_Axi_r_ready | io_lsu_Axi_r_ready;	
  assign io_sram_Axi_aw_valid = io_ifu_Axi_aw_valid | io_lsu_Axi_aw_valid;	
  assign io_sram_Axi_aw_bits_addr = _io_lsu_Axi_aw_ready_T ? io_lsu_Axi_aw_bits_addr : _io_ifu_Axi_aw_ready_T_2 ?
                io_ifu_Axi_aw_bits_addr : 64'h0;	
  assign io_sram_Axi_w_valid = io_ifu_Axi_w_valid | io_lsu_Axi_w_valid;	
  assign io_sram_Axi_w_bits_data = _io_lsu_Axi_w_ready_T ? io_lsu_Axi_w_bits_data : _io_ifu_Axi_w_ready_T_2 ?
                io_ifu_Axi_w_bits_data : 64'h0;	
  assign io_sram_Axi_w_bits_strb = _io_lsu_Axi_w_ready_T ? io_lsu_Axi_w_bits_strb : _io_ifu_Axi_w_ready_T_2 ?
                io_ifu_Axi_w_bits_strb : 8'h0;
`else         
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
  
`endif 
endmodule
