`timescale 1ns/1ns
module tb;
	reg HCLK; 
	reg HRESETn;
	reg [7: 0] Input_DATA;
	reg [0: 0] Input_irq;
	wire Output_DATA;
	tri [15:0] PAD_GPIO_Sys0_S1;

	soc_m1_b1 uut(
		.HCLK(HCLK), 
		.HRESETn(HRESETn),
		.Input_DATA(Input_DATA),
		.Input_irq(Input_irq),
		.Output_DATA(Output_DATA),
		.PAD_GPIO_Sys0_S1(PAD_GPIO_Sys0_S1));

	always #5 HCLK = ~HCLK;
	initial begin
		HCLK = 0;
		HRESETn = 1'bx;

		#50;
		HRESETn = 0;
		#100;
		HRESETn = 1;
	end
	initial begin
		$dumpfile("n5_2x2_basic_dump.vcd");
		$dumpvars(0);
		#100000;
		$finish;
	end
	initial begin 
		#1  
		$readmemh("main.hex", uut.openstriVe_soc_mem_Sys0_S0.mem); 
	end
	GPIO_VIP GPIO_VIP_Sys0_S1(
	.GPIOOUT(PAD_GPIO_Sys0_S1)
	);

endmodule