`timescale 1ns/1ps
module CLK_GEN(
    input [31:0] FACTOR,  output reg CLK
);
    reg [7:0] c;
    reg [32:0] temp;
    initial begin
        CLK = 0;
        for( c = 0; c < 8'hFF; c=c+8'h01)
            for( temp = FACTOR; temp != 32'h0000; temp = temp - 32'h0001)
				begin
                #1; 
                CLK =~CLK;
					 //temp = (temp == 32'h0000)?(FACTOR):(temp);
				end
    end

endmodule
