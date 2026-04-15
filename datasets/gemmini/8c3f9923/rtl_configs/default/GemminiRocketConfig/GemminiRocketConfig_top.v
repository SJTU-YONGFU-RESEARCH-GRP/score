// Top-level module for GemminiRocketConfig configuration
// Generated on Wed Apr 15 07:39:42 PM +08 2026
// Gemmini default accelerator

module GemminiRocketConfig_top (
    input  clk,
    input  rst_n,
    output ready
);

    // Configuration parameters
    parameter CORE_TYPE = "default";
    
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
