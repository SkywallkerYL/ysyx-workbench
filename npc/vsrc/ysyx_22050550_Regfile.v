`include "/home/yangli/ysyx-workbench/npc/vsrc/ysyx_22050550_define.v"

module ysyx_22050550_Regfile (
    input                               clk     ,
    input                               rst     ,
    input                               wen     ,
    //input rden,

    input [`ysyx_22050550_RegAddrBus]   rs1     ,
    input [`ysyx_22050550_RegAddrBus]   rs2     ,

    input [`ysyx_22050550_RegAddrBus]   rd      ,
    input [`ysyx_22050550_RegBus]       wdata   ,

    output reg [`ysyx_22050550_RegBus]  rd_data1,
    output reg [`ysyx_22050550_RegBus]  rd_data2
);
    
    reg  [`ysyx_22050550_RegBus] regs [`ysyx_22050550_RegNum-1:0];
    reg  [`ysyx_22050550_RegNum-1:1] regwen;
    assign regs[0] = `ysyx_22050550_CPUWIDTH'h0;
    generate
        for (genvar i = 1; i < `ysyx_22050550_RegNum; i = i+1) begin : regfile
            assign regwen[i] = wen & (rd == i);
            ysyx_22050550_Reg # (
                `ysyx_22050550_CPUWIDTH,
                `ysyx_22050550_ZeroWord
            )
                regi (
                    .clk(clk),
                    .rst(rst),
                    .wen(regwen[i]),
                    .din(wdata),
                    .dout(regs[i])
            );
        end
    endgenerate
    /*
    always @(posedge clk ) begin
        if (wen&(rd!=0)) begin
            regs[rd] = wdata;
        end
    end
    */
    //寄存器读 要防止指令的冲突，即当前要读的寄存器是前面指令写的寄存器
    //由于流水线的结构，如果前面指令还没写入，则会出现问题
    //此时就直接读出写入的数据
    always@(*) begin
        if (rst)
            rd_data1 = `ysyx_22050550_RegWidth'h0;
        else if (rs1 == 5'b0)
            rd_data1 = `ysyx_22050550_RegWidth'h0;
        else if (wen && rs1 == rd)
            rd_data1 = wdata;
        else
            rd_data1 = regs[rs1];
    end

    always@(*) begin
        if (rst)
            rd_data2 = `ysyx_22050550_RegWidth'h0;
        else if (rs1 == 5'b0)
            rd_data2 = `ysyx_22050550_RegWidth'h0;
        else if (wen && rs2 == rd)
            rd_data2 = wdata;
        else
            rd_data2 = regs[rs2];
    end


endmodule