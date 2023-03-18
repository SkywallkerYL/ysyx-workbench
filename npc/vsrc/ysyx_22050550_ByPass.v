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


    //input  [4:0]  io_EXU_waddr                   ,
    //input         io_EXU_valid                   ,
    //input [63:0]  io_EXU_rdata                   ,

    //input  [4:0]  io_LSU_waddr                   ,
    //input         io_LSU_valid                   ,
    //input [63:0]  io_LSU_rdata                   ,


    input  [4:0]  io_WBU_waddr                   ,
    input         io_WBU_valid                   ,
    input [63:0]  io_WBU_rdata                   
);
    //旁路转发 
    //增加从EXU 和LSU来的路径那条路valid了 并且和要读的一样 就选那条
    assign io_IDU_rdata    = io_WBU_rdata;
    //(io_IDU_raddr1==io_WBU_waddr || io_IDU_raddr2==io_WBU_waddr) && io_WBU_valid && io_WBU_waddr!=0 ? io_WBU_rdata:
    //(io_IDU_raddr1==io_LSU_waddr || io_IDU_raddr2==io_LSU_waddr) && io_LSU_valid && io_LSU_waddr!=0 ? io_LSU_rdata:
    //(io_IDU_raddr1==io_EXU_waddr || io_IDU_raddr2==io_EXU_waddr) && io_EXU_valid && io_EXU_waddr!=0 ? io_EXU_rdata: 0;
    //wire   passvalid = io_IDU_valid && (io_WBU_valid || io_LSU_valid || io_EXU_valid);
    assign io_IDU_pass1 = (io_IDU_valid&& io_IDU_raddr1==io_WBU_waddr && io_WBU_valid);
    //((io_IDU_raddr1==io_WBU_waddr && io_WBU_valid && io_WBU_waddr!=0)||
    // (io_IDU_raddr1==io_LSU_waddr && io_LSU_valid && io_LSU_waddr!=0)||
    // (io_IDU_raddr1==io_EXU_waddr && io_EXU_valid && io_EXU_waddr!=0)
    //));
    assign io_IDU_pass2 = (io_IDU_valid&& io_IDU_raddr2==io_WBU_waddr && io_WBU_valid);
    //((io_IDU_raddr2==io_WBU_waddr && io_WBU_valid && io_WBU_waddr!=0)||
    // (io_IDU_raddr2==io_LSU_waddr && io_LSU_valid && io_LSU_waddr!=0)||
    // (io_IDU_raddr2==io_EXU_waddr && io_EXU_valid && io_EXU_waddr!=0)
    //));
endmodule