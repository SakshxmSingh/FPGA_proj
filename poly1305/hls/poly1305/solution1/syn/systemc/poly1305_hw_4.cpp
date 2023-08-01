#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_accSum_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state449.read())) {
        accSum_address0 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read())) {
        accSum_address0 =  (sc_lv<5>) (ap_const_lv64_E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state447.read())) {
        accSum_address0 =  (sc_lv<5>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read())) {
        accSum_address0 =  (sc_lv<5>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read())) {
        accSum_address0 =  (sc_lv<5>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state444.read())) {
        accSum_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state443.read())) {
        accSum_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read())) {
        accSum_address0 =  (sc_lv<5>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        accSum_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        accSum_address0 =  (sc_lv<5>) (zext_ln638_reg_108829.read());
    } else {
        accSum_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_accSum_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state449.read())) {
        accSum_address1 =  (sc_lv<5>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read())) {
        accSum_address1 =  (sc_lv<5>) (ap_const_lv64_D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state447.read())) {
        accSum_address1 =  (sc_lv<5>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read())) {
        accSum_address1 =  (sc_lv<5>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read())) {
        accSum_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state444.read())) {
        accSum_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state443.read())) {
        accSum_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read())) {
        accSum_address1 =  (sc_lv<5>) (ap_const_lv64_2);
    } else {
        accSum_address1 = "XXXXX";
    }
}

void poly1305_hw::thread_accSum_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state443.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state444.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state447.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state449.read()))) {
        accSum_ce0 = ap_const_logic_1;
    } else {
        accSum_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_accSum_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state443.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state444.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state447.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state449.read()))) {
        accSum_ce1 = ap_const_logic_1;
    } else {
        accSum_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_accSum_d0() {
    accSum_d0 = (!add_ln645_1_fu_56133_p2.read().is_01() || !textBlock_q0.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln645_1_fu_56133_p2.read()) + sc_biguint<8>(textBlock_q0.read()));
}

void poly1305_hw::thread_accSum_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        accSum_we0 = ap_const_logic_1;
    } else {
        accSum_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_acc_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read())) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln854_reg_110432.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_F);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state525.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_D);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_B);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_E);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_C);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_A);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state939.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state938.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state519.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_1);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state935.read()))) {
        acc_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln55_fu_27505_p1.read());
    } else {
        acc_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_acc_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state944.read())) {
        acc_address1 =  (sc_lv<5>) (zext_ln867_fu_87714_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state935.read())) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read())) {
        acc_address1 =  (sc_lv<5>) (zext_ln638_fu_56061_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state525.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_E);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_C);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_A);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_F);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_D);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_B);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state939.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state938.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state519.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()))) {
        acc_address1 =  (sc_lv<5>) (ap_const_lv64_2);
    } else {
        acc_address1 = "XXXXX";
    }
}

void poly1305_hw::thread_acc_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state519.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state525.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state935.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state938.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state939.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()))) {
        acc_ce0 = ap_const_logic_1;
    } else {
        acc_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_acc_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state519.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state525.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state944.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state935.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state938.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state939.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()))) {
        acc_ce1 = ap_const_logic_1;
    } else {
        acc_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_acc_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read())) {
        acc_d0 = trunc_ln326_16_fu_87697_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read())) {
        acc_d0 = trunc_ln326_14_fu_87687_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read())) {
        acc_d0 = trunc_ln326_12_fu_87677_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read())) {
        acc_d0 = trunc_ln326_10_fu_87667_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state939.read())) {
        acc_d0 = trunc_ln326_8_fu_87657_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state938.read())) {
        acc_d0 = trunc_ln326_6_fu_87647_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read())) {
        acc_d0 = trunc_ln326_4_fu_87637_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read())) {
        acc_d0 = trunc_ln326_2_fu_87627_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state935.read())) {
        acc_d0 = trunc_ln326_fu_87617_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read())) {
        acc_d0 = trunc_ln854_fu_61313_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read())) {
        acc_d0 = trunc_ln609_15_fu_54043_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read())) {
        acc_d0 = trunc_ln609_13_fu_54033_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read())) {
        acc_d0 = trunc_ln609_11_fu_54023_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read())) {
        acc_d0 = trunc_ln609_9_fu_54013_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read())) {
        acc_d0 = trunc_ln609_7_fu_54003_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read())) {
        acc_d0 = trunc_ln609_5_fu_53993_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read())) {
        acc_d0 = trunc_ln609_3_fu_53983_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read())) {
        acc_d0 = trunc_ln609_1_fu_53973_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        acc_d0 = ap_const_lv8_0;
    } else {
        acc_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_acc_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read())) {
        acc_d1 = trunc_ln326_15_fu_87692_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read())) {
        acc_d1 = trunc_ln326_13_fu_87682_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read())) {
        acc_d1 = trunc_ln326_11_fu_87672_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state939.read())) {
        acc_d1 = trunc_ln326_9_fu_87662_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state938.read())) {
        acc_d1 = trunc_ln326_7_fu_87652_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read())) {
        acc_d1 = trunc_ln326_5_fu_87642_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read())) {
        acc_d1 = trunc_ln326_3_fu_87632_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state935.read())) {
        acc_d1 = trunc_ln326_1_fu_87622_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        acc_d1 = trunc_ln609_16_fu_54048_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read())) {
        acc_d1 = trunc_ln609_14_fu_54038_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read())) {
        acc_d1 = trunc_ln609_12_fu_54028_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read())) {
        acc_d1 = trunc_ln609_10_fu_54018_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read())) {
        acc_d1 = trunc_ln609_8_fu_54008_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read())) {
        acc_d1 = trunc_ln609_6_fu_53998_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read())) {
        acc_d1 = trunc_ln609_4_fu_53988_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read())) {
        acc_d1 = trunc_ln609_2_fu_53978_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read())) {
        acc_d1 = trunc_ln609_fu_53968_p1.read();
    } else {
        acc_d1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_acc_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state935.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state938.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state939.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()))) {
        acc_we0 = ap_const_logic_1;
    } else {
        acc_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_acc_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state935.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state938.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state939.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()))) {
        acc_we1 = ap_const_logic_1;
    } else {
        acc_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_add_ln109_100_fu_68560_p2() {
    add_ln109_100_fu_68560_p2 = (!zext_ln109_100_fu_68538_p1.read().is_01() || !add_ln109_99_fu_68554_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_100_fu_68538_p1.read()) + sc_biguint<9>(add_ln109_99_fu_68554_p2.read()));
}

void poly1305_hw::thread_add_ln109_101_fu_68625_p2() {
    add_ln109_101_fu_68625_p2 = (!zext_ln109_103_fu_68615_p1.read().is_01() || !select_ln109_50_fu_68618_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_103_fu_68615_p1.read()) + sc_biguint<9>(select_ln109_50_fu_68618_p3.read()));
}

void poly1305_hw::thread_add_ln109_102_fu_68631_p2() {
    add_ln109_102_fu_68631_p2 = (!zext_ln109_102_fu_68612_p1.read().is_01() || !add_ln109_101_fu_68625_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_102_fu_68612_p1.read()) + sc_biguint<9>(add_ln109_101_fu_68625_p2.read()));
}

void poly1305_hw::thread_add_ln109_103_fu_68707_p2() {
    add_ln109_103_fu_68707_p2 = (!zext_ln109_105_fu_68697_p1.read().is_01() || !select_ln109_51_fu_68700_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_105_fu_68697_p1.read()) + sc_biguint<9>(select_ln109_51_fu_68700_p3.read()));
}

void poly1305_hw::thread_add_ln109_104_fu_68713_p2() {
    add_ln109_104_fu_68713_p2 = (!zext_ln109_104_fu_68694_p1.read().is_01() || !add_ln109_103_fu_68707_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_104_fu_68694_p1.read()) + sc_biguint<9>(add_ln109_103_fu_68707_p2.read()));
}

void poly1305_hw::thread_add_ln109_105_fu_68791_p2() {
    add_ln109_105_fu_68791_p2 = (!zext_ln109_107_fu_68780_p1.read().is_01() || !select_ln109_52_fu_68783_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_107_fu_68780_p1.read()) + sc_biguint<9>(select_ln109_52_fu_68783_p3.read()));
}

void poly1305_hw::thread_add_ln109_106_fu_68797_p2() {
    add_ln109_106_fu_68797_p2 = (!zext_ln109_106_fu_68776_p1.read().is_01() || !add_ln109_105_fu_68791_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_106_fu_68776_p1.read()) + sc_biguint<9>(add_ln109_105_fu_68791_p2.read()));
}

void poly1305_hw::thread_add_ln109_107_fu_68854_p2() {
    add_ln109_107_fu_68854_p2 = (!zext_ln109_109_fu_68844_p1.read().is_01() || !select_ln109_53_fu_68847_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_109_fu_68844_p1.read()) + sc_biguint<9>(select_ln109_53_fu_68847_p3.read()));
}

void poly1305_hw::thread_add_ln109_108_fu_68860_p2() {
    add_ln109_108_fu_68860_p2 = (!zext_ln109_108_fu_68841_p1.read().is_01() || !add_ln109_107_fu_68854_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_108_fu_68841_p1.read()) + sc_biguint<9>(add_ln109_107_fu_68854_p2.read()));
}

void poly1305_hw::thread_add_ln109_109_fu_68936_p2() {
    add_ln109_109_fu_68936_p2 = (!zext_ln109_111_fu_68926_p1.read().is_01() || !select_ln109_54_fu_68929_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_111_fu_68926_p1.read()) + sc_biguint<9>(select_ln109_54_fu_68929_p3.read()));
}

void poly1305_hw::thread_add_ln109_10_fu_65131_p2() {
    add_ln109_10_fu_65131_p2 = (!zext_ln109_10_fu_65110_p1.read().is_01() || !add_ln109_9_fu_65125_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_10_fu_65110_p1.read()) + sc_biguint<9>(add_ln109_9_fu_65125_p2.read()));
}

void poly1305_hw::thread_add_ln109_110_fu_68942_p2() {
    add_ln109_110_fu_68942_p2 = (!zext_ln109_110_fu_68923_p1.read().is_01() || !add_ln109_109_fu_68936_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_110_fu_68923_p1.read()) + sc_biguint<9>(add_ln109_109_fu_68936_p2.read()));
}

void poly1305_hw::thread_add_ln109_111_fu_69020_p2() {
    add_ln109_111_fu_69020_p2 = (!zext_ln109_113_fu_69009_p1.read().is_01() || !select_ln109_55_fu_69012_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_113_fu_69009_p1.read()) + sc_biguint<9>(select_ln109_55_fu_69012_p3.read()));
}

void poly1305_hw::thread_add_ln109_112_fu_69026_p2() {
    add_ln109_112_fu_69026_p2 = (!zext_ln109_112_fu_69005_p1.read().is_01() || !add_ln109_111_fu_69020_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_112_fu_69005_p1.read()) + sc_biguint<9>(add_ln109_111_fu_69020_p2.read()));
}

void poly1305_hw::thread_add_ln109_113_fu_69083_p2() {
    add_ln109_113_fu_69083_p2 = (!zext_ln109_115_fu_69073_p1.read().is_01() || !select_ln109_56_fu_69076_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_115_fu_69073_p1.read()) + sc_biguint<9>(select_ln109_56_fu_69076_p3.read()));
}

void poly1305_hw::thread_add_ln109_114_fu_69089_p2() {
    add_ln109_114_fu_69089_p2 = (!zext_ln109_114_fu_69070_p1.read().is_01() || !add_ln109_113_fu_69083_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_114_fu_69070_p1.read()) + sc_biguint<9>(add_ln109_113_fu_69083_p2.read()));
}

void poly1305_hw::thread_add_ln109_115_fu_69165_p2() {
    add_ln109_115_fu_69165_p2 = (!zext_ln109_117_fu_69155_p1.read().is_01() || !select_ln109_57_fu_69158_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_117_fu_69155_p1.read()) + sc_biguint<9>(select_ln109_57_fu_69158_p3.read()));
}

void poly1305_hw::thread_add_ln109_116_fu_69171_p2() {
    add_ln109_116_fu_69171_p2 = (!zext_ln109_116_fu_69152_p1.read().is_01() || !add_ln109_115_fu_69165_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_116_fu_69152_p1.read()) + sc_biguint<9>(add_ln109_115_fu_69165_p2.read()));
}

void poly1305_hw::thread_add_ln109_117_fu_69249_p2() {
    add_ln109_117_fu_69249_p2 = (!zext_ln109_119_fu_69238_p1.read().is_01() || !select_ln109_58_fu_69241_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_119_fu_69238_p1.read()) + sc_biguint<9>(select_ln109_58_fu_69241_p3.read()));
}

void poly1305_hw::thread_add_ln109_118_fu_69255_p2() {
    add_ln109_118_fu_69255_p2 = (!zext_ln109_118_fu_69234_p1.read().is_01() || !add_ln109_117_fu_69249_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_118_fu_69234_p1.read()) + sc_biguint<9>(add_ln109_117_fu_69249_p2.read()));
}

void poly1305_hw::thread_add_ln109_119_fu_69312_p2() {
    add_ln109_119_fu_69312_p2 = (!zext_ln109_121_fu_69302_p1.read().is_01() || !select_ln109_59_fu_69305_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_121_fu_69302_p1.read()) + sc_biguint<9>(select_ln109_59_fu_69305_p3.read()));
}

void poly1305_hw::thread_add_ln109_11_fu_65188_p2() {
    add_ln109_11_fu_65188_p2 = (!zext_ln109_13_fu_65178_p1.read().is_01() || !select_ln109_5_fu_65181_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_13_fu_65178_p1.read()) + sc_biguint<9>(select_ln109_5_fu_65181_p3.read()));
}

void poly1305_hw::thread_add_ln109_120_fu_69318_p2() {
    add_ln109_120_fu_69318_p2 = (!zext_ln109_120_fu_69299_p1.read().is_01() || !add_ln109_119_fu_69312_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_120_fu_69299_p1.read()) + sc_biguint<9>(add_ln109_119_fu_69312_p2.read()));
}

void poly1305_hw::thread_add_ln109_121_fu_69394_p2() {
    add_ln109_121_fu_69394_p2 = (!zext_ln109_123_fu_69384_p1.read().is_01() || !select_ln109_60_fu_69387_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_123_fu_69384_p1.read()) + sc_biguint<9>(select_ln109_60_fu_69387_p3.read()));
}

void poly1305_hw::thread_add_ln109_122_fu_69400_p2() {
    add_ln109_122_fu_69400_p2 = (!zext_ln109_122_fu_69381_p1.read().is_01() || !add_ln109_121_fu_69394_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_122_fu_69381_p1.read()) + sc_biguint<9>(add_ln109_121_fu_69394_p2.read()));
}

void poly1305_hw::thread_add_ln109_123_fu_69478_p2() {
    add_ln109_123_fu_69478_p2 = (!zext_ln109_125_fu_69467_p1.read().is_01() || !select_ln109_61_fu_69470_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_125_fu_69467_p1.read()) + sc_biguint<9>(select_ln109_61_fu_69470_p3.read()));
}

void poly1305_hw::thread_add_ln109_124_fu_69484_p2() {
    add_ln109_124_fu_69484_p2 = (!zext_ln109_124_fu_69463_p1.read().is_01() || !add_ln109_123_fu_69478_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_124_fu_69463_p1.read()) + sc_biguint<9>(add_ln109_123_fu_69478_p2.read()));
}

void poly1305_hw::thread_add_ln109_125_fu_69541_p2() {
    add_ln109_125_fu_69541_p2 = (!zext_ln109_127_fu_69531_p1.read().is_01() || !select_ln109_62_fu_69534_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_127_fu_69531_p1.read()) + sc_biguint<9>(select_ln109_62_fu_69534_p3.read()));
}

void poly1305_hw::thread_add_ln109_126_fu_69547_p2() {
    add_ln109_126_fu_69547_p2 = (!zext_ln109_126_fu_69528_p1.read().is_01() || !add_ln109_125_fu_69541_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_126_fu_69528_p1.read()) + sc_biguint<9>(add_ln109_125_fu_69541_p2.read()));
}

void poly1305_hw::thread_add_ln109_127_fu_69623_p2() {
    add_ln109_127_fu_69623_p2 = (!zext_ln109_129_fu_69613_p1.read().is_01() || !select_ln109_63_fu_69616_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_129_fu_69613_p1.read()) + sc_biguint<9>(select_ln109_63_fu_69616_p3.read()));
}

void poly1305_hw::thread_add_ln109_128_fu_69629_p2() {
    add_ln109_128_fu_69629_p2 = (!zext_ln109_128_fu_69610_p1.read().is_01() || !add_ln109_127_fu_69623_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_128_fu_69610_p1.read()) + sc_biguint<9>(add_ln109_127_fu_69623_p2.read()));
}

void poly1305_hw::thread_add_ln109_129_fu_69707_p2() {
    add_ln109_129_fu_69707_p2 = (!zext_ln109_131_fu_69696_p1.read().is_01() || !select_ln109_64_fu_69699_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_131_fu_69696_p1.read()) + sc_biguint<9>(select_ln109_64_fu_69699_p3.read()));
}

void poly1305_hw::thread_add_ln109_12_fu_65194_p2() {
    add_ln109_12_fu_65194_p2 = (!zext_ln109_12_fu_65175_p1.read().is_01() || !add_ln109_11_fu_65188_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_12_fu_65175_p1.read()) + sc_biguint<9>(add_ln109_11_fu_65188_p2.read()));
}

void poly1305_hw::thread_add_ln109_130_fu_69713_p2() {
    add_ln109_130_fu_69713_p2 = (!zext_ln109_130_fu_69692_p1.read().is_01() || !add_ln109_129_fu_69707_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_130_fu_69692_p1.read()) + sc_biguint<9>(add_ln109_129_fu_69707_p2.read()));
}

void poly1305_hw::thread_add_ln109_131_fu_69770_p2() {
    add_ln109_131_fu_69770_p2 = (!zext_ln109_133_fu_69760_p1.read().is_01() || !select_ln109_65_fu_69763_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_133_fu_69760_p1.read()) + sc_biguint<9>(select_ln109_65_fu_69763_p3.read()));
}

void poly1305_hw::thread_add_ln109_132_fu_69776_p2() {
    add_ln109_132_fu_69776_p2 = (!zext_ln109_132_fu_69757_p1.read().is_01() || !add_ln109_131_fu_69770_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_132_fu_69757_p1.read()) + sc_biguint<9>(add_ln109_131_fu_69770_p2.read()));
}

void poly1305_hw::thread_add_ln109_133_fu_69851_p2() {
    add_ln109_133_fu_69851_p2 = (!mul_20_reg_13543.read().is_01() || !select_ln109_66_fu_69843_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(mul_20_reg_13543.read()) + sc_biguint<4>(select_ln109_66_fu_69843_p3.read()));
}

void poly1305_hw::thread_add_ln109_134_fu_69861_p2() {
    add_ln109_134_fu_69861_p2 = (!zext_ln109_134_fu_69839_p1.read().is_01() || !zext_ln109_135_fu_69857_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_134_fu_69839_p1.read()) + sc_biguint<9>(zext_ln109_135_fu_69857_p1.read()));
}

void poly1305_hw::thread_add_ln109_135_fu_69921_p2() {
    add_ln109_135_fu_69921_p2 = (!zext_ln109_137_fu_69911_p1.read().is_01() || !select_ln109_67_fu_69914_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_137_fu_69911_p1.read()) + sc_biguint<9>(select_ln109_67_fu_69914_p3.read()));
}

void poly1305_hw::thread_add_ln109_136_fu_69927_p2() {
    add_ln109_136_fu_69927_p2 = (!zext_ln109_136_fu_69908_p1.read().is_01() || !add_ln109_135_fu_69921_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_136_fu_69908_p1.read()) + sc_biguint<9>(add_ln109_135_fu_69921_p2.read()));
}

void poly1305_hw::thread_add_ln109_137_fu_70003_p2() {
    add_ln109_137_fu_70003_p2 = (!zext_ln109_139_fu_69993_p1.read().is_01() || !select_ln109_68_fu_69996_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_139_fu_69993_p1.read()) + sc_biguint<9>(select_ln109_68_fu_69996_p3.read()));
}

void poly1305_hw::thread_add_ln109_138_fu_70009_p2() {
    add_ln109_138_fu_70009_p2 = (!zext_ln109_138_fu_69990_p1.read().is_01() || !add_ln109_137_fu_70003_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_138_fu_69990_p1.read()) + sc_biguint<9>(add_ln109_137_fu_70003_p2.read()));
}

void poly1305_hw::thread_add_ln109_139_fu_70087_p2() {
    add_ln109_139_fu_70087_p2 = (!zext_ln109_141_fu_70076_p1.read().is_01() || !select_ln109_69_fu_70079_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_141_fu_70076_p1.read()) + sc_biguint<9>(select_ln109_69_fu_70079_p3.read()));
}

void poly1305_hw::thread_add_ln109_13_fu_65270_p2() {
    add_ln109_13_fu_65270_p2 = (!zext_ln109_15_fu_65260_p1.read().is_01() || !select_ln109_6_fu_65263_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_15_fu_65260_p1.read()) + sc_biguint<9>(select_ln109_6_fu_65263_p3.read()));
}

void poly1305_hw::thread_add_ln109_140_fu_70093_p2() {
    add_ln109_140_fu_70093_p2 = (!zext_ln109_140_fu_70072_p1.read().is_01() || !add_ln109_139_fu_70087_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_140_fu_70072_p1.read()) + sc_biguint<9>(add_ln109_139_fu_70087_p2.read()));
}

void poly1305_hw::thread_add_ln109_141_fu_70150_p2() {
    add_ln109_141_fu_70150_p2 = (!zext_ln109_143_fu_70140_p1.read().is_01() || !select_ln109_70_fu_70143_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_143_fu_70140_p1.read()) + sc_biguint<9>(select_ln109_70_fu_70143_p3.read()));
}

void poly1305_hw::thread_add_ln109_142_fu_70156_p2() {
    add_ln109_142_fu_70156_p2 = (!zext_ln109_142_fu_70137_p1.read().is_01() || !add_ln109_141_fu_70150_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_142_fu_70137_p1.read()) + sc_biguint<9>(add_ln109_141_fu_70150_p2.read()));
}

void poly1305_hw::thread_add_ln109_143_fu_70232_p2() {
    add_ln109_143_fu_70232_p2 = (!zext_ln109_145_fu_70222_p1.read().is_01() || !select_ln109_71_fu_70225_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_145_fu_70222_p1.read()) + sc_biguint<9>(select_ln109_71_fu_70225_p3.read()));
}

void poly1305_hw::thread_add_ln109_144_fu_70238_p2() {
    add_ln109_144_fu_70238_p2 = (!zext_ln109_144_fu_70219_p1.read().is_01() || !add_ln109_143_fu_70232_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_144_fu_70219_p1.read()) + sc_biguint<9>(add_ln109_143_fu_70232_p2.read()));
}

void poly1305_hw::thread_add_ln109_145_fu_70316_p2() {
    add_ln109_145_fu_70316_p2 = (!zext_ln109_147_fu_70305_p1.read().is_01() || !select_ln109_72_fu_70308_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_147_fu_70305_p1.read()) + sc_biguint<9>(select_ln109_72_fu_70308_p3.read()));
}

void poly1305_hw::thread_add_ln109_146_fu_70322_p2() {
    add_ln109_146_fu_70322_p2 = (!zext_ln109_146_fu_70301_p1.read().is_01() || !add_ln109_145_fu_70316_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_146_fu_70301_p1.read()) + sc_biguint<9>(add_ln109_145_fu_70316_p2.read()));
}

void poly1305_hw::thread_add_ln109_147_fu_70379_p2() {
    add_ln109_147_fu_70379_p2 = (!zext_ln109_149_fu_70369_p1.read().is_01() || !select_ln109_73_fu_70372_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_149_fu_70369_p1.read()) + sc_biguint<9>(select_ln109_73_fu_70372_p3.read()));
}

void poly1305_hw::thread_add_ln109_148_fu_70385_p2() {
    add_ln109_148_fu_70385_p2 = (!zext_ln109_148_fu_70366_p1.read().is_01() || !add_ln109_147_fu_70379_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_148_fu_70366_p1.read()) + sc_biguint<9>(add_ln109_147_fu_70379_p2.read()));
}

void poly1305_hw::thread_add_ln109_149_fu_70461_p2() {
    add_ln109_149_fu_70461_p2 = (!zext_ln109_151_fu_70451_p1.read().is_01() || !select_ln109_74_fu_70454_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_151_fu_70451_p1.read()) + sc_biguint<9>(select_ln109_74_fu_70454_p3.read()));
}

void poly1305_hw::thread_add_ln109_14_fu_65276_p2() {
    add_ln109_14_fu_65276_p2 = (!zext_ln109_14_fu_65257_p1.read().is_01() || !add_ln109_13_fu_65270_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_14_fu_65257_p1.read()) + sc_biguint<9>(add_ln109_13_fu_65270_p2.read()));
}

void poly1305_hw::thread_add_ln109_150_fu_70467_p2() {
    add_ln109_150_fu_70467_p2 = (!zext_ln109_150_fu_70448_p1.read().is_01() || !add_ln109_149_fu_70461_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_150_fu_70448_p1.read()) + sc_biguint<9>(add_ln109_149_fu_70461_p2.read()));
}

void poly1305_hw::thread_add_ln109_151_fu_70545_p2() {
    add_ln109_151_fu_70545_p2 = (!zext_ln109_153_fu_70534_p1.read().is_01() || !select_ln109_75_fu_70537_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_153_fu_70534_p1.read()) + sc_biguint<9>(select_ln109_75_fu_70537_p3.read()));
}

void poly1305_hw::thread_add_ln109_152_fu_70551_p2() {
    add_ln109_152_fu_70551_p2 = (!zext_ln109_152_fu_70530_p1.read().is_01() || !add_ln109_151_fu_70545_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_152_fu_70530_p1.read()) + sc_biguint<9>(add_ln109_151_fu_70545_p2.read()));
}

void poly1305_hw::thread_add_ln109_153_fu_70608_p2() {
    add_ln109_153_fu_70608_p2 = (!zext_ln109_155_fu_70598_p1.read().is_01() || !select_ln109_76_fu_70601_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_155_fu_70598_p1.read()) + sc_biguint<9>(select_ln109_76_fu_70601_p3.read()));
}

void poly1305_hw::thread_add_ln109_154_fu_70614_p2() {
    add_ln109_154_fu_70614_p2 = (!zext_ln109_154_fu_70595_p1.read().is_01() || !add_ln109_153_fu_70608_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_154_fu_70595_p1.read()) + sc_biguint<9>(add_ln109_153_fu_70608_p2.read()));
}

void poly1305_hw::thread_add_ln109_155_fu_70690_p2() {
    add_ln109_155_fu_70690_p2 = (!zext_ln109_157_fu_70680_p1.read().is_01() || !select_ln109_77_fu_70683_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_157_fu_70680_p1.read()) + sc_biguint<9>(select_ln109_77_fu_70683_p3.read()));
}

void poly1305_hw::thread_add_ln109_156_fu_70696_p2() {
    add_ln109_156_fu_70696_p2 = (!zext_ln109_156_fu_70677_p1.read().is_01() || !add_ln109_155_fu_70690_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_156_fu_70677_p1.read()) + sc_biguint<9>(add_ln109_155_fu_70690_p2.read()));
}

void poly1305_hw::thread_add_ln109_157_fu_70774_p2() {
    add_ln109_157_fu_70774_p2 = (!zext_ln109_159_fu_70763_p1.read().is_01() || !select_ln109_78_fu_70766_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_159_fu_70763_p1.read()) + sc_biguint<9>(select_ln109_78_fu_70766_p3.read()));
}

void poly1305_hw::thread_add_ln109_158_fu_70780_p2() {
    add_ln109_158_fu_70780_p2 = (!zext_ln109_158_fu_70759_p1.read().is_01() || !add_ln109_157_fu_70774_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_158_fu_70759_p1.read()) + sc_biguint<9>(add_ln109_157_fu_70774_p2.read()));
}

void poly1305_hw::thread_add_ln109_159_fu_70837_p2() {
    add_ln109_159_fu_70837_p2 = (!zext_ln109_161_fu_70827_p1.read().is_01() || !select_ln109_79_fu_70830_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_161_fu_70827_p1.read()) + sc_biguint<9>(select_ln109_79_fu_70830_p3.read()));
}

void poly1305_hw::thread_add_ln109_15_fu_65354_p2() {
    add_ln109_15_fu_65354_p2 = (!zext_ln109_17_fu_65343_p1.read().is_01() || !select_ln109_7_fu_65346_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_17_fu_65343_p1.read()) + sc_biguint<9>(select_ln109_7_fu_65346_p3.read()));
}

void poly1305_hw::thread_add_ln109_160_fu_70843_p2() {
    add_ln109_160_fu_70843_p2 = (!zext_ln109_160_fu_70824_p1.read().is_01() || !add_ln109_159_fu_70837_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_160_fu_70824_p1.read()) + sc_biguint<9>(add_ln109_159_fu_70837_p2.read()));
}

void poly1305_hw::thread_add_ln109_161_fu_70919_p2() {
    add_ln109_161_fu_70919_p2 = (!zext_ln109_163_fu_70909_p1.read().is_01() || !select_ln109_80_fu_70912_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_163_fu_70909_p1.read()) + sc_biguint<9>(select_ln109_80_fu_70912_p3.read()));
}

void poly1305_hw::thread_add_ln109_162_fu_70925_p2() {
    add_ln109_162_fu_70925_p2 = (!zext_ln109_162_fu_70906_p1.read().is_01() || !add_ln109_161_fu_70919_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_162_fu_70906_p1.read()) + sc_biguint<9>(add_ln109_161_fu_70919_p2.read()));
}

void poly1305_hw::thread_add_ln109_163_fu_71003_p2() {
    add_ln109_163_fu_71003_p2 = (!zext_ln109_165_fu_70992_p1.read().is_01() || !select_ln109_81_fu_70995_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_165_fu_70992_p1.read()) + sc_biguint<9>(select_ln109_81_fu_70995_p3.read()));
}

void poly1305_hw::thread_add_ln109_164_fu_71009_p2() {
    add_ln109_164_fu_71009_p2 = (!zext_ln109_164_fu_70988_p1.read().is_01() || !add_ln109_163_fu_71003_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_164_fu_70988_p1.read()) + sc_biguint<9>(add_ln109_163_fu_71003_p2.read()));
}

void poly1305_hw::thread_add_ln109_165_fu_71066_p2() {
    add_ln109_165_fu_71066_p2 = (!zext_ln109_167_fu_71056_p1.read().is_01() || !select_ln109_82_fu_71059_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_167_fu_71056_p1.read()) + sc_biguint<9>(select_ln109_82_fu_71059_p3.read()));
}

void poly1305_hw::thread_add_ln109_166_fu_71072_p2() {
    add_ln109_166_fu_71072_p2 = (!zext_ln109_166_fu_71053_p1.read().is_01() || !add_ln109_165_fu_71066_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_166_fu_71053_p1.read()) + sc_biguint<9>(add_ln109_165_fu_71066_p2.read()));
}

void poly1305_hw::thread_add_ln109_167_fu_71151_p2() {
    add_ln109_167_fu_71151_p2 = (!zext_ln109_169_fu_71139_p1.read().is_01() || !select_ln109_83_fu_71143_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_169_fu_71139_p1.read()) + sc_biguint<9>(select_ln109_83_fu_71143_p3.read()));
}

void poly1305_hw::thread_add_ln109_168_fu_71157_p2() {
    add_ln109_168_fu_71157_p2 = (!zext_ln109_168_fu_71135_p1.read().is_01() || !add_ln109_167_fu_71151_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_168_fu_71135_p1.read()) + sc_biguint<9>(add_ln109_167_fu_71151_p2.read()));
}

void poly1305_hw::thread_add_ln109_169_fu_71218_p2() {
    add_ln109_169_fu_71218_p2 = (!zext_ln109_171_fu_71208_p1.read().is_01() || !select_ln109_84_fu_71211_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_171_fu_71208_p1.read()) + sc_biguint<9>(select_ln109_84_fu_71211_p3.read()));
}

void poly1305_hw::thread_add_ln109_16_fu_65360_p2() {
    add_ln109_16_fu_65360_p2 = (!zext_ln109_16_fu_65339_p1.read().is_01() || !add_ln109_15_fu_65354_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_16_fu_65339_p1.read()) + sc_biguint<9>(add_ln109_15_fu_65354_p2.read()));
}

void poly1305_hw::thread_add_ln109_170_fu_71224_p2() {
    add_ln109_170_fu_71224_p2 = (!zext_ln109_170_fu_71205_p1.read().is_01() || !add_ln109_169_fu_71218_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_170_fu_71205_p1.read()) + sc_biguint<9>(add_ln109_169_fu_71218_p2.read()));
}

void poly1305_hw::thread_add_ln109_171_fu_71300_p2() {
    add_ln109_171_fu_71300_p2 = (!zext_ln109_173_fu_71290_p1.read().is_01() || !select_ln109_85_fu_71293_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_173_fu_71290_p1.read()) + sc_biguint<9>(select_ln109_85_fu_71293_p3.read()));
}

void poly1305_hw::thread_add_ln109_172_fu_71306_p2() {
    add_ln109_172_fu_71306_p2 = (!zext_ln109_172_fu_71287_p1.read().is_01() || !add_ln109_171_fu_71300_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_172_fu_71287_p1.read()) + sc_biguint<9>(add_ln109_171_fu_71300_p2.read()));
}

void poly1305_hw::thread_add_ln109_173_fu_71384_p2() {
    add_ln109_173_fu_71384_p2 = (!zext_ln109_175_fu_71373_p1.read().is_01() || !select_ln109_86_fu_71376_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_175_fu_71373_p1.read()) + sc_biguint<9>(select_ln109_86_fu_71376_p3.read()));
}

void poly1305_hw::thread_add_ln109_174_fu_71390_p2() {
    add_ln109_174_fu_71390_p2 = (!zext_ln109_174_fu_71369_p1.read().is_01() || !add_ln109_173_fu_71384_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_174_fu_71369_p1.read()) + sc_biguint<9>(add_ln109_173_fu_71384_p2.read()));
}

void poly1305_hw::thread_add_ln109_175_fu_71447_p2() {
    add_ln109_175_fu_71447_p2 = (!zext_ln109_177_fu_71437_p1.read().is_01() || !select_ln109_87_fu_71440_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_177_fu_71437_p1.read()) + sc_biguint<9>(select_ln109_87_fu_71440_p3.read()));
}

void poly1305_hw::thread_add_ln109_176_fu_71453_p2() {
    add_ln109_176_fu_71453_p2 = (!zext_ln109_176_fu_71434_p1.read().is_01() || !add_ln109_175_fu_71447_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_176_fu_71434_p1.read()) + sc_biguint<9>(add_ln109_175_fu_71447_p2.read()));
}

void poly1305_hw::thread_add_ln109_177_fu_71529_p2() {
    add_ln109_177_fu_71529_p2 = (!zext_ln109_179_fu_71519_p1.read().is_01() || !select_ln109_88_fu_71522_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_179_fu_71519_p1.read()) + sc_biguint<9>(select_ln109_88_fu_71522_p3.read()));
}

void poly1305_hw::thread_add_ln109_178_fu_71535_p2() {
    add_ln109_178_fu_71535_p2 = (!zext_ln109_178_fu_71516_p1.read().is_01() || !add_ln109_177_fu_71529_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_178_fu_71516_p1.read()) + sc_biguint<9>(add_ln109_177_fu_71529_p2.read()));
}

void poly1305_hw::thread_add_ln109_179_fu_71613_p2() {
    add_ln109_179_fu_71613_p2 = (!zext_ln109_181_fu_71602_p1.read().is_01() || !select_ln109_89_fu_71605_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_181_fu_71602_p1.read()) + sc_biguint<9>(select_ln109_89_fu_71605_p3.read()));
}

void poly1305_hw::thread_add_ln109_17_fu_65417_p2() {
    add_ln109_17_fu_65417_p2 = (!zext_ln109_19_fu_65407_p1.read().is_01() || !select_ln109_8_fu_65410_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_19_fu_65407_p1.read()) + sc_biguint<9>(select_ln109_8_fu_65410_p3.read()));
}

void poly1305_hw::thread_add_ln109_180_fu_71619_p2() {
    add_ln109_180_fu_71619_p2 = (!zext_ln109_180_fu_71598_p1.read().is_01() || !add_ln109_179_fu_71613_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_180_fu_71598_p1.read()) + sc_biguint<9>(add_ln109_179_fu_71613_p2.read()));
}

void poly1305_hw::thread_add_ln109_181_fu_71676_p2() {
    add_ln109_181_fu_71676_p2 = (!zext_ln109_183_fu_71666_p1.read().is_01() || !select_ln109_90_fu_71669_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_183_fu_71666_p1.read()) + sc_biguint<9>(select_ln109_90_fu_71669_p3.read()));
}

void poly1305_hw::thread_add_ln109_182_fu_71682_p2() {
    add_ln109_182_fu_71682_p2 = (!zext_ln109_182_fu_71663_p1.read().is_01() || !add_ln109_181_fu_71676_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_182_fu_71663_p1.read()) + sc_biguint<9>(add_ln109_181_fu_71676_p2.read()));
}

void poly1305_hw::thread_add_ln109_183_fu_71758_p2() {
    add_ln109_183_fu_71758_p2 = (!zext_ln109_185_fu_71748_p1.read().is_01() || !select_ln109_91_fu_71751_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_185_fu_71748_p1.read()) + sc_biguint<9>(select_ln109_91_fu_71751_p3.read()));
}

void poly1305_hw::thread_add_ln109_184_fu_71764_p2() {
    add_ln109_184_fu_71764_p2 = (!zext_ln109_184_fu_71745_p1.read().is_01() || !add_ln109_183_fu_71758_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_184_fu_71745_p1.read()) + sc_biguint<9>(add_ln109_183_fu_71758_p2.read()));
}

void poly1305_hw::thread_add_ln109_185_fu_71842_p2() {
    add_ln109_185_fu_71842_p2 = (!zext_ln109_187_fu_71831_p1.read().is_01() || !select_ln109_92_fu_71834_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_187_fu_71831_p1.read()) + sc_biguint<9>(select_ln109_92_fu_71834_p3.read()));
}

void poly1305_hw::thread_add_ln109_186_fu_71848_p2() {
    add_ln109_186_fu_71848_p2 = (!zext_ln109_186_fu_71827_p1.read().is_01() || !add_ln109_185_fu_71842_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_186_fu_71827_p1.read()) + sc_biguint<9>(add_ln109_185_fu_71842_p2.read()));
}

void poly1305_hw::thread_add_ln109_187_fu_71905_p2() {
    add_ln109_187_fu_71905_p2 = (!zext_ln109_189_fu_71895_p1.read().is_01() || !select_ln109_93_fu_71898_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_189_fu_71895_p1.read()) + sc_biguint<9>(select_ln109_93_fu_71898_p3.read()));
}

void poly1305_hw::thread_add_ln109_188_fu_71911_p2() {
    add_ln109_188_fu_71911_p2 = (!zext_ln109_188_fu_71892_p1.read().is_01() || !add_ln109_187_fu_71905_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_188_fu_71892_p1.read()) + sc_biguint<9>(add_ln109_187_fu_71905_p2.read()));
}

void poly1305_hw::thread_add_ln109_189_fu_71987_p2() {
    add_ln109_189_fu_71987_p2 = (!zext_ln109_191_fu_71977_p1.read().is_01() || !select_ln109_94_fu_71980_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_191_fu_71977_p1.read()) + sc_biguint<9>(select_ln109_94_fu_71980_p3.read()));
}

void poly1305_hw::thread_add_ln109_18_fu_65423_p2() {
    add_ln109_18_fu_65423_p2 = (!zext_ln109_18_fu_65404_p1.read().is_01() || !add_ln109_17_fu_65417_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_18_fu_65404_p1.read()) + sc_biguint<9>(add_ln109_17_fu_65417_p2.read()));
}

void poly1305_hw::thread_add_ln109_190_fu_71993_p2() {
    add_ln109_190_fu_71993_p2 = (!zext_ln109_190_fu_71974_p1.read().is_01() || !add_ln109_189_fu_71987_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_190_fu_71974_p1.read()) + sc_biguint<9>(add_ln109_189_fu_71987_p2.read()));
}

void poly1305_hw::thread_add_ln109_191_fu_72071_p2() {
    add_ln109_191_fu_72071_p2 = (!zext_ln109_193_fu_72060_p1.read().is_01() || !select_ln109_95_fu_72063_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_193_fu_72060_p1.read()) + sc_biguint<9>(select_ln109_95_fu_72063_p3.read()));
}

void poly1305_hw::thread_add_ln109_192_fu_72077_p2() {
    add_ln109_192_fu_72077_p2 = (!zext_ln109_192_fu_72056_p1.read().is_01() || !add_ln109_191_fu_72071_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_192_fu_72056_p1.read()) + sc_biguint<9>(add_ln109_191_fu_72071_p2.read()));
}

void poly1305_hw::thread_add_ln109_193_fu_72134_p2() {
    add_ln109_193_fu_72134_p2 = (!zext_ln109_195_fu_72124_p1.read().is_01() || !select_ln109_96_fu_72127_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_195_fu_72124_p1.read()) + sc_biguint<9>(select_ln109_96_fu_72127_p3.read()));
}

void poly1305_hw::thread_add_ln109_194_fu_72140_p2() {
    add_ln109_194_fu_72140_p2 = (!zext_ln109_194_fu_72121_p1.read().is_01() || !add_ln109_193_fu_72134_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_194_fu_72121_p1.read()) + sc_biguint<9>(add_ln109_193_fu_72134_p2.read()));
}

void poly1305_hw::thread_add_ln109_195_fu_72216_p2() {
    add_ln109_195_fu_72216_p2 = (!zext_ln109_197_fu_72206_p1.read().is_01() || !select_ln109_97_fu_72209_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_197_fu_72206_p1.read()) + sc_biguint<9>(select_ln109_97_fu_72209_p3.read()));
}

void poly1305_hw::thread_add_ln109_196_fu_72222_p2() {
    add_ln109_196_fu_72222_p2 = (!zext_ln109_196_fu_72203_p1.read().is_01() || !add_ln109_195_fu_72216_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_196_fu_72203_p1.read()) + sc_biguint<9>(add_ln109_195_fu_72216_p2.read()));
}

void poly1305_hw::thread_add_ln109_197_fu_72300_p2() {
    add_ln109_197_fu_72300_p2 = (!zext_ln109_199_fu_72289_p1.read().is_01() || !select_ln109_98_fu_72292_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_199_fu_72289_p1.read()) + sc_biguint<9>(select_ln109_98_fu_72292_p3.read()));
}

void poly1305_hw::thread_add_ln109_198_fu_72306_p2() {
    add_ln109_198_fu_72306_p2 = (!zext_ln109_198_fu_72285_p1.read().is_01() || !add_ln109_197_fu_72300_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_198_fu_72285_p1.read()) + sc_biguint<9>(add_ln109_197_fu_72300_p2.read()));
}

void poly1305_hw::thread_add_ln109_199_fu_72363_p2() {
    add_ln109_199_fu_72363_p2 = (!zext_ln109_201_fu_72353_p1.read().is_01() || !select_ln109_99_fu_72356_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_201_fu_72353_p1.read()) + sc_biguint<9>(select_ln109_99_fu_72356_p3.read()));
}

void poly1305_hw::thread_add_ln109_19_fu_65499_p2() {
    add_ln109_19_fu_65499_p2 = (!zext_ln109_21_fu_65489_p1.read().is_01() || !select_ln109_9_fu_65492_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_21_fu_65489_p1.read()) + sc_biguint<9>(select_ln109_9_fu_65492_p3.read()));
}

void poly1305_hw::thread_add_ln109_1_fu_64812_p2() {
    add_ln109_1_fu_64812_p2 = (!zext_ln109_3_fu_64802_p1.read().is_01() || !select_ln109_fu_64805_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_3_fu_64802_p1.read()) + sc_biguint<9>(select_ln109_fu_64805_p3.read()));
}

void poly1305_hw::thread_add_ln109_200_fu_72369_p2() {
    add_ln109_200_fu_72369_p2 = (!zext_ln109_200_fu_72350_p1.read().is_01() || !add_ln109_199_fu_72363_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_200_fu_72350_p1.read()) + sc_biguint<9>(add_ln109_199_fu_72363_p2.read()));
}

void poly1305_hw::thread_add_ln109_201_fu_72448_p2() {
    add_ln109_201_fu_72448_p2 = (!zext_ln109_203_fu_72436_p1.read().is_01() || !select_ln109_100_fu_72440_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_203_fu_72436_p1.read()) + sc_biguint<9>(select_ln109_100_fu_72440_p3.read()));
}

void poly1305_hw::thread_add_ln109_202_fu_72454_p2() {
    add_ln109_202_fu_72454_p2 = (!zext_ln109_202_fu_72432_p1.read().is_01() || !add_ln109_201_fu_72448_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_202_fu_72432_p1.read()) + sc_biguint<9>(add_ln109_201_fu_72448_p2.read()));
}

void poly1305_hw::thread_add_ln109_203_fu_72515_p2() {
    add_ln109_203_fu_72515_p2 = (!zext_ln109_205_fu_72505_p1.read().is_01() || !select_ln109_101_fu_72508_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_205_fu_72505_p1.read()) + sc_biguint<9>(select_ln109_101_fu_72508_p3.read()));
}

void poly1305_hw::thread_add_ln109_204_fu_72521_p2() {
    add_ln109_204_fu_72521_p2 = (!zext_ln109_204_fu_72502_p1.read().is_01() || !add_ln109_203_fu_72515_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_204_fu_72502_p1.read()) + sc_biguint<9>(add_ln109_203_fu_72515_p2.read()));
}

void poly1305_hw::thread_add_ln109_205_fu_72597_p2() {
    add_ln109_205_fu_72597_p2 = (!zext_ln109_207_fu_72587_p1.read().is_01() || !select_ln109_102_fu_72590_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_207_fu_72587_p1.read()) + sc_biguint<9>(select_ln109_102_fu_72590_p3.read()));
}

void poly1305_hw::thread_add_ln109_206_fu_72603_p2() {
    add_ln109_206_fu_72603_p2 = (!zext_ln109_206_fu_72584_p1.read().is_01() || !add_ln109_205_fu_72597_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_206_fu_72584_p1.read()) + sc_biguint<9>(add_ln109_205_fu_72597_p2.read()));
}

void poly1305_hw::thread_add_ln109_207_fu_72681_p2() {
    add_ln109_207_fu_72681_p2 = (!zext_ln109_209_fu_72670_p1.read().is_01() || !select_ln109_103_fu_72673_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_209_fu_72670_p1.read()) + sc_biguint<9>(select_ln109_103_fu_72673_p3.read()));
}

void poly1305_hw::thread_add_ln109_208_fu_72687_p2() {
    add_ln109_208_fu_72687_p2 = (!zext_ln109_208_fu_72666_p1.read().is_01() || !add_ln109_207_fu_72681_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_208_fu_72666_p1.read()) + sc_biguint<9>(add_ln109_207_fu_72681_p2.read()));
}

void poly1305_hw::thread_add_ln109_209_fu_72744_p2() {
    add_ln109_209_fu_72744_p2 = (!zext_ln109_211_fu_72734_p1.read().is_01() || !select_ln109_104_fu_72737_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_211_fu_72734_p1.read()) + sc_biguint<9>(select_ln109_104_fu_72737_p3.read()));
}

void poly1305_hw::thread_add_ln109_20_fu_65505_p2() {
    add_ln109_20_fu_65505_p2 = (!zext_ln109_20_fu_65486_p1.read().is_01() || !add_ln109_19_fu_65499_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_20_fu_65486_p1.read()) + sc_biguint<9>(add_ln109_19_fu_65499_p2.read()));
}

void poly1305_hw::thread_add_ln109_210_fu_72750_p2() {
    add_ln109_210_fu_72750_p2 = (!zext_ln109_210_fu_72731_p1.read().is_01() || !add_ln109_209_fu_72744_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_210_fu_72731_p1.read()) + sc_biguint<9>(add_ln109_209_fu_72744_p2.read()));
}

void poly1305_hw::thread_add_ln109_211_fu_72826_p2() {
    add_ln109_211_fu_72826_p2 = (!zext_ln109_213_fu_72816_p1.read().is_01() || !select_ln109_105_fu_72819_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_213_fu_72816_p1.read()) + sc_biguint<9>(select_ln109_105_fu_72819_p3.read()));
}

void poly1305_hw::thread_add_ln109_212_fu_72832_p2() {
    add_ln109_212_fu_72832_p2 = (!zext_ln109_212_fu_72813_p1.read().is_01() || !add_ln109_211_fu_72826_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_212_fu_72813_p1.read()) + sc_biguint<9>(add_ln109_211_fu_72826_p2.read()));
}

void poly1305_hw::thread_add_ln109_213_fu_72910_p2() {
    add_ln109_213_fu_72910_p2 = (!zext_ln109_215_fu_72899_p1.read().is_01() || !select_ln109_106_fu_72902_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_215_fu_72899_p1.read()) + sc_biguint<9>(select_ln109_106_fu_72902_p3.read()));
}

void poly1305_hw::thread_add_ln109_214_fu_72916_p2() {
    add_ln109_214_fu_72916_p2 = (!zext_ln109_214_fu_72895_p1.read().is_01() || !add_ln109_213_fu_72910_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_214_fu_72895_p1.read()) + sc_biguint<9>(add_ln109_213_fu_72910_p2.read()));
}

void poly1305_hw::thread_add_ln109_215_fu_72973_p2() {
    add_ln109_215_fu_72973_p2 = (!zext_ln109_217_fu_72963_p1.read().is_01() || !select_ln109_107_fu_72966_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_217_fu_72963_p1.read()) + sc_biguint<9>(select_ln109_107_fu_72966_p3.read()));
}

void poly1305_hw::thread_add_ln109_216_fu_72979_p2() {
    add_ln109_216_fu_72979_p2 = (!zext_ln109_216_fu_72960_p1.read().is_01() || !add_ln109_215_fu_72973_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_216_fu_72960_p1.read()) + sc_biguint<9>(add_ln109_215_fu_72973_p2.read()));
}

void poly1305_hw::thread_add_ln109_217_fu_73055_p2() {
    add_ln109_217_fu_73055_p2 = (!zext_ln109_219_fu_73045_p1.read().is_01() || !select_ln109_108_fu_73048_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_219_fu_73045_p1.read()) + sc_biguint<9>(select_ln109_108_fu_73048_p3.read()));
}

void poly1305_hw::thread_add_ln109_218_fu_73061_p2() {
    add_ln109_218_fu_73061_p2 = (!zext_ln109_218_fu_73042_p1.read().is_01() || !add_ln109_217_fu_73055_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_218_fu_73042_p1.read()) + sc_biguint<9>(add_ln109_217_fu_73055_p2.read()));
}

void poly1305_hw::thread_add_ln109_219_fu_73139_p2() {
    add_ln109_219_fu_73139_p2 = (!zext_ln109_221_fu_73128_p1.read().is_01() || !select_ln109_109_fu_73131_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_221_fu_73128_p1.read()) + sc_biguint<9>(select_ln109_109_fu_73131_p3.read()));
}

void poly1305_hw::thread_add_ln109_21_fu_65583_p2() {
    add_ln109_21_fu_65583_p2 = (!zext_ln109_23_fu_65572_p1.read().is_01() || !select_ln109_10_fu_65575_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_23_fu_65572_p1.read()) + sc_biguint<9>(select_ln109_10_fu_65575_p3.read()));
}

void poly1305_hw::thread_add_ln109_220_fu_73145_p2() {
    add_ln109_220_fu_73145_p2 = (!zext_ln109_220_fu_73124_p1.read().is_01() || !add_ln109_219_fu_73139_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_220_fu_73124_p1.read()) + sc_biguint<9>(add_ln109_219_fu_73139_p2.read()));
}

void poly1305_hw::thread_add_ln109_221_fu_73202_p2() {
    add_ln109_221_fu_73202_p2 = (!zext_ln109_223_fu_73192_p1.read().is_01() || !select_ln109_110_fu_73195_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_223_fu_73192_p1.read()) + sc_biguint<9>(select_ln109_110_fu_73195_p3.read()));
}

void poly1305_hw::thread_add_ln109_222_fu_73208_p2() {
    add_ln109_222_fu_73208_p2 = (!zext_ln109_222_fu_73189_p1.read().is_01() || !add_ln109_221_fu_73202_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_222_fu_73189_p1.read()) + sc_biguint<9>(add_ln109_221_fu_73202_p2.read()));
}

void poly1305_hw::thread_add_ln109_223_fu_73284_p2() {
    add_ln109_223_fu_73284_p2 = (!zext_ln109_225_fu_73274_p1.read().is_01() || !select_ln109_111_fu_73277_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_225_fu_73274_p1.read()) + sc_biguint<9>(select_ln109_111_fu_73277_p3.read()));
}

void poly1305_hw::thread_add_ln109_224_fu_73290_p2() {
    add_ln109_224_fu_73290_p2 = (!zext_ln109_224_fu_73271_p1.read().is_01() || !add_ln109_223_fu_73284_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_224_fu_73271_p1.read()) + sc_biguint<9>(add_ln109_223_fu_73284_p2.read()));
}

void poly1305_hw::thread_add_ln109_225_fu_73368_p2() {
    add_ln109_225_fu_73368_p2 = (!zext_ln109_227_fu_73357_p1.read().is_01() || !select_ln109_112_fu_73360_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_227_fu_73357_p1.read()) + sc_biguint<9>(select_ln109_112_fu_73360_p3.read()));
}

void poly1305_hw::thread_add_ln109_226_fu_73374_p2() {
    add_ln109_226_fu_73374_p2 = (!zext_ln109_226_fu_73353_p1.read().is_01() || !add_ln109_225_fu_73368_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_226_fu_73353_p1.read()) + sc_biguint<9>(add_ln109_225_fu_73368_p2.read()));
}

void poly1305_hw::thread_add_ln109_227_fu_73431_p2() {
    add_ln109_227_fu_73431_p2 = (!zext_ln109_229_fu_73421_p1.read().is_01() || !select_ln109_113_fu_73424_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_229_fu_73421_p1.read()) + sc_biguint<9>(select_ln109_113_fu_73424_p3.read()));
}

void poly1305_hw::thread_add_ln109_228_fu_73437_p2() {
    add_ln109_228_fu_73437_p2 = (!zext_ln109_228_fu_73418_p1.read().is_01() || !add_ln109_227_fu_73431_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_228_fu_73418_p1.read()) + sc_biguint<9>(add_ln109_227_fu_73431_p2.read()));
}

void poly1305_hw::thread_add_ln109_229_fu_73513_p2() {
    add_ln109_229_fu_73513_p2 = (!zext_ln109_231_fu_73503_p1.read().is_01() || !select_ln109_114_fu_73506_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_231_fu_73503_p1.read()) + sc_biguint<9>(select_ln109_114_fu_73506_p3.read()));
}

void poly1305_hw::thread_add_ln109_22_fu_65589_p2() {
    add_ln109_22_fu_65589_p2 = (!zext_ln109_22_fu_65568_p1.read().is_01() || !add_ln109_21_fu_65583_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_22_fu_65568_p1.read()) + sc_biguint<9>(add_ln109_21_fu_65583_p2.read()));
}

void poly1305_hw::thread_add_ln109_230_fu_73519_p2() {
    add_ln109_230_fu_73519_p2 = (!zext_ln109_230_fu_73500_p1.read().is_01() || !add_ln109_229_fu_73513_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_230_fu_73500_p1.read()) + sc_biguint<9>(add_ln109_229_fu_73513_p2.read()));
}

void poly1305_hw::thread_add_ln109_231_fu_73597_p2() {
    add_ln109_231_fu_73597_p2 = (!zext_ln109_233_fu_73586_p1.read().is_01() || !select_ln109_115_fu_73589_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_233_fu_73586_p1.read()) + sc_biguint<9>(select_ln109_115_fu_73589_p3.read()));
}

void poly1305_hw::thread_add_ln109_232_fu_73603_p2() {
    add_ln109_232_fu_73603_p2 = (!zext_ln109_232_fu_73582_p1.read().is_01() || !add_ln109_231_fu_73597_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_232_fu_73582_p1.read()) + sc_biguint<9>(add_ln109_231_fu_73597_p2.read()));
}

void poly1305_hw::thread_add_ln109_233_fu_73660_p2() {
    add_ln109_233_fu_73660_p2 = (!zext_ln109_235_fu_73650_p1.read().is_01() || !select_ln109_116_fu_73653_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_235_fu_73650_p1.read()) + sc_biguint<9>(select_ln109_116_fu_73653_p3.read()));
}

void poly1305_hw::thread_add_ln109_234_fu_73666_p2() {
    add_ln109_234_fu_73666_p2 = (!zext_ln109_234_fu_73647_p1.read().is_01() || !add_ln109_233_fu_73660_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_234_fu_73647_p1.read()) + sc_biguint<9>(add_ln109_233_fu_73660_p2.read()));
}

void poly1305_hw::thread_add_ln109_235_fu_73745_p2() {
    add_ln109_235_fu_73745_p2 = (!zext_ln109_237_fu_73733_p1.read().is_01() || !select_ln109_117_fu_73737_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_237_fu_73733_p1.read()) + sc_biguint<9>(select_ln109_117_fu_73737_p3.read()));
}

void poly1305_hw::thread_add_ln109_236_fu_73751_p2() {
    add_ln109_236_fu_73751_p2 = (!zext_ln109_236_fu_73729_p1.read().is_01() || !add_ln109_235_fu_73745_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_236_fu_73729_p1.read()) + sc_biguint<9>(add_ln109_235_fu_73745_p2.read()));
}

void poly1305_hw::thread_add_ln109_237_fu_73816_p2() {
    add_ln109_237_fu_73816_p2 = (!zext_ln109_239_fu_73806_p1.read().is_01() || !select_ln109_118_fu_73809_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_239_fu_73806_p1.read()) + sc_biguint<9>(select_ln109_118_fu_73809_p3.read()));
}

void poly1305_hw::thread_add_ln109_238_fu_73822_p2() {
    add_ln109_238_fu_73822_p2 = (!zext_ln109_238_fu_73803_p1.read().is_01() || !add_ln109_237_fu_73816_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_238_fu_73803_p1.read()) + sc_biguint<9>(add_ln109_237_fu_73816_p2.read()));
}

void poly1305_hw::thread_add_ln109_239_fu_73898_p2() {
    add_ln109_239_fu_73898_p2 = (!zext_ln109_241_fu_73888_p1.read().is_01() || !select_ln109_119_fu_73891_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_241_fu_73888_p1.read()) + sc_biguint<9>(select_ln109_119_fu_73891_p3.read()));
}

void poly1305_hw::thread_add_ln109_23_fu_65646_p2() {
    add_ln109_23_fu_65646_p2 = (!zext_ln109_25_fu_65636_p1.read().is_01() || !select_ln109_11_fu_65639_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_25_fu_65636_p1.read()) + sc_biguint<9>(select_ln109_11_fu_65639_p3.read()));
}

void poly1305_hw::thread_add_ln109_240_fu_73904_p2() {
    add_ln109_240_fu_73904_p2 = (!zext_ln109_240_fu_73885_p1.read().is_01() || !add_ln109_239_fu_73898_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_240_fu_73885_p1.read()) + sc_biguint<9>(add_ln109_239_fu_73898_p2.read()));
}

void poly1305_hw::thread_add_ln109_241_fu_73982_p2() {
    add_ln109_241_fu_73982_p2 = (!zext_ln109_243_fu_73971_p1.read().is_01() || !select_ln109_120_fu_73974_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_243_fu_73971_p1.read()) + sc_biguint<9>(select_ln109_120_fu_73974_p3.read()));
}

void poly1305_hw::thread_add_ln109_242_fu_73988_p2() {
    add_ln109_242_fu_73988_p2 = (!zext_ln109_242_fu_73967_p1.read().is_01() || !add_ln109_241_fu_73982_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_242_fu_73967_p1.read()) + sc_biguint<9>(add_ln109_241_fu_73982_p2.read()));
}

void poly1305_hw::thread_add_ln109_243_fu_74045_p2() {
    add_ln109_243_fu_74045_p2 = (!zext_ln109_245_fu_74035_p1.read().is_01() || !select_ln109_121_fu_74038_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_245_fu_74035_p1.read()) + sc_biguint<9>(select_ln109_121_fu_74038_p3.read()));
}

void poly1305_hw::thread_add_ln109_244_fu_74051_p2() {
    add_ln109_244_fu_74051_p2 = (!zext_ln109_244_fu_74032_p1.read().is_01() || !add_ln109_243_fu_74045_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_244_fu_74032_p1.read()) + sc_biguint<9>(add_ln109_243_fu_74045_p2.read()));
}

void poly1305_hw::thread_add_ln109_245_fu_74127_p2() {
    add_ln109_245_fu_74127_p2 = (!zext_ln109_247_fu_74117_p1.read().is_01() || !select_ln109_122_fu_74120_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_247_fu_74117_p1.read()) + sc_biguint<9>(select_ln109_122_fu_74120_p3.read()));
}

void poly1305_hw::thread_add_ln109_246_fu_74133_p2() {
    add_ln109_246_fu_74133_p2 = (!zext_ln109_246_fu_74114_p1.read().is_01() || !add_ln109_245_fu_74127_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_246_fu_74114_p1.read()) + sc_biguint<9>(add_ln109_245_fu_74127_p2.read()));
}

void poly1305_hw::thread_add_ln109_247_fu_74211_p2() {
    add_ln109_247_fu_74211_p2 = (!zext_ln109_249_fu_74200_p1.read().is_01() || !select_ln109_123_fu_74203_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_249_fu_74200_p1.read()) + sc_biguint<9>(select_ln109_123_fu_74203_p3.read()));
}

void poly1305_hw::thread_add_ln109_248_fu_74217_p2() {
    add_ln109_248_fu_74217_p2 = (!zext_ln109_248_fu_74196_p1.read().is_01() || !add_ln109_247_fu_74211_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_248_fu_74196_p1.read()) + sc_biguint<9>(add_ln109_247_fu_74211_p2.read()));
}

void poly1305_hw::thread_add_ln109_249_fu_74274_p2() {
    add_ln109_249_fu_74274_p2 = (!zext_ln109_251_fu_74264_p1.read().is_01() || !select_ln109_124_fu_74267_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_251_fu_74264_p1.read()) + sc_biguint<9>(select_ln109_124_fu_74267_p3.read()));
}

void poly1305_hw::thread_add_ln109_24_fu_65652_p2() {
    add_ln109_24_fu_65652_p2 = (!zext_ln109_24_fu_65633_p1.read().is_01() || !add_ln109_23_fu_65646_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_24_fu_65633_p1.read()) + sc_biguint<9>(add_ln109_23_fu_65646_p2.read()));
}

void poly1305_hw::thread_add_ln109_250_fu_74280_p2() {
    add_ln109_250_fu_74280_p2 = (!zext_ln109_250_fu_74261_p1.read().is_01() || !add_ln109_249_fu_74274_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_250_fu_74261_p1.read()) + sc_biguint<9>(add_ln109_249_fu_74274_p2.read()));
}

void poly1305_hw::thread_add_ln109_251_fu_74356_p2() {
    add_ln109_251_fu_74356_p2 = (!zext_ln109_253_fu_74346_p1.read().is_01() || !select_ln109_125_fu_74349_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_253_fu_74346_p1.read()) + sc_biguint<9>(select_ln109_125_fu_74349_p3.read()));
}

void poly1305_hw::thread_add_ln109_252_fu_74362_p2() {
    add_ln109_252_fu_74362_p2 = (!zext_ln109_252_fu_74343_p1.read().is_01() || !add_ln109_251_fu_74356_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_252_fu_74343_p1.read()) + sc_biguint<9>(add_ln109_251_fu_74356_p2.read()));
}

void poly1305_hw::thread_add_ln109_253_fu_74440_p2() {
    add_ln109_253_fu_74440_p2 = (!zext_ln109_255_fu_74429_p1.read().is_01() || !select_ln109_126_fu_74432_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_255_fu_74429_p1.read()) + sc_biguint<9>(select_ln109_126_fu_74432_p3.read()));
}

void poly1305_hw::thread_add_ln109_254_fu_74446_p2() {
    add_ln109_254_fu_74446_p2 = (!zext_ln109_254_fu_74425_p1.read().is_01() || !add_ln109_253_fu_74440_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_254_fu_74425_p1.read()) + sc_biguint<9>(add_ln109_253_fu_74440_p2.read()));
}

void poly1305_hw::thread_add_ln109_255_fu_74503_p2() {
    add_ln109_255_fu_74503_p2 = (!zext_ln109_257_fu_74493_p1.read().is_01() || !select_ln109_127_fu_74496_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_257_fu_74493_p1.read()) + sc_biguint<9>(select_ln109_127_fu_74496_p3.read()));
}

void poly1305_hw::thread_add_ln109_256_fu_74509_p2() {
    add_ln109_256_fu_74509_p2 = (!zext_ln109_256_fu_74490_p1.read().is_01() || !add_ln109_255_fu_74503_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_256_fu_74490_p1.read()) + sc_biguint<9>(add_ln109_255_fu_74503_p2.read()));
}

void poly1305_hw::thread_add_ln109_257_fu_74585_p2() {
    add_ln109_257_fu_74585_p2 = (!zext_ln109_259_fu_74575_p1.read().is_01() || !select_ln109_128_fu_74578_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_259_fu_74575_p1.read()) + sc_biguint<9>(select_ln109_128_fu_74578_p3.read()));
}

void poly1305_hw::thread_add_ln109_258_fu_74591_p2() {
    add_ln109_258_fu_74591_p2 = (!zext_ln109_258_fu_74572_p1.read().is_01() || !add_ln109_257_fu_74585_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_258_fu_74572_p1.read()) + sc_biguint<9>(add_ln109_257_fu_74585_p2.read()));
}

void poly1305_hw::thread_add_ln109_259_fu_74669_p2() {
    add_ln109_259_fu_74669_p2 = (!zext_ln109_261_fu_74658_p1.read().is_01() || !select_ln109_129_fu_74661_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_261_fu_74658_p1.read()) + sc_biguint<9>(select_ln109_129_fu_74661_p3.read()));
}

void poly1305_hw::thread_add_ln109_25_fu_65728_p2() {
    add_ln109_25_fu_65728_p2 = (!zext_ln109_27_fu_65718_p1.read().is_01() || !select_ln109_12_fu_65721_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_27_fu_65718_p1.read()) + sc_biguint<9>(select_ln109_12_fu_65721_p3.read()));
}

void poly1305_hw::thread_add_ln109_260_fu_74675_p2() {
    add_ln109_260_fu_74675_p2 = (!zext_ln109_260_fu_74654_p1.read().is_01() || !add_ln109_259_fu_74669_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_260_fu_74654_p1.read()) + sc_biguint<9>(add_ln109_259_fu_74669_p2.read()));
}

void poly1305_hw::thread_add_ln109_261_fu_74732_p2() {
    add_ln109_261_fu_74732_p2 = (!zext_ln109_263_fu_74722_p1.read().is_01() || !select_ln109_130_fu_74725_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_263_fu_74722_p1.read()) + sc_biguint<9>(select_ln109_130_fu_74725_p3.read()));
}

void poly1305_hw::thread_add_ln109_262_fu_74738_p2() {
    add_ln109_262_fu_74738_p2 = (!zext_ln109_262_fu_74719_p1.read().is_01() || !add_ln109_261_fu_74732_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_262_fu_74719_p1.read()) + sc_biguint<9>(add_ln109_261_fu_74732_p2.read()));
}

void poly1305_hw::thread_add_ln109_263_fu_74814_p2() {
    add_ln109_263_fu_74814_p2 = (!zext_ln109_265_fu_74804_p1.read().is_01() || !select_ln109_131_fu_74807_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_265_fu_74804_p1.read()) + sc_biguint<9>(select_ln109_131_fu_74807_p3.read()));
}

void poly1305_hw::thread_add_ln109_264_fu_74820_p2() {
    add_ln109_264_fu_74820_p2 = (!zext_ln109_264_fu_74801_p1.read().is_01() || !add_ln109_263_fu_74814_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_264_fu_74801_p1.read()) + sc_biguint<9>(add_ln109_263_fu_74814_p2.read()));
}

void poly1305_hw::thread_add_ln109_265_fu_74898_p2() {
    add_ln109_265_fu_74898_p2 = (!zext_ln109_267_fu_74887_p1.read().is_01() || !select_ln109_132_fu_74890_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_267_fu_74887_p1.read()) + sc_biguint<9>(select_ln109_132_fu_74890_p3.read()));
}

void poly1305_hw::thread_add_ln109_266_fu_74904_p2() {
    add_ln109_266_fu_74904_p2 = (!zext_ln109_266_fu_74883_p1.read().is_01() || !add_ln109_265_fu_74898_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_266_fu_74883_p1.read()) + sc_biguint<9>(add_ln109_265_fu_74898_p2.read()));
}

void poly1305_hw::thread_add_ln109_267_fu_74961_p2() {
    add_ln109_267_fu_74961_p2 = (!zext_ln109_269_fu_74951_p1.read().is_01() || !select_ln109_133_fu_74954_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_269_fu_74951_p1.read()) + sc_biguint<9>(select_ln109_133_fu_74954_p3.read()));
}

void poly1305_hw::thread_add_ln109_268_fu_74967_p2() {
    add_ln109_268_fu_74967_p2 = (!zext_ln109_268_fu_74948_p1.read().is_01() || !add_ln109_267_fu_74961_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_268_fu_74948_p1.read()) + sc_biguint<9>(add_ln109_267_fu_74961_p2.read()));
}

void poly1305_hw::thread_add_ln109_269_fu_75042_p2() {
    add_ln109_269_fu_75042_p2 = (!mul_24_reg_14251.read().is_01() || !select_ln109_134_fu_75034_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(mul_24_reg_14251.read()) + sc_biguint<4>(select_ln109_134_fu_75034_p3.read()));
}

void poly1305_hw::thread_add_ln109_26_fu_65734_p2() {
    add_ln109_26_fu_65734_p2 = (!zext_ln109_26_fu_65715_p1.read().is_01() || !add_ln109_25_fu_65728_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_26_fu_65715_p1.read()) + sc_biguint<9>(add_ln109_25_fu_65728_p2.read()));
}

void poly1305_hw::thread_add_ln109_270_fu_75052_p2() {
    add_ln109_270_fu_75052_p2 = (!zext_ln109_270_fu_75030_p1.read().is_01() || !zext_ln109_271_fu_75048_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_270_fu_75030_p1.read()) + sc_biguint<9>(zext_ln109_271_fu_75048_p1.read()));
}

void poly1305_hw::thread_add_ln109_271_fu_75112_p2() {
    add_ln109_271_fu_75112_p2 = (!zext_ln109_273_fu_75102_p1.read().is_01() || !select_ln109_135_fu_75105_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_273_fu_75102_p1.read()) + sc_biguint<9>(select_ln109_135_fu_75105_p3.read()));
}

void poly1305_hw::thread_add_ln109_272_fu_75118_p2() {
    add_ln109_272_fu_75118_p2 = (!zext_ln109_272_fu_75099_p1.read().is_01() || !add_ln109_271_fu_75112_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_272_fu_75099_p1.read()) + sc_biguint<9>(add_ln109_271_fu_75112_p2.read()));
}

void poly1305_hw::thread_add_ln109_273_fu_75194_p2() {
    add_ln109_273_fu_75194_p2 = (!zext_ln109_275_fu_75184_p1.read().is_01() || !select_ln109_136_fu_75187_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_275_fu_75184_p1.read()) + sc_biguint<9>(select_ln109_136_fu_75187_p3.read()));
}

void poly1305_hw::thread_add_ln109_274_fu_75200_p2() {
    add_ln109_274_fu_75200_p2 = (!zext_ln109_274_fu_75181_p1.read().is_01() || !add_ln109_273_fu_75194_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_274_fu_75181_p1.read()) + sc_biguint<9>(add_ln109_273_fu_75194_p2.read()));
}

void poly1305_hw::thread_add_ln109_275_fu_75278_p2() {
    add_ln109_275_fu_75278_p2 = (!zext_ln109_277_fu_75267_p1.read().is_01() || !select_ln109_137_fu_75270_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_277_fu_75267_p1.read()) + sc_biguint<9>(select_ln109_137_fu_75270_p3.read()));
}

void poly1305_hw::thread_add_ln109_276_fu_75284_p2() {
    add_ln109_276_fu_75284_p2 = (!zext_ln109_276_fu_75263_p1.read().is_01() || !add_ln109_275_fu_75278_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_276_fu_75263_p1.read()) + sc_biguint<9>(add_ln109_275_fu_75278_p2.read()));
}

void poly1305_hw::thread_add_ln109_277_fu_75341_p2() {
    add_ln109_277_fu_75341_p2 = (!zext_ln109_279_fu_75331_p1.read().is_01() || !select_ln109_138_fu_75334_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_279_fu_75331_p1.read()) + sc_biguint<9>(select_ln109_138_fu_75334_p3.read()));
}

void poly1305_hw::thread_add_ln109_278_fu_75347_p2() {
    add_ln109_278_fu_75347_p2 = (!zext_ln109_278_fu_75328_p1.read().is_01() || !add_ln109_277_fu_75341_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_278_fu_75328_p1.read()) + sc_biguint<9>(add_ln109_277_fu_75341_p2.read()));
}

void poly1305_hw::thread_add_ln109_279_fu_75423_p2() {
    add_ln109_279_fu_75423_p2 = (!zext_ln109_281_fu_75413_p1.read().is_01() || !select_ln109_139_fu_75416_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_281_fu_75413_p1.read()) + sc_biguint<9>(select_ln109_139_fu_75416_p3.read()));
}

void poly1305_hw::thread_add_ln109_27_fu_65812_p2() {
    add_ln109_27_fu_65812_p2 = (!zext_ln109_29_fu_65801_p1.read().is_01() || !select_ln109_13_fu_65804_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_29_fu_65801_p1.read()) + sc_biguint<9>(select_ln109_13_fu_65804_p3.read()));
}

void poly1305_hw::thread_add_ln109_280_fu_75429_p2() {
    add_ln109_280_fu_75429_p2 = (!zext_ln109_280_fu_75410_p1.read().is_01() || !add_ln109_279_fu_75423_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_280_fu_75410_p1.read()) + sc_biguint<9>(add_ln109_279_fu_75423_p2.read()));
}

void poly1305_hw::thread_add_ln109_281_fu_75507_p2() {
    add_ln109_281_fu_75507_p2 = (!zext_ln109_283_fu_75496_p1.read().is_01() || !select_ln109_140_fu_75499_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_283_fu_75496_p1.read()) + sc_biguint<9>(select_ln109_140_fu_75499_p3.read()));
}

void poly1305_hw::thread_add_ln109_282_fu_75513_p2() {
    add_ln109_282_fu_75513_p2 = (!zext_ln109_282_fu_75492_p1.read().is_01() || !add_ln109_281_fu_75507_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_282_fu_75492_p1.read()) + sc_biguint<9>(add_ln109_281_fu_75507_p2.read()));
}

void poly1305_hw::thread_add_ln109_283_fu_75570_p2() {
    add_ln109_283_fu_75570_p2 = (!zext_ln109_285_fu_75560_p1.read().is_01() || !select_ln109_141_fu_75563_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_285_fu_75560_p1.read()) + sc_biguint<9>(select_ln109_141_fu_75563_p3.read()));
}

void poly1305_hw::thread_add_ln109_284_fu_75576_p2() {
    add_ln109_284_fu_75576_p2 = (!zext_ln109_284_fu_75557_p1.read().is_01() || !add_ln109_283_fu_75570_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_284_fu_75557_p1.read()) + sc_biguint<9>(add_ln109_283_fu_75570_p2.read()));
}

void poly1305_hw::thread_add_ln109_285_fu_75652_p2() {
    add_ln109_285_fu_75652_p2 = (!zext_ln109_287_fu_75642_p1.read().is_01() || !select_ln109_142_fu_75645_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_287_fu_75642_p1.read()) + sc_biguint<9>(select_ln109_142_fu_75645_p3.read()));
}

void poly1305_hw::thread_add_ln109_286_fu_75658_p2() {
    add_ln109_286_fu_75658_p2 = (!zext_ln109_286_fu_75639_p1.read().is_01() || !add_ln109_285_fu_75652_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_286_fu_75639_p1.read()) + sc_biguint<9>(add_ln109_285_fu_75652_p2.read()));
}

void poly1305_hw::thread_add_ln109_287_fu_75736_p2() {
    add_ln109_287_fu_75736_p2 = (!zext_ln109_289_fu_75725_p1.read().is_01() || !select_ln109_143_fu_75728_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_289_fu_75725_p1.read()) + sc_biguint<9>(select_ln109_143_fu_75728_p3.read()));
}

void poly1305_hw::thread_add_ln109_288_fu_75742_p2() {
    add_ln109_288_fu_75742_p2 = (!zext_ln109_288_fu_75721_p1.read().is_01() || !add_ln109_287_fu_75736_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_288_fu_75721_p1.read()) + sc_biguint<9>(add_ln109_287_fu_75736_p2.read()));
}

void poly1305_hw::thread_add_ln109_289_fu_75799_p2() {
    add_ln109_289_fu_75799_p2 = (!zext_ln109_291_fu_75789_p1.read().is_01() || !select_ln109_144_fu_75792_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_291_fu_75789_p1.read()) + sc_biguint<9>(select_ln109_144_fu_75792_p3.read()));
}

void poly1305_hw::thread_add_ln109_28_fu_65818_p2() {
    add_ln109_28_fu_65818_p2 = (!zext_ln109_28_fu_65797_p1.read().is_01() || !add_ln109_27_fu_65812_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_28_fu_65797_p1.read()) + sc_biguint<9>(add_ln109_27_fu_65812_p2.read()));
}

void poly1305_hw::thread_add_ln109_290_fu_75805_p2() {
    add_ln109_290_fu_75805_p2 = (!zext_ln109_290_fu_75786_p1.read().is_01() || !add_ln109_289_fu_75799_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_290_fu_75786_p1.read()) + sc_biguint<9>(add_ln109_289_fu_75799_p2.read()));
}

void poly1305_hw::thread_add_ln109_291_fu_75881_p2() {
    add_ln109_291_fu_75881_p2 = (!zext_ln109_293_fu_75871_p1.read().is_01() || !select_ln109_145_fu_75874_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_293_fu_75871_p1.read()) + sc_biguint<9>(select_ln109_145_fu_75874_p3.read()));
}

void poly1305_hw::thread_add_ln109_292_fu_75887_p2() {
    add_ln109_292_fu_75887_p2 = (!zext_ln109_292_fu_75868_p1.read().is_01() || !add_ln109_291_fu_75881_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_292_fu_75868_p1.read()) + sc_biguint<9>(add_ln109_291_fu_75881_p2.read()));
}

void poly1305_hw::thread_add_ln109_293_fu_75965_p2() {
    add_ln109_293_fu_75965_p2 = (!zext_ln109_295_fu_75954_p1.read().is_01() || !select_ln109_146_fu_75957_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_295_fu_75954_p1.read()) + sc_biguint<9>(select_ln109_146_fu_75957_p3.read()));
}

void poly1305_hw::thread_add_ln109_294_fu_75971_p2() {
    add_ln109_294_fu_75971_p2 = (!zext_ln109_294_fu_75950_p1.read().is_01() || !add_ln109_293_fu_75965_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_294_fu_75950_p1.read()) + sc_biguint<9>(add_ln109_293_fu_75965_p2.read()));
}

void poly1305_hw::thread_add_ln109_295_fu_76028_p2() {
    add_ln109_295_fu_76028_p2 = (!zext_ln109_297_fu_76018_p1.read().is_01() || !select_ln109_147_fu_76021_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_297_fu_76018_p1.read()) + sc_biguint<9>(select_ln109_147_fu_76021_p3.read()));
}

void poly1305_hw::thread_add_ln109_296_fu_76034_p2() {
    add_ln109_296_fu_76034_p2 = (!zext_ln109_296_fu_76015_p1.read().is_01() || !add_ln109_295_fu_76028_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_296_fu_76015_p1.read()) + sc_biguint<9>(add_ln109_295_fu_76028_p2.read()));
}

void poly1305_hw::thread_add_ln109_297_fu_76110_p2() {
    add_ln109_297_fu_76110_p2 = (!zext_ln109_299_fu_76100_p1.read().is_01() || !select_ln109_148_fu_76103_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_299_fu_76100_p1.read()) + sc_biguint<9>(select_ln109_148_fu_76103_p3.read()));
}

void poly1305_hw::thread_add_ln109_298_fu_76116_p2() {
    add_ln109_298_fu_76116_p2 = (!zext_ln109_298_fu_76097_p1.read().is_01() || !add_ln109_297_fu_76110_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_298_fu_76097_p1.read()) + sc_biguint<9>(add_ln109_297_fu_76110_p2.read()));
}

void poly1305_hw::thread_add_ln109_299_fu_76194_p2() {
    add_ln109_299_fu_76194_p2 = (!zext_ln109_301_fu_76183_p1.read().is_01() || !select_ln109_149_fu_76186_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_301_fu_76183_p1.read()) + sc_biguint<9>(select_ln109_149_fu_76186_p3.read()));
}

void poly1305_hw::thread_add_ln109_29_fu_65875_p2() {
    add_ln109_29_fu_65875_p2 = (!zext_ln109_31_fu_65865_p1.read().is_01() || !select_ln109_14_fu_65868_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_31_fu_65865_p1.read()) + sc_biguint<9>(select_ln109_14_fu_65868_p3.read()));
}

void poly1305_hw::thread_add_ln109_2_fu_64818_p2() {
    add_ln109_2_fu_64818_p2 = (!zext_ln109_2_fu_64799_p1.read().is_01() || !add_ln109_1_fu_64812_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_2_fu_64799_p1.read()) + sc_biguint<9>(add_ln109_1_fu_64812_p2.read()));
}

void poly1305_hw::thread_add_ln109_300_fu_76200_p2() {
    add_ln109_300_fu_76200_p2 = (!zext_ln109_300_fu_76179_p1.read().is_01() || !add_ln109_299_fu_76194_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_300_fu_76179_p1.read()) + sc_biguint<9>(add_ln109_299_fu_76194_p2.read()));
}

void poly1305_hw::thread_add_ln109_301_fu_76257_p2() {
    add_ln109_301_fu_76257_p2 = (!zext_ln109_303_fu_76247_p1.read().is_01() || !select_ln109_150_fu_76250_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_303_fu_76247_p1.read()) + sc_biguint<9>(select_ln109_150_fu_76250_p3.read()));
}

void poly1305_hw::thread_add_ln109_302_fu_76263_p2() {
    add_ln109_302_fu_76263_p2 = (!zext_ln109_302_fu_76244_p1.read().is_01() || !add_ln109_301_fu_76257_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_302_fu_76244_p1.read()) + sc_biguint<9>(add_ln109_301_fu_76257_p2.read()));
}

void poly1305_hw::thread_add_ln109_303_fu_76342_p2() {
    add_ln109_303_fu_76342_p2 = (!zext_ln109_305_fu_76330_p1.read().is_01() || !select_ln109_151_fu_76334_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_305_fu_76330_p1.read()) + sc_biguint<9>(select_ln109_151_fu_76334_p3.read()));
}

void poly1305_hw::thread_add_ln109_304_fu_76348_p2() {
    add_ln109_304_fu_76348_p2 = (!zext_ln109_304_fu_76326_p1.read().is_01() || !add_ln109_303_fu_76342_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_304_fu_76326_p1.read()) + sc_biguint<9>(add_ln109_303_fu_76342_p2.read()));
}

void poly1305_hw::thread_add_ln109_305_fu_76409_p2() {
    add_ln109_305_fu_76409_p2 = (!zext_ln109_307_fu_76399_p1.read().is_01() || !select_ln109_152_fu_76402_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_307_fu_76399_p1.read()) + sc_biguint<9>(select_ln109_152_fu_76402_p3.read()));
}

void poly1305_hw::thread_add_ln109_306_fu_76415_p2() {
    add_ln109_306_fu_76415_p2 = (!zext_ln109_306_fu_76396_p1.read().is_01() || !add_ln109_305_fu_76409_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_306_fu_76396_p1.read()) + sc_biguint<9>(add_ln109_305_fu_76409_p2.read()));
}

void poly1305_hw::thread_add_ln109_307_fu_76491_p2() {
    add_ln109_307_fu_76491_p2 = (!zext_ln109_309_fu_76481_p1.read().is_01() || !select_ln109_153_fu_76484_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_309_fu_76481_p1.read()) + sc_biguint<9>(select_ln109_153_fu_76484_p3.read()));
}

void poly1305_hw::thread_add_ln109_308_fu_76497_p2() {
    add_ln109_308_fu_76497_p2 = (!zext_ln109_308_fu_76478_p1.read().is_01() || !add_ln109_307_fu_76491_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_308_fu_76478_p1.read()) + sc_biguint<9>(add_ln109_307_fu_76491_p2.read()));
}

void poly1305_hw::thread_add_ln109_309_fu_76575_p2() {
    add_ln109_309_fu_76575_p2 = (!zext_ln109_311_fu_76564_p1.read().is_01() || !select_ln109_154_fu_76567_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_311_fu_76564_p1.read()) + sc_biguint<9>(select_ln109_154_fu_76567_p3.read()));
}

void poly1305_hw::thread_add_ln109_30_fu_65881_p2() {
    add_ln109_30_fu_65881_p2 = (!zext_ln109_30_fu_65862_p1.read().is_01() || !add_ln109_29_fu_65875_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_30_fu_65862_p1.read()) + sc_biguint<9>(add_ln109_29_fu_65875_p2.read()));
}

void poly1305_hw::thread_add_ln109_310_fu_76581_p2() {
    add_ln109_310_fu_76581_p2 = (!zext_ln109_310_fu_76560_p1.read().is_01() || !add_ln109_309_fu_76575_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_310_fu_76560_p1.read()) + sc_biguint<9>(add_ln109_309_fu_76575_p2.read()));
}

void poly1305_hw::thread_add_ln109_311_fu_76638_p2() {
    add_ln109_311_fu_76638_p2 = (!zext_ln109_313_fu_76628_p1.read().is_01() || !select_ln109_155_fu_76631_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_313_fu_76628_p1.read()) + sc_biguint<9>(select_ln109_155_fu_76631_p3.read()));
}

void poly1305_hw::thread_add_ln109_312_fu_76644_p2() {
    add_ln109_312_fu_76644_p2 = (!zext_ln109_312_fu_76625_p1.read().is_01() || !add_ln109_311_fu_76638_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_312_fu_76625_p1.read()) + sc_biguint<9>(add_ln109_311_fu_76638_p2.read()));
}

void poly1305_hw::thread_add_ln109_313_fu_76720_p2() {
    add_ln109_313_fu_76720_p2 = (!zext_ln109_315_fu_76710_p1.read().is_01() || !select_ln109_156_fu_76713_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_315_fu_76710_p1.read()) + sc_biguint<9>(select_ln109_156_fu_76713_p3.read()));
}

void poly1305_hw::thread_add_ln109_314_fu_76726_p2() {
    add_ln109_314_fu_76726_p2 = (!zext_ln109_314_fu_76707_p1.read().is_01() || !add_ln109_313_fu_76720_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_314_fu_76707_p1.read()) + sc_biguint<9>(add_ln109_313_fu_76720_p2.read()));
}

void poly1305_hw::thread_add_ln109_315_fu_76804_p2() {
    add_ln109_315_fu_76804_p2 = (!zext_ln109_317_fu_76793_p1.read().is_01() || !select_ln109_157_fu_76796_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_317_fu_76793_p1.read()) + sc_biguint<9>(select_ln109_157_fu_76796_p3.read()));
}

void poly1305_hw::thread_add_ln109_316_fu_76810_p2() {
    add_ln109_316_fu_76810_p2 = (!zext_ln109_316_fu_76789_p1.read().is_01() || !add_ln109_315_fu_76804_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_316_fu_76789_p1.read()) + sc_biguint<9>(add_ln109_315_fu_76804_p2.read()));
}

void poly1305_hw::thread_add_ln109_317_fu_76867_p2() {
    add_ln109_317_fu_76867_p2 = (!zext_ln109_319_fu_76857_p1.read().is_01() || !select_ln109_158_fu_76860_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_319_fu_76857_p1.read()) + sc_biguint<9>(select_ln109_158_fu_76860_p3.read()));
}

void poly1305_hw::thread_add_ln109_318_fu_76873_p2() {
    add_ln109_318_fu_76873_p2 = (!zext_ln109_318_fu_76854_p1.read().is_01() || !add_ln109_317_fu_76867_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_318_fu_76854_p1.read()) + sc_biguint<9>(add_ln109_317_fu_76867_p2.read()));
}

void poly1305_hw::thread_add_ln109_319_fu_76949_p2() {
    add_ln109_319_fu_76949_p2 = (!zext_ln109_321_fu_76939_p1.read().is_01() || !select_ln109_159_fu_76942_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_321_fu_76939_p1.read()) + sc_biguint<9>(select_ln109_159_fu_76942_p3.read()));
}

void poly1305_hw::thread_add_ln109_31_fu_65960_p2() {
    add_ln109_31_fu_65960_p2 = (!zext_ln109_33_fu_65948_p1.read().is_01() || !select_ln109_15_fu_65952_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_33_fu_65948_p1.read()) + sc_biguint<9>(select_ln109_15_fu_65952_p3.read()));
}

void poly1305_hw::thread_add_ln109_320_fu_76955_p2() {
    add_ln109_320_fu_76955_p2 = (!zext_ln109_320_fu_76936_p1.read().is_01() || !add_ln109_319_fu_76949_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_320_fu_76936_p1.read()) + sc_biguint<9>(add_ln109_319_fu_76949_p2.read()));
}

void poly1305_hw::thread_add_ln109_321_fu_77033_p2() {
    add_ln109_321_fu_77033_p2 = (!zext_ln109_323_fu_77022_p1.read().is_01() || !select_ln109_160_fu_77025_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_323_fu_77022_p1.read()) + sc_biguint<9>(select_ln109_160_fu_77025_p3.read()));
}

void poly1305_hw::thread_add_ln109_322_fu_77039_p2() {
    add_ln109_322_fu_77039_p2 = (!zext_ln109_322_fu_77018_p1.read().is_01() || !add_ln109_321_fu_77033_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_322_fu_77018_p1.read()) + sc_biguint<9>(add_ln109_321_fu_77033_p2.read()));
}

void poly1305_hw::thread_add_ln109_323_fu_77096_p2() {
    add_ln109_323_fu_77096_p2 = (!zext_ln109_325_fu_77086_p1.read().is_01() || !select_ln109_161_fu_77089_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_325_fu_77086_p1.read()) + sc_biguint<9>(select_ln109_161_fu_77089_p3.read()));
}

void poly1305_hw::thread_add_ln109_324_fu_77102_p2() {
    add_ln109_324_fu_77102_p2 = (!zext_ln109_324_fu_77083_p1.read().is_01() || !add_ln109_323_fu_77096_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_324_fu_77083_p1.read()) + sc_biguint<9>(add_ln109_323_fu_77096_p2.read()));
}

void poly1305_hw::thread_add_ln109_325_fu_77178_p2() {
    add_ln109_325_fu_77178_p2 = (!zext_ln109_327_fu_77168_p1.read().is_01() || !select_ln109_162_fu_77171_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_327_fu_77168_p1.read()) + sc_biguint<9>(select_ln109_162_fu_77171_p3.read()));
}

void poly1305_hw::thread_add_ln109_326_fu_77184_p2() {
    add_ln109_326_fu_77184_p2 = (!zext_ln109_326_fu_77165_p1.read().is_01() || !add_ln109_325_fu_77178_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_326_fu_77165_p1.read()) + sc_biguint<9>(add_ln109_325_fu_77178_p2.read()));
}

void poly1305_hw::thread_add_ln109_327_fu_77262_p2() {
    add_ln109_327_fu_77262_p2 = (!zext_ln109_329_fu_77251_p1.read().is_01() || !select_ln109_163_fu_77254_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_329_fu_77251_p1.read()) + sc_biguint<9>(select_ln109_163_fu_77254_p3.read()));
}

void poly1305_hw::thread_add_ln109_328_fu_77268_p2() {
    add_ln109_328_fu_77268_p2 = (!zext_ln109_328_fu_77247_p1.read().is_01() || !add_ln109_327_fu_77262_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_328_fu_77247_p1.read()) + sc_biguint<9>(add_ln109_327_fu_77262_p2.read()));
}

void poly1305_hw::thread_add_ln109_329_fu_77325_p2() {
    add_ln109_329_fu_77325_p2 = (!zext_ln109_331_fu_77315_p1.read().is_01() || !select_ln109_164_fu_77318_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_331_fu_77315_p1.read()) + sc_biguint<9>(select_ln109_164_fu_77318_p3.read()));
}

void poly1305_hw::thread_add_ln109_32_fu_65966_p2() {
    add_ln109_32_fu_65966_p2 = (!zext_ln109_32_fu_65944_p1.read().is_01() || !add_ln109_31_fu_65960_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_32_fu_65944_p1.read()) + sc_biguint<9>(add_ln109_31_fu_65960_p2.read()));
}

void poly1305_hw::thread_add_ln109_330_fu_77331_p2() {
    add_ln109_330_fu_77331_p2 = (!zext_ln109_330_fu_77312_p1.read().is_01() || !add_ln109_329_fu_77325_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_330_fu_77312_p1.read()) + sc_biguint<9>(add_ln109_329_fu_77325_p2.read()));
}

void poly1305_hw::thread_add_ln109_331_fu_77407_p2() {
    add_ln109_331_fu_77407_p2 = (!zext_ln109_333_fu_77397_p1.read().is_01() || !select_ln109_165_fu_77400_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_333_fu_77397_p1.read()) + sc_biguint<9>(select_ln109_165_fu_77400_p3.read()));
}

void poly1305_hw::thread_add_ln109_332_fu_77413_p2() {
    add_ln109_332_fu_77413_p2 = (!zext_ln109_332_fu_77394_p1.read().is_01() || !add_ln109_331_fu_77407_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_332_fu_77394_p1.read()) + sc_biguint<9>(add_ln109_331_fu_77407_p2.read()));
}

void poly1305_hw::thread_add_ln109_333_fu_77491_p2() {
    add_ln109_333_fu_77491_p2 = (!zext_ln109_335_fu_77480_p1.read().is_01() || !select_ln109_166_fu_77483_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_335_fu_77480_p1.read()) + sc_biguint<9>(select_ln109_166_fu_77483_p3.read()));
}

void poly1305_hw::thread_add_ln109_334_fu_77497_p2() {
    add_ln109_334_fu_77497_p2 = (!zext_ln109_334_fu_77476_p1.read().is_01() || !add_ln109_333_fu_77491_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_334_fu_77476_p1.read()) + sc_biguint<9>(add_ln109_333_fu_77491_p2.read()));
}

void poly1305_hw::thread_add_ln109_335_fu_77554_p2() {
    add_ln109_335_fu_77554_p2 = (!zext_ln109_337_fu_77544_p1.read().is_01() || !select_ln109_167_fu_77547_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_337_fu_77544_p1.read()) + sc_biguint<9>(select_ln109_167_fu_77547_p3.read()));
}

void poly1305_hw::thread_add_ln109_336_fu_77560_p2() {
    add_ln109_336_fu_77560_p2 = (!zext_ln109_336_fu_77541_p1.read().is_01() || !add_ln109_335_fu_77554_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_336_fu_77541_p1.read()) + sc_biguint<9>(add_ln109_335_fu_77554_p2.read()));
}

void poly1305_hw::thread_add_ln109_337_fu_77639_p2() {
    add_ln109_337_fu_77639_p2 = (!zext_ln109_339_fu_77627_p1.read().is_01() || !select_ln109_168_fu_77631_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_339_fu_77627_p1.read()) + sc_biguint<9>(select_ln109_168_fu_77631_p3.read()));
}

void poly1305_hw::thread_add_ln109_338_fu_77645_p2() {
    add_ln109_338_fu_77645_p2 = (!zext_ln109_338_fu_77623_p1.read().is_01() || !add_ln109_337_fu_77639_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_338_fu_77623_p1.read()) + sc_biguint<9>(add_ln109_337_fu_77639_p2.read()));
}

void poly1305_hw::thread_add_ln109_339_fu_77706_p2() {
    add_ln109_339_fu_77706_p2 = (!zext_ln109_341_fu_77696_p1.read().is_01() || !select_ln109_169_fu_77699_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_341_fu_77696_p1.read()) + sc_biguint<9>(select_ln109_169_fu_77699_p3.read()));
}

void poly1305_hw::thread_add_ln109_33_fu_66027_p2() {
    add_ln109_33_fu_66027_p2 = (!zext_ln109_35_fu_66017_p1.read().is_01() || !select_ln109_16_fu_66020_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_35_fu_66017_p1.read()) + sc_biguint<9>(select_ln109_16_fu_66020_p3.read()));
}

void poly1305_hw::thread_add_ln109_340_fu_77712_p2() {
    add_ln109_340_fu_77712_p2 = (!zext_ln109_340_fu_77693_p1.read().is_01() || !add_ln109_339_fu_77706_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_340_fu_77693_p1.read()) + sc_biguint<9>(add_ln109_339_fu_77706_p2.read()));
}

void poly1305_hw::thread_add_ln109_341_fu_77788_p2() {
    add_ln109_341_fu_77788_p2 = (!zext_ln109_343_fu_77778_p1.read().is_01() || !select_ln109_170_fu_77781_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_343_fu_77778_p1.read()) + sc_biguint<9>(select_ln109_170_fu_77781_p3.read()));
}

void poly1305_hw::thread_add_ln109_342_fu_77794_p2() {
    add_ln109_342_fu_77794_p2 = (!zext_ln109_342_fu_77775_p1.read().is_01() || !add_ln109_341_fu_77788_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_342_fu_77775_p1.read()) + sc_biguint<9>(add_ln109_341_fu_77788_p2.read()));
}

void poly1305_hw::thread_add_ln109_343_fu_77872_p2() {
    add_ln109_343_fu_77872_p2 = (!zext_ln109_345_fu_77861_p1.read().is_01() || !select_ln109_171_fu_77864_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_345_fu_77861_p1.read()) + sc_biguint<9>(select_ln109_171_fu_77864_p3.read()));
}

void poly1305_hw::thread_add_ln109_344_fu_77878_p2() {
    add_ln109_344_fu_77878_p2 = (!zext_ln109_344_fu_77857_p1.read().is_01() || !add_ln109_343_fu_77872_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_344_fu_77857_p1.read()) + sc_biguint<9>(add_ln109_343_fu_77872_p2.read()));
}

void poly1305_hw::thread_add_ln109_345_fu_77935_p2() {
    add_ln109_345_fu_77935_p2 = (!zext_ln109_347_fu_77925_p1.read().is_01() || !select_ln109_172_fu_77928_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_347_fu_77925_p1.read()) + sc_biguint<9>(select_ln109_172_fu_77928_p3.read()));
}

void poly1305_hw::thread_add_ln109_346_fu_77941_p2() {
    add_ln109_346_fu_77941_p2 = (!zext_ln109_346_fu_77922_p1.read().is_01() || !add_ln109_345_fu_77935_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_346_fu_77922_p1.read()) + sc_biguint<9>(add_ln109_345_fu_77935_p2.read()));
}

void poly1305_hw::thread_add_ln109_347_fu_78017_p2() {
    add_ln109_347_fu_78017_p2 = (!zext_ln109_349_fu_78007_p1.read().is_01() || !select_ln109_173_fu_78010_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_349_fu_78007_p1.read()) + sc_biguint<9>(select_ln109_173_fu_78010_p3.read()));
}

void poly1305_hw::thread_add_ln109_348_fu_78023_p2() {
    add_ln109_348_fu_78023_p2 = (!zext_ln109_348_fu_78004_p1.read().is_01() || !add_ln109_347_fu_78017_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_348_fu_78004_p1.read()) + sc_biguint<9>(add_ln109_347_fu_78017_p2.read()));
}

void poly1305_hw::thread_add_ln109_349_fu_78101_p2() {
    add_ln109_349_fu_78101_p2 = (!zext_ln109_351_fu_78090_p1.read().is_01() || !select_ln109_174_fu_78093_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_351_fu_78090_p1.read()) + sc_biguint<9>(select_ln109_174_fu_78093_p3.read()));
}

void poly1305_hw::thread_add_ln109_34_fu_66033_p2() {
    add_ln109_34_fu_66033_p2 = (!zext_ln109_34_fu_66014_p1.read().is_01() || !add_ln109_33_fu_66027_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_34_fu_66014_p1.read()) + sc_biguint<9>(add_ln109_33_fu_66027_p2.read()));
}

void poly1305_hw::thread_add_ln109_350_fu_78107_p2() {
    add_ln109_350_fu_78107_p2 = (!zext_ln109_350_fu_78086_p1.read().is_01() || !add_ln109_349_fu_78101_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_350_fu_78086_p1.read()) + sc_biguint<9>(add_ln109_349_fu_78101_p2.read()));
}

void poly1305_hw::thread_add_ln109_351_fu_78164_p2() {
    add_ln109_351_fu_78164_p2 = (!zext_ln109_353_fu_78154_p1.read().is_01() || !select_ln109_175_fu_78157_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_353_fu_78154_p1.read()) + sc_biguint<9>(select_ln109_175_fu_78157_p3.read()));
}

void poly1305_hw::thread_add_ln109_352_fu_78170_p2() {
    add_ln109_352_fu_78170_p2 = (!zext_ln109_352_fu_78151_p1.read().is_01() || !add_ln109_351_fu_78164_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_352_fu_78151_p1.read()) + sc_biguint<9>(add_ln109_351_fu_78164_p2.read()));
}

void poly1305_hw::thread_add_ln109_353_fu_78246_p2() {
    add_ln109_353_fu_78246_p2 = (!zext_ln109_355_fu_78236_p1.read().is_01() || !select_ln109_176_fu_78239_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_355_fu_78236_p1.read()) + sc_biguint<9>(select_ln109_176_fu_78239_p3.read()));
}

void poly1305_hw::thread_add_ln109_354_fu_78252_p2() {
    add_ln109_354_fu_78252_p2 = (!zext_ln109_354_fu_78233_p1.read().is_01() || !add_ln109_353_fu_78246_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_354_fu_78233_p1.read()) + sc_biguint<9>(add_ln109_353_fu_78246_p2.read()));
}

void poly1305_hw::thread_add_ln109_355_fu_78330_p2() {
    add_ln109_355_fu_78330_p2 = (!zext_ln109_357_fu_78319_p1.read().is_01() || !select_ln109_177_fu_78322_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_357_fu_78319_p1.read()) + sc_biguint<9>(select_ln109_177_fu_78322_p3.read()));
}

void poly1305_hw::thread_add_ln109_356_fu_78336_p2() {
    add_ln109_356_fu_78336_p2 = (!zext_ln109_356_fu_78315_p1.read().is_01() || !add_ln109_355_fu_78330_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_356_fu_78315_p1.read()) + sc_biguint<9>(add_ln109_355_fu_78330_p2.read()));
}

void poly1305_hw::thread_add_ln109_357_fu_78393_p2() {
    add_ln109_357_fu_78393_p2 = (!zext_ln109_359_fu_78383_p1.read().is_01() || !select_ln109_178_fu_78386_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_359_fu_78383_p1.read()) + sc_biguint<9>(select_ln109_178_fu_78386_p3.read()));
}

void poly1305_hw::thread_add_ln109_358_fu_78399_p2() {
    add_ln109_358_fu_78399_p2 = (!zext_ln109_358_fu_78380_p1.read().is_01() || !add_ln109_357_fu_78393_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_358_fu_78380_p1.read()) + sc_biguint<9>(add_ln109_357_fu_78393_p2.read()));
}

void poly1305_hw::thread_add_ln109_359_fu_78475_p2() {
    add_ln109_359_fu_78475_p2 = (!zext_ln109_361_fu_78465_p1.read().is_01() || !select_ln109_179_fu_78468_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_361_fu_78465_p1.read()) + sc_biguint<9>(select_ln109_179_fu_78468_p3.read()));
}

void poly1305_hw::thread_add_ln109_35_fu_66109_p2() {
    add_ln109_35_fu_66109_p2 = (!zext_ln109_37_fu_66099_p1.read().is_01() || !select_ln109_17_fu_66102_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_37_fu_66099_p1.read()) + sc_biguint<9>(select_ln109_17_fu_66102_p3.read()));
}

void poly1305_hw::thread_add_ln109_360_fu_78481_p2() {
    add_ln109_360_fu_78481_p2 = (!zext_ln109_360_fu_78462_p1.read().is_01() || !add_ln109_359_fu_78475_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_360_fu_78462_p1.read()) + sc_biguint<9>(add_ln109_359_fu_78475_p2.read()));
}

void poly1305_hw::thread_add_ln109_361_fu_78559_p2() {
    add_ln109_361_fu_78559_p2 = (!zext_ln109_363_fu_78548_p1.read().is_01() || !select_ln109_180_fu_78551_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_363_fu_78548_p1.read()) + sc_biguint<9>(select_ln109_180_fu_78551_p3.read()));
}

void poly1305_hw::thread_add_ln109_362_fu_78565_p2() {
    add_ln109_362_fu_78565_p2 = (!zext_ln109_362_fu_78544_p1.read().is_01() || !add_ln109_361_fu_78559_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_362_fu_78544_p1.read()) + sc_biguint<9>(add_ln109_361_fu_78559_p2.read()));
}

void poly1305_hw::thread_add_ln109_363_fu_78622_p2() {
    add_ln109_363_fu_78622_p2 = (!zext_ln109_365_fu_78612_p1.read().is_01() || !select_ln109_181_fu_78615_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_365_fu_78612_p1.read()) + sc_biguint<9>(select_ln109_181_fu_78615_p3.read()));
}

void poly1305_hw::thread_add_ln109_364_fu_78628_p2() {
    add_ln109_364_fu_78628_p2 = (!zext_ln109_364_fu_78609_p1.read().is_01() || !add_ln109_363_fu_78622_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_364_fu_78609_p1.read()) + sc_biguint<9>(add_ln109_363_fu_78622_p2.read()));
}

void poly1305_hw::thread_add_ln109_365_fu_78704_p2() {
    add_ln109_365_fu_78704_p2 = (!zext_ln109_367_fu_78694_p1.read().is_01() || !select_ln109_182_fu_78697_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_367_fu_78694_p1.read()) + sc_biguint<9>(select_ln109_182_fu_78697_p3.read()));
}

void poly1305_hw::thread_add_ln109_366_fu_78710_p2() {
    add_ln109_366_fu_78710_p2 = (!zext_ln109_366_fu_78691_p1.read().is_01() || !add_ln109_365_fu_78704_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_366_fu_78691_p1.read()) + sc_biguint<9>(add_ln109_365_fu_78704_p2.read()));
}

void poly1305_hw::thread_add_ln109_367_fu_78788_p2() {
    add_ln109_367_fu_78788_p2 = (!zext_ln109_369_fu_78777_p1.read().is_01() || !select_ln109_183_fu_78780_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_369_fu_78777_p1.read()) + sc_biguint<9>(select_ln109_183_fu_78780_p3.read()));
}

void poly1305_hw::thread_add_ln109_368_fu_78794_p2() {
    add_ln109_368_fu_78794_p2 = (!zext_ln109_368_fu_78773_p1.read().is_01() || !add_ln109_367_fu_78788_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_368_fu_78773_p1.read()) + sc_biguint<9>(add_ln109_367_fu_78788_p2.read()));
}

void poly1305_hw::thread_add_ln109_369_fu_78851_p2() {
    add_ln109_369_fu_78851_p2 = (!zext_ln109_371_fu_78841_p1.read().is_01() || !select_ln109_184_fu_78844_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_371_fu_78841_p1.read()) + sc_biguint<9>(select_ln109_184_fu_78844_p3.read()));
}

void poly1305_hw::thread_add_ln109_36_fu_66115_p2() {
    add_ln109_36_fu_66115_p2 = (!zext_ln109_36_fu_66096_p1.read().is_01() || !add_ln109_35_fu_66109_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_36_fu_66096_p1.read()) + sc_biguint<9>(add_ln109_35_fu_66109_p2.read()));
}

void poly1305_hw::thread_add_ln109_370_fu_78857_p2() {
    add_ln109_370_fu_78857_p2 = (!zext_ln109_370_fu_78838_p1.read().is_01() || !add_ln109_369_fu_78851_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_370_fu_78838_p1.read()) + sc_biguint<9>(add_ln109_369_fu_78851_p2.read()));
}

void poly1305_hw::thread_add_ln109_371_fu_78936_p2() {
    add_ln109_371_fu_78936_p2 = (!zext_ln109_373_fu_78924_p1.read().is_01() || !select_ln109_185_fu_78928_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_373_fu_78924_p1.read()) + sc_biguint<9>(select_ln109_185_fu_78928_p3.read()));
}

void poly1305_hw::thread_add_ln109_372_fu_78942_p2() {
    add_ln109_372_fu_78942_p2 = (!zext_ln109_372_fu_78920_p1.read().is_01() || !add_ln109_371_fu_78936_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_372_fu_78920_p1.read()) + sc_biguint<9>(add_ln109_371_fu_78936_p2.read()));
}

void poly1305_hw::thread_add_ln109_373_fu_79007_p2() {
    add_ln109_373_fu_79007_p2 = (!zext_ln109_375_fu_78997_p1.read().is_01() || !select_ln109_186_fu_79000_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_375_fu_78997_p1.read()) + sc_biguint<9>(select_ln109_186_fu_79000_p3.read()));
}

void poly1305_hw::thread_add_ln109_374_fu_79013_p2() {
    add_ln109_374_fu_79013_p2 = (!zext_ln109_374_fu_78994_p1.read().is_01() || !add_ln109_373_fu_79007_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_374_fu_78994_p1.read()) + sc_biguint<9>(add_ln109_373_fu_79007_p2.read()));
}

void poly1305_hw::thread_add_ln109_375_fu_79089_p2() {
    add_ln109_375_fu_79089_p2 = (!zext_ln109_377_fu_79079_p1.read().is_01() || !select_ln109_187_fu_79082_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_377_fu_79079_p1.read()) + sc_biguint<9>(select_ln109_187_fu_79082_p3.read()));
}

void poly1305_hw::thread_add_ln109_376_fu_79095_p2() {
    add_ln109_376_fu_79095_p2 = (!zext_ln109_376_fu_79076_p1.read().is_01() || !add_ln109_375_fu_79089_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_376_fu_79076_p1.read()) + sc_biguint<9>(add_ln109_375_fu_79089_p2.read()));
}

void poly1305_hw::thread_add_ln109_377_fu_79173_p2() {
    add_ln109_377_fu_79173_p2 = (!zext_ln109_379_fu_79162_p1.read().is_01() || !select_ln109_188_fu_79165_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_379_fu_79162_p1.read()) + sc_biguint<9>(select_ln109_188_fu_79165_p3.read()));
}

void poly1305_hw::thread_add_ln109_378_fu_79179_p2() {
    add_ln109_378_fu_79179_p2 = (!zext_ln109_378_fu_79158_p1.read().is_01() || !add_ln109_377_fu_79173_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_378_fu_79158_p1.read()) + sc_biguint<9>(add_ln109_377_fu_79173_p2.read()));
}

void poly1305_hw::thread_add_ln109_379_fu_79236_p2() {
    add_ln109_379_fu_79236_p2 = (!zext_ln109_381_fu_79226_p1.read().is_01() || !select_ln109_189_fu_79229_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_381_fu_79226_p1.read()) + sc_biguint<9>(select_ln109_189_fu_79229_p3.read()));
}

void poly1305_hw::thread_add_ln109_37_fu_66193_p2() {
    add_ln109_37_fu_66193_p2 = (!zext_ln109_39_fu_66182_p1.read().is_01() || !select_ln109_18_fu_66185_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_39_fu_66182_p1.read()) + sc_biguint<9>(select_ln109_18_fu_66185_p3.read()));
}

void poly1305_hw::thread_add_ln109_380_fu_79242_p2() {
    add_ln109_380_fu_79242_p2 = (!zext_ln109_380_fu_79223_p1.read().is_01() || !add_ln109_379_fu_79236_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_380_fu_79223_p1.read()) + sc_biguint<9>(add_ln109_379_fu_79236_p2.read()));
}

void poly1305_hw::thread_add_ln109_381_fu_79318_p2() {
    add_ln109_381_fu_79318_p2 = (!zext_ln109_383_fu_79308_p1.read().is_01() || !select_ln109_190_fu_79311_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_383_fu_79308_p1.read()) + sc_biguint<9>(select_ln109_190_fu_79311_p3.read()));
}

void poly1305_hw::thread_add_ln109_382_fu_79324_p2() {
    add_ln109_382_fu_79324_p2 = (!zext_ln109_382_fu_79305_p1.read().is_01() || !add_ln109_381_fu_79318_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_382_fu_79305_p1.read()) + sc_biguint<9>(add_ln109_381_fu_79318_p2.read()));
}

void poly1305_hw::thread_add_ln109_383_fu_79402_p2() {
    add_ln109_383_fu_79402_p2 = (!zext_ln109_385_fu_79391_p1.read().is_01() || !select_ln109_191_fu_79394_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_385_fu_79391_p1.read()) + sc_biguint<9>(select_ln109_191_fu_79394_p3.read()));
}

void poly1305_hw::thread_add_ln109_384_fu_79408_p2() {
    add_ln109_384_fu_79408_p2 = (!zext_ln109_384_fu_79387_p1.read().is_01() || !add_ln109_383_fu_79402_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_384_fu_79387_p1.read()) + sc_biguint<9>(add_ln109_383_fu_79402_p2.read()));
}

void poly1305_hw::thread_add_ln109_385_fu_79465_p2() {
    add_ln109_385_fu_79465_p2 = (!zext_ln109_387_fu_79455_p1.read().is_01() || !select_ln109_192_fu_79458_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_387_fu_79455_p1.read()) + sc_biguint<9>(select_ln109_192_fu_79458_p3.read()));
}

void poly1305_hw::thread_add_ln109_386_fu_79471_p2() {
    add_ln109_386_fu_79471_p2 = (!zext_ln109_386_fu_79452_p1.read().is_01() || !add_ln109_385_fu_79465_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_386_fu_79452_p1.read()) + sc_biguint<9>(add_ln109_385_fu_79465_p2.read()));
}

void poly1305_hw::thread_add_ln109_387_fu_79547_p2() {
    add_ln109_387_fu_79547_p2 = (!zext_ln109_389_fu_79537_p1.read().is_01() || !select_ln109_193_fu_79540_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_389_fu_79537_p1.read()) + sc_biguint<9>(select_ln109_193_fu_79540_p3.read()));
}

void poly1305_hw::thread_add_ln109_388_fu_79553_p2() {
    add_ln109_388_fu_79553_p2 = (!zext_ln109_388_fu_79534_p1.read().is_01() || !add_ln109_387_fu_79547_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_388_fu_79534_p1.read()) + sc_biguint<9>(add_ln109_387_fu_79547_p2.read()));
}

void poly1305_hw::thread_add_ln109_389_fu_79631_p2() {
    add_ln109_389_fu_79631_p2 = (!zext_ln109_391_fu_79620_p1.read().is_01() || !select_ln109_194_fu_79623_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_391_fu_79620_p1.read()) + sc_biguint<9>(select_ln109_194_fu_79623_p3.read()));
}

void poly1305_hw::thread_add_ln109_38_fu_66199_p2() {
    add_ln109_38_fu_66199_p2 = (!zext_ln109_38_fu_66178_p1.read().is_01() || !add_ln109_37_fu_66193_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_38_fu_66178_p1.read()) + sc_biguint<9>(add_ln109_37_fu_66193_p2.read()));
}

void poly1305_hw::thread_add_ln109_390_fu_79637_p2() {
    add_ln109_390_fu_79637_p2 = (!zext_ln109_390_fu_79616_p1.read().is_01() || !add_ln109_389_fu_79631_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_390_fu_79616_p1.read()) + sc_biguint<9>(add_ln109_389_fu_79631_p2.read()));
}

void poly1305_hw::thread_add_ln109_391_fu_79694_p2() {
    add_ln109_391_fu_79694_p2 = (!zext_ln109_393_fu_79684_p1.read().is_01() || !select_ln109_195_fu_79687_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_393_fu_79684_p1.read()) + sc_biguint<9>(select_ln109_195_fu_79687_p3.read()));
}

void poly1305_hw::thread_add_ln109_392_fu_79700_p2() {
    add_ln109_392_fu_79700_p2 = (!zext_ln109_392_fu_79681_p1.read().is_01() || !add_ln109_391_fu_79694_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_392_fu_79681_p1.read()) + sc_biguint<9>(add_ln109_391_fu_79694_p2.read()));
}

void poly1305_hw::thread_add_ln109_393_fu_79776_p2() {
    add_ln109_393_fu_79776_p2 = (!zext_ln109_395_fu_79766_p1.read().is_01() || !select_ln109_196_fu_79769_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_395_fu_79766_p1.read()) + sc_biguint<9>(select_ln109_196_fu_79769_p3.read()));
}

void poly1305_hw::thread_add_ln109_394_fu_79782_p2() {
    add_ln109_394_fu_79782_p2 = (!zext_ln109_394_fu_79763_p1.read().is_01() || !add_ln109_393_fu_79776_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_394_fu_79763_p1.read()) + sc_biguint<9>(add_ln109_393_fu_79776_p2.read()));
}

void poly1305_hw::thread_add_ln109_395_fu_79860_p2() {
    add_ln109_395_fu_79860_p2 = (!zext_ln109_397_fu_79849_p1.read().is_01() || !select_ln109_197_fu_79852_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_397_fu_79849_p1.read()) + sc_biguint<9>(select_ln109_197_fu_79852_p3.read()));
}

void poly1305_hw::thread_add_ln109_396_fu_79866_p2() {
    add_ln109_396_fu_79866_p2 = (!zext_ln109_396_fu_79845_p1.read().is_01() || !add_ln109_395_fu_79860_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_396_fu_79845_p1.read()) + sc_biguint<9>(add_ln109_395_fu_79860_p2.read()));
}

void poly1305_hw::thread_add_ln109_397_fu_79923_p2() {
    add_ln109_397_fu_79923_p2 = (!zext_ln109_399_fu_79913_p1.read().is_01() || !select_ln109_198_fu_79916_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_399_fu_79913_p1.read()) + sc_biguint<9>(select_ln109_198_fu_79916_p3.read()));
}

void poly1305_hw::thread_add_ln109_398_fu_79929_p2() {
    add_ln109_398_fu_79929_p2 = (!zext_ln109_398_fu_79910_p1.read().is_01() || !add_ln109_397_fu_79923_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_398_fu_79910_p1.read()) + sc_biguint<9>(add_ln109_397_fu_79923_p2.read()));
}

void poly1305_hw::thread_add_ln109_399_fu_80005_p2() {
    add_ln109_399_fu_80005_p2 = (!zext_ln109_401_fu_79995_p1.read().is_01() || !select_ln109_199_fu_79998_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_401_fu_79995_p1.read()) + sc_biguint<9>(select_ln109_199_fu_79998_p3.read()));
}

void poly1305_hw::thread_add_ln109_39_fu_66256_p2() {
    add_ln109_39_fu_66256_p2 = (!zext_ln109_41_fu_66246_p1.read().is_01() || !select_ln109_19_fu_66249_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_41_fu_66246_p1.read()) + sc_biguint<9>(select_ln109_19_fu_66249_p3.read()));
}

void poly1305_hw::thread_add_ln109_3_fu_64896_p2() {
    add_ln109_3_fu_64896_p2 = (!zext_ln109_5_fu_64885_p1.read().is_01() || !select_ln109_1_fu_64888_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_5_fu_64885_p1.read()) + sc_biguint<9>(select_ln109_1_fu_64888_p3.read()));
}

void poly1305_hw::thread_add_ln109_400_fu_80011_p2() {
    add_ln109_400_fu_80011_p2 = (!zext_ln109_400_fu_79992_p1.read().is_01() || !add_ln109_399_fu_80005_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_400_fu_79992_p1.read()) + sc_biguint<9>(add_ln109_399_fu_80005_p2.read()));
}

void poly1305_hw::thread_add_ln109_401_fu_80089_p2() {
    add_ln109_401_fu_80089_p2 = (!zext_ln109_403_fu_80078_p1.read().is_01() || !select_ln109_200_fu_80081_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_403_fu_80078_p1.read()) + sc_biguint<9>(select_ln109_200_fu_80081_p3.read()));
}

void poly1305_hw::thread_add_ln109_402_fu_80095_p2() {
    add_ln109_402_fu_80095_p2 = (!zext_ln109_402_fu_80074_p1.read().is_01() || !add_ln109_401_fu_80089_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_402_fu_80074_p1.read()) + sc_biguint<9>(add_ln109_401_fu_80089_p2.read()));
}

void poly1305_hw::thread_add_ln109_403_fu_80152_p2() {
    add_ln109_403_fu_80152_p2 = (!zext_ln109_405_fu_80142_p1.read().is_01() || !select_ln109_201_fu_80145_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_405_fu_80142_p1.read()) + sc_biguint<9>(select_ln109_201_fu_80145_p3.read()));
}

void poly1305_hw::thread_add_ln109_404_fu_80158_p2() {
    add_ln109_404_fu_80158_p2 = (!zext_ln109_404_fu_80139_p1.read().is_01() || !add_ln109_403_fu_80152_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_404_fu_80139_p1.read()) + sc_biguint<9>(add_ln109_403_fu_80152_p2.read()));
}

void poly1305_hw::thread_add_ln109_405_fu_80233_p2() {
    add_ln109_405_fu_80233_p2 = (!mul_28_reg_14959.read().is_01() || !select_ln109_202_fu_80225_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(mul_28_reg_14959.read()) + sc_biguint<4>(select_ln109_202_fu_80225_p3.read()));
}

void poly1305_hw::thread_add_ln109_406_fu_80243_p2() {
    add_ln109_406_fu_80243_p2 = (!zext_ln109_406_fu_80221_p1.read().is_01() || !zext_ln109_407_fu_80239_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_406_fu_80221_p1.read()) + sc_biguint<9>(zext_ln109_407_fu_80239_p1.read()));
}

void poly1305_hw::thread_add_ln109_407_fu_80303_p2() {
    add_ln109_407_fu_80303_p2 = (!zext_ln109_409_fu_80293_p1.read().is_01() || !select_ln109_203_fu_80296_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_409_fu_80293_p1.read()) + sc_biguint<9>(select_ln109_203_fu_80296_p3.read()));
}

void poly1305_hw::thread_add_ln109_408_fu_80309_p2() {
    add_ln109_408_fu_80309_p2 = (!zext_ln109_408_fu_80290_p1.read().is_01() || !add_ln109_407_fu_80303_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_408_fu_80290_p1.read()) + sc_biguint<9>(add_ln109_407_fu_80303_p2.read()));
}

void poly1305_hw::thread_add_ln109_409_fu_80385_p2() {
    add_ln109_409_fu_80385_p2 = (!zext_ln109_411_fu_80375_p1.read().is_01() || !select_ln109_204_fu_80378_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_411_fu_80375_p1.read()) + sc_biguint<9>(select_ln109_204_fu_80378_p3.read()));
}

void poly1305_hw::thread_add_ln109_40_fu_66262_p2() {
    add_ln109_40_fu_66262_p2 = (!zext_ln109_40_fu_66243_p1.read().is_01() || !add_ln109_39_fu_66256_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_40_fu_66243_p1.read()) + sc_biguint<9>(add_ln109_39_fu_66256_p2.read()));
}

void poly1305_hw::thread_add_ln109_410_fu_80391_p2() {
    add_ln109_410_fu_80391_p2 = (!zext_ln109_410_fu_80372_p1.read().is_01() || !add_ln109_409_fu_80385_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_410_fu_80372_p1.read()) + sc_biguint<9>(add_ln109_409_fu_80385_p2.read()));
}

void poly1305_hw::thread_add_ln109_411_fu_80469_p2() {
    add_ln109_411_fu_80469_p2 = (!zext_ln109_413_fu_80458_p1.read().is_01() || !select_ln109_205_fu_80461_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_413_fu_80458_p1.read()) + sc_biguint<9>(select_ln109_205_fu_80461_p3.read()));
}

void poly1305_hw::thread_add_ln109_412_fu_80475_p2() {
    add_ln109_412_fu_80475_p2 = (!zext_ln109_412_fu_80454_p1.read().is_01() || !add_ln109_411_fu_80469_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_412_fu_80454_p1.read()) + sc_biguint<9>(add_ln109_411_fu_80469_p2.read()));
}

void poly1305_hw::thread_add_ln109_413_fu_80532_p2() {
    add_ln109_413_fu_80532_p2 = (!zext_ln109_415_fu_80522_p1.read().is_01() || !select_ln109_206_fu_80525_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_415_fu_80522_p1.read()) + sc_biguint<9>(select_ln109_206_fu_80525_p3.read()));
}

void poly1305_hw::thread_add_ln109_414_fu_80538_p2() {
    add_ln109_414_fu_80538_p2 = (!zext_ln109_414_fu_80519_p1.read().is_01() || !add_ln109_413_fu_80532_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_414_fu_80519_p1.read()) + sc_biguint<9>(add_ln109_413_fu_80532_p2.read()));
}

void poly1305_hw::thread_add_ln109_415_fu_80614_p2() {
    add_ln109_415_fu_80614_p2 = (!zext_ln109_417_fu_80604_p1.read().is_01() || !select_ln109_207_fu_80607_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_417_fu_80604_p1.read()) + sc_biguint<9>(select_ln109_207_fu_80607_p3.read()));
}

void poly1305_hw::thread_add_ln109_416_fu_80620_p2() {
    add_ln109_416_fu_80620_p2 = (!zext_ln109_416_fu_80601_p1.read().is_01() || !add_ln109_415_fu_80614_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_416_fu_80601_p1.read()) + sc_biguint<9>(add_ln109_415_fu_80614_p2.read()));
}

void poly1305_hw::thread_add_ln109_417_fu_80698_p2() {
    add_ln109_417_fu_80698_p2 = (!zext_ln109_419_fu_80687_p1.read().is_01() || !select_ln109_208_fu_80690_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_419_fu_80687_p1.read()) + sc_biguint<9>(select_ln109_208_fu_80690_p3.read()));
}

void poly1305_hw::thread_add_ln109_418_fu_80704_p2() {
    add_ln109_418_fu_80704_p2 = (!zext_ln109_418_fu_80683_p1.read().is_01() || !add_ln109_417_fu_80698_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_418_fu_80683_p1.read()) + sc_biguint<9>(add_ln109_417_fu_80698_p2.read()));
}

void poly1305_hw::thread_add_ln109_419_fu_80761_p2() {
    add_ln109_419_fu_80761_p2 = (!zext_ln109_421_fu_80751_p1.read().is_01() || !select_ln109_209_fu_80754_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_421_fu_80751_p1.read()) + sc_biguint<9>(select_ln109_209_fu_80754_p3.read()));
}

void poly1305_hw::thread_add_ln109_41_fu_66338_p2() {
    add_ln109_41_fu_66338_p2 = (!zext_ln109_43_fu_66328_p1.read().is_01() || !select_ln109_20_fu_66331_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_43_fu_66328_p1.read()) + sc_biguint<9>(select_ln109_20_fu_66331_p3.read()));
}

void poly1305_hw::thread_add_ln109_420_fu_80767_p2() {
    add_ln109_420_fu_80767_p2 = (!zext_ln109_420_fu_80748_p1.read().is_01() || !add_ln109_419_fu_80761_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_420_fu_80748_p1.read()) + sc_biguint<9>(add_ln109_419_fu_80761_p2.read()));
}

void poly1305_hw::thread_add_ln109_421_fu_80843_p2() {
    add_ln109_421_fu_80843_p2 = (!zext_ln109_423_fu_80833_p1.read().is_01() || !select_ln109_210_fu_80836_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_423_fu_80833_p1.read()) + sc_biguint<9>(select_ln109_210_fu_80836_p3.read()));
}

void poly1305_hw::thread_add_ln109_422_fu_80849_p2() {
    add_ln109_422_fu_80849_p2 = (!zext_ln109_422_fu_80830_p1.read().is_01() || !add_ln109_421_fu_80843_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_422_fu_80830_p1.read()) + sc_biguint<9>(add_ln109_421_fu_80843_p2.read()));
}

void poly1305_hw::thread_add_ln109_423_fu_80927_p2() {
    add_ln109_423_fu_80927_p2 = (!zext_ln109_425_fu_80916_p1.read().is_01() || !select_ln109_211_fu_80919_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_425_fu_80916_p1.read()) + sc_biguint<9>(select_ln109_211_fu_80919_p3.read()));
}

void poly1305_hw::thread_add_ln109_424_fu_80933_p2() {
    add_ln109_424_fu_80933_p2 = (!zext_ln109_424_fu_80912_p1.read().is_01() || !add_ln109_423_fu_80927_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_424_fu_80912_p1.read()) + sc_biguint<9>(add_ln109_423_fu_80927_p2.read()));
}

void poly1305_hw::thread_add_ln109_425_fu_80990_p2() {
    add_ln109_425_fu_80990_p2 = (!zext_ln109_427_fu_80980_p1.read().is_01() || !select_ln109_212_fu_80983_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_427_fu_80980_p1.read()) + sc_biguint<9>(select_ln109_212_fu_80983_p3.read()));
}

void poly1305_hw::thread_add_ln109_426_fu_80996_p2() {
    add_ln109_426_fu_80996_p2 = (!zext_ln109_426_fu_80977_p1.read().is_01() || !add_ln109_425_fu_80990_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_426_fu_80977_p1.read()) + sc_biguint<9>(add_ln109_425_fu_80990_p2.read()));
}

void poly1305_hw::thread_add_ln109_427_fu_81072_p2() {
    add_ln109_427_fu_81072_p2 = (!zext_ln109_429_fu_81062_p1.read().is_01() || !select_ln109_213_fu_81065_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_429_fu_81062_p1.read()) + sc_biguint<9>(select_ln109_213_fu_81065_p3.read()));
}

void poly1305_hw::thread_add_ln109_428_fu_81078_p2() {
    add_ln109_428_fu_81078_p2 = (!zext_ln109_428_fu_81059_p1.read().is_01() || !add_ln109_427_fu_81072_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_428_fu_81059_p1.read()) + sc_biguint<9>(add_ln109_427_fu_81072_p2.read()));
}

void poly1305_hw::thread_add_ln109_429_fu_81156_p2() {
    add_ln109_429_fu_81156_p2 = (!zext_ln109_431_fu_81145_p1.read().is_01() || !select_ln109_214_fu_81148_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_431_fu_81145_p1.read()) + sc_biguint<9>(select_ln109_214_fu_81148_p3.read()));
}

void poly1305_hw::thread_add_ln109_42_fu_66344_p2() {
    add_ln109_42_fu_66344_p2 = (!zext_ln109_42_fu_66325_p1.read().is_01() || !add_ln109_41_fu_66338_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_42_fu_66325_p1.read()) + sc_biguint<9>(add_ln109_41_fu_66338_p2.read()));
}

void poly1305_hw::thread_add_ln109_430_fu_81162_p2() {
    add_ln109_430_fu_81162_p2 = (!zext_ln109_430_fu_81141_p1.read().is_01() || !add_ln109_429_fu_81156_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_430_fu_81141_p1.read()) + sc_biguint<9>(add_ln109_429_fu_81156_p2.read()));
}

void poly1305_hw::thread_add_ln109_431_fu_81219_p2() {
    add_ln109_431_fu_81219_p2 = (!zext_ln109_433_fu_81209_p1.read().is_01() || !select_ln109_215_fu_81212_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_433_fu_81209_p1.read()) + sc_biguint<9>(select_ln109_215_fu_81212_p3.read()));
}

void poly1305_hw::thread_add_ln109_432_fu_81225_p2() {
    add_ln109_432_fu_81225_p2 = (!zext_ln109_432_fu_81206_p1.read().is_01() || !add_ln109_431_fu_81219_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_432_fu_81206_p1.read()) + sc_biguint<9>(add_ln109_431_fu_81219_p2.read()));
}

void poly1305_hw::thread_add_ln109_433_fu_81301_p2() {
    add_ln109_433_fu_81301_p2 = (!zext_ln109_435_fu_81291_p1.read().is_01() || !select_ln109_216_fu_81294_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_435_fu_81291_p1.read()) + sc_biguint<9>(select_ln109_216_fu_81294_p3.read()));
}

void poly1305_hw::thread_add_ln109_434_fu_81307_p2() {
    add_ln109_434_fu_81307_p2 = (!zext_ln109_434_fu_81288_p1.read().is_01() || !add_ln109_433_fu_81301_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_434_fu_81288_p1.read()) + sc_biguint<9>(add_ln109_433_fu_81301_p2.read()));
}

void poly1305_hw::thread_add_ln109_435_fu_81385_p2() {
    add_ln109_435_fu_81385_p2 = (!zext_ln109_437_fu_81374_p1.read().is_01() || !select_ln109_217_fu_81377_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_437_fu_81374_p1.read()) + sc_biguint<9>(select_ln109_217_fu_81377_p3.read()));
}

void poly1305_hw::thread_add_ln109_436_fu_81391_p2() {
    add_ln109_436_fu_81391_p2 = (!zext_ln109_436_fu_81370_p1.read().is_01() || !add_ln109_435_fu_81385_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_436_fu_81370_p1.read()) + sc_biguint<9>(add_ln109_435_fu_81385_p2.read()));
}

void poly1305_hw::thread_add_ln109_437_fu_81448_p2() {
    add_ln109_437_fu_81448_p2 = (!zext_ln109_439_fu_81438_p1.read().is_01() || !select_ln109_218_fu_81441_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_439_fu_81438_p1.read()) + sc_biguint<9>(select_ln109_218_fu_81441_p3.read()));
}

void poly1305_hw::thread_add_ln109_438_fu_81454_p2() {
    add_ln109_438_fu_81454_p2 = (!zext_ln109_438_fu_81435_p1.read().is_01() || !add_ln109_437_fu_81448_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_438_fu_81435_p1.read()) + sc_biguint<9>(add_ln109_437_fu_81448_p2.read()));
}

void poly1305_hw::thread_add_ln109_439_fu_81533_p2() {
    add_ln109_439_fu_81533_p2 = (!zext_ln109_441_fu_81521_p1.read().is_01() || !select_ln109_219_fu_81525_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_441_fu_81521_p1.read()) + sc_biguint<9>(select_ln109_219_fu_81525_p3.read()));
}

void poly1305_hw::thread_add_ln109_43_fu_66422_p2() {
    add_ln109_43_fu_66422_p2 = (!zext_ln109_45_fu_66411_p1.read().is_01() || !select_ln109_21_fu_66414_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_45_fu_66411_p1.read()) + sc_biguint<9>(select_ln109_21_fu_66414_p3.read()));
}

void poly1305_hw::thread_add_ln109_440_fu_81539_p2() {
    add_ln109_440_fu_81539_p2 = (!zext_ln109_440_fu_81517_p1.read().is_01() || !add_ln109_439_fu_81533_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_440_fu_81517_p1.read()) + sc_biguint<9>(add_ln109_439_fu_81533_p2.read()));
}

void poly1305_hw::thread_add_ln109_441_fu_81600_p2() {
    add_ln109_441_fu_81600_p2 = (!zext_ln109_443_fu_81590_p1.read().is_01() || !select_ln109_220_fu_81593_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_443_fu_81590_p1.read()) + sc_biguint<9>(select_ln109_220_fu_81593_p3.read()));
}

void poly1305_hw::thread_add_ln109_442_fu_81606_p2() {
    add_ln109_442_fu_81606_p2 = (!zext_ln109_442_fu_81587_p1.read().is_01() || !add_ln109_441_fu_81600_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_442_fu_81587_p1.read()) + sc_biguint<9>(add_ln109_441_fu_81600_p2.read()));
}

void poly1305_hw::thread_add_ln109_443_fu_81682_p2() {
    add_ln109_443_fu_81682_p2 = (!zext_ln109_445_fu_81672_p1.read().is_01() || !select_ln109_221_fu_81675_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_445_fu_81672_p1.read()) + sc_biguint<9>(select_ln109_221_fu_81675_p3.read()));
}

void poly1305_hw::thread_add_ln109_444_fu_81688_p2() {
    add_ln109_444_fu_81688_p2 = (!zext_ln109_444_fu_81669_p1.read().is_01() || !add_ln109_443_fu_81682_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_444_fu_81669_p1.read()) + sc_biguint<9>(add_ln109_443_fu_81682_p2.read()));
}

void poly1305_hw::thread_add_ln109_445_fu_81766_p2() {
    add_ln109_445_fu_81766_p2 = (!zext_ln109_447_fu_81755_p1.read().is_01() || !select_ln109_222_fu_81758_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_447_fu_81755_p1.read()) + sc_biguint<9>(select_ln109_222_fu_81758_p3.read()));
}

void poly1305_hw::thread_add_ln109_446_fu_81772_p2() {
    add_ln109_446_fu_81772_p2 = (!zext_ln109_446_fu_81751_p1.read().is_01() || !add_ln109_445_fu_81766_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_446_fu_81751_p1.read()) + sc_biguint<9>(add_ln109_445_fu_81766_p2.read()));
}

void poly1305_hw::thread_add_ln109_447_fu_81829_p2() {
    add_ln109_447_fu_81829_p2 = (!zext_ln109_449_fu_81819_p1.read().is_01() || !select_ln109_223_fu_81822_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_449_fu_81819_p1.read()) + sc_biguint<9>(select_ln109_223_fu_81822_p3.read()));
}

void poly1305_hw::thread_add_ln109_448_fu_81835_p2() {
    add_ln109_448_fu_81835_p2 = (!zext_ln109_448_fu_81816_p1.read().is_01() || !add_ln109_447_fu_81829_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_448_fu_81816_p1.read()) + sc_biguint<9>(add_ln109_447_fu_81829_p2.read()));
}

void poly1305_hw::thread_add_ln109_449_fu_81911_p2() {
    add_ln109_449_fu_81911_p2 = (!zext_ln109_451_fu_81901_p1.read().is_01() || !select_ln109_224_fu_81904_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_451_fu_81901_p1.read()) + sc_biguint<9>(select_ln109_224_fu_81904_p3.read()));
}

void poly1305_hw::thread_add_ln109_44_fu_66428_p2() {
    add_ln109_44_fu_66428_p2 = (!zext_ln109_44_fu_66407_p1.read().is_01() || !add_ln109_43_fu_66422_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_44_fu_66407_p1.read()) + sc_biguint<9>(add_ln109_43_fu_66422_p2.read()));
}

void poly1305_hw::thread_add_ln109_450_fu_81917_p2() {
    add_ln109_450_fu_81917_p2 = (!zext_ln109_450_fu_81898_p1.read().is_01() || !add_ln109_449_fu_81911_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_450_fu_81898_p1.read()) + sc_biguint<9>(add_ln109_449_fu_81911_p2.read()));
}

void poly1305_hw::thread_add_ln109_451_fu_81995_p2() {
    add_ln109_451_fu_81995_p2 = (!zext_ln109_453_fu_81984_p1.read().is_01() || !select_ln109_225_fu_81987_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_453_fu_81984_p1.read()) + sc_biguint<9>(select_ln109_225_fu_81987_p3.read()));
}

void poly1305_hw::thread_add_ln109_452_fu_82001_p2() {
    add_ln109_452_fu_82001_p2 = (!zext_ln109_452_fu_81980_p1.read().is_01() || !add_ln109_451_fu_81995_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_452_fu_81980_p1.read()) + sc_biguint<9>(add_ln109_451_fu_81995_p2.read()));
}

void poly1305_hw::thread_add_ln109_453_fu_82058_p2() {
    add_ln109_453_fu_82058_p2 = (!zext_ln109_455_fu_82048_p1.read().is_01() || !select_ln109_226_fu_82051_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_455_fu_82048_p1.read()) + sc_biguint<9>(select_ln109_226_fu_82051_p3.read()));
}

void poly1305_hw::thread_add_ln109_454_fu_82064_p2() {
    add_ln109_454_fu_82064_p2 = (!zext_ln109_454_fu_82045_p1.read().is_01() || !add_ln109_453_fu_82058_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_454_fu_82045_p1.read()) + sc_biguint<9>(add_ln109_453_fu_82058_p2.read()));
}

void poly1305_hw::thread_add_ln109_455_fu_82140_p2() {
    add_ln109_455_fu_82140_p2 = (!zext_ln109_457_fu_82130_p1.read().is_01() || !select_ln109_227_fu_82133_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_457_fu_82130_p1.read()) + sc_biguint<9>(select_ln109_227_fu_82133_p3.read()));
}

void poly1305_hw::thread_add_ln109_456_fu_82146_p2() {
    add_ln109_456_fu_82146_p2 = (!zext_ln109_456_fu_82127_p1.read().is_01() || !add_ln109_455_fu_82140_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_456_fu_82127_p1.read()) + sc_biguint<9>(add_ln109_455_fu_82140_p2.read()));
}

void poly1305_hw::thread_add_ln109_457_fu_82224_p2() {
    add_ln109_457_fu_82224_p2 = (!zext_ln109_459_fu_82213_p1.read().is_01() || !select_ln109_228_fu_82216_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_459_fu_82213_p1.read()) + sc_biguint<9>(select_ln109_228_fu_82216_p3.read()));
}

void poly1305_hw::thread_add_ln109_458_fu_82230_p2() {
    add_ln109_458_fu_82230_p2 = (!zext_ln109_458_fu_82209_p1.read().is_01() || !add_ln109_457_fu_82224_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_458_fu_82209_p1.read()) + sc_biguint<9>(add_ln109_457_fu_82224_p2.read()));
}

void poly1305_hw::thread_add_ln109_459_fu_82287_p2() {
    add_ln109_459_fu_82287_p2 = (!zext_ln109_461_fu_82277_p1.read().is_01() || !select_ln109_229_fu_82280_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_461_fu_82277_p1.read()) + sc_biguint<9>(select_ln109_229_fu_82280_p3.read()));
}

void poly1305_hw::thread_add_ln109_45_fu_66485_p2() {
    add_ln109_45_fu_66485_p2 = (!zext_ln109_47_fu_66475_p1.read().is_01() || !select_ln109_22_fu_66478_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_47_fu_66475_p1.read()) + sc_biguint<9>(select_ln109_22_fu_66478_p3.read()));
}

void poly1305_hw::thread_add_ln109_460_fu_82293_p2() {
    add_ln109_460_fu_82293_p2 = (!zext_ln109_460_fu_82274_p1.read().is_01() || !add_ln109_459_fu_82287_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_460_fu_82274_p1.read()) + sc_biguint<9>(add_ln109_459_fu_82287_p2.read()));
}

void poly1305_hw::thread_add_ln109_461_fu_82369_p2() {
    add_ln109_461_fu_82369_p2 = (!zext_ln109_463_fu_82359_p1.read().is_01() || !select_ln109_230_fu_82362_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_463_fu_82359_p1.read()) + sc_biguint<9>(select_ln109_230_fu_82362_p3.read()));
}

void poly1305_hw::thread_add_ln109_462_fu_82375_p2() {
    add_ln109_462_fu_82375_p2 = (!zext_ln109_462_fu_82356_p1.read().is_01() || !add_ln109_461_fu_82369_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_462_fu_82356_p1.read()) + sc_biguint<9>(add_ln109_461_fu_82369_p2.read()));
}

void poly1305_hw::thread_add_ln109_463_fu_82453_p2() {
    add_ln109_463_fu_82453_p2 = (!zext_ln109_465_fu_82442_p1.read().is_01() || !select_ln109_231_fu_82445_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_465_fu_82442_p1.read()) + sc_biguint<9>(select_ln109_231_fu_82445_p3.read()));
}

void poly1305_hw::thread_add_ln109_464_fu_82459_p2() {
    add_ln109_464_fu_82459_p2 = (!zext_ln109_464_fu_82438_p1.read().is_01() || !add_ln109_463_fu_82453_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_464_fu_82438_p1.read()) + sc_biguint<9>(add_ln109_463_fu_82453_p2.read()));
}

void poly1305_hw::thread_add_ln109_465_fu_82516_p2() {
    add_ln109_465_fu_82516_p2 = (!zext_ln109_467_fu_82506_p1.read().is_01() || !select_ln109_232_fu_82509_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_467_fu_82506_p1.read()) + sc_biguint<9>(select_ln109_232_fu_82509_p3.read()));
}

void poly1305_hw::thread_add_ln109_466_fu_82522_p2() {
    add_ln109_466_fu_82522_p2 = (!zext_ln109_466_fu_82503_p1.read().is_01() || !add_ln109_465_fu_82516_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_466_fu_82503_p1.read()) + sc_biguint<9>(add_ln109_465_fu_82516_p2.read()));
}

void poly1305_hw::thread_add_ln109_467_fu_82598_p2() {
    add_ln109_467_fu_82598_p2 = (!zext_ln109_469_fu_82588_p1.read().is_01() || !select_ln109_233_fu_82591_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_469_fu_82588_p1.read()) + sc_biguint<9>(select_ln109_233_fu_82591_p3.read()));
}

void poly1305_hw::thread_add_ln109_468_fu_82604_p2() {
    add_ln109_468_fu_82604_p2 = (!zext_ln109_468_fu_82585_p1.read().is_01() || !add_ln109_467_fu_82598_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_468_fu_82585_p1.read()) + sc_biguint<9>(add_ln109_467_fu_82598_p2.read()));
}

void poly1305_hw::thread_add_ln109_469_fu_82682_p2() {
    add_ln109_469_fu_82682_p2 = (!zext_ln109_471_fu_82671_p1.read().is_01() || !select_ln109_234_fu_82674_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_471_fu_82671_p1.read()) + sc_biguint<9>(select_ln109_234_fu_82674_p3.read()));
}

void poly1305_hw::thread_add_ln109_46_fu_66491_p2() {
    add_ln109_46_fu_66491_p2 = (!zext_ln109_46_fu_66472_p1.read().is_01() || !add_ln109_45_fu_66485_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_46_fu_66472_p1.read()) + sc_biguint<9>(add_ln109_45_fu_66485_p2.read()));
}

void poly1305_hw::thread_add_ln109_470_fu_82688_p2() {
    add_ln109_470_fu_82688_p2 = (!zext_ln109_470_fu_82667_p1.read().is_01() || !add_ln109_469_fu_82682_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_470_fu_82667_p1.read()) + sc_biguint<9>(add_ln109_469_fu_82682_p2.read()));
}

void poly1305_hw::thread_add_ln109_471_fu_82745_p2() {
    add_ln109_471_fu_82745_p2 = (!zext_ln109_473_fu_82735_p1.read().is_01() || !select_ln109_235_fu_82738_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_473_fu_82735_p1.read()) + sc_biguint<9>(select_ln109_235_fu_82738_p3.read()));
}

void poly1305_hw::thread_add_ln109_472_fu_82751_p2() {
    add_ln109_472_fu_82751_p2 = (!zext_ln109_472_fu_82732_p1.read().is_01() || !add_ln109_471_fu_82745_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_472_fu_82732_p1.read()) + sc_biguint<9>(add_ln109_471_fu_82745_p2.read()));
}

void poly1305_hw::thread_add_ln109_473_fu_82830_p2() {
    add_ln109_473_fu_82830_p2 = (!zext_ln109_475_fu_82818_p1.read().is_01() || !select_ln109_236_fu_82822_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_475_fu_82818_p1.read()) + sc_biguint<9>(select_ln109_236_fu_82822_p3.read()));
}

void poly1305_hw::thread_add_ln109_474_fu_82836_p2() {
    add_ln109_474_fu_82836_p2 = (!zext_ln109_474_fu_82814_p1.read().is_01() || !add_ln109_473_fu_82830_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_474_fu_82814_p1.read()) + sc_biguint<9>(add_ln109_473_fu_82830_p2.read()));
}

void poly1305_hw::thread_add_ln109_475_fu_82897_p2() {
    add_ln109_475_fu_82897_p2 = (!zext_ln109_477_fu_82887_p1.read().is_01() || !select_ln109_237_fu_82890_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_477_fu_82887_p1.read()) + sc_biguint<9>(select_ln109_237_fu_82890_p3.read()));
}

void poly1305_hw::thread_add_ln109_476_fu_82903_p2() {
    add_ln109_476_fu_82903_p2 = (!zext_ln109_476_fu_82884_p1.read().is_01() || !add_ln109_475_fu_82897_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_476_fu_82884_p1.read()) + sc_biguint<9>(add_ln109_475_fu_82897_p2.read()));
}

void poly1305_hw::thread_add_ln109_477_fu_82979_p2() {
    add_ln109_477_fu_82979_p2 = (!zext_ln109_479_fu_82969_p1.read().is_01() || !select_ln109_238_fu_82972_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_479_fu_82969_p1.read()) + sc_biguint<9>(select_ln109_238_fu_82972_p3.read()));
}

void poly1305_hw::thread_add_ln109_478_fu_82985_p2() {
    add_ln109_478_fu_82985_p2 = (!zext_ln109_478_fu_82966_p1.read().is_01() || !add_ln109_477_fu_82979_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_478_fu_82966_p1.read()) + sc_biguint<9>(add_ln109_477_fu_82979_p2.read()));
}

void poly1305_hw::thread_add_ln109_479_fu_83063_p2() {
    add_ln109_479_fu_83063_p2 = (!zext_ln109_481_fu_83052_p1.read().is_01() || !select_ln109_239_fu_83055_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_481_fu_83052_p1.read()) + sc_biguint<9>(select_ln109_239_fu_83055_p3.read()));
}

void poly1305_hw::thread_add_ln109_47_fu_66567_p2() {
    add_ln109_47_fu_66567_p2 = (!zext_ln109_49_fu_66557_p1.read().is_01() || !select_ln109_23_fu_66560_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_49_fu_66557_p1.read()) + sc_biguint<9>(select_ln109_23_fu_66560_p3.read()));
}

void poly1305_hw::thread_add_ln109_480_fu_83069_p2() {
    add_ln109_480_fu_83069_p2 = (!zext_ln109_480_fu_83048_p1.read().is_01() || !add_ln109_479_fu_83063_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_480_fu_83048_p1.read()) + sc_biguint<9>(add_ln109_479_fu_83063_p2.read()));
}

void poly1305_hw::thread_add_ln109_481_fu_83126_p2() {
    add_ln109_481_fu_83126_p2 = (!zext_ln109_483_fu_83116_p1.read().is_01() || !select_ln109_240_fu_83119_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_483_fu_83116_p1.read()) + sc_biguint<9>(select_ln109_240_fu_83119_p3.read()));
}

void poly1305_hw::thread_add_ln109_482_fu_83132_p2() {
    add_ln109_482_fu_83132_p2 = (!zext_ln109_482_fu_83113_p1.read().is_01() || !add_ln109_481_fu_83126_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_482_fu_83113_p1.read()) + sc_biguint<9>(add_ln109_481_fu_83126_p2.read()));
}

void poly1305_hw::thread_add_ln109_483_fu_83208_p2() {
    add_ln109_483_fu_83208_p2 = (!zext_ln109_485_fu_83198_p1.read().is_01() || !select_ln109_241_fu_83201_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_485_fu_83198_p1.read()) + sc_biguint<9>(select_ln109_241_fu_83201_p3.read()));
}

void poly1305_hw::thread_add_ln109_484_fu_83214_p2() {
    add_ln109_484_fu_83214_p2 = (!zext_ln109_484_fu_83195_p1.read().is_01() || !add_ln109_483_fu_83208_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_484_fu_83195_p1.read()) + sc_biguint<9>(add_ln109_483_fu_83208_p2.read()));
}

void poly1305_hw::thread_add_ln109_485_fu_83292_p2() {
    add_ln109_485_fu_83292_p2 = (!zext_ln109_487_fu_83281_p1.read().is_01() || !select_ln109_242_fu_83284_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_487_fu_83281_p1.read()) + sc_biguint<9>(select_ln109_242_fu_83284_p3.read()));
}

void poly1305_hw::thread_add_ln109_486_fu_83298_p2() {
    add_ln109_486_fu_83298_p2 = (!zext_ln109_486_fu_83277_p1.read().is_01() || !add_ln109_485_fu_83292_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_486_fu_83277_p1.read()) + sc_biguint<9>(add_ln109_485_fu_83292_p2.read()));
}

void poly1305_hw::thread_add_ln109_487_fu_83355_p2() {
    add_ln109_487_fu_83355_p2 = (!zext_ln109_489_fu_83345_p1.read().is_01() || !select_ln109_243_fu_83348_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_489_fu_83345_p1.read()) + sc_biguint<9>(select_ln109_243_fu_83348_p3.read()));
}

void poly1305_hw::thread_add_ln109_488_fu_83361_p2() {
    add_ln109_488_fu_83361_p2 = (!zext_ln109_488_fu_83342_p1.read().is_01() || !add_ln109_487_fu_83355_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_488_fu_83342_p1.read()) + sc_biguint<9>(add_ln109_487_fu_83355_p2.read()));
}

void poly1305_hw::thread_add_ln109_489_fu_83437_p2() {
    add_ln109_489_fu_83437_p2 = (!zext_ln109_491_fu_83427_p1.read().is_01() || !select_ln109_244_fu_83430_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_491_fu_83427_p1.read()) + sc_biguint<9>(select_ln109_244_fu_83430_p3.read()));
}

void poly1305_hw::thread_add_ln109_48_fu_66573_p2() {
    add_ln109_48_fu_66573_p2 = (!zext_ln109_48_fu_66554_p1.read().is_01() || !add_ln109_47_fu_66567_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_48_fu_66554_p1.read()) + sc_biguint<9>(add_ln109_47_fu_66567_p2.read()));
}

void poly1305_hw::thread_add_ln109_490_fu_83443_p2() {
    add_ln109_490_fu_83443_p2 = (!zext_ln109_490_fu_83424_p1.read().is_01() || !add_ln109_489_fu_83437_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_490_fu_83424_p1.read()) + sc_biguint<9>(add_ln109_489_fu_83437_p2.read()));
}

void poly1305_hw::thread_add_ln109_491_fu_83521_p2() {
    add_ln109_491_fu_83521_p2 = (!zext_ln109_493_fu_83510_p1.read().is_01() || !select_ln109_245_fu_83513_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_493_fu_83510_p1.read()) + sc_biguint<9>(select_ln109_245_fu_83513_p3.read()));
}

void poly1305_hw::thread_add_ln109_492_fu_83527_p2() {
    add_ln109_492_fu_83527_p2 = (!zext_ln109_492_fu_83506_p1.read().is_01() || !add_ln109_491_fu_83521_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_492_fu_83506_p1.read()) + sc_biguint<9>(add_ln109_491_fu_83521_p2.read()));
}

void poly1305_hw::thread_add_ln109_493_fu_83584_p2() {
    add_ln109_493_fu_83584_p2 = (!zext_ln109_495_fu_83574_p1.read().is_01() || !select_ln109_246_fu_83577_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_495_fu_83574_p1.read()) + sc_biguint<9>(select_ln109_246_fu_83577_p3.read()));
}

void poly1305_hw::thread_add_ln109_494_fu_83590_p2() {
    add_ln109_494_fu_83590_p2 = (!zext_ln109_494_fu_83571_p1.read().is_01() || !add_ln109_493_fu_83584_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_494_fu_83571_p1.read()) + sc_biguint<9>(add_ln109_493_fu_83584_p2.read()));
}

void poly1305_hw::thread_add_ln109_495_fu_83666_p2() {
    add_ln109_495_fu_83666_p2 = (!zext_ln109_497_fu_83656_p1.read().is_01() || !select_ln109_247_fu_83659_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_497_fu_83656_p1.read()) + sc_biguint<9>(select_ln109_247_fu_83659_p3.read()));
}

void poly1305_hw::thread_add_ln109_496_fu_83672_p2() {
    add_ln109_496_fu_83672_p2 = (!zext_ln109_496_fu_83653_p1.read().is_01() || !add_ln109_495_fu_83666_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_496_fu_83653_p1.read()) + sc_biguint<9>(add_ln109_495_fu_83666_p2.read()));
}

void poly1305_hw::thread_add_ln109_497_fu_83750_p2() {
    add_ln109_497_fu_83750_p2 = (!zext_ln109_499_fu_83739_p1.read().is_01() || !select_ln109_248_fu_83742_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_499_fu_83739_p1.read()) + sc_biguint<9>(select_ln109_248_fu_83742_p3.read()));
}

void poly1305_hw::thread_add_ln109_498_fu_83756_p2() {
    add_ln109_498_fu_83756_p2 = (!zext_ln109_498_fu_83735_p1.read().is_01() || !add_ln109_497_fu_83750_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_498_fu_83735_p1.read()) + sc_biguint<9>(add_ln109_497_fu_83750_p2.read()));
}

void poly1305_hw::thread_add_ln109_499_fu_83813_p2() {
    add_ln109_499_fu_83813_p2 = (!zext_ln109_501_fu_83803_p1.read().is_01() || !select_ln109_249_fu_83806_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_501_fu_83803_p1.read()) + sc_biguint<9>(select_ln109_249_fu_83806_p3.read()));
}

void poly1305_hw::thread_add_ln109_49_fu_66651_p2() {
    add_ln109_49_fu_66651_p2 = (!zext_ln109_51_fu_66640_p1.read().is_01() || !select_ln109_24_fu_66643_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_51_fu_66640_p1.read()) + sc_biguint<9>(select_ln109_24_fu_66643_p3.read()));
}

void poly1305_hw::thread_add_ln109_4_fu_64902_p2() {
    add_ln109_4_fu_64902_p2 = (!zext_ln109_4_fu_64881_p1.read().is_01() || !add_ln109_3_fu_64896_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_4_fu_64881_p1.read()) + sc_biguint<9>(add_ln109_3_fu_64896_p2.read()));
}

void poly1305_hw::thread_add_ln109_500_fu_83819_p2() {
    add_ln109_500_fu_83819_p2 = (!zext_ln109_500_fu_83800_p1.read().is_01() || !add_ln109_499_fu_83813_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_500_fu_83800_p1.read()) + sc_biguint<9>(add_ln109_499_fu_83813_p2.read()));
}

void poly1305_hw::thread_add_ln109_501_fu_83895_p2() {
    add_ln109_501_fu_83895_p2 = (!zext_ln109_503_fu_83885_p1.read().is_01() || !select_ln109_250_fu_83888_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_503_fu_83885_p1.read()) + sc_biguint<9>(select_ln109_250_fu_83888_p3.read()));
}

void poly1305_hw::thread_add_ln109_502_fu_83901_p2() {
    add_ln109_502_fu_83901_p2 = (!zext_ln109_502_fu_83882_p1.read().is_01() || !add_ln109_501_fu_83895_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_502_fu_83882_p1.read()) + sc_biguint<9>(add_ln109_501_fu_83895_p2.read()));
}

void poly1305_hw::thread_add_ln109_503_fu_83979_p2() {
    add_ln109_503_fu_83979_p2 = (!zext_ln109_505_fu_83968_p1.read().is_01() || !select_ln109_251_fu_83971_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_505_fu_83968_p1.read()) + sc_biguint<9>(select_ln109_251_fu_83971_p3.read()));
}

void poly1305_hw::thread_add_ln109_504_fu_83985_p2() {
    add_ln109_504_fu_83985_p2 = (!zext_ln109_504_fu_83964_p1.read().is_01() || !add_ln109_503_fu_83979_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_504_fu_83964_p1.read()) + sc_biguint<9>(add_ln109_503_fu_83979_p2.read()));
}

void poly1305_hw::thread_add_ln109_505_fu_84042_p2() {
    add_ln109_505_fu_84042_p2 = (!zext_ln109_507_fu_84032_p1.read().is_01() || !select_ln109_252_fu_84035_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_507_fu_84032_p1.read()) + sc_biguint<9>(select_ln109_252_fu_84035_p3.read()));
}

void poly1305_hw::thread_add_ln109_506_fu_84048_p2() {
    add_ln109_506_fu_84048_p2 = (!zext_ln109_506_fu_84029_p1.read().is_01() || !add_ln109_505_fu_84042_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_506_fu_84029_p1.read()) + sc_biguint<9>(add_ln109_505_fu_84042_p2.read()));
}

void poly1305_hw::thread_add_ln109_507_fu_84145_p2() {
    add_ln109_507_fu_84145_p2 = (!zext_ln109_509_fu_84134_p1.read().is_01() || !select_ln109_253_fu_84138_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_509_fu_84134_p1.read()) + sc_biguint<9>(select_ln109_253_fu_84138_p3.read()));
}

void poly1305_hw::thread_add_ln109_508_fu_84151_p2() {
    add_ln109_508_fu_84151_p2 = (!zext_ln109_508_fu_84131_p1.read().is_01() || !add_ln109_507_fu_84145_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_508_fu_84131_p1.read()) + sc_biguint<9>(add_ln109_507_fu_84145_p2.read()));
}

void poly1305_hw::thread_add_ln109_50_fu_66657_p2() {
    add_ln109_50_fu_66657_p2 = (!zext_ln109_50_fu_66636_p1.read().is_01() || !add_ln109_49_fu_66651_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_50_fu_66636_p1.read()) + sc_biguint<9>(add_ln109_49_fu_66651_p2.read()));
}

void poly1305_hw::thread_add_ln109_51_fu_66714_p2() {
    add_ln109_51_fu_66714_p2 = (!zext_ln109_53_fu_66704_p1.read().is_01() || !select_ln109_25_fu_66707_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_53_fu_66704_p1.read()) + sc_biguint<9>(select_ln109_25_fu_66707_p3.read()));
}

void poly1305_hw::thread_add_ln109_52_fu_66720_p2() {
    add_ln109_52_fu_66720_p2 = (!zext_ln109_52_fu_66701_p1.read().is_01() || !add_ln109_51_fu_66714_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_52_fu_66701_p1.read()) + sc_biguint<9>(add_ln109_51_fu_66714_p2.read()));
}

void poly1305_hw::thread_add_ln109_53_fu_66796_p2() {
    add_ln109_53_fu_66796_p2 = (!zext_ln109_55_fu_66786_p1.read().is_01() || !select_ln109_26_fu_66789_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_55_fu_66786_p1.read()) + sc_biguint<9>(select_ln109_26_fu_66789_p3.read()));
}

void poly1305_hw::thread_add_ln109_54_fu_66802_p2() {
    add_ln109_54_fu_66802_p2 = (!zext_ln109_54_fu_66783_p1.read().is_01() || !add_ln109_53_fu_66796_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_54_fu_66783_p1.read()) + sc_biguint<9>(add_ln109_53_fu_66796_p2.read()));
}

void poly1305_hw::thread_add_ln109_55_fu_66880_p2() {
    add_ln109_55_fu_66880_p2 = (!zext_ln109_57_fu_66869_p1.read().is_01() || !select_ln109_27_fu_66872_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_57_fu_66869_p1.read()) + sc_biguint<9>(select_ln109_27_fu_66872_p3.read()));
}

void poly1305_hw::thread_add_ln109_56_fu_66886_p2() {
    add_ln109_56_fu_66886_p2 = (!zext_ln109_56_fu_66865_p1.read().is_01() || !add_ln109_55_fu_66880_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_56_fu_66865_p1.read()) + sc_biguint<9>(add_ln109_55_fu_66880_p2.read()));
}

void poly1305_hw::thread_add_ln109_57_fu_66943_p2() {
    add_ln109_57_fu_66943_p2 = (!zext_ln109_59_fu_66933_p1.read().is_01() || !select_ln109_28_fu_66936_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_59_fu_66933_p1.read()) + sc_biguint<9>(select_ln109_28_fu_66936_p3.read()));
}

void poly1305_hw::thread_add_ln109_58_fu_66949_p2() {
    add_ln109_58_fu_66949_p2 = (!zext_ln109_58_fu_66930_p1.read().is_01() || !add_ln109_57_fu_66943_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_58_fu_66930_p1.read()) + sc_biguint<9>(add_ln109_57_fu_66943_p2.read()));
}

void poly1305_hw::thread_add_ln109_59_fu_67025_p2() {
    add_ln109_59_fu_67025_p2 = (!zext_ln109_61_fu_67015_p1.read().is_01() || !select_ln109_29_fu_67018_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_61_fu_67015_p1.read()) + sc_biguint<9>(select_ln109_29_fu_67018_p3.read()));
}

void poly1305_hw::thread_add_ln109_5_fu_64959_p2() {
    add_ln109_5_fu_64959_p2 = (!zext_ln109_7_fu_64949_p1.read().is_01() || !select_ln109_2_fu_64952_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_7_fu_64949_p1.read()) + sc_biguint<9>(select_ln109_2_fu_64952_p3.read()));
}

void poly1305_hw::thread_add_ln109_60_fu_67031_p2() {
    add_ln109_60_fu_67031_p2 = (!zext_ln109_60_fu_67012_p1.read().is_01() || !add_ln109_59_fu_67025_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_60_fu_67012_p1.read()) + sc_biguint<9>(add_ln109_59_fu_67025_p2.read()));
}

void poly1305_hw::thread_add_ln109_61_fu_67109_p2() {
    add_ln109_61_fu_67109_p2 = (!zext_ln109_63_fu_67098_p1.read().is_01() || !select_ln109_30_fu_67101_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_63_fu_67098_p1.read()) + sc_biguint<9>(select_ln109_30_fu_67101_p3.read()));
}

void poly1305_hw::thread_add_ln109_62_fu_67115_p2() {
    add_ln109_62_fu_67115_p2 = (!zext_ln109_62_fu_67094_p1.read().is_01() || !add_ln109_61_fu_67109_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_62_fu_67094_p1.read()) + sc_biguint<9>(add_ln109_61_fu_67109_p2.read()));
}

void poly1305_hw::thread_add_ln109_63_fu_67172_p2() {
    add_ln109_63_fu_67172_p2 = (!zext_ln109_65_fu_67162_p1.read().is_01() || !select_ln109_31_fu_67165_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_65_fu_67162_p1.read()) + sc_biguint<9>(select_ln109_31_fu_67165_p3.read()));
}

void poly1305_hw::thread_add_ln109_64_fu_67178_p2() {
    add_ln109_64_fu_67178_p2 = (!zext_ln109_64_fu_67159_p1.read().is_01() || !add_ln109_63_fu_67172_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_64_fu_67159_p1.read()) + sc_biguint<9>(add_ln109_63_fu_67172_p2.read()));
}

void poly1305_hw::thread_add_ln109_65_fu_67257_p2() {
    add_ln109_65_fu_67257_p2 = (!zext_ln109_67_fu_67245_p1.read().is_01() || !select_ln109_32_fu_67249_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_67_fu_67245_p1.read()) + sc_biguint<9>(select_ln109_32_fu_67249_p3.read()));
}

void poly1305_hw::thread_add_ln109_66_fu_67263_p2() {
    add_ln109_66_fu_67263_p2 = (!zext_ln109_66_fu_67241_p1.read().is_01() || !add_ln109_65_fu_67257_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_66_fu_67241_p1.read()) + sc_biguint<9>(add_ln109_65_fu_67257_p2.read()));
}

void poly1305_hw::thread_add_ln109_67_fu_67324_p2() {
    add_ln109_67_fu_67324_p2 = (!zext_ln109_69_fu_67314_p1.read().is_01() || !select_ln109_33_fu_67317_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_69_fu_67314_p1.read()) + sc_biguint<9>(select_ln109_33_fu_67317_p3.read()));
}

void poly1305_hw::thread_add_ln109_68_fu_67330_p2() {
    add_ln109_68_fu_67330_p2 = (!zext_ln109_68_fu_67311_p1.read().is_01() || !add_ln109_67_fu_67324_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_68_fu_67311_p1.read()) + sc_biguint<9>(add_ln109_67_fu_67324_p2.read()));
}

void poly1305_hw::thread_add_ln109_69_fu_67406_p2() {
    add_ln109_69_fu_67406_p2 = (!zext_ln109_71_fu_67396_p1.read().is_01() || !select_ln109_34_fu_67399_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_71_fu_67396_p1.read()) + sc_biguint<9>(select_ln109_34_fu_67399_p3.read()));
}

void poly1305_hw::thread_add_ln109_6_fu_64965_p2() {
    add_ln109_6_fu_64965_p2 = (!zext_ln109_6_fu_64946_p1.read().is_01() || !add_ln109_5_fu_64959_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_6_fu_64946_p1.read()) + sc_biguint<9>(add_ln109_5_fu_64959_p2.read()));
}

void poly1305_hw::thread_add_ln109_70_fu_67412_p2() {
    add_ln109_70_fu_67412_p2 = (!zext_ln109_70_fu_67393_p1.read().is_01() || !add_ln109_69_fu_67406_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_70_fu_67393_p1.read()) + sc_biguint<9>(add_ln109_69_fu_67406_p2.read()));
}

void poly1305_hw::thread_add_ln109_71_fu_67490_p2() {
    add_ln109_71_fu_67490_p2 = (!zext_ln109_73_fu_67479_p1.read().is_01() || !select_ln109_35_fu_67482_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_73_fu_67479_p1.read()) + sc_biguint<9>(select_ln109_35_fu_67482_p3.read()));
}

void poly1305_hw::thread_add_ln109_72_fu_67496_p2() {
    add_ln109_72_fu_67496_p2 = (!zext_ln109_72_fu_67475_p1.read().is_01() || !add_ln109_71_fu_67490_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_72_fu_67475_p1.read()) + sc_biguint<9>(add_ln109_71_fu_67490_p2.read()));
}

void poly1305_hw::thread_add_ln109_73_fu_67553_p2() {
    add_ln109_73_fu_67553_p2 = (!zext_ln109_75_fu_67543_p1.read().is_01() || !select_ln109_36_fu_67546_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_75_fu_67543_p1.read()) + sc_biguint<9>(select_ln109_36_fu_67546_p3.read()));
}

void poly1305_hw::thread_add_ln109_74_fu_67559_p2() {
    add_ln109_74_fu_67559_p2 = (!zext_ln109_74_fu_67540_p1.read().is_01() || !add_ln109_73_fu_67553_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_74_fu_67540_p1.read()) + sc_biguint<9>(add_ln109_73_fu_67553_p2.read()));
}

void poly1305_hw::thread_add_ln109_75_fu_67635_p2() {
    add_ln109_75_fu_67635_p2 = (!zext_ln109_77_fu_67625_p1.read().is_01() || !select_ln109_37_fu_67628_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_77_fu_67625_p1.read()) + sc_biguint<9>(select_ln109_37_fu_67628_p3.read()));
}

void poly1305_hw::thread_add_ln109_76_fu_67641_p2() {
    add_ln109_76_fu_67641_p2 = (!zext_ln109_76_fu_67622_p1.read().is_01() || !add_ln109_75_fu_67635_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_76_fu_67622_p1.read()) + sc_biguint<9>(add_ln109_75_fu_67635_p2.read()));
}

void poly1305_hw::thread_add_ln109_77_fu_67719_p2() {
    add_ln109_77_fu_67719_p2 = (!zext_ln109_79_fu_67708_p1.read().is_01() || !select_ln109_38_fu_67711_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_79_fu_67708_p1.read()) + sc_biguint<9>(select_ln109_38_fu_67711_p3.read()));
}

void poly1305_hw::thread_add_ln109_78_fu_67725_p2() {
    add_ln109_78_fu_67725_p2 = (!zext_ln109_78_fu_67704_p1.read().is_01() || !add_ln109_77_fu_67719_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_78_fu_67704_p1.read()) + sc_biguint<9>(add_ln109_77_fu_67719_p2.read()));
}

void poly1305_hw::thread_add_ln109_79_fu_67782_p2() {
    add_ln109_79_fu_67782_p2 = (!zext_ln109_81_fu_67772_p1.read().is_01() || !select_ln109_39_fu_67775_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_81_fu_67772_p1.read()) + sc_biguint<9>(select_ln109_39_fu_67775_p3.read()));
}

void poly1305_hw::thread_add_ln109_7_fu_65041_p2() {
    add_ln109_7_fu_65041_p2 = (!zext_ln109_9_fu_65031_p1.read().is_01() || !select_ln109_3_fu_65034_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_9_fu_65031_p1.read()) + sc_biguint<9>(select_ln109_3_fu_65034_p3.read()));
}

void poly1305_hw::thread_add_ln109_80_fu_67788_p2() {
    add_ln109_80_fu_67788_p2 = (!zext_ln109_80_fu_67769_p1.read().is_01() || !add_ln109_79_fu_67782_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_80_fu_67769_p1.read()) + sc_biguint<9>(add_ln109_79_fu_67782_p2.read()));
}

void poly1305_hw::thread_add_ln109_81_fu_67864_p2() {
    add_ln109_81_fu_67864_p2 = (!zext_ln109_83_fu_67854_p1.read().is_01() || !select_ln109_40_fu_67857_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_83_fu_67854_p1.read()) + sc_biguint<9>(select_ln109_40_fu_67857_p3.read()));
}

void poly1305_hw::thread_add_ln109_82_fu_67870_p2() {
    add_ln109_82_fu_67870_p2 = (!zext_ln109_82_fu_67851_p1.read().is_01() || !add_ln109_81_fu_67864_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_82_fu_67851_p1.read()) + sc_biguint<9>(add_ln109_81_fu_67864_p2.read()));
}

void poly1305_hw::thread_add_ln109_83_fu_67948_p2() {
    add_ln109_83_fu_67948_p2 = (!zext_ln109_85_fu_67937_p1.read().is_01() || !select_ln109_41_fu_67940_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_85_fu_67937_p1.read()) + sc_biguint<9>(select_ln109_41_fu_67940_p3.read()));
}

void poly1305_hw::thread_add_ln109_84_fu_67954_p2() {
    add_ln109_84_fu_67954_p2 = (!zext_ln109_84_fu_67933_p1.read().is_01() || !add_ln109_83_fu_67948_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_84_fu_67933_p1.read()) + sc_biguint<9>(add_ln109_83_fu_67948_p2.read()));
}

void poly1305_hw::thread_add_ln109_85_fu_68011_p2() {
    add_ln109_85_fu_68011_p2 = (!zext_ln109_87_fu_68001_p1.read().is_01() || !select_ln109_42_fu_68004_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_87_fu_68001_p1.read()) + sc_biguint<9>(select_ln109_42_fu_68004_p3.read()));
}

void poly1305_hw::thread_add_ln109_86_fu_68017_p2() {
    add_ln109_86_fu_68017_p2 = (!zext_ln109_86_fu_67998_p1.read().is_01() || !add_ln109_85_fu_68011_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_86_fu_67998_p1.read()) + sc_biguint<9>(add_ln109_85_fu_68011_p2.read()));
}

void poly1305_hw::thread_add_ln109_87_fu_68093_p2() {
    add_ln109_87_fu_68093_p2 = (!zext_ln109_89_fu_68083_p1.read().is_01() || !select_ln109_43_fu_68086_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_89_fu_68083_p1.read()) + sc_biguint<9>(select_ln109_43_fu_68086_p3.read()));
}

void poly1305_hw::thread_add_ln109_88_fu_68099_p2() {
    add_ln109_88_fu_68099_p2 = (!zext_ln109_88_fu_68080_p1.read().is_01() || !add_ln109_87_fu_68093_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_88_fu_68080_p1.read()) + sc_biguint<9>(add_ln109_87_fu_68093_p2.read()));
}

void poly1305_hw::thread_add_ln109_89_fu_68177_p2() {
    add_ln109_89_fu_68177_p2 = (!zext_ln109_91_fu_68166_p1.read().is_01() || !select_ln109_44_fu_68169_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_91_fu_68166_p1.read()) + sc_biguint<9>(select_ln109_44_fu_68169_p3.read()));
}

void poly1305_hw::thread_add_ln109_8_fu_65047_p2() {
    add_ln109_8_fu_65047_p2 = (!zext_ln109_8_fu_65028_p1.read().is_01() || !add_ln109_7_fu_65041_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_8_fu_65028_p1.read()) + sc_biguint<9>(add_ln109_7_fu_65041_p2.read()));
}

void poly1305_hw::thread_add_ln109_90_fu_68183_p2() {
    add_ln109_90_fu_68183_p2 = (!zext_ln109_90_fu_68162_p1.read().is_01() || !add_ln109_89_fu_68177_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_90_fu_68162_p1.read()) + sc_biguint<9>(add_ln109_89_fu_68177_p2.read()));
}

void poly1305_hw::thread_add_ln109_91_fu_68240_p2() {
    add_ln109_91_fu_68240_p2 = (!zext_ln109_93_fu_68230_p1.read().is_01() || !select_ln109_45_fu_68233_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_93_fu_68230_p1.read()) + sc_biguint<9>(select_ln109_45_fu_68233_p3.read()));
}

void poly1305_hw::thread_add_ln109_92_fu_68246_p2() {
    add_ln109_92_fu_68246_p2 = (!zext_ln109_92_fu_68227_p1.read().is_01() || !add_ln109_91_fu_68240_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_92_fu_68227_p1.read()) + sc_biguint<9>(add_ln109_91_fu_68240_p2.read()));
}

void poly1305_hw::thread_add_ln109_93_fu_68322_p2() {
    add_ln109_93_fu_68322_p2 = (!zext_ln109_95_fu_68312_p1.read().is_01() || !select_ln109_46_fu_68315_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_95_fu_68312_p1.read()) + sc_biguint<9>(select_ln109_46_fu_68315_p3.read()));
}

void poly1305_hw::thread_add_ln109_94_fu_68328_p2() {
    add_ln109_94_fu_68328_p2 = (!zext_ln109_94_fu_68309_p1.read().is_01() || !add_ln109_93_fu_68322_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_94_fu_68309_p1.read()) + sc_biguint<9>(add_ln109_93_fu_68322_p2.read()));
}

void poly1305_hw::thread_add_ln109_95_fu_68406_p2() {
    add_ln109_95_fu_68406_p2 = (!zext_ln109_97_fu_68395_p1.read().is_01() || !select_ln109_47_fu_68398_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_97_fu_68395_p1.read()) + sc_biguint<9>(select_ln109_47_fu_68398_p3.read()));
}

void poly1305_hw::thread_add_ln109_96_fu_68412_p2() {
    add_ln109_96_fu_68412_p2 = (!zext_ln109_96_fu_68391_p1.read().is_01() || !add_ln109_95_fu_68406_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_96_fu_68391_p1.read()) + sc_biguint<9>(add_ln109_95_fu_68406_p2.read()));
}

void poly1305_hw::thread_add_ln109_97_fu_68469_p2() {
    add_ln109_97_fu_68469_p2 = (!zext_ln109_99_fu_68459_p1.read().is_01() || !select_ln109_48_fu_68462_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_99_fu_68459_p1.read()) + sc_biguint<9>(select_ln109_48_fu_68462_p3.read()));
}

void poly1305_hw::thread_add_ln109_98_fu_68475_p2() {
    add_ln109_98_fu_68475_p2 = (!zext_ln109_98_fu_68456_p1.read().is_01() || !add_ln109_97_fu_68469_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_98_fu_68456_p1.read()) + sc_biguint<9>(add_ln109_97_fu_68469_p2.read()));
}

void poly1305_hw::thread_add_ln109_99_fu_68554_p2() {
    add_ln109_99_fu_68554_p2 = (!zext_ln109_101_fu_68542_p1.read().is_01() || !select_ln109_49_fu_68546_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_101_fu_68542_p1.read()) + sc_biguint<9>(select_ln109_49_fu_68546_p3.read()));
}

void poly1305_hw::thread_add_ln109_9_fu_65125_p2() {
    add_ln109_9_fu_65125_p2 = (!zext_ln109_11_fu_65114_p1.read().is_01() || !select_ln109_4_fu_65117_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_11_fu_65114_p1.read()) + sc_biguint<9>(select_ln109_4_fu_65117_p3.read()));
}

void poly1305_hw::thread_add_ln109_fu_64742_p2() {
    add_ln109_fu_64742_p2 = (!zext_ln109_1_fu_64739_p1.read().is_01() || !zext_ln109_fu_64736_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln109_1_fu_64739_p1.read()) + sc_biguint<9>(zext_ln109_fu_64736_p1.read()));
}

void poly1305_hw::thread_add_ln116_100_fu_66213_p2() {
    add_ln116_100_fu_66213_p2 = (!add_ln116_3_reg_111375.read().is_01() || !trunc_ln97_19_fu_66150_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_3_reg_111375.read()) + sc_biguint<8>(trunc_ln97_19_fu_66150_p1.read()));
}

void poly1305_hw::thread_add_ln116_101_fu_66284_p2() {
    add_ln116_101_fu_66284_p2 = (!add_ln116_4_reg_111395.read().is_01() || !trunc_ln97_20_reg_111742.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_4_reg_111395.read()) + sc_biguint<8>(trunc_ln97_20_reg_111742.read()));
}

void poly1305_hw::thread_add_ln116_102_fu_72547_p2() {
    add_ln116_102_fu_72547_p2 = (!select_ln116_101_fu_72495_p3.read().is_01() || !add_ln116_257_fu_72543_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_101_fu_72495_p3.read()) + sc_biguint<8>(add_ln116_257_fu_72543_p2.read()));
}

void poly1305_hw::thread_add_ln116_103_fu_72629_p2() {
    add_ln116_103_fu_72629_p2 = (!select_ln116_102_reg_113651.read().is_01() || !add_ln116_258_fu_72625_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_102_reg_113651.read()) + sc_biguint<8>(add_ln116_258_fu_72625_p2.read()));
}

void poly1305_hw::thread_add_ln116_104_fu_72706_p2() {
    add_ln116_104_fu_72706_p2 = (!select_ln116_103_fu_72617_p3.read().is_01() || !add_ln116_259_fu_72701_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_103_fu_72617_p3.read()) + sc_biguint<8>(add_ln116_259_fu_72701_p2.read()));
}

void poly1305_hw::thread_add_ln116_105_fu_72776_p2() {
    add_ln116_105_fu_72776_p2 = (!select_ln116_104_fu_72719_p3.read().is_01() || !add_ln116_260_fu_72772_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_104_fu_72719_p3.read()) + sc_biguint<8>(add_ln116_260_fu_72772_p2.read()));
}

void poly1305_hw::thread_add_ln116_106_fu_72858_p2() {
    add_ln116_106_fu_72858_p2 = (!select_ln116_105_reg_113721.read().is_01() || !add_ln116_261_fu_72854_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_105_reg_113721.read()) + sc_biguint<8>(add_ln116_261_fu_72854_p2.read()));
}

void poly1305_hw::thread_add_ln116_107_fu_72935_p2() {
    add_ln116_107_fu_72935_p2 = (!select_ln116_106_fu_72846_p3.read().is_01() || !add_ln116_262_fu_72930_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_106_fu_72846_p3.read()) + sc_biguint<8>(add_ln116_262_fu_72930_p2.read()));
}

void poly1305_hw::thread_add_ln116_108_fu_73005_p2() {
    add_ln116_108_fu_73005_p2 = (!select_ln116_107_fu_72948_p3.read().is_01() || !add_ln116_263_fu_73001_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_107_fu_72948_p3.read()) + sc_biguint<8>(add_ln116_263_fu_73001_p2.read()));
}

void poly1305_hw::thread_add_ln116_109_fu_73087_p2() {
    add_ln116_109_fu_73087_p2 = (!select_ln116_108_reg_113791.read().is_01() || !add_ln116_264_fu_73083_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_108_reg_113791.read()) + sc_biguint<8>(add_ln116_264_fu_73083_p2.read()));
}

void poly1305_hw::thread_add_ln116_10_fu_65531_p2() {
    add_ln116_10_fu_65531_p2 = (!select_ln116_9_reg_111510.read().is_01() || !add_ln116_67_fu_65527_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_9_reg_111510.read()) + sc_biguint<8>(add_ln116_67_fu_65527_p2.read()));
}

void poly1305_hw::thread_add_ln116_110_fu_73164_p2() {
    add_ln116_110_fu_73164_p2 = (!select_ln116_109_fu_73075_p3.read().is_01() || !add_ln116_265_fu_73159_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_109_fu_73075_p3.read()) + sc_biguint<8>(add_ln116_265_fu_73159_p2.read()));
}

void poly1305_hw::thread_add_ln116_111_fu_73234_p2() {
    add_ln116_111_fu_73234_p2 = (!select_ln116_110_fu_73177_p3.read().is_01() || !add_ln116_266_fu_73230_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_110_fu_73177_p3.read()) + sc_biguint<8>(add_ln116_266_fu_73230_p2.read()));
}

void poly1305_hw::thread_add_ln116_112_fu_66366_p2() {
    add_ln116_112_fu_66366_p2 = (!add_ln116_5_reg_111410.read().is_01() || !trunc_ln97_21_reg_111772.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_5_reg_111410.read()) + sc_biguint<8>(trunc_ln97_21_reg_111772.read()));
}

void poly1305_hw::thread_add_ln116_113_fu_66442_p2() {
    add_ln116_113_fu_66442_p2 = (!add_ln116_6_reg_111445.read().is_01() || !trunc_ln97_22_fu_66379_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_6_reg_111445.read()) + sc_biguint<8>(trunc_ln97_22_fu_66379_p1.read()));
}

void poly1305_hw::thread_add_ln116_114_fu_66513_p2() {
    add_ln116_114_fu_66513_p2 = (!add_ln116_7_reg_111465.read().is_01() || !trunc_ln97_23_reg_111812.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_7_reg_111465.read()) + sc_biguint<8>(trunc_ln97_23_reg_111812.read()));
}

void poly1305_hw::thread_add_ln116_115_fu_66595_p2() {
    add_ln116_115_fu_66595_p2 = (!add_ln116_8_reg_111480.read().is_01() || !trunc_ln97_24_reg_111842.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_8_reg_111480.read()) + sc_biguint<8>(trunc_ln97_24_reg_111842.read()));
}

void poly1305_hw::thread_add_ln116_116_fu_66671_p2() {
    add_ln116_116_fu_66671_p2 = (!add_ln116_9_reg_111515.read().is_01() || !trunc_ln97_25_fu_66608_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_9_reg_111515.read()) + sc_biguint<8>(trunc_ln97_25_fu_66608_p1.read()));
}

void poly1305_hw::thread_add_ln116_117_fu_66742_p2() {
    add_ln116_117_fu_66742_p2 = (!add_ln116_10_reg_111535.read().is_01() || !trunc_ln97_26_reg_111882.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_10_reg_111535.read()) + sc_biguint<8>(trunc_ln97_26_reg_111882.read()));
}

void poly1305_hw::thread_add_ln116_118_fu_66824_p2() {
    add_ln116_118_fu_66824_p2 = (!add_ln116_11_reg_111550.read().is_01() || !trunc_ln97_27_reg_111912.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_11_reg_111550.read()) + sc_biguint<8>(trunc_ln97_27_reg_111912.read()));
}

void poly1305_hw::thread_add_ln116_119_fu_73848_p2() {
    add_ln116_119_fu_73848_p2 = (!select_ln116_118_fu_73796_p3.read().is_01() || !add_ln116_281_fu_73844_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_118_fu_73796_p3.read()) + sc_biguint<8>(add_ln116_281_fu_73844_p2.read()));
}

void poly1305_hw::thread_add_ln116_11_fu_65608_p2() {
    add_ln116_11_fu_65608_p2 = (!select_ln116_10_fu_65519_p3.read().is_01() || !add_ln116_80_fu_65603_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_10_fu_65519_p3.read()) + sc_biguint<8>(add_ln116_80_fu_65603_p2.read()));
}

void poly1305_hw::thread_add_ln116_120_fu_73930_p2() {
    add_ln116_120_fu_73930_p2 = (!select_ln116_119_reg_114047.read().is_01() || !add_ln116_282_fu_73926_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_119_reg_114047.read()) + sc_biguint<8>(add_ln116_282_fu_73926_p2.read()));
}

void poly1305_hw::thread_add_ln116_121_fu_74007_p2() {
    add_ln116_121_fu_74007_p2 = (!select_ln116_120_fu_73918_p3.read().is_01() || !add_ln116_283_fu_74002_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_120_fu_73918_p3.read()) + sc_biguint<8>(add_ln116_283_fu_74002_p2.read()));
}

void poly1305_hw::thread_add_ln116_122_fu_74077_p2() {
    add_ln116_122_fu_74077_p2 = (!select_ln116_121_fu_74020_p3.read().is_01() || !add_ln116_284_fu_74073_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_121_fu_74020_p3.read()) + sc_biguint<8>(add_ln116_284_fu_74073_p2.read()));
}

void poly1305_hw::thread_add_ln116_123_fu_74159_p2() {
    add_ln116_123_fu_74159_p2 = (!select_ln116_122_reg_114117.read().is_01() || !add_ln116_285_fu_74155_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_122_reg_114117.read()) + sc_biguint<8>(add_ln116_285_fu_74155_p2.read()));
}

void poly1305_hw::thread_add_ln116_124_fu_74236_p2() {
    add_ln116_124_fu_74236_p2 = (!select_ln116_123_fu_74147_p3.read().is_01() || !add_ln116_286_fu_74231_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_123_fu_74147_p3.read()) + sc_biguint<8>(add_ln116_286_fu_74231_p2.read()));
}

void poly1305_hw::thread_add_ln116_125_fu_74306_p2() {
    add_ln116_125_fu_74306_p2 = (!select_ln116_124_fu_74249_p3.read().is_01() || !add_ln116_287_fu_74302_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_124_fu_74249_p3.read()) + sc_biguint<8>(add_ln116_287_fu_74302_p2.read()));
}

void poly1305_hw::thread_add_ln116_126_fu_74388_p2() {
    add_ln116_126_fu_74388_p2 = (!select_ln116_125_reg_114187.read().is_01() || !add_ln116_288_fu_74384_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_125_reg_114187.read()) + sc_biguint<8>(add_ln116_288_fu_74384_p2.read()));
}

void poly1305_hw::thread_add_ln116_127_fu_74465_p2() {
    add_ln116_127_fu_74465_p2 = (!select_ln116_126_fu_74376_p3.read().is_01() || !add_ln116_289_fu_74460_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_126_fu_74376_p3.read()) + sc_biguint<8>(add_ln116_289_fu_74460_p2.read()));
}

void poly1305_hw::thread_add_ln116_128_fu_66900_p2() {
    add_ln116_128_fu_66900_p2 = (!add_ln116_12_reg_111585.read().is_01() || !trunc_ln97_28_fu_66837_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_12_reg_111585.read()) + sc_biguint<8>(trunc_ln97_28_fu_66837_p1.read()));
}

void poly1305_hw::thread_add_ln116_129_fu_66971_p2() {
    add_ln116_129_fu_66971_p2 = (!add_ln116_13_reg_111605.read().is_01() || !trunc_ln97_29_reg_111952.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_13_reg_111605.read()) + sc_biguint<8>(trunc_ln97_29_reg_111952.read()));
}

void poly1305_hw::thread_add_ln116_12_fu_65678_p2() {
    add_ln116_12_fu_65678_p2 = (!select_ln116_11_fu_65621_p3.read().is_01() || !add_ln116_81_fu_65674_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_11_fu_65621_p3.read()) + sc_biguint<8>(add_ln116_81_fu_65674_p2.read()));
}

void poly1305_hw::thread_add_ln116_130_fu_67053_p2() {
    add_ln116_130_fu_67053_p2 = (!add_ln116_14_reg_111620.read().is_01() || !trunc_ln97_30_reg_111982.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_14_reg_111620.read()) + sc_biguint<8>(trunc_ln97_30_reg_111982.read()));
}

void poly1305_hw::thread_add_ln116_131_fu_67129_p2() {
    add_ln116_131_fu_67129_p2 = (!add_ln116_15_reg_111645.read().is_01() || !trunc_ln97_31_fu_67066_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_15_reg_111645.read()) + sc_biguint<8>(trunc_ln97_31_fu_67066_p1.read()));
}

void poly1305_hw::thread_add_ln116_132_fu_67200_p2() {
    add_ln116_132_fu_67200_p2 = (!mul_17_2_reg_111665.read().is_01() || !trunc_ln97_32_reg_112022.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_2_reg_111665.read()) + sc_biguint<8>(trunc_ln97_32_reg_112022.read()));
}

void poly1305_hw::thread_add_ln116_134_fu_67277_p2() {
    add_ln116_134_fu_67277_p2 = (!mul_18_reg_13189.read().is_01() || !trunc_ln97_33_fu_67214_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_reg_13189.read()) + sc_biguint<8>(trunc_ln97_33_fu_67214_p1.read()));
}

void poly1305_hw::thread_add_ln116_136_fu_75144_p2() {
    add_ln116_136_fu_75144_p2 = (!select_ln116_135_fu_75092_p3.read().is_01() || !add_ln116_306_fu_75140_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_135_fu_75092_p3.read()) + sc_biguint<8>(add_ln116_306_fu_75140_p2.read()));
}

void poly1305_hw::thread_add_ln116_137_fu_75226_p2() {
    add_ln116_137_fu_75226_p2 = (!select_ln116_136_reg_114438.read().is_01() || !add_ln116_307_fu_75222_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_136_reg_114438.read()) + sc_biguint<8>(add_ln116_307_fu_75222_p2.read()));
}

void poly1305_hw::thread_add_ln116_138_fu_75303_p2() {
    add_ln116_138_fu_75303_p2 = (!select_ln116_137_fu_75214_p3.read().is_01() || !add_ln116_308_fu_75298_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_137_fu_75214_p3.read()) + sc_biguint<8>(add_ln116_308_fu_75298_p2.read()));
}

void poly1305_hw::thread_add_ln116_139_fu_75373_p2() {
    add_ln116_139_fu_75373_p2 = (!select_ln116_138_fu_75316_p3.read().is_01() || !add_ln116_309_fu_75369_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_138_fu_75316_p3.read()) + sc_biguint<8>(add_ln116_309_fu_75369_p2.read()));
}

void poly1305_hw::thread_add_ln116_13_fu_65760_p2() {
    add_ln116_13_fu_65760_p2 = (!select_ln116_12_reg_111580.read().is_01() || !add_ln116_82_fu_65756_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_12_reg_111580.read()) + sc_biguint<8>(add_ln116_82_fu_65756_p2.read()));
}

void poly1305_hw::thread_add_ln116_140_fu_75455_p2() {
    add_ln116_140_fu_75455_p2 = (!select_ln116_139_reg_114508.read().is_01() || !add_ln116_310_fu_75451_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_139_reg_114508.read()) + sc_biguint<8>(add_ln116_310_fu_75451_p2.read()));
}

void poly1305_hw::thread_add_ln116_141_fu_75532_p2() {
    add_ln116_141_fu_75532_p2 = (!select_ln116_140_fu_75443_p3.read().is_01() || !add_ln116_311_fu_75527_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_140_fu_75443_p3.read()) + sc_biguint<8>(add_ln116_311_fu_75527_p2.read()));
}

void poly1305_hw::thread_add_ln116_142_fu_75602_p2() {
    add_ln116_142_fu_75602_p2 = (!select_ln116_141_fu_75545_p3.read().is_01() || !add_ln116_312_fu_75598_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_141_fu_75545_p3.read()) + sc_biguint<8>(add_ln116_312_fu_75598_p2.read()));
}

void poly1305_hw::thread_add_ln116_143_fu_75684_p2() {
    add_ln116_143_fu_75684_p2 = (!select_ln116_142_reg_114578.read().is_01() || !add_ln116_313_fu_75680_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_142_reg_114578.read()) + sc_biguint<8>(add_ln116_313_fu_75680_p2.read()));
}

void poly1305_hw::thread_add_ln116_144_fu_67352_p2() {
    add_ln116_144_fu_67352_p2 = (!add_ln116_18_reg_111716.read().is_01() || !trunc_ln97_34_reg_112067.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_18_reg_111716.read()) + sc_biguint<8>(trunc_ln97_34_reg_112067.read()));
}

void poly1305_hw::thread_add_ln116_145_fu_67434_p2() {
    add_ln116_145_fu_67434_p2 = (!add_ln116_19_reg_111731.read().is_01() || !trunc_ln96_reg_112093.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_19_reg_111731.read()) + sc_biguint<8>(trunc_ln96_reg_112093.read()));
}

void poly1305_hw::thread_add_ln116_146_fu_67510_p2() {
    add_ln116_146_fu_67510_p2 = (!add_ln116_20_reg_111766.read().is_01() || !trunc_ln96_1_fu_67447_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_20_reg_111766.read()) + sc_biguint<8>(trunc_ln96_1_fu_67447_p1.read()));
}

void poly1305_hw::thread_add_ln116_147_fu_67581_p2() {
    add_ln116_147_fu_67581_p2 = (!add_ln116_21_reg_111786.read().is_01() || !trunc_ln96_2_reg_112133.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_21_reg_111786.read()) + sc_biguint<8>(trunc_ln96_2_reg_112133.read()));
}

void poly1305_hw::thread_add_ln116_148_fu_67663_p2() {
    add_ln116_148_fu_67663_p2 = (!add_ln116_22_reg_111801.read().is_01() || !trunc_ln96_3_reg_112163.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_22_reg_111801.read()) + sc_biguint<8>(trunc_ln96_3_reg_112163.read()));
}

void poly1305_hw::thread_add_ln116_149_fu_67739_p2() {
    add_ln116_149_fu_67739_p2 = (!add_ln116_23_reg_111836.read().is_01() || !trunc_ln96_4_fu_67676_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_23_reg_111836.read()) + sc_biguint<8>(trunc_ln96_4_fu_67676_p1.read()));
}

void poly1305_hw::thread_add_ln116_14_fu_65837_p2() {
    add_ln116_14_fu_65837_p2 = (!select_ln116_13_fu_65748_p3.read().is_01() || !add_ln116_83_fu_65832_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_13_fu_65748_p3.read()) + sc_biguint<8>(add_ln116_83_fu_65832_p2.read()));
}

void poly1305_hw::thread_add_ln116_150_fu_67810_p2() {
    add_ln116_150_fu_67810_p2 = (!add_ln116_24_reg_111856.read().is_01() || !trunc_ln96_5_reg_112203.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_24_reg_111856.read()) + sc_biguint<8>(trunc_ln96_5_reg_112203.read()));
}

void poly1305_hw::thread_add_ln116_151_fu_67892_p2() {
    add_ln116_151_fu_67892_p2 = (!add_ln116_25_reg_111871.read().is_01() || !trunc_ln96_6_reg_112233.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_25_reg_111871.read()) + sc_biguint<8>(trunc_ln96_6_reg_112233.read()));
}

void poly1305_hw::thread_add_ln116_152_fu_67968_p2() {
    add_ln116_152_fu_67968_p2 = (!add_ln116_26_reg_111906.read().is_01() || !trunc_ln96_7_fu_67905_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_26_reg_111906.read()) + sc_biguint<8>(trunc_ln96_7_fu_67905_p1.read()));
}

void poly1305_hw::thread_add_ln116_153_fu_76441_p2() {
    add_ln116_153_fu_76441_p2 = (!select_ln116_152_fu_76389_p3.read().is_01() || !add_ln116_332_fu_76437_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_152_fu_76389_p3.read()) + sc_biguint<8>(add_ln116_332_fu_76437_p2.read()));
}

void poly1305_hw::thread_add_ln116_154_fu_76523_p2() {
    add_ln116_154_fu_76523_p2 = (!select_ln116_153_reg_114829.read().is_01() || !add_ln116_333_fu_76519_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_153_reg_114829.read()) + sc_biguint<8>(add_ln116_333_fu_76519_p2.read()));
}

void poly1305_hw::thread_add_ln116_155_fu_76600_p2() {
    add_ln116_155_fu_76600_p2 = (!select_ln116_154_fu_76511_p3.read().is_01() || !add_ln116_334_fu_76595_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_154_fu_76511_p3.read()) + sc_biguint<8>(add_ln116_334_fu_76595_p2.read()));
}

void poly1305_hw::thread_add_ln116_156_fu_76670_p2() {
    add_ln116_156_fu_76670_p2 = (!select_ln116_155_fu_76613_p3.read().is_01() || !add_ln116_335_fu_76666_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_155_fu_76613_p3.read()) + sc_biguint<8>(add_ln116_335_fu_76666_p2.read()));
}

void poly1305_hw::thread_add_ln116_157_fu_76752_p2() {
    add_ln116_157_fu_76752_p2 = (!select_ln116_156_reg_114899.read().is_01() || !add_ln116_336_fu_76748_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_156_reg_114899.read()) + sc_biguint<8>(add_ln116_336_fu_76748_p2.read()));
}

void poly1305_hw::thread_add_ln116_158_fu_76829_p2() {
    add_ln116_158_fu_76829_p2 = (!select_ln116_157_fu_76740_p3.read().is_01() || !add_ln116_337_fu_76824_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_157_fu_76740_p3.read()) + sc_biguint<8>(add_ln116_337_fu_76824_p2.read()));
}

void poly1305_hw::thread_add_ln116_159_fu_76899_p2() {
    add_ln116_159_fu_76899_p2 = (!select_ln116_158_fu_76842_p3.read().is_01() || !add_ln116_338_fu_76895_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_158_fu_76842_p3.read()) + sc_biguint<8>(add_ln116_338_fu_76895_p2.read()));
}

void poly1305_hw::thread_add_ln116_15_fu_65907_p2() {
    add_ln116_15_fu_65907_p2 = (!select_ln116_14_fu_65850_p3.read().is_01() || !add_ln116_84_fu_65903_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_14_fu_65850_p3.read()) + sc_biguint<8>(add_ln116_84_fu_65903_p2.read()));
}

void poly1305_hw::thread_add_ln116_160_fu_68039_p2() {
    add_ln116_160_fu_68039_p2 = (!add_ln116_27_reg_111926.read().is_01() || !trunc_ln96_8_reg_112273.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_27_reg_111926.read()) + sc_biguint<8>(trunc_ln96_8_reg_112273.read()));
}

void poly1305_hw::thread_add_ln116_161_fu_68121_p2() {
    add_ln116_161_fu_68121_p2 = (!add_ln116_28_reg_111941.read().is_01() || !trunc_ln96_9_reg_112303.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_28_reg_111941.read()) + sc_biguint<8>(trunc_ln96_9_reg_112303.read()));
}

void poly1305_hw::thread_add_ln116_162_fu_68197_p2() {
    add_ln116_162_fu_68197_p2 = (!add_ln116_29_reg_111976.read().is_01() || !trunc_ln96_10_fu_68134_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_29_reg_111976.read()) + sc_biguint<8>(trunc_ln96_10_fu_68134_p1.read()));
}

void poly1305_hw::thread_add_ln116_163_fu_68268_p2() {
    add_ln116_163_fu_68268_p2 = (!add_ln116_30_reg_111996.read().is_01() || !trunc_ln96_11_reg_112343.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_30_reg_111996.read()) + sc_biguint<8>(trunc_ln96_11_reg_112343.read()));
}

void poly1305_hw::thread_add_ln116_164_fu_68350_p2() {
    add_ln116_164_fu_68350_p2 = (!add_ln116_31_reg_112011.read().is_01() || !trunc_ln96_12_reg_112373.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_31_reg_112011.read()) + sc_biguint<8>(trunc_ln96_12_reg_112373.read()));
}

void poly1305_hw::thread_add_ln116_165_fu_68426_p2() {
    add_ln116_165_fu_68426_p2 = (!mul_17_4_reg_112036.read().is_01() || !trunc_ln96_13_fu_68363_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_4_reg_112036.read()) + sc_biguint<8>(trunc_ln96_13_fu_68363_p1.read()));
}

void poly1305_hw::thread_add_ln116_167_fu_68497_p2() {
    add_ln116_167_fu_68497_p2 = (!mul_18_2_reg_112056.read().is_01() || !trunc_ln96_14_reg_112413.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_2_reg_112056.read()) + sc_biguint<8>(trunc_ln96_14_reg_112413.read()));
}

void poly1305_hw::thread_add_ln116_169_fu_68574_p2() {
    add_ln116_169_fu_68574_p2 = (!mul_19_reg_13366.read().is_01() || !trunc_ln96_15_fu_68511_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_reg_13366.read()) + sc_biguint<8>(trunc_ln96_15_fu_68511_p1.read()));
}

void poly1305_hw::thread_add_ln116_16_fu_64840_p2() {
    add_ln116_16_fu_64840_p2 = (!trunc_ln109_2_reg_110726.read().is_01() || !trunc_ln97_1_reg_111311.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_2_reg_110726.read()) + sc_biguint<8>(trunc_ln97_1_reg_111311.read()));
}

void poly1305_hw::thread_add_ln116_170_fu_77738_p2() {
    add_ln116_170_fu_77738_p2 = (!select_ln116_169_fu_77686_p3.read().is_01() || !add_ln116_359_fu_77734_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_169_fu_77686_p3.read()) + sc_biguint<8>(add_ln116_359_fu_77734_p2.read()));
}

void poly1305_hw::thread_add_ln116_171_fu_77820_p2() {
    add_ln116_171_fu_77820_p2 = (!select_ln116_170_reg_115220.read().is_01() || !add_ln116_360_fu_77816_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_170_reg_115220.read()) + sc_biguint<8>(add_ln116_360_fu_77816_p2.read()));
}

void poly1305_hw::thread_add_ln116_172_fu_77897_p2() {
    add_ln116_172_fu_77897_p2 = (!select_ln116_171_fu_77808_p3.read().is_01() || !add_ln116_361_fu_77892_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_171_fu_77808_p3.read()) + sc_biguint<8>(add_ln116_361_fu_77892_p2.read()));
}

void poly1305_hw::thread_add_ln116_173_fu_77967_p2() {
    add_ln116_173_fu_77967_p2 = (!select_ln116_172_fu_77910_p3.read().is_01() || !add_ln116_362_fu_77963_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_172_fu_77910_p3.read()) + sc_biguint<8>(add_ln116_362_fu_77963_p2.read()));
}

void poly1305_hw::thread_add_ln116_174_fu_78049_p2() {
    add_ln116_174_fu_78049_p2 = (!select_ln116_173_reg_115290.read().is_01() || !add_ln116_363_fu_78045_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_173_reg_115290.read()) + sc_biguint<8>(add_ln116_363_fu_78045_p2.read()));
}

void poly1305_hw::thread_add_ln116_175_fu_78126_p2() {
    add_ln116_175_fu_78126_p2 = (!select_ln116_174_fu_78037_p3.read().is_01() || !add_ln116_364_fu_78121_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_174_fu_78037_p3.read()) + sc_biguint<8>(add_ln116_364_fu_78121_p2.read()));
}

void poly1305_hw::thread_add_ln116_177_fu_68653_p2() {
    add_ln116_177_fu_68653_p2 = (!add_ln116_35_reg_112107.read().is_01() || !trunc_ln97_35_reg_112458.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_35_reg_112107.read()) + sc_biguint<8>(trunc_ln97_35_reg_112458.read()));
}

void poly1305_hw::thread_add_ln116_178_fu_68735_p2() {
    add_ln116_178_fu_68735_p2 = (!add_ln116_36_reg_112122.read().is_01() || !trunc_ln97_36_reg_112489.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_36_reg_112122.read()) + sc_biguint<8>(trunc_ln97_36_reg_112489.read()));
}

void poly1305_hw::thread_add_ln116_179_fu_68811_p2() {
    add_ln116_179_fu_68811_p2 = (!add_ln116_37_reg_112157.read().is_01() || !trunc_ln97_37_fu_68748_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_37_reg_112157.read()) + sc_biguint<8>(trunc_ln97_37_fu_68748_p1.read()));
}

void poly1305_hw::thread_add_ln116_17_fu_66059_p2() {
    add_ln116_17_fu_66059_p2 = (!select_ln116_16_fu_66007_p3.read().is_01() || !add_ln116_98_fu_66055_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_16_fu_66007_p3.read()) + sc_biguint<8>(add_ln116_98_fu_66055_p2.read()));
}

void poly1305_hw::thread_add_ln116_180_fu_68882_p2() {
    add_ln116_180_fu_68882_p2 = (!add_ln116_38_reg_112177.read().is_01() || !trunc_ln97_38_reg_112529.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_38_reg_112177.read()) + sc_biguint<8>(trunc_ln97_38_reg_112529.read()));
}

void poly1305_hw::thread_add_ln116_181_fu_68964_p2() {
    add_ln116_181_fu_68964_p2 = (!add_ln116_39_reg_112192.read().is_01() || !trunc_ln97_39_reg_112559.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_39_reg_112192.read()) + sc_biguint<8>(trunc_ln97_39_reg_112559.read()));
}

void poly1305_hw::thread_add_ln116_182_fu_69040_p2() {
    add_ln116_182_fu_69040_p2 = (!add_ln116_40_reg_112227.read().is_01() || !trunc_ln97_40_fu_68977_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_40_reg_112227.read()) + sc_biguint<8>(trunc_ln97_40_fu_68977_p1.read()));
}

void poly1305_hw::thread_add_ln116_183_fu_69111_p2() {
    add_ln116_183_fu_69111_p2 = (!add_ln116_41_reg_112247.read().is_01() || !trunc_ln97_41_reg_112599.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_41_reg_112247.read()) + sc_biguint<8>(trunc_ln97_41_reg_112599.read()));
}

void poly1305_hw::thread_add_ln116_184_fu_69193_p2() {
    add_ln116_184_fu_69193_p2 = (!add_ln116_42_reg_112262.read().is_01() || !trunc_ln97_42_reg_112629.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_42_reg_112262.read()) + sc_biguint<8>(trunc_ln97_42_reg_112629.read()));
}

void poly1305_hw::thread_add_ln116_185_fu_69269_p2() {
    add_ln116_185_fu_69269_p2 = (!add_ln116_43_reg_112297.read().is_01() || !trunc_ln97_43_fu_69206_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_43_reg_112297.read()) + sc_biguint<8>(trunc_ln97_43_fu_69206_p1.read()));
}

void poly1305_hw::thread_add_ln116_186_fu_69340_p2() {
    add_ln116_186_fu_69340_p2 = (!add_ln116_44_reg_112317.read().is_01() || !trunc_ln97_44_reg_112669.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_44_reg_112317.read()) + sc_biguint<8>(trunc_ln97_44_reg_112669.read()));
}

void poly1305_hw::thread_add_ln116_187_fu_79039_p2() {
    add_ln116_187_fu_79039_p2 = (!select_ln116_186_fu_78987_p3.read().is_01() || !add_ln116_387_fu_79035_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_186_fu_78987_p3.read()) + sc_biguint<8>(add_ln116_387_fu_79035_p2.read()));
}

void poly1305_hw::thread_add_ln116_188_fu_79121_p2() {
    add_ln116_188_fu_79121_p2 = (!select_ln116_187_reg_115616.read().is_01() || !add_ln116_388_fu_79117_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_187_reg_115616.read()) + sc_biguint<8>(add_ln116_388_fu_79117_p2.read()));
}

void poly1305_hw::thread_add_ln116_189_fu_79198_p2() {
    add_ln116_189_fu_79198_p2 = (!select_ln116_188_fu_79109_p3.read().is_01() || !add_ln116_389_fu_79193_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_188_fu_79109_p3.read()) + sc_biguint<8>(add_ln116_389_fu_79193_p2.read()));
}

void poly1305_hw::thread_add_ln116_18_fu_66141_p2() {
    add_ln116_18_fu_66141_p2 = (!select_ln116_17_reg_111691.read().is_01() || !add_ln116_99_fu_66137_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_17_reg_111691.read()) + sc_biguint<8>(add_ln116_99_fu_66137_p2.read()));
}

void poly1305_hw::thread_add_ln116_190_fu_79268_p2() {
    add_ln116_190_fu_79268_p2 = (!select_ln116_189_fu_79211_p3.read().is_01() || !add_ln116_390_fu_79264_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_189_fu_79211_p3.read()) + sc_biguint<8>(add_ln116_390_fu_79264_p2.read()));
}

void poly1305_hw::thread_add_ln116_191_fu_79350_p2() {
    add_ln116_191_fu_79350_p2 = (!select_ln116_190_reg_115686.read().is_01() || !add_ln116_391_fu_79346_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_190_reg_115686.read()) + sc_biguint<8>(add_ln116_391_fu_79346_p2.read()));
}

void poly1305_hw::thread_add_ln116_192_fu_69422_p2() {
    add_ln116_192_fu_69422_p2 = (!add_ln116_45_reg_112332.read().is_01() || !trunc_ln97_45_reg_112699.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_45_reg_112332.read()) + sc_biguint<8>(trunc_ln97_45_reg_112699.read()));
}

void poly1305_hw::thread_add_ln116_193_fu_69498_p2() {
    add_ln116_193_fu_69498_p2 = (!add_ln116_46_reg_112367.read().is_01() || !trunc_ln97_46_fu_69435_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_46_reg_112367.read()) + sc_biguint<8>(trunc_ln97_46_fu_69435_p1.read()));
}

void poly1305_hw::thread_add_ln116_194_fu_69569_p2() {
    add_ln116_194_fu_69569_p2 = (!add_ln116_47_reg_112387.read().is_01() || !trunc_ln97_47_reg_112739.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_47_reg_112387.read()) + sc_biguint<8>(trunc_ln97_47_reg_112739.read()));
}

void poly1305_hw::thread_add_ln116_195_fu_69651_p2() {
    add_ln116_195_fu_69651_p2 = (!mul_17_6_reg_112402.read().is_01() || !trunc_ln97_48_reg_112769.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_6_reg_112402.read()) + sc_biguint<8>(trunc_ln97_48_reg_112769.read()));
}

void poly1305_hw::thread_add_ln116_197_fu_69727_p2() {
    add_ln116_197_fu_69727_p2 = (!mul_18_4_reg_112427.read().is_01() || !trunc_ln97_49_fu_69664_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_4_reg_112427.read()) + sc_biguint<8>(trunc_ln97_49_fu_69664_p1.read()));
}

void poly1305_hw::thread_add_ln116_199_fu_69798_p2() {
    add_ln116_199_fu_69798_p2 = (!mul_19_2_reg_112447.read().is_01() || !trunc_ln97_50_reg_112809.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_2_reg_112447.read()) + sc_biguint<8>(trunc_ln97_50_reg_112809.read()));
}

void poly1305_hw::thread_add_ln116_19_fu_66218_p2() {
    add_ln116_19_fu_66218_p2 = (!select_ln116_18_fu_66129_p3.read().is_01() || !add_ln116_100_fu_66213_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_18_fu_66129_p3.read()) + sc_biguint<8>(add_ln116_100_fu_66213_p2.read()));
}

void poly1305_hw::thread_add_ln116_1_fu_64844_p2() {
    add_ln116_1_fu_64844_p2 = (!select_ln116_reg_111300.read().is_01() || !add_ln116_16_fu_64840_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_reg_111300.read()) + sc_biguint<8>(add_ln116_16_fu_64840_p2.read()));
}

void poly1305_hw::thread_add_ln116_201_fu_69875_p2() {
    add_ln116_201_fu_69875_p2 = (!zext_ln105_reg_112468.read().is_01() || !trunc_ln97_51_fu_69812_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln105_reg_112468.read()) + sc_biguint<8>(trunc_ln97_51_fu_69812_p1.read()));
}

void poly1305_hw::thread_add_ln116_203_fu_69949_p2() {
    add_ln116_203_fu_69949_p2 = (!add_ln116_52_reg_112503.read().is_01() || !trunc_ln97_52_reg_112854.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_52_reg_112503.read()) + sc_biguint<8>(trunc_ln97_52_reg_112854.read()));
}

void poly1305_hw::thread_add_ln116_204_fu_80335_p2() {
    add_ln116_204_fu_80335_p2 = (!select_ln116_203_fu_80283_p3.read().is_01() || !add_ln116_416_fu_80331_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_203_fu_80283_p3.read()) + sc_biguint<8>(add_ln116_416_fu_80331_p2.read()));
}

void poly1305_hw::thread_add_ln116_205_fu_80417_p2() {
    add_ln116_205_fu_80417_p2 = (!select_ln116_204_reg_116007.read().is_01() || !add_ln116_417_fu_80413_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_204_reg_116007.read()) + sc_biguint<8>(add_ln116_417_fu_80413_p2.read()));
}

void poly1305_hw::thread_add_ln116_206_fu_80494_p2() {
    add_ln116_206_fu_80494_p2 = (!select_ln116_205_fu_80405_p3.read().is_01() || !add_ln116_418_fu_80489_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_205_fu_80405_p3.read()) + sc_biguint<8>(add_ln116_418_fu_80489_p2.read()));
}

void poly1305_hw::thread_add_ln116_207_fu_80564_p2() {
    add_ln116_207_fu_80564_p2 = (!select_ln116_206_fu_80507_p3.read().is_01() || !add_ln116_419_fu_80560_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_206_fu_80507_p3.read()) + sc_biguint<8>(add_ln116_419_fu_80560_p2.read()));
}

void poly1305_hw::thread_add_ln116_208_fu_70031_p2() {
    add_ln116_208_fu_70031_p2 = (!add_ln116_53_reg_112518.read().is_01() || !trunc_ln97_53_reg_112880.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_53_reg_112518.read()) + sc_biguint<8>(trunc_ln97_53_reg_112880.read()));
}

void poly1305_hw::thread_add_ln116_209_fu_70107_p2() {
    add_ln116_209_fu_70107_p2 = (!add_ln116_54_reg_112553.read().is_01() || !trunc_ln97_54_fu_70044_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_54_reg_112553.read()) + sc_biguint<8>(trunc_ln97_54_fu_70044_p1.read()));
}

void poly1305_hw::thread_add_ln116_20_fu_66288_p2() {
    add_ln116_20_fu_66288_p2 = (!select_ln116_19_fu_66231_p3.read().is_01() || !add_ln116_101_fu_66284_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_19_fu_66231_p3.read()) + sc_biguint<8>(add_ln116_101_fu_66284_p2.read()));
}

void poly1305_hw::thread_add_ln116_210_fu_70178_p2() {
    add_ln116_210_fu_70178_p2 = (!add_ln116_55_reg_112573.read().is_01() || !trunc_ln97_55_reg_112920.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_55_reg_112573.read()) + sc_biguint<8>(trunc_ln97_55_reg_112920.read()));
}

void poly1305_hw::thread_add_ln116_211_fu_70260_p2() {
    add_ln116_211_fu_70260_p2 = (!add_ln116_56_reg_112588.read().is_01() || !trunc_ln97_56_reg_112950.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_56_reg_112588.read()) + sc_biguint<8>(trunc_ln97_56_reg_112950.read()));
}

void poly1305_hw::thread_add_ln116_212_fu_70336_p2() {
    add_ln116_212_fu_70336_p2 = (!add_ln116_57_reg_112623.read().is_01() || !trunc_ln97_57_fu_70273_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_57_reg_112623.read()) + sc_biguint<8>(trunc_ln97_57_fu_70273_p1.read()));
}

void poly1305_hw::thread_add_ln116_213_fu_70407_p2() {
    add_ln116_213_fu_70407_p2 = (!add_ln116_58_reg_112643.read().is_01() || !trunc_ln97_58_reg_112990.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_58_reg_112643.read()) + sc_biguint<8>(trunc_ln97_58_reg_112990.read()));
}

void poly1305_hw::thread_add_ln116_214_fu_70489_p2() {
    add_ln116_214_fu_70489_p2 = (!add_ln116_59_reg_112658.read().is_01() || !trunc_ln97_59_reg_113020.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_59_reg_112658.read()) + sc_biguint<8>(trunc_ln97_59_reg_113020.read()));
}

void poly1305_hw::thread_add_ln116_215_fu_70565_p2() {
    add_ln116_215_fu_70565_p2 = (!add_ln116_60_reg_112693.read().is_01() || !trunc_ln97_60_fu_70502_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_60_reg_112693.read()) + sc_biguint<8>(trunc_ln97_60_fu_70502_p1.read()));
}

void poly1305_hw::thread_add_ln116_216_fu_70636_p2() {
    add_ln116_216_fu_70636_p2 = (!add_ln116_61_reg_112713.read().is_01() || !trunc_ln97_61_reg_113060.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_61_reg_112713.read()) + sc_biguint<8>(trunc_ln97_61_reg_113060.read()));
}

void poly1305_hw::thread_add_ln116_217_fu_70718_p2() {
    add_ln116_217_fu_70718_p2 = (!add_ln116_62_reg_112728.read().is_01() || !trunc_ln97_62_reg_113090.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_62_reg_112728.read()) + sc_biguint<8>(trunc_ln97_62_reg_113090.read()));
}

void poly1305_hw::thread_add_ln116_218_fu_70794_p2() {
    add_ln116_218_fu_70794_p2 = (!add_ln116_63_reg_112763.read().is_01() || !trunc_ln97_63_fu_70731_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_63_reg_112763.read()) + sc_biguint<8>(trunc_ln97_63_fu_70731_p1.read()));
}

void poly1305_hw::thread_add_ln116_219_fu_70865_p2() {
    add_ln116_219_fu_70865_p2 = (!mul_17_8_reg_112783.read().is_01() || !trunc_ln97_64_reg_113130.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_8_reg_112783.read()) + sc_biguint<8>(trunc_ln97_64_reg_113130.read()));
}

void poly1305_hw::thread_add_ln116_21_fu_66370_p2() {
    add_ln116_21_fu_66370_p2 = (!select_ln116_20_reg_111761.read().is_01() || !add_ln116_112_fu_66366_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_20_reg_111761.read()) + sc_biguint<8>(add_ln116_112_fu_66366_p2.read()));
}

void poly1305_hw::thread_add_ln116_221_fu_81632_p2() {
    add_ln116_221_fu_81632_p2 = (!select_ln116_220_fu_81580_p3.read().is_01() || !add_ln116_446_fu_81628_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_220_fu_81580_p3.read()) + sc_biguint<8>(add_ln116_446_fu_81628_p2.read()));
}

void poly1305_hw::thread_add_ln116_222_fu_81714_p2() {
    add_ln116_222_fu_81714_p2 = (!select_ln116_221_reg_116398.read().is_01() || !add_ln116_447_fu_81710_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_221_reg_116398.read()) + sc_biguint<8>(add_ln116_447_fu_81710_p2.read()));
}

void poly1305_hw::thread_add_ln116_223_fu_81791_p2() {
    add_ln116_223_fu_81791_p2 = (!select_ln116_222_fu_81702_p3.read().is_01() || !add_ln116_448_fu_81786_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_222_fu_81702_p3.read()) + sc_biguint<8>(add_ln116_448_fu_81786_p2.read()));
}

void poly1305_hw::thread_add_ln116_224_fu_70947_p2() {
    add_ln116_224_fu_70947_p2 = (!mul_18_6_reg_112798.read().is_01() || !trunc_ln97_65_reg_113160.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_6_reg_112798.read()) + sc_biguint<8>(trunc_ln97_65_reg_113160.read()));
}

void poly1305_hw::thread_add_ln116_226_fu_71023_p2() {
    add_ln116_226_fu_71023_p2 = (!mul_19_4_reg_112823.read().is_01() || !trunc_ln97_66_fu_70960_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_4_reg_112823.read()) + sc_biguint<8>(trunc_ln97_66_fu_70960_p1.read()));
}

void poly1305_hw::thread_add_ln116_228_fu_71094_p2() {
    add_ln116_228_fu_71094_p2 = (!mul_20_2_reg_112843.read().is_01() || !trunc_ln97_67_reg_113200.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_2_reg_112843.read()) + sc_biguint<8>(trunc_ln97_67_reg_113200.read()));
}

void poly1305_hw::thread_add_ln116_22_fu_66447_p2() {
    add_ln116_22_fu_66447_p2 = (!select_ln116_21_fu_66358_p3.read().is_01() || !add_ln116_113_fu_66442_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_21_fu_66358_p3.read()) + sc_biguint<8>(add_ln116_113_fu_66442_p2.read()));
}

void poly1305_hw::thread_add_ln116_230_fu_71171_p2() {
    add_ln116_230_fu_71171_p2 = (!mul_21_reg_13720.read().is_01() || !trunc_ln97_68_fu_71108_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_reg_13720.read()) + sc_biguint<8>(trunc_ln97_68_fu_71108_p1.read()));
}

void poly1305_hw::thread_add_ln116_232_fu_71246_p2() {
    add_ln116_232_fu_71246_p2 = (!add_ln116_69_reg_112894.read().is_01() || !trunc_ln97_69_reg_113245.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_69_reg_112894.read()) + sc_biguint<8>(trunc_ln97_69_reg_113245.read()));
}

void poly1305_hw::thread_add_ln116_233_fu_71328_p2() {
    add_ln116_233_fu_71328_p2 = (!add_ln116_70_reg_112909.read().is_01() || !trunc_ln97_70_reg_113271.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_70_reg_112909.read()) + sc_biguint<8>(trunc_ln97_70_reg_113271.read()));
}

void poly1305_hw::thread_add_ln116_234_fu_71404_p2() {
    add_ln116_234_fu_71404_p2 = (!add_ln116_71_reg_112944.read().is_01() || !trunc_ln97_71_fu_71341_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_71_reg_112944.read()) + sc_biguint<8>(trunc_ln97_71_fu_71341_p1.read()));
}

void poly1305_hw::thread_add_ln116_235_fu_71475_p2() {
    add_ln116_235_fu_71475_p2 = (!add_ln116_72_reg_112964.read().is_01() || !trunc_ln97_72_reg_113311.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_72_reg_112964.read()) + sc_biguint<8>(trunc_ln97_72_reg_113311.read()));
}

void poly1305_hw::thread_add_ln116_236_fu_71557_p2() {
    add_ln116_236_fu_71557_p2 = (!add_ln116_73_reg_112979.read().is_01() || !trunc_ln97_73_reg_113341.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_73_reg_112979.read()) + sc_biguint<8>(trunc_ln97_73_reg_113341.read()));
}

void poly1305_hw::thread_add_ln116_237_fu_71633_p2() {
    add_ln116_237_fu_71633_p2 = (!add_ln116_74_reg_113014.read().is_01() || !trunc_ln97_74_fu_71570_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_74_reg_113014.read()) + sc_biguint<8>(trunc_ln97_74_fu_71570_p1.read()));
}

void poly1305_hw::thread_add_ln116_238_fu_82929_p2() {
    add_ln116_238_fu_82929_p2 = (!select_ln116_237_fu_82877_p3.read().is_01() || !add_ln116_477_fu_82925_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_237_fu_82877_p3.read()) + sc_biguint<8>(add_ln116_477_fu_82925_p2.read()));
}

void poly1305_hw::thread_add_ln116_239_fu_83011_p2() {
    add_ln116_239_fu_83011_p2 = (!select_ln116_238_reg_116789.read().is_01() || !add_ln116_478_fu_83007_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_238_reg_116789.read()) + sc_biguint<8>(add_ln116_478_fu_83007_p2.read()));
}

void poly1305_hw::thread_add_ln116_23_fu_66517_p2() {
    add_ln116_23_fu_66517_p2 = (!select_ln116_22_fu_66460_p3.read().is_01() || !add_ln116_114_fu_66513_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_22_fu_66460_p3.read()) + sc_biguint<8>(add_ln116_114_fu_66513_p2.read()));
}

void poly1305_hw::thread_add_ln116_240_fu_71704_p2() {
    add_ln116_240_fu_71704_p2 = (!add_ln116_75_reg_113034.read().is_01() || !trunc_ln97_75_reg_113381.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_75_reg_113034.read()) + sc_biguint<8>(trunc_ln97_75_reg_113381.read()));
}

void poly1305_hw::thread_add_ln116_241_fu_71786_p2() {
    add_ln116_241_fu_71786_p2 = (!add_ln116_76_reg_113049.read().is_01() || !trunc_ln97_76_reg_113411.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_76_reg_113049.read()) + sc_biguint<8>(trunc_ln97_76_reg_113411.read()));
}

void poly1305_hw::thread_add_ln116_242_fu_71862_p2() {
    add_ln116_242_fu_71862_p2 = (!add_ln116_77_reg_113084.read().is_01() || !trunc_ln97_77_fu_71799_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_77_reg_113084.read()) + sc_biguint<8>(trunc_ln97_77_fu_71799_p1.read()));
}

void poly1305_hw::thread_add_ln116_243_fu_71933_p2() {
    add_ln116_243_fu_71933_p2 = (!add_ln116_78_reg_113104.read().is_01() || !trunc_ln97_78_reg_113451.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_78_reg_113104.read()) + sc_biguint<8>(trunc_ln97_78_reg_113451.read()));
}

void poly1305_hw::thread_add_ln116_244_fu_72015_p2() {
    add_ln116_244_fu_72015_p2 = (!add_ln116_79_reg_113119.read().is_01() || !trunc_ln97_79_reg_113481.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_79_reg_113119.read()) + sc_biguint<8>(trunc_ln97_79_reg_113481.read()));
}

void poly1305_hw::thread_add_ln116_245_fu_72091_p2() {
    add_ln116_245_fu_72091_p2 = (!mul_17_10_reg_113154.read().is_01() || !trunc_ln97_80_fu_72028_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_10_reg_113154.read()) + sc_biguint<8>(trunc_ln97_80_fu_72028_p1.read()));
}

void poly1305_hw::thread_add_ln116_247_fu_72162_p2() {
    add_ln116_247_fu_72162_p2 = (!mul_18_8_reg_113174.read().is_01() || !trunc_ln97_81_reg_113521.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_8_reg_113174.read()) + sc_biguint<8>(trunc_ln97_81_reg_113521.read()));
}

void poly1305_hw::thread_add_ln116_249_fu_72244_p2() {
    add_ln116_249_fu_72244_p2 = (!mul_19_6_reg_113189.read().is_01() || !trunc_ln97_82_reg_113551.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_6_reg_113189.read()) + sc_biguint<8>(trunc_ln97_82_reg_113551.read()));
}

void poly1305_hw::thread_add_ln116_24_fu_66599_p2() {
    add_ln116_24_fu_66599_p2 = (!select_ln116_23_reg_111831.read().is_01() || !add_ln116_115_fu_66595_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_23_reg_111831.read()) + sc_biguint<8>(add_ln116_115_fu_66595_p2.read()));
}

void poly1305_hw::thread_add_ln116_251_fu_72320_p2() {
    add_ln116_251_fu_72320_p2 = (!mul_20_4_reg_113214.read().is_01() || !trunc_ln97_83_fu_72257_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_4_reg_113214.read()) + sc_biguint<8>(trunc_ln97_83_fu_72257_p1.read()));
}

void poly1305_hw::thread_add_ln116_253_fu_72391_p2() {
    add_ln116_253_fu_72391_p2 = (!mul_21_2_reg_113234.read().is_01() || !trunc_ln97_84_reg_113591.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_2_reg_113234.read()) + sc_biguint<8>(trunc_ln97_84_reg_113591.read()));
}

void poly1305_hw::thread_add_ln116_255_fu_72468_p2() {
    add_ln116_255_fu_72468_p2 = (!mul_22_reg_13897.read().is_01() || !trunc_ln97_85_fu_72405_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_reg_13897.read()) + sc_biguint<8>(trunc_ln97_85_fu_72405_p1.read()));
}

void poly1305_hw::thread_add_ln116_257_fu_72543_p2() {
    add_ln116_257_fu_72543_p2 = (!add_ln116_86_reg_113285.read().is_01() || !trunc_ln97_86_reg_113636.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_86_reg_113285.read()) + sc_biguint<8>(trunc_ln97_86_reg_113636.read()));
}

void poly1305_hw::thread_add_ln116_258_fu_72625_p2() {
    add_ln116_258_fu_72625_p2 = (!add_ln116_87_reg_113300.read().is_01() || !trunc_ln96_16_reg_113662.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_87_reg_113300.read()) + sc_biguint<8>(trunc_ln96_16_reg_113662.read()));
}

void poly1305_hw::thread_add_ln116_259_fu_72701_p2() {
    add_ln116_259_fu_72701_p2 = (!add_ln116_88_reg_113335.read().is_01() || !trunc_ln96_17_fu_72638_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_88_reg_113335.read()) + sc_biguint<8>(trunc_ln96_17_fu_72638_p1.read()));
}

void poly1305_hw::thread_add_ln116_25_fu_66676_p2() {
    add_ln116_25_fu_66676_p2 = (!select_ln116_24_fu_66587_p3.read().is_01() || !add_ln116_116_fu_66671_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_24_fu_66587_p3.read()) + sc_biguint<8>(add_ln116_116_fu_66671_p2.read()));
}

void poly1305_hw::thread_add_ln116_260_fu_72772_p2() {
    add_ln116_260_fu_72772_p2 = (!add_ln116_89_reg_113355.read().is_01() || !trunc_ln96_18_reg_113702.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_89_reg_113355.read()) + sc_biguint<8>(trunc_ln96_18_reg_113702.read()));
}

void poly1305_hw::thread_add_ln116_261_fu_72854_p2() {
    add_ln116_261_fu_72854_p2 = (!add_ln116_90_reg_113370.read().is_01() || !trunc_ln96_19_reg_113732.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_90_reg_113370.read()) + sc_biguint<8>(trunc_ln96_19_reg_113732.read()));
}

void poly1305_hw::thread_add_ln116_262_fu_72930_p2() {
    add_ln116_262_fu_72930_p2 = (!add_ln116_91_reg_113405.read().is_01() || !trunc_ln96_20_fu_72867_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_91_reg_113405.read()) + sc_biguint<8>(trunc_ln96_20_fu_72867_p1.read()));
}

void poly1305_hw::thread_add_ln116_263_fu_73001_p2() {
    add_ln116_263_fu_73001_p2 = (!add_ln116_92_reg_113425.read().is_01() || !trunc_ln96_21_reg_113772.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_92_reg_113425.read()) + sc_biguint<8>(trunc_ln96_21_reg_113772.read()));
}

void poly1305_hw::thread_add_ln116_264_fu_73083_p2() {
    add_ln116_264_fu_73083_p2 = (!add_ln116_93_reg_113440.read().is_01() || !trunc_ln96_22_reg_113802.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_93_reg_113440.read()) + sc_biguint<8>(trunc_ln96_22_reg_113802.read()));
}

void poly1305_hw::thread_add_ln116_265_fu_73159_p2() {
    add_ln116_265_fu_73159_p2 = (!add_ln116_94_reg_113475.read().is_01() || !trunc_ln96_23_fu_73096_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_94_reg_113475.read()) + sc_biguint<8>(trunc_ln96_23_fu_73096_p1.read()));
}

void poly1305_hw::thread_add_ln116_266_fu_73230_p2() {
    add_ln116_266_fu_73230_p2 = (!add_ln116_95_reg_113495.read().is_01() || !trunc_ln96_24_reg_113842.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_95_reg_113495.read()) + sc_biguint<8>(trunc_ln96_24_reg_113842.read()));
}

void poly1305_hw::thread_add_ln116_267_fu_73312_p2() {
    add_ln116_267_fu_73312_p2 = (!mul_17_12_reg_113510.read().is_01() || !trunc_ln96_25_reg_113872.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_12_reg_113510.read()) + sc_biguint<8>(trunc_ln96_25_reg_113872.read()));
}

void poly1305_hw::thread_add_ln116_269_fu_73388_p2() {
    add_ln116_269_fu_73388_p2 = (!mul_18_10_reg_113545.read().is_01() || !trunc_ln96_26_fu_73325_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_10_reg_113545.read()) + sc_biguint<8>(trunc_ln96_26_fu_73325_p1.read()));
}

void poly1305_hw::thread_add_ln116_26_fu_66746_p2() {
    add_ln116_26_fu_66746_p2 = (!select_ln116_25_fu_66689_p3.read().is_01() || !add_ln116_117_fu_66742_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_25_fu_66689_p3.read()) + sc_biguint<8>(add_ln116_117_fu_66742_p2.read()));
}

void poly1305_hw::thread_add_ln116_271_fu_73459_p2() {
    add_ln116_271_fu_73459_p2 = (!mul_19_8_reg_113565.read().is_01() || !trunc_ln96_27_reg_113912.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_8_reg_113565.read()) + sc_biguint<8>(trunc_ln96_27_reg_113912.read()));
}

void poly1305_hw::thread_add_ln116_273_fu_73541_p2() {
    add_ln116_273_fu_73541_p2 = (!mul_20_6_reg_113580.read().is_01() || !trunc_ln96_28_reg_113942.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_6_reg_113580.read()) + sc_biguint<8>(trunc_ln96_28_reg_113942.read()));
}

void poly1305_hw::thread_add_ln116_275_fu_73617_p2() {
    add_ln116_275_fu_73617_p2 = (!mul_21_4_reg_113605.read().is_01() || !trunc_ln96_29_fu_73554_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_4_reg_113605.read()) + sc_biguint<8>(trunc_ln96_29_fu_73554_p1.read()));
}

void poly1305_hw::thread_add_ln116_277_fu_73688_p2() {
    add_ln116_277_fu_73688_p2 = (!mul_22_2_reg_113625.read().is_01() || !trunc_ln96_30_reg_113982.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_2_reg_113625.read()) + sc_biguint<8>(trunc_ln96_30_reg_113982.read()));
}

void poly1305_hw::thread_add_ln116_279_fu_73765_p2() {
    add_ln116_279_fu_73765_p2 = (!mul_23_reg_14074.read().is_01() || !trunc_ln96_31_fu_73702_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_reg_14074.read()) + sc_biguint<8>(trunc_ln96_31_fu_73702_p1.read()));
}

void poly1305_hw::thread_add_ln116_27_fu_66828_p2() {
    add_ln116_27_fu_66828_p2 = (!select_ln116_26_reg_111901.read().is_01() || !add_ln116_118_fu_66824_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_26_reg_111901.read()) + sc_biguint<8>(add_ln116_118_fu_66824_p2.read()));
}

void poly1305_hw::thread_add_ln116_281_fu_73844_p2() {
    add_ln116_281_fu_73844_p2 = (!add_ln116_103_reg_113676.read().is_01() || !trunc_ln97_87_reg_114027.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_103_reg_113676.read()) + sc_biguint<8>(trunc_ln97_87_reg_114027.read()));
}

void poly1305_hw::thread_add_ln116_282_fu_73926_p2() {
    add_ln116_282_fu_73926_p2 = (!add_ln116_104_reg_113691.read().is_01() || !trunc_ln97_88_reg_114058.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_104_reg_113691.read()) + sc_biguint<8>(trunc_ln97_88_reg_114058.read()));
}

void poly1305_hw::thread_add_ln116_283_fu_74002_p2() {
    add_ln116_283_fu_74002_p2 = (!add_ln116_105_reg_113726.read().is_01() || !trunc_ln97_89_fu_73939_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_105_reg_113726.read()) + sc_biguint<8>(trunc_ln97_89_fu_73939_p1.read()));
}

void poly1305_hw::thread_add_ln116_284_fu_74073_p2() {
    add_ln116_284_fu_74073_p2 = (!add_ln116_106_reg_113746.read().is_01() || !trunc_ln97_90_reg_114098.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_106_reg_113746.read()) + sc_biguint<8>(trunc_ln97_90_reg_114098.read()));
}

void poly1305_hw::thread_add_ln116_285_fu_74155_p2() {
    add_ln116_285_fu_74155_p2 = (!add_ln116_107_reg_113761.read().is_01() || !trunc_ln97_91_reg_114128.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_107_reg_113761.read()) + sc_biguint<8>(trunc_ln97_91_reg_114128.read()));
}

void poly1305_hw::thread_add_ln116_286_fu_74231_p2() {
    add_ln116_286_fu_74231_p2 = (!add_ln116_108_reg_113796.read().is_01() || !trunc_ln97_92_fu_74168_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_108_reg_113796.read()) + sc_biguint<8>(trunc_ln97_92_fu_74168_p1.read()));
}

void poly1305_hw::thread_add_ln116_287_fu_74302_p2() {
    add_ln116_287_fu_74302_p2 = (!add_ln116_109_reg_113816.read().is_01() || !trunc_ln97_93_reg_114168.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_109_reg_113816.read()) + sc_biguint<8>(trunc_ln97_93_reg_114168.read()));
}

void poly1305_hw::thread_add_ln116_288_fu_74384_p2() {
    add_ln116_288_fu_74384_p2 = (!add_ln116_110_reg_113831.read().is_01() || !trunc_ln97_94_reg_114198.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_110_reg_113831.read()) + sc_biguint<8>(trunc_ln97_94_reg_114198.read()));
}

void poly1305_hw::thread_add_ln116_289_fu_74460_p2() {
    add_ln116_289_fu_74460_p2 = (!add_ln116_111_reg_113866.read().is_01() || !trunc_ln97_95_fu_74397_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_111_reg_113866.read()) + sc_biguint<8>(trunc_ln97_95_fu_74397_p1.read()));
}

void poly1305_hw::thread_add_ln116_28_fu_66905_p2() {
    add_ln116_28_fu_66905_p2 = (!select_ln116_27_fu_66816_p3.read().is_01() || !add_ln116_128_fu_66900_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_27_fu_66816_p3.read()) + sc_biguint<8>(add_ln116_128_fu_66900_p2.read()));
}

void poly1305_hw::thread_add_ln116_290_fu_74531_p2() {
    add_ln116_290_fu_74531_p2 = (!mul_17_14_reg_113886.read().is_01() || !trunc_ln97_96_reg_114238.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_14_reg_113886.read()) + sc_biguint<8>(trunc_ln97_96_reg_114238.read()));
}

void poly1305_hw::thread_add_ln116_292_fu_74613_p2() {
    add_ln116_292_fu_74613_p2 = (!mul_18_12_reg_113901.read().is_01() || !trunc_ln97_97_reg_114268.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_12_reg_113901.read()) + sc_biguint<8>(trunc_ln97_97_reg_114268.read()));
}

void poly1305_hw::thread_add_ln116_294_fu_74689_p2() {
    add_ln116_294_fu_74689_p2 = (!mul_19_10_reg_113936.read().is_01() || !trunc_ln97_98_fu_74626_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_10_reg_113936.read()) + sc_biguint<8>(trunc_ln97_98_fu_74626_p1.read()));
}

void poly1305_hw::thread_add_ln116_296_fu_74760_p2() {
    add_ln116_296_fu_74760_p2 = (!mul_20_8_reg_113956.read().is_01() || !trunc_ln97_99_reg_114308.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_8_reg_113956.read()) + sc_biguint<8>(trunc_ln97_99_reg_114308.read()));
}

void poly1305_hw::thread_add_ln116_298_fu_74842_p2() {
    add_ln116_298_fu_74842_p2 = (!mul_21_6_reg_113971.read().is_01() || !trunc_ln97_100_reg_114338.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_6_reg_113971.read()) + sc_biguint<8>(trunc_ln97_100_reg_114338.read()));
}

void poly1305_hw::thread_add_ln116_29_fu_66975_p2() {
    add_ln116_29_fu_66975_p2 = (!select_ln116_28_fu_66918_p3.read().is_01() || !add_ln116_129_fu_66971_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_28_fu_66918_p3.read()) + sc_biguint<8>(add_ln116_129_fu_66971_p2.read()));
}

void poly1305_hw::thread_add_ln116_2_fu_64921_p2() {
    add_ln116_2_fu_64921_p2 = (!select_ln116_1_fu_64832_p3.read().is_01() || !add_ln116_32_fu_64916_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_1_fu_64832_p3.read()) + sc_biguint<8>(add_ln116_32_fu_64916_p2.read()));
}

void poly1305_hw::thread_add_ln116_300_fu_74918_p2() {
    add_ln116_300_fu_74918_p2 = (!mul_22_4_reg_113996.read().is_01() || !trunc_ln97_101_fu_74855_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_4_reg_113996.read()) + sc_biguint<8>(trunc_ln97_101_fu_74855_p1.read()));
}

void poly1305_hw::thread_add_ln116_302_fu_74989_p2() {
    add_ln116_302_fu_74989_p2 = (!mul_23_2_reg_114016.read().is_01() || !trunc_ln97_102_reg_114378.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_2_reg_114016.read()) + sc_biguint<8>(trunc_ln97_102_reg_114378.read()));
}

void poly1305_hw::thread_add_ln116_304_fu_75066_p2() {
    add_ln116_304_fu_75066_p2 = (!zext_ln105_1_reg_114037.read().is_01() || !trunc_ln97_103_fu_75003_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln105_1_reg_114037.read()) + sc_biguint<8>(trunc_ln97_103_fu_75003_p1.read()));
}

void poly1305_hw::thread_add_ln116_306_fu_75140_p2() {
    add_ln116_306_fu_75140_p2 = (!add_ln116_120_reg_114072.read().is_01() || !trunc_ln97_104_reg_114423.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_120_reg_114072.read()) + sc_biguint<8>(trunc_ln97_104_reg_114423.read()));
}

void poly1305_hw::thread_add_ln116_307_fu_75222_p2() {
    add_ln116_307_fu_75222_p2 = (!add_ln116_121_reg_114087.read().is_01() || !trunc_ln97_105_reg_114449.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_121_reg_114087.read()) + sc_biguint<8>(trunc_ln97_105_reg_114449.read()));
}

void poly1305_hw::thread_add_ln116_308_fu_75298_p2() {
    add_ln116_308_fu_75298_p2 = (!add_ln116_122_reg_114122.read().is_01() || !trunc_ln97_106_fu_75235_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_122_reg_114122.read()) + sc_biguint<8>(trunc_ln97_106_fu_75235_p1.read()));
}

void poly1305_hw::thread_add_ln116_309_fu_75369_p2() {
    add_ln116_309_fu_75369_p2 = (!add_ln116_123_reg_114142.read().is_01() || !trunc_ln97_107_reg_114489.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_123_reg_114142.read()) + sc_biguint<8>(trunc_ln97_107_reg_114489.read()));
}

void poly1305_hw::thread_add_ln116_30_fu_67057_p2() {
    add_ln116_30_fu_67057_p2 = (!select_ln116_29_reg_111971.read().is_01() || !add_ln116_130_fu_67053_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_29_reg_111971.read()) + sc_biguint<8>(add_ln116_130_fu_67053_p2.read()));
}

void poly1305_hw::thread_add_ln116_310_fu_75451_p2() {
    add_ln116_310_fu_75451_p2 = (!add_ln116_124_reg_114157.read().is_01() || !trunc_ln97_108_reg_114519.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_124_reg_114157.read()) + sc_biguint<8>(trunc_ln97_108_reg_114519.read()));
}

void poly1305_hw::thread_add_ln116_311_fu_75527_p2() {
    add_ln116_311_fu_75527_p2 = (!add_ln116_125_reg_114192.read().is_01() || !trunc_ln97_109_fu_75464_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_125_reg_114192.read()) + sc_biguint<8>(trunc_ln97_109_fu_75464_p1.read()));
}

void poly1305_hw::thread_add_ln116_312_fu_75598_p2() {
    add_ln116_312_fu_75598_p2 = (!add_ln116_126_reg_114212.read().is_01() || !trunc_ln97_110_reg_114559.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_126_reg_114212.read()) + sc_biguint<8>(trunc_ln97_110_reg_114559.read()));
}

void poly1305_hw::thread_add_ln116_313_fu_75680_p2() {
    add_ln116_313_fu_75680_p2 = (!add_ln116_127_reg_114227.read().is_01() || !trunc_ln97_111_reg_114589.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_127_reg_114227.read()) + sc_biguint<8>(trunc_ln97_111_reg_114589.read()));
}

void poly1305_hw::thread_add_ln116_314_fu_75756_p2() {
    add_ln116_314_fu_75756_p2 = (!mul_17_16_reg_114262.read().is_01() || !trunc_ln97_112_fu_75693_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_16_reg_114262.read()) + sc_biguint<8>(trunc_ln97_112_fu_75693_p1.read()));
}

void poly1305_hw::thread_add_ln116_316_fu_75827_p2() {
    add_ln116_316_fu_75827_p2 = (!mul_18_14_reg_114282.read().is_01() || !trunc_ln97_113_reg_114629.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_14_reg_114282.read()) + sc_biguint<8>(trunc_ln97_113_reg_114629.read()));
}

void poly1305_hw::thread_add_ln116_318_fu_75909_p2() {
    add_ln116_318_fu_75909_p2 = (!mul_19_12_reg_114297.read().is_01() || !trunc_ln97_114_reg_114659.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_12_reg_114297.read()) + sc_biguint<8>(trunc_ln97_114_reg_114659.read()));
}

void poly1305_hw::thread_add_ln116_31_fu_67134_p2() {
    add_ln116_31_fu_67134_p2 = (!select_ln116_30_fu_67045_p3.read().is_01() || !add_ln116_131_fu_67129_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_30_fu_67045_p3.read()) + sc_biguint<8>(add_ln116_131_fu_67129_p2.read()));
}

void poly1305_hw::thread_add_ln116_320_fu_75985_p2() {
    add_ln116_320_fu_75985_p2 = (!mul_20_10_reg_114332.read().is_01() || !trunc_ln97_115_fu_75922_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_10_reg_114332.read()) + sc_biguint<8>(trunc_ln97_115_fu_75922_p1.read()));
}

void poly1305_hw::thread_add_ln116_322_fu_76056_p2() {
    add_ln116_322_fu_76056_p2 = (!mul_21_8_reg_114352.read().is_01() || !trunc_ln97_116_reg_114699.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_8_reg_114352.read()) + sc_biguint<8>(trunc_ln97_116_reg_114699.read()));
}

void poly1305_hw::thread_add_ln116_324_fu_76138_p2() {
    add_ln116_324_fu_76138_p2 = (!mul_22_6_reg_114367.read().is_01() || !trunc_ln97_117_reg_114729.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_6_reg_114367.read()) + sc_biguint<8>(trunc_ln97_117_reg_114729.read()));
}

void poly1305_hw::thread_add_ln116_326_fu_76214_p2() {
    add_ln116_326_fu_76214_p2 = (!mul_23_4_reg_114392.read().is_01() || !trunc_ln97_118_fu_76151_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_4_reg_114392.read()) + sc_biguint<8>(trunc_ln97_118_fu_76151_p1.read()));
}

void poly1305_hw::thread_add_ln116_328_fu_76285_p2() {
    add_ln116_328_fu_76285_p2 = (!mul_24_2_reg_114412.read().is_01() || !trunc_ln97_119_reg_114769.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_2_reg_114412.read()) + sc_biguint<8>(trunc_ln97_119_reg_114769.read()));
}

void poly1305_hw::thread_add_ln116_32_fu_64916_p2() {
    add_ln116_32_fu_64916_p2 = (!trunc_ln109_3_reg_110769.read().is_01() || !trunc_ln97_2_fu_64853_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_3_reg_110769.read()) + sc_biguint<8>(trunc_ln97_2_fu_64853_p1.read()));
}

void poly1305_hw::thread_add_ln116_330_fu_76362_p2() {
    add_ln116_330_fu_76362_p2 = (!mul_25_reg_14428.read().is_01() || !trunc_ln97_120_fu_76299_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_reg_14428.read()) + sc_biguint<8>(trunc_ln97_120_fu_76299_p1.read()));
}

void poly1305_hw::thread_add_ln116_332_fu_76437_p2() {
    add_ln116_332_fu_76437_p2 = (!add_ln116_137_reg_114463.read().is_01() || !trunc_ln97_121_reg_114814.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_137_reg_114463.read()) + sc_biguint<8>(trunc_ln97_121_reg_114814.read()));
}

void poly1305_hw::thread_add_ln116_333_fu_76519_p2() {
    add_ln116_333_fu_76519_p2 = (!add_ln116_138_reg_114478.read().is_01() || !trunc_ln97_122_reg_114840.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_138_reg_114478.read()) + sc_biguint<8>(trunc_ln97_122_reg_114840.read()));
}

void poly1305_hw::thread_add_ln116_334_fu_76595_p2() {
    add_ln116_334_fu_76595_p2 = (!add_ln116_139_reg_114513.read().is_01() || !trunc_ln97_123_fu_76532_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_139_reg_114513.read()) + sc_biguint<8>(trunc_ln97_123_fu_76532_p1.read()));
}

void poly1305_hw::thread_add_ln116_335_fu_76666_p2() {
    add_ln116_335_fu_76666_p2 = (!add_ln116_140_reg_114533.read().is_01() || !trunc_ln97_124_reg_114880.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_140_reg_114533.read()) + sc_biguint<8>(trunc_ln97_124_reg_114880.read()));
}

void poly1305_hw::thread_add_ln116_336_fu_76748_p2() {
    add_ln116_336_fu_76748_p2 = (!add_ln116_141_reg_114548.read().is_01() || !trunc_ln97_125_reg_114910.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_141_reg_114548.read()) + sc_biguint<8>(trunc_ln97_125_reg_114910.read()));
}

void poly1305_hw::thread_add_ln116_337_fu_76824_p2() {
    add_ln116_337_fu_76824_p2 = (!add_ln116_142_reg_114583.read().is_01() || !trunc_ln97_126_fu_76761_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_142_reg_114583.read()) + sc_biguint<8>(trunc_ln97_126_fu_76761_p1.read()));
}

void poly1305_hw::thread_add_ln116_338_fu_76895_p2() {
    add_ln116_338_fu_76895_p2 = (!add_ln116_143_reg_114603.read().is_01() || !trunc_ln97_127_reg_114950.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_143_reg_114603.read()) + sc_biguint<8>(trunc_ln97_127_reg_114950.read()));
}

void poly1305_hw::thread_add_ln116_339_fu_76977_p2() {
    add_ln116_339_fu_76977_p2 = (!mul_17_18_reg_114618.read().is_01() || !trunc_ln97_128_reg_114980.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_18_reg_114618.read()) + sc_biguint<8>(trunc_ln97_128_reg_114980.read()));
}

void poly1305_hw::thread_add_ln116_33_fu_64987_p2() {
    add_ln116_33_fu_64987_p2 = (!trunc_ln109_4_reg_110811.read().is_01() || !trunc_ln97_3_reg_111351.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_4_reg_110811.read()) + sc_biguint<8>(trunc_ln97_3_reg_111351.read()));
}

void poly1305_hw::thread_add_ln116_341_fu_77053_p2() {
    add_ln116_341_fu_77053_p2 = (!mul_18_16_reg_114653.read().is_01() || !trunc_ln97_129_fu_76990_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_16_reg_114653.read()) + sc_biguint<8>(trunc_ln97_129_fu_76990_p1.read()));
}

void poly1305_hw::thread_add_ln116_343_fu_77124_p2() {
    add_ln116_343_fu_77124_p2 = (!mul_19_14_reg_114673.read().is_01() || !trunc_ln97_130_reg_115020.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_14_reg_114673.read()) + sc_biguint<8>(trunc_ln97_130_reg_115020.read()));
}

void poly1305_hw::thread_add_ln116_345_fu_77206_p2() {
    add_ln116_345_fu_77206_p2 = (!mul_20_12_reg_114688.read().is_01() || !trunc_ln97_131_reg_115050.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_12_reg_114688.read()) + sc_biguint<8>(trunc_ln97_131_reg_115050.read()));
}

void poly1305_hw::thread_add_ln116_347_fu_77282_p2() {
    add_ln116_347_fu_77282_p2 = (!mul_21_10_reg_114723.read().is_01() || !trunc_ln97_132_fu_77219_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_10_reg_114723.read()) + sc_biguint<8>(trunc_ln97_132_fu_77219_p1.read()));
}

void poly1305_hw::thread_add_ln116_349_fu_77353_p2() {
    add_ln116_349_fu_77353_p2 = (!mul_22_8_reg_114743.read().is_01() || !trunc_ln97_133_reg_115090.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_8_reg_114743.read()) + sc_biguint<8>(trunc_ln97_133_reg_115090.read()));
}

void poly1305_hw::thread_add_ln116_34_fu_67356_p2() {
    add_ln116_34_fu_67356_p2 = (!select_ln116_33_fu_67304_p3.read().is_01() || !add_ln116_144_fu_67352_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_33_fu_67304_p3.read()) + sc_biguint<8>(add_ln116_144_fu_67352_p2.read()));
}

void poly1305_hw::thread_add_ln116_351_fu_77435_p2() {
    add_ln116_351_fu_77435_p2 = (!mul_23_6_reg_114758.read().is_01() || !trunc_ln97_134_reg_115120.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_6_reg_114758.read()) + sc_biguint<8>(trunc_ln97_134_reg_115120.read()));
}

void poly1305_hw::thread_add_ln116_353_fu_77511_p2() {
    add_ln116_353_fu_77511_p2 = (!mul_24_4_reg_114783.read().is_01() || !trunc_ln97_135_fu_77448_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_4_reg_114783.read()) + sc_biguint<8>(trunc_ln97_135_fu_77448_p1.read()));
}

void poly1305_hw::thread_add_ln116_355_fu_77582_p2() {
    add_ln116_355_fu_77582_p2 = (!mul_25_2_reg_114803.read().is_01() || !trunc_ln97_136_reg_115160.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_2_reg_114803.read()) + sc_biguint<8>(trunc_ln97_136_reg_115160.read()));
}

void poly1305_hw::thread_add_ln116_357_fu_77659_p2() {
    add_ln116_357_fu_77659_p2 = (!mul_26_reg_14605.read().is_01() || !trunc_ln97_137_fu_77596_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_reg_14605.read()) + sc_biguint<8>(trunc_ln97_137_fu_77596_p1.read()));
}

void poly1305_hw::thread_add_ln116_359_fu_77734_p2() {
    add_ln116_359_fu_77734_p2 = (!add_ln116_154_reg_114854.read().is_01() || !trunc_ln97_138_reg_115205.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_154_reg_114854.read()) + sc_biguint<8>(trunc_ln97_138_reg_115205.read()));
}

void poly1305_hw::thread_add_ln116_35_fu_67438_p2() {
    add_ln116_35_fu_67438_p2 = (!select_ln116_34_reg_112082.read().is_01() || !add_ln116_145_fu_67434_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_34_reg_112082.read()) + sc_biguint<8>(add_ln116_145_fu_67434_p2.read()));
}

void poly1305_hw::thread_add_ln116_360_fu_77816_p2() {
    add_ln116_360_fu_77816_p2 = (!add_ln116_155_reg_114869.read().is_01() || !trunc_ln96_32_reg_115231.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_155_reg_114869.read()) + sc_biguint<8>(trunc_ln96_32_reg_115231.read()));
}

void poly1305_hw::thread_add_ln116_361_fu_77892_p2() {
    add_ln116_361_fu_77892_p2 = (!add_ln116_156_reg_114904.read().is_01() || !trunc_ln96_33_fu_77829_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_156_reg_114904.read()) + sc_biguint<8>(trunc_ln96_33_fu_77829_p1.read()));
}

void poly1305_hw::thread_add_ln116_362_fu_77963_p2() {
    add_ln116_362_fu_77963_p2 = (!add_ln116_157_reg_114924.read().is_01() || !trunc_ln96_34_reg_115271.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_157_reg_114924.read()) + sc_biguint<8>(trunc_ln96_34_reg_115271.read()));
}

void poly1305_hw::thread_add_ln116_363_fu_78045_p2() {
    add_ln116_363_fu_78045_p2 = (!add_ln116_158_reg_114939.read().is_01() || !trunc_ln96_35_reg_115301.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_158_reg_114939.read()) + sc_biguint<8>(trunc_ln96_35_reg_115301.read()));
}

void poly1305_hw::thread_add_ln116_364_fu_78121_p2() {
    add_ln116_364_fu_78121_p2 = (!add_ln116_159_reg_114974.read().is_01() || !trunc_ln96_36_fu_78058_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_159_reg_114974.read()) + sc_biguint<8>(trunc_ln96_36_fu_78058_p1.read()));
}

void poly1305_hw::thread_add_ln116_365_fu_78192_p2() {
    add_ln116_365_fu_78192_p2 = (!mul_17_20_reg_114994.read().is_01() || !trunc_ln96_37_reg_115341.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_20_reg_114994.read()) + sc_biguint<8>(trunc_ln96_37_reg_115341.read()));
}

void poly1305_hw::thread_add_ln116_367_fu_78274_p2() {
    add_ln116_367_fu_78274_p2 = (!mul_18_18_reg_115009.read().is_01() || !trunc_ln96_38_reg_115371.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_18_reg_115009.read()) + sc_biguint<8>(trunc_ln96_38_reg_115371.read()));
}

void poly1305_hw::thread_add_ln116_369_fu_78350_p2() {
    add_ln116_369_fu_78350_p2 = (!mul_19_16_reg_115044.read().is_01() || !trunc_ln96_39_fu_78287_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_16_reg_115044.read()) + sc_biguint<8>(trunc_ln96_39_fu_78287_p1.read()));
}

void poly1305_hw::thread_add_ln116_36_fu_67515_p2() {
    add_ln116_36_fu_67515_p2 = (!select_ln116_35_fu_67426_p3.read().is_01() || !add_ln116_146_fu_67510_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_35_fu_67426_p3.read()) + sc_biguint<8>(add_ln116_146_fu_67510_p2.read()));
}

void poly1305_hw::thread_add_ln116_371_fu_78421_p2() {
    add_ln116_371_fu_78421_p2 = (!mul_20_14_reg_115064.read().is_01() || !trunc_ln96_40_reg_115411.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_14_reg_115064.read()) + sc_biguint<8>(trunc_ln96_40_reg_115411.read()));
}

void poly1305_hw::thread_add_ln116_373_fu_78503_p2() {
    add_ln116_373_fu_78503_p2 = (!mul_21_12_reg_115079.read().is_01() || !trunc_ln96_41_reg_115441.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_12_reg_115079.read()) + sc_biguint<8>(trunc_ln96_41_reg_115441.read()));
}

void poly1305_hw::thread_add_ln116_375_fu_78579_p2() {
    add_ln116_375_fu_78579_p2 = (!mul_22_10_reg_115114.read().is_01() || !trunc_ln96_42_fu_78516_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_10_reg_115114.read()) + sc_biguint<8>(trunc_ln96_42_fu_78516_p1.read()));
}

void poly1305_hw::thread_add_ln116_377_fu_78650_p2() {
    add_ln116_377_fu_78650_p2 = (!mul_23_8_reg_115134.read().is_01() || !trunc_ln96_43_reg_115481.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_8_reg_115134.read()) + sc_biguint<8>(trunc_ln96_43_reg_115481.read()));
}

void poly1305_hw::thread_add_ln116_379_fu_78732_p2() {
    add_ln116_379_fu_78732_p2 = (!mul_24_6_reg_115149.read().is_01() || !trunc_ln96_44_reg_115511.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_6_reg_115149.read()) + sc_biguint<8>(trunc_ln96_44_reg_115511.read()));
}

void poly1305_hw::thread_add_ln116_37_fu_67585_p2() {
    add_ln116_37_fu_67585_p2 = (!select_ln116_36_fu_67528_p3.read().is_01() || !add_ln116_147_fu_67581_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_36_fu_67528_p3.read()) + sc_biguint<8>(add_ln116_147_fu_67581_p2.read()));
}

void poly1305_hw::thread_add_ln116_381_fu_78808_p2() {
    add_ln116_381_fu_78808_p2 = (!mul_25_4_reg_115174.read().is_01() || !trunc_ln96_45_fu_78745_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_4_reg_115174.read()) + sc_biguint<8>(trunc_ln96_45_fu_78745_p1.read()));
}

void poly1305_hw::thread_add_ln116_383_fu_78879_p2() {
    add_ln116_383_fu_78879_p2 = (!mul_26_2_reg_115194.read().is_01() || !trunc_ln96_46_reg_115551.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_2_reg_115194.read()) + sc_biguint<8>(trunc_ln96_46_reg_115551.read()));
}

void poly1305_hw::thread_add_ln116_385_fu_78956_p2() {
    add_ln116_385_fu_78956_p2 = (!mul_27_reg_14782.read().is_01() || !trunc_ln96_47_fu_78893_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_reg_14782.read()) + sc_biguint<8>(trunc_ln96_47_fu_78893_p1.read()));
}

void poly1305_hw::thread_add_ln116_387_fu_79035_p2() {
    add_ln116_387_fu_79035_p2 = (!add_ln116_171_reg_115245.read().is_01() || !trunc_ln97_139_reg_115596.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_171_reg_115245.read()) + sc_biguint<8>(trunc_ln97_139_reg_115596.read()));
}

void poly1305_hw::thread_add_ln116_388_fu_79117_p2() {
    add_ln116_388_fu_79117_p2 = (!add_ln116_172_reg_115260.read().is_01() || !trunc_ln97_140_reg_115627.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_172_reg_115260.read()) + sc_biguint<8>(trunc_ln97_140_reg_115627.read()));
}

void poly1305_hw::thread_add_ln116_389_fu_79193_p2() {
    add_ln116_389_fu_79193_p2 = (!add_ln116_173_reg_115295.read().is_01() || !trunc_ln97_141_fu_79130_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_173_reg_115295.read()) + sc_biguint<8>(trunc_ln97_141_fu_79130_p1.read()));
}

void poly1305_hw::thread_add_ln116_38_fu_67667_p2() {
    add_ln116_38_fu_67667_p2 = (!select_ln116_37_reg_112152.read().is_01() || !add_ln116_148_fu_67663_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_37_reg_112152.read()) + sc_biguint<8>(add_ln116_148_fu_67663_p2.read()));
}

void poly1305_hw::thread_add_ln116_390_fu_79264_p2() {
    add_ln116_390_fu_79264_p2 = (!add_ln116_174_reg_115315.read().is_01() || !trunc_ln97_142_reg_115667.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_174_reg_115315.read()) + sc_biguint<8>(trunc_ln97_142_reg_115667.read()));
}

void poly1305_hw::thread_add_ln116_391_fu_79346_p2() {
    add_ln116_391_fu_79346_p2 = (!add_ln116_175_reg_115330.read().is_01() || !trunc_ln97_143_reg_115697.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_175_reg_115330.read()) + sc_biguint<8>(trunc_ln97_143_reg_115697.read()));
}

void poly1305_hw::thread_add_ln116_392_fu_79422_p2() {
    add_ln116_392_fu_79422_p2 = (!mul_17_22_reg_115365.read().is_01() || !trunc_ln97_144_fu_79359_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_22_reg_115365.read()) + sc_biguint<8>(trunc_ln97_144_fu_79359_p1.read()));
}

void poly1305_hw::thread_add_ln116_394_fu_79493_p2() {
    add_ln116_394_fu_79493_p2 = (!mul_18_20_reg_115385.read().is_01() || !trunc_ln97_145_reg_115737.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_20_reg_115385.read()) + sc_biguint<8>(trunc_ln97_145_reg_115737.read()));
}

void poly1305_hw::thread_add_ln116_396_fu_79575_p2() {
    add_ln116_396_fu_79575_p2 = (!mul_19_18_reg_115400.read().is_01() || !trunc_ln97_146_reg_115767.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_18_reg_115400.read()) + sc_biguint<8>(trunc_ln97_146_reg_115767.read()));
}

void poly1305_hw::thread_add_ln116_398_fu_79651_p2() {
    add_ln116_398_fu_79651_p2 = (!mul_20_16_reg_115435.read().is_01() || !trunc_ln97_147_fu_79588_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_16_reg_115435.read()) + sc_biguint<8>(trunc_ln97_147_fu_79588_p1.read()));
}

void poly1305_hw::thread_add_ln116_39_fu_67744_p2() {
    add_ln116_39_fu_67744_p2 = (!select_ln116_38_fu_67655_p3.read().is_01() || !add_ln116_149_fu_67739_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_38_fu_67655_p3.read()) + sc_biguint<8>(add_ln116_149_fu_67739_p2.read()));
}

void poly1305_hw::thread_add_ln116_3_fu_64991_p2() {
    add_ln116_3_fu_64991_p2 = (!select_ln116_2_fu_64934_p3.read().is_01() || !add_ln116_33_fu_64987_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_2_fu_64934_p3.read()) + sc_biguint<8>(add_ln116_33_fu_64987_p2.read()));
}

void poly1305_hw::thread_add_ln116_400_fu_79722_p2() {
    add_ln116_400_fu_79722_p2 = (!mul_21_14_reg_115455.read().is_01() || !trunc_ln97_148_reg_115807.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_14_reg_115455.read()) + sc_biguint<8>(trunc_ln97_148_reg_115807.read()));
}

void poly1305_hw::thread_add_ln116_402_fu_79804_p2() {
    add_ln116_402_fu_79804_p2 = (!mul_22_12_reg_115470.read().is_01() || !trunc_ln97_149_reg_115837.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_12_reg_115470.read()) + sc_biguint<8>(trunc_ln97_149_reg_115837.read()));
}

void poly1305_hw::thread_add_ln116_404_fu_79880_p2() {
    add_ln116_404_fu_79880_p2 = (!mul_23_10_reg_115505.read().is_01() || !trunc_ln97_150_fu_79817_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_10_reg_115505.read()) + sc_biguint<8>(trunc_ln97_150_fu_79817_p1.read()));
}

void poly1305_hw::thread_add_ln116_406_fu_79951_p2() {
    add_ln116_406_fu_79951_p2 = (!mul_24_8_reg_115525.read().is_01() || !trunc_ln97_151_reg_115877.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_8_reg_115525.read()) + sc_biguint<8>(trunc_ln97_151_reg_115877.read()));
}

void poly1305_hw::thread_add_ln116_408_fu_80033_p2() {
    add_ln116_408_fu_80033_p2 = (!mul_25_6_reg_115540.read().is_01() || !trunc_ln97_152_reg_115907.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_6_reg_115540.read()) + sc_biguint<8>(trunc_ln97_152_reg_115907.read()));
}

void poly1305_hw::thread_add_ln116_40_fu_67814_p2() {
    add_ln116_40_fu_67814_p2 = (!select_ln116_39_fu_67757_p3.read().is_01() || !add_ln116_150_fu_67810_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_39_fu_67757_p3.read()) + sc_biguint<8>(add_ln116_150_fu_67810_p2.read()));
}

void poly1305_hw::thread_add_ln116_410_fu_80109_p2() {
    add_ln116_410_fu_80109_p2 = (!mul_26_4_reg_115565.read().is_01() || !trunc_ln97_153_fu_80046_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_4_reg_115565.read()) + sc_biguint<8>(trunc_ln97_153_fu_80046_p1.read()));
}

void poly1305_hw::thread_add_ln116_412_fu_80180_p2() {
    add_ln116_412_fu_80180_p2 = (!mul_27_2_reg_115585.read().is_01() || !trunc_ln97_154_reg_115947.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_2_reg_115585.read()) + sc_biguint<8>(trunc_ln97_154_reg_115947.read()));
}

void poly1305_hw::thread_add_ln116_414_fu_80257_p2() {
    add_ln116_414_fu_80257_p2 = (!zext_ln105_2_reg_115606.read().is_01() || !trunc_ln97_155_fu_80194_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln105_2_reg_115606.read()) + sc_biguint<8>(trunc_ln97_155_fu_80194_p1.read()));
}

void poly1305_hw::thread_add_ln116_416_fu_80331_p2() {
    add_ln116_416_fu_80331_p2 = (!add_ln116_188_reg_115641.read().is_01() || !trunc_ln97_156_reg_115992.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_188_reg_115641.read()) + sc_biguint<8>(trunc_ln97_156_reg_115992.read()));
}

void poly1305_hw::thread_add_ln116_417_fu_80413_p2() {
    add_ln116_417_fu_80413_p2 = (!add_ln116_189_reg_115656.read().is_01() || !trunc_ln97_157_reg_116018.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_189_reg_115656.read()) + sc_biguint<8>(trunc_ln97_157_reg_116018.read()));
}

void poly1305_hw::thread_add_ln116_418_fu_80489_p2() {
    add_ln116_418_fu_80489_p2 = (!add_ln116_190_reg_115691.read().is_01() || !trunc_ln97_158_fu_80426_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_190_reg_115691.read()) + sc_biguint<8>(trunc_ln97_158_fu_80426_p1.read()));
}

void poly1305_hw::thread_add_ln116_419_fu_80560_p2() {
    add_ln116_419_fu_80560_p2 = (!add_ln116_191_reg_115711.read().is_01() || !trunc_ln97_159_reg_116058.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_191_reg_115711.read()) + sc_biguint<8>(trunc_ln97_159_reg_116058.read()));
}

void poly1305_hw::thread_add_ln116_41_fu_67896_p2() {
    add_ln116_41_fu_67896_p2 = (!select_ln116_40_reg_112222.read().is_01() || !add_ln116_151_fu_67892_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_40_reg_112222.read()) + sc_biguint<8>(add_ln116_151_fu_67892_p2.read()));
}

void poly1305_hw::thread_add_ln116_420_fu_80642_p2() {
    add_ln116_420_fu_80642_p2 = (!mul_17_24_reg_115726.read().is_01() || !trunc_ln97_160_reg_116088.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_24_reg_115726.read()) + sc_biguint<8>(trunc_ln97_160_reg_116088.read()));
}

void poly1305_hw::thread_add_ln116_422_fu_80718_p2() {
    add_ln116_422_fu_80718_p2 = (!mul_18_22_reg_115761.read().is_01() || !trunc_ln97_161_fu_80655_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_22_reg_115761.read()) + sc_biguint<8>(trunc_ln97_161_fu_80655_p1.read()));
}

void poly1305_hw::thread_add_ln116_424_fu_80789_p2() {
    add_ln116_424_fu_80789_p2 = (!mul_19_20_reg_115781.read().is_01() || !trunc_ln97_162_reg_116128.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_20_reg_115781.read()) + sc_biguint<8>(trunc_ln97_162_reg_116128.read()));
}

void poly1305_hw::thread_add_ln116_426_fu_80871_p2() {
    add_ln116_426_fu_80871_p2 = (!mul_20_18_reg_115796.read().is_01() || !trunc_ln97_163_reg_116158.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_18_reg_115796.read()) + sc_biguint<8>(trunc_ln97_163_reg_116158.read()));
}

void poly1305_hw::thread_add_ln116_428_fu_80947_p2() {
    add_ln116_428_fu_80947_p2 = (!mul_21_16_reg_115831.read().is_01() || !trunc_ln97_164_fu_80884_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_16_reg_115831.read()) + sc_biguint<8>(trunc_ln97_164_fu_80884_p1.read()));
}

void poly1305_hw::thread_add_ln116_42_fu_67973_p2() {
    add_ln116_42_fu_67973_p2 = (!select_ln116_41_fu_67884_p3.read().is_01() || !add_ln116_152_fu_67968_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_41_fu_67884_p3.read()) + sc_biguint<8>(add_ln116_152_fu_67968_p2.read()));
}

void poly1305_hw::thread_add_ln116_430_fu_81018_p2() {
    add_ln116_430_fu_81018_p2 = (!mul_22_14_reg_115851.read().is_01() || !trunc_ln97_165_reg_116198.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_14_reg_115851.read()) + sc_biguint<8>(trunc_ln97_165_reg_116198.read()));
}

void poly1305_hw::thread_add_ln116_432_fu_81100_p2() {
    add_ln116_432_fu_81100_p2 = (!mul_23_12_reg_115866.read().is_01() || !trunc_ln97_166_reg_116228.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_12_reg_115866.read()) + sc_biguint<8>(trunc_ln97_166_reg_116228.read()));
}

void poly1305_hw::thread_add_ln116_434_fu_81176_p2() {
    add_ln116_434_fu_81176_p2 = (!mul_24_10_reg_115901.read().is_01() || !trunc_ln97_167_fu_81113_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_10_reg_115901.read()) + sc_biguint<8>(trunc_ln97_167_fu_81113_p1.read()));
}

void poly1305_hw::thread_add_ln116_436_fu_81247_p2() {
    add_ln116_436_fu_81247_p2 = (!mul_25_8_reg_115921.read().is_01() || !trunc_ln97_168_reg_116268.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_8_reg_115921.read()) + sc_biguint<8>(trunc_ln97_168_reg_116268.read()));
}

void poly1305_hw::thread_add_ln116_438_fu_81329_p2() {
    add_ln116_438_fu_81329_p2 = (!mul_26_6_reg_115936.read().is_01() || !trunc_ln97_169_reg_116298.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_6_reg_115936.read()) + sc_biguint<8>(trunc_ln97_169_reg_116298.read()));
}

void poly1305_hw::thread_add_ln116_43_fu_68043_p2() {
    add_ln116_43_fu_68043_p2 = (!select_ln116_42_fu_67986_p3.read().is_01() || !add_ln116_160_fu_68039_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_42_fu_67986_p3.read()) + sc_biguint<8>(add_ln116_160_fu_68039_p2.read()));
}

void poly1305_hw::thread_add_ln116_440_fu_81405_p2() {
    add_ln116_440_fu_81405_p2 = (!mul_27_4_reg_115961.read().is_01() || !trunc_ln97_170_fu_81342_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_4_reg_115961.read()) + sc_biguint<8>(trunc_ln97_170_fu_81342_p1.read()));
}

void poly1305_hw::thread_add_ln116_442_fu_81476_p2() {
    add_ln116_442_fu_81476_p2 = (!mul_28_2_reg_115981.read().is_01() || !trunc_ln97_171_reg_116338.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_28_2_reg_115981.read()) + sc_biguint<8>(trunc_ln97_171_reg_116338.read()));
}

void poly1305_hw::thread_add_ln116_444_fu_81553_p2() {
    add_ln116_444_fu_81553_p2 = (!mul_29_reg_15136.read().is_01() || !trunc_ln97_172_fu_81490_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_29_reg_15136.read()) + sc_biguint<8>(trunc_ln97_172_fu_81490_p1.read()));
}

void poly1305_hw::thread_add_ln116_446_fu_81628_p2() {
    add_ln116_446_fu_81628_p2 = (!add_ln116_205_reg_116032.read().is_01() || !trunc_ln97_173_reg_116383.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_205_reg_116032.read()) + sc_biguint<8>(trunc_ln97_173_reg_116383.read()));
}

void poly1305_hw::thread_add_ln116_447_fu_81710_p2() {
    add_ln116_447_fu_81710_p2 = (!add_ln116_206_reg_116047.read().is_01() || !trunc_ln97_174_reg_116409.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_206_reg_116047.read()) + sc_biguint<8>(trunc_ln97_174_reg_116409.read()));
}

void poly1305_hw::thread_add_ln116_448_fu_81786_p2() {
    add_ln116_448_fu_81786_p2 = (!add_ln116_207_reg_116082.read().is_01() || !trunc_ln97_175_fu_81723_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_207_reg_116082.read()) + sc_biguint<8>(trunc_ln97_175_fu_81723_p1.read()));
}

void poly1305_hw::thread_add_ln116_449_fu_81857_p2() {
    add_ln116_449_fu_81857_p2 = (!mul_17_26_reg_116102.read().is_01() || !trunc_ln97_176_reg_116449.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_26_reg_116102.read()) + sc_biguint<8>(trunc_ln97_176_reg_116449.read()));
}

void poly1305_hw::thread_add_ln116_44_fu_68125_p2() {
    add_ln116_44_fu_68125_p2 = (!select_ln116_43_reg_112292.read().is_01() || !add_ln116_161_fu_68121_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_43_reg_112292.read()) + sc_biguint<8>(add_ln116_161_fu_68121_p2.read()));
}

void poly1305_hw::thread_add_ln116_451_fu_81939_p2() {
    add_ln116_451_fu_81939_p2 = (!mul_18_24_reg_116117.read().is_01() || !trunc_ln97_177_reg_116479.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_24_reg_116117.read()) + sc_biguint<8>(trunc_ln97_177_reg_116479.read()));
}

void poly1305_hw::thread_add_ln116_453_fu_82015_p2() {
    add_ln116_453_fu_82015_p2 = (!mul_19_22_reg_116152.read().is_01() || !trunc_ln97_178_fu_81952_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_22_reg_116152.read()) + sc_biguint<8>(trunc_ln97_178_fu_81952_p1.read()));
}

void poly1305_hw::thread_add_ln116_455_fu_82086_p2() {
    add_ln116_455_fu_82086_p2 = (!mul_20_20_reg_116172.read().is_01() || !trunc_ln97_179_reg_116519.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_20_reg_116172.read()) + sc_biguint<8>(trunc_ln97_179_reg_116519.read()));
}

void poly1305_hw::thread_add_ln116_457_fu_82168_p2() {
    add_ln116_457_fu_82168_p2 = (!mul_21_18_reg_116187.read().is_01() || !trunc_ln97_180_reg_116549.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_18_reg_116187.read()) + sc_biguint<8>(trunc_ln97_180_reg_116549.read()));
}

void poly1305_hw::thread_add_ln116_459_fu_82244_p2() {
    add_ln116_459_fu_82244_p2 = (!mul_22_16_reg_116222.read().is_01() || !trunc_ln97_181_fu_82181_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_16_reg_116222.read()) + sc_biguint<8>(trunc_ln97_181_fu_82181_p1.read()));
}

void poly1305_hw::thread_add_ln116_45_fu_68202_p2() {
    add_ln116_45_fu_68202_p2 = (!select_ln116_44_fu_68113_p3.read().is_01() || !add_ln116_162_fu_68197_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_44_fu_68113_p3.read()) + sc_biguint<8>(add_ln116_162_fu_68197_p2.read()));
}

void poly1305_hw::thread_add_ln116_461_fu_82315_p2() {
    add_ln116_461_fu_82315_p2 = (!mul_23_14_reg_116242.read().is_01() || !trunc_ln97_182_reg_116589.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_14_reg_116242.read()) + sc_biguint<8>(trunc_ln97_182_reg_116589.read()));
}

void poly1305_hw::thread_add_ln116_463_fu_82397_p2() {
    add_ln116_463_fu_82397_p2 = (!mul_24_12_reg_116257.read().is_01() || !trunc_ln97_183_reg_116619.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_12_reg_116257.read()) + sc_biguint<8>(trunc_ln97_183_reg_116619.read()));
}

void poly1305_hw::thread_add_ln116_465_fu_82473_p2() {
    add_ln116_465_fu_82473_p2 = (!mul_25_10_reg_116292.read().is_01() || !trunc_ln97_184_fu_82410_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_10_reg_116292.read()) + sc_biguint<8>(trunc_ln97_184_fu_82410_p1.read()));
}

void poly1305_hw::thread_add_ln116_467_fu_82544_p2() {
    add_ln116_467_fu_82544_p2 = (!mul_26_8_reg_116312.read().is_01() || !trunc_ln97_185_reg_116659.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_8_reg_116312.read()) + sc_biguint<8>(trunc_ln97_185_reg_116659.read()));
}

void poly1305_hw::thread_add_ln116_469_fu_82626_p2() {
    add_ln116_469_fu_82626_p2 = (!mul_27_6_reg_116327.read().is_01() || !trunc_ln97_186_reg_116689.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_6_reg_116327.read()) + sc_biguint<8>(trunc_ln97_186_reg_116689.read()));
}

void poly1305_hw::thread_add_ln116_46_fu_68272_p2() {
    add_ln116_46_fu_68272_p2 = (!select_ln116_45_fu_68215_p3.read().is_01() || !add_ln116_163_fu_68268_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_45_fu_68215_p3.read()) + sc_biguint<8>(add_ln116_163_fu_68268_p2.read()));
}

void poly1305_hw::thread_add_ln116_471_fu_82702_p2() {
    add_ln116_471_fu_82702_p2 = (!mul_28_4_reg_116352.read().is_01() || !trunc_ln97_187_fu_82639_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_28_4_reg_116352.read()) + sc_biguint<8>(trunc_ln97_187_fu_82639_p1.read()));
}

void poly1305_hw::thread_add_ln116_473_fu_82773_p2() {
    add_ln116_473_fu_82773_p2 = (!mul_29_2_reg_116372.read().is_01() || !trunc_ln97_188_reg_116729.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_29_2_reg_116372.read()) + sc_biguint<8>(trunc_ln97_188_reg_116729.read()));
}

void poly1305_hw::thread_add_ln116_475_fu_82850_p2() {
    add_ln116_475_fu_82850_p2 = (!mul_30_reg_15313.read().is_01() || !trunc_ln97_189_fu_82787_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_30_reg_15313.read()) + sc_biguint<8>(trunc_ln97_189_fu_82787_p1.read()));
}

void poly1305_hw::thread_add_ln116_477_fu_82925_p2() {
    add_ln116_477_fu_82925_p2 = (!add_ln116_222_reg_116423.read().is_01() || !trunc_ln97_190_reg_116774.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_222_reg_116423.read()) + sc_biguint<8>(trunc_ln97_190_reg_116774.read()));
}

void poly1305_hw::thread_add_ln116_478_fu_83007_p2() {
    add_ln116_478_fu_83007_p2 = (!add_ln116_223_reg_116438.read().is_01() || !trunc_ln96_48_reg_116800.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_223_reg_116438.read()) + sc_biguint<8>(trunc_ln96_48_reg_116800.read()));
}

void poly1305_hw::thread_add_ln116_479_fu_83083_p2() {
    add_ln116_479_fu_83083_p2 = (!mul_17_28_reg_116473.read().is_01() || !trunc_ln96_49_fu_83020_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_28_reg_116473.read()) + sc_biguint<8>(trunc_ln96_49_fu_83020_p1.read()));
}

void poly1305_hw::thread_add_ln116_47_fu_68354_p2() {
    add_ln116_47_fu_68354_p2 = (!select_ln116_46_reg_112362.read().is_01() || !add_ln116_164_fu_68350_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_46_reg_112362.read()) + sc_biguint<8>(add_ln116_164_fu_68350_p2.read()));
}

void poly1305_hw::thread_add_ln116_481_fu_83154_p2() {
    add_ln116_481_fu_83154_p2 = (!mul_18_26_reg_116493.read().is_01() || !trunc_ln96_50_reg_116840.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_26_reg_116493.read()) + sc_biguint<8>(trunc_ln96_50_reg_116840.read()));
}

void poly1305_hw::thread_add_ln116_483_fu_83236_p2() {
    add_ln116_483_fu_83236_p2 = (!mul_19_24_reg_116508.read().is_01() || !trunc_ln96_51_reg_116870.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_24_reg_116508.read()) + sc_biguint<8>(trunc_ln96_51_reg_116870.read()));
}

void poly1305_hw::thread_add_ln116_485_fu_83312_p2() {
    add_ln116_485_fu_83312_p2 = (!mul_20_22_reg_116543.read().is_01() || !trunc_ln96_52_fu_83249_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_22_reg_116543.read()) + sc_biguint<8>(trunc_ln96_52_fu_83249_p1.read()));
}

void poly1305_hw::thread_add_ln116_487_fu_83383_p2() {
    add_ln116_487_fu_83383_p2 = (!mul_21_20_reg_116563.read().is_01() || !trunc_ln96_53_reg_116910.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_20_reg_116563.read()) + sc_biguint<8>(trunc_ln96_53_reg_116910.read()));
}

void poly1305_hw::thread_add_ln116_489_fu_83465_p2() {
    add_ln116_489_fu_83465_p2 = (!mul_22_18_reg_116578.read().is_01() || !trunc_ln96_54_reg_116940.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_18_reg_116578.read()) + sc_biguint<8>(trunc_ln96_54_reg_116940.read()));
}

void poly1305_hw::thread_add_ln116_48_fu_65069_p2() {
    add_ln116_48_fu_65069_p2 = (!trunc_ln109_5_reg_110843.read().is_01() || !trunc_ln97_4_reg_111381.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_5_reg_110843.read()) + sc_biguint<8>(trunc_ln97_4_reg_111381.read()));
}

void poly1305_hw::thread_add_ln116_491_fu_83541_p2() {
    add_ln116_491_fu_83541_p2 = (!mul_23_16_reg_116613.read().is_01() || !trunc_ln96_55_fu_83478_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_16_reg_116613.read()) + sc_biguint<8>(trunc_ln96_55_fu_83478_p1.read()));
}

void poly1305_hw::thread_add_ln116_493_fu_83612_p2() {
    add_ln116_493_fu_83612_p2 = (!mul_24_14_reg_116633.read().is_01() || !trunc_ln96_56_reg_116980.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_14_reg_116633.read()) + sc_biguint<8>(trunc_ln96_56_reg_116980.read()));
}

void poly1305_hw::thread_add_ln116_495_fu_83694_p2() {
    add_ln116_495_fu_83694_p2 = (!mul_25_12_reg_116648.read().is_01() || !trunc_ln96_57_reg_117010.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_12_reg_116648.read()) + sc_biguint<8>(trunc_ln96_57_reg_117010.read()));
}

void poly1305_hw::thread_add_ln116_497_fu_83770_p2() {
    add_ln116_497_fu_83770_p2 = (!mul_26_10_reg_116683.read().is_01() || !trunc_ln96_58_fu_83707_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_10_reg_116683.read()) + sc_biguint<8>(trunc_ln96_58_fu_83707_p1.read()));
}

void poly1305_hw::thread_add_ln116_499_fu_83841_p2() {
    add_ln116_499_fu_83841_p2 = (!mul_27_8_reg_116703.read().is_01() || !trunc_ln96_59_reg_117050.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_8_reg_116703.read()) + sc_biguint<8>(trunc_ln96_59_reg_117050.read()));
}

void poly1305_hw::thread_add_ln116_49_fu_65145_p2() {
    add_ln116_49_fu_65145_p2 = (!trunc_ln109_6_reg_110886.read().is_01() || !trunc_ln97_5_fu_65082_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_6_reg_110886.read()) + sc_biguint<8>(trunc_ln97_5_fu_65082_p1.read()));
}

void poly1305_hw::thread_add_ln116_4_fu_65073_p2() {
    add_ln116_4_fu_65073_p2 = (!select_ln116_3_reg_111370.read().is_01() || !add_ln116_48_fu_65069_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_3_reg_111370.read()) + sc_biguint<8>(add_ln116_48_fu_65069_p2.read()));
}

void poly1305_hw::thread_add_ln116_501_fu_83923_p2() {
    add_ln116_501_fu_83923_p2 = (!mul_28_6_reg_116718.read().is_01() || !trunc_ln96_60_reg_117080.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_28_6_reg_116718.read()) + sc_biguint<8>(trunc_ln96_60_reg_117080.read()));
}

void poly1305_hw::thread_add_ln116_503_fu_83999_p2() {
    add_ln116_503_fu_83999_p2 = (!mul_29_4_reg_116743.read().is_01() || !trunc_ln96_61_fu_83936_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_29_4_reg_116743.read()) + sc_biguint<8>(trunc_ln96_61_fu_83936_p1.read()));
}

void poly1305_hw::thread_add_ln116_505_fu_84070_p2() {
    add_ln116_505_fu_84070_p2 = (!mul_30_2_reg_116763.read().is_01() || !trunc_ln96_62_reg_117120.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_30_2_reg_116763.read()) + sc_biguint<8>(trunc_ln96_62_reg_117120.read()));
}

void poly1305_hw::thread_add_ln116_507_fu_84111_p2() {
    add_ln116_507_fu_84111_p2 = (!mul_31_reg_15490.read().is_01() || !trunc_ln96_63_fu_84084_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_31_reg_15490.read()) + sc_biguint<8>(trunc_ln96_63_fu_84084_p1.read()));
}

void poly1305_hw::thread_add_ln116_50_fu_65216_p2() {
    add_ln116_50_fu_65216_p2 = (!trunc_ln109_7_reg_110928.read().is_01() || !trunc_ln97_6_reg_111421.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_7_reg_110928.read()) + sc_biguint<8>(trunc_ln97_6_reg_111421.read()));
}

void poly1305_hw::thread_add_ln116_51_fu_68657_p2() {
    add_ln116_51_fu_68657_p2 = (!select_ln116_50_fu_68605_p3.read().is_01() || !add_ln116_177_fu_68653_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_50_fu_68605_p3.read()) + sc_biguint<8>(add_ln116_177_fu_68653_p2.read()));
}

void poly1305_hw::thread_add_ln116_52_fu_68739_p2() {
    add_ln116_52_fu_68739_p2 = (!select_ln116_51_reg_112478.read().is_01() || !add_ln116_178_fu_68735_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_51_reg_112478.read()) + sc_biguint<8>(add_ln116_178_fu_68735_p2.read()));
}

void poly1305_hw::thread_add_ln116_53_fu_68816_p2() {
    add_ln116_53_fu_68816_p2 = (!select_ln116_52_fu_68727_p3.read().is_01() || !add_ln116_179_fu_68811_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_52_fu_68727_p3.read()) + sc_biguint<8>(add_ln116_179_fu_68811_p2.read()));
}

void poly1305_hw::thread_add_ln116_54_fu_68886_p2() {
    add_ln116_54_fu_68886_p2 = (!select_ln116_53_fu_68829_p3.read().is_01() || !add_ln116_180_fu_68882_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_53_fu_68829_p3.read()) + sc_biguint<8>(add_ln116_180_fu_68882_p2.read()));
}

void poly1305_hw::thread_add_ln116_55_fu_68968_p2() {
    add_ln116_55_fu_68968_p2 = (!select_ln116_54_reg_112548.read().is_01() || !add_ln116_181_fu_68964_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_54_reg_112548.read()) + sc_biguint<8>(add_ln116_181_fu_68964_p2.read()));
}

void poly1305_hw::thread_add_ln116_56_fu_69045_p2() {
    add_ln116_56_fu_69045_p2 = (!select_ln116_55_fu_68956_p3.read().is_01() || !add_ln116_182_fu_69040_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_55_fu_68956_p3.read()) + sc_biguint<8>(add_ln116_182_fu_69040_p2.read()));
}

void poly1305_hw::thread_add_ln116_57_fu_69115_p2() {
    add_ln116_57_fu_69115_p2 = (!select_ln116_56_fu_69058_p3.read().is_01() || !add_ln116_183_fu_69111_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_56_fu_69058_p3.read()) + sc_biguint<8>(add_ln116_183_fu_69111_p2.read()));
}

void poly1305_hw::thread_add_ln116_58_fu_69197_p2() {
    add_ln116_58_fu_69197_p2 = (!select_ln116_57_reg_112618.read().is_01() || !add_ln116_184_fu_69193_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_57_reg_112618.read()) + sc_biguint<8>(add_ln116_184_fu_69193_p2.read()));
}

void poly1305_hw::thread_add_ln116_59_fu_69274_p2() {
    add_ln116_59_fu_69274_p2 = (!select_ln116_58_fu_69185_p3.read().is_01() || !add_ln116_185_fu_69269_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_58_fu_69185_p3.read()) + sc_biguint<8>(add_ln116_185_fu_69269_p2.read()));
}

void poly1305_hw::thread_add_ln116_5_fu_65150_p2() {
    add_ln116_5_fu_65150_p2 = (!select_ln116_4_fu_65061_p3.read().is_01() || !add_ln116_49_fu_65145_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_4_fu_65061_p3.read()) + sc_biguint<8>(add_ln116_49_fu_65145_p2.read()));
}

void poly1305_hw::thread_add_ln116_60_fu_69344_p2() {
    add_ln116_60_fu_69344_p2 = (!select_ln116_59_fu_69287_p3.read().is_01() || !add_ln116_186_fu_69340_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_59_fu_69287_p3.read()) + sc_biguint<8>(add_ln116_186_fu_69340_p2.read()));
}

void poly1305_hw::thread_add_ln116_61_fu_69426_p2() {
    add_ln116_61_fu_69426_p2 = (!select_ln116_60_reg_112688.read().is_01() || !add_ln116_192_fu_69422_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_60_reg_112688.read()) + sc_biguint<8>(add_ln116_192_fu_69422_p2.read()));
}

void poly1305_hw::thread_add_ln116_62_fu_69503_p2() {
    add_ln116_62_fu_69503_p2 = (!select_ln116_61_fu_69414_p3.read().is_01() || !add_ln116_193_fu_69498_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_61_fu_69414_p3.read()) + sc_biguint<8>(add_ln116_193_fu_69498_p2.read()));
}

void poly1305_hw::thread_add_ln116_63_fu_69573_p2() {
    add_ln116_63_fu_69573_p2 = (!select_ln116_62_fu_69516_p3.read().is_01() || !add_ln116_194_fu_69569_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_62_fu_69516_p3.read()) + sc_biguint<8>(add_ln116_194_fu_69569_p2.read()));
}

void poly1305_hw::thread_add_ln116_64_fu_65298_p2() {
    add_ln116_64_fu_65298_p2 = (!trunc_ln109_8_reg_110960.read().is_01() || !trunc_ln97_7_reg_111451.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_8_reg_110960.read()) + sc_biguint<8>(trunc_ln97_7_reg_111451.read()));
}

void poly1305_hw::thread_add_ln116_65_fu_65374_p2() {
    add_ln116_65_fu_65374_p2 = (!trunc_ln109_9_reg_111003.read().is_01() || !trunc_ln97_8_fu_65311_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_9_reg_111003.read()) + sc_biguint<8>(trunc_ln97_8_fu_65311_p1.read()));
}

void poly1305_hw::thread_add_ln116_66_fu_65445_p2() {
    add_ln116_66_fu_65445_p2 = (!trunc_ln109_10_reg_111045.read().is_01() || !trunc_ln97_9_reg_111491.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_10_reg_111045.read()) + sc_biguint<8>(trunc_ln97_9_reg_111491.read()));
}

void poly1305_hw::thread_add_ln116_67_fu_65527_p2() {
    add_ln116_67_fu_65527_p2 = (!trunc_ln109_11_reg_111077.read().is_01() || !trunc_ln97_10_reg_111521.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_11_reg_111077.read()) + sc_biguint<8>(trunc_ln97_10_reg_111521.read()));
}

void poly1305_hw::thread_add_ln116_68_fu_69953_p2() {
    add_ln116_68_fu_69953_p2 = (!select_ln116_67_fu_69901_p3.read().is_01() || !add_ln116_203_fu_69949_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_67_fu_69901_p3.read()) + sc_biguint<8>(add_ln116_203_fu_69949_p2.read()));
}

void poly1305_hw::thread_add_ln116_69_fu_70035_p2() {
    add_ln116_69_fu_70035_p2 = (!select_ln116_68_reg_112869.read().is_01() || !add_ln116_208_fu_70031_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_68_reg_112869.read()) + sc_biguint<8>(add_ln116_208_fu_70031_p2.read()));
}

void poly1305_hw::thread_add_ln116_6_fu_65220_p2() {
    add_ln116_6_fu_65220_p2 = (!select_ln116_5_fu_65163_p3.read().is_01() || !add_ln116_50_fu_65216_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_5_fu_65163_p3.read()) + sc_biguint<8>(add_ln116_50_fu_65216_p2.read()));
}

void poly1305_hw::thread_add_ln116_70_fu_70112_p2() {
    add_ln116_70_fu_70112_p2 = (!select_ln116_69_fu_70023_p3.read().is_01() || !add_ln116_209_fu_70107_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_69_fu_70023_p3.read()) + sc_biguint<8>(add_ln116_209_fu_70107_p2.read()));
}

void poly1305_hw::thread_add_ln116_71_fu_70182_p2() {
    add_ln116_71_fu_70182_p2 = (!select_ln116_70_fu_70125_p3.read().is_01() || !add_ln116_210_fu_70178_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_70_fu_70125_p3.read()) + sc_biguint<8>(add_ln116_210_fu_70178_p2.read()));
}

void poly1305_hw::thread_add_ln116_72_fu_70264_p2() {
    add_ln116_72_fu_70264_p2 = (!select_ln116_71_reg_112939.read().is_01() || !add_ln116_211_fu_70260_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_71_reg_112939.read()) + sc_biguint<8>(add_ln116_211_fu_70260_p2.read()));
}

void poly1305_hw::thread_add_ln116_73_fu_70341_p2() {
    add_ln116_73_fu_70341_p2 = (!select_ln116_72_fu_70252_p3.read().is_01() || !add_ln116_212_fu_70336_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_72_fu_70252_p3.read()) + sc_biguint<8>(add_ln116_212_fu_70336_p2.read()));
}

void poly1305_hw::thread_add_ln116_74_fu_70411_p2() {
    add_ln116_74_fu_70411_p2 = (!select_ln116_73_fu_70354_p3.read().is_01() || !add_ln116_213_fu_70407_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_73_fu_70354_p3.read()) + sc_biguint<8>(add_ln116_213_fu_70407_p2.read()));
}

void poly1305_hw::thread_add_ln116_75_fu_70493_p2() {
    add_ln116_75_fu_70493_p2 = (!select_ln116_74_reg_113009.read().is_01() || !add_ln116_214_fu_70489_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_74_reg_113009.read()) + sc_biguint<8>(add_ln116_214_fu_70489_p2.read()));
}

void poly1305_hw::thread_add_ln116_76_fu_70570_p2() {
    add_ln116_76_fu_70570_p2 = (!select_ln116_75_fu_70481_p3.read().is_01() || !add_ln116_215_fu_70565_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_75_fu_70481_p3.read()) + sc_biguint<8>(add_ln116_215_fu_70565_p2.read()));
}

void poly1305_hw::thread_add_ln116_77_fu_70640_p2() {
    add_ln116_77_fu_70640_p2 = (!select_ln116_76_fu_70583_p3.read().is_01() || !add_ln116_216_fu_70636_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_76_fu_70583_p3.read()) + sc_biguint<8>(add_ln116_216_fu_70636_p2.read()));
}

void poly1305_hw::thread_add_ln116_78_fu_70722_p2() {
    add_ln116_78_fu_70722_p2 = (!select_ln116_77_reg_113079.read().is_01() || !add_ln116_217_fu_70718_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_77_reg_113079.read()) + sc_biguint<8>(add_ln116_217_fu_70718_p2.read()));
}

void poly1305_hw::thread_add_ln116_79_fu_70799_p2() {
    add_ln116_79_fu_70799_p2 = (!select_ln116_78_fu_70710_p3.read().is_01() || !add_ln116_218_fu_70794_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_78_fu_70710_p3.read()) + sc_biguint<8>(add_ln116_218_fu_70794_p2.read()));
}

void poly1305_hw::thread_add_ln116_7_fu_65302_p2() {
    add_ln116_7_fu_65302_p2 = (!select_ln116_6_reg_111440.read().is_01() || !add_ln116_64_fu_65298_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_6_reg_111440.read()) + sc_biguint<8>(add_ln116_64_fu_65298_p2.read()));
}

void poly1305_hw::thread_add_ln116_80_fu_65603_p2() {
    add_ln116_80_fu_65603_p2 = (!trunc_ln109_12_reg_111120.read().is_01() || !trunc_ln97_11_fu_65540_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_12_reg_111120.read()) + sc_biguint<8>(trunc_ln97_11_fu_65540_p1.read()));
}

void poly1305_hw::thread_add_ln116_81_fu_65674_p2() {
    add_ln116_81_fu_65674_p2 = (!trunc_ln109_13_reg_111162.read().is_01() || !trunc_ln97_12_reg_111561.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_13_reg_111162.read()) + sc_biguint<8>(trunc_ln97_12_reg_111561.read()));
}

void poly1305_hw::thread_add_ln116_82_fu_65756_p2() {
    add_ln116_82_fu_65756_p2 = (!trunc_ln109_14_reg_111194.read().is_01() || !trunc_ln97_13_reg_111591.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_14_reg_111194.read()) + sc_biguint<8>(trunc_ln97_13_reg_111591.read()));
}

void poly1305_hw::thread_add_ln116_83_fu_65832_p2() {
    add_ln116_83_fu_65832_p2 = (!trunc_ln109_15_reg_111237.read().is_01() || !trunc_ln97_14_fu_65769_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_15_reg_111237.read()) + sc_biguint<8>(trunc_ln97_14_fu_65769_p1.read()));
}

void poly1305_hw::thread_add_ln116_84_fu_65903_p2() {
    add_ln116_84_fu_65903_p2 = (!trunc_ln109_16_reg_111274.read().is_01() || !trunc_ln97_15_reg_111631.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_16_reg_111274.read()) + sc_biguint<8>(trunc_ln97_15_reg_111631.read()));
}

void poly1305_hw::thread_add_ln116_85_fu_71250_p2() {
    add_ln116_85_fu_71250_p2 = (!select_ln116_84_fu_71198_p3.read().is_01() || !add_ln116_232_fu_71246_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_84_fu_71198_p3.read()) + sc_biguint<8>(add_ln116_232_fu_71246_p2.read()));
}

void poly1305_hw::thread_add_ln116_86_fu_71332_p2() {
    add_ln116_86_fu_71332_p2 = (!select_ln116_85_reg_113260.read().is_01() || !add_ln116_233_fu_71328_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_85_reg_113260.read()) + sc_biguint<8>(add_ln116_233_fu_71328_p2.read()));
}

void poly1305_hw::thread_add_ln116_87_fu_71409_p2() {
    add_ln116_87_fu_71409_p2 = (!select_ln116_86_fu_71320_p3.read().is_01() || !add_ln116_234_fu_71404_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_86_fu_71320_p3.read()) + sc_biguint<8>(add_ln116_234_fu_71404_p2.read()));
}

void poly1305_hw::thread_add_ln116_88_fu_71479_p2() {
    add_ln116_88_fu_71479_p2 = (!select_ln116_87_fu_71422_p3.read().is_01() || !add_ln116_235_fu_71475_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_87_fu_71422_p3.read()) + sc_biguint<8>(add_ln116_235_fu_71475_p2.read()));
}

void poly1305_hw::thread_add_ln116_89_fu_71561_p2() {
    add_ln116_89_fu_71561_p2 = (!select_ln116_88_reg_113330.read().is_01() || !add_ln116_236_fu_71557_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_88_reg_113330.read()) + sc_biguint<8>(add_ln116_236_fu_71557_p2.read()));
}

void poly1305_hw::thread_add_ln116_8_fu_65379_p2() {
    add_ln116_8_fu_65379_p2 = (!select_ln116_7_fu_65290_p3.read().is_01() || !add_ln116_65_fu_65374_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_7_fu_65290_p3.read()) + sc_biguint<8>(add_ln116_65_fu_65374_p2.read()));
}

void poly1305_hw::thread_add_ln116_90_fu_71638_p2() {
    add_ln116_90_fu_71638_p2 = (!select_ln116_89_fu_71549_p3.read().is_01() || !add_ln116_237_fu_71633_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_89_fu_71549_p3.read()) + sc_biguint<8>(add_ln116_237_fu_71633_p2.read()));
}

void poly1305_hw::thread_add_ln116_91_fu_71708_p2() {
    add_ln116_91_fu_71708_p2 = (!select_ln116_90_fu_71651_p3.read().is_01() || !add_ln116_240_fu_71704_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_90_fu_71651_p3.read()) + sc_biguint<8>(add_ln116_240_fu_71704_p2.read()));
}

void poly1305_hw::thread_add_ln116_92_fu_71790_p2() {
    add_ln116_92_fu_71790_p2 = (!select_ln116_91_reg_113400.read().is_01() || !add_ln116_241_fu_71786_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_91_reg_113400.read()) + sc_biguint<8>(add_ln116_241_fu_71786_p2.read()));
}

void poly1305_hw::thread_add_ln116_93_fu_71867_p2() {
    add_ln116_93_fu_71867_p2 = (!select_ln116_92_fu_71778_p3.read().is_01() || !add_ln116_242_fu_71862_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_92_fu_71778_p3.read()) + sc_biguint<8>(add_ln116_242_fu_71862_p2.read()));
}

void poly1305_hw::thread_add_ln116_94_fu_71937_p2() {
    add_ln116_94_fu_71937_p2 = (!select_ln116_93_fu_71880_p3.read().is_01() || !add_ln116_243_fu_71933_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_93_fu_71880_p3.read()) + sc_biguint<8>(add_ln116_243_fu_71933_p2.read()));
}

void poly1305_hw::thread_add_ln116_95_fu_72019_p2() {
    add_ln116_95_fu_72019_p2 = (!select_ln116_94_reg_113470.read().is_01() || !add_ln116_244_fu_72015_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_94_reg_113470.read()) + sc_biguint<8>(add_ln116_244_fu_72015_p2.read()));
}

void poly1305_hw::thread_add_ln116_96_fu_65980_p2() {
    add_ln116_96_fu_65980_p2 = (!mul_17_reg_13012.read().is_01() || !trunc_ln97_16_fu_65917_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_reg_13012.read()) + sc_biguint<8>(trunc_ln97_16_fu_65917_p1.read()));
}

void poly1305_hw::thread_add_ln116_98_fu_66055_p2() {
    add_ln116_98_fu_66055_p2 = (!add_ln116_1_reg_111325.read().is_01() || !trunc_ln97_17_reg_111676.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_1_reg_111325.read()) + sc_biguint<8>(trunc_ln97_17_reg_111676.read()));
}

void poly1305_hw::thread_add_ln116_99_fu_66137_p2() {
    add_ln116_99_fu_66137_p2 = (!add_ln116_2_reg_111340.read().is_01() || !trunc_ln97_18_reg_111702.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln116_2_reg_111340.read()) + sc_biguint<8>(trunc_ln97_18_reg_111702.read()));
}

void poly1305_hw::thread_add_ln116_9_fu_65449_p2() {
    add_ln116_9_fu_65449_p2 = (!select_ln116_8_fu_65392_p3.read().is_01() || !add_ln116_66_fu_65445_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln116_8_fu_65392_p3.read()) + sc_biguint<8>(add_ln116_66_fu_65445_p2.read()));
}

void poly1305_hw::thread_add_ln116_fu_64764_p2() {
    add_ln116_fu_64764_p2 = (!trunc_ln109_1_reg_110694.read().is_01() || !trunc_ln97_reg_111285.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln109_1_reg_110694.read()) + sc_biguint<8>(trunc_ln97_reg_111285.read()));
}

void poly1305_hw::thread_add_ln183_fu_84693_p2() {
    add_ln183_fu_84693_p2 = (!select_ln183_fu_84685_p3.read().is_01() || !zext_ln160_reg_117272.read().is_01())? sc_lv<7>(): (sc_biguint<7>(select_ln183_fu_84685_p3.read()) + sc_biguint<7>(zext_ln160_reg_117272.read()));
}

void poly1305_hw::thread_add_ln184_10_fu_84480_p2() {
    add_ln184_10_fu_84480_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_B));
}

void poly1305_hw::thread_add_ln184_11_fu_84490_p2() {
    add_ln184_11_fu_84490_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_C));
}

void poly1305_hw::thread_add_ln184_12_fu_84500_p2() {
    add_ln184_12_fu_84500_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_D));
}

void poly1305_hw::thread_add_ln184_13_fu_84510_p2() {
    add_ln184_13_fu_84510_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_E));
}

void poly1305_hw::thread_add_ln184_14_fu_84520_p2() {
    add_ln184_14_fu_84520_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_F));
}

void poly1305_hw::thread_add_ln184_15_fu_84530_p2() {
    add_ln184_15_fu_84530_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_10));
}

void poly1305_hw::thread_add_ln184_16_fu_84540_p2() {
    add_ln184_16_fu_84540_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln184_17_fu_84550_p2() {
    add_ln184_17_fu_84550_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_12));
}

void poly1305_hw::thread_add_ln184_18_fu_84560_p2() {
    add_ln184_18_fu_84560_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_13));
}

void poly1305_hw::thread_add_ln184_19_fu_84570_p2() {
    add_ln184_19_fu_84570_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_14));
}

void poly1305_hw::thread_add_ln184_1_fu_84390_p2() {
    add_ln184_1_fu_84390_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void poly1305_hw::thread_add_ln184_20_fu_84580_p2() {
    add_ln184_20_fu_84580_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_15));
}

void poly1305_hw::thread_add_ln184_21_fu_84590_p2() {
    add_ln184_21_fu_84590_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_16));
}

void poly1305_hw::thread_add_ln184_22_fu_84600_p2() {
    add_ln184_22_fu_84600_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_17));
}

void poly1305_hw::thread_add_ln184_23_fu_84610_p2() {
    add_ln184_23_fu_84610_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void poly1305_hw::thread_add_ln184_24_fu_84620_p2() {
    add_ln184_24_fu_84620_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_19));
}

void poly1305_hw::thread_add_ln184_25_fu_84630_p2() {
    add_ln184_25_fu_84630_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_1A));
}

void poly1305_hw::thread_add_ln184_26_fu_84640_p2() {
    add_ln184_26_fu_84640_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_1B));
}

void poly1305_hw::thread_add_ln184_27_fu_84650_p2() {
    add_ln184_27_fu_84650_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_1C));
}

void poly1305_hw::thread_add_ln184_28_fu_84660_p2() {
    add_ln184_28_fu_84660_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_1D));
}

void poly1305_hw::thread_add_ln184_29_fu_84670_p2() {
    add_ln184_29_fu_84670_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_1E));
}

void poly1305_hw::thread_add_ln184_2_fu_84400_p2() {
    add_ln184_2_fu_84400_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void poly1305_hw::thread_add_ln184_30_fu_84680_p2() {
    add_ln184_30_fu_84680_p2 = (!zext_ln160_reg_117272.read().is_01() || !ap_const_lv7_1F.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln160_reg_117272.read()) + sc_biguint<7>(ap_const_lv7_1F));
}

void poly1305_hw::thread_add_ln184_3_fu_84410_p2() {
    add_ln184_3_fu_84410_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_4));
}

void poly1305_hw::thread_add_ln184_4_fu_84420_p2() {
    add_ln184_4_fu_84420_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_5));
}

void poly1305_hw::thread_add_ln184_5_fu_84430_p2() {
    add_ln184_5_fu_84430_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_6));
}

void poly1305_hw::thread_add_ln184_6_fu_84440_p2() {
    add_ln184_6_fu_84440_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_7));
}

void poly1305_hw::thread_add_ln184_7_fu_84450_p2() {
    add_ln184_7_fu_84450_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_8));
}

void poly1305_hw::thread_add_ln184_8_fu_84460_p2() {
    add_ln184_8_fu_84460_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_9));
}

void poly1305_hw::thread_add_ln184_9_fu_84470_p2() {
    add_ln184_9_fu_84470_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_A));
}

void poly1305_hw::thread_add_ln184_fu_84380_p2() {
    add_ln184_fu_84380_p2 = (!arr1Zeroes_0_lcssa_reg_15678.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_lcssa_reg_15678.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_add_ln212_10_fu_87449_p2() {
    add_ln212_10_fu_87449_p2 = (!arr1_load_24_reg_118375.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_24_reg_118375.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_11_fu_87461_p2() {
    add_ln212_11_fu_87461_p2 = (!arr1_load_26_reg_118390.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_26_reg_118390.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_12_fu_87473_p2() {
    add_ln212_12_fu_87473_p2 = (!arr1_load_28_reg_118405.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_28_reg_118405.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_13_fu_87485_p2() {
    add_ln212_13_fu_87485_p2 = (!arr1_load_30_reg_118420.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_30_reg_118420.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_14_fu_87497_p2() {
    add_ln212_14_fu_87497_p2 = (!arr1_load_32_reg_118435.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_32_reg_118435.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_15_fu_87509_p2() {
    add_ln212_15_fu_87509_p2 = (!arr1_load_34_reg_118450.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_34_reg_118450.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_16_fu_87527_p2() {
    add_ln212_16_fu_87527_p2 = (!arr1_load_36_reg_118465.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_36_reg_118465.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_1_fu_87341_p2() {
    add_ln212_1_fu_87341_p2 = (!arr1_load_3_reg_118240.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_3_reg_118240.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_2_fu_87353_p2() {
    add_ln212_2_fu_87353_p2 = (!arr1_load_7_reg_118255.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_7_reg_118255.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_3_fu_87365_p2() {
    add_ln212_3_fu_87365_p2 = (!arr1_load_9_reg_118270.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_9_reg_118270.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_4_fu_87377_p2() {
    add_ln212_4_fu_87377_p2 = (!arr1_load_12_reg_118285.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_12_reg_118285.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_5_fu_87389_p2() {
    add_ln212_5_fu_87389_p2 = (!arr1_load_14_reg_118300.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_14_reg_118300.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_6_fu_87401_p2() {
    add_ln212_6_fu_87401_p2 = (!arr1_load_16_reg_118315.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_16_reg_118315.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_7_fu_87413_p2() {
    add_ln212_7_fu_87413_p2 = (!arr1_load_18_reg_118330.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_18_reg_118330.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_8_fu_87425_p2() {
    add_ln212_8_fu_87425_p2 = (!arr1_load_20_reg_118345.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_20_reg_118345.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_9_fu_87437_p2() {
    add_ln212_9_fu_87437_p2 = (!arr1_load_22_reg_118360.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_22_reg_118360.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln212_fu_87329_p2() {
    add_ln212_fu_87329_p2 = (!arr1_load_1_reg_118225.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_1_reg_118225.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln214_10_fu_87454_p2() {
    add_ln214_10_fu_87454_p2 = (!p_pn193_10_reg_16128.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_10_reg_16128.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_11_fu_87466_p2() {
    add_ln214_11_fu_87466_p2 = (!p_pn193_11_reg_16137.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_11_reg_16137.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_12_fu_87478_p2() {
    add_ln214_12_fu_87478_p2 = (!p_pn193_12_reg_16146.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_12_reg_16146.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_13_fu_87490_p2() {
    add_ln214_13_fu_87490_p2 = (!p_pn193_13_reg_16155.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_13_reg_16155.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_14_fu_87502_p2() {
    add_ln214_14_fu_87502_p2 = (!p_pn193_14_reg_16164.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_14_reg_16164.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_15_fu_87514_p2() {
    add_ln214_15_fu_87514_p2 = (!p_pn193_15_reg_16173.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_15_reg_16173.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_16_fu_87532_p2() {
    add_ln214_16_fu_87532_p2 = (!p_pn193_16_reg_16182.read().is_01() || !ap_const_lv32_FFFFFFFD.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_16_reg_16182.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFD));
}

void poly1305_hw::thread_add_ln214_1_fu_87346_p2() {
    add_ln214_1_fu_87346_p2 = (!p_pn193_1_reg_16047.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_1_reg_16047.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_2_fu_87358_p2() {
    add_ln214_2_fu_87358_p2 = (!p_pn193_2_reg_16056.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_2_reg_16056.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_3_fu_87370_p2() {
    add_ln214_3_fu_87370_p2 = (!p_pn193_3_reg_16065.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_3_reg_16065.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_4_fu_87382_p2() {
    add_ln214_4_fu_87382_p2 = (!p_pn193_4_reg_16074.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_4_reg_16074.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_5_fu_87394_p2() {
    add_ln214_5_fu_87394_p2 = (!p_pn193_5_reg_16083.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_5_reg_16083.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_6_fu_87406_p2() {
    add_ln214_6_fu_87406_p2 = (!p_pn193_6_reg_16092.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_6_reg_16092.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_7_fu_87418_p2() {
    add_ln214_7_fu_87418_p2 = (!p_pn193_7_reg_16101.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_7_reg_16101.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_8_fu_87430_p2() {
    add_ln214_8_fu_87430_p2 = (!p_pn193_8_reg_16110.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_8_reg_16110.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_9_fu_87442_p2() {
    add_ln214_9_fu_87442_p2 = (!p_pn193_9_reg_16119.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_9_reg_16119.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln214_fu_87334_p2() {
    add_ln214_fu_87334_p2 = (!p_pn193_0_reg_16038.read().is_01() || !ap_const_lv32_FFFFFF05.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn193_0_reg_16038.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF05));
}

void poly1305_hw::thread_add_ln230_10_fu_86422_p2() {
    add_ln230_10_fu_86422_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_56_fu_86349_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_56_fu_86349_p1.read()));
}

void poly1305_hw::thread_add_ln230_11_fu_86556_p2() {
    add_ln230_11_fu_86556_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_60_fu_86505_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_60_fu_86505_p1.read()));
}

void poly1305_hw::thread_add_ln230_12_fu_86681_p2() {
    add_ln230_12_fu_86681_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_64_fu_86604_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_64_fu_86604_p1.read()));
}

void poly1305_hw::thread_add_ln230_13_fu_86807_p2() {
    add_ln230_13_fu_86807_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_68_fu_86735_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_68_fu_86735_p1.read()));
}

void poly1305_hw::thread_add_ln230_14_fu_86888_p2() {
    add_ln230_14_fu_86888_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_72_fu_86855_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_72_fu_86855_p1.read()));
}

void poly1305_hw::thread_add_ln230_15_fu_87088_p2() {
    add_ln230_15_fu_87088_p2 = (!zext_ln243_76_fu_86988_p1.read().is_01() || !sext_ln230_3_fu_87076_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(zext_ln243_76_fu_86988_p1.read()) + sc_bigint<26>(sext_ln230_3_fu_87076_p1.read()));
}

void poly1305_hw::thread_add_ln230_1_fu_85150_p2() {
    add_ln230_1_fu_85150_p2 = (!sext_ln230_1_fu_85030_p1.read().is_01() || !zext_ln243_4_fu_85077_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_fu_85030_p1.read()) + sc_biguint<26>(zext_ln243_4_fu_85077_p1.read()));
}

void poly1305_hw::thread_add_ln230_2_fu_85301_p2() {
    add_ln230_2_fu_85301_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_9_fu_85250_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_9_fu_85250_p1.read()));
}

void poly1305_hw::thread_add_ln230_3_fu_85458_p2() {
    add_ln230_3_fu_85458_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_14_fu_85454_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_14_fu_85454_p1.read()));
}

void poly1305_hw::thread_add_ln230_4_fu_85574_p2() {
    add_ln230_4_fu_85574_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_19_fu_85501_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_19_fu_85501_p1.read()));
}

void poly1305_hw::thread_add_ln230_5_fu_85724_p2() {
    add_ln230_5_fu_85724_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_36_fu_85673_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_36_fu_85673_p1.read()));
}

void poly1305_hw::thread_add_ln230_6_fu_85881_p2() {
    add_ln230_6_fu_85881_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_40_fu_85877_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_40_fu_85877_p1.read()));
}

void poly1305_hw::thread_add_ln230_7_fu_85997_p2() {
    add_ln230_7_fu_85997_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_44_fu_85924_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_44_fu_85924_p1.read()));
}

void poly1305_hw::thread_add_ln230_8_fu_86151_p2() {
    add_ln230_8_fu_86151_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_48_fu_86100_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_48_fu_86100_p1.read()));
}

void poly1305_hw::thread_add_ln230_9_fu_86306_p2() {
    add_ln230_9_fu_86306_p2 = (!sext_ln230_1_reg_117770.read().is_01() || !zext_ln243_52_fu_86302_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln230_1_reg_117770.read()) + sc_biguint<26>(zext_ln243_52_fu_86302_p1.read()));
}

void poly1305_hw::thread_add_ln230_fu_85033_p2() {
    add_ln230_fu_85033_p2 = (!zext_ln243_fu_85026_p1.read().is_01() || !sext_ln230_1_fu_85030_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(zext_ln243_fu_85026_p1.read()) + sc_bigint<26>(sext_ln230_1_fu_85030_p1.read()));
}

void poly1305_hw::thread_add_ln231_10_fu_86427_p2() {
    add_ln231_10_fu_86427_p2 = (!trunc_ln230_11_fu_86418_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_11_fu_86418_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_11_fu_86561_p2() {
    add_ln231_11_fu_86561_p2 = (!trunc_ln230_12_fu_86552_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_12_fu_86552_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_12_fu_86686_p2() {
    add_ln231_12_fu_86686_p2 = (!trunc_ln230_13_fu_86677_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_13_fu_86677_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_13_fu_86812_p2() {
    add_ln231_13_fu_86812_p2 = (!trunc_ln230_14_fu_86803_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_14_fu_86803_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_14_fu_86893_p2() {
    add_ln231_14_fu_86893_p2 = (!trunc_ln230_15_fu_86884_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_15_fu_86884_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_15_fu_87094_p2() {
    add_ln231_15_fu_87094_p2 = (!trunc_ln230_17_fu_87084_p1.read().is_01() || !trunc_ln230_16_fu_87080_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_17_fu_87084_p1.read()) + sc_biguint<8>(trunc_ln230_16_fu_87080_p1.read()));
}

}

