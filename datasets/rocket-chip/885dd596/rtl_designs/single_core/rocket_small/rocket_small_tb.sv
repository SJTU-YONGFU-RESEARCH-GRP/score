`timescale 1ns / 1ps

// SCORE placeholder testbench for rocket_small
// Rocket Chip TestHarness has many top-level ports; auto-instantiation was misleading.
// For real execution use: ./scripts/generate_rocket_chip.sh --riscv-isa-smoke
//   or upstream Mill emulator + riscv-tests (see rocket-chip build.sc).
module rocket_small_tb;

    initial begin
        $display("SCORE placeholder TB for rocket_small: no DUT instantiated.");
        #1;
        $finish;
    end

endmodule
