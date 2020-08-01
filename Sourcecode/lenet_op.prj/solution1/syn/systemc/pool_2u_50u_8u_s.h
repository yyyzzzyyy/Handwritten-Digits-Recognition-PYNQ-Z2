// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pool_2u_50u_8u_s_HH_
#define _pool_2u_50u_8u_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pool_2u_50u_8u_s_bVr.h"
#include "pool_2u_50u_8u_s_bWr.h"

namespace ap_rtl {

struct pool_2u_50u_8u_s : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > in_V_V_dout;
    sc_in< sc_logic > in_V_V_empty_n;
    sc_out< sc_logic > in_V_V_read;
    sc_out< sc_lv<32> > out_V_V_din;
    sc_in< sc_logic > out_V_V_full_n;
    sc_out< sc_logic > out_V_V_write;


    // Module declarations
    pool_2u_50u_8u_s(sc_module_name name);
    SC_HAS_PROCESS(pool_2u_50u_8u_s);

    ~pool_2u_50u_8u_s();

    sc_trace_file* mVcdFile;

    pool_2u_50u_8u_s_bVr* buf_U;
    pool_2u_50u_8u_s_bWr* acc_U;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<73> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<32> > IFMCH_curr;
    sc_signal< sc_lv<32> > IFMDim_curr;
    sc_signal< sc_logic > in_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< bool > ap_block_pp1_stage1;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1376;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond_reg_1344;
    sc_signal< sc_logic > out_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp3_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter1;
    sc_signal< bool > ap_block_pp3_stage0;
    sc_signal< sc_lv<1> > exitcond_flatten2_reg_1433;
    sc_signal< sc_lv<32> > i3_reg_747;
    sc_signal< sc_lv<33> > indvar_flatten_reg_791;
    sc_signal< sc_lv<32> > ch_reg_802;
    sc_signal< sc_lv<6> > ch2_reg_813;
    sc_signal< sc_lv<63> > indvar_flatten2_reg_824;
    sc_signal< sc_lv<31> > outpix_reg_835;
    sc_signal< sc_lv<32> > outch_reg_846;
    sc_signal< sc_lv<32> > reg_857;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_state69_pp1_stage1_iter0;
    sc_signal< bool > ap_block_pp1_stage1_11001;
    sc_signal< sc_lv<32> > tmp_V_2_reg_1254;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<32> > tmp_V_4_reg_1259;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<32> > tmp_V_6_reg_1265;
    sc_signal< bool > ap_block_state4;
    sc_signal< sc_lv<32> > tmp_V_10_reg_1270;
    sc_signal< bool > ap_block_state6;
    sc_signal< sc_lv<32> > tmp_V_12_reg_1277;
    sc_signal< bool > ap_block_state7;
    sc_signal< sc_lv<6> > j_1_fu_888_p2;
    sc_signal< sc_lv<6> > j_1_reg_1288;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<8> > tmp_2_fu_894_p3;
    sc_signal< sc_lv<8> > tmp_2_reg_1293;
    sc_signal< sc_lv<1> > tmp_1_fu_882_p2;
    sc_signal< sc_lv<1> > tmp_5_fu_907_p2;
    sc_signal< sc_lv<1> > tmp_5_reg_1300;
    sc_signal< sc_lv<32> > tmp1_fu_955_p2;
    sc_signal< sc_lv<32> > tmp1_reg_1304;
    sc_signal< sc_logic > ap_CS_fsm_state61;
    sc_signal< sc_lv<32> > tmp2_fu_959_p2;
    sc_signal< sc_lv<32> > tmp2_reg_1309;
    sc_signal< sc_lv<31> > tmp_3_fu_967_p4;
    sc_signal< sc_lv<31> > tmp_3_reg_1314;
    sc_signal< sc_lv<33> > tmp_22_fu_977_p3;
    sc_signal< sc_lv<33> > tmp_22_reg_1319;
    sc_signal< sc_lv<32> > tmp_23_fu_985_p3;
    sc_signal< sc_lv<32> > tmp_23_reg_1324;
    sc_signal< sc_lv<63> > bound1_fu_1001_p2;
    sc_signal< sc_lv<63> > bound1_reg_1329;
    sc_signal< sc_lv<63> > bound2_fu_1010_p2;
    sc_signal< sc_lv<63> > bound2_reg_1334;
    sc_signal< sc_lv<32> > KER_bound_fu_1016_p2;
    sc_signal< sc_lv<32> > KER_bound_reg_1339;
    sc_signal< sc_logic > ap_CS_fsm_state62;
    sc_signal< sc_lv<1> > exitcond_fu_1020_p2;
    sc_signal< bool > ap_block_state63_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state64_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > i_fu_1025_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<63> > indvar_flatten_next1_fu_1036_p2;
    sc_signal< sc_lv<63> > indvar_flatten_next1_reg_1356;
    sc_signal< sc_logic > ap_CS_fsm_state66;
    sc_signal< sc_lv<1> > exitcond_flatten8_fu_1042_p2;
    sc_signal< sc_logic > ap_CS_fsm_state67;
    sc_signal< sc_lv<32> > indvar_flatten_next7_fu_1047_p2;
    sc_signal< sc_lv<32> > indvar_flatten_next7_reg_1365;
    sc_signal< sc_lv<31> > xp_mid2_fu_1058_p3;
    sc_signal< sc_lv<31> > xp_mid2_reg_1370;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_1066_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state68_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state70_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<33> > indvar_flatten_next_fu_1071_p2;
    sc_signal< sc_lv<33> > indvar_flatten_next_reg_1380;
    sc_signal< sc_lv<32> > ch_mid2_fu_1083_p3;
    sc_signal< sc_lv<32> > ch_mid2_reg_1385;
    sc_signal< sc_lv<6> > acc_addr_4_reg_1391;
    sc_signal< sc_lv<32> > ch_1_fu_1095_p2;
    sc_signal< sc_lv<32> > ch_1_reg_1397;
    sc_signal< sc_lv<9> > tmp_27_fu_1115_p1;
    sc_signal< sc_lv<9> > tmp_27_reg_1402;
    sc_signal< sc_logic > ap_CS_fsm_state71;
    sc_signal< sc_lv<1> > tmp_8_fu_1118_p2;
    sc_signal< sc_lv<1> > tmp_8_reg_1407;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< bool > ap_block_state72_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state73_pp2_stage0_iter1;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<6> > ch_2_fu_1124_p2;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<8> > buf_addr_3_reg_1416;
    sc_signal< sc_lv<6> > acc_addr_3_reg_1422;
    sc_signal< sc_lv<31> > xp_1_fu_1172_p2;
    sc_signal< sc_logic > ap_CS_fsm_state74;
    sc_signal< sc_lv<1> > exitcond_flatten2_fu_1177_p2;
    sc_signal< bool > ap_block_state75_pp3_stage0_iter0;
    sc_signal< bool > ap_block_state76_pp3_stage0_iter1;
    sc_signal< bool > ap_block_pp3_stage0_11001;
    sc_signal< sc_lv<63> > indvar_flatten_next2_fu_1182_p2;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter0;
    sc_signal< sc_lv<31> > tmp_4_mid2_v_fu_1208_p3;
    sc_signal< sc_lv<31> > tmp_4_mid2_v_reg_1442;
    sc_signal< sc_lv<8> > buf_addr_2_reg_1447;
    sc_signal< sc_lv<32> > outch_1_fu_1248_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state63;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state68;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage1_subdone;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state72;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< bool > ap_block_pp3_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp3_exit_iter0_state75;
    sc_signal< sc_lv<8> > buf_address0;
    sc_signal< sc_logic > buf_ce0;
    sc_signal< sc_lv<32> > buf_q0;
    sc_signal< sc_lv<8> > buf_address1;
    sc_signal< sc_logic > buf_ce1;
    sc_signal< sc_logic > buf_we1;
    sc_signal< sc_lv<32> > buf_d1;
    sc_signal< sc_lv<6> > acc_address0;
    sc_signal< sc_logic > acc_ce0;
    sc_signal< sc_lv<32> > acc_q0;
    sc_signal< sc_lv<6> > acc_address1;
    sc_signal< sc_logic > acc_ce1;
    sc_signal< sc_logic > acc_we1;
    sc_signal< sc_lv<32> > acc_d1;
    sc_signal< sc_lv<32> > IFMCH_curr_loc_reg_726;
    sc_signal< bool > ap_block_state8;
    sc_signal< sc_lv<1> > tmp_s_fu_861_p2;
    sc_signal< sc_lv<6> > j_reg_736;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<63> > indvar_flatten1_reg_758;
    sc_signal< sc_logic > ap_CS_fsm_state77;
    sc_signal< sc_lv<32> > indvar_flatten6_reg_769;
    sc_signal< sc_lv<1> > exitcond_flatten1_fu_1031_p2;
    sc_signal< sc_lv<31> > xp_reg_780;
    sc_signal< sc_lv<33> > ap_phi_mux_indvar_flatten_phi_fu_795_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<32> > ap_phi_mux_ch_phi_fu_806_p4;
    sc_signal< sc_lv<31> > ap_phi_mux_outpix_phi_fu_839_p4;
    sc_signal< sc_lv<64> > tmp_4_fu_902_p1;
    sc_signal< sc_lv<64> > tmp_17_fu_918_p3;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<64> > tmp_19_fu_932_p3;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > tmp_21_fu_946_p3;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_logic > ap_CS_fsm_state42;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< sc_logic > ap_CS_fsm_state44;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_logic > ap_CS_fsm_state49;
    sc_signal< sc_logic > ap_CS_fsm_state50;
    sc_signal< sc_logic > ap_CS_fsm_state51;
    sc_signal< sc_logic > ap_CS_fsm_state52;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_logic > ap_CS_fsm_state54;
    sc_signal< sc_logic > ap_CS_fsm_state55;
    sc_signal< sc_logic > ap_CS_fsm_state56;
    sc_signal< sc_logic > ap_CS_fsm_state57;
    sc_signal< sc_logic > ap_CS_fsm_state58;
    sc_signal< sc_logic > ap_CS_fsm_state59;
    sc_signal< sc_logic > ap_CS_fsm_state60;
    sc_signal< sc_lv<64> > tmp_15_fu_1091_p1;
    sc_signal< sc_lv<64> > tmp_31_cast_fu_1152_p1;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_lv<64> > tmp_11_fu_1130_p1;
    sc_signal< sc_lv<64> > tmp_28_cast_fu_1243_p1;
    sc_signal< sc_lv<64> > tmp_6_fu_1220_p1;
    sc_signal< bool > ap_block_state5;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< bool > ap_block_pp3_stage0_01001;
    sc_signal< sc_lv<32> > tmp_13_fu_1163_p3;
    sc_signal< sc_lv<32> > acc_load_1_valIn_V_fu_1106_p3;
    sc_signal< sc_lv<8> > tmp_7_fu_913_p2;
    sc_signal< sc_lv<8> > tmp_18_fu_927_p2;
    sc_signal< sc_lv<8> > tmp_20_fu_941_p2;
    sc_signal< sc_lv<31> > bound1_fu_1001_p0;
    sc_signal< sc_lv<63> > cast9_fu_993_p1;
    sc_signal< sc_lv<32> > bound1_fu_1001_p1;
    sc_signal< sc_lv<32> > bound2_fu_1010_p0;
    sc_signal< sc_lv<31> > bound2_fu_1010_p1;
    sc_signal< sc_lv<1> > exitcond1_fu_1053_p2;
    sc_signal< sc_lv<1> > exitcond3_fu_1077_p2;
    sc_signal< sc_lv<1> > tmp_16_fu_1100_p2;
    sc_signal< sc_lv<8> > tmp_28_fu_1135_p3;
    sc_signal< sc_lv<9> > tmp_30_cast_fu_1143_p1;
    sc_signal< sc_lv<9> > tmp_29_fu_1147_p2;
    sc_signal< sc_lv<1> > tmp_12_fu_1157_p2;
    sc_signal< sc_lv<1> > exitcond2_fu_1194_p2;
    sc_signal< sc_lv<31> > outpix_1_fu_1188_p2;
    sc_signal< sc_lv<32> > outch_mid2_fu_1200_p3;
    sc_signal< sc_lv<7> > tmp_25_fu_1225_p1;
    sc_signal< sc_lv<9> > tmp_27_cast_fu_1229_p3;
    sc_signal< sc_lv<9> > tmp_24_fu_1216_p1;
    sc_signal< sc_lv<9> > tmp_26_fu_1237_p2;
    sc_signal< sc_logic > ap_CS_fsm_state65;
    sc_signal< sc_lv<73> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    sc_signal< sc_logic > ap_idle_pp3;
    sc_signal< sc_logic > ap_enable_pp3;
    sc_signal< sc_lv<63> > bound1_fu_1001_p10;
    sc_signal< sc_lv<63> > bound2_fu_1010_p00;
    sc_signal< bool > ap_condition_514;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<73> ap_ST_fsm_state1;
    static const sc_lv<73> ap_ST_fsm_state2;
    static const sc_lv<73> ap_ST_fsm_state3;
    static const sc_lv<73> ap_ST_fsm_state4;
    static const sc_lv<73> ap_ST_fsm_state5;
    static const sc_lv<73> ap_ST_fsm_state6;
    static const sc_lv<73> ap_ST_fsm_state7;
    static const sc_lv<73> ap_ST_fsm_state8;
    static const sc_lv<73> ap_ST_fsm_state9;
    static const sc_lv<73> ap_ST_fsm_state10;
    static const sc_lv<73> ap_ST_fsm_state11;
    static const sc_lv<73> ap_ST_fsm_state12;
    static const sc_lv<73> ap_ST_fsm_state13;
    static const sc_lv<73> ap_ST_fsm_state14;
    static const sc_lv<73> ap_ST_fsm_state15;
    static const sc_lv<73> ap_ST_fsm_state16;
    static const sc_lv<73> ap_ST_fsm_state17;
    static const sc_lv<73> ap_ST_fsm_state18;
    static const sc_lv<73> ap_ST_fsm_state19;
    static const sc_lv<73> ap_ST_fsm_state20;
    static const sc_lv<73> ap_ST_fsm_state21;
    static const sc_lv<73> ap_ST_fsm_state22;
    static const sc_lv<73> ap_ST_fsm_state23;
    static const sc_lv<73> ap_ST_fsm_state24;
    static const sc_lv<73> ap_ST_fsm_state25;
    static const sc_lv<73> ap_ST_fsm_state26;
    static const sc_lv<73> ap_ST_fsm_state27;
    static const sc_lv<73> ap_ST_fsm_state28;
    static const sc_lv<73> ap_ST_fsm_state29;
    static const sc_lv<73> ap_ST_fsm_state30;
    static const sc_lv<73> ap_ST_fsm_state31;
    static const sc_lv<73> ap_ST_fsm_state32;
    static const sc_lv<73> ap_ST_fsm_state33;
    static const sc_lv<73> ap_ST_fsm_state34;
    static const sc_lv<73> ap_ST_fsm_state35;
    static const sc_lv<73> ap_ST_fsm_state36;
    static const sc_lv<73> ap_ST_fsm_state37;
    static const sc_lv<73> ap_ST_fsm_state38;
    static const sc_lv<73> ap_ST_fsm_state39;
    static const sc_lv<73> ap_ST_fsm_state40;
    static const sc_lv<73> ap_ST_fsm_state41;
    static const sc_lv<73> ap_ST_fsm_state42;
    static const sc_lv<73> ap_ST_fsm_state43;
    static const sc_lv<73> ap_ST_fsm_state44;
    static const sc_lv<73> ap_ST_fsm_state45;
    static const sc_lv<73> ap_ST_fsm_state46;
    static const sc_lv<73> ap_ST_fsm_state47;
    static const sc_lv<73> ap_ST_fsm_state48;
    static const sc_lv<73> ap_ST_fsm_state49;
    static const sc_lv<73> ap_ST_fsm_state50;
    static const sc_lv<73> ap_ST_fsm_state51;
    static const sc_lv<73> ap_ST_fsm_state52;
    static const sc_lv<73> ap_ST_fsm_state53;
    static const sc_lv<73> ap_ST_fsm_state54;
    static const sc_lv<73> ap_ST_fsm_state55;
    static const sc_lv<73> ap_ST_fsm_state56;
    static const sc_lv<73> ap_ST_fsm_state57;
    static const sc_lv<73> ap_ST_fsm_state58;
    static const sc_lv<73> ap_ST_fsm_state59;
    static const sc_lv<73> ap_ST_fsm_state60;
    static const sc_lv<73> ap_ST_fsm_state61;
    static const sc_lv<73> ap_ST_fsm_state62;
    static const sc_lv<73> ap_ST_fsm_pp0_stage0;
    static const sc_lv<73> ap_ST_fsm_state65;
    static const sc_lv<73> ap_ST_fsm_state66;
    static const sc_lv<73> ap_ST_fsm_state67;
    static const sc_lv<73> ap_ST_fsm_pp1_stage0;
    static const sc_lv<73> ap_ST_fsm_pp1_stage1;
    static const sc_lv<73> ap_ST_fsm_state71;
    static const sc_lv<73> ap_ST_fsm_pp2_stage0;
    static const sc_lv<73> ap_ST_fsm_state74;
    static const sc_lv<73> ap_ST_fsm_pp3_stage0;
    static const sc_lv<73> ap_ST_fsm_state77;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_43;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<32> ap_const_lv32_47;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3C;
    static const sc_lv<32> ap_const_lv32_3D;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_41;
    static const sc_lv<32> ap_const_lv32_42;
    static const sc_lv<32> ap_const_lv32_44;
    static const sc_lv<32> ap_const_lv32_45;
    static const sc_lv<32> ap_const_lv32_46;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<32> ap_const_lv32_48;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<33> ap_const_lv33_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<64> ap_const_lv64_11;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<64> ap_const_lv64_12;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<64> ap_const_lv64_13;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<64> ap_const_lv64_14;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<64> ap_const_lv64_15;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<64> ap_const_lv64_16;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<64> ap_const_lv64_17;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<64> ap_const_lv64_18;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<64> ap_const_lv64_19;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<64> ap_const_lv64_1A;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<64> ap_const_lv64_1B;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<64> ap_const_lv64_1C;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<64> ap_const_lv64_1D;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<64> ap_const_lv64_1E;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<64> ap_const_lv64_1F;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<64> ap_const_lv64_20;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<64> ap_const_lv64_21;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<64> ap_const_lv64_22;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<64> ap_const_lv64_23;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<64> ap_const_lv64_24;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<64> ap_const_lv64_25;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<64> ap_const_lv64_26;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<64> ap_const_lv64_27;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<64> ap_const_lv64_28;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<64> ap_const_lv64_29;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<64> ap_const_lv64_2A;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<64> ap_const_lv64_2B;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<64> ap_const_lv64_2C;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<64> ap_const_lv64_2D;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<64> ap_const_lv64_2E;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<64> ap_const_lv64_2F;
    static const sc_lv<32> ap_const_lv32_3A;
    static const sc_lv<64> ap_const_lv64_30;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<64> ap_const_lv64_31;
    static const sc_lv<32> ap_const_lv32_FFF0BDC1;
    static const sc_lv<6> ap_const_lv6_32;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<56> ap_const_lv56_0;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<8> ap_const_lv8_3;
    static const sc_lv<63> ap_const_lv63_1;
    static const sc_lv<33> ap_const_lv33_1;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_3F;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_KER_bound_fu_1016_p2();
    void thread_acc_address0();
    void thread_acc_address1();
    void thread_acc_ce0();
    void thread_acc_ce1();
    void thread_acc_d1();
    void thread_acc_load_1_valIn_V_fu_1106_p3();
    void thread_acc_we1();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp1_stage1();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_pp3_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state42();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state44();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state48();
    void thread_ap_CS_fsm_state49();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state50();
    void thread_ap_CS_fsm_state51();
    void thread_ap_CS_fsm_state52();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state54();
    void thread_ap_CS_fsm_state55();
    void thread_ap_CS_fsm_state56();
    void thread_ap_CS_fsm_state57();
    void thread_ap_CS_fsm_state58();
    void thread_ap_CS_fsm_state59();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state60();
    void thread_ap_CS_fsm_state61();
    void thread_ap_CS_fsm_state62();
    void thread_ap_CS_fsm_state65();
    void thread_ap_CS_fsm_state66();
    void thread_ap_CS_fsm_state67();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state71();
    void thread_ap_CS_fsm_state74();
    void thread_ap_CS_fsm_state77();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp1_stage1();
    void thread_ap_block_pp1_stage1_11001();
    void thread_ap_block_pp1_stage1_subdone();
    void thread_ap_block_pp2_stage0();
    void thread_ap_block_pp2_stage0_11001();
    void thread_ap_block_pp2_stage0_subdone();
    void thread_ap_block_pp3_stage0();
    void thread_ap_block_pp3_stage0_01001();
    void thread_ap_block_pp3_stage0_11001();
    void thread_ap_block_pp3_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2();
    void thread_ap_block_state3();
    void thread_ap_block_state4();
    void thread_ap_block_state5();
    void thread_ap_block_state6();
    void thread_ap_block_state63_pp0_stage0_iter0();
    void thread_ap_block_state64_pp0_stage0_iter1();
    void thread_ap_block_state68_pp1_stage0_iter0();
    void thread_ap_block_state69_pp1_stage1_iter0();
    void thread_ap_block_state7();
    void thread_ap_block_state70_pp1_stage0_iter1();
    void thread_ap_block_state72_pp2_stage0_iter0();
    void thread_ap_block_state73_pp2_stage0_iter1();
    void thread_ap_block_state75_pp3_stage0_iter0();
    void thread_ap_block_state76_pp3_stage0_iter1();
    void thread_ap_block_state8();
    void thread_ap_condition_514();
    void thread_ap_condition_pp0_exit_iter0_state63();
    void thread_ap_condition_pp1_exit_iter0_state68();
    void thread_ap_condition_pp2_exit_iter0_state72();
    void thread_ap_condition_pp3_exit_iter0_state75();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_enable_pp2();
    void thread_ap_enable_pp3();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_idle_pp2();
    void thread_ap_idle_pp3();
    void thread_ap_phi_mux_ch_phi_fu_806_p4();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_795_p4();
    void thread_ap_phi_mux_outpix_phi_fu_839_p4();
    void thread_ap_ready();
    void thread_bound1_fu_1001_p0();
    void thread_bound1_fu_1001_p1();
    void thread_bound1_fu_1001_p10();
    void thread_bound1_fu_1001_p2();
    void thread_bound2_fu_1010_p0();
    void thread_bound2_fu_1010_p00();
    void thread_bound2_fu_1010_p1();
    void thread_bound2_fu_1010_p2();
    void thread_buf_address0();
    void thread_buf_address1();
    void thread_buf_ce0();
    void thread_buf_ce1();
    void thread_buf_d1();
    void thread_buf_we1();
    void thread_cast9_fu_993_p1();
    void thread_ch_1_fu_1095_p2();
    void thread_ch_2_fu_1124_p2();
    void thread_ch_mid2_fu_1083_p3();
    void thread_exitcond1_fu_1053_p2();
    void thread_exitcond2_fu_1194_p2();
    void thread_exitcond3_fu_1077_p2();
    void thread_exitcond_flatten1_fu_1031_p2();
    void thread_exitcond_flatten2_fu_1177_p2();
    void thread_exitcond_flatten8_fu_1042_p2();
    void thread_exitcond_flatten_fu_1066_p2();
    void thread_exitcond_fu_1020_p2();
    void thread_i_fu_1025_p2();
    void thread_in_V_V_blk_n();
    void thread_in_V_V_read();
    void thread_indvar_flatten_next1_fu_1036_p2();
    void thread_indvar_flatten_next2_fu_1182_p2();
    void thread_indvar_flatten_next7_fu_1047_p2();
    void thread_indvar_flatten_next_fu_1071_p2();
    void thread_internal_ap_ready();
    void thread_j_1_fu_888_p2();
    void thread_out_V_V_blk_n();
    void thread_out_V_V_din();
    void thread_out_V_V_write();
    void thread_outch_1_fu_1248_p2();
    void thread_outch_mid2_fu_1200_p3();
    void thread_outpix_1_fu_1188_p2();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp1_fu_955_p2();
    void thread_tmp2_fu_959_p2();
    void thread_tmp_11_fu_1130_p1();
    void thread_tmp_12_fu_1157_p2();
    void thread_tmp_13_fu_1163_p3();
    void thread_tmp_15_fu_1091_p1();
    void thread_tmp_16_fu_1100_p2();
    void thread_tmp_17_fu_918_p3();
    void thread_tmp_18_fu_927_p2();
    void thread_tmp_19_fu_932_p3();
    void thread_tmp_1_fu_882_p2();
    void thread_tmp_20_fu_941_p2();
    void thread_tmp_21_fu_946_p3();
    void thread_tmp_22_fu_977_p3();
    void thread_tmp_23_fu_985_p3();
    void thread_tmp_24_fu_1216_p1();
    void thread_tmp_25_fu_1225_p1();
    void thread_tmp_26_fu_1237_p2();
    void thread_tmp_27_cast_fu_1229_p3();
    void thread_tmp_27_fu_1115_p1();
    void thread_tmp_28_cast_fu_1243_p1();
    void thread_tmp_28_fu_1135_p3();
    void thread_tmp_29_fu_1147_p2();
    void thread_tmp_2_fu_894_p3();
    void thread_tmp_30_cast_fu_1143_p1();
    void thread_tmp_31_cast_fu_1152_p1();
    void thread_tmp_3_fu_967_p4();
    void thread_tmp_4_fu_902_p1();
    void thread_tmp_4_mid2_v_fu_1208_p3();
    void thread_tmp_5_fu_907_p2();
    void thread_tmp_6_fu_1220_p1();
    void thread_tmp_7_fu_913_p2();
    void thread_tmp_8_fu_1118_p2();
    void thread_tmp_s_fu_861_p2();
    void thread_xp_1_fu_1172_p2();
    void thread_xp_mid2_fu_1058_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif