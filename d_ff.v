`timescale 100ps/100ps

module d_ff(output Q, input DATA, input CLK, input CLR, input PRE);
    reg STORED_BIT;
    initial begin
        STORED_BIT = 1'b0;
        end
    always @(CLK, CLR, PRE)
        begin
            if( CLR == 1'b0 && PRE == 1'b0)
                STORED_BIT = (CLK == 1)?DATA:STORED_BIT;
            else if(CLR == 1'b1 && PRE == 1'b0)
                #5 STORED_BIT = 1'b0;
            else if(CLR == 1'b0 && PRE == 1'b1)
                #5 STORED_BIT = 1'b1;
            else #5 STORED_BIT = STORED_BIT;
        end
    assign Q = STORED_BIT;
endmodule

