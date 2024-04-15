
`include "shift_register_4bit.v"

module SHIFT_REGISTER_8BIT (
    input CLK,
    input CLR,
    input [7:0] P_DATA_IN,
    input S_DATA_IN,
    input SH_LD,
    output  [7:0] P_DATA_OUT
);

    SHIFT_REGISTER_4BIT shift_register_0(
        .CLK(CLK),
        .CLR(CLR),
        .P_DATA_IN(P_DATA_IN[7:4]),
        .S_DATA_IN(S_DATA_IN),
        .SH_LD(SH_LD),
        .P_DATA_OUT(P_DATA_OUT[7:4])
    );
    SHIFT_REGISTER_4BIT shift_register_1(
        .CLK(CLK),
        .CLR(CLR),
        .P_DATA_IN(P_DATA_IN[3:0]),
        .S_DATA_IN(P_DATA_OUT[4]),
        .SH_LD(SH_LD),
        .P_DATA_OUT(P_DATA_OUT[3:0])
    );
endmodule

