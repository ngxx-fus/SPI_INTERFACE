module STATUS_COMBINATION (
	input SENDER_BUFFER_FULL_STATE,
	input SENDER_FULL_STATE,
    input SENDER_EMPTY_STATE,

    input RECEIVER_BUFFER_FULL_STATE,
    input RECEIVER_FULL_STATE,
    input RECEIVER_EMPTY_STATE,

    input SENDER_WRITE,
    input RECEIVER_READ,
    input S_CLK,
    input CLR,
    
    input CONNECTION_FAILED_STATE,

    output [7:0]STATUS
);
    reg [7:0] LOCAL_STATUS ;
    wire HIGH, LOW, HIGH_IMDEDANCE;
    initial begin
        LOCAL_STATUS = 8'h33;
    end

    always @(CLR) begin
        LOCAL_STATUS = 8'h33;
    end

    //LOCAL_STATUS[0]
    always @(SENDER_FULL_STATE) begin
        LOCAL_STATUS[0] = SENDER_FULL_STATE;
    end
    //LOCAL_STATUS[1]
    always @(RECEIVER_EMPTY_STATE) begin
        LOCAL_STATUS[1] = RECEIVER_EMPTY_STATE;
    end
    //LOCAL_STATUS[2]
    always @(RECEIVER_FULL_STATE)
    begin
        if(RECEIVER_FULL_STATE == HIGH)
            LOCAL_STATUS[2] = HIGH;
        else
            LOCAL_STATUS[2] = LOW;
    end
    // LOCAL_STATUS [3]
    always @(SENDER_EMPTY_STATE, SENDER_WRITE)//RESET LOCAL_STATUS[3] when CLEAR 
    begin   
	    if (SENDER_EMPTY_STATE == LOW && SENDER_WRITE == HIGH)//SENDER_EMPTY_STATE <> HIGH & WRITE
            LOCAL_STATUS[3] = HIGH;
        else if (CLR == HIGH)
            LOCAL_STATUS[3] = LOW;
        else
            LOCAL_STATUS[3] = LOW;
    end
    //  LOCAL_STATUS[4]
    always @ (SENDER_EMPTY_STATE)
    begin
         LOCAL_STATUS [4] = SENDER_EMPTY_STATE;
    end
    //  LOCAL_STATUS[5]
    always @ (SENDER_BUFFER_FULL_STATE) begin
        LOCAL_STATUS [5] = ~SENDER_BUFFER_FULL_STATE;
    end
    //  LOCAL_STATUS[6]
    always @ (RECEIVER_BUFFER_FULL_STATE) begin
	    LOCAL_STATUS [6] = RECEIVER_BUFFER_FULL_STATE  ;
    end
    // LOCAL_STATUS [7]
    always @(CONNECTION_FAILED_STATE)begin
	    LOCAL_STATUS [7] = CONNECTION_FAILED_STATE;
    end
	
    assign STATUS = LOCAL_STATUS;
    assign HIGH = 1'b1;
    assign LOW  = 1'b0;
    assign HIGH_IMDEDANCE = 1'bz;
endmodule
