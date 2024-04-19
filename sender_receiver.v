`timescale 100ps/100ps
`include "shift_register_8bit.v"

module SENDER (
    input  [7:0] DATA, input  CLR,
    input  WRITE,      input  TE,
    input  CLK,        output OUT, 
    output FULL_STATE, output EMPTY_STATE 
);
    wire [7:0] P_DATA_OUT;  reg  [3:0] COUNT_SENT;
    reg  SHIFT_CLK;         wire LOW, HIGH;

    initial begin
        COUNT_SENT = 4'b1000;
    end

    SHIFT_REGISTER_8BIT sender_shift_register(
        .CLK(SHIFT_CLK),     .CLR(CLR),
        .P_DATA_IN(DATA),    .S_DATA_IN(LOW),
        .SH_LD(~WRITE),      .P_DATA_OUT(P_DATA_OUT)
    );

    //l-------------- logic circuit -----------------------
    always @(SHIFT_CLK, CLR, WRITE)
        if(CLR == 1)
            COUNT_SENT = 4'h8;
        else if(WRITE == HIGH)
				 COUNT_SENT = 4'h0;
				 else if(TE == HIGH && EMPTY_STATE == LOW)
                      COUNT_SENT = COUNT_SENT + 4'h1;
	always @(CLK)
        SHIFT_CLK = #5 CLK & TE;
 
    assign OUT = (CLR==HIGH)?(1'bz):
                 ((TE == HIGH)?(P_DATA_OUT[0]):(1'bz));
    assign EMPTY_STATE = (COUNT_SENT == 4'b1000) ? HIGH : LOW;
    assign FULL_STATE = ((COUNT_SENT == 4'b0000))? HIGH : LOW;

    assign LOW = 1'b0;
    assign HIGH = 1'b1; 
endmodule     



//--------------------------------------------------------------------------------------------------

module RECEIVER (
    input CLR,    input READ,     input RE,
    input IN,     input CLK,      output [7:0] DATA,
    output FULL_STATE,            output EMPTY_STATE 
);
    wire LOW, HIGH;               wire [7:0] P_DATA_OUT;
    reg [3:0] COUNT_RECEIVED;     reg SHIFT_CLK;

    initial begin
        COUNT_RECEIVED = 0;
    end

    SHIFT_REGISTER_8BIT receiver_shift_register (
        .CLK(SHIFT_CLK),         .CLR(CLR),
        .P_DATA_IN(8'bzzzz_zzzz),.S_DATA_IN(IN),
        .SH_LD(HIGH),            .P_DATA_OUT(P_DATA_OUT)
    );

    always @(SHIFT_CLK, CLR, READ)
        if(CLR == HIGH || READ == HIGH)
            COUNT_RECEIVED = 4'b0000;
        else
            if( RE & (~FULL_STATE) ) 
                COUNT_RECEIVED = COUNT_RECEIVED + 4'b0001;

	always @(CLK)
        SHIFT_CLK = #5 CLK & RE;
    assign LOW = 1'b0;           assign HIGH = 1'b1;  
    assign EMPTY_STATE        = (COUNT_RECEIVED == 4'B0000)?(HIGH):(LOW);
    assign FULL_STATE         = (COUNT_RECEIVED == 4'B1000)?(HIGH):(LOW);
    assign DATA               = (READ==1'b1)?(P_DATA_OUT):(8'bzzzz_zzzz);
endmodule
