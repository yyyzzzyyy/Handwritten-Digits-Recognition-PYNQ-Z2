// ==============================================================
// File generated on Sat Aug 01 10:34:31 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_urem_9ns_7nc5D__HH__
#define __lenet_urem_9ns_7nc5D__HH__
#include "ACMP_urem.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(lenet_urem_9ns_7nc5D) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_urem<ID, 13, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_urem_U;

    SC_CTOR(lenet_urem_9ns_7nc5D):  ACMP_urem_U ("ACMP_urem_U") {
        ACMP_urem_U.clk(clk);
        ACMP_urem_U.reset(reset);
        ACMP_urem_U.ce(ce);
        ACMP_urem_U.din0(din0);
        ACMP_urem_U.din1(din1);
        ACMP_urem_U.dout(dout);

    }

};

#endif //
