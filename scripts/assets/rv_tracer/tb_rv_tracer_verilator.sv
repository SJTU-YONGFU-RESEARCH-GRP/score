// SCORE Verilator wrapper for pulp-platform/rv_tracer.
// Instantiates upstream tb_rv_tracer and ends the simulation after 200ns,
// matching the upstream Questa "run 200" behavior.

`timescale 1ns/1ns

module tb_rv_tracer_verilator;
  tb_rv_tracer u_tb_rv_tracer();

  initial begin
    #200;
    $display("PASS rv_tracer Verilator smoke");
    $finish;
  end
endmodule
