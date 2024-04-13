`timescale 100ps/100ps

module CONTROL_COMBINATION(
    //from wishbone:
    input CLK,     //done
    input CLR,     //done
	input [7:0] CONTROL, //done
    input WRITE, //done
    input READ, //done
	input [7:0] STATUS,//done
    input MS_MODE,//done

    //form BUFFER
    inout  SENDER_BUFFER_FULL_STATE,//done
    output SENDER_BUFFER_SH_LD,//done
    inout  RECEIVER_BUFFER_FULL_STATE,//done
    output RECEIVER_BUFFER_SH_LD,//done

    //sender:
    input  SENDER_EMPTY_STATE,//done
    output SENDER_CLK,//done
    output SENDER_CLR,//done
    output reg SENDER_WRITE,//done
    output reg TE,//done

    //receiver:
    input  RECEIVER_FULL_STATE,//done
    output RECEIVER_CLK,//done
    output RECEIVER_CLR,//done
    output reg RE,
    output reg RECEIVER_READ//done
    //others:
);
    wire HIGH, LOw;
	 wire LOCAL_CLK;
	 reg SENDER_CLR_FROM_BUFFER;

    initial begin
        TE = LOW;
        RE = LOW;
    end
    //sender - sender buffer
	 
    always @(WRITE, SENDER_REG_FULL) 
    begin
        if(WRITE == HIGH)
        begin
            SENDER_BUFFER_FULL_STATE = HIGH;
        end
        else
        begin
            if(SENDER_REG_FULL == HIGH)
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
    always @(WRITE, STATUS[3],STATUS[7]) begin
        if( CONTROL[1] == 1 || CONTROL[5] == 1)
            TE = LOW;
        else
            if(CLK) 
                TE = ~WRITE;
            else 
                TE = TE;
    end

    //receiver
    always @(READ, RECEIVER_FULL_STATE) 
    begin
        if(READ == HIGH)
        begin
            if(negedge READ) 
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

    always @(READ, STATUS[2],STATUS[7]) begin
        if( CONTROL[0] == HIGH || CONTROL[4] == HIGH || )
            TE = LOW;
        else
            if(CLK) 
                TE = ~WRITE;
            else 
                TE = TE;
    end

    //other (included both sender and receiver :v)
    if( MS_MODE == HIGH) 
    begin
        assign LOCAL_CLK = CLK;
        assign S_CLK = CLK;
    end
    else
    begin
        assign LOCAL_CLK = S_CLK;
    end

    assign SENDER_CLK = LOCAL_CLK;
    assign SENDER_CLR = CLR | SENDER_CLR_FROM_BUFFER;

    assign RECEIVER_CLK = LOCAL_CLK;
    assign RECEIVER_CLR = CLR;

    assign SENDER_BUFFER_SH_LD = WRITE;

	assign LOW = 1'b0;
	assign HIGH = 1'b1;
endmodule