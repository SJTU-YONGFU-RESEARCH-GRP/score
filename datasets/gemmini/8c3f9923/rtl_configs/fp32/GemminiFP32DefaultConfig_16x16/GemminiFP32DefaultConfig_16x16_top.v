// Top-level module for GemminiFP32DefaultConfig_16x16 configuration
// Generated on Thu Aug 13 04:57:31 AM CST 2026
// Gemmini fp32 accelerator

module GemminiFP32DefaultConfig_16x16_top (
    input  clk,
    input  rst_n,
    output ready
);

    // Configuration parameters
    parameter CORE_TYPE = "fp32";
    
    // Simple ready signal for synthesis
    reg ready_reg;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            ready_reg <= 1'b0;
        else
            ready_reg <= 1'b1;
    end
    
    assign ready = ready_reg;

endmodule
