module STATUS_COMBINATION (
	input SENDER_REG_FULL,
	input SENDER_REG_EMPTY,
    input RECEIVER_REG_FULL,
    input RECEIVER_REG_EMPTY,
    input S_CLK,
    input SENDER_WRITE,
    input CLR,
    output [7:0]STATUS
);

    reg [7:0] LOCAL_STATUS ;
    wire HIGH, LOW;
    initial begin
        LOCAL_STATUS = 8'h30;
    end

    always @(CLR) begin
        LOCAL_STATUS = 8'h30;
    end

    //LOCAL_STATUS[2]
    always @(posedge S_CLK)
    begin
        if(RECEIVER_REG_FULL == HIGH)
            LOCAL_STATUS[2] = HIGH;
        else
            LOCAL_STATUS[2] = LOW;
    end


    // LOCAL_STATUS [3]
    always @(posedge S_CLK)//RESET LOCAL_STATUS[3] when CLEAR 
    begin   
	    if (SENDER_REG_EMPTY == LOW && SENDER_WRITE == HIGH)//SENDER_REG_EMPTY <> HIGH & WRITE
            LOCAL_STATUS[3] = HIGH;
        else if (CLR == HIGH)
            LOCAL_STATUS[3] = LOW;
        else
            LOCAL_STATUS[3] = LOW;
    end

    //  LOCAL_STATUS[4]
    //  SENDER_REG_EMPTY
    always @ (SENDER_REG_EMPTY)
    begin
         LOCAL_STATUS [4] = SENDER_REG_EMPTY;
    end
    //  LOCAL_STATUS[5]
    always @ (SENDER_REG_EMPTY)
    begin
        if (SENDER_REG_EMPTY == HIGH)
            LOCAL_STATUS [5] = HIGH;
        else
            LOCAL_STATUS [5] = LOW;
    end
    //  LOCAL_STATUS[6]
    always @ (RECEIVER_REG_FULL)
    begin
	    LOCAL_STATUS [6] = ~RECEIVER_REG_EMPTY  ;
    end

    assign STATUS = LOCAL_STATUS;
    // assign STATUS = 8'bzzzz_zzzz;
    assign HIGH = 1'b1;
    assign LOW  = 1'b0;
endmodule