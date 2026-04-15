// SCORE harness for pulp-platform/auteur: clocked smoke test of hw/auteur_fifo.sv.
// Consumed by scripts/generate_auteur.sh (Verilator --binary, top tb_auteur_fifo).

`timescale 1ns / 1ps

module tb_auteur_fifo;
    localparam int unsigned DEPTH = 8;

    logic        clk_i;
    logic        rst_ni;
    logic        flush_i;
    logic [7:0]  data_i;
    logic        push_i;
    logic [7:0]  data_o;
    logic        pop_i;

    auteur_fifo #(
        .DEPTH(DEPTH),
        .dtype(logic [7:0])
    ) dut (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .flush_i(flush_i),
        .data_i(data_i),
        .push_i(push_i),
        .data_o(data_o),
        .pop_i(pop_i)
    );

    initial clk_i = 1'b0;
    always #5 clk_i = ~clk_i;

    task automatic pulse_push(input logic [7:0] v);
        begin
            @(posedge clk_i);
            data_i = v;
            push_i = 1'b1;
            @(posedge clk_i);
            push_i = 1'b0;
            data_i = '0;
        end
    endtask

    initial begin
        rst_ni = 1'b0;
        flush_i = 1'b0;
        push_i = 1'b0;
        pop_i = 1'b0;
        data_i = '0;

        repeat (4) @(posedge clk_i);
        rst_ni = 1'b1;
        @(posedge clk_i);

        pulse_push(8'h01);
        pulse_push(8'h02);
        pulse_push(8'h03);
        @(posedge clk_i);

        if (data_o !== 8'h01) begin
            $display("FAIL auteur_fifo TB: expected first head 8'h01, got %h", data_o);
            $fatal(1, "tb_auteur_fifo");
        end

        pop_i = 1'b1;
        @(posedge clk_i);
        pop_i = 1'b0;
        @(posedge clk_i);
        if (data_o !== 8'h02) begin
            $display("FAIL auteur_fifo TB: expected 8'h02 after first pop, got %h", data_o);
            $fatal(1, "tb_auteur_fifo");
        end

        pop_i = 1'b1;
        @(posedge clk_i);
        pop_i = 1'b0;
        @(posedge clk_i);
        if (data_o !== 8'h03) begin
            $display("FAIL auteur_fifo TB: expected 8'h03 after second pop, got %h", data_o);
            $fatal(1, "tb_auteur_fifo");
        end

        pop_i = 1'b1;
        @(posedge clk_i);
        pop_i = 1'b0;
        @(posedge clk_i);

        flush_i = 1'b1;
        @(posedge clk_i);
        flush_i = 1'b0;
        @(posedge clk_i);

        $display("PASS auteur_fifo TB");
        $finish;
    end
endmodule
