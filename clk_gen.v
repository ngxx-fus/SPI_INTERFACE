`timescale 1ns/1ps
module CLK_GEN(
    //PERIOD = FACTOR*(10ns)
    input [31:0] FACTOR,
    output CLK
);
    reg [7:0] c;
    reg [32:0] temp;
    initial begin
        for( c = 0; c < 8'hFF; c=c+8'h01)
            for( temp = FACTOR; temp != 32'h0000; temp = temp - 32'h0001)
				begin
                #1;
					 //temp = (temp == 32'h0000)?(FACTOR):(temp);
				end
    end

    assign CLK = c[0];
endmodule