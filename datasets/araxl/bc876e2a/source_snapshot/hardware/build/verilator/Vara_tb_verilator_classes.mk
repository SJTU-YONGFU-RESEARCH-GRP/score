# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vara_tb_verilator.mk for the caller.

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
	Vara_tb_verilator \
	Vara_tb_verilator__Dpi_Export__0 \
	Vara_tb_verilator___024root__DepSet_ha4067062__0 \
	Vara_tb_verilator___024root__DepSet_ha4067062__1 \
	Vara_tb_verilator___024root__DepSet_ha4067062__2 \
	Vara_tb_verilator___024root__DepSet_ha4067062__3 \
	Vara_tb_verilator___024root__DepSet_ha4067062__4 \
	Vara_tb_verilator___024root__DepSet_ha4067062__5 \
	Vara_tb_verilator___024root__DepSet_ha4067062__6 \
	Vara_tb_verilator___024root__DepSet_ha4067062__7 \
	Vara_tb_verilator___024root__DepSet_ha4067062__8 \
	Vara_tb_verilator___024root__DepSet_ha4067062__9 \
	Vara_tb_verilator___024root__DepSet_ha4067062__10 \
	Vara_tb_verilator___024root__DepSet_ha4067062__11 \
	Vara_tb_verilator___024root__DepSet_ha4067062__12 \
	Vara_tb_verilator___024root__DepSet_ha4067062__13 \
	Vara_tb_verilator___024root__DepSet_ha4067062__14 \
	Vara_tb_verilator___024root__DepSet_ha4067062__15 \
	Vara_tb_verilator___024root__DepSet_ha4067062__16 \
	Vara_tb_verilator___024root__DepSet_ha4067062__17 \
	Vara_tb_verilator___024root__DepSet_ha4067062__18 \
	Vara_tb_verilator___024root__DepSet_ha4067062__19 \
	Vara_tb_verilator___024root__DepSet_ha4067062__20 \
	Vara_tb_verilator___024root__DepSet_ha4067062__21 \
	Vara_tb_verilator___024root__DepSet_ha4067062__22 \
	Vara_tb_verilator___024root__DepSet_ha4067062__23 \
	Vara_tb_verilator___024root__DepSet_ha4067062__24 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__0 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__1 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__2 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__3 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__4 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__5 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__6 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__7 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__8 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__9 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__10 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__11 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__12 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__13 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__14 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__15 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__16 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__17 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__18 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__19 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__20 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__21 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__22 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__23 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__24 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__25 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__26 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__27 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__28 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__29 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__30 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__31 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__32 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__33 \
	Vara_tb_verilator___024root__DepSet_h59ae107a__34 \
	Vara_tb_verilator___024unit__DepSet_h5f96abbf__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vara_tb_verilator__ConstPool_0 \
	Vara_tb_verilator___024root__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__0__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__1__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__2__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__3__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__4__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__5__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__6__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__7__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__8__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__9__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__10__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__11__Slow \
	Vara_tb_verilator___024root__DepSet_ha4067062__12__Slow \
	Vara_tb_verilator___024root__DepSet_h59ae107a__0__Slow \
	Vara_tb_verilator___024root__DepSet_h59ae107a__1__Slow \
	Vara_tb_verilator___024root__DepSet_h59ae107a__2__Slow \
	Vara_tb_verilator___024root__DepSet_h59ae107a__3__Slow \
	Vara_tb_verilator___024root__DepSet_h59ae107a__4__Slow \
	Vara_tb_verilator___024root__DepSet_h59ae107a__5__Slow \
	Vara_tb_verilator___024root__DepSet_h59ae107a__6__Slow \
	Vara_tb_verilator___024root__DepSet_h59ae107a__7__Slow \
	Vara_tb_verilator___024root__DepSet_h59ae107a__8__Slow \
	Vara_tb_verilator___024unit__Slow \
	Vara_tb_verilator___024unit__DepSet_h133dc93d__0__Slow \
	Vara_tb_verilator_ara_pkg__Slow \
	Vara_tb_verilator_ara_pkg__DepSet_h9c3d9de3__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vara_tb_verilator__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vara_tb_verilator__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
