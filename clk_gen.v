`timescale 1ns/1ps
module CLK_GEN(
    input [31:0] FACTOR,  output reg CLK
);
    reg [7:0] c;
    reg [32:0] temp;
    initial begin
        CLK = 0;
            for( temp = FACTOR; temp != 32'h0000; temp = temp - 32'h0001)
				begin
                #5; 
                CLK =~CLK; 
                CLK =~CLK;
					 //temp = (temp == 32'h0000)?(FACTOR):(temp);
				end
    end

endmodule
