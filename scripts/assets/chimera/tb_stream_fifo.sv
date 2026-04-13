// SCORE harness: minimal stream handshake TB for common_cells stream_fifo (Chimera workspace).
// Built with bender flist-plus -p common_cells; top tb_stream_fifo.

`timescale 1ns / 1ps

module tb_stream_fifo;
  logic clk;
  logic rst_n;
  logic flush;
  logic testmode_i;
  logic [1:0] usage_o;
  logic [31:0] data_i;
  logic [31:0] data_o;
  logic valid_i;
  logic ready_o;
  logic valid_o;
  logic ready_i;

  initial clk = 1'b0;
  always #5 clk = ~clk;

  stream_fifo #(
      .FALL_THROUGH(1'b0),
      .DATA_WIDTH   (32),
      .DEPTH        (4)
  ) dut (
      .clk_i     (clk),
      .rst_ni    (rst_n),
      .flush_i   (flush),
      .testmode_i(testmode_i),
      .usage_o   (usage_o),
      .data_i    (data_i),
      .valid_i   (valid_i),
      .ready_o   (ready_o),
      .data_o    (data_o),
      .valid_o   (valid_o),
      .ready_i   (ready_i)
  );

  task automatic wait_clk(input int n);
    repeat (n) @(posedge clk);
  endtask

  initial begin
    flush       = 1'b0;
    testmode_i  = 1'b1;
    valid_i     = 1'b0;
    ready_i     = 1'b0;
    data_i      = 32'h0;
    rst_n       = 1'b0;
    wait_clk(4);
    rst_n = 1'b1;
    wait_clk(2);

    @(negedge clk);
    data_i  = 32'h0000_00AA;
    valid_i = 1'b1;
    while (!(valid_i && ready_o)) @(posedge clk);
    @(posedge clk);
    @(negedge clk);
    valid_i = 1'b0;

    @(negedge clk);
    data_i  = 32'h0000_0055;
    valid_i = 1'b1;
    while (!(valid_i && ready_o)) @(posedge clk);
    @(posedge clk);
    @(negedge clk);
    valid_i = 1'b0;

    wait_clk(2);

    while (!valid_o) @(posedge clk);
    @(negedge clk);
    ready_i = 1'b1;
    @(posedge clk);
    if (data_o !== 32'h0000_00AA) begin
      $display("FAIL: expected AA got %h", data_o);
      $fatal(1);
    end
    @(negedge clk);
    ready_i = 1'b0;

    wait_clk(1);
    while (!valid_o) @(posedge clk);
    @(negedge clk);
    ready_i = 1'b1;
    @(posedge clk);
    if (data_o !== 32'h0000_0055) begin
      $display("FAIL: expected 55 got %h", data_o);
      $fatal(1);
    end
    @(negedge clk);
    ready_i = 1'b0;

    $display("PASS stream_fifo TB");
    $finish(0);
  end
endmodule
