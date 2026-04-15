// Top-level module for pico_1x1 configuration
// Generated on Wed Apr 15 09:25:19 PM +08 2026
// OpenPiton pico core with 1x1 tiles

module pico_1x1_top (
    input  clk,
    input  rst_n,
    output ready
);

    // Configuration parameters
    parameter X_TILES = 1;
    parameter Y_TILES = 1;
    parameter TOTAL_TILES = X_TILES * Y_TILES;
    parameter CORE_TYPE = "pico";
    
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
