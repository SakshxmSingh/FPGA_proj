#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_accSum81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        accSum81_address0 =  (sc_lv<5>) (zext_ln648_4_fu_4803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        accSum81_address0 =  (sc_lv<5>) (zext_ln623_reg_7847.read());
    } else {
        accSum81_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_accSum81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()))) {
        accSum81_ce0 = ap_const_logic_1;
    } else {
        accSum81_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_accSum81_d0() {
    accSum81_d0 = (!add_ln630_1_fu_4715_p2.read().is_01() || !textBlock_2_q0.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln630_1_fu_4715_p2.read()) + sc_biguint<8>(textBlock_2_q0.read()));
}

void poly1305_hw::thread_accSum81_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        accSum81_we0 = ap_const_logic_1;
    } else {
        accSum81_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_accSum_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        accSum_1_address0 =  (sc_lv<5>) (zext_ln368_4_fu_3609_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        accSum_1_address0 =  (sc_lv<5>) (zext_ln342_reg_7240.read());
    } else {
        accSum_1_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_accSum_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()))) {
        accSum_1_ce0 = ap_const_logic_1;
    } else {
        accSum_1_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_accSum_1_d0() {
    accSum_1_d0 = (!add_ln349_1_fu_3526_p2.read().is_01() || !textBlock_1_q0.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln349_1_fu_3526_p2.read()) + sc_biguint<8>(textBlock_1_q0.read()));
}

void poly1305_hw::thread_accSum_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        accSum_1_we0 = ap_const_logic_1;
    } else {
        accSum_1_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_accSum_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        accSum_address0 =  (sc_lv<5>) (zext_ln85_4_fu_5898_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        accSum_address0 =  (sc_lv<5>) (zext_ln66_reg_8394.read());
    } else {
        accSum_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_accSum_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()))) {
        accSum_ce0 = ap_const_logic_1;
    } else {
        accSum_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_accSum_d0() {
    accSum_d0 = (!add_ln73_1_fu_5815_p2.read().is_01() || !textBlock_q0.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln73_1_fu_5815_p2.read()) + sc_biguint<8>(textBlock_q0.read()));
}

void poly1305_hw::thread_accSum_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        accSum_we0 = ap_const_logic_1;
    } else {
        accSum_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_acc_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln852_fu_6875_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln314_reg_8962.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln66_fu_5743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln839_reg_8350.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln623_fu_4643_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln594_reg_7808.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln342_fu_3454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        acc_address0 =  (sc_lv<5>) (zext_ln46_fu_3281_p1.read());
    } else {
        acc_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_acc_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()))) {
        acc_ce0 = ap_const_logic_1;
    } else {
        acc_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_acc_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        acc_d0 = trunc_ln314_fu_6858_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        acc_d0 = trunc_ln839_fu_5672_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        acc_d0 = trunc_ln594_fu_4569_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        acc_d0 = ap_const_lv8_0;
    } else {
        acc_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_acc_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()))) {
        acc_we0 = ap_const_logic_1;
    } else {
        acc_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_addCarry_1_fu_6547_p4() {
    addCarry_1_fu_6547_p4 = addTemp_4_fu_6519_p2.read().range(15, 8);
}

void poly1305_hw::thread_addCarry_4_fu_4258_p4() {
    addCarry_4_fu_4258_p4 = addTemp_5_fu_4230_p2.read().range(15, 8);
}

void poly1305_hw::thread_addCarry_fu_5369_p4() {
    addCarry_fu_5369_p4 = addTemp_3_fu_5341_p2.read().range(15, 8);
}

void poly1305_hw::thread_addTemp_1_fu_3706_p2() {
    addTemp_1_fu_3706_p2 = (!zext_ln381_4_fu_3702_p1.read().is_01() || !zext_ln381_fu_3685_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln381_4_fu_3702_p1.read()) + sc_biguint<10>(zext_ln381_fu_3685_p1.read()));
}

void poly1305_hw::thread_addTemp_2_fu_4903_p2() {
    addTemp_2_fu_4903_p2 = (!zext_ln661_4_fu_4899_p1.read().is_01() || !zext_ln661_fu_4882_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln661_4_fu_4899_p1.read()) + sc_biguint<10>(zext_ln661_fu_4882_p1.read()));
}

void poly1305_hw::thread_addTemp_3_fu_5341_p2() {
    addTemp_3_fu_5341_p2 = (!temp_2_q1.read().is_01() || !zext_ln756_3_fu_5333_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_2_q1.read()) + sc_biguint<32>(zext_ln756_3_fu_5333_p1.read()));
}

void poly1305_hw::thread_addTemp_4_fu_6519_p2() {
    addTemp_4_fu_6519_p2 = (!temp_q1.read().is_01() || !zext_ln231_3_fu_6511_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_q1.read()) + sc_biguint<32>(zext_ln231_3_fu_6511_p1.read()));
}

void poly1305_hw::thread_addTemp_5_fu_4230_p2() {
    addTemp_5_fu_4230_p2 = (!temp_1_q1.read().is_01() || !zext_ln512_3_fu_4222_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_1_q1.read()) + sc_biguint<32>(zext_ln512_3_fu_4222_p1.read()));
}

void poly1305_hw::thread_addTemp_fu_5995_p2() {
    addTemp_fu_5995_p2 = (!zext_ln98_4_fu_5991_p1.read().is_01() || !zext_ln98_fu_5974_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln98_4_fu_5991_p1.read()) + sc_biguint<10>(zext_ln98_fu_5974_p1.read()));
}

void poly1305_hw::thread_add_ln105_1_fu_6039_p2() {
    add_ln105_1_fu_6039_p2 = (!addCarry_3_reg_2586.read().is_01() || !trunc_ln85_reg_8468.read().is_01())? sc_lv<8>(): (sc_biguint<8>(addCarry_3_reg_2586.read()) + sc_biguint<8>(trunc_ln85_reg_8468.read()));
}

void poly1305_hw::thread_add_ln105_fu_6044_p2() {
    add_ln105_fu_6044_p2 = (!add_ln105_1_fu_6039_p2.read().is_01() || !mul_q1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln105_1_fu_6039_p2.read()) + sc_biguint<8>(mul_q1.read()));
}

void poly1305_hw::thread_add_ln108_fu_6067_p2() {
    add_ln108_fu_6067_p2 = (!mul_q0.read().is_01() || !zext_ln99_reg_8499.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_q0.read()) + sc_biguint<8>(zext_ln99_reg_8499.read()));
}

void poly1305_hw::thread_add_ln201_fu_6678_p2() {
    add_ln201_fu_6678_p2 = (!arr1_load_3_reg_8840.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_3_reg_8840.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln218_1_fu_6419_p2() {
    add_ln218_1_fu_6419_p2 = (!trunc_ln218_fu_6406_p1.read().is_01() || !trunc_ln218_1_reg_8725.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln218_fu_6406_p1.read()) + sc_biguint<8>(trunc_ln218_1_reg_8725.read()));
}

void poly1305_hw::thread_add_ln227_fu_6354_p2() {
    add_ln227_fu_6354_p2 = (!zext_ln215_1_reg_8674.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln215_1_reg_8674.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln231_1_fu_6505_p2() {
    add_ln231_1_fu_6505_p2 = (!zext_ln231_2_fu_6496_p1.read().is_01() || !zext_ln231_fu_6493_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln231_2_fu_6496_p1.read()) + sc_biguint<9>(zext_ln231_fu_6493_p1.read()));
}

void poly1305_hw::thread_add_ln231_2_fu_6500_p2() {
    add_ln231_2_fu_6500_p2 = (!add_ln218_1_reg_8730.read().is_01() || !addCarry_7_reg_2811.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln218_1_reg_8730.read()) + sc_biguint<8>(addCarry_7_reg_2811.read()));
}

void poly1305_hw::thread_add_ln231_3_fu_6525_p2() {
    add_ln231_3_fu_6525_p2 = (!add_ln231_2_fu_6500_p2.read().is_01() || !trunc_ln231_fu_6515_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_2_fu_6500_p2.read()) + sc_biguint<8>(trunc_ln231_fu_6515_p1.read()));
}

void poly1305_hw::thread_add_ln231_fu_6483_p2() {
    add_ln231_fu_6483_p2 = (!j21_0_reg_2834.read().is_01() || !zext_ln215_reg_8669.read().is_01())? sc_lv<5>(): (sc_biguint<5>(j21_0_reg_2834.read()) + sc_biguint<5>(zext_ln215_reg_8669.read()));
}

void poly1305_hw::thread_add_ln241_1_fu_6589_p2() {
    add_ln241_1_fu_6589_p2 = (!temp_q0.read().is_01() || !zext_ln241_fu_6586_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_q0.read()) + sc_biguint<32>(zext_ln241_fu_6586_p1.read()));
}

void poly1305_hw::thread_add_ln241_fu_6302_p2() {
    add_ln241_fu_6302_p2 = (!sub_ln240_fu_6296_p2.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(sub_ln240_fu_6296_p2.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void poly1305_hw::thread_add_ln252_fu_6631_p2() {
    add_ln252_fu_6631_p2 = (!arr1_load_5_reg_8797.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_5_reg_8797.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln262_fu_6714_p2() {
    add_ln262_fu_6714_p2 = (!arr1_q0.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_q0.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln328_fu_3427_p2() {
    add_ln328_fu_3427_p2 = (!shl_ln1_reg_7203.read().is_01() || !zext_ln327_fu_3411_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shl_ln1_reg_7203.read()) + sc_biguint<32>(zext_ln327_fu_3411_p1.read()));
}

void poly1305_hw::thread_add_ln342_fu_3472_p2() {
    add_ln342_fu_3472_p2 = (!zext_ln342_1_fu_3460_p1.read().is_01() || !zext_ln342_2_fu_3464_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln342_1_fu_3460_p1.read()) + sc_biguint<9>(zext_ln342_2_fu_3464_p1.read()));
}

void poly1305_hw::thread_add_ln349_1_fu_3526_p2() {
    add_ln349_1_fu_3526_p2 = (!acc_q0.read().is_01() || !zext_ln341_fu_3522_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(zext_ln341_fu_3522_p1.read()));
}

void poly1305_hw::thread_add_ln377_fu_3587_p2() {
    add_ln377_fu_3587_p2 = (!zext_ln365_reg_7268.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln365_reg_7268.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln381_1_fu_3696_p2() {
    add_ln381_1_fu_3696_p2 = (!zext_ln381_3_fu_3692_p1.read().is_01() || !zext_ln381_2_fu_3688_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln381_3_fu_3692_p1.read()) + sc_biguint<9>(zext_ln381_2_fu_3688_p1.read()));
}

void poly1305_hw::thread_add_ln381_fu_3674_p2() {
    add_ln381_fu_3674_p2 = (!j43_0_reg_1618.read().is_01() || !i41_0_reg_1582.read().is_01())? sc_lv<5>(): (sc_biguint<5>(j43_0_reg_1618.read()) + sc_biguint<5>(i41_0_reg_1582.read()));
}

void poly1305_hw::thread_add_ln388_1_fu_3750_p2() {
    add_ln388_1_fu_3750_p2 = (!addCarry34_3_reg_1594.read().is_01() || !trunc_ln368_reg_7314.read().is_01())? sc_lv<8>(): (sc_biguint<8>(addCarry34_3_reg_1594.read()) + sc_biguint<8>(trunc_ln368_reg_7314.read()));
}

void poly1305_hw::thread_add_ln388_fu_3755_p2() {
    add_ln388_fu_3755_p2 = (!add_ln388_1_fu_3750_p2.read().is_01() || !mul_1_q1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln388_1_fu_3750_p2.read()) + sc_biguint<8>(mul_1_q1.read()));
}

void poly1305_hw::thread_add_ln391_fu_3778_p2() {
    add_ln391_fu_3778_p2 = (!mul_1_q0.read().is_01() || !zext_ln382_reg_7345.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_1_q0.read()) + sc_biguint<8>(zext_ln382_reg_7345.read()));
}

void poly1305_hw::thread_add_ln46_fu_3275_p2() {
    add_ln46_fu_3275_p2 = (!phi_ln46_reg_1490.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(phi_ln46_reg_1490.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_add_ln482_fu_4389_p2() {
    add_ln482_fu_4389_p2 = (!arr1_1_load_3_reg_7686.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_3_reg_7686.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln499_1_fu_4130_p2() {
    add_ln499_1_fu_4130_p2 = (!trunc_ln499_fu_4117_p1.read().is_01() || !trunc_ln499_1_reg_7571.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln499_fu_4117_p1.read()) + sc_biguint<8>(trunc_ln499_1_reg_7571.read()));
}

void poly1305_hw::thread_add_ln508_fu_4065_p2() {
    add_ln508_fu_4065_p2 = (!zext_ln496_1_reg_7520.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln496_1_reg_7520.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln512_1_fu_4216_p2() {
    add_ln512_1_fu_4216_p2 = (!zext_ln512_2_fu_4207_p1.read().is_01() || !zext_ln512_fu_4204_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln512_2_fu_4207_p1.read()) + sc_biguint<9>(zext_ln512_fu_4204_p1.read()));
}

void poly1305_hw::thread_add_ln512_2_fu_4211_p2() {
    add_ln512_2_fu_4211_p2 = (!add_ln499_1_reg_7576.read().is_01() || !addCarry34_7_reg_1854.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln499_1_reg_7576.read()) + sc_biguint<8>(addCarry34_7_reg_1854.read()));
}

void poly1305_hw::thread_add_ln512_3_fu_4236_p2() {
    add_ln512_3_fu_4236_p2 = (!add_ln512_2_fu_4211_p2.read().is_01() || !trunc_ln512_fu_4226_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln512_2_fu_4211_p2.read()) + sc_biguint<8>(trunc_ln512_fu_4226_p1.read()));
}

void poly1305_hw::thread_add_ln512_fu_4194_p2() {
    add_ln512_fu_4194_p2 = (!j67_0_reg_1831.read().is_01() || !zext_ln496_reg_7515.read().is_01())? sc_lv<5>(): (sc_biguint<5>(j67_0_reg_1831.read()) + sc_biguint<5>(zext_ln496_reg_7515.read()));
}

void poly1305_hw::thread_add_ln522_1_fu_4300_p2() {
    add_ln522_1_fu_4300_p2 = (!temp_1_q0.read().is_01() || !zext_ln522_fu_4297_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_1_q0.read()) + sc_biguint<32>(zext_ln522_fu_4297_p1.read()));
}

void poly1305_hw::thread_add_ln522_fu_4013_p2() {
    add_ln522_fu_4013_p2 = (!sub_ln521_fu_4007_p2.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(sub_ln521_fu_4007_p2.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void poly1305_hw::thread_add_ln52_fu_5716_p2() {
    add_ln52_fu_5716_p2 = (!shl_ln_reg_8368.read().is_01() || !zext_ln51_fu_5700_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shl_ln_reg_8368.read()) + sc_biguint<32>(zext_ln51_fu_5700_p1.read()));
}

void poly1305_hw::thread_add_ln533_fu_4342_p2() {
    add_ln533_fu_4342_p2 = (!arr1_1_load_5_reg_7643.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_5_reg_7643.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln543_fu_4425_p2() {
    add_ln543_fu_4425_p2 = (!arr1_1_q0.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_q0.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln623_fu_4661_p2() {
    add_ln623_fu_4661_p2 = (!zext_ln623_1_fu_4649_p1.read().is_01() || !zext_ln623_2_fu_4653_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln623_1_fu_4649_p1.read()) + sc_biguint<9>(zext_ln623_2_fu_4653_p1.read()));
}

void poly1305_hw::thread_add_ln630_1_fu_4715_p2() {
    add_ln630_1_fu_4715_p2 = (!acc_q0.read().is_01() || !zext_ln622_fu_4711_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(zext_ln622_fu_4711_p1.read()));
}

void poly1305_hw::thread_add_ln657_fu_4781_p2() {
    add_ln657_fu_4781_p2 = (!zext_ln645_reg_7888.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln645_reg_7888.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln661_1_fu_4893_p2() {
    add_ln661_1_fu_4893_p2 = (!zext_ln661_3_fu_4889_p1.read().is_01() || !zext_ln661_2_fu_4885_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln661_3_fu_4889_p1.read()) + sc_biguint<9>(zext_ln661_2_fu_4885_p1.read()));
}

void poly1305_hw::thread_add_ln661_fu_4868_p2() {
    add_ln661_fu_4868_p2 = (!j89_0_reg_2125.read().is_01() || !i87_0_reg_2113.read().is_01())? sc_lv<5>(): (sc_biguint<5>(j89_0_reg_2125.read()) + sc_biguint<5>(i87_0_reg_2113.read()));
}

void poly1305_hw::thread_add_ln668_1_fu_4947_p2() {
    add_ln668_1_fu_4947_p2 = (!addCarry80_2_fu_294.read().is_01() || !trunc_ln648_reg_7934.read().is_01())? sc_lv<8>(): (sc_biguint<8>(addCarry80_2_fu_294.read()) + sc_biguint<8>(trunc_ln648_reg_7934.read()));
}

void poly1305_hw::thread_add_ln668_fu_4952_p2() {
    add_ln668_fu_4952_p2 = (!add_ln668_1_fu_4947_p2.read().is_01() || !mul_2_q1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln668_1_fu_4947_p2.read()) + sc_biguint<8>(mul_2_q1.read()));
}

void poly1305_hw::thread_add_ln66_fu_5761_p2() {
    add_ln66_fu_5761_p2 = (!zext_ln66_1_fu_5749_p1.read().is_01() || !zext_ln66_2_fu_5753_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln66_1_fu_5749_p1.read()) + sc_biguint<9>(zext_ln66_2_fu_5753_p1.read()));
}

void poly1305_hw::thread_add_ln671_fu_4975_p2() {
    add_ln671_fu_4975_p2 = (!mul_2_q0.read().is_01() || !zext_ln662_reg_7965.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_2_q0.read()) + sc_biguint<8>(zext_ln662_reg_7965.read()));
}

void poly1305_hw::thread_add_ln726_fu_5496_p2() {
    add_ln726_fu_5496_p2 = (!arr1_2_load_1_reg_8232.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_2_load_1_reg_8232.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln73_1_fu_5815_p2() {
    add_ln73_1_fu_5815_p2 = (!acc_q0.read().is_01() || !zext_ln65_fu_5811_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(zext_ln65_fu_5811_p1.read()));
}

void poly1305_hw::thread_add_ln743_1_fu_5241_p2() {
    add_ln743_1_fu_5241_p2 = (!trunc_ln743_fu_5228_p1.read().is_01() || !trunc_ln743_1_reg_8121.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln743_fu_5228_p1.read()) + sc_biguint<8>(trunc_ln743_1_reg_8121.read()));
}

void poly1305_hw::thread_add_ln752_fu_5176_p2() {
    add_ln752_fu_5176_p2 = (!zext_ln740_1_reg_8070.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln740_1_reg_8070.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln756_1_fu_5327_p2() {
    add_ln756_1_fu_5327_p2 = (!zext_ln756_2_fu_5318_p1.read().is_01() || !zext_ln756_fu_5315_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln756_2_fu_5318_p1.read()) + sc_biguint<9>(zext_ln756_fu_5315_p1.read()));
}

void poly1305_hw::thread_add_ln756_2_fu_5322_p2() {
    add_ln756_2_fu_5322_p2 = (!add_ln743_1_reg_8126.read().is_01() || !addCarry80_7_reg_2299.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln743_1_reg_8126.read()) + sc_biguint<8>(addCarry80_7_reg_2299.read()));
}

void poly1305_hw::thread_add_ln756_3_fu_5347_p2() {
    add_ln756_3_fu_5347_p2 = (!add_ln756_2_fu_5322_p2.read().is_01() || !trunc_ln756_fu_5337_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln756_2_fu_5322_p2.read()) + sc_biguint<8>(trunc_ln756_fu_5337_p1.read()));
}

void poly1305_hw::thread_add_ln756_fu_5305_p2() {
    add_ln756_fu_5305_p2 = (!j110_0_reg_2276.read().is_01() || !zext_ln740_reg_8065.read().is_01())? sc_lv<5>(): (sc_biguint<5>(j110_0_reg_2276.read()) + sc_biguint<5>(zext_ln740_reg_8065.read()));
}

void poly1305_hw::thread_add_ln766_1_fu_5411_p2() {
    add_ln766_1_fu_5411_p2 = (!temp_2_q0.read().is_01() || !zext_ln766_fu_5408_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_2_q0.read()) + sc_biguint<32>(zext_ln766_fu_5408_p1.read()));
}

void poly1305_hw::thread_add_ln766_fu_5128_p2() {
    add_ln766_fu_5128_p2 = (!sub_ln765_fu_5122_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(sub_ln765_fu_5122_p2.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln777_fu_5449_p2() {
    add_ln777_fu_5449_p2 = (!arr1_2_load_3_reg_8189.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_2_load_3_reg_8189.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln787_fu_5532_p2() {
    add_ln787_fu_5532_p2 = (!arr1_2_q0.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_2_q0.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln852_fu_6893_p2() {
    add_ln852_fu_6893_p2 = (!zext_ln852_1_fu_6881_p1.read().is_01() || !zext_ln852_2_fu_6885_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln852_1_fu_6881_p1.read()) + sc_biguint<9>(zext_ln852_2_fu_6885_p1.read()));
}

void poly1305_hw::thread_add_ln859_1_fu_6947_p2() {
    add_ln859_1_fu_6947_p2 = (!acc_q0.read().is_01() || !zext_ln851_fu_6943_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(zext_ln851_fu_6943_p1.read()));
}

void poly1305_hw::thread_add_ln94_fu_5876_p2() {
    add_ln94_fu_5876_p2 = (!zext_ln82_reg_8422.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln82_reg_8422.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln98_1_fu_5985_p2() {
    add_ln98_1_fu_5985_p2 = (!zext_ln98_3_fu_5981_p1.read().is_01() || !zext_ln98_2_fu_5977_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln98_3_fu_5981_p1.read()) + sc_biguint<9>(zext_ln98_2_fu_5977_p1.read()));
}

void poly1305_hw::thread_add_ln98_fu_5963_p2() {
    add_ln98_fu_5963_p2 = (!j7_0_reg_2598.read().is_01() || !i6_0_reg_2550.read().is_01())? sc_lv<5>(): (sc_biguint<5>(j7_0_reg_2598.read()) + sc_biguint<5>(i6_0_reg_2550.read()));
}

void poly1305_hw::thread_add_ln_fu_4592_p3() {
    add_ln_fu_4592_p3 = esl_concat<28,4>(trunc_ln604_1_fu_4589_p1.read(), i77_0_reg_2058.read());
}

void poly1305_hw::thread_and_ln1_fu_3259_p3() {
    and_ln1_fu_3259_p3 = esl_concat<6,2>(tmp_2_reg_7129.read(), ap_const_lv2_0);
}

void poly1305_hw::thread_and_ln2_fu_3267_p3() {
    and_ln2_fu_3267_p3 = esl_concat<6,2>(tmp_3_reg_7139.read(), ap_const_lv2_0);
}

void poly1305_hw::thread_and_ln_fu_3251_p3() {
    and_ln_fu_3251_p3 = esl_concat<6,2>(tmp_reg_7124.read(), ap_const_lv2_0);
}

void poly1305_hw::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void poly1305_hw::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void poly1305_hw::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[99];
}

void poly1305_hw::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[100];
}

void poly1305_hw::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[101];
}

void poly1305_hw::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[102];
}

void poly1305_hw::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[103];
}

void poly1305_hw::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[104];
}

void poly1305_hw::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[105];
}

void poly1305_hw::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[106];
}

void poly1305_hw::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[107];
}

void poly1305_hw::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[108];
}

void poly1305_hw::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void poly1305_hw::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[109];
}

void poly1305_hw::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[110];
}

void poly1305_hw::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[111];
}

void poly1305_hw::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[112];
}

void poly1305_hw::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[113];
}

void poly1305_hw::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[114];
}

void poly1305_hw::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[115];
}

void poly1305_hw::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[116];
}

void poly1305_hw::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[117];
}

void poly1305_hw::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[118];
}

void poly1305_hw::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void poly1305_hw::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[119];
}

void poly1305_hw::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[120];
}

void poly1305_hw::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[121];
}

void poly1305_hw::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[122];
}

void poly1305_hw::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[123];
}

void poly1305_hw::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[124];
}

void poly1305_hw::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[125];
}

void poly1305_hw::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[126];
}

void poly1305_hw::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[127];
}

void poly1305_hw::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[128];
}

void poly1305_hw::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void poly1305_hw::thread_ap_CS_fsm_state130() {
    ap_CS_fsm_state130 = ap_CS_fsm.read()[129];
}

void poly1305_hw::thread_ap_CS_fsm_state131() {
    ap_CS_fsm_state131 = ap_CS_fsm.read()[130];
}

void poly1305_hw::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[131];
}

void poly1305_hw::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[132];
}

void poly1305_hw::thread_ap_CS_fsm_state134() {
    ap_CS_fsm_state134 = ap_CS_fsm.read()[133];
}

void poly1305_hw::thread_ap_CS_fsm_state135() {
    ap_CS_fsm_state135 = ap_CS_fsm.read()[134];
}

void poly1305_hw::thread_ap_CS_fsm_state136() {
    ap_CS_fsm_state136 = ap_CS_fsm.read()[135];
}

void poly1305_hw::thread_ap_CS_fsm_state137() {
    ap_CS_fsm_state137 = ap_CS_fsm.read()[136];
}

void poly1305_hw::thread_ap_CS_fsm_state138() {
    ap_CS_fsm_state138 = ap_CS_fsm.read()[137];
}

void poly1305_hw::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[138];
}

void poly1305_hw::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void poly1305_hw::thread_ap_CS_fsm_state140() {
    ap_CS_fsm_state140 = ap_CS_fsm.read()[139];
}

void poly1305_hw::thread_ap_CS_fsm_state141() {
    ap_CS_fsm_state141 = ap_CS_fsm.read()[140];
}

void poly1305_hw::thread_ap_CS_fsm_state142() {
    ap_CS_fsm_state142 = ap_CS_fsm.read()[141];
}

void poly1305_hw::thread_ap_CS_fsm_state143() {
    ap_CS_fsm_state143 = ap_CS_fsm.read()[142];
}

void poly1305_hw::thread_ap_CS_fsm_state144() {
    ap_CS_fsm_state144 = ap_CS_fsm.read()[143];
}

void poly1305_hw::thread_ap_CS_fsm_state145() {
    ap_CS_fsm_state145 = ap_CS_fsm.read()[144];
}

void poly1305_hw::thread_ap_CS_fsm_state146() {
    ap_CS_fsm_state146 = ap_CS_fsm.read()[145];
}

void poly1305_hw::thread_ap_CS_fsm_state147() {
    ap_CS_fsm_state147 = ap_CS_fsm.read()[146];
}

void poly1305_hw::thread_ap_CS_fsm_state148() {
    ap_CS_fsm_state148 = ap_CS_fsm.read()[147];
}

void poly1305_hw::thread_ap_CS_fsm_state149() {
    ap_CS_fsm_state149 = ap_CS_fsm.read()[148];
}

void poly1305_hw::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void poly1305_hw::thread_ap_CS_fsm_state150() {
    ap_CS_fsm_state150 = ap_CS_fsm.read()[149];
}

void poly1305_hw::thread_ap_CS_fsm_state151() {
    ap_CS_fsm_state151 = ap_CS_fsm.read()[150];
}

void poly1305_hw::thread_ap_CS_fsm_state152() {
    ap_CS_fsm_state152 = ap_CS_fsm.read()[151];
}

void poly1305_hw::thread_ap_CS_fsm_state153() {
    ap_CS_fsm_state153 = ap_CS_fsm.read()[152];
}

void poly1305_hw::thread_ap_CS_fsm_state154() {
    ap_CS_fsm_state154 = ap_CS_fsm.read()[153];
}

void poly1305_hw::thread_ap_CS_fsm_state155() {
    ap_CS_fsm_state155 = ap_CS_fsm.read()[154];
}

void poly1305_hw::thread_ap_CS_fsm_state156() {
    ap_CS_fsm_state156 = ap_CS_fsm.read()[155];
}

void poly1305_hw::thread_ap_CS_fsm_state157() {
    ap_CS_fsm_state157 = ap_CS_fsm.read()[156];
}

void poly1305_hw::thread_ap_CS_fsm_state158() {
    ap_CS_fsm_state158 = ap_CS_fsm.read()[157];
}

void poly1305_hw::thread_ap_CS_fsm_state159() {
    ap_CS_fsm_state159 = ap_CS_fsm.read()[158];
}

void poly1305_hw::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void poly1305_hw::thread_ap_CS_fsm_state160() {
    ap_CS_fsm_state160 = ap_CS_fsm.read()[159];
}

void poly1305_hw::thread_ap_CS_fsm_state161() {
    ap_CS_fsm_state161 = ap_CS_fsm.read()[160];
}

void poly1305_hw::thread_ap_CS_fsm_state162() {
    ap_CS_fsm_state162 = ap_CS_fsm.read()[161];
}

void poly1305_hw::thread_ap_CS_fsm_state163() {
    ap_CS_fsm_state163 = ap_CS_fsm.read()[162];
}

void poly1305_hw::thread_ap_CS_fsm_state164() {
    ap_CS_fsm_state164 = ap_CS_fsm.read()[163];
}

void poly1305_hw::thread_ap_CS_fsm_state165() {
    ap_CS_fsm_state165 = ap_CS_fsm.read()[164];
}

void poly1305_hw::thread_ap_CS_fsm_state166() {
    ap_CS_fsm_state166 = ap_CS_fsm.read()[165];
}

void poly1305_hw::thread_ap_CS_fsm_state167() {
    ap_CS_fsm_state167 = ap_CS_fsm.read()[166];
}

void poly1305_hw::thread_ap_CS_fsm_state168() {
    ap_CS_fsm_state168 = ap_CS_fsm.read()[167];
}

void poly1305_hw::thread_ap_CS_fsm_state169() {
    ap_CS_fsm_state169 = ap_CS_fsm.read()[168];
}

void poly1305_hw::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void poly1305_hw::thread_ap_CS_fsm_state170() {
    ap_CS_fsm_state170 = ap_CS_fsm.read()[169];
}

void poly1305_hw::thread_ap_CS_fsm_state171() {
    ap_CS_fsm_state171 = ap_CS_fsm.read()[170];
}

void poly1305_hw::thread_ap_CS_fsm_state172() {
    ap_CS_fsm_state172 = ap_CS_fsm.read()[171];
}

void poly1305_hw::thread_ap_CS_fsm_state173() {
    ap_CS_fsm_state173 = ap_CS_fsm.read()[172];
}

void poly1305_hw::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void poly1305_hw::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void poly1305_hw::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void poly1305_hw::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void poly1305_hw::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void poly1305_hw::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void poly1305_hw::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void poly1305_hw::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void poly1305_hw::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void poly1305_hw::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void poly1305_hw::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void poly1305_hw::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void poly1305_hw::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void poly1305_hw::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void poly1305_hw::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void poly1305_hw::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void poly1305_hw::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void poly1305_hw::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void poly1305_hw::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void poly1305_hw::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void poly1305_hw::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void poly1305_hw::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void poly1305_hw::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void poly1305_hw::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void poly1305_hw::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void poly1305_hw::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void poly1305_hw::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void poly1305_hw::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
}

void poly1305_hw::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[42];
}

void poly1305_hw::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void poly1305_hw::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void poly1305_hw::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void poly1305_hw::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void poly1305_hw::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void poly1305_hw::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void poly1305_hw::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void poly1305_hw::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void poly1305_hw::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void poly1305_hw::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void poly1305_hw::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void poly1305_hw::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[53];
}

void poly1305_hw::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void poly1305_hw::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void poly1305_hw::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[56];
}

void poly1305_hw::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[57];
}

void poly1305_hw::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[58];
}

void poly1305_hw::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void poly1305_hw::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[59];
}

void poly1305_hw::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[60];
}

void poly1305_hw::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[61];
}

void poly1305_hw::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[62];
}

void poly1305_hw::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[63];
}

void poly1305_hw::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[64];
}

void poly1305_hw::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[65];
}

void poly1305_hw::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[66];
}

void poly1305_hw::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[67];
}

void poly1305_hw::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[68];
}

void poly1305_hw::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void poly1305_hw::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[69];
}

void poly1305_hw::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[70];
}

void poly1305_hw::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[71];
}

void poly1305_hw::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[72];
}

void poly1305_hw::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[73];
}

void poly1305_hw::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[74];
}

void poly1305_hw::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[75];
}

void poly1305_hw::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[76];
}

void poly1305_hw::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[77];
}

void poly1305_hw::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[78];
}

void poly1305_hw::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void poly1305_hw::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[79];
}

void poly1305_hw::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[80];
}

void poly1305_hw::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[81];
}

void poly1305_hw::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[82];
}

void poly1305_hw::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[83];
}

void poly1305_hw::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[84];
}

void poly1305_hw::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[85];
}

void poly1305_hw::thread_ap_CS_fsm_state87() {
    ap_CS_fsm_state87 = ap_CS_fsm.read()[86];
}

void poly1305_hw::thread_ap_CS_fsm_state88() {
    ap_CS_fsm_state88 = ap_CS_fsm.read()[87];
}

void poly1305_hw::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[88];
}

void poly1305_hw::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void poly1305_hw::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[89];
}

void poly1305_hw::thread_ap_CS_fsm_state91() {
    ap_CS_fsm_state91 = ap_CS_fsm.read()[90];
}

void poly1305_hw::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[91];
}

void poly1305_hw::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[92];
}

void poly1305_hw::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[93];
}

void poly1305_hw::thread_ap_CS_fsm_state95() {
    ap_CS_fsm_state95 = ap_CS_fsm.read()[94];
}

void poly1305_hw::thread_ap_CS_fsm_state96() {
    ap_CS_fsm_state96 = ap_CS_fsm.read()[95];
}

void poly1305_hw::thread_ap_CS_fsm_state97() {
    ap_CS_fsm_state97 = ap_CS_fsm.read()[96];
}

void poly1305_hw::thread_ap_CS_fsm_state98() {
    ap_CS_fsm_state98 = ap_CS_fsm.read()[97];
}

void poly1305_hw::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[98];
}

void poly1305_hw::thread_ap_block_state2() {
    ap_block_state2 = (esl_seteq<1,1,1>(flag_0_reg_1446.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op211.read()));
}

void poly1305_hw::thread_ap_block_state3() {
    ap_block_state3 = (esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op224.read()));
}

void poly1305_hw::thread_ap_block_state4() {
    ap_block_state4 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op236.read()));
}

void poly1305_hw::thread_ap_condition_5120() {
    ap_condition_5120 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln433_reg_7408.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln436_reg_7412.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln440_reg_7421.read()));
}

void poly1305_hw::thread_ap_condition_5540() {
    ap_condition_5540 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln149_reg_8562.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln152_reg_8566.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln156_reg_8575.read()));
}

void poly1305_hw::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln868_fu_6960_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void poly1305_hw::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void poly1305_hw::thread_ap_phi_mux_boolean52_11_ph_phi_fu_2026_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln469_reg_7463.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_22_reg_7467.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln586_fu_4546_p2.read()))) {
        ap_phi_mux_boolean52_11_ph_phi_fu_2026_p4 = ap_phi_mux_boolean52_9_phi_fu_2011_p6.read();
    } else {
        ap_phi_mux_boolean52_11_ph_phi_fu_2026_p4 = boolean52_11_ph_reg_2023.read();
    }
}

void poly1305_hw::thread_ap_phi_mux_boolean52_4_ph_phi_fu_1714_p6() {
    if (esl_seteq<1,1,1>(ap_condition_5120.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln441_fu_3895_p2.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln445_fu_3901_p2.read()))) {
            ap_phi_mux_boolean52_4_ph_phi_fu_1714_p6 = ap_const_lv32_FFFFFFFF;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln441_fu_3895_p2.read())) {
            ap_phi_mux_boolean52_4_ph_phi_fu_1714_p6 = ap_const_lv32_1;
        } else {
            ap_phi_mux_boolean52_4_ph_phi_fu_1714_p6 = boolean52_4_ph_reg_1711.read();
        }
    } else {
        ap_phi_mux_boolean52_4_ph_phi_fu_1714_p6 = boolean52_4_ph_reg_1711.read();
    }
}

void poly1305_hw::thread_ap_phi_mux_boolean52_9_phi_fu_2011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln469_reg_7463.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_22_reg_7467.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln565_reg_7765.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln568_reg_7769.read()))) {
        ap_phi_mux_boolean52_9_phi_fu_2011_p6 = boolean52_9_ph_reg_1989.read();
    } else {
        ap_phi_mux_boolean52_9_phi_fu_2011_p6 = boolean52_9_reg_2005.read();
    }
}

void poly1305_hw::thread_ap_phi_mux_boolean_11_ph_phi_fu_3006_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln185_reg_8617.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_21_reg_8621.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln306_fu_6835_p2.read()))) {
        ap_phi_mux_boolean_11_ph_phi_fu_3006_p4 = ap_phi_mux_boolean_9_phi_fu_2991_p6.read();
    } else {
        ap_phi_mux_boolean_11_ph_phi_fu_3006_p4 = boolean_11_ph_reg_3003.read();
    }
}

void poly1305_hw::thread_ap_phi_mux_boolean_4_ph_phi_fu_2694_p6() {
    if (esl_seteq<1,1,1>(ap_condition_5540.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln157_fu_6184_p2.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln161_fu_6190_p2.read()))) {
            ap_phi_mux_boolean_4_ph_phi_fu_2694_p6 = ap_const_lv32_FFFFFFFF;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln157_fu_6184_p2.read())) {
            ap_phi_mux_boolean_4_ph_phi_fu_2694_p6 = ap_const_lv32_1;
        } else {
            ap_phi_mux_boolean_4_ph_phi_fu_2694_p6 = boolean_4_ph_reg_2691.read();
        }
    } else {
        ap_phi_mux_boolean_4_ph_phi_fu_2694_p6 = boolean_4_ph_reg_2691.read();
    }
}

void poly1305_hw::thread_ap_phi_mux_boolean_9_phi_fu_2991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln185_reg_8617.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_21_reg_8621.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln284_reg_8919.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln287_reg_8923.read()))) {
        ap_phi_mux_boolean_9_phi_fu_2991_p6 = boolean_9_ph_reg_2969.read();
    } else {
        ap_phi_mux_boolean_9_phi_fu_2991_p6 = boolean_9_reg_2985.read();
    }
}

void poly1305_hw::thread_ap_phi_mux_flag_0_phi_fu_1450_p4() {
    ap_phi_mux_flag_0_phi_fu_1450_p4 = flag_0_reg_1446.read();
}

void poly1305_hw::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln868_fu_6960_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1Zeroes_10_fu_4455_p2() {
    arr1Zeroes_10_fu_4455_p2 = (!arr1Zeroes53_3_reg_1955.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_3_reg_1955.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_arr1Zeroes_4_fu_3822_p2() {
    arr1Zeroes_4_fu_3822_p2 = (!arr1Zeroes53_0_reg_1677.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_reg_1677.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_arr1Zeroes_5_fu_5024_p2() {
    arr1Zeroes_5_fu_5024_p2 = (!arr1Zeroes99_0_reg_2196.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes99_0_reg_2196.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_arr1Zeroes_6_fu_6213_p2() {
    arr1Zeroes_6_fu_6213_p2 = (!arr1Zeroes_1_reg_2722.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(arr1Zeroes_1_reg_2722.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void poly1305_hw::thread_arr1Zeroes_7_fu_3924_p2() {
    arr1Zeroes_7_fu_3924_p2 = (!arr1Zeroes53_1_reg_1754.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(arr1Zeroes53_1_reg_1754.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void poly1305_hw::thread_arr1Zeroes_8_fu_5562_p2() {
    arr1Zeroes_8_fu_5562_p2 = (!arr1Zeroes99_2_reg_2388.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes99_2_reg_2388.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_arr1Zeroes_9_fu_6744_p2() {
    arr1Zeroes_9_fu_6744_p2 = (!arr1Zeroes_3_reg_2923.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_3_reg_2923.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_arr1Zeroes_fu_6111_p2() {
    arr1Zeroes_fu_6111_p2 = (!arr1Zeroes_0_reg_2645.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes_0_reg_2645.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_arr1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        arr1_1_address0 = arr1_1_addr_8_reg_7719.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        arr1_1_address0 =  (sc_lv<6>) (zext_ln542_fu_4412_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        arr1_1_address0 = arr1_1_addr_4_reg_7676.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        arr1_1_address0 = arr1_1_addr_5_reg_7700.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        arr1_1_address0 =  (sc_lv<6>) (zext_ln483_fu_4385_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        arr1_1_address0 =  (sc_lv<6>) (zext_ln478_fu_4365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        arr1_1_address0 = arr1_1_addr_6_reg_7633.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        arr1_1_address0 = arr1_1_addr_7_reg_7657.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        arr1_1_address0 =  (sc_lv<6>) (zext_ln534_fu_4338_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        arr1_1_address0 =  (sc_lv<6>) (zext_ln529_fu_4326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        arr1_1_address0 =  (sc_lv<6>) (zext_ln456_fu_3919_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        arr1_1_address0 =  (sc_lv<6>) (zext_ln441_fu_3881_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        arr1_1_address0 =  (sc_lv<6>) (zext_ln420_fu_3828_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        arr1_1_address0 =  (sc_lv<6>) (zext_ln407_1_reg_7366.read());
    } else {
        arr1_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_arr1_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        arr1_1_address1 =  (sc_lv<6>) (zext_ln594_fu_4564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        arr1_1_address1 =  (sc_lv<6>) (zext_ln573_fu_4520_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        arr1_1_address1 =  (sc_lv<6>) (zext_ln552_fu_4461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        arr1_1_address1 = arr1_1_addr_9_reg_7728.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        arr1_1_address1 =  (sc_lv<6>) (zext_ln544_fu_4432_p1.read());
    } else {
        arr1_1_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_arr1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        arr1_1_ce0 = ap_const_logic_1;
    } else {
        arr1_1_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()))) {
        arr1_1_ce1 = ap_const_logic_1;
    } else {
        arr1_1_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        arr1_1_d0 = add_ln543_fu_4425_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        arr1_1_d0 = sub_ln484_fu_4394_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        arr1_1_d0 = sub_ln535_fu_4347_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()))) {
        arr1_1_d0 = grp_fu_3094_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        arr1_1_d0 = zext_ln407_fu_3805_p1.read();
    } else {
        arr1_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_arr1_1_d1() {
    arr1_1_d1 = (!arr1_1_q1.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_q1.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_arr1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_32_fu_4417_p3.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        arr1_1_we0 = ap_const_logic_1;
    } else {
        arr1_1_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_32_reg_7724.read()))) {
        arr1_1_we1 = ap_const_logic_1;
    } else {
        arr1_1_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        arr1_2_address0 = arr1_2_addr_6_reg_8265.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        arr1_2_address0 =  (sc_lv<6>) (zext_ln786_fu_5519_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        arr1_2_address0 = arr1_2_addr_2_reg_8222.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read())) {
        arr1_2_address0 = arr1_2_addr_3_reg_8246.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        arr1_2_address0 =  (sc_lv<6>) (zext_ln727_fu_5492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read())) {
        arr1_2_address0 =  (sc_lv<6>) (zext_ln722_fu_5472_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        arr1_2_address0 = arr1_2_addr_4_reg_8179.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        arr1_2_address0 = arr1_2_addr_5_reg_8203.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        arr1_2_address0 =  (sc_lv<6>) (zext_ln778_fu_5445_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        arr1_2_address0 =  (sc_lv<6>) (zext_ln773_fu_5433_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        arr1_2_address0 =  (sc_lv<6>) (zext_ln698_fu_5030_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        arr1_2_address0 =  (sc_lv<6>) (zext_ln685_1_reg_7981.read());
    } else {
        arr1_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_arr1_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        arr1_2_address1 =  (sc_lv<6>) (zext_ln839_fu_5667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        arr1_2_address1 =  (sc_lv<6>) (zext_ln817_fu_5623_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        arr1_2_address1 =  (sc_lv<6>) (zext_ln796_fu_5568_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        arr1_2_address1 = arr1_2_addr_7_reg_8274.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        arr1_2_address1 =  (sc_lv<6>) (zext_ln788_fu_5539_p1.read());
    } else {
        arr1_2_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_arr1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()))) {
        arr1_2_ce0 = ap_const_logic_1;
    } else {
        arr1_2_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        arr1_2_ce1 = ap_const_logic_1;
    } else {
        arr1_2_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        arr1_2_d0 = add_ln787_fu_5532_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        arr1_2_d0 = sub_ln728_fu_5501_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        arr1_2_d0 = sub_ln779_fu_5454_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        arr1_2_d0 = grp_fu_3101_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        arr1_2_d0 = zext_ln685_fu_5007_p1.read();
    } else {
        arr1_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_arr1_2_d1() {
    arr1_2_d1 = (!arr1_2_q1.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_2_q1.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_arr1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_25_fu_5524_p3.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()))) {
        arr1_2_we0 = ap_const_logic_1;
    } else {
        arr1_2_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_25_reg_8270.read()))) {
        arr1_2_we1 = ap_const_logic_1;
    } else {
        arr1_2_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        arr1_address0 = arr1_addr_8_reg_8873.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read())) {
        arr1_address0 =  (sc_lv<6>) (zext_ln261_fu_6701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        arr1_address0 = arr1_addr_4_reg_8830.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        arr1_address0 = arr1_addr_5_reg_8854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        arr1_address0 =  (sc_lv<6>) (zext_ln202_fu_6674_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        arr1_address0 =  (sc_lv<6>) (zext_ln197_fu_6654_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read())) {
        arr1_address0 = arr1_addr_6_reg_8787.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        arr1_address0 = arr1_addr_7_reg_8811.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        arr1_address0 =  (sc_lv<6>) (zext_ln253_fu_6627_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        arr1_address0 =  (sc_lv<6>) (zext_ln248_fu_6615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        arr1_address0 =  (sc_lv<6>) (zext_ln172_fu_6208_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        arr1_address0 =  (sc_lv<6>) (zext_ln157_fu_6170_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        arr1_address0 =  (sc_lv<6>) (zext_ln136_fu_6117_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read())) {
        arr1_address0 =  (sc_lv<6>) (zext_ln123_1_reg_8520.read());
    } else {
        arr1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_arr1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read())) {
        arr1_address1 =  (sc_lv<6>) (zext_ln314_fu_6853_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        arr1_address1 =  (sc_lv<6>) (zext_ln292_fu_6809_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read())) {
        arr1_address1 =  (sc_lv<6>) (zext_ln271_fu_6750_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        arr1_address1 = arr1_addr_9_reg_8882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        arr1_address1 =  (sc_lv<6>) (zext_ln263_fu_6721_p1.read());
    } else {
        arr1_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_arr1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()))) {
        arr1_ce0 = ap_const_logic_1;
    } else {
        arr1_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()))) {
        arr1_ce1 = ap_const_logic_1;
    } else {
        arr1_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        arr1_d0 = add_ln262_fu_6714_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        arr1_d0 = sub_ln203_fu_6683_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read())) {
        arr1_d0 = sub_ln254_fu_6636_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()))) {
        arr1_d0 = grp_fu_3114_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read())) {
        arr1_d0 = zext_ln123_fu_6094_p1.read();
    } else {
        arr1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_arr1_d1() {
    arr1_d1 = (!arr1_q1.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_q1.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_arr1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_31_fu_6706_p3.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()))) {
        arr1_we0 = ap_const_logic_1;
    } else {
        arr1_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_31_reg_8878.read()))) {
        arr1_we1 = ap_const_logic_1;
    } else {
        arr1_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        arr2_1_address0 =  (sc_lv<5>) (zext_ln573_fu_4520_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        arr2_1_address0 =  (sc_lv<5>) (zext_ln478_fu_4365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        arr2_1_address0 =  (sc_lv<5>) (zext_ln499_1_fu_4091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        arr2_1_address0 =  (sc_lv<5>) (zext_ln441_fu_3881_p1.read());
    } else {
        arr2_1_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_arr2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()))) {
        arr2_1_ce0 = ap_const_logic_1;
    } else {
        arr2_1_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        arr2_2_address0 =  (sc_lv<5>) (zext_ln817_fu_5623_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read())) {
        arr2_2_address0 =  (sc_lv<5>) (zext_ln722_fu_5472_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        arr2_2_address0 =  (sc_lv<5>) (zext_ln743_1_fu_5202_p1.read());
    } else {
        arr2_2_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_arr2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()))) {
        arr2_2_ce0 = ap_const_logic_1;
    } else {
        arr2_2_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_arr2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        arr2_address0 =  (sc_lv<5>) (zext_ln292_fu_6809_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        arr2_address0 =  (sc_lv<5>) (zext_ln197_fu_6654_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        arr2_address0 =  (sc_lv<5>) (zext_ln218_1_fu_6380_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        arr2_address0 =  (sc_lv<5>) (zext_ln157_fu_6170_p1.read());
    } else {
        arr2_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_arr2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        arr2_ce0 = ap_const_logic_1;
    } else {
        arr2_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_fullArr_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        fullArr_1_address0 =  (sc_lv<6>) (zext_ln499_fu_4051_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        fullArr_1_address0 =  (sc_lv<6>) (zext_ln492_fu_4002_p1.read());
    } else {
        fullArr_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_fullArr_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()))) {
        fullArr_1_ce0 = ap_const_logic_1;
    } else {
        fullArr_1_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_fullArr_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln491_fu_3991_p2.read()))) {
        fullArr_1_we0 = ap_const_logic_1;
    } else {
        fullArr_1_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_fullArr_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        fullArr_2_address0 =  (sc_lv<6>) (zext_ln743_fu_5162_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        fullArr_2_address0 =  (sc_lv<6>) (zext_ln736_fu_5117_p1.read());
    } else {
        fullArr_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_fullArr_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()))) {
        fullArr_2_ce0 = ap_const_logic_1;
    } else {
        fullArr_2_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_fullArr_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln735_fu_5106_p2.read()))) {
        fullArr_2_we0 = ap_const_logic_1;
    } else {
        fullArr_2_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_fullArr_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        fullArr_address0 =  (sc_lv<6>) (zext_ln218_fu_6340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        fullArr_address0 =  (sc_lv<6>) (zext_ln211_fu_6291_p1.read());
    } else {
        fullArr_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_fullArr_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()))) {
        fullArr_ce0 = ap_const_logic_1;
    } else {
        fullArr_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_fullArr_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln210_fu_6280_p2.read()))) {
        fullArr_we0 = ap_const_logic_1;
    } else {
        fullArr_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_grp_fu_3088_p2() {
    grp_fu_3088_p2 = (!arr1_1_q0.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_1_q0.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_grp_fu_3094_p2() {
    grp_fu_3094_p2 = (!arr1_1_q0.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_q0.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_grp_fu_3101_p2() {
    grp_fu_3101_p2 = (!arr1_2_q0.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_2_q0.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_grp_fu_3108_p2() {
    grp_fu_3108_p2 = (!arr1_q0.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_q0.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_grp_fu_3114_p2() {
    grp_fu_3114_p2 = (!arr1_q0.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_q0.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_grp_fu_6983_p0() {
    grp_fu_6983_p0 =  (sc_lv<8>) (grp_fu_6983_p00.read());
}

void poly1305_hw::thread_grp_fu_6983_p00() {
    grp_fu_6983_p00 = esl_zext<16,8>(accSum_1_q0.read());
}

void poly1305_hw::thread_grp_fu_6983_p1() {
    grp_fu_6983_p1 =  (sc_lv<8>) (zext_ln368_reg_7286.read());
}

void poly1305_hw::thread_grp_fu_6983_p2() {
    grp_fu_6983_p2 =  (sc_lv<8>) (grp_fu_6983_p20.read());
}

void poly1305_hw::thread_grp_fu_6983_p20() {
    grp_fu_6983_p20 = esl_zext<16,8>(mulCarry42_0_reg_1606.read());
}

void poly1305_hw::thread_grp_fu_6993_p0() {
    grp_fu_6993_p0 =  (sc_lv<8>) (grp_fu_6993_p00.read());
}

void poly1305_hw::thread_grp_fu_6993_p00() {
    grp_fu_6993_p00 = esl_zext<16,8>(accSum81_q0.read());
}

void poly1305_hw::thread_grp_fu_6993_p1() {
    grp_fu_6993_p1 =  (sc_lv<8>) (zext_ln648_reg_7906.read());
}

void poly1305_hw::thread_grp_fu_6993_p2() {
    grp_fu_6993_p2 =  (sc_lv<8>) (grp_fu_6993_p20.read());
}

void poly1305_hw::thread_grp_fu_6993_p20() {
    grp_fu_6993_p20 = esl_zext<16,8>(mulCarry88_0_reg_2137.read());
}

void poly1305_hw::thread_grp_fu_7003_p0() {
    grp_fu_7003_p0 =  (sc_lv<8>) (grp_fu_7003_p00.read());
}

void poly1305_hw::thread_grp_fu_7003_p00() {
    grp_fu_7003_p00 = esl_zext<16,8>(accSum_q0.read());
}

void poly1305_hw::thread_grp_fu_7003_p1() {
    grp_fu_7003_p1 =  (sc_lv<8>) (zext_ln85_reg_8440.read());
}

void poly1305_hw::thread_grp_fu_7003_p2() {
    grp_fu_7003_p2 =  (sc_lv<8>) (grp_fu_7003_p20.read());
}

void poly1305_hw::thread_grp_fu_7003_p20() {
    grp_fu_7003_p20 = esl_zext<16,8>(mulCarry_0_reg_2574.read());
}

void poly1305_hw::thread_i_1_fu_3170_p2() {
    i_1_fu_3170_p2 = (!i1_0_reg_1468.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i1_0_reg_1468.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_2_fu_3187_p2() {
    i_2_fu_3187_p2 = (!i2_0_reg_1479.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i2_0_reg_1479.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_38_fu_5686_p2() {
    i_38_fu_5686_p2 = (!i3_0_reg_2481.read().is_01() || !ap_const_lv28_1.is_01())? sc_lv<28>(): (sc_biguint<28>(i3_0_reg_2481.read()) + sc_biguint<28>(ap_const_lv28_1));
}

void poly1305_hw::thread_i_40_fu_3362_p2() {
    i_40_fu_3362_p2 = (!i30_0_reg_1501.read().is_01() || !ap_const_lv28_1.is_01())? sc_lv<28>(): (sc_biguint<28>(i30_0_reg_1501.read()) + sc_biguint<28>(ap_const_lv28_1));
}

void poly1305_hw::thread_i_42_fu_4583_p2() {
    i_42_fu_4583_p2 = (!i77_0_reg_2058.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i77_0_reg_2058.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void poly1305_hw::thread_i_43_fu_4614_p2() {
    i_43_fu_4614_p2 = (!i78_0_in_reg_2070.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(i78_0_in_reg_2070.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void poly1305_hw::thread_i_44_fu_5855_p2() {
    i_44_fu_5855_p2 = (!i6_0_reg_2550.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i6_0_reg_2550.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_45_fu_3566_p2() {
    i_45_fu_3566_p2 = (!i41_0_reg_1582.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i41_0_reg_1582.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_46_fu_6083_p2() {
    i_46_fu_6083_p2 = (!i9_0_reg_2634.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i9_0_reg_2634.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_47_fu_3794_p2() {
    i_47_fu_3794_p2 = (!i48_0_reg_1654.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i48_0_reg_1654.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_48_fu_4760_p2() {
    i_48_fu_4760_p2 = (!i87_0_reg_2113.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i87_0_reg_2113.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_49_fu_4996_p2() {
    i_49_fu_4996_p2 = (!i94_0_reg_2173.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i94_0_reg_2173.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_50_fu_6122_p2() {
    i_50_fu_6122_p2 = (!i10_0_reg_2657.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i10_0_reg_2657.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_51_fu_3833_p2() {
    i_51_fu_3833_p2 = (!i55_0_reg_1665.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i55_0_reg_1665.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_52_fu_5041_p2() {
    i_52_fu_5041_p2 = (!i101_0_reg_2184.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i101_0_reg_2184.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_53_fu_6154_p2() {
    i_53_fu_6154_p2 = (!i12_0_in_reg_2682.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_biguint<7>(i12_0_in_reg_2682.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_54_fu_3865_p2() {
    i_54_fu_3865_p2 = (!i57_0_in_reg_1689.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_biguint<7>(i57_0_in_reg_1689.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_55_fu_6219_p2() {
    i_55_fu_6219_p2 = (!i13_0_reg_2732.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i13_0_reg_2732.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_56_fu_3930_p2() {
    i_56_fu_3930_p2 = (!i58_0_reg_1742.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i58_0_reg_1742.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_57_fu_5466_p2() {
    i_57_fu_5466_p2 = (!i105_0_reg_2357.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i105_0_reg_2357.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_58_fu_5156_p2() {
    i_58_fu_5156_p2 = (!i108_0_reg_2253.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i108_0_reg_2253.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void poly1305_hw::thread_i_59_fu_5427_p2() {
    i_59_fu_5427_p2 = (!i113_0_reg_2337.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i113_0_reg_2337.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_60_fu_5513_p2() {
    i_60_fu_5513_p2 = (!i114_0_reg_2377.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i114_0_reg_2377.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_61_fu_6648_p2() {
    i_61_fu_6648_p2 = (!i17_0_reg_2892.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i17_0_reg_2892.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_62_fu_4359_p2() {
    i_62_fu_4359_p2 = (!i62_0_reg_1912.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i62_0_reg_1912.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_63_fu_6334_p2() {
    i_63_fu_6334_p2 = (!i19_0_reg_2800.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i19_0_reg_2800.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void poly1305_hw::thread_i_64_fu_4045_p2() {
    i_64_fu_4045_p2 = (!i65_0_reg_1808.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i65_0_reg_1808.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void poly1305_hw::thread_i_65_fu_5579_p2() {
    i_65_fu_5579_p2 = (!i115_0_reg_2401.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i115_0_reg_2401.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_66_fu_6605_p2() {
    i_66_fu_6605_p2 = (!ap_const_lv7_1.is_01() || !zext_ln247_fu_6596_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(zext_ln247_fu_6596_p1.read()));
}

void poly1305_hw::thread_i_67_fu_4316_p2() {
    i_67_fu_4316_p2 = (!ap_const_lv7_1.is_01() || !zext_ln528_fu_4307_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(zext_ln528_fu_4307_p1.read()));
}

void poly1305_hw::thread_i_68_fu_5607_p2() {
    i_68_fu_5607_p2 = (!i117_0_in_reg_2426.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_biguint<7>(i117_0_in_reg_2426.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_69_fu_6695_p2() {
    i_69_fu_6695_p2 = (!i25_0_reg_2912.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i25_0_reg_2912.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_70_fu_4406_p2() {
    i_70_fu_4406_p2 = (!i71_0_reg_1932.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i71_0_reg_1932.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_71_fu_6761_p2() {
    i_71_fu_6761_p2 = (!i26_0_reg_2935.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i26_0_reg_2935.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_72_fu_4472_p2() {
    i_72_fu_4472_p2 = (!i72_0_reg_1943.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i72_0_reg_1943.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_73_fu_6793_p2() {
    i_73_fu_6793_p2 = (!i28_0_in_reg_2960.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_biguint<7>(i28_0_in_reg_2960.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_74_fu_4504_p2() {
    i_74_fu_4504_p2 = (!i74_0_in_reg_1967.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_biguint<7>(i74_0_in_reg_1967.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_75_fu_5661_p2() {
    i_75_fu_5661_p2 = (!i118_0_reg_2470.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i118_0_reg_2470.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_76_fu_6966_p2() {
    i_76_fu_6966_p2 = (!i122_0_reg_3061.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i122_0_reg_3061.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_77_fu_6847_p2() {
    i_77_fu_6847_p2 = (!i29_0_reg_3027.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i29_0_reg_3027.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_78_fu_4558_p2() {
    i_78_fu_4558_p2 = (!i75_0_reg_2047.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i75_0_reg_2047.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_fu_3153_p2() {
    i_fu_3153_p2 = (!i_0_reg_1457.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(i_0_reg_1457.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void poly1305_hw::thread_icmp_ln107_1_fu_6051_p2() {
    icmp_ln107_1_fu_6051_p2 = (!select_ln99_fu_6027_p3.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln99_fu_6027_p3.read() == ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln107_fu_5870_p2() {
    icmp_ln107_fu_5870_p2 = (!i6_0_reg_2550.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(i6_0_reg_2550.read() != ap_const_lv5_F);
}

void poly1305_hw::thread_icmp_ln122_fu_6077_p2() {
    icmp_ln122_fu_6077_p2 = (!i9_0_reg_2634.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(i9_0_reg_2634.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln149_fu_6142_p2() {
    icmp_ln149_fu_6142_p2 = (!sub_ln149_fu_6132_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln149_fu_6132_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln152_fu_6148_p2() {
    icmp_ln152_fu_6148_p2 = (!sub_ln149_fu_6132_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln149_fu_6132_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln156_fu_6164_p2() {
    icmp_ln156_fu_6164_p2 = (!i12_0_in_reg_2682.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): (sc_bigint<7>(i12_0_in_reg_2682.read()) > sc_bigint<7>(ap_const_lv7_0));
}

void poly1305_hw::thread_icmp_ln157_fu_6184_p2() {
    icmp_ln157_fu_6184_p2 = (!arr1_q0.read().is_01() || !zext_ln157_1_fu_6180_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q0.read()) > sc_bigint<32>(zext_ln157_1_fu_6180_p1.read()));
}

void poly1305_hw::thread_icmp_ln161_fu_6190_p2() {
    icmp_ln161_fu_6190_p2 = (!arr1_q0.read().is_01() || !zext_ln157_1_fu_6180_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q0.read()) < sc_bigint<32>(zext_ln157_1_fu_6180_p1.read()));
}

void poly1305_hw::thread_icmp_ln185_fu_6225_p2() {
    icmp_ln185_fu_6225_p2 = (!arr1Zeroes_1_reg_2722.read().is_01() || !ap_const_lv7_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes_1_reg_2722.read() == ap_const_lv7_21);
}

void poly1305_hw::thread_icmp_ln191_fu_6249_p2() {
    icmp_ln191_fu_6249_p2 = (!zext_ln191_fu_6245_p1.read().is_01() || !sub_ln191_reg_8625.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln191_fu_6245_p1.read()) < sc_bigint<7>(sub_ln191_reg_8625.read()));
}

void poly1305_hw::thread_icmp_ln195_fu_6265_p2() {
    icmp_ln195_fu_6265_p2 = (!sub_ln191_reg_8625.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<1>(): (sc_bigint<7>(sub_ln191_reg_8625.read()) < sc_bigint<7>(ap_const_lv7_12));
}

void poly1305_hw::thread_icmp_ln196_fu_6642_p2() {
    icmp_ln196_fu_6642_p2 = (!i17_0_reg_2892.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i17_0_reg_2892.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln197_fu_6668_p2() {
    icmp_ln197_fu_6668_p2 = (!arr1_q0.read().is_01() || !zext_ln197_1_fu_6664_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q0.read()) < sc_bigint<32>(zext_ln197_1_fu_6664_p1.read()));
}

void poly1305_hw::thread_icmp_ln210_fu_6280_p2() {
    icmp_ln210_fu_6280_p2 = (!zext_ln210_fu_6276_p1.read().is_01() || !sub_ln210_reg_8644.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln210_fu_6276_p1.read()) < sc_bigint<7>(sub_ln210_reg_8644.read()));
}

void poly1305_hw::thread_icmp_ln215_fu_6329_p2() {
    icmp_ln215_fu_6329_p2 = (!zext_ln215_2_fu_6325_p1.read().is_01() || !sub_ln210_reg_8644.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln215_2_fu_6325_p1.read()) < sc_bigint<7>(sub_ln210_reg_8644.read()));
}

void poly1305_hw::thread_icmp_ln217_fu_6368_p2() {
    icmp_ln217_fu_6368_p2 = (!j21_0_reg_2834.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j21_0_reg_2834.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln219_fu_6444_p2() {
    icmp_ln219_fu_6444_p2 = (!tmp_27_reg_8736.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_27_reg_8736.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln21_fu_3147_p2() {
    icmp_ln21_fu_3147_p2 = (!zext_ln21_fu_3143_p1.read().is_01() || !textLength_0_reg_1434.read().is_01())? sc_lv<1>(): (sc_bigint<32>(zext_ln21_fu_3143_p1.read()) < sc_bigint<32>(textLength_0_reg_1434.read()));
}

void poly1305_hw::thread_icmp_ln226_1_fu_6471_p2() {
    icmp_ln226_1_fu_6471_p2 = (!mulCarry_5_fu_6449_p3.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(mulCarry_5_fu_6449_p3.read() == ap_const_lv18_0);
}

void poly1305_hw::thread_icmp_ln226_fu_6465_p2() {
    icmp_ln226_fu_6465_p2 = (!j21_0_reg_2834.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j21_0_reg_2834.read() != ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln232_fu_6541_p2() {
    icmp_ln232_fu_6541_p2 = (!tmp_29_fu_6531_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_29_fu_6531_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln240_1_fu_6570_p2() {
    icmp_ln240_1_fu_6570_p2 = (!select_ln232_fu_6557_p3.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln232_fu_6557_p3.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln240_fu_6345_p2() {
    icmp_ln240_fu_6345_p2 = (!zext_ln215_2_fu_6325_p1.read().is_01() || !sub_ln240_reg_8658.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln215_2_fu_6325_p1.read() != sub_ln240_reg_8658.read());
}

void poly1305_hw::thread_icmp_ln247_fu_6600_p2() {
    icmp_ln247_fu_6600_p2 = (!zext_ln247_fu_6596_p1.read().is_01() || !sub_ln191_reg_8625.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln247_fu_6596_p1.read() == sub_ln191_reg_8625.read());
}

void poly1305_hw::thread_icmp_ln248_fu_6621_p2() {
    icmp_ln248_fu_6621_p2 = (!arr1_q0.read().is_01() || !temp_q0.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q0.read()) < sc_bigint<32>(temp_q0.read()));
}

void poly1305_hw::thread_icmp_ln24_fu_3164_p2() {
    icmp_ln24_fu_3164_p2 = (!i1_0_reg_1468.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(i1_0_reg_1468.read() == ap_const_lv6_20);
}

void poly1305_hw::thread_icmp_ln260_fu_6689_p2() {
    icmp_ln260_fu_6689_p2 = (!i25_0_reg_2912.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(i25_0_reg_2912.read() == ap_const_lv6_20);
}

void poly1305_hw::thread_icmp_ln271_fu_6755_p2() {
    icmp_ln271_fu_6755_p2 = (!arr1_q1.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_q1.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_icmp_ln284_fu_6781_p2() {
    icmp_ln284_fu_6781_p2 = (!sub_ln284_fu_6771_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln284_fu_6771_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln287_fu_6787_p2() {
    icmp_ln287_fu_6787_p2 = (!sub_ln284_fu_6771_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln284_fu_6771_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln291_fu_6803_p2() {
    icmp_ln291_fu_6803_p2 = (!i28_0_in_reg_2960.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): (sc_bigint<7>(i28_0_in_reg_2960.read()) > sc_bigint<7>(ap_const_lv7_0));
}

void poly1305_hw::thread_icmp_ln292_fu_6823_p2() {
    icmp_ln292_fu_6823_p2 = (!arr1_q1.read().is_01() || !zext_ln292_1_fu_6819_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q1.read()) > sc_bigint<32>(zext_ln292_1_fu_6819_p1.read()));
}

void poly1305_hw::thread_icmp_ln296_fu_6829_p2() {
    icmp_ln296_fu_6829_p2 = (!arr1_q1.read().is_01() || !zext_ln292_1_fu_6819_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q1.read()) < sc_bigint<32>(zext_ln292_1_fu_6819_p1.read()));
}

void poly1305_hw::thread_icmp_ln306_fu_6835_p2() {
    icmp_ln306_fu_6835_p2 = (!arr1Zeroes_3_reg_2923.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes_3_reg_2923.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln313_fu_6841_p2() {
    icmp_ln313_fu_6841_p2 = (!i29_0_reg_3027.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i29_0_reg_3027.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln31_fu_3181_p2() {
    icmp_ln31_fu_3181_p2 = (!i2_0_reg_1479.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i2_0_reg_1479.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln325_fu_3357_p2() {
    icmp_ln325_fu_3357_p2 = (!zext_ln325_fu_3353_p1.read().is_01() || !select_ln49_reg_7166.read().is_01())? sc_lv<1>(): (sc_bigint<29>(zext_ln325_fu_3353_p1.read()) < sc_bigint<29>(select_ln49_reg_7166.read()));
}

void poly1305_hw::thread_icmp_ln327_fu_3415_p2() {
    icmp_ln327_fu_3415_p2 = (!j32_0_reg_1524.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j32_0_reg_1524.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln341_fu_3442_p2() {
    icmp_ln341_fu_3442_p2 = (!j36_0_reg_1548.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j36_0_reg_1548.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln343_fu_3498_p2() {
    icmp_ln343_fu_3498_p2 = (!tmp_7_fu_3488_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7_fu_3488_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln360_fu_3539_p2() {
    icmp_ln360_fu_3539_p2 = (!k40_0_reg_1559.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(k40_0_reg_1559.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln365_fu_3560_p2() {
    icmp_ln365_fu_3560_p2 = (!i41_0_reg_1582.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i41_0_reg_1582.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln367_fu_3597_p2() {
    icmp_ln367_fu_3597_p2 = (!j43_0_reg_1618.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j43_0_reg_1618.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln369_fu_3634_p2() {
    icmp_ln369_fu_3634_p2 = (!tmp_10_fu_3625_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_10_fu_3625_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln376_1_fu_3663_p2() {
    icmp_ln376_1_fu_3663_p2 = (!select_ln369_reg_7320.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln369_reg_7320.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln376_fu_3657_p2() {
    icmp_ln376_fu_3657_p2 = (!j43_0_reg_1618.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j43_0_reg_1618.read() != ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln382_fu_3722_p2() {
    icmp_ln382_fu_3722_p2 = (!tmp_14_fu_3712_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_14_fu_3712_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln390_1_fu_3762_p2() {
    icmp_ln390_1_fu_3762_p2 = (!select_ln382_fu_3738_p3.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln382_fu_3738_p3.read() == ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln390_fu_3581_p2() {
    icmp_ln390_fu_3581_p2 = (!i41_0_reg_1582.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(i41_0_reg_1582.read() != ap_const_lv5_F);
}

void poly1305_hw::thread_icmp_ln406_fu_3788_p2() {
    icmp_ln406_fu_3788_p2 = (!i48_0_reg_1654.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(i48_0_reg_1654.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln433_fu_3853_p2() {
    icmp_ln433_fu_3853_p2 = (!sub_ln433_fu_3843_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln433_fu_3843_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln436_fu_3859_p2() {
    icmp_ln436_fu_3859_p2 = (!sub_ln433_fu_3843_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln433_fu_3843_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln440_fu_3875_p2() {
    icmp_ln440_fu_3875_p2 = (!i57_0_in_reg_1689.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): (sc_bigint<7>(i57_0_in_reg_1689.read()) > sc_bigint<7>(ap_const_lv7_0));
}

void poly1305_hw::thread_icmp_ln441_fu_3895_p2() {
    icmp_ln441_fu_3895_p2 = (!arr1_1_q0.read().is_01() || !zext_ln441_1_fu_3891_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q0.read()) > sc_bigint<32>(zext_ln441_1_fu_3891_p1.read()));
}

void poly1305_hw::thread_icmp_ln445_fu_3901_p2() {
    icmp_ln445_fu_3901_p2 = (!arr1_1_q0.read().is_01() || !zext_ln441_1_fu_3891_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q0.read()) < sc_bigint<32>(zext_ln441_1_fu_3891_p1.read()));
}

void poly1305_hw::thread_icmp_ln469_fu_3936_p2() {
    icmp_ln469_fu_3936_p2 = (!arr1Zeroes53_1_reg_1754.read().is_01() || !ap_const_lv7_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes53_1_reg_1754.read() == ap_const_lv7_21);
}

void poly1305_hw::thread_icmp_ln46_fu_3286_p2() {
    icmp_ln46_fu_3286_p2 = (!phi_ln46_reg_1490.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln46_reg_1490.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln472_fu_3960_p2() {
    icmp_ln472_fu_3960_p2 = (!zext_ln472_fu_3956_p1.read().is_01() || !sub_ln472_reg_7471.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln472_fu_3956_p1.read()) < sc_bigint<7>(sub_ln472_reg_7471.read()));
}

void poly1305_hw::thread_icmp_ln476_fu_3976_p2() {
    icmp_ln476_fu_3976_p2 = (!sub_ln472_reg_7471.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<1>(): (sc_bigint<7>(sub_ln472_reg_7471.read()) < sc_bigint<7>(ap_const_lv7_12));
}

void poly1305_hw::thread_icmp_ln477_fu_4353_p2() {
    icmp_ln477_fu_4353_p2 = (!i62_0_reg_1912.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i62_0_reg_1912.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln478_fu_4379_p2() {
    icmp_ln478_fu_4379_p2 = (!arr1_1_q0.read().is_01() || !zext_ln478_1_fu_4375_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q0.read()) < sc_bigint<32>(zext_ln478_1_fu_4375_p1.read()));
}

void poly1305_hw::thread_icmp_ln48_fu_3292_p2() {
    icmp_ln48_fu_3292_p2 = (!trunc_ln9_reg_7023.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln9_reg_7023.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln491_fu_3991_p2() {
    icmp_ln491_fu_3991_p2 = (!zext_ln491_fu_3987_p1.read().is_01() || !sub_ln491_reg_7490.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln491_fu_3987_p1.read()) < sc_bigint<7>(sub_ln491_reg_7490.read()));
}

void poly1305_hw::thread_icmp_ln496_fu_4040_p2() {
    icmp_ln496_fu_4040_p2 = (!zext_ln496_2_fu_4036_p1.read().is_01() || !sub_ln491_reg_7490.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln496_2_fu_4036_p1.read()) < sc_bigint<7>(sub_ln491_reg_7490.read()));
}

void poly1305_hw::thread_icmp_ln498_fu_4079_p2() {
    icmp_ln498_fu_4079_p2 = (!j67_0_reg_1831.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j67_0_reg_1831.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln49_fu_5681_p2() {
    icmp_ln49_fu_5681_p2 = (!zext_ln49_1_fu_5677_p1.read().is_01() || !select_ln49_reg_7166.read().is_01())? sc_lv<1>(): (sc_bigint<29>(zext_ln49_1_fu_5677_p1.read()) < sc_bigint<29>(select_ln49_reg_7166.read()));
}

void poly1305_hw::thread_icmp_ln500_fu_4155_p2() {
    icmp_ln500_fu_4155_p2 = (!tmp_28_reg_7582.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_28_reg_7582.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln507_1_fu_4182_p2() {
    icmp_ln507_1_fu_4182_p2 = (!mulCarry_6_fu_4160_p3.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(mulCarry_6_fu_4160_p3.read() == ap_const_lv18_0);
}

void poly1305_hw::thread_icmp_ln507_fu_4176_p2() {
    icmp_ln507_fu_4176_p2 = (!j67_0_reg_1831.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j67_0_reg_1831.read() != ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln513_fu_4252_p2() {
    icmp_ln513_fu_4252_p2 = (!tmp_30_fu_4242_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_30_fu_4242_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln51_fu_5704_p2() {
    icmp_ln51_fu_5704_p2 = (!j_0_reg_2504.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_2504.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln521_1_fu_4281_p2() {
    icmp_ln521_1_fu_4281_p2 = (!select_ln513_fu_4268_p3.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln513_fu_4268_p3.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln521_fu_4056_p2() {
    icmp_ln521_fu_4056_p2 = (!zext_ln496_2_fu_4036_p1.read().is_01() || !sub_ln521_reg_7504.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln496_2_fu_4036_p1.read() != sub_ln521_reg_7504.read());
}

void poly1305_hw::thread_icmp_ln528_fu_4311_p2() {
    icmp_ln528_fu_4311_p2 = (!zext_ln528_fu_4307_p1.read().is_01() || !sub_ln472_reg_7471.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln528_fu_4307_p1.read() == sub_ln472_reg_7471.read());
}

void poly1305_hw::thread_icmp_ln529_fu_4332_p2() {
    icmp_ln529_fu_4332_p2 = (!arr1_1_q0.read().is_01() || !temp_1_q0.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q0.read()) < sc_bigint<32>(temp_1_q0.read()));
}

void poly1305_hw::thread_icmp_ln541_fu_4400_p2() {
    icmp_ln541_fu_4400_p2 = (!i71_0_reg_1932.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(i71_0_reg_1932.read() == ap_const_lv6_20);
}

void poly1305_hw::thread_icmp_ln552_fu_4466_p2() {
    icmp_ln552_fu_4466_p2 = (!arr1_1_q1.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_1_q1.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_icmp_ln565_fu_4492_p2() {
    icmp_ln565_fu_4492_p2 = (!sub_ln565_fu_4482_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln565_fu_4482_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln568_fu_4498_p2() {
    icmp_ln568_fu_4498_p2 = (!sub_ln565_fu_4482_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln565_fu_4482_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln572_fu_4514_p2() {
    icmp_ln572_fu_4514_p2 = (!i74_0_in_reg_1967.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): (sc_bigint<7>(i74_0_in_reg_1967.read()) > sc_bigint<7>(ap_const_lv7_0));
}

void poly1305_hw::thread_icmp_ln573_fu_4534_p2() {
    icmp_ln573_fu_4534_p2 = (!arr1_1_q1.read().is_01() || !zext_ln573_1_fu_4530_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q1.read()) > sc_bigint<32>(zext_ln573_1_fu_4530_p1.read()));
}

void poly1305_hw::thread_icmp_ln577_fu_4540_p2() {
    icmp_ln577_fu_4540_p2 = (!arr1_1_q1.read().is_01() || !zext_ln573_1_fu_4530_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q1.read()) < sc_bigint<32>(zext_ln573_1_fu_4530_p1.read()));
}

void poly1305_hw::thread_icmp_ln586_fu_4546_p2() {
    icmp_ln586_fu_4546_p2 = (!arr1Zeroes53_3_reg_1955.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes53_3_reg_1955.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln593_fu_4552_p2() {
    icmp_ln593_fu_4552_p2 = (!i75_0_reg_2047.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i75_0_reg_2047.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln603_fu_4578_p2() {
    icmp_ln603_fu_4578_p2 = (!zext_ln603_fu_4574_p1.read().is_01() || !trunc_ln604_reg_7214.read().is_01())? sc_lv<1>(): (sc_bigint<5>(zext_ln603_fu_4574_p1.read()) < sc_bigint<5>(trunc_ln604_reg_7214.read()));
}

void poly1305_hw::thread_icmp_ln608_fu_4620_p2() {
    icmp_ln608_fu_4620_p2 = (!i_43_fu_4614_p2.read().is_01() || !ap_const_lv32_11.is_01())? sc_lv<1>(): (sc_bigint<32>(i_43_fu_4614_p2.read()) < sc_bigint<32>(ap_const_lv32_11));
}

void poly1305_hw::thread_icmp_ln622_fu_4631_p2() {
    icmp_ln622_fu_4631_p2 = (!j82_0_reg_2079.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j82_0_reg_2079.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln624_fu_4687_p2() {
    icmp_ln624_fu_4687_p2 = (!tmp_8_fu_4677_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_8_fu_4677_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln640_fu_4728_p2() {
    icmp_ln640_fu_4728_p2 = (!k86_0_reg_2102.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(k86_0_reg_2102.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln645_fu_4754_p2() {
    icmp_ln645_fu_4754_p2 = (!i87_0_reg_2113.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i87_0_reg_2113.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln647_fu_4791_p2() {
    icmp_ln647_fu_4791_p2 = (!j89_0_reg_2125.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j89_0_reg_2125.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln649_fu_4828_p2() {
    icmp_ln649_fu_4828_p2 = (!tmp_15_fu_4819_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_15_fu_4819_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln656_1_fu_4857_p2() {
    icmp_ln656_1_fu_4857_p2 = (!select_ln649_reg_7940.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln649_reg_7940.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln656_fu_4851_p2() {
    icmp_ln656_fu_4851_p2 = (!j89_0_reg_2125.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j89_0_reg_2125.read() != ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln65_fu_5731_p2() {
    icmp_ln65_fu_5731_p2 = (!j5_0_reg_2516.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j5_0_reg_2516.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln662_fu_4919_p2() {
    icmp_ln662_fu_4919_p2 = (!tmp_17_fu_4909_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_17_fu_4909_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln670_1_fu_4959_p2() {
    icmp_ln670_1_fu_4959_p2 = (!select_ln662_fu_4935_p3.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln662_fu_4935_p3.read() == ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln670_fu_4775_p2() {
    icmp_ln670_fu_4775_p2 = (!i87_0_reg_2113.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(i87_0_reg_2113.read() != ap_const_lv5_F);
}

void poly1305_hw::thread_icmp_ln67_fu_5787_p2() {
    icmp_ln67_fu_5787_p2 = (!tmp_6_fu_5777_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6_fu_5777_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln684_fu_4990_p2() {
    icmp_ln684_fu_4990_p2 = (!i94_0_reg_2173.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(i94_0_reg_2173.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln698_fu_5035_p2() {
    icmp_ln698_fu_5035_p2 = (!arr1_2_q0.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_2_q0.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_icmp_ln711_fu_5047_p2() {
    icmp_ln711_fu_5047_p2 = (!arr1Zeroes99_0_reg_2196.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes99_0_reg_2196.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln716_fu_5075_p2() {
    icmp_ln716_fu_5075_p2 = (!zext_ln716_fu_5071_p1.read().is_01() || !sub_ln716_reg_8021.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln716_fu_5071_p1.read()) < sc_bigint<7>(sub_ln716_reg_8021.read()));
}

void poly1305_hw::thread_icmp_ln720_fu_5091_p2() {
    icmp_ln720_fu_5091_p2 = (!sub_ln716_reg_8021.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<1>(): (sc_bigint<7>(sub_ln716_reg_8021.read()) < sc_bigint<7>(ap_const_lv7_12));
}

void poly1305_hw::thread_icmp_ln721_fu_5460_p2() {
    icmp_ln721_fu_5460_p2 = (!i105_0_reg_2357.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i105_0_reg_2357.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln722_fu_5486_p2() {
    icmp_ln722_fu_5486_p2 = (!arr1_2_q0.read().is_01() || !zext_ln722_1_fu_5482_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_2_q0.read()) < sc_bigint<32>(zext_ln722_1_fu_5482_p1.read()));
}

void poly1305_hw::thread_icmp_ln735_fu_5106_p2() {
    icmp_ln735_fu_5106_p2 = (!zext_ln735_fu_5102_p1.read().is_01() || !sub_ln735_reg_8040.read().is_01())? sc_lv<1>(): (sc_bigint<6>(zext_ln735_fu_5102_p1.read()) < sc_bigint<6>(sub_ln735_reg_8040.read()));
}

void poly1305_hw::thread_icmp_ln740_fu_5151_p2() {
    icmp_ln740_fu_5151_p2 = (!zext_ln740_1_fu_5147_p1.read().is_01() || !sub_ln735_reg_8040.read().is_01())? sc_lv<1>(): (sc_bigint<6>(zext_ln740_1_fu_5147_p1.read()) < sc_bigint<6>(sub_ln735_reg_8040.read()));
}

void poly1305_hw::thread_icmp_ln742_fu_5190_p2() {
    icmp_ln742_fu_5190_p2 = (!j110_0_reg_2276.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j110_0_reg_2276.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln744_fu_5266_p2() {
    icmp_ln744_fu_5266_p2 = (!tmp_23_reg_8132.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_23_reg_8132.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln751_1_fu_5293_p2() {
    icmp_ln751_1_fu_5293_p2 = (!mulCarry_4_fu_5271_p3.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(mulCarry_4_fu_5271_p3.read() == ap_const_lv18_0);
}

void poly1305_hw::thread_icmp_ln751_fu_5287_p2() {
    icmp_ln751_fu_5287_p2 = (!j110_0_reg_2276.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j110_0_reg_2276.read() != ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln757_fu_5363_p2() {
    icmp_ln757_fu_5363_p2 = (!tmp_24_fu_5353_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_24_fu_5353_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln765_1_fu_5392_p2() {
    icmp_ln765_1_fu_5392_p2 = (!select_ln757_fu_5379_p3.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln757_fu_5379_p3.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln765_fu_5167_p2() {
    icmp_ln765_fu_5167_p2 = (!zext_ln740_1_fu_5147_p1.read().is_01() || !sub_ln765_reg_8054.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln740_1_fu_5147_p1.read() != sub_ln765_reg_8054.read());
}

void poly1305_hw::thread_icmp_ln772_fu_5422_p2() {
    icmp_ln772_fu_5422_p2 = (!zext_ln772_fu_5418_p1.read().is_01() || !sub_ln716_reg_8021.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln772_fu_5418_p1.read() == sub_ln716_reg_8021.read());
}

void poly1305_hw::thread_icmp_ln773_fu_5439_p2() {
    icmp_ln773_fu_5439_p2 = (!arr1_2_q0.read().is_01() || !temp_2_q0.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_2_q0.read()) < sc_bigint<32>(temp_2_q0.read()));
}

void poly1305_hw::thread_icmp_ln77_fu_5828_p2() {
    icmp_ln77_fu_5828_p2 = (!k_0_reg_2539.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_2539.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln785_fu_5507_p2() {
    icmp_ln785_fu_5507_p2 = (!i114_0_reg_2377.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(i114_0_reg_2377.read() == ap_const_lv6_20);
}

void poly1305_hw::thread_icmp_ln796_fu_5573_p2() {
    icmp_ln796_fu_5573_p2 = (!arr1_2_q1.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_2_q1.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_icmp_ln809_fu_5595_p2() {
    icmp_ln809_fu_5595_p2 = (!sub_ln809_fu_5585_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln809_fu_5585_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln812_fu_5601_p2() {
    icmp_ln812_fu_5601_p2 = (!sub_ln809_fu_5585_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln809_fu_5585_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln816_fu_5617_p2() {
    icmp_ln816_fu_5617_p2 = (!i117_0_in_reg_2426.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): (sc_bigint<7>(i117_0_in_reg_2426.read()) > sc_bigint<7>(ap_const_lv7_0));
}

void poly1305_hw::thread_icmp_ln817_fu_5637_p2() {
    icmp_ln817_fu_5637_p2 = (!arr1_2_q1.read().is_01() || !zext_ln817_1_fu_5633_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_2_q1.read()) > sc_bigint<32>(zext_ln817_1_fu_5633_p1.read()));
}

void poly1305_hw::thread_icmp_ln821_fu_5643_p2() {
    icmp_ln821_fu_5643_p2 = (!arr1_2_q1.read().is_01() || !zext_ln817_1_fu_5633_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_2_q1.read()) < sc_bigint<32>(zext_ln817_1_fu_5633_p1.read()));
}

void poly1305_hw::thread_icmp_ln82_fu_5849_p2() {
    icmp_ln82_fu_5849_p2 = (!i6_0_reg_2550.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i6_0_reg_2550.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln831_fu_5649_p2() {
    icmp_ln831_fu_5649_p2 = (!arr1Zeroes99_2_reg_2388.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes99_2_reg_2388.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln838_fu_5655_p2() {
    icmp_ln838_fu_5655_p2 = (!i118_0_reg_2470.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i118_0_reg_2470.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln84_fu_5886_p2() {
    icmp_ln84_fu_5886_p2 = (!j7_0_reg_2598.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j7_0_reg_2598.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln851_fu_6863_p2() {
    icmp_ln851_fu_6863_p2 = (!j120_0_reg_3050.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j120_0_reg_3050.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln853_fu_6919_p2() {
    icmp_ln853_fu_6919_p2 = (!tmp_35_fu_6909_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_35_fu_6909_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln868_fu_6960_p2() {
    icmp_ln868_fu_6960_p2 = (!i122_0_reg_3061.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i122_0_reg_3061.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln86_fu_5923_p2() {
    icmp_ln86_fu_5923_p2 = (!tmp_9_fu_5914_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_9_fu_5914_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln93_1_fu_5952_p2() {
    icmp_ln93_1_fu_5952_p2 = (!select_ln86_reg_8474.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln86_reg_8474.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln93_fu_5946_p2() {
    icmp_ln93_fu_5946_p2 = (!j7_0_reg_2598.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j7_0_reg_2598.read() != ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln99_fu_6011_p2() {
    icmp_ln99_fu_6011_p2 = (!tmp_13_fu_6001_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_13_fu_6001_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_input_stream_V_data_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(flag_0_reg_1446.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read())))) {
        input_stream_V_data_blk_n = input_stream_V_data_empty_n.read();
    } else {
        input_stream_V_data_blk_n = ap_const_logic_1;
    }
}

void poly1305_hw::thread_input_stream_V_data_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(flag_0_reg_1446.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(flag_0_reg_1446.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op211.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op224.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op236.read()))))) {
        input_stream_V_data_read = ap_const_logic_1;
    } else {
        input_stream_V_data_read = ap_const_logic_0;
    }
}

void poly1305_hw::thread_input_stream_V_last_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(flag_0_reg_1446.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read())))) {
        input_stream_V_last_V_blk_n = input_stream_V_last_V_empty_n.read();
    } else {
        input_stream_V_last_V_blk_n = ap_const_logic_1;
    }
}

void poly1305_hw::thread_input_stream_V_last_V_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(flag_0_reg_1446.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(flag_0_reg_1446.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op211.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op224.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op236.read()))))) {
        input_stream_V_last_V_read = ap_const_logic_1;
    } else {
        input_stream_V_last_V_read = ap_const_logic_0;
    }
}

void poly1305_hw::thread_io_acc_block_signal_op1804() {
    io_acc_block_signal_op1804 = (result_stream_V_data_full_n.read() & result_stream_V_last_V_full_n.read());
}

void poly1305_hw::thread_io_acc_block_signal_op211() {
    io_acc_block_signal_op211 = (input_stream_V_data_empty_n.read() & input_stream_V_last_V_empty_n.read());
}

void poly1305_hw::thread_io_acc_block_signal_op224() {
    io_acc_block_signal_op224 = (input_stream_V_data_empty_n.read() & input_stream_V_last_V_empty_n.read());
}

void poly1305_hw::thread_io_acc_block_signal_op236() {
    io_acc_block_signal_op236 = (input_stream_V_data_empty_n.read() & input_stream_V_last_V_empty_n.read());
}

void poly1305_hw::thread_j_10_fu_4085_p2() {
    j_10_fu_4085_p2 = (!j67_0_reg_1831.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j67_0_reg_1831.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_11_fu_6869_p2() {
    j_11_fu_6869_p2 = (!j120_0_reg_3050.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j120_0_reg_3050.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_1_fu_3421_p2() {
    j_1_fu_3421_p2 = (!j32_0_reg_1524.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j32_0_reg_1524.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_2_fu_5737_p2() {
    j_2_fu_5737_p2 = (!j5_0_reg_2516.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j5_0_reg_2516.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_3_fu_3448_p2() {
    j_3_fu_3448_p2 = (!j36_0_reg_1548.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j36_0_reg_1548.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_4_fu_4637_p2() {
    j_4_fu_4637_p2 = (!j82_0_reg_2079.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j82_0_reg_2079.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_5_fu_5892_p2() {
    j_5_fu_5892_p2 = (!j7_0_reg_2598.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j7_0_reg_2598.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_6_fu_3603_p2() {
    j_6_fu_3603_p2 = (!j43_0_reg_1618.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j43_0_reg_1618.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_7_fu_4797_p2() {
    j_7_fu_4797_p2 = (!j89_0_reg_2125.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j89_0_reg_2125.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_8_fu_5196_p2() {
    j_8_fu_5196_p2 = (!j110_0_reg_2276.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j110_0_reg_2276.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_9_fu_6374_p2() {
    j_9_fu_6374_p2 = (!j21_0_reg_2834.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j21_0_reg_2834.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_j_fu_5710_p2() {
    j_fu_5710_p2 = (!j_0_reg_2504.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_reg_2504.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_k_1_fu_3545_p2() {
    k_1_fu_3545_p2 = (!k40_0_reg_1559.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(k40_0_reg_1559.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_k_2_fu_4734_p2() {
    k_2_fu_4734_p2 = (!k86_0_reg_2102.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(k86_0_reg_2102.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_k_3_fu_5080_p2() {
    k_3_fu_5080_p2 = (!k104_0_reg_2231.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(k104_0_reg_2231.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_k_4_fu_5111_p2() {
    k_4_fu_5111_p2 = (!k107_0_reg_2242.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(k107_0_reg_2242.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void poly1305_hw::thread_k_5_fu_6254_p2() {
    k_5_fu_6254_p2 = (!k16_0_reg_2766.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(k16_0_reg_2766.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_k_6_fu_3965_p2() {
    k_6_fu_3965_p2 = (!k61_0_reg_1786.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(k61_0_reg_1786.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_k_7_fu_6285_p2() {
    k_7_fu_6285_p2 = (!k18_0_reg_2777.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(k18_0_reg_2777.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void poly1305_hw::thread_k_8_fu_3996_p2() {
    k_8_fu_3996_p2 = (!k64_0_reg_1797.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(k64_0_reg_1797.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void poly1305_hw::thread_k_fu_5834_p2() {
    k_fu_5834_p2 = (!k_0_reg_2539.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(k_0_reg_2539.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_key_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        key_address0 =  (sc_lv<5>) (zext_ln32_fu_3193_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        key_address0 =  (sc_lv<5>) (zext_ln25_fu_3176_p1.read());
    } else {
        key_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_key_address1() {
    key_address1 =  (sc_lv<5>) (zext_ln33_fu_3204_p1.read());
}

void poly1305_hw::thread_key_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op236.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        key_ce0 = ap_const_logic_1;
    } else {
        key_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_key_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        key_ce1 = ap_const_logic_1;
    } else {
        key_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_key_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_3164_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op236.read())))) {
        key_we0 = ap_const_logic_1;
    } else {
        key_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mulCarry_1_fu_3640_p4() {
    mulCarry_1_fu_3640_p4 = grp_fu_6983_p3.read().range(15, 8);
}

void poly1305_hw::thread_mulCarry_3_fu_4834_p4() {
    mulCarry_3_fu_4834_p4 = grp_fu_6993_p3.read().range(15, 8);
}

void poly1305_hw::thread_mulCarry_4_fu_5271_p3() {
    mulCarry_4_fu_5271_p3 = (!icmp_ln744_fu_5266_p2.read()[0].is_01())? sc_lv<18>(): ((icmp_ln744_fu_5266_p2.read()[0].to_bool())? trunc_ln3_reg_8137.read(): ap_const_lv18_0);
}

void poly1305_hw::thread_mulCarry_5_fu_6449_p3() {
    mulCarry_5_fu_6449_p3 = (!icmp_ln219_fu_6444_p2.read()[0].is_01())? sc_lv<18>(): ((icmp_ln219_fu_6444_p2.read()[0].to_bool())? trunc_ln4_reg_8741.read(): ap_const_lv18_0);
}

void poly1305_hw::thread_mulCarry_6_fu_4160_p3() {
    mulCarry_6_fu_4160_p3 = (!icmp_ln500_fu_4155_p2.read()[0].is_01())? sc_lv<18>(): ((icmp_ln500_fu_4155_p2.read()[0].to_bool())? trunc_ln5_reg_7587.read(): ap_const_lv18_0);
}

void poly1305_hw::thread_mulCarry_fu_5929_p4() {
    mulCarry_fu_5929_p4 = grp_fu_7003_p3.read().range(15, 8);
}

void poly1305_hw::thread_mulTemp_3_fu_5235_p2() {
    mulTemp_3_fu_5235_p2 = (!zext_ln742_fu_5232_p1.read().is_01() || !sext_ln743_1_fu_5224_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(zext_ln742_fu_5232_p1.read()) + sc_bigint<26>(sext_ln743_1_fu_5224_p1.read()));
}

void poly1305_hw::thread_mulTemp_4_fu_6413_p2() {
    mulTemp_4_fu_6413_p2 = (!zext_ln217_fu_6410_p1.read().is_01() || !sext_ln218_1_fu_6402_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(zext_ln217_fu_6410_p1.read()) + sc_bigint<26>(sext_ln218_1_fu_6402_p1.read()));
}

void poly1305_hw::thread_mulTemp_5_fu_4124_p2() {
    mulTemp_5_fu_4124_p2 = (!zext_ln498_fu_4121_p1.read().is_01() || !sext_ln499_1_fu_4113_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(zext_ln498_fu_4121_p1.read()) + sc_bigint<26>(sext_ln499_1_fu_4113_p1.read()));
}

void poly1305_hw::thread_mul_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        mul_1_address0 =  (sc_lv<6>) (zext_ln407_1_fu_3800_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        mul_1_address0 =  (sc_lv<6>) (ap_const_lv64_20);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        mul_1_address0 = mul_1_addr_3_reg_7296.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        mul_1_address0 =  (sc_lv<6>) (zext_ln361_fu_3551_p1.read());
    } else {
        mul_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_mul_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        mul_1_address1 =  (sc_lv<6>) (ap_const_lv64_20);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        mul_1_address1 = mul_1_addr_4_reg_7335.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        mul_1_address1 =  (sc_lv<6>) (zext_ln381_1_fu_3680_p1.read());
    } else {
        mul_1_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_mul_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()))) {
        mul_1_ce0 = ap_const_logic_1;
    } else {
        mul_1_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()))) {
        mul_1_ce1 = ap_const_logic_1;
    } else {
        mul_1_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        mul_1_d0 = select_ln369_reg_7320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        mul_1_d0 = ap_const_lv8_0;
    } else {
        mul_1_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_mul_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        mul_1_d1 = add_ln391_fu_3778_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        mul_1_d1 = add_ln388_fu_3755_p2.read();
    } else {
        mul_1_d1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_mul_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln360_fu_3539_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_ln376_fu_3668_p2.read())))) {
        mul_1_we0 = ap_const_logic_1;
    } else {
        mul_1_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()))) {
        mul_1_we1 = ap_const_logic_1;
    } else {
        mul_1_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        mul_2_address0 =  (sc_lv<6>) (zext_ln685_1_fu_5002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        mul_2_address0 =  (sc_lv<6>) (ap_const_lv64_20);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        mul_2_address0 = mul_2_addr_3_reg_7916.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        mul_2_address0 =  (sc_lv<6>) (zext_ln641_fu_4740_p1.read());
    } else {
        mul_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_mul_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        mul_2_address1 =  (sc_lv<6>) (ap_const_lv64_20);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        mul_2_address1 = mul_2_addr_4_reg_7955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        mul_2_address1 =  (sc_lv<6>) (zext_ln661_1_fu_4874_p1.read());
    } else {
        mul_2_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_mul_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()))) {
        mul_2_ce0 = ap_const_logic_1;
    } else {
        mul_2_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()))) {
        mul_2_ce1 = ap_const_logic_1;
    } else {
        mul_2_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        mul_2_d0 = select_ln649_reg_7940.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        mul_2_d0 = ap_const_lv8_0;
    } else {
        mul_2_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_mul_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        mul_2_d1 = add_ln671_fu_4975_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        mul_2_d1 = add_ln668_fu_4952_p2.read();
    } else {
        mul_2_d1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_mul_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln640_fu_4728_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_ln656_fu_4862_p2.read())))) {
        mul_2_we0 = ap_const_logic_1;
    } else {
        mul_2_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()))) {
        mul_2_we1 = ap_const_logic_1;
    } else {
        mul_2_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        mul_address0 =  (sc_lv<6>) (zext_ln123_1_fu_6089_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        mul_address0 =  (sc_lv<6>) (ap_const_lv64_20);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        mul_address0 = mul_addr_3_reg_8450.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        mul_address0 =  (sc_lv<6>) (zext_ln78_fu_5840_p1.read());
    } else {
        mul_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_mul_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        mul_address1 =  (sc_lv<6>) (ap_const_lv64_20);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        mul_address1 = mul_addr_4_reg_8489.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        mul_address1 =  (sc_lv<6>) (zext_ln98_1_fu_5969_p1.read());
    } else {
        mul_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_mul_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        mul_ce0 = ap_const_logic_1;
    } else {
        mul_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()))) {
        mul_ce1 = ap_const_logic_1;
    } else {
        mul_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        mul_d0 = select_ln86_reg_8474.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        mul_d0 = ap_const_lv8_0;
    } else {
        mul_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_mul_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        mul_d1 = add_ln108_fu_6067_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        mul_d1 = add_ln105_fu_6044_p2.read();
    } else {
        mul_d1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_mul_ln218_fu_6397_p0() {
    mul_ln218_fu_6397_p0 =  (sc_lv<9>) (sext_ln240_reg_8697.read());
}

void poly1305_hw::thread_mul_ln218_fu_6397_p1() {
    mul_ln218_fu_6397_p1 =  (sc_lv<8>) (mul_ln218_fu_6397_p10.read());
}

void poly1305_hw::thread_mul_ln218_fu_6397_p10() {
    mul_ln218_fu_6397_p10 = esl_zext<17,8>(sext_ln218_fu_6389_p1.read());
}

void poly1305_hw::thread_mul_ln218_fu_6397_p2() {
    mul_ln218_fu_6397_p2 = (!mul_ln218_fu_6397_p0.read().is_01() || !mul_ln218_fu_6397_p1.read().is_01())? sc_lv<17>(): sc_bigint<9>(mul_ln218_fu_6397_p0.read()) * sc_biguint<8>(mul_ln218_fu_6397_p1.read());
}

void poly1305_hw::thread_mul_ln499_fu_4108_p0() {
    mul_ln499_fu_4108_p0 =  (sc_lv<9>) (sext_ln521_reg_7543.read());
}

void poly1305_hw::thread_mul_ln499_fu_4108_p1() {
    mul_ln499_fu_4108_p1 =  (sc_lv<8>) (mul_ln499_fu_4108_p10.read());
}

void poly1305_hw::thread_mul_ln499_fu_4108_p10() {
    mul_ln499_fu_4108_p10 = esl_zext<17,8>(sext_ln499_fu_4100_p1.read());
}

void poly1305_hw::thread_mul_ln499_fu_4108_p2() {
    mul_ln499_fu_4108_p2 = (!mul_ln499_fu_4108_p0.read().is_01() || !mul_ln499_fu_4108_p1.read().is_01())? sc_lv<17>(): sc_bigint<9>(mul_ln499_fu_4108_p0.read()) * sc_biguint<8>(mul_ln499_fu_4108_p1.read());
}

void poly1305_hw::thread_mul_ln743_fu_5219_p0() {
    mul_ln743_fu_5219_p0 =  (sc_lv<9>) (sext_ln765_reg_8093.read());
}

void poly1305_hw::thread_mul_ln743_fu_5219_p1() {
    mul_ln743_fu_5219_p1 =  (sc_lv<8>) (mul_ln743_fu_5219_p10.read());
}

void poly1305_hw::thread_mul_ln743_fu_5219_p10() {
    mul_ln743_fu_5219_p10 = esl_zext<17,8>(sext_ln743_fu_5211_p1.read());
}

void poly1305_hw::thread_mul_ln743_fu_5219_p2() {
    mul_ln743_fu_5219_p2 = (!mul_ln743_fu_5219_p0.read().is_01() || !mul_ln743_fu_5219_p1.read().is_01())? sc_lv<17>(): sc_bigint<9>(mul_ln743_fu_5219_p0.read()) * sc_biguint<8>(mul_ln743_fu_5219_p1.read());
}

void poly1305_hw::thread_mul_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln77_fu_5828_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_ln93_fu_5957_p2.read())))) {
        mul_we0 = ap_const_logic_1;
    } else {
        mul_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_mul_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()))) {
        mul_we1 = ap_const_logic_1;
    } else {
        mul_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_or_ln107_1_fu_6062_p2() {
    or_ln107_1_fu_6062_p2 = (or_ln107_fu_6057_p2.read() | icmp_ln93_reg_8481.read());
}

void poly1305_hw::thread_or_ln107_fu_6057_p2() {
    or_ln107_fu_6057_p2 = (icmp_ln107_reg_8445.read() | icmp_ln107_1_fu_6051_p2.read());
}

void poly1305_hw::thread_or_ln226_fu_6477_p2() {
    or_ln226_fu_6477_p2 = (icmp_ln226_fu_6465_p2.read() | icmp_ln226_1_fu_6471_p2.read());
}

void poly1305_hw::thread_or_ln240_1_fu_6581_p2() {
    or_ln240_1_fu_6581_p2 = (or_ln240_fu_6576_p2.read() | icmp_ln226_reg_8751.read());
}

void poly1305_hw::thread_or_ln240_fu_6576_p2() {
    or_ln240_fu_6576_p2 = (icmp_ln240_reg_8692.read() | icmp_ln240_1_fu_6570_p2.read());
}

void poly1305_hw::thread_or_ln376_fu_3668_p2() {
    or_ln376_fu_3668_p2 = (icmp_ln376_fu_3657_p2.read() | icmp_ln376_1_fu_3663_p2.read());
}

void poly1305_hw::thread_or_ln390_1_fu_3773_p2() {
    or_ln390_1_fu_3773_p2 = (or_ln390_fu_3768_p2.read() | icmp_ln376_reg_7327.read());
}

void poly1305_hw::thread_or_ln390_fu_3768_p2() {
    or_ln390_fu_3768_p2 = (icmp_ln390_reg_7291.read() | icmp_ln390_1_fu_3762_p2.read());
}

void poly1305_hw::thread_or_ln507_fu_4188_p2() {
    or_ln507_fu_4188_p2 = (icmp_ln507_fu_4176_p2.read() | icmp_ln507_1_fu_4182_p2.read());
}

void poly1305_hw::thread_or_ln521_1_fu_4292_p2() {
    or_ln521_1_fu_4292_p2 = (or_ln521_fu_4287_p2.read() | icmp_ln507_reg_7597.read());
}

void poly1305_hw::thread_or_ln521_fu_4287_p2() {
    or_ln521_fu_4287_p2 = (icmp_ln521_reg_7538.read() | icmp_ln521_1_fu_4281_p2.read());
}

void poly1305_hw::thread_or_ln656_fu_4862_p2() {
    or_ln656_fu_4862_p2 = (icmp_ln656_fu_4851_p2.read() | icmp_ln656_1_fu_4857_p2.read());
}

void poly1305_hw::thread_or_ln670_1_fu_4970_p2() {
    or_ln670_1_fu_4970_p2 = (or_ln670_fu_4965_p2.read() | icmp_ln656_reg_7947.read());
}

void poly1305_hw::thread_or_ln670_fu_4965_p2() {
    or_ln670_fu_4965_p2 = (icmp_ln670_reg_7911.read() | icmp_ln670_1_fu_4959_p2.read());
}

void poly1305_hw::thread_or_ln751_fu_5299_p2() {
    or_ln751_fu_5299_p2 = (icmp_ln751_fu_5287_p2.read() | icmp_ln751_1_fu_5293_p2.read());
}

void poly1305_hw::thread_or_ln765_1_fu_5403_p2() {
    or_ln765_1_fu_5403_p2 = (or_ln765_fu_5398_p2.read() | icmp_ln751_reg_8147.read());
}

void poly1305_hw::thread_or_ln765_fu_5398_p2() {
    or_ln765_fu_5398_p2 = (icmp_ln765_reg_8088.read() | icmp_ln765_1_fu_5392_p2.read());
}

void poly1305_hw::thread_or_ln93_fu_5957_p2() {
    or_ln93_fu_5957_p2 = (icmp_ln93_fu_5946_p2.read() | icmp_ln93_1_fu_5952_p2.read());
}

void poly1305_hw::thread_p_and_f_fu_3376_p3() {
    p_and_f_fu_3376_p3 = esl_concat<28,4>(ap_const_lv28_0, trunc_ln9_reg_7023.read());
}

void poly1305_hw::thread_p_and_t_fu_3386_p3() {
    p_and_t_fu_3386_p3 = esl_concat<28,4>(ap_const_lv28_0, trunc_ln603_fu_3383_p1.read());
}

void poly1305_hw::thread_r_addr_1_reg_7075() {
    r_addr_1_reg_7075 =  (sc_lv<4>) (ap_const_lv64_7);
}

void poly1305_hw::thread_r_addr_6_reg_7134() {
    r_addr_6_reg_7134 =  (sc_lv<4>) (ap_const_lv64_C);
}

void poly1305_hw::thread_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        r_address0 =  (sc_lv<4>) (zext_ln648_3_fu_4766_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        r_address0 = r_addr_6_reg_7134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        r_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        r_address0 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        r_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        r_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        r_address0 =  (sc_lv<4>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        r_address0 =  (sc_lv<4>) (zext_ln32_reg_7053.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        r_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else {
        r_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void poly1305_hw::thread_r_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        r_address1 =  (sc_lv<4>) (zext_ln85_3_fu_5861_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        r_address1 =  (sc_lv<4>) (zext_ln368_3_fu_3572_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        r_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        r_address1 =  (sc_lv<4>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        r_address1 = r_addr_1_reg_7075.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        r_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        r_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        r_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        r_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else {
        r_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void poly1305_hw::thread_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        r_ce0 = ap_const_logic_1;
    } else {
        r_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_r_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        r_ce1 = ap_const_logic_1;
    } else {
        r_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_r_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        r_d0 = and_ln2_fu_3267_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        r_d0 = and_ln_fu_3251_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        r_d0 = zext_ln39_fu_3243_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        r_d0 = key_q0.read();
    } else {
        r_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_r_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        r_d1 = and_ln1_fu_3259_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        r_d1 = zext_ln40_fu_3247_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        r_d1 = zext_ln38_fu_3239_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        r_d1 = zext_ln37_fu_3225_p1.read();
    } else {
        r_d1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_r_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        r_we0 = ap_const_logic_1;
    } else {
        r_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_r_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        r_we1 = ap_const_logic_1;
    } else {
        r_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_result_stream_V_data_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        result_stream_V_data_blk_n = result_stream_V_data_full_n.read();
    } else {
        result_stream_V_data_blk_n = ap_const_logic_1;
    }
}

void poly1305_hw::thread_result_stream_V_data_din() {
    result_stream_V_data_din = tag_q0.read();
}

void poly1305_hw::thread_result_stream_V_data_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1804.read(), ap_const_logic_1))) {
        result_stream_V_data_write = ap_const_logic_1;
    } else {
        result_stream_V_data_write = ap_const_logic_0;
    }
}

void poly1305_hw::thread_result_stream_V_last_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        result_stream_V_last_V_blk_n = result_stream_V_last_V_full_n.read();
    } else {
        result_stream_V_last_V_blk_n = ap_const_logic_1;
    }
}

void poly1305_hw::thread_result_stream_V_last_V_din() {
    result_stream_V_last_V_din = tmp_last_V_1_reg_9013.read();
}

void poly1305_hw::thread_result_stream_V_last_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1804.read(), ap_const_logic_1))) {
        result_stream_V_last_V_write = ap_const_logic_1;
    } else {
        result_stream_V_last_V_write = ap_const_logic_0;
    }
}

void poly1305_hw::thread_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read())) {
        s_address0 =  (sc_lv<4>) (zext_ln852_fu_6875_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        s_address0 =  (sc_lv<4>) (zext_ln32_reg_7053.read());
    } else {
        s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void poly1305_hw::thread_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        s_ce0 = ap_const_logic_1;
    } else {
        s_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_s_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        s_we0 = ap_const_logic_1;
    } else {
        s_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_select_ln232_fu_6557_p3() {
    select_ln232_fu_6557_p3 = (!icmp_ln232_fu_6541_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln232_fu_6541_p2.read()[0].to_bool())? addCarry_1_fu_6547_p4.read(): ap_const_lv8_0);
}

void poly1305_hw::thread_select_ln343_fu_3514_p3() {
    select_ln343_fu_3514_p3 = (!icmp_ln343_fu_3498_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln343_fu_3498_p2.read()[0].to_bool())? trunc_ln7_fu_3504_p4.read(): ap_const_lv2_0);
}

void poly1305_hw::thread_select_ln369_fu_3649_p3() {
    select_ln369_fu_3649_p3 = (!icmp_ln369_fu_3634_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln369_fu_3634_p2.read()[0].to_bool())? mulCarry_1_fu_3640_p4.read(): ap_const_lv8_0);
}

void poly1305_hw::thread_select_ln382_fu_3738_p3() {
    select_ln382_fu_3738_p3 = (!icmp_ln382_fu_3722_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln382_fu_3722_p2.read()[0].to_bool())? trunc_ln1_fu_3728_p4.read(): ap_const_lv2_0);
}

void poly1305_hw::thread_select_ln49_fu_3345_p3() {
    select_ln49_fu_3345_p3 = (!tmp_1_fu_3297_p3.read()[0].is_01())? sc_lv<29>(): ((tmp_1_fu_3297_p3.read()[0].to_bool())? sub_ln49_1_fu_3325_p2.read(): zext_ln49_2_fu_3341_p1.read());
}

void poly1305_hw::thread_select_ln513_fu_4268_p3() {
    select_ln513_fu_4268_p3 = (!icmp_ln513_fu_4252_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln513_fu_4252_p2.read()[0].to_bool())? addCarry_4_fu_4258_p4.read(): ap_const_lv8_0);
}

void poly1305_hw::thread_select_ln603_fu_3400_p3() {
    select_ln603_fu_3400_p3 = (!tmp_1_reg_7156.read()[0].is_01())? sc_lv<32>(): ((tmp_1_reg_7156.read()[0].to_bool())? sub_ln603_fu_3394_p2.read(): p_and_f_fu_3376_p3.read());
}

void poly1305_hw::thread_select_ln624_fu_4703_p3() {
    select_ln624_fu_4703_p3 = (!icmp_ln624_fu_4687_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln624_fu_4687_p2.read()[0].to_bool())? trunc_ln8_fu_4693_p4.read(): ap_const_lv2_0);
}

void poly1305_hw::thread_select_ln649_fu_4843_p3() {
    select_ln649_fu_4843_p3 = (!icmp_ln649_fu_4828_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln649_fu_4828_p2.read()[0].to_bool())? mulCarry_3_fu_4834_p4.read(): ap_const_lv8_0);
}

void poly1305_hw::thread_select_ln662_fu_4935_p3() {
    select_ln662_fu_4935_p3 = (!icmp_ln662_fu_4919_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln662_fu_4919_p2.read()[0].to_bool())? trunc_ln2_fu_4925_p4.read(): ap_const_lv2_0);
}

void poly1305_hw::thread_select_ln67_fu_5803_p3() {
    select_ln67_fu_5803_p3 = (!icmp_ln67_fu_5787_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln67_fu_5787_p2.read()[0].to_bool())? trunc_ln6_fu_5793_p4.read(): ap_const_lv2_0);
}

void poly1305_hw::thread_select_ln757_fu_5379_p3() {
    select_ln757_fu_5379_p3 = (!icmp_ln757_fu_5363_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln757_fu_5363_p2.read()[0].to_bool())? addCarry_fu_5369_p4.read(): ap_const_lv8_0);
}

void poly1305_hw::thread_select_ln853_fu_6935_p3() {
    select_ln853_fu_6935_p3 = (!icmp_ln853_fu_6919_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln853_fu_6919_p2.read()[0].to_bool())? trunc_ln10_fu_6925_p4.read(): ap_const_lv2_0);
}

void poly1305_hw::thread_select_ln86_fu_5938_p3() {
    select_ln86_fu_5938_p3 = (!icmp_ln86_fu_5923_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln86_fu_5923_p2.read()[0].to_bool())? mulCarry_fu_5929_p4.read(): ap_const_lv8_0);
}

void poly1305_hw::thread_select_ln99_fu_6027_p3() {
    select_ln99_fu_6027_p3 = (!icmp_ln99_fu_6011_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln99_fu_6011_p2.read()[0].to_bool())? trunc_ln_fu_6017_p4.read(): ap_const_lv2_0);
}

void poly1305_hw::thread_sext_ln135_fu_6099_p1() {
    sext_ln135_fu_6099_p1 = esl_sext<32,7>(i10_0_reg_2657.read());
}

void poly1305_hw::thread_sext_ln156_fu_6160_p1() {
    sext_ln156_fu_6160_p1 = esl_sext<32,7>(i_53_fu_6154_p2.read());
}

void poly1305_hw::thread_sext_ln157_fu_6176_p1() {
    sext_ln157_fu_6176_p1 = esl_sext<8,4>(arr2_q0.read());
}

void poly1305_hw::thread_sext_ln171_fu_6196_p1() {
    sext_ln171_fu_6196_p1 = esl_sext<32,7>(i13_0_reg_2732.read());
}

void poly1305_hw::thread_sext_ln197_fu_6660_p1() {
    sext_ln197_fu_6660_p1 = esl_sext<8,4>(arr2_q0.read());
}

void poly1305_hw::thread_sext_ln217_fu_6364_p1() {
    sext_ln217_fu_6364_p1 = esl_sext<24,18>(mulCarry20_0_reg_2823.read());
}

void poly1305_hw::thread_sext_ln218_1_fu_6402_p1() {
    sext_ln218_1_fu_6402_p1 = esl_sext<26,17>(mul_ln218_fu_6397_p2.read());
}

void poly1305_hw::thread_sext_ln218_fu_6389_p1() {
    sext_ln218_fu_6389_p1 = esl_sext<8,4>(arr2_q0.read());
}

void poly1305_hw::thread_sext_ln219_fu_6456_p1() {
    sext_ln219_fu_6456_p1 = esl_sext<24,18>(mulCarry_5_fu_6449_p3.read());
}

void poly1305_hw::thread_sext_ln240_fu_6350_p1() {
    sext_ln240_fu_6350_p1 = esl_sext<17,9>(fullArr_q0.read());
}

void poly1305_hw::thread_sext_ln241_fu_6308_p1() {
    sext_ln241_fu_6308_p1 = esl_sext<32,7>(add_ln241_fu_6302_p2.read());
}

void poly1305_hw::thread_sext_ln270_fu_6732_p1() {
    sext_ln270_fu_6732_p1 = esl_sext<32,7>(i26_0_reg_2935.read());
}

void poly1305_hw::thread_sext_ln291_fu_6799_p1() {
    sext_ln291_fu_6799_p1 = esl_sext<32,7>(i_73_fu_6793_p2.read());
}

void poly1305_hw::thread_sext_ln292_fu_6815_p1() {
    sext_ln292_fu_6815_p1 = esl_sext<8,4>(arr2_q0.read());
}

void poly1305_hw::thread_sext_ln419_fu_3810_p1() {
    sext_ln419_fu_3810_p1 = esl_sext<32,7>(i55_0_reg_1665.read());
}

void poly1305_hw::thread_sext_ln440_fu_3871_p1() {
    sext_ln440_fu_3871_p1 = esl_sext<32,7>(i_54_fu_3865_p2.read());
}

void poly1305_hw::thread_sext_ln441_fu_3887_p1() {
    sext_ln441_fu_3887_p1 = esl_sext<8,4>(arr2_1_q0.read());
}

void poly1305_hw::thread_sext_ln455_fu_3907_p1() {
    sext_ln455_fu_3907_p1 = esl_sext<32,7>(i58_0_reg_1742.read());
}

void poly1305_hw::thread_sext_ln478_fu_4371_p1() {
    sext_ln478_fu_4371_p1 = esl_sext<8,4>(arr2_1_q0.read());
}

void poly1305_hw::thread_sext_ln498_fu_4075_p1() {
    sext_ln498_fu_4075_p1 = esl_sext<24,18>(mulCarry66_0_reg_1843.read());
}

void poly1305_hw::thread_sext_ln499_1_fu_4113_p1() {
    sext_ln499_1_fu_4113_p1 = esl_sext<26,17>(mul_ln499_fu_4108_p2.read());
}

void poly1305_hw::thread_sext_ln499_fu_4100_p1() {
    sext_ln499_fu_4100_p1 = esl_sext<8,4>(arr2_1_q0.read());
}

void poly1305_hw::thread_sext_ln500_fu_4167_p1() {
    sext_ln500_fu_4167_p1 = esl_sext<24,18>(mulCarry_6_fu_4160_p3.read());
}

void poly1305_hw::thread_sext_ln521_fu_4061_p1() {
    sext_ln521_fu_4061_p1 = esl_sext<17,9>(fullArr_1_q0.read());
}

void poly1305_hw::thread_sext_ln522_fu_4019_p1() {
    sext_ln522_fu_4019_p1 = esl_sext<32,7>(add_ln522_fu_4013_p2.read());
}

void poly1305_hw::thread_sext_ln551_fu_4443_p1() {
    sext_ln551_fu_4443_p1 = esl_sext<32,7>(i72_0_reg_1943.read());
}

void poly1305_hw::thread_sext_ln572_fu_4510_p1() {
    sext_ln572_fu_4510_p1 = esl_sext<32,7>(i_74_fu_4504_p2.read());
}

void poly1305_hw::thread_sext_ln573_fu_4526_p1() {
    sext_ln573_fu_4526_p1 = esl_sext<8,4>(arr2_1_q0.read());
}

void poly1305_hw::thread_sext_ln604_fu_4600_p1() {
    sext_ln604_fu_4600_p1 = esl_sext<64,32>(add_ln_fu_4592_p3.read());
}

void poly1305_hw::thread_sext_ln606_fu_4605_p1() {
    sext_ln606_fu_4605_p1 = esl_sext<64,32>(select_ln603_reg_7208.read());
}

void poly1305_hw::thread_sext_ln609_fu_4626_p1() {
    sext_ln609_fu_4626_p1 = esl_sext<64,32>(i_43_fu_4614_p2.read());
}

void poly1305_hw::thread_sext_ln697_fu_5012_p1() {
    sext_ln697_fu_5012_p1 = esl_sext<32,7>(i101_0_reg_2184.read());
}

void poly1305_hw::thread_sext_ln722_fu_5478_p1() {
    sext_ln722_fu_5478_p1 = esl_sext<8,4>(arr2_2_q0.read());
}

void poly1305_hw::thread_sext_ln742_fu_5186_p1() {
    sext_ln742_fu_5186_p1 = esl_sext<24,18>(mulCarry109_0_reg_2288.read());
}

void poly1305_hw::thread_sext_ln743_1_fu_5224_p1() {
    sext_ln743_1_fu_5224_p1 = esl_sext<26,17>(mul_ln743_fu_5219_p2.read());
}

void poly1305_hw::thread_sext_ln743_fu_5211_p1() {
    sext_ln743_fu_5211_p1 = esl_sext<8,4>(arr2_2_q0.read());
}

void poly1305_hw::thread_sext_ln744_fu_5278_p1() {
    sext_ln744_fu_5278_p1 = esl_sext<24,18>(mulCarry_4_fu_5271_p3.read());
}

void poly1305_hw::thread_sext_ln765_fu_5172_p1() {
    sext_ln765_fu_5172_p1 = esl_sext<17,9>(fullArr_2_q0.read());
}

void poly1305_hw::thread_sext_ln766_fu_5134_p1() {
    sext_ln766_fu_5134_p1 = esl_sext<32,6>(add_ln766_fu_5128_p2.read());
}

void poly1305_hw::thread_sext_ln795_fu_5550_p1() {
    sext_ln795_fu_5550_p1 = esl_sext<32,7>(i115_0_reg_2401.read());
}

void poly1305_hw::thread_sext_ln816_fu_5613_p1() {
    sext_ln816_fu_5613_p1 = esl_sext<32,7>(i_68_fu_5607_p2.read());
}

void poly1305_hw::thread_sext_ln817_fu_5629_p1() {
    sext_ln817_fu_5629_p1 = esl_sext<8,4>(arr2_2_q0.read());
}

void poly1305_hw::thread_shl_ln1_fu_3368_p3() {
    shl_ln1_fu_3368_p3 = esl_concat<28,4>(i30_0_reg_1501.read(), ap_const_lv4_0);
}

void poly1305_hw::thread_shl_ln_fu_5692_p3() {
    shl_ln_fu_5692_p3 = esl_concat<28,4>(i3_0_reg_2481.read(), ap_const_lv4_0);
}

void poly1305_hw::thread_sub_ln149_fu_6132_p2() {
    sub_ln149_fu_6132_p2 = (!ap_const_lv6_21.is_01() || !arr1Zeroes_0_reg_2645.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_21) - sc_biguint<6>(arr1Zeroes_0_reg_2645.read()));
}

void poly1305_hw::thread_sub_ln191_fu_6239_p2() {
    sub_ln191_fu_6239_p2 = (!ap_const_lv7_20.is_01() || !arr1Zeroes_2_reg_2755.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_20) - sc_biguint<7>(arr1Zeroes_2_reg_2755.read()));
}

void poly1305_hw::thread_sub_ln203_fu_6683_p2() {
    sub_ln203_fu_6683_p2 = (!p_pn202_reg_2903.read().is_01() || !zext_ln197_1_reg_8846.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn202_reg_2903.read()) - sc_biguint<32>(zext_ln197_1_reg_8846.read()));
}

void poly1305_hw::thread_sub_ln210_fu_6270_p2() {
    sub_ln210_fu_6270_p2 = (!ap_const_lv7_F.is_01() || !arr1Zeroes_2_reg_2755.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_F) - sc_biguint<7>(arr1Zeroes_2_reg_2755.read()));
}

void poly1305_hw::thread_sub_ln240_fu_6296_p2() {
    sub_ln240_fu_6296_p2 = (!ap_const_lv7_E.is_01() || !arr1Zeroes_2_reg_2755.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_E) - sc_biguint<7>(arr1Zeroes_2_reg_2755.read()));
}

void poly1305_hw::thread_sub_ln254_fu_6636_p2() {
    sub_ln254_fu_6636_p2 = (!p_pn200_reg_2883.read().is_01() || !temp_load_reg_8803.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn200_reg_2883.read()) - sc_biguint<32>(temp_load_reg_8803.read()));
}

void poly1305_hw::thread_sub_ln284_fu_6771_p2() {
    sub_ln284_fu_6771_p2 = (!ap_const_lv6_21.is_01() || !arr1Zeroes_3_reg_2923.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_21) - sc_biguint<6>(arr1Zeroes_3_reg_2923.read()));
}

void poly1305_hw::thread_sub_ln433_fu_3843_p2() {
    sub_ln433_fu_3843_p2 = (!ap_const_lv6_21.is_01() || !arr1Zeroes53_0_reg_1677.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_21) - sc_biguint<6>(arr1Zeroes53_0_reg_1677.read()));
}

void poly1305_hw::thread_sub_ln472_fu_3950_p2() {
    sub_ln472_fu_3950_p2 = (!ap_const_lv7_20.is_01() || !arr1Zeroes53_2_reg_1775.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_20) - sc_biguint<7>(arr1Zeroes53_2_reg_1775.read()));
}

void poly1305_hw::thread_sub_ln484_fu_4394_p2() {
    sub_ln484_fu_4394_p2 = (!p_pn198_reg_1923.read().is_01() || !zext_ln478_1_reg_7692.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn198_reg_1923.read()) - sc_biguint<32>(zext_ln478_1_reg_7692.read()));
}

void poly1305_hw::thread_sub_ln491_fu_3981_p2() {
    sub_ln491_fu_3981_p2 = (!ap_const_lv7_F.is_01() || !arr1Zeroes53_2_reg_1775.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_F) - sc_biguint<7>(arr1Zeroes53_2_reg_1775.read()));
}

void poly1305_hw::thread_sub_ln49_1_fu_3325_p2() {
    sub_ln49_1_fu_3325_p2 = (!ap_const_lv29_0.is_01() || !zext_ln49_fu_3321_p1.read().is_01())? sc_lv<29>(): (sc_biguint<29>(ap_const_lv29_0) - sc_biguint<29>(zext_ln49_fu_3321_p1.read()));
}

void poly1305_hw::thread_sub_ln49_fu_3305_p2() {
    sub_ln49_fu_3305_p2 = (!ap_const_lv32_0.is_01() || !textLength_0_reg_1434.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(textLength_0_reg_1434.read()));
}

void poly1305_hw::thread_sub_ln521_fu_4007_p2() {
    sub_ln521_fu_4007_p2 = (!ap_const_lv7_E.is_01() || !arr1Zeroes53_2_reg_1775.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_E) - sc_biguint<7>(arr1Zeroes53_2_reg_1775.read()));
}

void poly1305_hw::thread_sub_ln535_fu_4347_p2() {
    sub_ln535_fu_4347_p2 = (!p_pn196_reg_1903.read().is_01() || !temp_1_load_reg_7649.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn196_reg_1903.read()) - sc_biguint<32>(temp_1_load_reg_7649.read()));
}

void poly1305_hw::thread_sub_ln565_fu_4482_p2() {
    sub_ln565_fu_4482_p2 = (!ap_const_lv6_21.is_01() || !arr1Zeroes53_3_reg_1955.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_21) - sc_biguint<6>(arr1Zeroes53_3_reg_1955.read()));
}

void poly1305_hw::thread_sub_ln603_fu_3394_p2() {
    sub_ln603_fu_3394_p2 = (!ap_const_lv32_0.is_01() || !p_and_t_fu_3386_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(p_and_t_fu_3386_p3.read()));
}

void poly1305_hw::thread_sub_ln716_fu_5065_p2() {
    sub_ln716_fu_5065_p2 = (!ap_const_lv7_20.is_01() || !zext_ln714_fu_5061_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_20) - sc_biguint<7>(zext_ln714_fu_5061_p1.read()));
}

void poly1305_hw::thread_sub_ln728_fu_5501_p2() {
    sub_ln728_fu_5501_p2 = (!p_pn194_reg_2368.read().is_01() || !zext_ln722_1_reg_8238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn194_reg_2368.read()) - sc_biguint<32>(zext_ln722_1_reg_8238.read()));
}

void poly1305_hw::thread_sub_ln735_fu_5096_p2() {
    sub_ln735_fu_5096_p2 = (!ap_const_lv6_F.is_01() || !arr1Zeroes99_1_reg_2208.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_F) - sc_biguint<6>(arr1Zeroes99_1_reg_2208.read()));
}

void poly1305_hw::thread_sub_ln765_fu_5122_p2() {
    sub_ln765_fu_5122_p2 = (!ap_const_lv6_E.is_01() || !arr1Zeroes99_1_reg_2208.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_E) - sc_biguint<6>(arr1Zeroes99_1_reg_2208.read()));
}

void poly1305_hw::thread_sub_ln779_fu_5454_p2() {
    sub_ln779_fu_5454_p2 = (!p_pn_reg_2348.read().is_01() || !temp_2_load_reg_8195.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn_reg_2348.read()) - sc_biguint<32>(temp_2_load_reg_8195.read()));
}

void poly1305_hw::thread_sub_ln809_fu_5585_p2() {
    sub_ln809_fu_5585_p2 = (!ap_const_lv6_21.is_01() || !arr1Zeroes99_2_reg_2388.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_21) - sc_biguint<6>(arr1Zeroes99_2_reg_2388.read()));
}

void poly1305_hw::thread_sum_1_fu_3482_p2() {
    sum_1_fu_3482_p2 = (!zext_ln342_4_fu_3478_p1.read().is_01() || !zext_ln342_3_fu_3468_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln342_4_fu_3478_p1.read()) + sc_biguint<10>(zext_ln342_3_fu_3468_p1.read()));
}

void poly1305_hw::thread_sum_2_fu_4671_p2() {
    sum_2_fu_4671_p2 = (!zext_ln623_4_fu_4667_p1.read().is_01() || !zext_ln623_3_fu_4657_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln623_4_fu_4667_p1.read()) + sc_biguint<10>(zext_ln623_3_fu_4657_p1.read()));
}

void poly1305_hw::thread_sum_3_fu_6903_p2() {
    sum_3_fu_6903_p2 = (!zext_ln852_4_fu_6899_p1.read().is_01() || !zext_ln852_3_fu_6889_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln852_4_fu_6899_p1.read()) + sc_biguint<10>(zext_ln852_3_fu_6889_p1.read()));
}

void poly1305_hw::thread_sum_fu_5771_p2() {
    sum_fu_5771_p2 = (!zext_ln66_4_fu_5767_p1.read().is_01() || !zext_ln66_3_fu_5757_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln66_4_fu_5767_p1.read()) + sc_biguint<10>(zext_ln66_3_fu_5757_p1.read()));
}

void poly1305_hw::thread_tag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        tag_address0 =  (sc_lv<4>) (zext_ln870_fu_6972_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        tag_address0 =  (sc_lv<4>) (zext_ln852_reg_8980.read());
    } else {
        tag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void poly1305_hw::thread_tag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()))) {
        tag_ce0 = ap_const_logic_1;
    } else {
        tag_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_tag_d0() {
    tag_d0 = (!add_ln859_1_fu_6947_p2.read().is_01() || !s_q0.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln859_1_fu_6947_p2.read()) + sc_biguint<8>(s_q0.read()));
}

void poly1305_hw::thread_tag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        tag_we0 = ap_const_logic_1;
    } else {
        tag_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln529_fu_4326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        temp_1_address0 = temp_1_addr_4_reg_7509.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        temp_1_address0 = temp_1_addr_2_reg_7548.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln473_fu_3971_p1.read());
    } else {
        temp_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        temp_1_address1 = temp_1_addr_4_reg_7509.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        temp_1_address1 = temp_1_addr_3_reg_7605.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        temp_1_address1 =  (sc_lv<6>) (zext_ln512_1_fu_4199_p1.read());
    } else {
        temp_1_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        temp_1_ce0 = ap_const_logic_1;
    } else {
        temp_1_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        temp_1_ce1 = ap_const_logic_1;
    } else {
        temp_1_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        temp_1_d0 = zext_ln500_fu_4171_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        temp_1_d0 = ap_const_lv32_0;
    } else {
        temp_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        temp_1_d1 = add_ln522_1_fu_4300_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        temp_1_d1 = zext_ln519_fu_4276_p1.read();
    } else {
        temp_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln472_fu_3960_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_ln507_fu_4188_p2.read())))) {
        temp_1_we0 = ap_const_logic_1;
    } else {
        temp_1_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        temp_1_we1 = ap_const_logic_1;
    } else {
        temp_1_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln773_fu_5433_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        temp_2_address0 = temp_2_addr_4_reg_8059.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        temp_2_address0 = temp_2_addr_2_reg_8098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln717_fu_5086_p1.read());
    } else {
        temp_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        temp_2_address1 = temp_2_addr_4_reg_8059.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        temp_2_address1 = temp_2_addr_3_reg_8155.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        temp_2_address1 =  (sc_lv<6>) (zext_ln756_1_fu_5310_p1.read());
    } else {
        temp_2_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()))) {
        temp_2_ce0 = ap_const_logic_1;
    } else {
        temp_2_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()))) {
        temp_2_ce1 = ap_const_logic_1;
    } else {
        temp_2_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        temp_2_d0 = zext_ln744_fu_5282_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        temp_2_d0 = ap_const_lv32_0;
    } else {
        temp_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        temp_2_d1 = add_ln766_1_fu_5411_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        temp_2_d1 = zext_ln763_fu_5387_p1.read();
    } else {
        temp_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln716_fu_5075_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_ln751_fu_5299_p2.read())))) {
        temp_2_we0 = ap_const_logic_1;
    } else {
        temp_2_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()))) {
        temp_2_we1 = ap_const_logic_1;
    } else {
        temp_2_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln248_fu_6615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read())) {
        temp_address0 = temp_addr_4_reg_8663.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        temp_address0 = temp_addr_2_reg_8702.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln192_fu_6260_p1.read());
    } else {
        temp_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        temp_address1 = temp_addr_4_reg_8663.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        temp_address1 = temp_addr_3_reg_8759.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        temp_address1 =  (sc_lv<6>) (zext_ln231_1_fu_6488_p1.read());
    } else {
        temp_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()))) {
        temp_ce0 = ap_const_logic_1;
    } else {
        temp_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()))) {
        temp_ce1 = ap_const_logic_1;
    } else {
        temp_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        temp_d0 = zext_ln219_fu_6460_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        temp_d0 = ap_const_lv32_0;
    } else {
        temp_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        temp_d1 = add_ln241_1_fu_6589_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        temp_d1 = zext_ln238_fu_6565_p1.read();
    } else {
        temp_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln191_fu_6249_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_ln226_fu_6477_p2.read())))) {
        temp_we0 = ap_const_logic_1;
    } else {
        temp_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()))) {
        temp_we1 = ap_const_logic_1;
    } else {
        temp_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textBlock_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        textBlock_1_address0 =  (sc_lv<5>) (zext_ln342_fu_3454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        textBlock_1_address0 =  (sc_lv<5>) (zext_ln328_1_fu_3437_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        textBlock_1_address0 =  (sc_lv<5>) (ap_const_lv64_10);
    } else {
        textBlock_1_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_textBlock_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()))) {
        textBlock_1_ce0 = ap_const_logic_1;
    } else {
        textBlock_1_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textBlock_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        textBlock_1_d0 = text_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        textBlock_1_d0 = ap_const_lv8_1;
    } else {
        textBlock_1_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_textBlock_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln327_fu_3415_p2.read())))) {
        textBlock_1_we0 = ap_const_logic_1;
    } else {
        textBlock_1_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textBlock_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        textBlock_2_address0 =  (sc_lv<5>) (zext_ln623_fu_4643_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        textBlock_2_address0 =  (sc_lv<5>) (sext_ln609_fu_4626_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        textBlock_2_address0 =  (sc_lv<5>) (zext_ln604_fu_4609_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        textBlock_2_address0 =  (sc_lv<5>) (sext_ln606_fu_4605_p1.read());
    } else {
        textBlock_2_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_textBlock_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        textBlock_2_ce0 = ap_const_logic_1;
    } else {
        textBlock_2_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textBlock_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        textBlock_2_d0 = ap_const_lv8_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        textBlock_2_d0 = text_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        textBlock_2_d0 = ap_const_lv8_1;
    } else {
        textBlock_2_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_textBlock_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln603_fu_4578_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln608_fu_4620_p2.read())))) {
        textBlock_2_we0 = ap_const_logic_1;
    } else {
        textBlock_2_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textBlock_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        textBlock_address0 =  (sc_lv<5>) (zext_ln66_fu_5743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        textBlock_address0 =  (sc_lv<5>) (zext_ln52_1_fu_5726_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        textBlock_address0 =  (sc_lv<5>) (ap_const_lv64_10);
    } else {
        textBlock_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_textBlock_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()))) {
        textBlock_ce0 = ap_const_logic_1;
    } else {
        textBlock_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textBlock_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        textBlock_d0 = text_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        textBlock_d0 = ap_const_lv8_1;
    } else {
        textBlock_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_textBlock_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_5704_p2.read())))) {
        textBlock_we0 = ap_const_logic_1;
    } else {
        textBlock_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textLength_fu_3133_p2() {
    textLength_fu_3133_p2 = (!zext_ln14_fu_3129_p1.read().is_01() || !textLength_0_reg_1434.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln14_fu_3129_p1.read()) + sc_biguint<32>(textLength_0_reg_1434.read()));
}

void poly1305_hw::thread_text_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        text_address0 =  (sc_lv<10>) (zext_ln52_fu_5721_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        text_address0 =  (sc_lv<10>) (sext_ln604_fu_4600_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        text_address0 =  (sc_lv<10>) (zext_ln328_fu_3432_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        text_address0 =  (sc_lv<10>) (zext_ln22_fu_3159_p1.read());
    } else {
        text_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void poly1305_hw::thread_text_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op224.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()))) {
        text_ce0 = ap_const_logic_1;
    } else {
        text_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_text_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1) && 
         !(esl_seteq<1,1,1>(icmp_ln21_fu_3147_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op224.read())))) {
        text_we0 = ap_const_logic_1;
    } else {
        text_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_tmp_10_fu_3625_p4() {
    tmp_10_fu_3625_p4 = grp_fu_6983_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_13_fu_6001_p4() {
    tmp_13_fu_6001_p4 = addTemp_fu_5995_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_14_fu_3712_p4() {
    tmp_14_fu_3712_p4 = addTemp_1_fu_3706_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_15_fu_4819_p4() {
    tmp_15_fu_4819_p4 = grp_fu_6993_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_17_fu_4909_p4() {
    tmp_17_fu_4909_p4 = addTemp_2_fu_4903_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_18_fu_5053_p3() {
    tmp_18_fu_5053_p3 = boolean98_0_reg_2219.read().range(2, 2);
}

void poly1305_hw::thread_tmp_1_fu_3297_p3() {
    tmp_1_fu_3297_p3 = textLength_0_reg_1434.read().range(31, 31);
}

void poly1305_hw::thread_tmp_21_fu_6231_p3() {
    tmp_21_fu_6231_p3 = boolean_5_reg_2744.read().range(31, 31);
}

void poly1305_hw::thread_tmp_22_fu_3942_p3() {
    tmp_22_fu_3942_p3 = boolean52_5_reg_1764.read().range(31, 31);
}

void poly1305_hw::thread_tmp_24_fu_5353_p4() {
    tmp_24_fu_5353_p4 = addTemp_3_fu_5341_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_25_fu_5524_p3() {
    tmp_25_fu_5524_p3 = arr1_2_q0.read().range(31, 31);
}

void poly1305_hw::thread_tmp_29_fu_6531_p4() {
    tmp_29_fu_6531_p4 = addTemp_4_fu_6519_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_30_fu_4242_p4() {
    tmp_30_fu_4242_p4 = addTemp_5_fu_4230_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_31_fu_6706_p3() {
    tmp_31_fu_6706_p3 = arr1_q0.read().range(31, 31);
}

void poly1305_hw::thread_tmp_32_fu_4417_p3() {
    tmp_32_fu_4417_p3 = arr1_1_q0.read().range(31, 31);
}

void poly1305_hw::thread_tmp_35_fu_6909_p4() {
    tmp_35_fu_6909_p4 = sum_3_fu_6903_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_4_fu_3311_p4() {
    tmp_4_fu_3311_p4 = sub_ln49_fu_3305_p2.read().range(31, 4);
}

void poly1305_hw::thread_tmp_5_fu_3331_p4() {
    tmp_5_fu_3331_p4 = textLength_0_reg_1434.read().range(31, 4);
}

void poly1305_hw::thread_tmp_6_fu_5777_p4() {
    tmp_6_fu_5777_p4 = sum_fu_5771_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_7_fu_3488_p4() {
    tmp_7_fu_3488_p4 = sum_1_fu_3482_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_8_fu_4677_p4() {
    tmp_8_fu_4677_p4 = sum_2_fu_4671_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_9_fu_5914_p4() {
    tmp_9_fu_5914_p4 = grp_fu_7003_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_last_V_1_fu_6977_p2() {
    tmp_last_V_1_fu_6977_p2 = (!i122_0_reg_3061.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(i122_0_reg_3061.read() == ap_const_lv5_F);
}

void poly1305_hw::thread_trunc_ln10_fu_6925_p4() {
    trunc_ln10_fu_6925_p4 = sum_3_fu_6903_p2.read().range(9, 8);
}

void poly1305_hw::thread_trunc_ln1_fu_3728_p4() {
    trunc_ln1_fu_3728_p4 = addTemp_1_fu_3706_p2.read().range(9, 8);
}

void poly1305_hw::thread_trunc_ln218_1_fu_6385_p1() {
    trunc_ln218_1_fu_6385_p1 = mulCarry20_0_reg_2823.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln218_fu_6406_p1() {
    trunc_ln218_fu_6406_p1 = mul_ln218_fu_6397_p2.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln231_fu_6515_p1() {
    trunc_ln231_fu_6515_p1 = temp_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln247_fu_6611_p1() {
    trunc_ln247_fu_6611_p1 = i_66_fu_6605_p2.read().range(6-1, 0);
}

void poly1305_hw::thread_trunc_ln2_fu_4925_p4() {
    trunc_ln2_fu_4925_p4 = addTemp_2_fu_4903_p2.read().range(9, 8);
}

void poly1305_hw::thread_trunc_ln314_fu_6858_p1() {
    trunc_ln314_fu_6858_p1 = arr1_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln368_fu_3622_p1() {
    trunc_ln368_fu_3622_p1 = grp_fu_6983_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln37_fu_3209_p1() {
    trunc_ln37_fu_3209_p1 = r_q0.read().range(4-1, 0);
}

void poly1305_hw::thread_trunc_ln38_fu_3213_p1() {
    trunc_ln38_fu_3213_p1 = r_q1.read().range(4-1, 0);
}

void poly1305_hw::thread_trunc_ln39_fu_3217_p1() {
    trunc_ln39_fu_3217_p1 = r_q1.read().range(4-1, 0);
}

void poly1305_hw::thread_trunc_ln40_fu_3221_p1() {
    trunc_ln40_fu_3221_p1 = r_q0.read().range(4-1, 0);
}

void poly1305_hw::thread_trunc_ln499_1_fu_4096_p1() {
    trunc_ln499_1_fu_4096_p1 = mulCarry66_0_reg_1843.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln499_fu_4117_p1() {
    trunc_ln499_fu_4117_p1 = mul_ln499_fu_4108_p2.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln512_fu_4226_p1() {
    trunc_ln512_fu_4226_p1 = temp_1_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln528_fu_4322_p1() {
    trunc_ln528_fu_4322_p1 = i_67_fu_4316_p2.read().range(6-1, 0);
}

void poly1305_hw::thread_trunc_ln594_fu_4569_p1() {
    trunc_ln594_fu_4569_p1 = arr1_1_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln603_fu_3383_p1() {
    trunc_ln603_fu_3383_p1 = sub_ln49_reg_7161.read().range(4-1, 0);
}

void poly1305_hw::thread_trunc_ln604_1_fu_4589_p1() {
    trunc_ln604_1_fu_4589_p1 = select_ln49_reg_7166.read().range(28-1, 0);
}

void poly1305_hw::thread_trunc_ln604_fu_3407_p1() {
    trunc_ln604_fu_3407_p1 = select_ln603_fu_3400_p3.read().range(5-1, 0);
}

void poly1305_hw::thread_trunc_ln648_fu_4816_p1() {
    trunc_ln648_fu_4816_p1 = grp_fu_6993_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln6_fu_5793_p4() {
    trunc_ln6_fu_5793_p4 = sum_fu_5771_p2.read().range(9, 8);
}

void poly1305_hw::thread_trunc_ln743_1_fu_5207_p1() {
    trunc_ln743_1_fu_5207_p1 = mulCarry109_0_reg_2288.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln743_fu_5228_p1() {
    trunc_ln743_fu_5228_p1 = mul_ln743_fu_5219_p2.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln756_fu_5337_p1() {
    trunc_ln756_fu_5337_p1 = temp_2_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln7_fu_3504_p4() {
    trunc_ln7_fu_3504_p4 = sum_1_fu_3482_p2.read().range(9, 8);
}

void poly1305_hw::thread_trunc_ln839_fu_5672_p1() {
    trunc_ln839_fu_5672_p1 = arr1_2_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln85_fu_5911_p1() {
    trunc_ln85_fu_5911_p1 = grp_fu_7003_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln8_fu_4693_p4() {
    trunc_ln8_fu_4693_p4 = sum_2_fu_4671_p2.read().range(9, 8);
}

void poly1305_hw::thread_trunc_ln9_fu_3139_p1() {
    trunc_ln9_fu_3139_p1 = textLength_0_reg_1434.read().range(4-1, 0);
}

void poly1305_hw::thread_trunc_ln_fu_6017_p4() {
    trunc_ln_fu_6017_p4 = addTemp_fu_5995_p2.read().range(9, 8);
}

void poly1305_hw::thread_xor_ln33_fu_3198_p2() {
    xor_ln33_fu_3198_p2 = (i2_0_reg_1479.read() ^ ap_const_lv5_10);
}

void poly1305_hw::thread_zext_ln123_1_fu_6089_p1() {
    zext_ln123_1_fu_6089_p1 = esl_zext<64,6>(i9_0_reg_2634.read());
}

void poly1305_hw::thread_zext_ln123_fu_6094_p1() {
    zext_ln123_fu_6094_p1 = esl_zext<32,8>(mul_q0.read());
}

void poly1305_hw::thread_zext_ln135_fu_6128_p1() {
    zext_ln135_fu_6128_p1 = esl_zext<7,6>(arr1Zeroes_0_reg_2645.read());
}

void poly1305_hw::thread_zext_ln136_fu_6117_p1() {
    zext_ln136_fu_6117_p1 = esl_zext<64,32>(sext_ln135_fu_6099_p1.read());
}

void poly1305_hw::thread_zext_ln149_fu_6138_p1() {
    zext_ln149_fu_6138_p1 = esl_zext<7,6>(sub_ln149_fu_6132_p2.read());
}

void poly1305_hw::thread_zext_ln14_fu_3129_p1() {
    zext_ln14_fu_3129_p1 = esl_zext<32,8>(input_stream_V_data_dout.read());
}

void poly1305_hw::thread_zext_ln157_1_fu_6180_p1() {
    zext_ln157_1_fu_6180_p1 = esl_zext<32,8>(sext_ln157_fu_6176_p1.read());
}

void poly1305_hw::thread_zext_ln157_fu_6170_p1() {
    zext_ln157_fu_6170_p1 = esl_zext<64,32>(sext_ln156_fu_6160_p1.read());
}

void poly1305_hw::thread_zext_ln172_fu_6208_p1() {
    zext_ln172_fu_6208_p1 = esl_zext<64,32>(sext_ln171_fu_6196_p1.read());
}

void poly1305_hw::thread_zext_ln191_fu_6245_p1() {
    zext_ln191_fu_6245_p1 = esl_zext<7,6>(k16_0_reg_2766.read());
}

void poly1305_hw::thread_zext_ln192_fu_6260_p1() {
    zext_ln192_fu_6260_p1 = esl_zext<64,6>(k16_0_reg_2766.read());
}

void poly1305_hw::thread_zext_ln197_1_fu_6664_p1() {
    zext_ln197_1_fu_6664_p1 = esl_zext<32,8>(sext_ln197_fu_6660_p1.read());
}

void poly1305_hw::thread_zext_ln197_fu_6654_p1() {
    zext_ln197_fu_6654_p1 = esl_zext<64,5>(i17_0_reg_2892.read());
}

void poly1305_hw::thread_zext_ln202_fu_6674_p1() {
    zext_ln202_fu_6674_p1 = esl_zext<64,5>(i_61_reg_8824.read());
}

void poly1305_hw::thread_zext_ln210_fu_6276_p1() {
    zext_ln210_fu_6276_p1 = esl_zext<7,4>(k18_0_reg_2777.read());
}

void poly1305_hw::thread_zext_ln211_fu_6291_p1() {
    zext_ln211_fu_6291_p1 = esl_zext<64,4>(k18_0_reg_2777.read());
}

void poly1305_hw::thread_zext_ln215_1_fu_6321_p1() {
    zext_ln215_1_fu_6321_p1 = esl_zext<6,4>(i19_0_reg_2800.read());
}

void poly1305_hw::thread_zext_ln215_2_fu_6325_p1() {
    zext_ln215_2_fu_6325_p1 = esl_zext<7,4>(i19_0_reg_2800.read());
}

void poly1305_hw::thread_zext_ln215_fu_6317_p1() {
    zext_ln215_fu_6317_p1 = esl_zext<5,4>(i19_0_reg_2800.read());
}

void poly1305_hw::thread_zext_ln217_fu_6410_p1() {
    zext_ln217_fu_6410_p1 = esl_zext<26,24>(sext_ln217_reg_8707.read());
}

void poly1305_hw::thread_zext_ln218_1_fu_6380_p1() {
    zext_ln218_1_fu_6380_p1 = esl_zext<64,5>(j21_0_reg_2834.read());
}

void poly1305_hw::thread_zext_ln218_fu_6340_p1() {
    zext_ln218_fu_6340_p1 = esl_zext<64,4>(i19_0_reg_2800.read());
}

void poly1305_hw::thread_zext_ln219_fu_6460_p1() {
    zext_ln219_fu_6460_p1 = esl_zext<32,24>(sext_ln219_fu_6456_p1.read());
}

void poly1305_hw::thread_zext_ln21_fu_3143_p1() {
    zext_ln21_fu_3143_p1 = esl_zext<32,31>(i_0_reg_1457.read());
}

void poly1305_hw::thread_zext_ln227_fu_6359_p1() {
    zext_ln227_fu_6359_p1 = esl_zext<64,6>(add_ln227_fu_6354_p2.read());
}

void poly1305_hw::thread_zext_ln22_fu_3159_p1() {
    zext_ln22_fu_3159_p1 = esl_zext<64,31>(i_0_reg_1457.read());
}

void poly1305_hw::thread_zext_ln231_1_fu_6488_p1() {
    zext_ln231_1_fu_6488_p1 = esl_zext<64,5>(add_ln231_fu_6483_p2.read());
}

void poly1305_hw::thread_zext_ln231_2_fu_6496_p1() {
    zext_ln231_2_fu_6496_p1 = esl_zext<9,8>(addCarry_7_reg_2811.read());
}

void poly1305_hw::thread_zext_ln231_3_fu_6511_p1() {
    zext_ln231_3_fu_6511_p1 = esl_zext<32,9>(add_ln231_1_fu_6505_p2.read());
}

void poly1305_hw::thread_zext_ln231_fu_6493_p1() {
    zext_ln231_fu_6493_p1 = esl_zext<9,8>(add_ln218_1_reg_8730.read());
}

void poly1305_hw::thread_zext_ln238_fu_6565_p1() {
    zext_ln238_fu_6565_p1 = esl_zext<32,8>(add_ln231_3_fu_6525_p2.read());
}

void poly1305_hw::thread_zext_ln241_1_fu_6312_p1() {
    zext_ln241_1_fu_6312_p1 = esl_zext<64,32>(sext_ln241_fu_6308_p1.read());
}

void poly1305_hw::thread_zext_ln241_fu_6586_p1() {
    zext_ln241_fu_6586_p1 = esl_zext<32,8>(select_ln232_reg_8764.read());
}

void poly1305_hw::thread_zext_ln247_fu_6596_p1() {
    zext_ln247_fu_6596_p1 = esl_zext<7,6>(i24_0_reg_2872.read());
}

void poly1305_hw::thread_zext_ln248_fu_6615_p1() {
    zext_ln248_fu_6615_p1 = esl_zext<64,6>(i24_0_reg_2872.read());
}

void poly1305_hw::thread_zext_ln253_fu_6627_p1() {
    zext_ln253_fu_6627_p1 = esl_zext<64,7>(i_66_reg_8777.read());
}

void poly1305_hw::thread_zext_ln25_fu_3176_p1() {
    zext_ln25_fu_3176_p1 = esl_zext<64,6>(i1_0_reg_1468.read());
}

void poly1305_hw::thread_zext_ln261_fu_6701_p1() {
    zext_ln261_fu_6701_p1 = esl_zext<64,6>(i25_0_reg_2912.read());
}

void poly1305_hw::thread_zext_ln263_fu_6721_p1() {
    zext_ln263_fu_6721_p1 = esl_zext<64,6>(i_69_reg_8867.read());
}

void poly1305_hw::thread_zext_ln270_fu_6767_p1() {
    zext_ln270_fu_6767_p1 = esl_zext<7,6>(arr1Zeroes_3_reg_2923.read());
}

void poly1305_hw::thread_zext_ln271_fu_6750_p1() {
    zext_ln271_fu_6750_p1 = esl_zext<64,32>(sext_ln270_fu_6732_p1.read());
}

void poly1305_hw::thread_zext_ln284_fu_6777_p1() {
    zext_ln284_fu_6777_p1 = esl_zext<7,6>(sub_ln284_fu_6771_p2.read());
}

void poly1305_hw::thread_zext_ln292_1_fu_6819_p1() {
    zext_ln292_1_fu_6819_p1 = esl_zext<32,8>(sext_ln292_fu_6815_p1.read());
}

void poly1305_hw::thread_zext_ln292_fu_6809_p1() {
    zext_ln292_fu_6809_p1 = esl_zext<64,32>(sext_ln291_fu_6799_p1.read());
}

void poly1305_hw::thread_zext_ln314_fu_6853_p1() {
    zext_ln314_fu_6853_p1 = esl_zext<64,5>(i29_0_reg_3027.read());
}

void poly1305_hw::thread_zext_ln325_fu_3353_p1() {
    zext_ln325_fu_3353_p1 = esl_zext<29,28>(i30_0_reg_1501.read());
}

void poly1305_hw::thread_zext_ln327_fu_3411_p1() {
    zext_ln327_fu_3411_p1 = esl_zext<32,5>(j32_0_reg_1524.read());
}

void poly1305_hw::thread_zext_ln328_1_fu_3437_p1() {
    zext_ln328_1_fu_3437_p1 = esl_zext<64,5>(j32_0_reg_1524.read());
}

void poly1305_hw::thread_zext_ln328_fu_3432_p1() {
    zext_ln328_fu_3432_p1 = esl_zext<64,32>(add_ln328_fu_3427_p2.read());
}

void poly1305_hw::thread_zext_ln32_fu_3193_p1() {
    zext_ln32_fu_3193_p1 = esl_zext<64,5>(i2_0_reg_1479.read());
}

void poly1305_hw::thread_zext_ln33_fu_3204_p1() {
    zext_ln33_fu_3204_p1 = esl_zext<64,5>(xor_ln33_fu_3198_p2.read());
}

void poly1305_hw::thread_zext_ln341_fu_3522_p1() {
    zext_ln341_fu_3522_p1 = esl_zext<8,2>(addCarry34_0_reg_1536.read());
}

void poly1305_hw::thread_zext_ln342_1_fu_3460_p1() {
    zext_ln342_1_fu_3460_p1 = esl_zext<9,8>(textBlock_1_q0.read());
}

void poly1305_hw::thread_zext_ln342_2_fu_3464_p1() {
    zext_ln342_2_fu_3464_p1 = esl_zext<9,8>(acc_q0.read());
}

void poly1305_hw::thread_zext_ln342_3_fu_3468_p1() {
    zext_ln342_3_fu_3468_p1 = esl_zext<10,2>(addCarry34_0_reg_1536.read());
}

void poly1305_hw::thread_zext_ln342_4_fu_3478_p1() {
    zext_ln342_4_fu_3478_p1 = esl_zext<10,9>(add_ln342_fu_3472_p2.read());
}

void poly1305_hw::thread_zext_ln342_fu_3454_p1() {
    zext_ln342_fu_3454_p1 = esl_zext<64,5>(j36_0_reg_1548.read());
}

void poly1305_hw::thread_zext_ln361_fu_3551_p1() {
    zext_ln361_fu_3551_p1 = esl_zext<64,6>(k40_0_reg_1559.read());
}

void poly1305_hw::thread_zext_ln365_fu_3556_p1() {
    zext_ln365_fu_3556_p1 = esl_zext<6,5>(i41_0_reg_1582.read());
}

void poly1305_hw::thread_zext_ln367_fu_3784_p1() {
    zext_ln367_fu_3784_p1 = esl_zext<8,2>(addCarry34_5_reg_1643.read());
}

void poly1305_hw::thread_zext_ln368_3_fu_3572_p1() {
    zext_ln368_3_fu_3572_p1 = esl_zext<64,5>(i41_0_reg_1582.read());
}

void poly1305_hw::thread_zext_ln368_4_fu_3609_p1() {
    zext_ln368_4_fu_3609_p1 = esl_zext<64,5>(j43_0_reg_1618.read());
}

void poly1305_hw::thread_zext_ln368_fu_3577_p1() {
    zext_ln368_fu_3577_p1 = esl_zext<16,8>(r_q1.read());
}

void poly1305_hw::thread_zext_ln377_fu_3592_p1() {
    zext_ln377_fu_3592_p1 = esl_zext<64,6>(add_ln377_fu_3587_p2.read());
}

void poly1305_hw::thread_zext_ln37_fu_3225_p1() {
    zext_ln37_fu_3225_p1 = esl_zext<8,4>(trunc_ln37_reg_7080.read());
}

void poly1305_hw::thread_zext_ln381_1_fu_3680_p1() {
    zext_ln381_1_fu_3680_p1 = esl_zext<64,5>(add_ln381_fu_3674_p2.read());
}

void poly1305_hw::thread_zext_ln381_2_fu_3688_p1() {
    zext_ln381_2_fu_3688_p1 = esl_zext<9,8>(mul_1_q1.read());
}

void poly1305_hw::thread_zext_ln381_3_fu_3692_p1() {
    zext_ln381_3_fu_3692_p1 = esl_zext<9,8>(addCarry34_3_reg_1594.read());
}

void poly1305_hw::thread_zext_ln381_4_fu_3702_p1() {
    zext_ln381_4_fu_3702_p1 = esl_zext<10,9>(add_ln381_1_fu_3696_p2.read());
}

void poly1305_hw::thread_zext_ln381_fu_3685_p1() {
    zext_ln381_fu_3685_p1 = esl_zext<10,8>(trunc_ln368_reg_7314.read());
}

void poly1305_hw::thread_zext_ln382_fu_3746_p1() {
    zext_ln382_fu_3746_p1 = esl_zext<8,2>(select_ln382_fu_3738_p3.read());
}

void poly1305_hw::thread_zext_ln38_fu_3239_p1() {
    zext_ln38_fu_3239_p1 = esl_zext<8,4>(trunc_ln38_reg_7085.read());
}

void poly1305_hw::thread_zext_ln39_fu_3243_p1() {
    zext_ln39_fu_3243_p1 = esl_zext<8,4>(trunc_ln39_reg_7102.read());
}

void poly1305_hw::thread_zext_ln407_1_fu_3800_p1() {
    zext_ln407_1_fu_3800_p1 = esl_zext<64,6>(i48_0_reg_1654.read());
}

void poly1305_hw::thread_zext_ln407_fu_3805_p1() {
    zext_ln407_fu_3805_p1 = esl_zext<32,8>(mul_1_q0.read());
}

void poly1305_hw::thread_zext_ln40_fu_3247_p1() {
    zext_ln40_fu_3247_p1 = esl_zext<8,4>(trunc_ln40_reg_7107.read());
}

void poly1305_hw::thread_zext_ln419_fu_3839_p1() {
    zext_ln419_fu_3839_p1 = esl_zext<7,6>(arr1Zeroes53_0_reg_1677.read());
}

void poly1305_hw::thread_zext_ln420_fu_3828_p1() {
    zext_ln420_fu_3828_p1 = esl_zext<64,32>(sext_ln419_fu_3810_p1.read());
}

void poly1305_hw::thread_zext_ln433_fu_3849_p1() {
    zext_ln433_fu_3849_p1 = esl_zext<7,6>(sub_ln433_fu_3843_p2.read());
}

void poly1305_hw::thread_zext_ln441_1_fu_3891_p1() {
    zext_ln441_1_fu_3891_p1 = esl_zext<32,8>(sext_ln441_fu_3887_p1.read());
}

void poly1305_hw::thread_zext_ln441_fu_3881_p1() {
    zext_ln441_fu_3881_p1 = esl_zext<64,32>(sext_ln440_fu_3871_p1.read());
}

void poly1305_hw::thread_zext_ln456_fu_3919_p1() {
    zext_ln456_fu_3919_p1 = esl_zext<64,32>(sext_ln455_fu_3907_p1.read());
}

void poly1305_hw::thread_zext_ln46_fu_3281_p1() {
    zext_ln46_fu_3281_p1 = esl_zext<64,5>(phi_ln46_reg_1490.read());
}

void poly1305_hw::thread_zext_ln472_fu_3956_p1() {
    zext_ln472_fu_3956_p1 = esl_zext<7,6>(k61_0_reg_1786.read());
}

void poly1305_hw::thread_zext_ln473_fu_3971_p1() {
    zext_ln473_fu_3971_p1 = esl_zext<64,6>(k61_0_reg_1786.read());
}

void poly1305_hw::thread_zext_ln478_1_fu_4375_p1() {
    zext_ln478_1_fu_4375_p1 = esl_zext<32,8>(sext_ln478_fu_4371_p1.read());
}

void poly1305_hw::thread_zext_ln478_fu_4365_p1() {
    zext_ln478_fu_4365_p1 = esl_zext<64,5>(i62_0_reg_1912.read());
}

void poly1305_hw::thread_zext_ln483_fu_4385_p1() {
    zext_ln483_fu_4385_p1 = esl_zext<64,5>(i_62_reg_7670.read());
}

void poly1305_hw::thread_zext_ln491_fu_3987_p1() {
    zext_ln491_fu_3987_p1 = esl_zext<7,4>(k64_0_reg_1797.read());
}

void poly1305_hw::thread_zext_ln492_fu_4002_p1() {
    zext_ln492_fu_4002_p1 = esl_zext<64,4>(k64_0_reg_1797.read());
}

void poly1305_hw::thread_zext_ln496_1_fu_4032_p1() {
    zext_ln496_1_fu_4032_p1 = esl_zext<6,4>(i65_0_reg_1808.read());
}

void poly1305_hw::thread_zext_ln496_2_fu_4036_p1() {
    zext_ln496_2_fu_4036_p1 = esl_zext<7,4>(i65_0_reg_1808.read());
}

void poly1305_hw::thread_zext_ln496_fu_4028_p1() {
    zext_ln496_fu_4028_p1 = esl_zext<5,4>(i65_0_reg_1808.read());
}

void poly1305_hw::thread_zext_ln498_fu_4121_p1() {
    zext_ln498_fu_4121_p1 = esl_zext<26,24>(sext_ln498_reg_7553.read());
}

void poly1305_hw::thread_zext_ln499_1_fu_4091_p1() {
    zext_ln499_1_fu_4091_p1 = esl_zext<64,5>(j67_0_reg_1831.read());
}

void poly1305_hw::thread_zext_ln499_fu_4051_p1() {
    zext_ln499_fu_4051_p1 = esl_zext<64,4>(i65_0_reg_1808.read());
}

void poly1305_hw::thread_zext_ln49_1_fu_5677_p1() {
    zext_ln49_1_fu_5677_p1 = esl_zext<29,28>(i3_0_reg_2481.read());
}

void poly1305_hw::thread_zext_ln49_2_fu_3341_p1() {
    zext_ln49_2_fu_3341_p1 = esl_zext<29,28>(tmp_5_fu_3331_p4.read());
}

void poly1305_hw::thread_zext_ln49_fu_3321_p1() {
    zext_ln49_fu_3321_p1 = esl_zext<29,28>(tmp_4_fu_3311_p4.read());
}

void poly1305_hw::thread_zext_ln500_fu_4171_p1() {
    zext_ln500_fu_4171_p1 = esl_zext<32,24>(sext_ln500_fu_4167_p1.read());
}

void poly1305_hw::thread_zext_ln508_fu_4070_p1() {
    zext_ln508_fu_4070_p1 = esl_zext<64,6>(add_ln508_fu_4065_p2.read());
}

void poly1305_hw::thread_zext_ln512_1_fu_4199_p1() {
    zext_ln512_1_fu_4199_p1 = esl_zext<64,5>(add_ln512_fu_4194_p2.read());
}

void poly1305_hw::thread_zext_ln512_2_fu_4207_p1() {
    zext_ln512_2_fu_4207_p1 = esl_zext<9,8>(addCarry34_7_reg_1854.read());
}

void poly1305_hw::thread_zext_ln512_3_fu_4222_p1() {
    zext_ln512_3_fu_4222_p1 = esl_zext<32,9>(add_ln512_1_fu_4216_p2.read());
}

void poly1305_hw::thread_zext_ln512_fu_4204_p1() {
    zext_ln512_fu_4204_p1 = esl_zext<9,8>(add_ln499_1_reg_7576.read());
}

void poly1305_hw::thread_zext_ln519_fu_4276_p1() {
    zext_ln519_fu_4276_p1 = esl_zext<32,8>(add_ln512_3_fu_4236_p2.read());
}

void poly1305_hw::thread_zext_ln51_fu_5700_p1() {
    zext_ln51_fu_5700_p1 = esl_zext<32,5>(j_0_reg_2504.read());
}

void poly1305_hw::thread_zext_ln522_1_fu_4023_p1() {
    zext_ln522_1_fu_4023_p1 = esl_zext<64,32>(sext_ln522_fu_4019_p1.read());
}

void poly1305_hw::thread_zext_ln522_fu_4297_p1() {
    zext_ln522_fu_4297_p1 = esl_zext<32,8>(select_ln513_reg_7610.read());
}

void poly1305_hw::thread_zext_ln528_fu_4307_p1() {
    zext_ln528_fu_4307_p1 = esl_zext<7,6>(i70_0_reg_1892.read());
}

void poly1305_hw::thread_zext_ln529_fu_4326_p1() {
    zext_ln529_fu_4326_p1 = esl_zext<64,6>(i70_0_reg_1892.read());
}

void poly1305_hw::thread_zext_ln52_1_fu_5726_p1() {
    zext_ln52_1_fu_5726_p1 = esl_zext<64,5>(j_0_reg_2504.read());
}

void poly1305_hw::thread_zext_ln52_fu_5721_p1() {
    zext_ln52_fu_5721_p1 = esl_zext<64,32>(add_ln52_fu_5716_p2.read());
}

void poly1305_hw::thread_zext_ln534_fu_4338_p1() {
    zext_ln534_fu_4338_p1 = esl_zext<64,7>(i_67_reg_7623.read());
}

void poly1305_hw::thread_zext_ln542_fu_4412_p1() {
    zext_ln542_fu_4412_p1 = esl_zext<64,6>(i71_0_reg_1932.read());
}

void poly1305_hw::thread_zext_ln544_fu_4432_p1() {
    zext_ln544_fu_4432_p1 = esl_zext<64,6>(i_70_reg_7713.read());
}

void poly1305_hw::thread_zext_ln551_fu_4478_p1() {
    zext_ln551_fu_4478_p1 = esl_zext<7,6>(arr1Zeroes53_3_reg_1955.read());
}

void poly1305_hw::thread_zext_ln552_fu_4461_p1() {
    zext_ln552_fu_4461_p1 = esl_zext<64,32>(sext_ln551_fu_4443_p1.read());
}

void poly1305_hw::thread_zext_ln565_fu_4488_p1() {
    zext_ln565_fu_4488_p1 = esl_zext<7,6>(sub_ln565_fu_4482_p2.read());
}

void poly1305_hw::thread_zext_ln573_1_fu_4530_p1() {
    zext_ln573_1_fu_4530_p1 = esl_zext<32,8>(sext_ln573_fu_4526_p1.read());
}

void poly1305_hw::thread_zext_ln573_fu_4520_p1() {
    zext_ln573_fu_4520_p1 = esl_zext<64,32>(sext_ln572_fu_4510_p1.read());
}

void poly1305_hw::thread_zext_ln594_fu_4564_p1() {
    zext_ln594_fu_4564_p1 = esl_zext<64,5>(i75_0_reg_2047.read());
}

void poly1305_hw::thread_zext_ln603_fu_4574_p1() {
    zext_ln603_fu_4574_p1 = esl_zext<5,4>(i77_0_reg_2058.read());
}

void poly1305_hw::thread_zext_ln604_fu_4609_p1() {
    zext_ln604_fu_4609_p1 = esl_zext<64,4>(i77_0_reg_2058.read());
}

void poly1305_hw::thread_zext_ln622_fu_4711_p1() {
    zext_ln622_fu_4711_p1 = esl_zext<8,2>(addCarry80_0_reg_2090.read());
}

void poly1305_hw::thread_zext_ln623_1_fu_4649_p1() {
    zext_ln623_1_fu_4649_p1 = esl_zext<9,8>(textBlock_2_q0.read());
}

void poly1305_hw::thread_zext_ln623_2_fu_4653_p1() {
    zext_ln623_2_fu_4653_p1 = esl_zext<9,8>(acc_q0.read());
}

void poly1305_hw::thread_zext_ln623_3_fu_4657_p1() {
    zext_ln623_3_fu_4657_p1 = esl_zext<10,2>(addCarry80_0_reg_2090.read());
}

void poly1305_hw::thread_zext_ln623_4_fu_4667_p1() {
    zext_ln623_4_fu_4667_p1 = esl_zext<10,9>(add_ln623_fu_4661_p2.read());
}

void poly1305_hw::thread_zext_ln623_fu_4643_p1() {
    zext_ln623_fu_4643_p1 = esl_zext<64,5>(j82_0_reg_2079.read());
}

void poly1305_hw::thread_zext_ln641_fu_4740_p1() {
    zext_ln641_fu_4740_p1 = esl_zext<64,6>(k86_0_reg_2102.read());
}

void poly1305_hw::thread_zext_ln645_fu_4750_p1() {
    zext_ln645_fu_4750_p1 = esl_zext<6,5>(i87_0_reg_2113.read());
}

void poly1305_hw::thread_zext_ln647_fu_4981_p1() {
    zext_ln647_fu_4981_p1 = esl_zext<8,2>(addCarry80_5_reg_2162.read());
}

void poly1305_hw::thread_zext_ln648_3_fu_4766_p1() {
    zext_ln648_3_fu_4766_p1 = esl_zext<64,5>(i87_0_reg_2113.read());
}

void poly1305_hw::thread_zext_ln648_4_fu_4803_p1() {
    zext_ln648_4_fu_4803_p1 = esl_zext<64,5>(j89_0_reg_2125.read());
}

void poly1305_hw::thread_zext_ln648_fu_4771_p1() {
    zext_ln648_fu_4771_p1 = esl_zext<16,8>(r_q0.read());
}

void poly1305_hw::thread_zext_ln657_fu_4786_p1() {
    zext_ln657_fu_4786_p1 = esl_zext<64,6>(add_ln657_fu_4781_p2.read());
}

void poly1305_hw::thread_zext_ln65_fu_5811_p1() {
    zext_ln65_fu_5811_p1 = esl_zext<8,2>(addCarry_0_reg_2527.read());
}

void poly1305_hw::thread_zext_ln661_1_fu_4874_p1() {
    zext_ln661_1_fu_4874_p1 = esl_zext<64,5>(add_ln661_fu_4868_p2.read());
}

void poly1305_hw::thread_zext_ln661_2_fu_4885_p1() {
    zext_ln661_2_fu_4885_p1 = esl_zext<9,8>(mul_2_q1.read());
}

void poly1305_hw::thread_zext_ln661_3_fu_4889_p1() {
    zext_ln661_3_fu_4889_p1 = esl_zext<9,8>(addCarry80_2_fu_294.read());
}

void poly1305_hw::thread_zext_ln661_4_fu_4899_p1() {
    zext_ln661_4_fu_4899_p1 = esl_zext<10,9>(add_ln661_1_fu_4893_p2.read());
}

void poly1305_hw::thread_zext_ln661_fu_4882_p1() {
    zext_ln661_fu_4882_p1 = esl_zext<10,8>(trunc_ln648_reg_7934.read());
}

void poly1305_hw::thread_zext_ln662_fu_4943_p1() {
    zext_ln662_fu_4943_p1 = esl_zext<8,2>(select_ln662_fu_4935_p3.read());
}

void poly1305_hw::thread_zext_ln66_1_fu_5749_p1() {
    zext_ln66_1_fu_5749_p1 = esl_zext<9,8>(textBlock_q0.read());
}

void poly1305_hw::thread_zext_ln66_2_fu_5753_p1() {
    zext_ln66_2_fu_5753_p1 = esl_zext<9,8>(acc_q0.read());
}

void poly1305_hw::thread_zext_ln66_3_fu_5757_p1() {
    zext_ln66_3_fu_5757_p1 = esl_zext<10,2>(addCarry_0_reg_2527.read());
}

void poly1305_hw::thread_zext_ln66_4_fu_5767_p1() {
    zext_ln66_4_fu_5767_p1 = esl_zext<10,9>(add_ln66_fu_5761_p2.read());
}

void poly1305_hw::thread_zext_ln66_fu_5743_p1() {
    zext_ln66_fu_5743_p1 = esl_zext<64,5>(j5_0_reg_2516.read());
}

void poly1305_hw::thread_zext_ln685_1_fu_5002_p1() {
    zext_ln685_1_fu_5002_p1 = esl_zext<64,6>(i94_0_reg_2173.read());
}

void poly1305_hw::thread_zext_ln685_fu_5007_p1() {
    zext_ln685_fu_5007_p1 = esl_zext<32,8>(mul_2_q0.read());
}

void poly1305_hw::thread_zext_ln698_fu_5030_p1() {
    zext_ln698_fu_5030_p1 = esl_zext<64,32>(sext_ln697_fu_5012_p1.read());
}

void poly1305_hw::thread_zext_ln714_fu_5061_p1() {
    zext_ln714_fu_5061_p1 = esl_zext<7,6>(arr1Zeroes99_1_reg_2208.read());
}

void poly1305_hw::thread_zext_ln716_fu_5071_p1() {
    zext_ln716_fu_5071_p1 = esl_zext<7,6>(k104_0_reg_2231.read());
}

void poly1305_hw::thread_zext_ln717_fu_5086_p1() {
    zext_ln717_fu_5086_p1 = esl_zext<64,6>(k104_0_reg_2231.read());
}

void poly1305_hw::thread_zext_ln722_1_fu_5482_p1() {
    zext_ln722_1_fu_5482_p1 = esl_zext<32,8>(sext_ln722_fu_5478_p1.read());
}

void poly1305_hw::thread_zext_ln722_fu_5472_p1() {
    zext_ln722_fu_5472_p1 = esl_zext<64,5>(i105_0_reg_2357.read());
}

void poly1305_hw::thread_zext_ln727_fu_5492_p1() {
    zext_ln727_fu_5492_p1 = esl_zext<64,5>(i_57_reg_8216.read());
}

void poly1305_hw::thread_zext_ln735_fu_5102_p1() {
    zext_ln735_fu_5102_p1 = esl_zext<6,4>(k107_0_reg_2242.read());
}

void poly1305_hw::thread_zext_ln736_fu_5117_p1() {
    zext_ln736_fu_5117_p1 = esl_zext<64,4>(k107_0_reg_2242.read());
}

void poly1305_hw::thread_zext_ln740_1_fu_5147_p1() {
    zext_ln740_1_fu_5147_p1 = esl_zext<6,4>(i108_0_reg_2253.read());
}

void poly1305_hw::thread_zext_ln740_fu_5143_p1() {
    zext_ln740_fu_5143_p1 = esl_zext<5,4>(i108_0_reg_2253.read());
}

void poly1305_hw::thread_zext_ln742_fu_5232_p1() {
    zext_ln742_fu_5232_p1 = esl_zext<26,24>(sext_ln742_reg_8103.read());
}

void poly1305_hw::thread_zext_ln743_1_fu_5202_p1() {
    zext_ln743_1_fu_5202_p1 = esl_zext<64,5>(j110_0_reg_2276.read());
}

void poly1305_hw::thread_zext_ln743_fu_5162_p1() {
    zext_ln743_fu_5162_p1 = esl_zext<64,4>(i108_0_reg_2253.read());
}

void poly1305_hw::thread_zext_ln744_fu_5282_p1() {
    zext_ln744_fu_5282_p1 = esl_zext<32,24>(sext_ln744_fu_5278_p1.read());
}

void poly1305_hw::thread_zext_ln752_fu_5181_p1() {
    zext_ln752_fu_5181_p1 = esl_zext<64,6>(add_ln752_fu_5176_p2.read());
}

void poly1305_hw::thread_zext_ln756_1_fu_5310_p1() {
    zext_ln756_1_fu_5310_p1 = esl_zext<64,5>(add_ln756_fu_5305_p2.read());
}

void poly1305_hw::thread_zext_ln756_2_fu_5318_p1() {
    zext_ln756_2_fu_5318_p1 = esl_zext<9,8>(addCarry80_7_reg_2299.read());
}

void poly1305_hw::thread_zext_ln756_3_fu_5333_p1() {
    zext_ln756_3_fu_5333_p1 = esl_zext<32,9>(add_ln756_1_fu_5327_p2.read());
}

void poly1305_hw::thread_zext_ln756_fu_5315_p1() {
    zext_ln756_fu_5315_p1 = esl_zext<9,8>(add_ln743_1_reg_8126.read());
}

void poly1305_hw::thread_zext_ln763_fu_5387_p1() {
    zext_ln763_fu_5387_p1 = esl_zext<32,8>(add_ln756_3_fu_5347_p2.read());
}

}

