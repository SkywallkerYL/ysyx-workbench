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
endmodule
