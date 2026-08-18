
`timescale 1ns/1ns
module soc_core_m1_b1(
	input HCLK, 
	input HRESETn,
	input [7: 0] Input_DATA,
	input [0: 0] Input_irq,
	output Output_DATA,
	input wire [15: 0] GPIOIN_Sys0_S1,
	output wire [15: 0] GPIOOUT_Sys0_S1,
	output wire [15: 0] GPIOPU_Sys0_S1,
	output wire [15: 0] GPIOPD_Sys0_S1,
	output wire [15: 0] GPIOOEN_Sys0_S1,
		input wire [0: 0] scl_i_Sys0_SS0_S1,
		output wire [0: 0] scl_o_Sys0_SS0_S1,
		output wire [0: 0] scl_oen_o_Sys0_SS0_S1,
		input wire [0: 0] sda_i_Sys0_SS0_S1,
		output wire [0: 0] sda_o_Sys0_SS0_S1,
		output wire [0: 0] sda_oen_o_Sys0_SS0_S1,
		input wire [0: 0] MSI_Sys0_SS0_S2,
		output wire [0: 0] MSO_Sys0_SS0_S2,
		output wire [0: 0] SSn_Sys0_SS0_S2,
		output wire [0: 0] SCLK_Sys0_SS0_S2,
		output wire [0: 0] pwm_Sys0_SS0_S3
    );


	// wire HCLK_Sys0;
	// wire HRESETn_Sys0;

	wire [31: 0] HADDR_Sys0;
	wire [31: 0] HWDATA_Sys0;
	wire HWRITE_Sys0;
	wire [1: 0] HTRANS_Sys0;
	wire [2:0] HSIZE_Sys0;

	wire HREADY_Sys0;
	wire [31: 0] HRDATA_Sys0;

	wire IRQ_Sys0_SS0_S0;
	wire [31: 0] SRAMRDATA_Sys0_S0;
	wire [3: 0] SRAMWEN_Sys0_S0;
	wire [31: 0] SRAMWDATA_Sys0_S0;
	wire [0: 0] SRAMCS0_Sys0_S0;
	wire [0: 0] SRAMCS1_Sys0_S0;
	wire [0: 0] SRAMCS2_Sys0_S0;
	wire [0: 0] SRAMCS3_Sys0_S0;
	wire [14: 0] SRAMADDR_Sys0_S0;
	wire [31: 0] SRAMRDATA_Sys0_S3;
	wire [3: 0] SRAMWEN_Sys0_S3;
	wire [31: 0] SRAMWDATA_Sys0_S3;
	wire [0: 0] SRAMCS0_Sys0_S3;
	wire [0: 0] SRAMCS1_Sys0_S3;
	wire [0: 0] SRAMCS2_Sys0_S3;
	wire [0: 0] SRAMCS3_Sys0_S3;
	wire [14: 0] SRAMADDR_Sys0_S3;
	// AHB LITE Master2 Signals
	wire [31:0] M2_HADDR;
	wire [0:0] M2_HREADY;
	wire [0:0] M2_HWRITE;
	wire [1:0] M2_HTRANS;
	wire [2:0] M2_HSIZE;
	wire [31:0] M2_HWDATA;
	wire [31:0] M2_HRDATA;
wire [0: 0] M2_IRQ;

	wire [3:0] M2_HPROT;
	wire [2:0] M2_HBURST;
	wire M2_HBUSREQ;
	wire M2_HLOCK;
	wire M2_HGRANT;
	assign M2_HREADY = HREADY_Sys0; 
	assign M2_HRDATA = HRDATA_Sys0;

	assign HADDR_Sys0 = M2_HADDR; 
	assign HWDATA_Sys0 = M2_HWDATA; 
	assign HWRITE_Sys0 = M2_HWRITE; 
	assign HTRANS_Sys0 = M2_HTRANS; 
	assign HSIZE_Sys0 = M2_HSIZE;
	assign M2_HGRANT = 1'b1;
	assign M2_HBUSREQ = 1'b1;


	assign M2_IRQ = 1'b0;

  

	//AHBlite_SYS0 instantiation

	AHBlite_sys_0 ahb_sys_0_uut(
		// .HCLK(HCLK_Sys0),
		// .HRESETn(HRESETn_Sys0),
    
		.HCLK(HCLK),
		.HRESETn(HRESETn),
         
		.HADDR(HADDR_Sys0),
		.HWDATA(HWDATA_Sys0),
		.HWRITE(HWRITE_Sys0),
		.HTRANS(HTRANS_Sys0),
		.HSIZE(HSIZE_Sys0),
    
		.HREADY(HREADY_Sys0),
		.HRDATA(HRDATA_Sys0),
    
		.Input_DATA(Input_DATA),
		.Input_irq(Input_irq),
		.Output_DATA(Output_DATA),
		.SRAMRDATA_S0(SRAMRDATA_Sys0_S0),
		.SRAMWEN_S0(SRAMWEN_Sys0_S0),
		.SRAMWDATA_S0(SRAMWDATA_Sys0_S0),
		.SRAMCS0_S0(SRAMCS0_Sys0_S0),
		.SRAMCS1_S0(SRAMCS1_Sys0_S0),
		.SRAMCS2_S0(SRAMCS2_Sys0_S0),
		.SRAMCS3_S0(SRAMCS3_Sys0_S0),
		.SRAMADDR_S0(SRAMADDR_Sys0_S0),
		.GPIOIN_S1(GPIOIN_Sys0_S1),
		.GPIOOUT_S1(GPIOOUT_Sys0_S1),
		.GPIOPU_S1(GPIOPU_Sys0_S1),
		.GPIOPD_S1(GPIOPD_Sys0_S1),
		.GPIOOEN_S1(GPIOOEN_Sys0_S1),
		.SRAMRDATA_S3(SRAMRDATA_Sys0_S3),
		.SRAMWEN_S3(SRAMWEN_Sys0_S3),
		.SRAMWDATA_S3(SRAMWDATA_Sys0_S3),
		.SRAMCS0_S3(SRAMCS0_Sys0_S3),
		.SRAMCS1_S3(SRAMCS1_Sys0_S3),
		.SRAMCS2_S3(SRAMCS2_Sys0_S3),
		.SRAMCS3_S3(SRAMCS3_Sys0_S3),
		.SRAMADDR_S3(SRAMADDR_Sys0_S3),
		.IRQ_SS0_S0(IRQ_Sys0_SS0_S0),
		.scl_i_SS0_S1(scl_i_Sys0_SS0_S1),
		.scl_o_SS0_S1(scl_o_Sys0_SS0_S1),
		.scl_oen_o_SS0_S1(scl_oen_o_Sys0_SS0_S1),
		.sda_i_SS0_S1(sda_i_Sys0_SS0_S1),
		.sda_o_SS0_S1(sda_o_Sys0_SS0_S1),
		.sda_oen_o_SS0_S1(sda_oen_o_Sys0_SS0_S1),
		.MSI_SS0_S2(MSI_Sys0_SS0_S2),
		.MSO_SS0_S2(MSO_Sys0_SS0_S2),
		.SSn_SS0_S2(SSn_Sys0_SS0_S2),
		.SCLK_SS0_S2(SCLK_Sys0_SS0_S2),
		.pwm_SS0_S3(pwm_Sys0_SS0_S3));
        
        
	openstriVe_soc_mem openstriVe_soc_mem_Sys0_S0(
	.clk(HCLK),
	.rdata(SRAMRDATA_Sys0_S0),
	.wdata(SRAMWDATA_Sys0_S0),
	.addr(SRAMADDR_Sys0_S0),
	.ena(SRAMCS0_Sys0_S0),
	.wen(SRAMWEN_Sys0_S0)
	);
	openstriVe_soc_mem openstriVe_soc_mem_Sys0_S3(
	.clk(HCLK),
	.rdata(SRAMRDATA_Sys0_S3),
	.wdata(SRAMWDATA_Sys0_S3),
	.addr(SRAMADDR_Sys0_S3),
	.ena(SRAMCS0_Sys0_S3),
	.wen(SRAMWEN_Sys0_S3)
	);
	// Instantiation of NfiVe32
	NfiVe32 N5(
		.HCLK(HCLK),
		.HRESETn(HRESETn),
		.HADDR(M2_HADDR),
		.HREADY(M2_HREADY),
		.HWRITE(M2_HWRITE),
		.HTRANS(M2_HTRANS),
		.HSIZE(M2_HSIZE),
		.HWDATA(M2_HWDATA),
		.HRDATA(M2_HRDATA),

		//Interrupts
		.NMI(0),

		//Interrupts

		.IRQ(M2_IRQ),

		//Ports
		.IRQ_NUM(0),
		.SYSTICKCLK(0));
 
  endmodule
  