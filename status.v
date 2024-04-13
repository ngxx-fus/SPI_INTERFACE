module STATUS_COMBINATION (
	input SENDER_REG_FULL,
	input SENDER_REG_EMPTY,
    input RECEIVER_REG_FULL,
    input RECEIVER_REG_EMPTY,
    input S_CLK,
    input SENDER_WRITE,
    input CLR,
    output reg [7:0] STATUS
);
    wire HIGH, LOW;
    initial begin
        STATUS = 8'h30;
    end

    always @(CLR) begin
        STATUS = 8'h30;
    end

    //STATUS[2]
    always @(posedge S_CLK)
    begin
        if(RECEIVER_REG_FULL == HIGH)
            STATUS[2] = HIGH;
        else
            STATUS[2] = LOW;
    end


    // STATUS [3]
    always @(posedge S_CLK)//RESET STATUS[3] when CLEAR 
    begin   
	    if (SENDER_REG_EMPTY == LOW && SENDER_WRITE == HIGH)//SENDER_REG_EMPTY <> HIGH & WRITE
            STATUS[3] = HIGH;
        else if (CLR == HIGH)
            STATUS[3] = LOW;
        else
            STATUS[3] = LOW;
    end

    //  STATUS[4]
    //  SENDER_REG_EMPTY
    always @ (SENDER_REG_EMPTY)
    begin
         STATUS [4] = SENDER_REG_EMPTY;
    end
    //  STATUS[5]
    always @ (SENDER_REG_EMPTY)
    begin
        if (SENDER_REG_EMPTY == HIGH)
            STATUS [5] = HIGH;
        else
            STATUS [5] = LOW;
    end
    //  STATUS[6]
    always @ (RECEIVER_REG_FULL)
    begin
	    STATUS [6] = ~RECEIVER_REG_EMPTY  ;
    end


    assign HIGH = 1'b1;
    assign LOW  = 1'b0;
endmodule