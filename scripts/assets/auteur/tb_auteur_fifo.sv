// SCORE harness: minimal clocked testbench for pulp-platform/auteur hw/auteur_fifo.sv
// Invoked by scripts/generate_auteur.sh (Verilator --binary --timing, top tb_auteur_fifo).

`timescale 1ns / 1ps

module tb_auteur_fifo;
  localparam int unsigned DEPTH = 4;

  logic clk;
  logic rst_n;
  logic flush;
  logic push;
  logic pop;
  logic [7:0] data_i;
  logic [7:0] data_o;

  initial clk = 1'b0;
  always #5 clk = ~clk;

  auteur_fifo #(
      .DEPTH(DEPTH),
      .dtype(logic [7:0])
  ) dut (
      .clk_i  (clk),
      .rst_ni (rst_n),
      .flush_i(flush),
      .data_i (data_i),
      .push_i (push),
      .data_o (data_o),
      .pop_i  (pop)
  );

  task automatic wait_clk(input int n);
    repeat (n) @(posedge clk);
  endtask

  initial begin
    flush  = 1'b0;
    push   = 1'b0;
    pop    = 1'b0;
    data_i = 8'h00;
    rst_n  = 1'b0;
    wait_clk(4);
    rst_n = 1'b1;
    wait_clk(2);

    @(negedge clk);
    data_i = 8'hAA;
    push   = 1'b1;
    @(posedge clk);
    @(negedge clk);
    push   = 1'b0;
    data_i = 8'h55;
    push   = 1'b1;
    @(posedge clk);
    @(negedge clk);
    push = 1'b0;

    wait_clk(2);

    @(negedge clk);
    pop = 1'b1;
    @(posedge clk);
    if (data_o !== 8'hAA) begin
      $display("FAIL: first pop expected 8'hAA got %h", data_o);
      $fatal(1);
    end
    @(posedge clk);
    if (data_o !== 8'h55) begin
      $display("FAIL: second pop expected 8'h55 got %h", data_o);
      $fatal(1);
    end
    @(negedge clk);
    pop = 1'b0;

    $display("PASS auteur_fifo TB");
    $finish(0);
  end
endmodule
