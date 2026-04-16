`timescale 1ns/1ps
module experimental-branch-predictor_csr-test_tb;
  reg clk = 1'b0;
  reg rst_n = 1'b0;
  always #5 clk = ~clk;
  initial begin
    #20 rst_n = 1'b1;
    #100 $finish;
  end
endmodule
