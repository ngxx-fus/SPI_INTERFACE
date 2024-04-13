`timescale 100ps/100ps

module d_ff(output reg Q, input DATA, input CLK, input CLR, input PRE);
    initial begin
        Q = 1'b0;
        end
    always @(CLK, CLR, PRE)
        begin
            if( CLR == 1'b0 && PRE == 1'b0)
                Q = (CLK == 1)?DATA:Q;
            else if(CLR == 1'b1 && PRE == 1'b0)
                #5 Q = 1'b0;
            else if(CLR == 1'b0 && PRE == 1'b1)
                #5 Q = 1'b1;
            else #5 Q = Q;
        end
endmodule

