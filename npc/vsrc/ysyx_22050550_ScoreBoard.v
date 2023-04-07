`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_ScoreBoard(
    input         clock                         ,
                  reset                         ,
    /*******************************/
    input         io_IDU_valid                   ,
    input  [4:0]  io_IDU_raddr1                  ,
    input  [4:0]  io_IDU_raddr2                  ,
    input  [4:0]  io_IDU_waddr                   ,
    input         io_IDU_wen                     ,
    output        io_IDU_busy1                   ,
    output        io_IDU_busy2                   ,

    input  [4:0]  io_WBU_waddr                   ,
    input         io_WBU_wen                     
);
    //idu优先，即优先把寄存器busy拉高
    // Idu 申请写的情况下，busy拉高
    //WBU申请写回的情况下，Busy拉低 但是如果此时IDU也是拉高的，那么busy也要拉高 !(Iduwen&&io_IDU_waddr==io_WBU_waddr)
    
    reg  busy [31 : 0] ;//32
    assign busy[0] =1'd0;
`ifdef ysyx_22050550_FAST
    wire  Iduwen  = io_IDU_wen                                          ;
    wire  Wbuwen  = io_WBU_wen && !(Iduwen&&io_IDU_waddr==io_WBU_waddr) ;
    
    always @(posedge clock) begin
        if((Iduwen)&&(|io_IDU_waddr)) busy[io_IDU_waddr] <= 1'b1;
        if(Wbuwen && |io_WBU_waddr)busy[io_WBU_waddr] <= 1'b0;
    end
`else
    
    wire  [31:1] Iduwen     ;
    wire  [31:1] Wbuwen     ;
    wire  [31:1] busydata   ;
    generate
        for (genvar i = 1; i < 32; i = i+1) begin : regfile
            assign Iduwen[i]    = io_IDU_wen & (io_IDU_waddr == i);
            assign Wbuwen[i]    = io_WBU_wen & (io_WBU_waddr == i);
            assign busydata[i]  = Iduwen[i]?1'd1:1'd0;
            
            ysyx_22050550_Reg # (1,1'd0) regi (
                .clock(clock)                   ,
                .reset(reset)                   ,
                .wen(Iduwen[i]||Wbuwen[i])      ,
                .din(busydata[i])               ,
                .dout(busy[i])
            );
            
        end
    endgenerate
`endif
    assign io_IDU_busy1    = busy[io_IDU_raddr1] & io_IDU_valid;
    assign io_IDU_busy2    = busy[io_IDU_raddr2] & io_IDU_valid;
    

endmodule

