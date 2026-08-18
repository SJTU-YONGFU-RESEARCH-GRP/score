
`timescale 1ns/1ns
module soc_m1_b1(
	input HCLK, 
	input HRESETn,
	input [7: 0] Input_DATA,
	input [0: 0] Input_irq,
	output Output_DATA,
	inout[15:0] PAD_GPIO_Sys0_S1);


	wire [15:0] GPIOIN_Sys0_S1;
	wire [15:0] GPIOOUT_Sys0_S1;
	wire [15:0] GPIOOEN_Sys0_S1;
	wire [15:0] GPIOPU_Sys0_S1;
	wire [15:0] GPIOPD_Sys0_S1;
	wire [15:0] PAD_GPIO_Sys0_S1;
	dio dio_Sys0_S1_IO0_0( .in(GPIOIN_Sys0_S1[0]), .out(GPIOOUT_Sys0_S1[0]), .en(GPIOOEN_Sys0_S1[0]), .PU(GPIOPU_Sys0_S1[0]), .PD(GPIOPD_Sys0_S1[0]), .PAD(PAD_GPIO_Sys0_S1[0]));
	dio dio_Sys0_S1_IO0_1( .in(GPIOIN_Sys0_S1[1]), .out(GPIOOUT_Sys0_S1[1]), .en(GPIOOEN_Sys0_S1[1]), .PU(GPIOPU_Sys0_S1[1]), .PD(GPIOPD_Sys0_S1[1]), .PAD(PAD_GPIO_Sys0_S1[1]));
	dio dio_Sys0_S1_IO0_2( .in(GPIOIN_Sys0_S1[2]), .out(GPIOOUT_Sys0_S1[2]), .en(GPIOOEN_Sys0_S1[2]), .PU(GPIOPU_Sys0_S1[2]), .PD(GPIOPD_Sys0_S1[2]), .PAD(PAD_GPIO_Sys0_S1[2]));
	dio dio_Sys0_S1_IO0_3( .in(GPIOIN_Sys0_S1[3]), .out(GPIOOUT_Sys0_S1[3]), .en(GPIOOEN_Sys0_S1[3]), .PU(GPIOPU_Sys0_S1[3]), .PD(GPIOPD_Sys0_S1[3]), .PAD(PAD_GPIO_Sys0_S1[3]));
	dio dio_Sys0_S1_IO0_4( .in(GPIOIN_Sys0_S1[4]), .out(GPIOOUT_Sys0_S1[4]), .en(GPIOOEN_Sys0_S1[4]), .PU(GPIOPU_Sys0_S1[4]), .PD(GPIOPD_Sys0_S1[4]), .PAD(PAD_GPIO_Sys0_S1[4]));
	dio dio_Sys0_S1_IO0_5( .in(GPIOIN_Sys0_S1[5]), .out(GPIOOUT_Sys0_S1[5]), .en(GPIOOEN_Sys0_S1[5]), .PU(GPIOPU_Sys0_S1[5]), .PD(GPIOPD_Sys0_S1[5]), .PAD(PAD_GPIO_Sys0_S1[5]));
	dio dio_Sys0_S1_IO0_6( .in(GPIOIN_Sys0_S1[6]), .out(GPIOOUT_Sys0_S1[6]), .en(GPIOOEN_Sys0_S1[6]), .PU(GPIOPU_Sys0_S1[6]), .PD(GPIOPD_Sys0_S1[6]), .PAD(PAD_GPIO_Sys0_S1[6]));
	dio dio_Sys0_S1_IO0_7( .in(GPIOIN_Sys0_S1[7]), .out(GPIOOUT_Sys0_S1[7]), .en(GPIOOEN_Sys0_S1[7]), .PU(GPIOPU_Sys0_S1[7]), .PD(GPIOPD_Sys0_S1[7]), .PAD(PAD_GPIO_Sys0_S1[7]));
	dio dio_Sys0_S1_IO0_8( .in(GPIOIN_Sys0_S1[8]), .out(GPIOOUT_Sys0_S1[8]), .en(GPIOOEN_Sys0_S1[8]), .PU(GPIOPU_Sys0_S1[8]), .PD(GPIOPD_Sys0_S1[8]), .PAD(PAD_GPIO_Sys0_S1[8]));
	dio dio_Sys0_S1_IO0_9( .in(GPIOIN_Sys0_S1[9]), .out(GPIOOUT_Sys0_S1[9]), .en(GPIOOEN_Sys0_S1[9]), .PU(GPIOPU_Sys0_S1[9]), .PD(GPIOPD_Sys0_S1[9]), .PAD(PAD_GPIO_Sys0_S1[9]));
	dio dio_Sys0_S1_IO0_10( .in(GPIOIN_Sys0_S1[10]), .out(GPIOOUT_Sys0_S1[10]), .en(GPIOOEN_Sys0_S1[10]), .PU(GPIOPU_Sys0_S1[10]), .PD(GPIOPD_Sys0_S1[10]), .PAD(PAD_GPIO_Sys0_S1[10]));
	dio dio_Sys0_S1_IO0_11( .in(GPIOIN_Sys0_S1[11]), .out(GPIOOUT_Sys0_S1[11]), .en(GPIOOEN_Sys0_S1[11]), .PU(GPIOPU_Sys0_S1[11]), .PD(GPIOPD_Sys0_S1[11]), .PAD(PAD_GPIO_Sys0_S1[11]));
	dio dio_Sys0_S1_IO0_12( .in(GPIOIN_Sys0_S1[12]), .out(GPIOOUT_Sys0_S1[12]), .en(GPIOOEN_Sys0_S1[12]), .PU(GPIOPU_Sys0_S1[12]), .PD(GPIOPD_Sys0_S1[12]), .PAD(PAD_GPIO_Sys0_S1[12]));
	dio dio_Sys0_S1_IO0_13( .in(GPIOIN_Sys0_S1[13]), .out(GPIOOUT_Sys0_S1[13]), .en(GPIOOEN_Sys0_S1[13]), .PU(GPIOPU_Sys0_S1[13]), .PD(GPIOPD_Sys0_S1[13]), .PAD(PAD_GPIO_Sys0_S1[13]));
	dio dio_Sys0_S1_IO0_14( .in(GPIOIN_Sys0_S1[14]), .out(GPIOOUT_Sys0_S1[14]), .en(GPIOOEN_Sys0_S1[14]), .PU(GPIOPU_Sys0_S1[14]), .PD(GPIOPD_Sys0_S1[14]), .PAD(PAD_GPIO_Sys0_S1[14]));
	dio dio_Sys0_S1_IO0_15( .in(GPIOIN_Sys0_S1[15]), .out(GPIOOUT_Sys0_S1[15]), .en(GPIOOEN_Sys0_S1[15]), .PU(GPIOPU_Sys0_S1[15]), .PD(GPIOPD_Sys0_S1[15]), .PAD(PAD_GPIO_Sys0_S1[15]));

//SoC Module Instantiation

soc_core_m1_b1 uut(
	.HCLK(HCLK), 
	.HRESETn(HRESETn),
	.Input_DATA(Input_DATA),
	.Input_irq(Input_irq),
	.Output_DATA(Output_DATA),
	.GPIOIN_Sys0_S1(GPIOIN_Sys0_S1),
	.GPIOOUT_Sys0_S1(GPIOOUT_Sys0_S1),
	.GPIOPU_Sys0_S1(GPIOPU_Sys0_S1),
	.GPIOPD_Sys0_S1(GPIOPD_Sys0_S1),
	.GPIOOEN_Sys0_S1(GPIOOEN_Sys0_S1));




endmodule