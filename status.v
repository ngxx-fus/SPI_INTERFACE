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
    //TODO: làm cái bảng này như trong bảng trong sách 
    reg [7:0] LOCAL_STATUS ;
    wire HIGH, LOW, HIGH_IMDEDANCE;
    initial begin
        LOCAL_STATUS = 8'h30;
    end

    always @(CLR) begin
        LOCAL_STATUS = 8'h30;
    end
    //LOCAL_STATUS[2]
    always @(posedge S_CLK)
    begin
        if(RECEIVER_FULL_STATE == HIGH)
            LOCAL_STATUS[2] = HIGH;
        else
            LOCAL_STATUS[2] = LOW;
    end
    // LOCAL_STATUS [3]
    always @(posedge S_CLK)//RESET LOCAL_STATUS[3] when CLEAR 
    begin   
	    if (SENDER_EMPTY_STATE == LOW && SENDER_WRITE == HIGH)//SENDER_EMPTY_STATE <> HIGH & WRITE
            LOCAL_STATUS[3] = HIGH;
        else if (CLR == HIGH)
            LOCAL_STATUS[3] = LOW;
        else
            LOCAL_STATUS[3] = LOW;
    end

    //  LOCAL_STATUS[4]
    //  SENDER_EMPTY_STATE
    always @ (SENDER_EMPTY_STATE)
    begin
         LOCAL_STATUS [4] = SENDER_EMPTY_STATE;
    end
    //  LOCAL_STATUS[5]
    always @ (SENDER_EMPTY_STATE)
    begin
        if (SENDER_EMPTY_STATE == HIGH)
            LOCAL_STATUS [5] = HIGH;
        else
            LOCAL_STATUS [5] = LOW;
    end
    //  LOCAL_STATUS[6]
    always @ (RECEIVER_FULL_STATE)
    begin
	    LOCAL_STATUS [6] = ~RECEIVER_EMPTY_STATE  ;
    end
    // LOCAL_STATUS [7]
    always @(posedge S_CLK)
    begin
	    LOCAL_STATUS [7] = CONNECTION_FAILED_STATE;
    end
	
    assign STATUS = LOCAL_STATUS;
    // assign STATUS = 8'bzzzz_zzzz;
    assign HIGH = 1'b1;
    assign LOW  = 1'b0;
    assign HIGH_IMDEDANCE = 1'bz;
endmodule
