`timescale 100ps/100ps

module d_ff(output reg Q, input DATA, input CLK, input CLR, input PRE);
    initial begin
        Q = 1'b0;
        end
    always @(posedge CLK, posedge CLR, posedge PRE)
        begin
				if(CLR == 1) Q = 1'b0;
				else if(PRE == 1) Q = 1'b1;
                else if(PRE == 0 && CLR == 0) Q = DATA;
                else Q = Q;

        end

endmodule

