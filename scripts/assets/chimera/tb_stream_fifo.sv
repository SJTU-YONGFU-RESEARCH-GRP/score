// SCORE harness for pulp-platform/chimera verification:
// Drives common_cells `stream_fifo` (from the bender flist slice) under Verilator.
//
// Consumed by scripts/generate_chimera.sh (Verilator --binary, top tb_stream_fifo).
// Must print: "PASS stream_fifo TB"

`timescale 1ns / 1ps

module tb_stream_fifo;
    localparam int unsigned DATA_WIDTH = 32;
    localparam int unsigned DEPTH = 4;
    localparam bit FALL_THROUGH = 1'b0;

    logic clk_i;
    logic rst_ni;
    logic flush_i;
    logic testmode_i;
    logic [$clog2(DEPTH)-1:0] usage_o;

    logic [DATA_WIDTH-1:0] data_i;
    logic valid_i;
    logic ready_o;

    logic [DATA_WIDTH-1:0] data_o;
    logic valid_o;
    logic ready_i;

    stream_fifo #(
        .FALL_THROUGH(FALL_THROUGH),
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH),
        .T(logic [DATA_WIDTH-1:0])
    ) dut (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .flush_i(flush_i),
        .testmode_i(testmode_i),
        .usage_o(usage_o),
        .data_i(data_i),
        .valid_i(valid_i),
        .ready_o(ready_o),
        .data_o(data_o),
        .valid_o(valid_o),
        .ready_i(ready_i)
    );

    initial clk_i = 1'b0;
    always #5 clk_i = ~clk_i;

    task automatic push_word(input logic [DATA_WIDTH-1:0] v);
        begin
            @(posedge clk_i);
            data_i  = v;
            valid_i = 1'b1;
            while (!ready_o) @(posedge clk_i);
            @(posedge clk_i);
            valid_i = 1'b0;
            data_i  = '0;
        end
    endtask

    task automatic pop_expect(input logic [DATA_WIDTH-1:0] v);
        begin
            while (!valid_o) @(posedge clk_i);
            if (data_o !== v) begin
                $display("FAIL stream_fifo TB: expected %h got %h", v, data_o);
                $fatal(1, "tb_stream_fifo");
            end
            ready_i = 1'b1;
            @(posedge clk_i);
            ready_i = 1'b0;
        end
    endtask

    initial begin
        rst_ni     = 1'b0;
        flush_i    = 1'b0;
        testmode_i = 1'b1;
        data_i     = '0;
        valid_i    = 1'b0;
        ready_i    = 1'b0;

        repeat (4) @(posedge clk_i);
        rst_ni = 1'b1;
        @(posedge clk_i);

        push_word(32'h0000_0001);
        push_word(32'h0000_0002);
        push_word(32'h0000_0003);

        pop_expect(32'h0000_0001);
        pop_expect(32'h0000_0002);
        pop_expect(32'h0000_0003);

        flush_i = 1'b1;
        @(posedge clk_i);
        flush_i = 1'b0;
        @(posedge clk_i);

        $display("PASS stream_fifo TB");
        $finish;
    end
endmodule

