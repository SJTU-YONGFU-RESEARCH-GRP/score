// Top-level module for GemminiFP16DefaultConfig configuration
// Generated on Thu Aug 13 05:00:15 AM CST 2026
// Gemmini fp16 accelerator

module GemminiFP16DefaultConfig_top (
    input  clk,
    input  rst_n,
    output ready
);

    // Configuration parameters
    parameter CORE_TYPE = "fp16";
    
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
