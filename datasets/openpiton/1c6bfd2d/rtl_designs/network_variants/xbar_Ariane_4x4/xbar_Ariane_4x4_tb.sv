// Auto-generated smoke testbench for xbar_Ariane_4x4
`timescale 1ns/1ps
module xbar_Ariane_4x4_tb;
    reg clk = 1'b0;
    reg rst_n = 1'b0;
    wire ready;

    always #5 clk = ~clk;

    xbar_Ariane_4x4_top dut (
        .clk(clk),
        .rst_n(rst_n),
        .ready(ready)
    );

    initial begin
        #20 rst_n = 1'b1;
        #100 $finish;
    end
endmodule
