`timescale 1ns/1ps
module rv_tracer_smoke_tb;
    reg clk_i = 1'b0;
    reg rst_ni = 1'b0;

    always #5 clk_i = ~clk_i;

    initial begin
        #20 rst_ni = 1'b1;
        #100 $finish;
    end
endmodule
