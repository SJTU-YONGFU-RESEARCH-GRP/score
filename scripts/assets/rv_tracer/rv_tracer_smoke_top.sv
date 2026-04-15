// SCORE Verilator smoke top for pulp-platform/rv_tracer.
// This wrapper is driven from C++ (sim_main.cpp) to avoid SV #delay usage,
// so it works with older Verilator releases as well.

`timescale 1ns/1ns

import te_pkg::*;

module rv_tracer_smoke_top (
    input logic clk_i,
    input logic rst_ni
);
    localparam int unsigned N = 1;
    localparam int unsigned APB_ADDR_WIDTH = 32;

    logic [N-1:0]                  valid_i;
    logic [N-1:0][ITYPE_LEN-1:0]   itype_i;
    logic [XLEN-1:0]               cause_i;
    logic [XLEN-1:0]               tval_i;
    logic [PRIV_LEN-1:0]           priv_i;
    logic [N-1:0][XLEN-1:0]        iaddr_i;
    logic [N-1:0][IRETIRE_LEN-1:0] iretire_i;
    logic [N-1:0]                  ilastsize_i;
    logic [TIME_LEN-1:0]           time_i;
    logic [XLEN-1:0]               tvec_i;
    logic [XLEN-1:0]               epc_i;
    logic                          encapsulator_ready_i;
    logic [APB_ADDR_WIDTH-1:0]     paddr_i;
    logic                          pwrite_i;
    logic                          psel_i;
    logic                          penable_i;
    logic [31:0]                   pwdata_i;

    logic [N-1:0]                  packet_valid_o;
    it_packet_type_e [N-1:0]       packet_type_o;
    logic [N-1:0][P_LEN-1:0]       packet_length_o;
    logic [N-1:0][PAYLOAD_LEN-1:0] packet_payload_o;
    logic                          stall_o;
    logic                          pready_o;
    logic [31:0]                   prdata_o;

    always_comb begin
        valid_i              = '0;
        itype_i              = '0;
        cause_i              = '0;
        tval_i               = '0;
        priv_i               = '0;
        iaddr_i              = '0;
        iretire_i            = '0;
        ilastsize_i          = '0;
        time_i               = '0;
        tvec_i               = '0;
        epc_i                = '0;
        encapsulator_ready_i = 1'b1;
        paddr_i              = '0;
        pwrite_i             = 1'b0;
        psel_i               = 1'b0;
        penable_i            = 1'b0;
        pwdata_i             = '0;
    end

    rv_tracer #(
        .N(N),
        .ONLY_BRANCHES(1)
    ) i_rv_tracer (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .valid_i(valid_i),
        .itype_i(itype_i),
        .cause_i(cause_i),
        .tval_i(tval_i),
        .priv_i(priv_i),
        .iaddr_i(iaddr_i),
        .iretire_i(iretire_i),
        .ilastsize_i(ilastsize_i),
        .time_i(time_i),
        .tvec_i(tvec_i),
        .epc_i(epc_i),
        .encapsulator_ready_i(encapsulator_ready_i),
        .paddr_i(paddr_i),
        .pwrite_i(pwrite_i),
        .psel_i(psel_i),
        .penable_i(penable_i),
        .pwdata_i(pwdata_i),
        .packet_valid_o(packet_valid_o),
        .packet_type_o(packet_type_o),
        .packet_length_o(packet_length_o),
        .packet_payload_o(packet_payload_o),
        .stall_o(stall_o),
        .pready_o(pready_o),
        .prdata_o(prdata_o)
    );

endmodule
