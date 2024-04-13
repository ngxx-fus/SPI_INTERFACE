`timescale 100ps/100ps

module CONTROL_COMBINATION(
    //from wishbone:
    input CLK,     
    input CLR,     
	 input [7:0] CONTROL, 
    input WRITE, 
    input READ, 
	 input [7:0] STATUS,
    input MS_MODE,

    //form BUFFER
    output reg SENDER_BUFFER_FULL_STATE,
    output SENDER_BUFFER_SH_LD,
    output reg RECEIVER_BUFFER_FULL_STATE,
    output RECEIVER_BUFFER_SH_LD,

    //sender:
    input  SENDER_EMPTY_STATE,
    output SENDER_CLK,
    output SENDER_CLR,
    output reg SENDER_WRITE,
    output reg TE,

    //receiver:
    input  RECEIVER_FULL_STATE,
    output RECEIVER_CLK,
    output RECEIVER_CLR,
    output reg RE,
    output reg RECEIVER_READ
    //others:
);
    wire HIGH, LOW;
	wire LOCAL_CLK;
	reg SENDER_CLR_FROM_BUFFER;

    initial begin
        TE = LOW;
        RE = LOW;
    end
    //sender - sender buffer
	 
    always @(WRITE, SENDER_EMPTY_STATE) 
    begin
        if(WRITE == HIGH)
        begin
            SENDER_BUFFER_FULL_STATE = HIGH;
        end
        else
        begin
            if(SENDER_EMPTY_STATE == HIGH)
            begin
                #5 SENDER_BUFFER_FULL_STATE = LOW;
                #5 SENDER_WRITE = HIGH;
            end
            else
            begin
                SENDER_BUFFER_FULL_STATE = SENDER_BUFFER_FULL_STATE;
                #5 SENDER_WRITE = LOW;
            end
        end
    end
    //SENDER: INTERRUPT transfering :v 
    always @(WRITE, STATUS[3],STATUS[7]) 
    begin
        if( CONTROL[1] == 1 || CONTROL[5] == 1)
            TE = LOW;
        else
            TE = HIGH;

    end

    //receiver
    always @(READ, RECEIVER_FULL_STATE) 
    begin
        if(READ == HIGH)
        begin
            if(READ) 
                RECEIVER_BUFFER_FULL_STATE = LOW;
            else 
                RECEIVER_BUFFER_FULL_STATE = RECEIVER_BUFFER_FULL_STATE;
        end
        else
        begin
            if(RECEIVER_FULL_STATE == HIGH)
            begin
                #5 RECEIVER_BUFFER_FULL_STATE = HIGH;
                #5 RECEIVER_READ = HIGH;
            end
            else
            begin
                RECEIVER_BUFFER_FULL_STATE = RECEIVER_BUFFER_FULL_STATE;
                #5 RECEIVER_READ = LOW;
            end
        end
    end

    always @(READ, STATUS[2],STATUS[7]) 
    begin
        if( CONTROL[0] == HIGH || CONTROL[5] == HIGH)
            RE = LOW;
        else
            RE = HIGH;
    end

    //other (included both sender and receiver :v)
    assign S_CLK = (MS_MODE == HIGH)?(CLK):(1'bz);
    assign LOCAL_CLK = (MS_MODE == HIGH)?(S_CLK):CLK;
    assign SENDER_CLK = LOCAL_CLK;
    assign SENDER_CLR = CLR | SENDER_CLR_FROM_BUFFER;
    assign RECEIVER_CLK = LOCAL_CLK;
    assign RECEIVER_CLR = CLR;
    assign SENDER_BUFFER_SH_LD = WRITE;

	assign LOW = 1'b0;
	assign HIGH = 1'b1;
endmodule