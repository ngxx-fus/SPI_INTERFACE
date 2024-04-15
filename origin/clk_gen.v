`timescale 1ns/1ns
module CLK_GEN(
    //PERIOD = FACTOR*(10ns)
    input [31:0] FACTOR,
    output CLK
);
    reg [7:0] c;
    reg [32:0] temp;

    initial begin
        for( c = 0; c < 8'hFF; c=c+8'h01)
            for( temp = 32'hFFFF; temp < FACTOR; temp = temp + 32'h0001)
                #5;
    end

    assign clk = c[0];
endmodule