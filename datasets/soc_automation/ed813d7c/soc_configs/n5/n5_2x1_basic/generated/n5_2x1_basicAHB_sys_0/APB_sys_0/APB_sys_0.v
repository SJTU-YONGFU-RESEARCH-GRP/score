
`timescale 1ns/1ns
module apb_sys_0(
    // Global signals --------------------------------------------------------------
    input wire          HCLK,
    input wire          HRESETn,

    // AHB Slave inputs ------------------------------------------------------------
    input wire  [31:0]  HADDR,
    input wire  [1:0]   HTRANS,
    input wire          HWRITE,
    input wire  [31:0]  HWDATA,
    input wire          HSEL,
    input wire          HREADY,

    // AHB Slave outputs -----------------------------------------------------------
    output wire [31:0]  HRDATA,
    output wire         HREADYOUT,

	output IRQ_S0
    );
    
    // APB Master Signals
    wire PCLK;
    wire PRESETn;
    wire [31:0] PADDR;
    wire PWRITE;
    wire [31:0] PWDATA;
    wire PENABLE;
    
    // APB Slave Signals
    wire PREADY;
    wire [31:0] PRDATA ;
    wire 		PSLVERR;

    //ADDED PSEL Signal
    //wire PSEL = HSEL; 
    wire PSEL_next = HSEL;
    reg PSEL_next_next;
    reg PSEL;
    always @ (posedge HCLK, negedge HRESETn)
    begin
        if(!HRESETn)
        PSEL <= 1'b0;
        else begin
            PSEL_next_next <= PSEL_next;
            PSEL <= PSEL_next | PSEL_next_next;
        end
    end
    //Instantiating the bridge

    ahb_2_apb AHB2APB_BR (
        .HCLK(HCLK),
        .HRESETn(HRESETn),
        .HADDR(HADDR[31:0]),
        .HSEL(HSEL),
        .HREADY(HREADY),
        .HTRANS(HTRANS[1:0]),
        .HWDATA(HWDATA[31:0]),
        .HWRITE(HWRITE),
        .HRDATA(HRDATA),
        .HREADYOUT(HREADYOUT),
        .PCLK(PCLK),
        .PRESETn(PRESETn),
        .PADDR(PADDR[31:0]),
        .PWRITE(PWRITE),
        .PWDATA(PWDATA[31:0]),
        .PENABLE(PENABLE),
        .PREADY(PREADY),
        .PRDATA(PRDATA[31:0])
    );
        
        
    //Bus Signals
        
    //Slave #0
    wire PSEL_S0;
    wire [31:0] PRDATA_S0;
    wire PREADY_S0;
    wire PSLVERR_S0;
    
    //Unused Ports Signals
    wire PSEL_S1;
    wire PSEL_S2;
    wire PSEL_S3;
    wire PSEL_S4;
    wire PSEL_S5;
    wire PSEL_S6;
    wire PSEL_S7;
    wire PSEL_S8;
    wire PSEL_S9;
    wire PSEL_S10;
    wire PSEL_S11;
    wire PSEL_S12;
    wire PSEL_S13;
    wire PSEL_S14;
    wire PSEL_S15;

   wire [31: 0] TMR_S0;
                   wire [31: 0] PRE_S0;
                   wire [31: 0] TMRCMP_S0;
                   wire [0: 0] TMROV_S0;
                   wire [0: 0] TMROVCLR_S0;
                   wire [0: 0] TMREN_S0;
                
        //Digital module # 0
        TIMER32 S0 (
        .clk(PCLK),
            .rst(~PRESETn),
			.TMR(TMR_S0),
			.PRE(PRE_S0),
			.TMRCMP(TMRCMP_S0),
			.TMROV(TMROV_S0),
			.TMROVCLR(TMROVCLR_S0),
			.TMREN(TMREN_S0)
        
        );
        
    //APB Slave # 0
    APB_TIMER32 S_0 (
        .PCLK(PCLK),
        //.PCLKG(),
        .PRESETn(PRESETn),
        .PSEL(PSEL_S0),
        .PADDR(PADDR [19:2]),
        .PREADY(PREADY_S0),
        .PWRITE(PWRITE),
        .PENABLE(PENABLE),
        .PWDATA(PWDATA),

        
			.TMR(TMR_S0),

			.PRE(PRE_S0),

			.TMRCMP(TMRCMP_S0),

			.TMROV(TMROV_S0),

			.TMROVCLR(TMROVCLR_S0),

			.TMREN(TMREN_S0),

			.IRQ(IRQ_S0),
			.PRDATA(PRDATA_S0)
		);
            
        
    //APB Bus
    APB_BUS0 #(
        .PORT0_ENABLE   (1),
        .PORT1_ENABLE   (0),
        .PORT2_ENABLE   (0),
        .PORT3_ENABLE   (0),
        .PORT4_ENABLE   (0),
        .PORT5_ENABLE   (0),
        .PORT6_ENABLE   (0),
        .PORT7_ENABLE   (0),
        .PORT8_ENABLE   (0),
        .PORT9_ENABLE   (0),
        .PORT10_ENABLE   (0),
        .PORT11_ENABLE   (0),
        .PORT12_ENABLE   (0),
        .PORT13_ENABLE   (0),
        .PORT14_ENABLE   (0),
        .PORT15_ENABLE   (0)
    )
    apbBus(
        // Inputs
        .DEC_BITS   (PADDR[23:20]),
        .PSEL       (PSEL),

        .PSEL_S0         (PSEL_S0),
        .PREADY_S0       (PREADY_S0),
        .PRDATA_S0       (PRDATA_S0),
        // .PSLVERR0     (timer0_pslverr),
        .PSLVERR_S0      (1'b0),
        
        .PSEL_S1         (PSEL_S1),
        .PREADY_S1       (1'b1),
        .PRDATA_S1       (32'h00000000),
        .PSLVERR_S1      (1'b0),
        
        .PSEL_S2         (PSEL_S2),
        .PREADY_S2       (1'b1),
        .PRDATA_S2       (32'h00000000),
        .PSLVERR_S2      (1'b0),
        
        .PSEL_S3         (PSEL_S3),
        .PREADY_S3       (1'b1),
        .PRDATA_S3       (32'h00000000),
        .PSLVERR_S3      (1'b0),
        
        .PSEL_S4         (PSEL_S4),
        .PREADY_S4       (1'b1),
        .PRDATA_S4       (32'h00000000),
        .PSLVERR_S4      (1'b0),
        
        .PSEL_S5         (PSEL_S5),
        .PREADY_S5       (1'b1),
        .PRDATA_S5       (32'h00000000),
        .PSLVERR_S5      (1'b0),
        
        .PSEL_S6         (PSEL_S6),
        .PREADY_S6       (1'b1),
        .PRDATA_S6       (32'h00000000),
        .PSLVERR_S6      (1'b0),
        
        .PSEL_S7         (PSEL_S7),
        .PREADY_S7       (1'b1),
        .PRDATA_S7       (32'h00000000),
        .PSLVERR_S7      (1'b0),
        
        .PSEL_S8         (PSEL_S8),
        .PREADY_S8       (1'b1),
        .PRDATA_S8       (32'h00000000),
        .PSLVERR_S8      (1'b0),
        
        .PSEL_S9         (PSEL_S9),
        .PREADY_S9       (1'b1),
        .PRDATA_S9       (32'h00000000),
        .PSLVERR_S9      (1'b0),
        
        .PSEL_S10         (PSEL_S10),
        .PREADY_S10       (1'b1),
        .PRDATA_S10       (32'h00000000),
        .PSLVERR_S10      (1'b0),
        
        .PSEL_S11         (PSEL_S11),
        .PREADY_S11       (1'b1),
        .PRDATA_S11       (32'h00000000),
        .PSLVERR_S11      (1'b0),
        
        .PSEL_S12         (PSEL_S12),
        .PREADY_S12       (1'b1),
        .PRDATA_S12       (32'h00000000),
        .PSLVERR_S12      (1'b0),
        
        .PSEL_S13         (PSEL_S13),
        .PREADY_S13       (1'b1),
        .PRDATA_S13       (32'h00000000),
        .PSLVERR_S13      (1'b0),
        
        .PSEL_S14         (PSEL_S14),
        .PREADY_S14       (1'b1),
        .PRDATA_S14       (32'h00000000),
        .PSLVERR_S14      (1'b0),
        
        .PSEL_S15         (PSEL_S15),
        .PREADY_S15       (1'b1),
        .PRDATA_S15       (32'h00000000),
        .PSLVERR_S15      (1'b0),
           
        // Output
        .PREADY            (PREADY),
        .PRDATA            (PRDATA),
        .PSLVERR           (PSLVERR)
        );
       
endmodule
    