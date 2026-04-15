#include "Vrv_tracer_smoke_top.h"
#include "verilated.h"

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  auto* top = new Vrv_tracer_smoke_top;
  top->clk_i = 0;
  top->rst_ni = 0;

  for (int cyc = 0; cyc < 32 && !Verilated::gotFinish(); ++cyc) {
    if (cyc == 4) {
      top->rst_ni = 1;
    }
    top->clk_i = 0;
    top->eval();
    top->clk_i = 1;
    top->eval();
  }
  const bool ok = !Verilated::gotFinish();
  delete top;
  return ok ? 0 : 1;
}
