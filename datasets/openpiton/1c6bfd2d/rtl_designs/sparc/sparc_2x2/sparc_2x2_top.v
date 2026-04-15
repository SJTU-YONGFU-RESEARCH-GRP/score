// Top-level module for sparc_2x2 configuration
// Generated on Wed Apr 15 09:25:13 PM +08 2026
// OpenPiton sparc core with 2x2 tiles

module sparc_2x2_top (
    input  clk,
    input  rst_n,
    output ready
);

    // Configuration parameters
    parameter X_TILES = 2;
    parameter Y_TILES = 2;
    parameter TOTAL_TILES = X_TILES * Y_TILES;
    parameter CORE_TYPE = "sparc";
    
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
