// Top-level module for xbar_Ariane_2x2 configuration
// Generated on Wed Apr 15 09:25:30 PM +08 2026
// OpenPiton network_variants core with 2x2 tiles

module xbar_Ariane_2x2_top (
    input  clk,
    input  rst_n,
    output ready
);

    // Configuration parameters
    parameter X_TILES = 2;
    parameter Y_TILES = 2;
    parameter TOTAL_TILES = X_TILES * Y_TILES;
    parameter CORE_TYPE = "network_variants";
    
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
