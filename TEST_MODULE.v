`include "clk_gen.v"
`include "SPI_Interface.v"
`timescale 1ns/10ps

module TEST_MODULE(
	inout S_CLK,
	inout MOSI,
	inout MISO,
	inout CS
);
	wire HIGH, LOW;
	//-----------------MASTER---------------------
	wire MASTER_CLK; 
	//freq = 1MHz
	CLK_GEN MASTER_clk_gen(.FACTOR(32'h0019), .CLK(MASTER_CLK));
	reg MASTER_MS_MODE;
	reg [7:0] MASTER_O_DATA;
	reg [7:0] MASTER_CONTROL;
	reg MASTER_CLR;
	reg MASTER_READ;
	reg MASTER_WRITE;
	wire [7:0] MASTER_STATUS; 
	wire [7:0] MASTER_I_DATA; // to receive

	SPI_Interface MASTER(
		.MS_MODE(HIGH),
		.CLK(MASTER_CLK),
		.CLR(MASTER_CLR),
		.READ(MASTER_READ),
		.WRITE(MASTER_WRITE),
		.CONTROL(MASTER_CONTROL),
		.STATUS(MASTER_STATUS),
		.INCOMING_DATA(MASTER_O_DATA),
		.OUTCOMING_DATA(MASTER_I_DATA),
		.MISO(MISO),
		.MOSI(MOSI),
		.CS(CS),
		.S_CLK(S_CLK)
	);
	//-----------------SLAVE---------------------
	wire SLAVE_CLK; 
	//freq = 1MHz
	CLK_GEN SLAVE_clk_gen(.FACTOR(32'h0050), .CLK(SLAVE_CLK));
	reg SLAVE_MS_MODE;
	reg [7:0] SLAVE_O_DATA;
	reg [7:0] SLAVE_CONTROL;
	reg SLAVE_CLR;
	reg SLAVE_READ;
	reg SLAVE_WRITE;
	wire [7:0] SLAVE_STATUS; 
	wire [7:0] SLAVE_I_DATA; // to receive

	SPI_Interface SLAVE(
		.MS_MODE(LOW),
		.CLK(SLAVE_CLK),
		.CLR(SLAVE_CLR),
		.READ(SLAVE_READ),
		.WRITE(SLAVE_WRITE),
		.CONTROL(SLAVE_CONTROL),
		.STATUS(SLAVE_STATUS),
		.INCOMING_DATA(SLAVE_O_DATA),
		.OUTCOMING_DATA(SLAVE_I_DATA),
		.MISO(MOSI),
		.MOSI(MISO),
		.CS(CS),
		.S_CLK(S_CLK)
	);
	//-----------------BEHAVIOR------------------
	initial begin
		//for gtkwave
		$dumpfile("TEST_MODULE.vcd"); 
		$dumpvars(0, TEST_MODULE);
		//set up data to send both side (master and slave)
		MASTER_O_DATA = 8'h50;// 'P'
		SLAVE_O_DATA = 8'h4D; // 'M'
		//set up control reg both side
		MASTER_CONTROL = 8'h00;
		SLAVE_CONTROL = 8'h00;
		//set up inital value for READ/WRITE/CLR both side
		MASTER_CLR = LOW;
		SLAVE_CLR = LOW;
		MASTER_READ = LOW;
		MASTER_WRITE = LOW;
		SLAVE_READ = LOW;
		SLAVE_WRITE = LOW;
		// idle state for 50ns
		#50;
		// both MASTER and SLAVE write data to their buffers (in 5ns)
		MASTER_WRITE = HIGH;
		SLAVE_WRITE = HIGH;
		#50;
		MASTER_WRITE = LOW;
		SLAVE_WRITE = LOW;
		// idle state
		#50
		// change data to transfer
		MASTER_O_DATA = 8'h54;// 'T'
		SLAVE_O_DATA = 8'h6C; // 'L' 
		// idle state
		#135
		// both MASTER and SLAVE write data to their buffers (in 2ns)
		MASTER_WRITE = HIGH;
		SLAVE_WRITE = HIGH;
		#5;
		MASTER_WRITE = LOW;
		SLAVE_WRITE = LOW;
		//set up control reg both side
		MASTER_CONTROL = 8'hE4;
		SLAVE_CONTROL = 8'hE4;
		// both MASTER and SLAVE READ data to their buffers (in 5ns)
		MASTER_READ = HIGH;
		SLAVE_READ = HIGH;
		#5;
		MASTER_READ = LOW;
		SLAVE_READ = LOW;
		// idle state for 3ns
		#93;
		// both MASTER and SLAVE READ data to their buffers (in 5ns)
		MASTER_READ = HIGH;
		SLAVE_READ = HIGH;
		#5;
		MASTER_READ = LOW;
		SLAVE_READ = LOW;
		// idle state for 58ns
		#58;
	end



	//------------------OTHERS-------------------
	assign LOW = 1'b0;
	assign HIGH = 1'b1;
endmodule