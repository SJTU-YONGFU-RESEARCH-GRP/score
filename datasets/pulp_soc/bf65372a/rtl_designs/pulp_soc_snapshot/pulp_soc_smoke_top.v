module pulp_soc_smoke_top (
    input wire clk,
    input wire rst_n,
    output wire ready
);
    assign ready = clk & rst_n;
endmodule
