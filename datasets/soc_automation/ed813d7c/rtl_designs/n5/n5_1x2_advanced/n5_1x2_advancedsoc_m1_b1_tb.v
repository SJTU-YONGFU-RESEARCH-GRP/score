`timescale 1ns/1ns
module tb;
	reg HCLK; 
	reg HRESETn;
	reg [7: 0] Input_DATA;
	reg [0: 0] Input_irq;
	wire Output_DATA;
	tri [15:0] PAD_GPIO_Sys0_S1;
	tri1 [0:0] PAD_i2c_cl_Sys0_SS0_S1;
	tri1 [0:0] PAD_i2c_da_Sys0_SS0_S1;
	wire [0:0] PAD_MSI_Sys0_SS0_S2;
	wire [0:0] PAD_MSO_Sys0_SS0_S2;
	wire [0:0] PAD_SSn_Sys0_SS0_S2;
	wire [0:0] PAD_SCLK_Sys0_SS0_S2;
	wire [0:0] PAD_pwm_Sys0_SS0_S3;

	soc_m1_b1 uut(
		.HCLK(HCLK), 
		.HRESETn(HRESETn),
		.Input_DATA(Input_DATA),
		.Input_irq(Input_irq),
		.Output_DATA(Output_DATA),
		.PAD_GPIO_Sys0_S1(PAD_GPIO_Sys0_S1),
		.PAD_i2c_cl_Sys0_SS0_S1(PAD_i2c_cl_Sys0_SS0_S1),
		.PAD_i2c_da_Sys0_SS0_S1(PAD_i2c_da_Sys0_SS0_S1),
		.PAD_MSI_Sys0_SS0_S2(PAD_MSI_Sys0_SS0_S2),
		.PAD_MSO_Sys0_SS0_S2(PAD_MSO_Sys0_SS0_S2),
		.PAD_SSn_Sys0_SS0_S2(PAD_SSn_Sys0_SS0_S2),
		.PAD_SCLK_Sys0_SS0_S2(PAD_SCLK_Sys0_SS0_S2),
		.PAD_pwm_Sys0_SS0_S3(PAD_pwm_Sys0_SS0_S3));

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
		$dumpfile("n5_1x2_advanced_dump.vcd");
		$dumpvars(0);
		#100000;
		$finish;
	end
	initial begin 
		#1  
		$readmemh("main.hex", uut.openstriVe_soc_mem_Sys0_S0.mem); 
	end

	wire [15:0]i2c_data; always @ (i2c_data) if (i2c_data == 16'd69) begin $display("I2C test passed"); $finish; end

	wire spi_flash_hold; assign spi_flash_hold = 1'b1;
	GPIO_VIP GPIO_VIP_Sys0_S1(
	.GPIOOUT(PAD_GPIO_Sys0_S1)
	);
	i2c_slave_vip i2c_slave_vip_Sys0_SS0_S1(
	.clk(HCLK),
	.rst(~HRESETn),
	.scl(PAD_i2c_cl_Sys0_SS0_S1),
	.sda(PAD_i2c_da_Sys0_SS0_S1),
	.i2c_data(i2c_data)
	);
	M23LC512 M23LC512_Sys0_SS0_S2(
	.RESET(~HRESETn),
	.SO_SIO1(PAD_MSI_Sys0_SS0_S2),
	.SI_SIO0(PAD_MSO_Sys0_SS0_S2),
	.CS_N(PAD_SSn_Sys0_SS0_S2),
	.SCK(PAD_SCLK_Sys0_SS0_S2),
	.HOLD_N_SIO3(spi_flash_hold)
	);
	PWM_VIP PWM_VIP_Sys0_SS0_S3(
	.HRESETn(HRESETn),
	.pwm(PAD_pwm_Sys0_SS0_S3),
	.db_reg(db_reg_Sys0)
	);

endmodule