`timescale 10ps/10ps

module CONTROL_COMBINATION(
    input CLK,             input CLR,        input [7:0] CONTROL,   
    input WRITE,           input READ,       input [7:0] STATUS,
    input MS_MODE,         output reg SENDER_BUFFER_FULL_STATE,
    output SENDER_BUFFER_SH_LD,  output reg RECEIVER_BUFFER_FULL_STATE,
    output reg RECEIVER_BUFFER_SH_LD,        input  SENDER_FULL_STATE,
    input  SENDER_EMPTY_STATE,               output SENDER_CLK,
    output SENDER_CLR,     output reg SENDER_WRITE,
    output reg TE,         input  RECEIVER_FULL_STATE,
    input  RECEIVER_EMPTY_STATE,             output RECEIVER_CLK,
    output RECEIVER_CLR,   output reg RE,    output reg RECEIVER_READ,
    inout CS
);
    wire HIGH, LOW;
	reg SENDER_CLR_FROM_BUFFER;

    initial begin
        SENDER_CLR_FROM_BUFFER = LOW;
        SENDER_BUFFER_FULL_STATE = LOW;
        SENDER_WRITE = LOW;
        RE = LOW;
        RECEIVER_BUFFER_FULL_STATE = LOW;
        RECEIVER_BUFFER_SH_LD = HIGH;
        RECEIVER_READ = LOW;
        TE = LOW;
    end
    always @(WRITE, SENDER_EMPTY_STATE, CLK) 
    begin
        if(WRITE == HIGH)
        begin
            SENDER_BUFFER_FULL_STATE = HIGH;
        end
        else
        begin
            if(SENDER_EMPTY_STATE == HIGH)
                if( SENDER_BUFFER_FULL_STATE == HIGH) begin
                    #5 SENDER_BUFFER_FULL_STATE = LOW;
                    SENDER_WRITE = SENDER_EMPTY_STATE&HIGH;
                    #30;
                end
            else begin
                SENDER_BUFFER_FULL_STATE = SENDER_BUFFER_FULL_STATE;
                #5 SENDER_WRITE = LOW;
            end
        end
    end
    always @(WRITE, STATUS[1],STATUS[7], STATUS[7])  //SENDER: INTERRUPT transfering :v 
        if(STATUS[7] == 1) // error of connection
            TE = LOW;
        else 
            if(CONTROL[4] == HIGH && STATUS[1] == HIGH )
                TE = LOW; // interrupt when RECEIVER ready to receive data
            else
                if( CONTROL[1] == HIGH && STATUS[3] == HIGH) //overloading occurred
                    TE = LOW;
                else
                    TE = CONTROL[2];
    always @(READ, RECEIVER_FULL_STATE) 
        if(READ == HIGH)
        begin
            if(READ)
                RECEIVER_BUFFER_FULL_STATE = LOW;
            else 
                RECEIVER_BUFFER_FULL_STATE = RECEIVER_BUFFER_FULL_STATE;
        end
        else
            if(RECEIVER_FULL_STATE == HIGH && RECEIVER_BUFFER_FULL_STATE == HIGH)
            begin
                #5 RECEIVER_BUFFER_FULL_STATE = HIGH;
                   RECEIVER_BUFFER_SH_LD = HIGH;
                   RECEIVER_READ = HIGH;
                #30;
            end
            else
            begin
                RECEIVER_BUFFER_FULL_STATE = RECEIVER_BUFFER_FULL_STATE;
                RECEIVER_READ = LOW;
                RECEIVER_BUFFER_SH_LD = LOW;
                #30;
            end

    always @(READ, STATUS[2],STATUS[7]) 
        if( CONTROL[0] == HIGH && STATUS[2] == HIGH)//overloading occurred
            RE = LOW;        
        else
            if( CONTROL[5] == HIGH && STATUS[7])
                RE = LOW;
            else
                if( CONTROL[6] ==  LOW) //enable RECEIVING
                    RE = LOW;
                else
                    RE = HIGH;
    assign SENDER_CLK = CLK;
    assign SENDER_CLR = CLR | SENDER_CLR_FROM_BUFFER;
    assign RECEIVER_CLK = CLK;  assign RECEIVER_CLR = CLR;
    assign SENDER_BUFFER_SH_LD = ~WRITE;
    assign CS = (TE==HIGH || RE==HIGH)?LOW:HIGH;

	assign LOW = 1'b0;
	assign HIGH = 1'b1;
endmodule