`include "d_ff.v"

module SHIFT_REGISTER_4BIT (
    input CLK,
    input CLR,
    input [3:0] P_DATA_IN,
    input S_DATA_IN,
    input SH_LD,//load = ?
    output  [3:0] P_DATA_OUT
);
    wire notSH_LD;
    wire notCLR;
    wire [3:0]D_CLR;
    wire [3:0]S_CLR;
    wire [3:0]D_DATA;
    wire [3:0]D_PRE;
    wire [3:0]S_PRE;
    
    d_ff dff0 (.CLK(CLK), .CLR(D_CLR[0]), .PRE(D_PRE[0]), 
               .DATA(S_DATA_IN),     .Q(P_DATA_OUT[3]) );
    d_ff dff1 (.CLK(CLK), .CLR(D_CLR[1]), .PRE(D_PRE[1]), 
               .DATA(P_DATA_OUT[3]), .Q(P_DATA_OUT[2]) );
    d_ff dff2 (.CLK(CLK), .CLR(D_CLR[2]), .PRE(D_PRE[2]), 
               .DATA(P_DATA_OUT[2]), .Q(P_DATA_OUT[1]) );
    d_ff dff3 (.CLK(CLK), .CLR(D_CLR[3]), .PRE(D_PRE[3]), 
               .DATA(P_DATA_OUT[1]), .Q(P_DATA_OUT[0]) );

    not(notSH_LD, SH_LD);
    not(notCLR, CLR);

    and(S_PRE[0], notSH_LD, D_DATA[3]); nor(S_CLR[0], SH_LD, D_DATA[3]);
    and(S_PRE[1], notSH_LD, D_DATA[2]); nor(S_CLR[1], SH_LD, D_DATA[2]);
    and(S_PRE[2], notSH_LD, D_DATA[1]); nor(S_CLR[2], SH_LD, D_DATA[1]);
    and(S_PRE[3], notSH_LD, D_DATA[0]); nor(S_CLR[3], SH_LD, D_DATA[0]);

    and(D_PRE[0], S_PRE[0], notCLR); or(D_CLR[0], S_CLR[0], CLR);
    and(D_PRE[1], S_PRE[1], notCLR); or(D_CLR[1], S_CLR[1], CLR);
    and(D_PRE[2], S_PRE[2], notCLR); or(D_CLR[2], S_CLR[2], CLR);
    and(D_PRE[3], S_PRE[3], notCLR); or(D_CLR[3], S_CLR[3], CLR);


    assign D_DATA = P_DATA_IN;

endmodule

