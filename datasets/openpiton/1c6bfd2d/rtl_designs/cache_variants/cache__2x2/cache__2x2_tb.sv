// Auto-generated smoke testbench for cache__2x2
`timescale 1ns/1ps
module cache__2x2_tb;
    reg clk = 1'b0;
    reg rst_n = 1'b0;
    wire ready;

    always #5 clk = ~clk;

    cache__2x2_top dut (
        .clk(clk),
        .rst_n(rst_n),
        .ready(ready)
    );

    initial begin
        #20 rst_n = 1'b1;
        #100 $finish;
    end
endmodule
