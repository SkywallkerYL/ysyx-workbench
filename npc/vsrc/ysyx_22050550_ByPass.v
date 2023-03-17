`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"
module ysyx_22050550_ByPass(
    input         clock                         ,
                  reset                         ,
    /**************ByPass**************/
    input         io_IDU_valid                   ,
    input  [4:0]  io_IDU_raddr1                  ,
    input  [4:0]  io_IDU_raddr2                  ,
    output [63:0] io_IDU_rdata                   ,
    //input         io_IDU_wen                     ,
    output        io_IDU_pass1                   ,
    output        io_IDU_pass2                   ,

    input  [4:0]  io_WBU_waddr                   ,
    input         io_WBU_valid                   ,
    input [63:0]  io_WBU_rdata                   
);
    //旁路转发 
    assign io_IDU_rdata    = io_WBU_rdata;
    wire   passvalid = io_IDU_valid && io_WBU_valid;
    assign io_IDU_pass1 = (passvalid&&(io_IDU_raddr1==io_WBU_waddr));//?1'd1:1'd0;
    assign io_IDU_pass2 = (passvalid&&(io_IDU_raddr2==io_WBU_waddr));//?1'd1:1'd0;
endmodule