`include "./vsrc/ysyx_22050550_define.v"
module ysyx_22050550_TagAaaryMem(
    Q, CLK, CEN, WEN, BWEN, A, D
);
parameter Bits =`ysyx_22050550_TagWidth;
parameter Word_Depth = `ysyx_22050550_GroupNum;
parameter Add_Width = `ysyx_22050550_GroupWidth;
parameter Wen_Width = `ysyx_22050550_TagWidth;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Bits-1:0]      D;

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [Wen_Width-1:0] bwen = ~BWEN;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    Q <= cen && !wen ? ram[A] : (D & bwen) | {56'b0};

end

endmodule
