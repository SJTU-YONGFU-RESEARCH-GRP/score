// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vara_tb_verilator___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"FPUSupportNone", "FPUSupportHalf", "FPUSupportSingle", 
                                "FPUSupportHalfSingle", 
                                "FPUSupportDouble", 
                                "FPUSupportSingleDouble", 
                                "FPUSupportHalfSingleDouble", 
                                "FPUSupportAll"};
        const char* __VenumItemValues[]
        = {"0", "1000", "10000", "11000", "100000", 
                                "110000", "111000", 
                                "111111"};
        tracep->declDTypeEnum(1, "ara_pkg::fpu_support_e", 8, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FPExtSupportDisable", "FPExtSupportEnable"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "ara_pkg::fpext_support_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FixedPointDisable", "FixedPointEnable"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(3, "ara_pkg::fixpt_support_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SegSupportDisable", "SegSupportEnable"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(4, "ara_pkg::seg_support_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Setup", "Access"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(5, "axi_lite_to_apb.apb_state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"W_IDLE", "W_PASSTHROUGH", "W_INCR_DOWNSIZE", 
                                "W_SPLIT_INCR_DOWNSIZE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(6, "axi_dw_downsizer.w_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"R_IDLE", "R_INJECT_AW", "R_PASSTHROUGH", 
                                "R_INCR_DOWNSIZE", 
                                "R_SPLIT_INCR_DOWNSIZE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(7, "axi_dw_downsizer.r_state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"W_RESET", "W_FEEDTHROUGH", "BLOCK_AW", 
                                "ABSORB_W", "HOLD_B", 
                                "INJECT_B", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(8, "axi_atop_filter.w_state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"R_RESET", "R_FEEDTHROUGH", "INJECT_R", 
                                "R_HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(9, "axi_atop_filter.r_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"W_IDLE", "W_PASSTHROUGH", "W_INCR_DOWNSIZE", 
                                "W_SPLIT_INCR_DOWNSIZE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(10, "axi_dw_downsizer.w_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"R_IDLE", "R_INJECT_AW", "R_PASSTHROUGH", 
                                "R_INCR_DOWNSIZE", 
                                "R_SPLIT_INCR_DOWNSIZE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(11, "axi_dw_downsizer.r_state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"W_RESET", "W_FEEDTHROUGH", "BLOCK_AW", 
                                "ABSORB_W", "HOLD_B", 
                                "INJECT_B", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(12, "axi_atop_filter.w_state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"R_RESET", "R_FEEDTHROUGH", "INJECT_R", 
                                "R_HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(13, "axi_atop_filter.r_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BReady", "BWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(14, "axi_burst_splitter.__typeimpenum50", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RFeedthrough", "RWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(15, "axi_burst_splitter.__typeimpenum51", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Busy"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(16, "axi_burst_splitter_ax_chan.__typeimpenum52", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Busy"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(17, "axi_burst_splitter_ax_chan.__typeimpenum52", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BReady", "BWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(18, "axi_burst_splitter.__typeimpenum50", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RFeedthrough", "RWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(19, "axi_burst_splitter.__typeimpenum51", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"READY", "WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(20, "stream_fork.state_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"READY", "WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(21, "stream_fork.state_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"W_RESET", "W_FEEDTHROUGH", "BLOCK_AW", 
                                "ABSORB_W", "HOLD_B", 
                                "INJECT_B", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(22, "axi_atop_filter.w_state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"R_RESET", "R_FEEDTHROUGH", "INJECT_R", 
                                "R_HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(23, "axi_atop_filter.r_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"W_RESET", "W_FEEDTHROUGH", "BLOCK_AW", 
                                "ABSORB_W", "HOLD_B", 
                                "INJECT_B", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(24, "axi_atop_filter.w_state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"R_RESET", "R_FEEDTHROUGH", "INJECT_R", 
                                "R_HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(25, "axi_atop_filter.r_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NO_RED", "ALU_RED", "MFPU_RED"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(26, "ara_pkg::sldu_mux_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALU_SLDU", "MFPU_ADDRGEN"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(27, "ara_pkg::target_fu_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SLDU_SEL", "ADDRGEN_SEL", "ALU_RED_SEL", 
                                "FPU_RED_SEL"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(28, "lane.sldu_addrgen_sel_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MUX_OPQUEUE_SEL", "MUX_ALU_SEL", "MUX_FPU_SEL"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(29, "lane.sldu_addrgen_mux_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"VADD", "VSUB", "VADC", "VSBC", "VRSUB", 
                                "VMINU", "VMIN", "VMAXU", 
                                "VMAX", "VAND", "VOR", 
                                "VXOR", "VSADDU", "VSADD", 
                                "VSSUBU", "VSSUB", 
                                "VAADDU", "VAADD", 
                                "VASUBU", "VASUB", 
                                "VSSRL", "VSSRA", "VNCLIP", 
                                "VNCLIPU", "VSLL", 
                                "VSRL", "VSRA", "VNSRL", 
                                "VNSRA", "VMERGE", 
                                "VMVSX", "VFMVSF", 
                                "VREDSUM", "VREDAND", 
                                "VREDOR", "VREDXOR", 
                                "VREDMINU", "VREDMIN", 
                                "VREDMAXU", "VREDMAX", 
                                "VWREDSUMU", "VWREDSUM", 
                                "VMUL", "VMULH", "VMULHU", 
                                "VMULHSU", "VMACC", 
                                "VNMSAC", "VMADD", 
                                "VNMSUB", "VSMUL", 
                                "VDIVU", "VDIV", "VREMU", 
                                "VREM", "VFADD", "VFSUB", 
                                "VFRSUB", "VFMUL", 
                                "VFDIV", "VFRDIV", 
                                "VFMACC", "VFNMACC", 
                                "VFMSAC", "VFNMSAC", 
                                "VFMADD", "VFNMADD", 
                                "VFMSUB", "VFNMSUB", 
                                "VFSQRT", "VFMIN", 
                                "VFMAX", "VFREC7", 
                                "VFRSQRT7", "VFCLASS", 
                                "VFSGNJ", "VFSGNJN", 
                                "VFSGNJX", "VFCVTXUF", 
                                "VFCVTXF", "VFCVTFXU", 
                                "VFCVTFX", "VFCVTRTZXUF", 
                                "VFCVTRTZXF", "VFNCVTRODFF", 
                                "VFCVTFF", "VFREDUSUM", 
                                "VFREDOSUM", "VFREDMIN", 
                                "VFREDMAX", "VFWREDUSUM", 
                                "VFWREDOSUM", "VMFEQ", 
                                "VMFLE", "VMFLT", "VMFNE", 
                                "VMFGT", "VMFGE", "VMSEQ", 
                                "VMSNE", "VMSLTU", 
                                "VMSLT", "VMSLEU", 
                                "VMSLE", "VMSGTU", 
                                "VMSGT", "VMADC", "VMSBC", 
                                "VMSBF", "VMSOF", "VMSIF", 
                                "VIOTA", "VID", "VCPOP", 
                                "VFIRST", "VMANDNOT", 
                                "VMAND", "VMOR", "VMXOR", 
                                "VMORNOT", "VMNAND", 
                                "VMNOR", "VMXNOR", 
                                "VRGATHER", "VRGATHEREI16", 
                                "VCOMPRESS", "VMVXS", 
                                "VFMVFS", "VSLIDEUP", 
                                "VSLIDEDOWN", "VLE", 
                                "VLSE", "VLXE", "VSE", 
                                "VSSE", "VSXE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110", 
                                "101111", "110000", 
                                "110001", "110010", 
                                "110011", "110100", 
                                "110101", "110110", 
                                "110111", "111000", 
                                "111001", "111010", 
                                "111011", "111100", 
                                "111101", "111110", 
                                "111111", "1000000", 
                                "1000001", "1000010", 
                                "1000011", "1000100", 
                                "1000101", "1000110", 
                                "1000111", "1001000", 
                                "1001001", "1001010", 
                                "1001011", "1001100", 
                                "1001101", "1001110", 
                                "1001111", "1010000", 
                                "1010001", "1010010", 
                                "1010011", "1010100", 
                                "1010101", "1010110", 
                                "1010111", "1011000", 
                                "1011001", "1011010", 
                                "1011011", "1011100", 
                                "1011101", "1011110", 
                                "1011111", "1100000", 
                                "1100001", "1100010", 
                                "1100011", "1100100", 
                                "1100101", "1100110", 
                                "1100111", "1101000", 
                                "1101001", "1101010", 
                                "1101011", "1101100", 
                                "1101101", "1101110", 
                                "1101111", "1110000", 
                                "1110001", "1110010", 
                                "1110011", "1110100", 
                                "1110101", "1110110", 
                                "1110111", "1111000", 
                                "1111001", "1111010", 
                                "1111011", "1111100", 
                                "1111101", "1111110", 
                                "1111111", "10000000", 
                                "10000001", "10000010", 
                                "10000011", "10000100", 
                                "10000101", "10000110", 
                                "10000111"};
        tracep->declDTypeEnum(30, "ara_pkg::ara_op_e", 136, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "REQUESTING"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(31, "lane_sequencer.vrgat_state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "REQUESTING"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(32, "operand_requester.state_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NO_REDUCTION", "INTRA_LANE_REDUCTION", 
                                "INTER_LANES_REDUCTION_RX", 
                                "INTER_LANES_REDUCTION_TX", 
                                "LN0_REDUCTION_COMMIT", 
                                "SIMD_REDUCTION"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(33, "valu.alu_state_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"EW8", "EW16", "EW32", "EW64", "EW128", 
                                "EW256", "EW512", "EW1024"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(34, "rvv_pkg::vew_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NO_REDUCTION", "INTRA_LANE_REDUCTION", 
                                "INTER_LANES_REDUCTION_TX", 
                                "INTER_LANES_REDUCTION_RX", 
                                "LN0_REDUCTION_COMMIT", 
                                "SIMD_REDUCTION", "OSUM_REDUCTION", 
                                "MFPU_WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(35, "vmfpu.mfpu_state_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PULP", "TH32", "THMULTI"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(36, "fpnew_pkg::divsqrt_unit_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FMADD", "FNMSUB", "ADD", "MUL", "DIV", 
                                "SQRT", "SGNJ", "MINMAX", 
                                "CMP", "CLASSIFY", 
                                "F2F", "F2I", "I2F", 
                                "CPKAB", "CPKCD", "SDOTP", 
                                "EXVSUM", "VSUM"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001"};
        tracep->declDTypeEnum(37, "fpnew_pkg::operation_e", 18, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FP32", "FP64", "FP16", "FP8", "FP16ALT", 
                                "FP8ALT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(38, "fpnew_pkg::fp_format_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"INT8", "INT16", "INT32", "INT64"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(39, "fpnew_pkg::int_format_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RNE", "RTZ", "RDN", "RUP", "RMM", "ROD", 
                                "RSR", "DYN"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(40, "fpnew_pkg::roundmode_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ADDMUL", "DIVSQRT", "NONCOMP", "CONV", 
                                "DOTP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(41, "fpnew_pkg::opgroup_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BEFORE", "AFTER", "INSIDE", "DISTRIBUTED"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(42, "fpnew_pkg::pipe_config_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "BUSY", "HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(43, "fpnew_divsqrt_multi.fsm_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "BUSY", "HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(44, "fpnew_divsqrt_multi.fsm_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "BUSY", "HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(45, "fpnew_divsqrt_multi.fsm_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NEGINF", "NEGNORM", "NEGSUBNORM", "NEGZERO", 
                                "POSZERO", "POSSUBNORM", 
                                "POSNORM", "POSINF", 
                                "SNAN", "QNAN"};
        const char* __VenumItemValues[]
        = {"1", "10", "100", "1000", "10000", "100000", 
                                "1000000", "10000000", 
                                "100000000", "1000000000"};
        tracep->declDTypeEnum(46, "fpnew_pkg::classmask_e", 10, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ISSUE_IDLE", "LOAD", "ISSUE_VALID", "ISSUE_SKIP", 
                                "WAIT_DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(47, "simd_div.issue_state_t", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"COMMIT_IDLE", "COMMIT_READY", "COMMIT_SKIP", 
                                "COMMIT_DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(48, "simd_div.commit_state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "DIVIDE", "FINISH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(49, "serdiv.__typeimpenum644", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NORMAL_OPERATION", "WAIT_IDLE", "WAIT_IDLE_FLUSH", 
                                "RESHUFFLE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(50, "ara_dispatcher.state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"LMUL_1", "LMUL_2", "LMUL_4", "LMUL_8", 
                                "LMUL_RSVD", "LMUL_1_8", 
                                "LMUL_1_4", "LMUL_1_2"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(51, "rvv_pkg::vlmul_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"LSU_FLUSH_IDLE", "LSU_FLUSH", "LSU_FLUSH_WAIT", 
                                "LSU_FLUSH_DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(52, "ara_dispatcher.lsu_ex_flush_fsm_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEGMENT_MICRO_OPS", "SEGMENT_MICRO_OPS_WAIT_END", 
                                "SEGMENT_MICRO_OPS_END"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(53, "segment_sequencer.state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MaskFUAlu", "MaskFUMFpu"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(54, "ara_pkg::masku_fu_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(55, "ara_sequencer.__typeimpenum753", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NP2_EXT_SEL", "NP2_LOOP_SEL"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(56, "sldu.np2_loop_mux_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SLIDE_IDLE", "SLIDE_RUN", "SLIDE_RUN_VSLIDE1UP_FIRST_WORD", 
                                "SLIDE_RUN_OSUM", "SLIDE_WAIT_OSUM", 
                                "SLIDE_NP2_SETUP", 
                                "SLIDE_NP2_RUN", "SLIDE_NP2_COMMIT", 
                                "SLIDE_NP2_WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(57, "sldu.slide_state_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "ADDRGEN", "ADDRGEN_IDX_OP", "ADDRGEN_IDX_OP_END", 
                                "WAIT_LAST_TRANSLATION"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(58, "addrgen.__typeimpenum775", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AXI_ADDRGEN_IDLE", "AXI_ADDRGEN_AXI_DW_STORE_MISALIGNED", 
                                "AXI_ADDRGEN_WAITING_CORE_STORE_PENDING", 
                                "AXI_ADDRGEN_REQUESTING", 
                                "AXI_ADDRGEN_WAIT_TRANSLATION"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(59, "addrgen.__typeimpenum776", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "VALID_RESULT_QUEUE", "WAIT_RESULT_QUEUE", 
                                "HANDLE_EXCEPTION"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(60, "vldu.__typeimpenum779", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PRIV_LVL_M", "PRIV_LVL_HS", "PRIV_LVL_S", 
                                "PRIV_LVL_U"};
        const char* __VenumItemValues[]
        = {"11", "10", "1", "0"};
        tracep->declDTypeEnum(61, "riscv::priv_lvl_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Off", "Initial", "Clean", "Dirty"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(62, "riscv::xs_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ADD", "SUB", "ADDW", "SUBW", "XORL", "ORL", 
                                "ANDL", "SRA", "SRL", 
                                "SLL", "SRLW", "SLLW", 
                                "SRAW", "LTS", "LTU", 
                                "GES", "GEU", "EQ", 
                                "NE", "JALR", "BRANCH", 
                                "SLTS", "SLTU", "MRET", 
                                "SRET", "DRET", "ECALL", 
                                "WFI", "FENCE", "FENCE_I", 
                                "SFENCE_VMA", "HFENCE_VVMA", 
                                "HFENCE_GVMA", "CSR_WRITE", 
                                "CSR_READ", "CSR_SET", 
                                "CSR_CLEAR", "FENCE_T", 
                                "LD", "SD", "LW", "LWU", 
                                "SW", "LH", "LHU", 
                                "SH", "LB", "SB", "LBU", 
                                "HLV_B", "HLV_BU", 
                                "HLV_H", "HLV_HU", 
                                "HLVX_HU", "HLV_W", 
                                "HLVX_WU", "HSV_B", 
                                "HSV_H", "HSV_W", "HLV_WU", 
                                "HLV_D", "HSV_D", "AMO_LRW", 
                                "AMO_LRD", "AMO_SCW", 
                                "AMO_SCD", "AMO_SWAPW", 
                                "AMO_ADDW", "AMO_ANDW", 
                                "AMO_ORW", "AMO_XORW", 
                                "AMO_MAXW", "AMO_MAXWU", 
                                "AMO_MINW", "AMO_MINWU", 
                                "AMO_SWAPD", "AMO_ADDD", 
                                "AMO_ANDD", "AMO_ORD", 
                                "AMO_XORD", "AMO_MAXD", 
                                "AMO_MAXDU", "AMO_MIND", 
                                "AMO_MINDU", "MUL", 
                                "MULH", "MULHU", "MULHSU", 
                                "MULW", "DIV", "DIVU", 
                                "DIVW", "DIVUW", "REM", 
                                "REMU", "REMW", "REMUW", 
                                "FLD", "FLW", "FLH", 
                                "FLB", "FSD", "FSW", 
                                "FSH", "FSB", "FADD", 
                                "FSUB", "FMUL", "FDIV", 
                                "FMIN_MAX", "FSQRT", 
                                "FMADD", "FMSUB", "FNMSUB", 
                                "FNMADD", "FCVT_F2I", 
                                "FCVT_I2F", "FCVT_F2F", 
                                "FSGNJ", "FMV_F2X", 
                                "FMV_X2F", "FCMP", 
                                "FCLASS", "VFMIN", 
                                "VFMAX", "VFSGNJ", 
                                "VFSGNJN", "VFSGNJX", 
                                "VFEQ", "VFNE", "VFLT", 
                                "VFGE", "VFLE", "VFGT", 
                                "VFCPKAB_S", "VFCPKCD_S", 
                                "VFCPKAB_D", "VFCPKCD_D", 
                                "OFFLOAD", "ORCB", 
                                "REV8", "ROL", "ROLW", 
                                "ROR", "RORI", "RORIW", 
                                "RORW", "SEXTB", "SEXTH", 
                                "ZEXTH", "CPOP", "CPOPW", 
                                "CLZ", "CLZW", "CTZ", 
                                "CTZW", "CLMUL", "CLMULH", 
                                "CLMULR", "BCLR", "BCLRI", 
                                "BEXT", "BEXTI", "BINV", 
                                "BINVI", "BSET", "BSETI", 
                                "MAX", "MAXU", "MIN", 
                                "MINU", "SH1ADDUW", 
                                "SH2ADDUW", "SH3ADDUW", 
                                "ADDUW", "SLLIUW", 
                                "SH1ADD", "SH2ADD", 
                                "SH3ADD", "ANDN", "ORN", 
                                "XNOR", "ACCEL_OP", 
                                "ACCEL_OP_FS1", "ACCEL_OP_FD", 
                                "ACCEL_OP_LOAD", "ACCEL_OP_STORE", 
                                "CZERO_EQZ", "CZERO_NEZ", 
                                "PACK", "PACK_H", "PACK_W", 
                                "BREV8", "UNZIP", "ZIP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110", 
                                "101111", "110000", 
                                "110001", "110010", 
                                "110011", "110100", 
                                "110101", "110110", 
                                "110111", "111000", 
                                "111001", "111010", 
                                "111011", "111100", 
                                "111101", "111110", 
                                "111111", "1000000", 
                                "1000001", "1000010", 
                                "1000011", "1000100", 
                                "1000101", "1000110", 
                                "1000111", "1001000", 
                                "1001001", "1001010", 
                                "1001011", "1001100", 
                                "1001101", "1001110", 
                                "1001111", "1010000", 
                                "1010001", "1010010", 
                                "1010011", "1010100", 
                                "1010101", "1010110", 
                                "1010111", "1011000", 
                                "1011001", "1011010", 
                                "1011011", "1011100", 
                                "1011101", "1011110", 
                                "1011111", "1100000", 
                                "1100001", "1100010", 
                                "1100011", "1100100", 
                                "1100101", "1100110", 
                                "1100111", "1101000", 
                                "1101001", "1101010", 
                                "1101011", "1101100", 
                                "1101101", "1101110", 
                                "1101111", "1110000", 
                                "1110001", "1110010", 
                                "1110011", "1110100", 
                                "1110101", "1110110", 
                                "1110111", "1111000", 
                                "1111001", "1111010", 
                                "1111011", "1111100", 
                                "1111101", "1111110", 
                                "1111111", "10000000", 
                                "10000001", "10000010", 
                                "10000011", "10000100", 
                                "10000101", "10000110", 
                                "10000111", "10001000", 
                                "10001001", "10001010", 
                                "10001011", "10001100", 
                                "10001101", "10001110", 
                                "10001111", "10010000", 
                                "10010001", "10010010", 
                                "10010011", "10010100", 
                                "10010101", "10010110", 
                                "10010111", "10011000", 
                                "10011001", "10011010", 
                                "10011011", "10011100", 
                                "10011101", "10011110", 
                                "10011111", "10100000", 
                                "10100001", "10100010", 
                                "10100011", "10100100", 
                                "10100101", "10100110", 
                                "10100111", "10101000", 
                                "10101001", "10101010", 
                                "10101011", "10101100", 
                                "10101101", "10101110", 
                                "10101111", "10110000", 
                                "10110001", "10110010", 
                                "10110011", "10110100", 
                                "10110101", "10110110", 
                                "10110111", "10111000", 
                                "10111001", "10111010", 
                                "10111011", "10111100", 
                                "10111101", "10111110", 
                                "10111111", "11000000", 
                                "11000001", "11000010"};
        tracep->declDTypeEnum(63, "ariane_pkg::fu_op", 195, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "FLUSH_DCACHE", "DRAIN_REQS", "PAD", 
                                "RST_UARCH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(64, "controller.fence_t_state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"READY", "STALL"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(65, "fpu_wrap.__typeimpenum630", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "BUSY", "HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(66, "fpnew_divsqrt_multi.fsm_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "DIVIDE", "FINISH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(67, "serdiv.__typeimpenum644", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_GRANT", "PTE_LOOKUP", "WAIT_RVALID", 
                                "PROPAGATE_ERROR", 
                                "PROPAGATE_ACCESS_ERROR", 
                                "LATENCY"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(68, "cva6_ptw.__typeimpenum575", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"S_STAGE", "G_INTERMED_STAGE", "G_FINAL_STAGE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(69, "cva6_ptw.__typeimpenum576", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ACCESS_NONE", "ACCESS_READ", "ACCESS_WRITE", 
                                "ACCESS_EXEC"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "100"};
        tracep->declDTypeEnum(70, "riscv::pmp_access_t", 4, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CVA6", "ACC"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(71, "load_store_unit.__typeimpenum643", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_GNT", "SEND_TAG", "WAIT_PAGE_OFFSET", 
                                "ABORT_TRANSACTION", 
                                "ABORT_TRANSACTION_NI", 
                                "WAIT_TRANSLATION", 
                                "WAIT_FLUSH", "WAIT_WB_EMPTY"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(72, "load_unit.__typeimpenum641", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "VALID_STORE", "WAIT_TRANSLATION", 
                                "WAIT_STORE_READY"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(73, "store_unit.__typeimpenum648", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AMO_NONE", "AMO_LR", "AMO_SC", "AMO_SWAP", 
                                "AMO_ADD", "AMO_AND", 
                                "AMO_OR", "AMO_XOR", 
                                "AMO_MAX", "AMO_MAXU", 
                                "AMO_MIN", "AMO_MINU", 
                                "AMO_CAS1", "AMO_CAS2"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101"};
        tracep->declDTypeEnum(74, "ariane_pkg::amo_t", 14, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DCACHE_INV_REQ", "DCACHE_STORE_ACK", "DCACHE_LOAD_ACK", 
                                "DCACHE_ATOMIC_ACK", 
                                "DCACHE_INT_ACK"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(75, "wt_cache_pkg::dcache_in_t", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_AW_READY", "WAIT_LAST_W_READY", 
                                "WAIT_LAST_W_READY_AW_READY", 
                                "WAIT_AW_READY_BURST"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(76, "axi_shim.__typeimpenum649", 5, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FLUSH", "IDLE", "READ", "MISS", "KILL_ATRANS", 
                                "KILL_MISS"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(77, "cva6_icache.state_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "READ", "MISS_REQ", "MISS_WAIT", 
                                "KILL_MISS", "KILL_MISS_ACK", 
                                "REPLAY_REQ", "REPLAY_READ"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(78, "wt_dcache_ctrl.state_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "DRAIN", "AMO", "FLUSH", "INIT", 
                                "STORE_WAIT", "LOAD_WAIT", 
                                "AMO_WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(79, "wt_dcache_missunit.state_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FE_NONE", "FE_INSTR_ACCESS_FAULT", "FE_INSTR_PAGE_FAULT", 
                                "FE_INSTR_GUEST_PAGE_FAULT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(80, "ariane_pkg::frontend_exception_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NOIMM", "IIMM", "SIMM", "SBIMM", "UIMM", 
                                "JIMM", "RS3", "MUX_RD_RS3"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(81, "decoder.__typeimpenum635", 8, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NONE", "LOAD", "STORE", "ALU", "CTRL_FLOW", 
                                "MULT", "CSR", "FPU", 
                                "FPU_VEC", "CVXIF", 
                                "ACCEL"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010"};
        tracep->declDTypeEnum(82, "ariane_pkg::fu_t", 11, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"W_IDLE", "W_PASSTHROUGH", "W_INCR_UPSIZE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(83, "axi_dw_upsizer.w_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"R_IDLE", "R_INJECT_AW", "R_PASSTHROUGH", 
                                "R_INCR_UPSIZE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(84, "axi_dw_upsizer.r_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"W_RESET", "W_FEEDTHROUGH", "BLOCK_AW", 
                                "ABSORB_W", "HOLD_B", 
                                "INJECT_B", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(85, "axi_atop_filter.w_state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"R_RESET", "R_FEEDTHROUGH", "INJECT_R", 
                                "R_HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(86, "axi_atop_filter.r_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Invalidating"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(87, "axi_inval_filter.__typeimpenum755", 2, 1, __VenumItemNames, __VenumItemValues);
    }
}

void Vara_tb_verilator___024root__trace_decl_types(VerilatedFst* tracep) {
    Vara_tb_verilator___024root__traceDeclTypesSub0(tracep);
}
