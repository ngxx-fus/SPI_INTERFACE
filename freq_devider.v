module freq_devider(
    input SLOW_DOWN,
    input CLK_I,
    input RST,
    output CLK_O
);
    reg [3:0] FACTOR;
    reg [3:0] counter;
    
    initial begin
        factor = 4'h1;
        counter = 4'h0;
    end

    always @(DEVIDED_FACTOR)begin
        factor = factor + 4'h1;
        counter = 4'h0;
    end
    
    always @(posedge CLK) begin
        if(counter != factor ) 
            counter = counter + 4'h1;
        else
            computer = 4'h0;
    end
endmodule