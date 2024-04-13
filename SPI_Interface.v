`include "sender_receiver.v"
`include "control.v"
`include "status.v"

module SPI_Interface(
	//wishbone bus  = computer bus
	//Wishbone to communicate with CPU/MCU
	input MS_MODE, // mater or slave mode
	input CLK,
	input CLR,
	input READ,
	input WRITE,
	input [7:0] CONTROL,
	// 0 : to interrupt receiving data when overwrite occured at RECEIVER 
	// 1 : to interrupt receiving data when overwrite occured at SENDER
	// 2 : revered
	// 3 : to interrupt other block when sender is ready to transfer data
	// 4 : to interrupt other block when receiver is ready to catch data
	// 5 : to interrupt all block when neither transferring or receiving occurs overwrite error 
	// 6 : revered
	// 7 : maintaning the "connected-state", '0' logic level to establish the connection
	output [7:0] STATUS,
	input [7:0] INCOMING_DATA,
	output [7:0] OUTCOMING_DATA,
	//SPI to communicate with other SPI's devices
	input MISO,
	output MOSI,
	inout CS,
	inout S_CLK
);
	wire HIGH, LOW;

	wire SENDER_CLK;
	wire SENDER_CLR;
	wire SENDER_WRITE;
	wire TE;
	wire SENDER_REG_FULL;
	wire SENDER_EMPTY_STATE;
	
	wire RECEIVER_CLK;
	wire RECEIVER_CLR;
	wire RECEIVER_READ;
	wire RE;
	wire RECEIVER_FULL_STATE;
	wire RECEIVER_EMPTY_STATE;

	wire [7:0] SENDER_BUFFER_DATA_I;
	wire [7:0] SENDER_BUFFER_DATA_O;
	wire       SENDER_BUFFER_SH_LD;

	wire [7:0] RECEIVER_BUFFER_DATA_I;
	wire [7:0] RECEIVER_BUFFER_DATA_O;
	wire       RECEIVER_BUFFER_SH_LD;

	//since the 8bit register is PIPO,
	//so it can only FULL or EMPTY :v
	wire SENDER_BUFFER_FULL_STATE;
	SHIFT_REGISTER_8BIT SENDER_BUFFER(
		.CLK(LOW),
		.CLR(CLR),
		.P_DATA_IN(SENDER_BUFFER_DATA_I),
		.SH_LD(SENDER_BUFFER_SH_LD),
		.P_DATA_OUT(SENDER_BUFFER_DATA_O)
	);

	wire RECEIVER_BUFFER_FULL_STATE;	
	SHIFT_REGISTER_8BIT RECEIVER_BUFFER(
		.CLK(LOW),
		.CLR(CLR),
		.P_DATA_IN(RECEIVER_BUFFER_DATA_I),
		.SH_LD(RECEIVER_BUFFER_SH_LD),
		.P_DATA_OUT(RECEIVER_BUFFER_DATA_O)
	);
	
	SENDER sender(
		.CLK(SENDER_CLK),
		.CLR(SENDER_CLR),
		.WRITE(SENDER_WRITE),
		.TE(TE),
		.FULL_STATE(SENDER_REG_FULL),
		.EMPTY_STATE(SENDER_EMPTY_STATE),
		.DATA(P_DATA_IN),
		.MOSI(MOSI)
	);
	RECEIVER receiver(
		.CLK(RECEIVER_CLK),
		.CLR(RECEIVER_CLR),
		.READ(RECEIVER_READ),
		.RE(RE),
		.FULL_STATE(RECEIVER_FULL_STATE),
		.EMPTY_STATE(RECEIVER_EMPTY_STATE),
		.DATA(P_DATA_OUT),
		.MISO(MISO)
	);
	STATUS_COMBINATION status(
		//command signal
		.S_CLK(S_CLK),
		.CLR(CLR),
		.SENDER_WRITE(SENDER_WRITE),
		//status of sender
		.SENDER_FULL_STATE(SENDER_FULL_STATE),
		.SENDER_EMPTY_STATE(SENDER_EMPTY_STATE),
		//status of receiver
		.RECEIVER_FULL_STATE(RECEIVER_FULL_STATE),
		.RECEIVER_EMPTY_STATE(RECEIVER_EMPTY_STATE),
		.STATUS(STATUS)
	);
	
	CONTROL_COMBINATION control(
		.CLK(CLK),
		.CLR(CLR),
		.CONTROL(CONTROL),
		.WRITE(WRITE),
		.READ(READ),
		.SENDER_BUFFER_FULL_STATE(SENDER_BUFFER_FULL_STATE),
		.SENDER_BUFFER_SH_LD(SENDER_BUFFER_SH_LD),
		.RECEIVER_BUFFER_FULL_STATE(RECEIVER_BUFFER_FULL_STATE),
		.RECEIVER_BUFFER_SH_LD(RECEIVER_BUFFER_SH_LD),
		.SENDER_CLK(SENDER_CLK),
		.SENDER_CLR(SENDER_CLR),
		.SENDER_EMPTY_STATE(SENDER_EMPTY_STATE),
		.SENDER_WRITE(SENDER_WRITE),
		.TE(TE),
		.RECEIVER_CLK(RECEIVER_CLK),
		.RECEIVER_CLR(RECEIVER_CLR),
		.RECEIVER_FULL_STATE(RECEIVER_FULL_STATE),
		.RE(RE),
		.RECEIVER_READ(RECEIVER_READ)
	);

	assign OUTCOMING_DATA = RECEIVER_BUFFER_DATA_O;
	assign SENDER_BUFFER_DATA_I = INCOMING_DATA;

	assign S_LCK = (MS_MODE == HIGH)?(CLK & (~CONTROL[7])):(S_CLK);

	assign LOW = 1'b0;
	assign HIGH = 1'b1;
endmodule
