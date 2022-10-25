module key2asc(
    input [7:0] keybuffer,
    output reg [11:0] asci 

);
    MuxKeyWithDefault#(67, 8, 8) key2ascMux(.out(asci), .key(keybuffer), .default_out(12'b1111_1111_1111), .lut({
	8'h1C, 8'd65,
	8'h32, 8'd66,
    8'h21, 8'd67,
    8'h23, 8'd68,
    8'h24, 8'd69,
    8'h2B, 8'd70,
    8'h34, 8'd71,
    8'h33, 8'd72,
    8'h43, 8'd73,
    8'h3B, 8'd74,
    8'h42, 8'd75,
    8'h4B, 8'd76,
    8'h3A, 8'd77,
    8'h31, 8'd78,
    8'h44, 8'd79,
    8'h4D, 8'd80,
    8'h15, 8'd81,
    8'h2D, 8'd82,
    8'h1B, 8'd83,
    8'h2C, 8'd84,
    8'h3C, 8'd85,
    8'h2A, 8'd86,
    8'h1D, 8'd87,
    8'h22, 8'd88,
    8'h35, 8'd89,
    8'h1A, 8'd90,
    8'h45, 8'd48,
    8'h16, 8'd49,
    8'h1E, 8'd50,
    8'h26, 8'd51,
    8'h25, 8'd52,
    8'h2E, 8'd53,
    8'h36, 8'd54,
    8'h3D, 8'd55,
    8'h3E, 8'd56,
    8'h05, 8'd112,
    8'h06, 8'd113,
    8'h04, 8'd114,
    8'h0C, 8'd115,
    8'h03, 8'd116,
    8'h0B, 8'd117,
    8'h83, 8'd118,
    8'h0A, 8'd119,
    8'h01, 8'd120,
    8'h09, 8'd121,
    8'h78, 8'd122,
    8'h07, 8'd123,
    8'h66, 8'd8,
    8'h0D, 8'd9,
    8'h5A, 8'd13,
    8'h12, 8'd16,
    8'h14, 8'd17,
    8'h11, 8'd18,
    8'h58, 8'd20,
    8'h76, 8'd27,
    8'h29, 8'd32,
    8'h4C, 8'd186,
    8'h55, 8'd187,
    8'h41, 8'd188,
    8'h4E, 8'd189,
    8'h49, 8'd190,
    8'h4A, 8'd191,
    8'h0E, 8'd192,
    8'h54, 8'd219,
    8'h5B, 8'd221,
    8'h5D, 8'd220,
    8'h52, 8'd222
	}));
endmodule