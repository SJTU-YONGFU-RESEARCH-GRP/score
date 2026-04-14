# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vlane_e.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vlane_e \
	Vlane_e__Dpi_Export__0 \
	Vlane_e___024root__DepSet_h59ee1251__0 \
	Vlane_e___024root__DepSet_h59ee1251__1 \
	Vlane_e___024root__DepSet_h59ee1251__2 \
	Vlane_e___024root__DepSet_h59ee1251__3 \
	Vlane_e___024root__DepSet_h59ee1251__4 \
	Vlane_e___024root__DepSet_h59ee1251__5 \
	Vlane_e___024root__DepSet_h59ee1251__6 \
	Vlane_e___024root__DepSet_h59ee1251__7 \
	Vlane_e___024root__DepSet_h59ee1251__8 \
	Vlane_e___024root__DepSet_h59ee1251__9 \
	Vlane_e___024root__DepSet_h59ee1251__10 \
	Vlane_e___024root__DepSet_h59ee1251__11 \
	Vlane_e___024root__DepSet_h59ee1251__12 \
	Vlane_e___024root__DepSet_h59ee1251__13 \
	Vlane_e___024root__DepSet_h59ee1251__14 \
	Vlane_e___024root__DepSet_h59ee1251__15 \
	Vlane_e___024root__DepSet_h59ee1251__16 \
	Vlane_e___024root__DepSet_h59ee1251__17 \
	Vlane_e___024root__DepSet_h59ee1251__18 \
	Vlane_e___024root__DepSet_h59ee1251__19 \
	Vlane_e___024root__DepSet_h59ee1251__20 \
	Vlane_e___024root__DepSet_h59ee1251__21 \
	Vlane_e___024root__DepSet_h59ee1251__22 \
	Vlane_e___024root__DepSet_h59ee1251__23 \
	Vlane_e___024root__DepSet_h59ee1251__24 \
	Vlane_e___024root__DepSet_h59ee1251__25 \
	Vlane_e___024root__DepSet_h59ee1251__26 \
	Vlane_e___024root__DepSet_h59ee1251__27 \
	Vlane_e___024root__DepSet_hf7ea71ac__0 \
	Vlane_e___024root__DepSet_hf7ea71ac__1 \
	Vlane_e___024root__DepSet_hf7ea71ac__2 \
	Vlane_e___024root__DepSet_hf7ea71ac__3 \
	Vlane_e___024root__DepSet_hf7ea71ac__4 \
	Vlane_e___024root__DepSet_hf7ea71ac__5 \
	Vlane_e___024root__DepSet_hf7ea71ac__6 \
	Vlane_e___024root__DepSet_hf7ea71ac__7 \
	Vlane_e___024root__DepSet_hf7ea71ac__8 \
	Vlane_e___024root__DepSet_hf7ea71ac__9 \
	Vlane_e___024root__DepSet_hf7ea71ac__10 \
	Vlane_e___024root__DepSet_hf7ea71ac__11 \
	Vlane_e___024root__DepSet_hf7ea71ac__12 \
	Vlane_e___024root__DepSet_hf7ea71ac__13 \
	Vlane_e___024root__DepSet_hf7ea71ac__14 \
	Vlane_e___024root__DepSet_hf7ea71ac__15 \
	Vlane_e___024root__DepSet_hf7ea71ac__16 \
	Vlane_e___024root__DepSet_hf7ea71ac__17 \
	Vlane_e___024root__DepSet_hf7ea71ac__18 \
	Vlane_e___024root__DepSet_hf7ea71ac__19 \
	Vlane_e___024root__DepSet_hf7ea71ac__20 \
	Vlane_e___024unit__DepSet_he3ee6cc9__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vlane_e__ConstPool_0 \
	Vlane_e___024root__Slow \
	Vlane_e___024root__DepSet_h59ee1251__0__Slow \
	Vlane_e___024root__DepSet_h59ee1251__1__Slow \
	Vlane_e___024root__DepSet_h59ee1251__2__Slow \
	Vlane_e___024root__DepSet_h59ee1251__3__Slow \
	Vlane_e___024root__DepSet_h59ee1251__4__Slow \
	Vlane_e___024root__DepSet_h59ee1251__5__Slow \
	Vlane_e___024root__DepSet_h59ee1251__6__Slow \
	Vlane_e___024root__DepSet_h59ee1251__7__Slow \
	Vlane_e___024root__DepSet_h59ee1251__8__Slow \
	Vlane_e___024root__DepSet_h59ee1251__9__Slow \
	Vlane_e___024root__DepSet_h59ee1251__10__Slow \
	Vlane_e___024root__DepSet_h59ee1251__11__Slow \
	Vlane_e___024root__DepSet_h59ee1251__12__Slow \
	Vlane_e___024root__DepSet_h59ee1251__13__Slow \
	Vlane_e___024root__DepSet_h59ee1251__14__Slow \
	Vlane_e___024root__DepSet_h59ee1251__15__Slow \
	Vlane_e___024root__DepSet_hf7ea71ac__0__Slow \
	Vlane_e___024root__DepSet_hf7ea71ac__1__Slow \
	Vlane_e___024root__DepSet_hf7ea71ac__2__Slow \
	Vlane_e___024root__DepSet_hf7ea71ac__3__Slow \
	Vlane_e___024root__DepSet_hf7ea71ac__4__Slow \
	Vlane_e___024unit__Slow \
	Vlane_e___024unit__DepSet_h71ea2c44__0__Slow \
	Vlane_e_ara_pkg__Slow \
	Vlane_e_ara_pkg__DepSet_h2f654b85__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vlane_e__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vlane_e__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
