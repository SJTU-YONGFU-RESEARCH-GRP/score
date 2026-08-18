
`timescale 1ns/1ns
module AHBlite_sys_0(
		input HCLK,
		input HRESETn,
     
		input [31: 0] HADDR,
		input [31: 0] HWDATA,
		input HWRITE,
		input [1: 0] HTRANS,
		input [2:0] HSIZE,

		output HREADY,
		output [31: 0] HRDATA,

		input [7: 0] Input_DATA,
		input [0: 0] Input_irq,
		output Output_DATA,
		input wire [31: 0] SRAMRDATA_S0,
		output wire [3: 0] SRAMWEN_S0,
		output wire [31: 0] SRAMWDATA_S0,
		output wire [0: 0] SRAMCS0_S0,
		output wire [0: 0] SRAMCS1_S0,
		output wire [0: 0] SRAMCS2_S0,
		output wire [0: 0] SRAMCS3_S0,
		output wire [14: 0] SRAMADDR_S0,
		input wire [15: 0] GPIOIN_S1,
		output wire [15: 0] GPIOOUT_S1,
		output wire [15: 0] GPIOPU_S1,
		output wire [15: 0] GPIOPD_S1,
		output wire [15: 0] GPIOOEN_S1,
		input wire [3: 0] fdi_S3,
		output wire [3: 0] fdo_S3,
		output wire [3: 0] fdoe_S3,
		output wire [0: 0] fsclk_S3,
		output wire [0: 0] fcen_S3,
		output wire [3:0] db_reg,
		output IRQ_SS0_S0,
		input wire [0: 0] scl_i_SS0_S1,
		output wire [0: 0] scl_o_SS0_S1,
		output wire [0: 0] scl_oen_o_SS0_S1,
		input wire [0: 0] sda_i_SS0_S1,
		output wire [0: 0] sda_o_SS0_S1,
		output wire [0: 0] sda_oen_o_SS0_S1,
		input wire [0: 0] MSI_SS0_S2,
		output wire [0: 0] MSO_SS0_S2,
		output wire [0: 0] SSn_SS0_S2,
		output wire [0: 0] SCLK_SS0_S2,
		output wire [0: 0] pwm_SS0_S3
	);
        
        //Inputs
        wire HSEL_S0, HSEL_S1, HSEL_S2, HSEL_S3, HSEL_S4, HSEL_SS0;
        //wire [31: 0] HADDR;
        //wire HWRITE;
        //wire [1: 0] HTRANS;
        //wire [1: 0] HSIZE;
        //wire [31: 0] HWDATA;

        //Outputs
        wire    [31:0]   HRDATA_S0, HRDATA_S1, HRDATA_S2, HRDATA_S3, HRDATA_S4, HRDATA_SS0, HRDATA;
        wire             HREADY_S0, HREADY_S1, HREADY_S2, HREADY_S3, HREADY_S4, HREADY_SS0, HREADY;
        wire  [1:0]   HRESP;
        wire          IRQ;
        
		wire [15: 0] WGPIODIN_S1;

		wire [15: 0] WGPIODOUT_S1;

		wire [15: 0] WGPIOPU_S1;

		wire [15: 0] WGPIOPD_S1;

		wire [15: 0] WGPIODIR_S1;

        //Digital module # 0
        AHBSRAM S0 ( 
            .HCLK(HCLK),
                .HRESETn(HRESETn),
			.HSEL(HSEL_S0),
			.HADDR(HADDR),
			.HREADY(HREADY),
			.HWRITE(HWRITE),
			.HTRANS(HTRANS),
			.HSIZE(HSIZE),
			.HWDATA(HWDATA),
			.HRDATA(HRDATA_S0),
			.HREADYOUT(HREADY_S0),
			.SRAMRDATA(SRAMRDATA_S0),
			.SRAMWEN(SRAMWEN_S0),
			.SRAMWDATA(SRAMWDATA_S0),
			.SRAMCS0(SRAMCS0_S0),
			.SRAMCS1(SRAMCS1_S0),
			.SRAMCS2(SRAMCS2_S0),
			.SRAMCS3(SRAMCS3_S0),
			.SRAMADDR(SRAMADDR_S0)
            );
            
        //Digital module # 1
        GPIO S1 ( 
			.WGPIODIN(WGPIODIN_S1),
			.WGPIODOUT(WGPIODOUT_S1),
			.WGPIOPU(WGPIOPU_S1),
			.WGPIOPD(WGPIOPD_S1),
			.WGPIODIR(WGPIODIR_S1),
			.GPIOIN(GPIOIN_S1),
			.GPIOOUT(GPIOOUT_S1),
			.GPIOPU(GPIOPU_S1),
			.GPIOPD(GPIOPD_S1),
			.GPIOOEN(GPIOOEN_S1)
            );
            
            //AHB Slave # 1
            AHBlite_GPIO S_1 (
                .HCLK(HCLK),
                .HRESETn(HRESETn),
                .HSEL(HSEL_S1),
                .HADDR(HADDR[23:2]),
                .HREADY(HREADY),
                .HWRITE(HWRITE),
                .HTRANS(HTRANS),
                .HSIZE(HSIZE),
                .HWDATA(HWDATA),
    
                
			.WGPIODIN(WGPIODIN_S1),
			.WGPIODOUT(WGPIODOUT_S1),
			.WGPIOPU(WGPIOPU_S1),
			.WGPIOPD(WGPIOPD_S1),
			.WGPIODIR(WGPIODIR_S1),
                .HRDATA(HRDATA_S1),
                .HREADYOUT(HREADY_S1),
                .HRESP(HRESP)
            );
                
        //Digital module # 2
        AHB2MEM S2 ( 
            .HCLK(HCLK),
                .HRESETn(HRESETn),
			.HSEL(HSEL_S2),
			.HADDR(HADDR),
			.HREADY(HREADY),
			.HWRITE(HWRITE),
			.HTRANS(HTRANS),
			.HSIZE(HSIZE),
			.HWDATA(HWDATA),
			.HRDATA(HRDATA_S2),
			.HREADYOUT(HREADY_S2)
            );
            
        //Digital module # 3
        QSPIXIP S3 ( 
            .HCLK(HCLK),
                .HRESETn(HRESETn),
			.HSEL(HSEL_S3),
			.HADDR(HADDR),
			.HREADY(HREADY),
			.HWRITE(HWRITE),
			.HTRANS(HTRANS),
			.HSIZE(HSIZE),
			.HRDATA(HRDATA_S3),
			.HREADYOUT(HREADY_S3),
			.fdi(fdi_S3),
			.fdo(fdo_S3),
			.fdoe(fdoe_S3),
			.fsclk(fsclk_S3),
			.fcen(fcen_S3)
            );
            
            //AHB Slave # 4
            AHBlite_db_reg S_4 (
                .HCLK(HCLK),
                .HRESETn(HRESETn),
                .HSEL(HSEL_S4),
                .HADDR(HADDR[23:2]),
                .HREADY(HREADY),
                .HWRITE(HWRITE),
                .HTRANS(HTRANS),
                .HSIZE(HSIZE),
                .HWDATA(HWDATA),
                .db_reg(db_reg),

                .HRDATA(HRDATA_S4),
                .HREADYOUT(HREADY_S4),
                .HRESP(HRESP));
                
        
        //AHB Bus
        AHBlite_BUS0 AHB(
            .HCLK(HCLK),
            .HRESETn(HRESETn),
          
            // Master Interface
            .HADDR(HADDR),
            .HWDATA(HWDATA), 
            .HREADY(HREADY),
            .HRDATA(HRDATA),
            
            // Slave # 0
            .HSEL_S0(HSEL_S0),
            .HREADY_S0(HREADY_S0),
            .HRDATA_S0(HRDATA_S0),
            
            // Slave # 1
            .HSEL_S1(HSEL_S1),
            .HREADY_S1(HREADY_S1),
            .HRDATA_S1(HRDATA_S1),
            
            // Slave # 2
            .HSEL_S2(HSEL_S2),
            .HREADY_S2(HREADY_S2),
            .HRDATA_S2(HRDATA_S2),
            
            // Slave # 3
            .HSEL_S3(HSEL_S3),
            .HREADY_S3(HREADY_S3),
            .HRDATA_S3(HRDATA_S3),
            
            // Slave # 4
            .HSEL_S4(HSEL_S4),
            .HREADY_S4(HREADY_S4),
            .HRDATA_S4(HRDATA_S4),
            
            // Subsystem # 0
            .HSEL_SS0(HSEL_SS0),
            .HREADY_SS0(HREADY_SS0),
            .HRDATA_SS0(HRDATA_SS0)
        );
    
    //SubSystem Instantiation #0 
    apb_sys_0 apb_sys_inst_0(
        // Global signals --------------------------------------------------------------
        .HCLK(HCLK),
        .HRESETn(HRESETn),
    
        // AHB Slave inputs ------------------------------------------------------------
        .HADDR(HADDR),
        .HTRANS(HTRANS),
        .HWRITE(HWRITE),
        .HWDATA(HWDATA),
        .HSEL(HSEL_SS0),
        .HREADY(HREADY),
    
        // AHB Slave outputs -----------------------------------------------------------
        .HRDATA(HRDATA_SS0),
        .HREADYOUT(HREADY_SS0),
		.IRQ_S0(IRQ_SS0_S0),
		.scl_i_S1(scl_i_SS0_S1),
		.scl_o_S1(scl_o_SS0_S1),
		.scl_oen_o_S1(scl_oen_o_SS0_S1),
		.sda_i_S1(sda_i_SS0_S1),
		.sda_o_S1(sda_o_SS0_S1),
		.sda_oen_o_S1(sda_oen_o_SS0_S1),
		.MSI_S2(MSI_SS0_S2),
		.MSO_S2(MSO_SS0_S2),
		.SSn_S2(SSn_SS0_S2),
		.SCLK_S2(SCLK_SS0_S2),
		.pwm_S3(pwm_SS0_S3)
    );
    
    always @(posedge HCLK)
	if(HTRANS[1] & HREADY)
        $display("Mem request (%d) A:%X", HWRITE, HADDR);
        
    endmodule
        