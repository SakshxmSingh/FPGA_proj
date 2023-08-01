#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_sub_ln486_fu_51063_p2() {
    sub_ln486_fu_51063_p2 = (!ap_const_lv7_20.is_01() || !arr1Zeroes53_2_reg_11909.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_20) - sc_biguint<7>(arr1Zeroes53_2_reg_11909.read()));
}

void poly1305_hw::thread_sub_ln505_fu_51098_p2() {
    sub_ln505_fu_51098_p2 = (!ap_const_lv7_F.is_01() || !arr1Zeroes53_2_reg_11909.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_F) - sc_biguint<7>(arr1Zeroes53_2_reg_11909.read()));
}

void poly1305_hw::thread_sub_ln514_1_fu_53421_p2() {
    sub_ln514_1_fu_53421_p2 = (!sext_ln514_2_fu_53417_p1.read().is_01() || !sext_ln536_fu_53275_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln514_2_fu_53417_p1.read()) - sc_bigint<12>(sext_ln536_fu_53275_p1.read()));
}

void poly1305_hw::thread_sub_ln514_fu_51326_p2() {
    sub_ln514_fu_51326_p2 = (!sext_ln514_fu_51322_p1.read().is_01() || !sext_ln536_1_fu_51199_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln514_fu_51322_p1.read()) - sc_bigint<18>(sext_ln536_1_fu_51199_p1.read()));
}

void poly1305_hw::thread_sub_ln536_fu_51124_p2() {
    sub_ln536_fu_51124_p2 = (!ap_const_lv7_E.is_01() || !arr1Zeroes53_2_reg_11909.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_E) - sc_biguint<7>(arr1Zeroes53_2_reg_11909.read()));
}

void poly1305_hw::thread_sub_ln550_fu_53667_p2() {
    sub_ln550_fu_53667_p2 = (!p_pn187_reg_11988.read().is_01() || !reg_21630.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn187_reg_11988.read()) - sc_biguint<32>(reg_21630.read()));
}

void poly1305_hw::thread_sub_ln580_fu_53902_p2() {
    sub_ln580_fu_53902_p2 = (!ap_const_lv6_21.is_01() || !arr1Zeroes53_3_lcssa_reg_12150.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_21) - sc_biguint<6>(arr1Zeroes53_3_lcssa_reg_12150.read()));
}

void poly1305_hw::thread_sub_ln58_1_fu_27549_p2() {
    sub_ln58_1_fu_27549_p2 = (!ap_const_lv29_0.is_01() || !zext_ln58_1_fu_27545_p1.read().is_01())? sc_lv<29>(): (sc_biguint<29>(ap_const_lv29_0) - sc_biguint<29>(zext_ln58_1_fu_27545_p1.read()));
}

void poly1305_hw::thread_sub_ln58_fu_27529_p2() {
    sub_ln58_fu_27529_p2 = (!ap_const_lv32_0.is_01() || !textLength_0_reg_8547.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(textLength_0_reg_8547.read()));
}

void poly1305_hw::thread_sub_ln618_fu_27671_p2() {
    sub_ln618_fu_27671_p2 = (!ap_const_lv32_0.is_01() || !p_and_t_fu_27663_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(p_and_t_fu_27663_p3.read()));
}

void poly1305_hw::thread_sub_ln730_fu_58483_p2() {
    sub_ln730_fu_58483_p2 = (!ap_const_lv7_20.is_01() || !zext_ln728_fu_58479_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_20) - sc_biguint<7>(zext_ln728_fu_58479_p1.read()));
}

void poly1305_hw::thread_sub_ln742_fu_61142_p2() {
    sub_ln742_fu_61142_p2 = (!p_pn185_reg_12580.read().is_01() || !zext_ln736_1_reg_110323.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn185_reg_12580.read()) - sc_biguint<32>(zext_ln736_1_reg_110323.read()));
}

void poly1305_hw::thread_sub_ln749_fu_58514_p2() {
    sub_ln749_fu_58514_p2 = (!ap_const_lv6_F.is_01() || !arr1Zeroes99_1_reg_12468.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_F) - sc_biguint<6>(arr1Zeroes99_1_reg_12468.read()));
}

void poly1305_hw::thread_sub_ln758_1_fu_60862_p2() {
    sub_ln758_1_fu_60862_p2 = (!sext_ln758_2_fu_60858_p1.read().is_01() || !sext_ln780_fu_60720_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln758_2_fu_60858_p1.read()) - sc_bigint<12>(sext_ln780_fu_60720_p1.read()));
}

void poly1305_hw::thread_sub_ln758_fu_58809_p2() {
    sub_ln758_fu_58809_p2 = (!sext_ln758_fu_58805_p1.read().is_01() || !sext_ln780_1_fu_58682_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln758_fu_58805_p1.read()) - sc_bigint<18>(sext_ln780_1_fu_58682_p1.read()));
}

void poly1305_hw::thread_sub_ln780_fu_58540_p2() {
    sub_ln780_fu_58540_p2 = (!ap_const_lv6_E.is_01() || !arr1Zeroes99_1_reg_12468.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_E) - sc_biguint<6>(arr1Zeroes99_1_reg_12468.read()));
}

void poly1305_hw::thread_sub_ln794_fu_61094_p2() {
    sub_ln794_fu_61094_p2 = (!p_pn_reg_12560.read().is_01() || !reg_21661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn_reg_12560.read()) - sc_biguint<32>(reg_21661.read()));
}

void poly1305_hw::thread_sub_ln824_fu_61226_p2() {
    sub_ln824_fu_61226_p2 = (!ap_const_lv6_21.is_01() || !arr1Zeroes99_2_reg_12600.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_21) - sc_biguint<6>(arr1Zeroes99_2_reg_12600.read()));
}

void poly1305_hw::thread_sum_1_fu_87742_p2() {
    sum_1_fu_87742_p2 = (!zext_ln867_4_fu_87738_p1.read().is_01() || !zext_ln867_3_fu_87728_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln867_4_fu_87738_p1.read()) + sc_biguint<10>(zext_ln867_3_fu_87728_p1.read()));
}

void poly1305_hw::thread_sum_fu_56089_p2() {
    sum_fu_56089_p2 = (!zext_ln638_4_fu_56085_p1.read().is_01() || !zext_ln638_3_fu_56075_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln638_4_fu_56085_p1.read()) + sc_biguint<10>(zext_ln638_3_fu_56075_p1.read()));
}

void poly1305_hw::thread_tag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state946.read())) {
        tag_address0 =  (sc_lv<4>) (zext_ln885_fu_87811_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        tag_address0 =  (sc_lv<4>) (zext_ln867_reg_118761.read());
    } else {
        tag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void poly1305_hw::thread_tag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state946.read()) && 
          !(esl_seteq<1,2,2>(ap_const_lv2_1, result_stream_V_data_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, result_stream_V_last_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, result_stream_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, result_stream_V_data_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, result_stream_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, result_stream_V_last_V_1_state.read())))))) {
        tag_ce0 = ap_const_logic_1;
    } else {
        tag_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_tag_d0() {
    tag_d0 = (!add_ln874_1_fu_87786_p2.read().is_01() || !s_q0.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln874_1_fu_87786_p2.read()) + sc_biguint<8>(s_q0.read()));
}

void poly1305_hw::thread_tag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        tag_we0 = ap_const_logic_1;
    } else {
        tag_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln544_fu_53646_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        temp_1_address0 = temp_1_addr_20_reg_107673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read())) {
        temp_1_address0 = temp_1_addr_17_reg_108064.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read())) {
        temp_1_address0 = temp_1_addr_15_reg_108014.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln523_fu_53519_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read())) {
        temp_1_address0 = temp_1_addr_12_reg_107965.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        temp_1_address0 = temp_1_addr_10_reg_107918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        temp_1_address0 = temp_1_addr_8_reg_107874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        temp_1_address0 = temp_1_addr_6_reg_107810.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        temp_1_address0 = temp_1_addr_4_reg_107743.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln527_32_fu_52637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln527_31_fu_52432_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln527_29_fu_52220_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln527_27_fu_52009_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln527_25_fu_51797_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln527_23_fu_51586_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln527_21_fu_51369_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln527_16_fu_51194_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln514_fu_51160_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        temp_1_address0 =  (sc_lv<6>) (zext_ln487_fu_51088_p1.read());
    } else {
        temp_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read())) {
        temp_1_address1 = temp_1_addr_20_reg_107673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        temp_1_address1 = temp_1_addr_19_reg_108101.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read())) {
        temp_1_address1 = temp_1_addr_16_reg_108059.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read())) {
        temp_1_address1 = temp_1_addr_14_reg_108009.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read())) {
        temp_1_address1 = temp_1_addr_13_reg_107971.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read())) {
        temp_1_address1 = temp_1_addr_11_reg_107924.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        temp_1_address1 = temp_1_addr_9_reg_107880.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        temp_1_address1 = temp_1_addr_7_reg_107816.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        temp_1_address1 = temp_1_addr_5_reg_107749.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        temp_1_address1 = temp_1_addr_3_reg_107720.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        temp_1_address1 = temp_1_addr_2_reg_107714.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        temp_1_address1 =  (sc_lv<6>) (zext_ln527_30_fu_52422_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        temp_1_address1 =  (sc_lv<6>) (zext_ln527_28_fu_52210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        temp_1_address1 =  (sc_lv<6>) (zext_ln527_26_fu_51999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read())) {
        temp_1_address1 =  (sc_lv<6>) (zext_ln527_24_fu_51787_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read())) {
        temp_1_address1 =  (sc_lv<6>) (zext_ln527_22_fu_51576_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        temp_1_address1 =  (sc_lv<6>) (zext_ln527_20_fu_51359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        temp_1_address1 =  (sc_lv<6>) (zext_ln527_11_fu_51184_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read())) {
        temp_1_address1 =  (sc_lv<6>) (zext_ln527_6_fu_51166_p1.read());
    } else {
        temp_1_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()))) {
        temp_1_ce0 = ap_const_logic_1;
    } else {
        temp_1_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()))) {
        temp_1_ce1 = ap_const_logic_1;
    } else {
        temp_1_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read())) {
        temp_1_d0 = zext_ln534_15_fu_53536_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read())) {
        temp_1_d0 = zext_ln534_13_fu_53528_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read())) {
        temp_1_d0 = zext_ln515_fu_53504_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read())) {
        temp_1_d0 = zext_ln534_10_fu_53489_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        temp_1_d0 = zext_ln534_8_fu_53282_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        temp_1_d0 = zext_ln534_6_fu_53072_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        temp_1_d0 = zext_ln534_4_fu_52842_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        temp_1_d0 = zext_ln534_2_fu_52646_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        temp_1_d0 = ap_const_lv32_0;
    } else {
        temp_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read())) {
        temp_1_d1 = add_ln537_2_fu_53624_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        temp_1_d1 = zext_ln534_16_fu_53549_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read())) {
        temp_1_d1 = zext_ln534_14_fu_53532_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read())) {
        temp_1_d1 = zext_ln534_12_fu_53524_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read())) {
        temp_1_d1 = zext_ln534_11_fu_53497_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read())) {
        temp_1_d1 = zext_ln534_9_fu_53485_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        temp_1_d1 = zext_ln534_7_fu_53278_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        temp_1_d1 = zext_ln534_5_fu_53068_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        temp_1_d1 = zext_ln534_3_fu_52838_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        temp_1_d1 = zext_ln534_1_fu_52642_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        temp_1_d1 = zext_ln534_fu_52437_p1.read();
    } else {
        temp_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln486_fu_51077_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln522_fu_53509_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()))) {
        temp_1_we0 = ap_const_logic_1;
    } else {
        temp_1_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
         (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln510_reg_107700.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_ln536_reg_108233.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()) || 
         (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln510_reg_107700.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())))) {
        temp_1_we1 = ap_const_logic_1;
    } else {
        temp_1_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln788_fu_61073_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state496.read())) {
        temp_2_address0 = temp_2_addr_20_reg_109701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read())) {
        temp_2_address0 = temp_2_addr_17_reg_110051.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        temp_2_address0 = temp_2_addr_15_reg_110001.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln767_fu_60946_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read())) {
        temp_2_address0 = temp_2_addr_12_reg_109952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read())) {
        temp_2_address0 = temp_2_addr_10_reg_109883.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read())) {
        temp_2_address0 = temp_2_addr_8_reg_109816.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read())) {
        temp_2_address0 = temp_2_addr_6_reg_109794.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read())) {
        temp_2_address0 = temp_2_addr_4_reg_109772.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln771_32_fu_59700_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state485.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln771_31_fu_59492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln771_29_fu_59280_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln771_27_fu_59069_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln771_25_fu_58852_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln771_23_fu_58677_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln771_21_fu_58649_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state479.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln771_16_fu_58621_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state478.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln758_fu_58576_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read())) {
        temp_2_address0 =  (sc_lv<6>) (zext_ln731_fu_58504_p1.read());
    } else {
        temp_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read())) {
        temp_2_address1 = temp_2_addr_20_reg_109701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read())) {
        temp_2_address1 = temp_2_addr_19_reg_110088.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read())) {
        temp_2_address1 = temp_2_addr_16_reg_110046.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        temp_2_address1 = temp_2_addr_14_reg_109996.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read())) {
        temp_2_address1 = temp_2_addr_13_reg_109958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read())) {
        temp_2_address1 = temp_2_addr_11_reg_109889.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read())) {
        temp_2_address1 = temp_2_addr_9_reg_109822.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read())) {
        temp_2_address1 = temp_2_addr_7_reg_109800.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read())) {
        temp_2_address1 = temp_2_addr_5_reg_109778.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read())) {
        temp_2_address1 = temp_2_addr_3_reg_109732.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read())) {
        temp_2_address1 = temp_2_addr_2_reg_109726.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state485.read())) {
        temp_2_address1 =  (sc_lv<6>) (zext_ln771_30_fu_59482_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        temp_2_address1 =  (sc_lv<6>) (zext_ln771_28_fu_59270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        temp_2_address1 =  (sc_lv<6>) (zext_ln771_26_fu_59059_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read())) {
        temp_2_address1 =  (sc_lv<6>) (zext_ln771_24_fu_58842_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        temp_2_address1 =  (sc_lv<6>) (zext_ln771_22_fu_58667_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        temp_2_address1 =  (sc_lv<6>) (zext_ln771_20_fu_58639_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state479.read())) {
        temp_2_address1 =  (sc_lv<6>) (zext_ln771_11_fu_58610_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state478.read())) {
        temp_2_address1 =  (sc_lv<6>) (zext_ln771_6_fu_58587_p1.read());
    } else {
        temp_2_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state479.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state485.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state478.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state496.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()))) {
        temp_2_ce0 = ap_const_logic_1;
    } else {
        temp_2_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state479.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state485.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state478.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        temp_2_ce1 = ap_const_logic_1;
    } else {
        temp_2_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read())) {
        temp_2_d0 = zext_ln778_15_fu_60963_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        temp_2_d0 = zext_ln778_13_fu_60955_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read())) {
        temp_2_d0 = zext_ln759_fu_60930_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read())) {
        temp_2_d0 = zext_ln778_10_fu_60517_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read())) {
        temp_2_d0 = zext_ln778_8_fu_60287_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read())) {
        temp_2_d0 = zext_ln778_6_fu_60095_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read())) {
        temp_2_d0 = zext_ln778_4_fu_59905_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read())) {
        temp_2_d0 = zext_ln778_2_fu_59709_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read())) {
        temp_2_d0 = ap_const_lv32_0;
    } else {
        temp_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read())) {
        temp_2_d1 = add_ln781_2_fu_61051_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read())) {
        temp_2_d1 = zext_ln778_16_fu_60976_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read())) {
        temp_2_d1 = zext_ln778_14_fu_60959_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        temp_2_d1 = zext_ln778_12_fu_60951_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read())) {
        temp_2_d1 = zext_ln778_11_fu_60723_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read())) {
        temp_2_d1 = zext_ln778_9_fu_60513_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read())) {
        temp_2_d1 = zext_ln778_7_fu_60283_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read())) {
        temp_2_d1 = zext_ln778_5_fu_60091_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read())) {
        temp_2_d1 = zext_ln778_3_fu_59901_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read())) {
        temp_2_d1 = zext_ln778_1_fu_59705_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read())) {
        temp_2_d1 = zext_ln778_fu_59497_p1.read();
    } else {
        temp_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln730_fu_58493_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln766_fu_60935_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()))) {
        temp_2_we0 = ap_const_logic_1;
    } else {
        temp_2_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
         (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln754_reg_109707.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_ln780_reg_110256.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()) || 
         (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln754_reg_109707.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read())))) {
        temp_2_we1 = ap_const_logic_1;
    } else {
        temp_2_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state747.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln260_fu_87295_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state744.read())) {
        temp_address0 = temp_addr_20_reg_117621.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state742.read())) {
        temp_address0 = temp_addr_17_reg_118012.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read())) {
        temp_address0 = temp_addr_15_reg_117962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln239_fu_87168_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read())) {
        temp_address0 = temp_addr_12_reg_117913.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read())) {
        temp_address0 = temp_addr_10_reg_117866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read())) {
        temp_address0 = temp_addr_8_reg_117822.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read())) {
        temp_address0 = temp_addr_6_reg_117758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read())) {
        temp_address0 = temp_addr_4_reg_117691.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state734.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln243_32_fu_86286_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln243_31_fu_86081_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln243_29_fu_85869_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state731.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln243_27_fu_85658_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state730.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln243_25_fu_85446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state729.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln243_23_fu_85235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state728.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln243_21_fu_85018_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state727.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln243_16_fu_84843_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state726.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln230_fu_84809_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        temp_address0 =  (sc_lv<6>) (zext_ln203_fu_84737_p1.read());
    } else {
        temp_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state745.read())) {
        temp_address1 = temp_addr_20_reg_117621.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state743.read())) {
        temp_address1 = temp_addr_19_reg_118049.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state742.read())) {
        temp_address1 = temp_addr_16_reg_118007.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read())) {
        temp_address1 = temp_addr_14_reg_117957.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read())) {
        temp_address1 = temp_addr_13_reg_117919.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read())) {
        temp_address1 = temp_addr_11_reg_117872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read())) {
        temp_address1 = temp_addr_9_reg_117828.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read())) {
        temp_address1 = temp_addr_7_reg_117764.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read())) {
        temp_address1 = temp_addr_5_reg_117697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read())) {
        temp_address1 = temp_addr_3_reg_117668.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state734.read())) {
        temp_address1 = temp_addr_2_reg_117662.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read())) {
        temp_address1 =  (sc_lv<6>) (zext_ln243_30_fu_86071_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read())) {
        temp_address1 =  (sc_lv<6>) (zext_ln243_28_fu_85859_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state731.read())) {
        temp_address1 =  (sc_lv<6>) (zext_ln243_26_fu_85648_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state730.read())) {
        temp_address1 =  (sc_lv<6>) (zext_ln243_24_fu_85436_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state729.read())) {
        temp_address1 =  (sc_lv<6>) (zext_ln243_22_fu_85225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state728.read())) {
        temp_address1 =  (sc_lv<6>) (zext_ln243_20_fu_85008_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state727.read())) {
        temp_address1 =  (sc_lv<6>) (zext_ln243_11_fu_84833_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state726.read())) {
        temp_address1 =  (sc_lv<6>) (zext_ln243_6_fu_84815_p1.read());
    } else {
        temp_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_temp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state727.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state728.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state730.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state729.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state731.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state734.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state726.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state744.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state747.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state742.read()))) {
        temp_ce0 = ap_const_logic_1;
    } else {
        temp_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state727.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state728.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state730.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state729.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state731.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state734.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state726.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state745.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state742.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state743.read()))) {
        temp_ce1 = ap_const_logic_1;
    } else {
        temp_ce1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state742.read())) {
        temp_d0 = zext_ln250_15_fu_87185_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read())) {
        temp_d0 = zext_ln250_13_fu_87177_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read())) {
        temp_d0 = zext_ln231_fu_87153_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read())) {
        temp_d0 = zext_ln250_10_fu_87138_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read())) {
        temp_d0 = zext_ln250_8_fu_86931_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read())) {
        temp_d0 = zext_ln250_6_fu_86721_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read())) {
        temp_d0 = zext_ln250_4_fu_86491_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read())) {
        temp_d0 = zext_ln250_2_fu_86295_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        temp_d0 = ap_const_lv32_0;
    } else {
        temp_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state745.read())) {
        temp_d1 = add_ln253_2_fu_87273_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state743.read())) {
        temp_d1 = zext_ln250_16_fu_87198_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state742.read())) {
        temp_d1 = zext_ln250_14_fu_87181_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read())) {
        temp_d1 = zext_ln250_12_fu_87173_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read())) {
        temp_d1 = zext_ln250_11_fu_87146_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read())) {
        temp_d1 = zext_ln250_9_fu_87134_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read())) {
        temp_d1 = zext_ln250_7_fu_86927_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read())) {
        temp_d1 = zext_ln250_5_fu_86717_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read())) {
        temp_d1 = zext_ln250_3_fu_86487_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read())) {
        temp_d1 = zext_ln250_1_fu_86291_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state734.read())) {
        temp_d1 = zext_ln250_fu_86086_p1.read();
    } else {
        temp_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_temp_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln202_fu_84726_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_fu_87158_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state742.read()))) {
        temp_we0 = ap_const_logic_1;
    } else {
        temp_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_temp_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state734.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state736.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read()) || 
         (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln226_reg_117648.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state745.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_ln252_reg_118181.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state741.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state742.read()) || 
         (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln226_reg_117648.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state743.read())))) {
        temp_we1 = ap_const_logic_1;
    } else {
        temp_we1 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textBlock_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read())) {
        textBlock_address0 =  (sc_lv<5>) (zext_ln638_fu_56061_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read())) {
        textBlock_address0 =  (sc_lv<5>) (sext_ln624_fu_56044_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln618_fu_54057_p2.read()))) {
        textBlock_address0 =  (sc_lv<5>) (sext_ln621_fu_56028_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln618_fu_54057_p2.read()))) {
        textBlock_address0 =  (sc_lv<5>) (zext_ln619_fu_56023_p1.read());
    } else {
        textBlock_address0 = "XXXXX";
    }
}

void poly1305_hw::thread_textBlock_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln618_fu_54057_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln618_fu_54057_p2.read())))) {
        textBlock_ce0 = ap_const_logic_1;
    } else {
        textBlock_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textBlock_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read())) {
        textBlock_d0 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln618_fu_54057_p2.read()))) {
        textBlock_d0 = ap_const_lv8_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln618_fu_54057_p2.read()))) {
        textBlock_d0 = tmp_4_fu_54079_p1002.read();
    } else {
        textBlock_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly1305_hw::thread_textBlock_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln618_fu_54057_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln618_fu_54057_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln623_fu_56038_p2.read())))) {
        textBlock_we0 = ap_const_logic_1;
    } else {
        textBlock_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_textLength_fu_21724_p2() {
    textLength_fu_21724_p2 = (!zext_ln18_fu_21720_p1.read().is_01() || !textLength_0_reg_8547.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln18_fu_21720_p1.read()) + sc_biguint<32>(textLength_0_reg_8547.read()));
}

void poly1305_hw::thread_tmp_1000_fu_80887_p4() {
    tmp_1000_fu_80887_p4 = grp_fu_92071_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1001_fu_47206_p3() {
    tmp_1001_fu_47206_p3 = add_ln395_422_fu_47200_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1002_fu_47238_p4() {
    tmp_1002_fu_47238_p4 = grp_fu_89696_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1007_fu_81002_p3() {
    tmp_1007_fu_81002_p3 = add_ln109_426_fu_80996_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1008_fu_81035_p4() {
    tmp_1008_fu_81035_p4 = grp_fu_92088_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1009_fu_47353_p3() {
    tmp_1009_fu_47353_p3 = add_ln395_426_fu_47347_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1010_fu_47386_p4() {
    tmp_1010_fu_47386_p4 = grp_fu_89713_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1011_fu_81084_p3() {
    tmp_1011_fu_81084_p3 = add_ln109_428_fu_81078_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1012_fu_81116_p4() {
    tmp_1012_fu_81116_p4 = grp_fu_92097_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1013_fu_47435_p3() {
    tmp_1013_fu_47435_p3 = add_ln395_428_fu_47429_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1014_fu_47467_p4() {
    tmp_1014_fu_47467_p4 = grp_fu_89722_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1019_fu_81231_p3() {
    tmp_1019_fu_81231_p3 = add_ln109_432_fu_81225_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1020_fu_81264_p4() {
    tmp_1020_fu_81264_p4 = grp_fu_92114_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1021_fu_47582_p3() {
    tmp_1021_fu_47582_p3 = add_ln395_432_fu_47576_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1022_fu_47615_p4() {
    tmp_1022_fu_47615_p4 = grp_fu_89739_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1023_fu_81313_p3() {
    tmp_1023_fu_81313_p3 = add_ln109_434_fu_81307_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1024_fu_81345_p4() {
    tmp_1024_fu_81345_p4 = grp_fu_92123_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1025_fu_47664_p3() {
    tmp_1025_fu_47664_p3 = add_ln395_434_fu_47658_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1026_fu_47696_p4() {
    tmp_1026_fu_47696_p4 = grp_fu_89748_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_102_fu_64508_p4() {
    tmp_102_fu_64508_p4 = grp_fu_90278_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1031_fu_81460_p3() {
    tmp_1031_fu_81460_p3 = add_ln109_438_fu_81454_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1032_fu_81493_p4() {
    tmp_1032_fu_81493_p4 = grp_fu_92140_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1033_fu_47811_p3() {
    tmp_1033_fu_47811_p3 = add_ln395_438_fu_47805_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1034_fu_47844_p4() {
    tmp_1034_fu_47844_p4 = grp_fu_89765_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1039_fu_81612_p3() {
    tmp_1039_fu_81612_p3 = add_ln109_442_fu_81606_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_103_fu_30859_p4() {
    tmp_103_fu_30859_p4 = grp_fu_87903_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1040_fu_81645_p4() {
    tmp_1040_fu_81645_p4 = grp_fu_92149_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1041_fu_47963_p3() {
    tmp_1041_fu_47963_p3 = add_ln395_442_fu_47957_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1042_fu_47996_p4() {
    tmp_1042_fu_47996_p4 = grp_fu_89774_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1043_fu_81694_p3() {
    tmp_1043_fu_81694_p3 = add_ln109_444_fu_81688_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1044_fu_81726_p4() {
    tmp_1044_fu_81726_p4 = grp_fu_92158_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1045_fu_48045_p3() {
    tmp_1045_fu_48045_p3 = add_ln395_444_fu_48039_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1046_fu_48077_p4() {
    tmp_1046_fu_48077_p4 = grp_fu_89783_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_104_fu_64545_p4() {
    tmp_104_fu_64545_p4 = grp_fu_90287_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1051_fu_81841_p3() {
    tmp_1051_fu_81841_p3 = add_ln109_448_fu_81835_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1052_fu_81874_p4() {
    tmp_1052_fu_81874_p4 = grp_fu_92175_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1053_fu_48192_p3() {
    tmp_1053_fu_48192_p3 = add_ln395_448_fu_48186_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1054_fu_48225_p4() {
    tmp_1054_fu_48225_p4 = grp_fu_89800_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1055_fu_81923_p3() {
    tmp_1055_fu_81923_p3 = add_ln109_450_fu_81917_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1056_fu_81955_p4() {
    tmp_1056_fu_81955_p4 = grp_fu_92184_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1057_fu_48274_p3() {
    tmp_1057_fu_48274_p3 = add_ln395_450_fu_48268_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1058_fu_48306_p4() {
    tmp_1058_fu_48306_p4 = grp_fu_89809_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_105_fu_30896_p4() {
    tmp_105_fu_30896_p4 = grp_fu_87912_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1063_fu_82070_p3() {
    tmp_1063_fu_82070_p3 = add_ln109_454_fu_82064_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1064_fu_82103_p4() {
    tmp_1064_fu_82103_p4 = grp_fu_92201_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1065_fu_48421_p3() {
    tmp_1065_fu_48421_p3 = add_ln395_454_fu_48415_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1066_fu_48454_p4() {
    tmp_1066_fu_48454_p4 = grp_fu_89826_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1067_fu_82152_p3() {
    tmp_1067_fu_82152_p3 = add_ln109_456_fu_82146_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1068_fu_82184_p4() {
    tmp_1068_fu_82184_p4 = grp_fu_92210_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1069_fu_48503_p3() {
    tmp_1069_fu_48503_p3 = add_ln395_456_fu_48497_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_106_fu_58695_p4() {
    tmp_106_fu_58695_p4 = mul_ln758_fu_58685_p2.read().range(16, 8);
}

void poly1305_hw::thread_tmp_1070_fu_48535_p4() {
    tmp_1070_fu_48535_p4 = grp_fu_89835_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1075_fu_82299_p3() {
    tmp_1075_fu_82299_p3 = add_ln109_460_fu_82293_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1076_fu_82332_p4() {
    tmp_1076_fu_82332_p4 = grp_fu_92227_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1077_fu_48650_p3() {
    tmp_1077_fu_48650_p3 = add_ln395_460_fu_48644_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1078_fu_48683_p4() {
    tmp_1078_fu_48683_p4 = grp_fu_89852_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1079_fu_82381_p3() {
    tmp_1079_fu_82381_p3 = add_ln109_462_fu_82375_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_107_fu_58764_p4() {
    tmp_107_fu_58764_p4 = add_ln771_1_fu_58753_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1080_fu_82413_p4() {
    tmp_1080_fu_82413_p4 = grp_fu_92236_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1081_fu_48732_p3() {
    tmp_1081_fu_48732_p3 = add_ln395_462_fu_48726_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1082_fu_48764_p4() {
    tmp_1082_fu_48764_p4 = grp_fu_89861_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1087_fu_82528_p3() {
    tmp_1087_fu_82528_p3 = add_ln109_466_fu_82522_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1088_fu_82561_p4() {
    tmp_1088_fu_82561_p4 = grp_fu_92253_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1089_fu_48879_p3() {
    tmp_1089_fu_48879_p3 = add_ln395_466_fu_48873_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_108_fu_58873_p4() {
    tmp_108_fu_58873_p4 = add_ln758_fu_58867_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1090_fu_48912_p4() {
    tmp_1090_fu_48912_p4 = grp_fu_89878_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1091_fu_82610_p3() {
    tmp_1091_fu_82610_p3 = add_ln109_468_fu_82604_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1092_fu_82642_p4() {
    tmp_1092_fu_82642_p4 = grp_fu_92262_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1093_fu_48961_p3() {
    tmp_1093_fu_48961_p3 = add_ln395_468_fu_48955_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1094_fu_48993_p4() {
    tmp_1094_fu_48993_p4 = grp_fu_89887_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1099_fu_82757_p3() {
    tmp_1099_fu_82757_p3 = add_ln109_472_fu_82751_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_109_fu_58946_p4() {
    tmp_109_fu_58946_p4 = add_ln771_17_fu_58935_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_10_fu_27521_p3() {
    tmp_10_fu_27521_p3 = textLength_0_reg_8547.read().range(31, 31);
}

void poly1305_hw::thread_tmp_1100_fu_82790_p4() {
    tmp_1100_fu_82790_p4 = grp_fu_92279_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1101_fu_49108_p3() {
    tmp_1101_fu_49108_p3 = add_ln395_472_fu_49102_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1102_fu_49141_p4() {
    tmp_1102_fu_49141_p4 = grp_fu_89904_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_1107_fu_82909_p3() {
    tmp_1107_fu_82909_p3 = add_ln109_476_fu_82903_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1108_fu_82942_p4() {
    tmp_1108_fu_82942_p4 = grp_fu_92288_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1109_fu_49260_p3() {
    tmp_1109_fu_49260_p3 = add_ln395_476_fu_49254_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_110_fu_58995_p4() {
    tmp_110_fu_58995_p4 = add_ln758_1_fu_58984_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1110_fu_49293_p4() {
    tmp_1110_fu_49293_p4 = grp_fu_89913_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1111_fu_82991_p3() {
    tmp_1111_fu_82991_p3 = add_ln109_478_fu_82985_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1112_fu_83023_p4() {
    tmp_1112_fu_83023_p4 = grp_fu_92297_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1113_fu_49342_p3() {
    tmp_1113_fu_49342_p3 = add_ln395_478_fu_49336_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1114_fu_49374_p4() {
    tmp_1114_fu_49374_p4 = grp_fu_89922_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1119_fu_83138_p3() {
    tmp_1119_fu_83138_p3 = add_ln109_482_fu_83132_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_111_fu_59097_p4() {
    tmp_111_fu_59097_p4 = add_ln771_19_fu_59091_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1120_fu_83171_p4() {
    tmp_1120_fu_83171_p4 = grp_fu_92314_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1121_fu_49489_p3() {
    tmp_1121_fu_49489_p3 = add_ln395_482_fu_49483_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1122_fu_49522_p4() {
    tmp_1122_fu_49522_p4 = grp_fu_89939_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1123_fu_83220_p3() {
    tmp_1123_fu_83220_p3 = add_ln109_484_fu_83214_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1124_fu_83252_p4() {
    tmp_1124_fu_83252_p4 = grp_fu_92323_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1125_fu_49571_p3() {
    tmp_1125_fu_49571_p3 = add_ln395_484_fu_49565_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1126_fu_49603_p4() {
    tmp_1126_fu_49603_p4 = grp_fu_89948_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_112_fu_59145_p4() {
    tmp_112_fu_59145_p4 = add_ln758_2_fu_59135_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1131_fu_83367_p3() {
    tmp_1131_fu_83367_p3 = add_ln109_488_fu_83361_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1132_fu_83400_p4() {
    tmp_1132_fu_83400_p4 = grp_fu_92340_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1133_fu_49718_p3() {
    tmp_1133_fu_49718_p3 = add_ln395_488_fu_49712_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1134_fu_49751_p4() {
    tmp_1134_fu_49751_p4 = grp_fu_89965_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1135_fu_83449_p3() {
    tmp_1135_fu_83449_p3 = add_ln109_490_fu_83443_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1136_fu_83481_p4() {
    tmp_1136_fu_83481_p4 = grp_fu_92349_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1137_fu_49800_p3() {
    tmp_1137_fu_49800_p3 = add_ln395_490_fu_49794_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1138_fu_49832_p4() {
    tmp_1138_fu_49832_p4 = grp_fu_89974_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_113_fu_59214_p4() {
    tmp_113_fu_59214_p4 = add_ln771_21_fu_59203_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1143_fu_83596_p3() {
    tmp_1143_fu_83596_p3 = add_ln109_494_fu_83590_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1144_fu_83629_p4() {
    tmp_1144_fu_83629_p4 = grp_fu_92366_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1145_fu_49947_p3() {
    tmp_1145_fu_49947_p3 = add_ln395_494_fu_49941_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1146_fu_49980_p4() {
    tmp_1146_fu_49980_p4 = grp_fu_89991_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1147_fu_83678_p3() {
    tmp_1147_fu_83678_p3 = add_ln109_496_fu_83672_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1148_fu_83710_p4() {
    tmp_1148_fu_83710_p4 = grp_fu_92375_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1149_fu_50029_p3() {
    tmp_1149_fu_50029_p3 = add_ln395_496_fu_50023_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_114_fu_59297_p4() {
    tmp_114_fu_59297_p4 = add_ln758_3_fu_59292_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1150_fu_50061_p4() {
    tmp_1150_fu_50061_p4 = grp_fu_90000_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1155_fu_83825_p3() {
    tmp_1155_fu_83825_p3 = add_ln109_500_fu_83819_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1156_fu_83858_p4() {
    tmp_1156_fu_83858_p4 = grp_fu_92392_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1157_fu_50176_p3() {
    tmp_1157_fu_50176_p3 = add_ln395_500_fu_50170_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1158_fu_50209_p4() {
    tmp_1158_fu_50209_p4 = grp_fu_90017_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1159_fu_83907_p3() {
    tmp_1159_fu_83907_p3 = add_ln109_502_fu_83901_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_115_fu_59370_p4() {
    tmp_115_fu_59370_p4 = add_ln771_23_fu_59359_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1160_fu_83939_p4() {
    tmp_1160_fu_83939_p4 = grp_fu_92401_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1161_fu_50258_p3() {
    tmp_1161_fu_50258_p3 = add_ln395_502_fu_50252_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1162_fu_50290_p4() {
    tmp_1162_fu_50290_p4 = grp_fu_90026_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1167_fu_84054_p3() {
    tmp_1167_fu_84054_p3 = add_ln109_506_fu_84048_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1168_fu_84087_p4() {
    tmp_1168_fu_84087_p4 = grp_fu_92418_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1169_fu_50405_p3() {
    tmp_1169_fu_50405_p3 = add_ln395_506_fu_50399_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_116_fu_59418_p4() {
    tmp_116_fu_59418_p4 = add_ln758_4_fu_59408_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1170_fu_50438_p4() {
    tmp_1170_fu_50438_p4 = grp_fu_90043_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_1171_fu_84157_p3() {
    tmp_1171_fu_84157_p3 = add_ln109_508_fu_84151_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1172_fu_50508_p3() {
    tmp_1172_fu_50508_p3 = add_ln395_508_fu_50502_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_1173_fu_84704_p3() {
    tmp_1173_fu_84704_p3 = boolean_5_reg_15939.read().range(31, 31);
}

void poly1305_hw::thread_tmp_1174_fu_51055_p3() {
    tmp_1174_fu_51055_p3 = boolean52_5_reg_11898.read().range(31, 31);
}

void poly1305_hw::thread_tmp_1175_fu_84861_p4() {
    tmp_1175_fu_84861_p4 = mul_ln230_fu_84851_p2.read().range(16, 8);
}

void poly1305_hw::thread_tmp_1176_fu_84930_p4() {
    tmp_1176_fu_84930_p4 = add_ln243_1_fu_84919_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1177_fu_85039_p4() {
    tmp_1177_fu_85039_p4 = add_ln230_fu_85033_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1178_fu_85112_p4() {
    tmp_1178_fu_85112_p4 = add_ln243_18_fu_85101_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1179_fu_85161_p4() {
    tmp_1179_fu_85161_p4 = add_ln230_1_fu_85150_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_117_fu_59524_p4() {
    tmp_117_fu_59524_p4 = add_ln771_25_fu_59518_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1180_fu_85263_p4() {
    tmp_1180_fu_85263_p4 = add_ln243_20_fu_85257_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1181_fu_85311_p4() {
    tmp_1181_fu_85311_p4 = add_ln230_2_fu_85301_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1182_fu_85380_p4() {
    tmp_1182_fu_85380_p4 = add_ln243_22_fu_85369_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1183_fu_85463_p4() {
    tmp_1183_fu_85463_p4 = add_ln230_3_fu_85458_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1184_fu_85536_p4() {
    tmp_1184_fu_85536_p4 = add_ln243_24_fu_85525_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1185_fu_85584_p4() {
    tmp_1185_fu_85584_p4 = add_ln230_4_fu_85574_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1186_fu_85686_p4() {
    tmp_1186_fu_85686_p4 = add_ln243_26_fu_85680_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1187_fu_85734_p4() {
    tmp_1187_fu_85734_p4 = add_ln230_5_fu_85724_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1188_fu_85803_p4() {
    tmp_1188_fu_85803_p4 = add_ln243_28_fu_85792_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1189_fu_85886_p4() {
    tmp_1189_fu_85886_p4 = add_ln230_6_fu_85881_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_118_fu_59572_p4() {
    tmp_118_fu_59572_p4 = add_ln758_5_fu_59562_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1190_fu_85959_p4() {
    tmp_1190_fu_85959_p4 = add_ln243_30_fu_85948_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1191_fu_86007_p4() {
    tmp_1191_fu_86007_p4 = add_ln230_7_fu_85997_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1192_fu_86113_p4() {
    tmp_1192_fu_86113_p4 = add_ln243_32_fu_86107_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1193_fu_86161_p4() {
    tmp_1193_fu_86161_p4 = add_ln230_8_fu_86151_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1194_fu_86230_p4() {
    tmp_1194_fu_86230_p4 = add_ln243_34_fu_86219_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1195_fu_86311_p4() {
    tmp_1195_fu_86311_p4 = add_ln230_9_fu_86306_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1196_fu_86384_p4() {
    tmp_1196_fu_86384_p4 = add_ln243_36_fu_86373_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1197_fu_86432_p4() {
    tmp_1197_fu_86432_p4 = add_ln230_10_fu_86422_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1198_fu_86518_p4() {
    tmp_1198_fu_86518_p4 = add_ln243_38_fu_86512_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1199_fu_86566_p4() {
    tmp_1199_fu_86566_p4 = add_ln230_11_fu_86556_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_119_fu_59641_p4() {
    tmp_119_fu_59641_p4 = add_ln771_27_fu_59630_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_11_fu_27535_p4() {
    tmp_11_fu_27535_p4 = sub_ln58_fu_27529_p2.read().range(31, 4);
}

void poly1305_hw::thread_tmp_1200_fu_86643_p4() {
    tmp_1200_fu_86643_p4 = add_ln243_40_fu_86632_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1201_fu_86691_p4() {
    tmp_1201_fu_86691_p4 = add_ln230_12_fu_86681_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1202_fu_86769_p4() {
    tmp_1202_fu_86769_p4 = add_ln243_42_fu_86759_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1203_fu_86817_p4() {
    tmp_1203_fu_86817_p4 = add_ln230_13_fu_86807_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1204_fu_86944_p4() {
    tmp_1204_fu_86944_p4 = add_ln243_44_fu_86938_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1205_fu_86898_p4() {
    tmp_1205_fu_86898_p4 = add_ln230_14_fu_86888_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1206_fu_87025_p4() {
    tmp_1206_fu_87025_p4 = add_ln243_46_fu_87014_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1207_fu_87100_p4() {
    tmp_1207_fu_87100_p4 = add_ln230_15_fu_87088_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1208_fu_51212_p4() {
    tmp_1208_fu_51212_p4 = mul_ln514_fu_51202_p2.read().range(16, 8);
}

void poly1305_hw::thread_tmp_1209_fu_51281_p4() {
    tmp_1209_fu_51281_p4 = add_ln527_1_fu_51270_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_120_fu_59725_p4() {
    tmp_120_fu_59725_p4 = add_ln758_6_fu_59720_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1210_fu_51390_p4() {
    tmp_1210_fu_51390_p4 = add_ln514_fu_51384_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1211_fu_51463_p4() {
    tmp_1211_fu_51463_p4 = add_ln527_18_fu_51452_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1212_fu_51512_p4() {
    tmp_1212_fu_51512_p4 = add_ln514_1_fu_51501_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1213_fu_51614_p4() {
    tmp_1213_fu_51614_p4 = add_ln527_20_fu_51608_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1214_fu_51662_p4() {
    tmp_1214_fu_51662_p4 = add_ln514_2_fu_51652_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1215_fu_51731_p4() {
    tmp_1215_fu_51731_p4 = add_ln527_22_fu_51720_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1216_fu_51814_p4() {
    tmp_1216_fu_51814_p4 = add_ln514_3_fu_51809_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1217_fu_51887_p4() {
    tmp_1217_fu_51887_p4 = add_ln527_24_fu_51876_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1218_fu_51935_p4() {
    tmp_1218_fu_51935_p4 = add_ln514_4_fu_51925_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1219_fu_52037_p4() {
    tmp_1219_fu_52037_p4 = add_ln527_26_fu_52031_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_121_fu_59798_p4() {
    tmp_121_fu_59798_p4 = add_ln771_29_fu_59787_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1220_fu_52085_p4() {
    tmp_1220_fu_52085_p4 = add_ln514_5_fu_52075_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1221_fu_52154_p4() {
    tmp_1221_fu_52154_p4 = add_ln527_28_fu_52143_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1222_fu_52237_p4() {
    tmp_1222_fu_52237_p4 = add_ln514_6_fu_52232_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1223_fu_52310_p4() {
    tmp_1223_fu_52310_p4 = add_ln527_30_fu_52299_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1224_fu_52358_p4() {
    tmp_1224_fu_52358_p4 = add_ln514_7_fu_52348_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1225_fu_52464_p4() {
    tmp_1225_fu_52464_p4 = add_ln527_32_fu_52458_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1226_fu_52512_p4() {
    tmp_1226_fu_52512_p4 = add_ln514_8_fu_52502_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1227_fu_52581_p4() {
    tmp_1227_fu_52581_p4 = add_ln527_34_fu_52570_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1228_fu_52662_p4() {
    tmp_1228_fu_52662_p4 = add_ln514_9_fu_52657_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1229_fu_52735_p4() {
    tmp_1229_fu_52735_p4 = add_ln527_36_fu_52724_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_122_fu_59846_p4() {
    tmp_122_fu_59846_p4 = add_ln758_7_fu_59836_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1230_fu_52783_p4() {
    tmp_1230_fu_52783_p4 = add_ln514_10_fu_52773_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1231_fu_52869_p4() {
    tmp_1231_fu_52869_p4 = add_ln527_38_fu_52863_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1232_fu_52917_p4() {
    tmp_1232_fu_52917_p4 = add_ln514_11_fu_52907_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1233_fu_52994_p4() {
    tmp_1233_fu_52994_p4 = add_ln527_40_fu_52983_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1234_fu_53042_p4() {
    tmp_1234_fu_53042_p4 = add_ln514_12_fu_53032_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1235_fu_53120_p4() {
    tmp_1235_fu_53120_p4 = add_ln527_42_fu_53110_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1236_fu_53168_p4() {
    tmp_1236_fu_53168_p4 = add_ln514_13_fu_53158_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1237_fu_53295_p4() {
    tmp_1237_fu_53295_p4 = add_ln527_44_fu_53289_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1238_fu_53249_p4() {
    tmp_1238_fu_53249_p4 = add_ln514_14_fu_53239_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1239_fu_53376_p4() {
    tmp_1239_fu_53376_p4 = add_ln527_46_fu_53365_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_123_fu_59932_p4() {
    tmp_123_fu_59932_p4 = add_ln771_31_fu_59926_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1240_fu_53451_p4() {
    tmp_1240_fu_53451_p4 = add_ln514_15_fu_53439_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_1241_fu_87225_p4() {
    tmp_1241_fu_87225_p4 = add_ln243_48_fu_87219_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_1242_fu_53576_p4() {
    tmp_1242_fu_53576_p4 = add_ln527_48_fu_53570_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_124_fu_59980_p4() {
    tmp_124_fu_59980_p4 = add_ln758_8_fu_59970_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_125_fu_60048_p4() {
    tmp_125_fu_60048_p4 = add_ln771_33_fu_60038_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_126_fu_60111_p4() {
    tmp_126_fu_60111_p4 = add_ln758_9_fu_60106_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_127_fu_60184_p4() {
    tmp_127_fu_60184_p4 = add_ln771_35_fu_60173_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_128_fu_60232_p4() {
    tmp_128_fu_60232_p4 = add_ln758_10_fu_60222_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_129_fu_60314_p4() {
    tmp_129_fu_60314_p4 = add_ln771_37_fu_60308_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_12_fu_27555_p4() {
    tmp_12_fu_27555_p4 = textLength_0_reg_8547.read().range(31, 4);
}

void poly1305_hw::thread_tmp_130_fu_60362_p4() {
    tmp_130_fu_60362_p4 = add_ln758_11_fu_60352_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_131_fu_60439_p4() {
    tmp_131_fu_60439_p4 = add_ln771_39_fu_60428_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_132_fu_60487_p4() {
    tmp_132_fu_60487_p4 = add_ln758_12_fu_60477_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_133_fu_60565_p4() {
    tmp_133_fu_60565_p4 = add_ln771_41_fu_60555_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_134_fu_60613_p4() {
    tmp_134_fu_60613_p4 = add_ln758_13_fu_60603_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_135_fu_60736_p4() {
    tmp_135_fu_60736_p4 = add_ln771_43_fu_60730_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_136_fu_60694_p4() {
    tmp_136_fu_60694_p4 = add_ln758_14_fu_60684_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_137_fu_60817_p4() {
    tmp_137_fu_60817_p4 = add_ln771_45_fu_60806_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_138_fu_60892_p4() {
    tmp_138_fu_60892_p4 = add_ln758_15_fu_60880_p2.read().range(25, 8);
}

void poly1305_hw::thread_tmp_141_fu_61003_p4() {
    tmp_141_fu_61003_p4 = add_ln771_47_fu_60997_p2.read().range(31, 8);
}

void poly1305_hw::thread_tmp_142_fu_64601_p4() {
    tmp_142_fu_64601_p4 = grp_fu_90305_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_143_fu_30952_p4() {
    tmp_143_fu_30952_p4 = grp_fu_87930_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_144_fu_64638_p4() {
    tmp_144_fu_64638_p4 = grp_fu_90314_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_145_fu_30989_p4() {
    tmp_145_fu_30989_p4 = grp_fu_87939_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_146_fu_61165_p3() {
    tmp_146_fu_61165_p3 = arr1_2_q0.read().range(31, 31);
}

void poly1305_hw::thread_tmp_14_fu_61665_p3() {
    tmp_14_fu_61665_p3 = add_ln76_2_fu_61659_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_150_fu_64694_p4() {
    tmp_150_fu_64694_p4 = grp_fu_90332_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_151_fu_31045_p4() {
    tmp_151_fu_31045_p4 = grp_fu_87957_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_154_fu_64748_p3() {
    tmp_154_fu_64748_p3 = add_ln109_fu_64742_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_155_fu_64775_p4() {
    tmp_155_fu_64775_p4 = grp_fu_90342_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_156_fu_31099_p3() {
    tmp_156_fu_31099_p3 = add_ln395_fu_31093_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_157_fu_31126_p4() {
    tmp_157_fu_31126_p4 = grp_fu_87967_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_158_fu_64824_p3() {
    tmp_158_fu_64824_p3 = add_ln109_2_fu_64818_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_159_fu_64856_p4() {
    tmp_159_fu_64856_p4 = grp_fu_90351_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_160_fu_31175_p3() {
    tmp_160_fu_31175_p3 = add_ln395_2_fu_31169_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_161_fu_31207_p4() {
    tmp_161_fu_31207_p4 = grp_fu_87976_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_166_fu_64971_p3() {
    tmp_166_fu_64971_p3 = add_ln109_6_fu_64965_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_167_fu_65004_p4() {
    tmp_167_fu_65004_p4 = grp_fu_90368_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_168_fu_31322_p3() {
    tmp_168_fu_31322_p3 = add_ln395_6_fu_31316_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_169_fu_31355_p4() {
    tmp_169_fu_31355_p4 = grp_fu_87993_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_16_fu_62041_p3() {
    tmp_16_fu_62041_p3 = add_ln76_6_fu_62035_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_170_fu_65053_p3() {
    tmp_170_fu_65053_p3 = add_ln109_8_fu_65047_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_171_fu_65085_p4() {
    tmp_171_fu_65085_p4 = grp_fu_90377_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_172_fu_31404_p3() {
    tmp_172_fu_31404_p3 = add_ln395_8_fu_31398_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_173_fu_31436_p4() {
    tmp_173_fu_31436_p4 = grp_fu_88002_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_174_fu_87748_p4() {
    tmp_174_fu_87748_p4 = sum_1_fu_87742_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_179_fu_65200_p3() {
    tmp_179_fu_65200_p3 = add_ln109_12_fu_65194_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_180_fu_65233_p4() {
    tmp_180_fu_65233_p4 = grp_fu_90394_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_181_fu_31551_p3() {
    tmp_181_fu_31551_p3 = add_ln395_12_fu_31545_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_182_fu_31584_p4() {
    tmp_182_fu_31584_p4 = grp_fu_88019_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_183_fu_65282_p3() {
    tmp_183_fu_65282_p3 = add_ln109_14_fu_65276_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_184_fu_65314_p4() {
    tmp_184_fu_65314_p4 = grp_fu_90403_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_185_fu_31633_p3() {
    tmp_185_fu_31633_p3 = add_ln395_14_fu_31627_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_186_fu_31665_p4() {
    tmp_186_fu_31665_p4 = grp_fu_88028_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_18_fu_62417_p3() {
    tmp_18_fu_62417_p3 = add_ln76_10_fu_62411_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_191_fu_65429_p3() {
    tmp_191_fu_65429_p3 = add_ln109_18_fu_65423_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_192_fu_65462_p4() {
    tmp_192_fu_65462_p4 = grp_fu_90420_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_193_fu_31780_p3() {
    tmp_193_fu_31780_p3 = add_ln395_18_fu_31774_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_194_fu_31813_p4() {
    tmp_194_fu_31813_p4 = grp_fu_88045_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_195_fu_65511_p3() {
    tmp_195_fu_65511_p3 = add_ln109_20_fu_65505_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_196_fu_65543_p4() {
    tmp_196_fu_65543_p4 = grp_fu_90429_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_197_fu_31862_p3() {
    tmp_197_fu_31862_p3 = add_ln395_20_fu_31856_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_198_fu_31894_p4() {
    tmp_198_fu_31894_p4 = grp_fu_88054_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_203_fu_65658_p3() {
    tmp_203_fu_65658_p3 = add_ln109_24_fu_65652_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_204_fu_65691_p4() {
    tmp_204_fu_65691_p4 = grp_fu_90446_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_205_fu_32009_p3() {
    tmp_205_fu_32009_p3 = add_ln395_24_fu_32003_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_206_fu_32042_p4() {
    tmp_206_fu_32042_p4 = grp_fu_88071_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_207_fu_65740_p3() {
    tmp_207_fu_65740_p3 = add_ln109_26_fu_65734_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_208_fu_65772_p4() {
    tmp_208_fu_65772_p4 = grp_fu_90455_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_209_fu_32091_p3() {
    tmp_209_fu_32091_p3 = add_ln395_26_fu_32085_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_20_fu_62793_p3() {
    tmp_20_fu_62793_p3 = add_ln76_14_fu_62787_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_210_fu_32123_p4() {
    tmp_210_fu_32123_p4 = grp_fu_88080_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_215_fu_65887_p3() {
    tmp_215_fu_65887_p3 = add_ln109_30_fu_65881_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_216_fu_65920_p4() {
    tmp_216_fu_65920_p4 = grp_fu_90472_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_217_fu_32238_p3() {
    tmp_217_fu_32238_p3 = add_ln395_30_fu_32232_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_218_fu_32271_p4() {
    tmp_218_fu_32271_p4 = grp_fu_88097_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_223_fu_66039_p3() {
    tmp_223_fu_66039_p3 = add_ln109_34_fu_66033_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_224_fu_66072_p4() {
    tmp_224_fu_66072_p4 = grp_fu_90481_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_225_fu_32390_p3() {
    tmp_225_fu_32390_p3 = add_ln395_34_fu_32384_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_226_fu_32423_p4() {
    tmp_226_fu_32423_p4 = grp_fu_88106_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_227_fu_66121_p3() {
    tmp_227_fu_66121_p3 = add_ln109_36_fu_66115_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_228_fu_66153_p4() {
    tmp_228_fu_66153_p4 = grp_fu_90490_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_229_fu_32472_p3() {
    tmp_229_fu_32472_p3 = add_ln395_36_fu_32466_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_22_fu_63169_p3() {
    tmp_22_fu_63169_p3 = add_ln76_18_fu_63163_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_230_fu_32504_p4() {
    tmp_230_fu_32504_p4 = grp_fu_88115_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_235_fu_66268_p3() {
    tmp_235_fu_66268_p3 = add_ln109_40_fu_66262_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_236_fu_66301_p4() {
    tmp_236_fu_66301_p4 = grp_fu_90507_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_237_fu_32619_p3() {
    tmp_237_fu_32619_p3 = add_ln395_40_fu_32613_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_238_fu_32652_p4() {
    tmp_238_fu_32652_p4 = grp_fu_88132_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_239_fu_66350_p3() {
    tmp_239_fu_66350_p3 = add_ln109_42_fu_66344_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_240_fu_66382_p4() {
    tmp_240_fu_66382_p4 = grp_fu_90516_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_241_fu_32701_p3() {
    tmp_241_fu_32701_p3 = add_ln395_42_fu_32695_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_242_fu_32733_p4() {
    tmp_242_fu_32733_p4 = grp_fu_88141_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_247_fu_66497_p3() {
    tmp_247_fu_66497_p3 = add_ln109_46_fu_66491_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_248_fu_66530_p4() {
    tmp_248_fu_66530_p4 = grp_fu_90533_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_249_fu_32848_p3() {
    tmp_249_fu_32848_p3 = add_ln395_46_fu_32842_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_24_fu_63545_p3() {
    tmp_24_fu_63545_p3 = add_ln76_22_fu_63539_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_250_fu_32881_p4() {
    tmp_250_fu_32881_p4 = grp_fu_88158_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_251_fu_66579_p3() {
    tmp_251_fu_66579_p3 = add_ln109_48_fu_66573_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_252_fu_66611_p4() {
    tmp_252_fu_66611_p4 = grp_fu_90542_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_253_fu_32930_p3() {
    tmp_253_fu_32930_p3 = add_ln395_48_fu_32924_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_254_fu_32962_p4() {
    tmp_254_fu_32962_p4 = grp_fu_88167_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_259_fu_66726_p3() {
    tmp_259_fu_66726_p3 = add_ln109_52_fu_66720_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_260_fu_66759_p4() {
    tmp_260_fu_66759_p4 = grp_fu_90559_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_261_fu_33077_p3() {
    tmp_261_fu_33077_p3 = add_ln395_52_fu_33071_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_262_fu_33110_p4() {
    tmp_262_fu_33110_p4 = grp_fu_88184_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_263_fu_66808_p3() {
    tmp_263_fu_66808_p3 = add_ln109_54_fu_66802_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_264_fu_66840_p4() {
    tmp_264_fu_66840_p4 = grp_fu_90568_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_265_fu_33159_p3() {
    tmp_265_fu_33159_p3 = add_ln395_54_fu_33153_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_266_fu_33191_p4() {
    tmp_266_fu_33191_p4 = grp_fu_88193_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_26_fu_63921_p3() {
    tmp_26_fu_63921_p3 = add_ln76_26_fu_63915_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_271_fu_66955_p3() {
    tmp_271_fu_66955_p3 = add_ln109_58_fu_66949_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_272_fu_66988_p4() {
    tmp_272_fu_66988_p4 = grp_fu_90585_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_273_fu_33306_p3() {
    tmp_273_fu_33306_p3 = add_ln395_58_fu_33300_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_274_fu_33339_p4() {
    tmp_274_fu_33339_p4 = grp_fu_88210_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_275_fu_67037_p3() {
    tmp_275_fu_67037_p3 = add_ln109_60_fu_67031_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_276_fu_67069_p4() {
    tmp_276_fu_67069_p4 = grp_fu_90594_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_277_fu_33388_p3() {
    tmp_277_fu_33388_p3 = add_ln395_60_fu_33382_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_278_fu_33420_p4() {
    tmp_278_fu_33420_p4 = grp_fu_88219_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_283_fu_67184_p3() {
    tmp_283_fu_67184_p3 = add_ln109_64_fu_67178_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_284_fu_67217_p4() {
    tmp_284_fu_67217_p4 = grp_fu_90611_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_285_fu_33535_p3() {
    tmp_285_fu_33535_p3 = add_ln395_64_fu_33529_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_286_fu_33568_p4() {
    tmp_286_fu_33568_p4 = grp_fu_88236_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_28_fu_64179_p3() {
    tmp_28_fu_64179_p3 = add_ln76_30_fu_64173_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_291_fu_67336_p3() {
    tmp_291_fu_67336_p3 = add_ln109_68_fu_67330_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_292_fu_67369_p4() {
    tmp_292_fu_67369_p4 = grp_fu_90620_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_293_fu_33687_p3() {
    tmp_293_fu_33687_p3 = add_ln395_68_fu_33681_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_294_fu_33720_p4() {
    tmp_294_fu_33720_p4 = grp_fu_88245_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_295_fu_67418_p3() {
    tmp_295_fu_67418_p3 = add_ln109_70_fu_67412_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_296_fu_67450_p4() {
    tmp_296_fu_67450_p4 = grp_fu_90629_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_297_fu_33769_p3() {
    tmp_297_fu_33769_p3 = add_ln395_70_fu_33763_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_298_fu_33801_p4() {
    tmp_298_fu_33801_p4 = grp_fu_88254_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_2_fu_27272_p4() {
    tmp_2_fu_27272_p4 = r_14_6_fu_6732.read().range(7, 2);
}

void poly1305_hw::thread_tmp_303_fu_67565_p3() {
    tmp_303_fu_67565_p3 = add_ln109_74_fu_67559_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_304_fu_67598_p4() {
    tmp_304_fu_67598_p4 = grp_fu_90646_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_305_fu_33916_p3() {
    tmp_305_fu_33916_p3 = add_ln395_74_fu_33910_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_306_fu_33949_p4() {
    tmp_306_fu_33949_p4 = grp_fu_88271_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_307_fu_67647_p3() {
    tmp_307_fu_67647_p3 = add_ln109_76_fu_67641_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_308_fu_67679_p4() {
    tmp_308_fu_67679_p4 = grp_fu_90655_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_309_fu_33998_p3() {
    tmp_309_fu_33998_p3 = add_ln395_76_fu_33992_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_310_fu_34030_p4() {
    tmp_310_fu_34030_p4 = grp_fu_88280_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_315_fu_67794_p3() {
    tmp_315_fu_67794_p3 = add_ln109_80_fu_67788_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_316_fu_67827_p4() {
    tmp_316_fu_67827_p4 = grp_fu_90672_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_317_fu_34145_p3() {
    tmp_317_fu_34145_p3 = add_ln395_80_fu_34139_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_318_fu_34178_p4() {
    tmp_318_fu_34178_p4 = grp_fu_88297_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_319_fu_67876_p3() {
    tmp_319_fu_67876_p3 = add_ln109_82_fu_67870_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_31_fu_28016_p3() {
    tmp_31_fu_28016_p3 = add_ln355_2_fu_28010_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_320_fu_67908_p4() {
    tmp_320_fu_67908_p4 = grp_fu_90681_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_321_fu_34227_p3() {
    tmp_321_fu_34227_p3 = add_ln395_82_fu_34221_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_322_fu_34259_p4() {
    tmp_322_fu_34259_p4 = grp_fu_88306_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_327_fu_68023_p3() {
    tmp_327_fu_68023_p3 = add_ln109_86_fu_68017_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_328_fu_68056_p4() {
    tmp_328_fu_68056_p4 = grp_fu_90698_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_329_fu_34374_p3() {
    tmp_329_fu_34374_p3 = add_ln395_86_fu_34368_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_330_fu_34407_p4() {
    tmp_330_fu_34407_p4 = grp_fu_88323_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_331_fu_68105_p3() {
    tmp_331_fu_68105_p3 = add_ln109_88_fu_68099_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_332_fu_68137_p4() {
    tmp_332_fu_68137_p4 = grp_fu_90707_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_333_fu_34456_p3() {
    tmp_333_fu_34456_p3 = add_ln395_88_fu_34450_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_334_fu_34488_p4() {
    tmp_334_fu_34488_p4 = grp_fu_88332_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_339_fu_68252_p3() {
    tmp_339_fu_68252_p3 = add_ln109_92_fu_68246_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_33_fu_28392_p3() {
    tmp_33_fu_28392_p3 = add_ln355_6_fu_28386_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_340_fu_68285_p4() {
    tmp_340_fu_68285_p4 = grp_fu_90724_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_341_fu_34603_p3() {
    tmp_341_fu_34603_p3 = add_ln395_92_fu_34597_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_342_fu_34636_p4() {
    tmp_342_fu_34636_p4 = grp_fu_88349_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_343_fu_68334_p3() {
    tmp_343_fu_68334_p3 = add_ln109_94_fu_68328_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_344_fu_68366_p4() {
    tmp_344_fu_68366_p4 = grp_fu_90733_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_345_fu_34685_p3() {
    tmp_345_fu_34685_p3 = add_ln395_94_fu_34679_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_346_fu_34717_p4() {
    tmp_346_fu_34717_p4 = grp_fu_88358_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_351_fu_68481_p3() {
    tmp_351_fu_68481_p3 = add_ln109_98_fu_68475_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_352_fu_68514_p4() {
    tmp_352_fu_68514_p4 = grp_fu_90750_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_353_fu_34832_p3() {
    tmp_353_fu_34832_p3 = add_ln395_98_fu_34826_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_354_fu_34865_p4() {
    tmp_354_fu_34865_p4 = grp_fu_88375_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_359_fu_68637_p3() {
    tmp_359_fu_68637_p3 = add_ln109_102_fu_68631_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_35_fu_28768_p3() {
    tmp_35_fu_28768_p3 = add_ln355_10_fu_28762_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_360_fu_68670_p4() {
    tmp_360_fu_68670_p4 = grp_fu_90759_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_361_fu_34988_p3() {
    tmp_361_fu_34988_p3 = add_ln395_102_fu_34982_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_362_fu_35021_p4() {
    tmp_362_fu_35021_p4 = grp_fu_88384_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_363_fu_68719_p3() {
    tmp_363_fu_68719_p3 = add_ln109_104_fu_68713_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_364_fu_68751_p4() {
    tmp_364_fu_68751_p4 = grp_fu_90768_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_365_fu_35070_p3() {
    tmp_365_fu_35070_p3 = add_ln395_104_fu_35064_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_366_fu_35102_p4() {
    tmp_366_fu_35102_p4 = grp_fu_88393_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_371_fu_68866_p3() {
    tmp_371_fu_68866_p3 = add_ln109_108_fu_68860_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_372_fu_68899_p4() {
    tmp_372_fu_68899_p4 = grp_fu_90785_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_373_fu_35217_p3() {
    tmp_373_fu_35217_p3 = add_ln395_108_fu_35211_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_374_fu_35250_p4() {
    tmp_374_fu_35250_p4 = grp_fu_88410_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_375_fu_68948_p3() {
    tmp_375_fu_68948_p3 = add_ln109_110_fu_68942_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_376_fu_68980_p4() {
    tmp_376_fu_68980_p4 = grp_fu_90794_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_377_fu_35299_p3() {
    tmp_377_fu_35299_p3 = add_ln395_110_fu_35293_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_378_fu_35331_p4() {
    tmp_378_fu_35331_p4 = grp_fu_88419_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_37_fu_29144_p3() {
    tmp_37_fu_29144_p3 = add_ln355_14_fu_29138_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_383_fu_69095_p3() {
    tmp_383_fu_69095_p3 = add_ln109_114_fu_69089_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_384_fu_69128_p4() {
    tmp_384_fu_69128_p4 = grp_fu_90811_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_385_fu_35446_p3() {
    tmp_385_fu_35446_p3 = add_ln395_114_fu_35440_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_386_fu_35479_p4() {
    tmp_386_fu_35479_p4 = grp_fu_88436_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_387_fu_69177_p3() {
    tmp_387_fu_69177_p3 = add_ln109_116_fu_69171_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_388_fu_69209_p4() {
    tmp_388_fu_69209_p4 = grp_fu_90820_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_389_fu_35528_p3() {
    tmp_389_fu_35528_p3 = add_ln395_116_fu_35522_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_390_fu_35560_p4() {
    tmp_390_fu_35560_p4 = grp_fu_88445_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_395_fu_69324_p3() {
    tmp_395_fu_69324_p3 = add_ln109_120_fu_69318_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_396_fu_69357_p4() {
    tmp_396_fu_69357_p4 = grp_fu_90837_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_397_fu_35675_p3() {
    tmp_397_fu_35675_p3 = add_ln395_120_fu_35669_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_398_fu_35708_p4() {
    tmp_398_fu_35708_p4 = grp_fu_88462_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_399_fu_69406_p3() {
    tmp_399_fu_69406_p3 = add_ln109_122_fu_69400_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_39_fu_29520_p3() {
    tmp_39_fu_29520_p3 = add_ln355_18_fu_29514_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_400_fu_69438_p4() {
    tmp_400_fu_69438_p4 = grp_fu_90846_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_401_fu_35757_p3() {
    tmp_401_fu_35757_p3 = add_ln395_122_fu_35751_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_402_fu_35789_p4() {
    tmp_402_fu_35789_p4 = grp_fu_88471_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_407_fu_69553_p3() {
    tmp_407_fu_69553_p3 = add_ln109_126_fu_69547_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_408_fu_69586_p4() {
    tmp_408_fu_69586_p4 = grp_fu_90863_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_409_fu_35904_p3() {
    tmp_409_fu_35904_p3 = add_ln395_126_fu_35898_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_410_fu_35937_p4() {
    tmp_410_fu_35937_p4 = grp_fu_88488_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_411_fu_69635_p3() {
    tmp_411_fu_69635_p3 = add_ln109_128_fu_69629_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_412_fu_69667_p4() {
    tmp_412_fu_69667_p4 = grp_fu_90872_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_413_fu_35986_p3() {
    tmp_413_fu_35986_p3 = add_ln395_128_fu_35980_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_414_fu_36018_p4() {
    tmp_414_fu_36018_p4 = grp_fu_88497_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_419_fu_69782_p3() {
    tmp_419_fu_69782_p3 = add_ln109_132_fu_69776_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_41_fu_29896_p3() {
    tmp_41_fu_29896_p3 = add_ln355_22_fu_29890_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_420_fu_69815_p4() {
    tmp_420_fu_69815_p4 = grp_fu_90889_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_421_fu_36133_p3() {
    tmp_421_fu_36133_p3 = add_ln395_132_fu_36127_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_422_fu_36166_p4() {
    tmp_422_fu_36166_p4 = grp_fu_88514_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_427_fu_69933_p3() {
    tmp_427_fu_69933_p3 = add_ln109_136_fu_69927_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_428_fu_69966_p4() {
    tmp_428_fu_69966_p4 = grp_fu_90898_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_429_fu_36284_p3() {
    tmp_429_fu_36284_p3 = add_ln395_136_fu_36278_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_430_fu_36317_p4() {
    tmp_430_fu_36317_p4 = grp_fu_88523_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_431_fu_70015_p3() {
    tmp_431_fu_70015_p3 = add_ln109_138_fu_70009_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_432_fu_70047_p4() {
    tmp_432_fu_70047_p4 = grp_fu_90907_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_433_fu_36366_p3() {
    tmp_433_fu_36366_p3 = add_ln395_138_fu_36360_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_434_fu_36398_p4() {
    tmp_434_fu_36398_p4 = grp_fu_88532_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_439_fu_70162_p3() {
    tmp_439_fu_70162_p3 = add_ln109_142_fu_70156_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_43_fu_30272_p3() {
    tmp_43_fu_30272_p3 = add_ln355_26_fu_30266_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_440_fu_70195_p4() {
    tmp_440_fu_70195_p4 = grp_fu_90924_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_441_fu_36513_p3() {
    tmp_441_fu_36513_p3 = add_ln395_142_fu_36507_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_442_fu_36546_p4() {
    tmp_442_fu_36546_p4 = grp_fu_88549_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_443_fu_70244_p3() {
    tmp_443_fu_70244_p3 = add_ln109_144_fu_70238_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_444_fu_70276_p4() {
    tmp_444_fu_70276_p4 = grp_fu_90933_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_445_fu_36595_p3() {
    tmp_445_fu_36595_p3 = add_ln395_144_fu_36589_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_446_fu_36627_p4() {
    tmp_446_fu_36627_p4 = grp_fu_88558_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_451_fu_70391_p3() {
    tmp_451_fu_70391_p3 = add_ln109_148_fu_70385_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_452_fu_70424_p4() {
    tmp_452_fu_70424_p4 = grp_fu_90950_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_453_fu_36742_p3() {
    tmp_453_fu_36742_p3 = add_ln395_148_fu_36736_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_454_fu_36775_p4() {
    tmp_454_fu_36775_p4 = grp_fu_88575_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_455_fu_70473_p3() {
    tmp_455_fu_70473_p3 = add_ln109_150_fu_70467_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_456_fu_70505_p4() {
    tmp_456_fu_70505_p4 = grp_fu_90959_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_457_fu_36824_p3() {
    tmp_457_fu_36824_p3 = add_ln395_150_fu_36818_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_458_fu_36856_p4() {
    tmp_458_fu_36856_p4 = grp_fu_88584_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_45_fu_30530_p3() {
    tmp_45_fu_30530_p3 = add_ln355_30_fu_30524_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_463_fu_70620_p3() {
    tmp_463_fu_70620_p3 = add_ln109_154_fu_70614_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_464_fu_70653_p4() {
    tmp_464_fu_70653_p4 = grp_fu_90976_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_465_fu_36971_p3() {
    tmp_465_fu_36971_p3 = add_ln395_154_fu_36965_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_466_fu_37004_p4() {
    tmp_466_fu_37004_p4 = grp_fu_88601_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_467_fu_70702_p3() {
    tmp_467_fu_70702_p3 = add_ln109_156_fu_70696_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_468_fu_70734_p4() {
    tmp_468_fu_70734_p4 = grp_fu_90985_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_469_fu_37053_p3() {
    tmp_469_fu_37053_p3 = add_ln395_156_fu_37047_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_470_fu_37085_p4() {
    tmp_470_fu_37085_p4 = grp_fu_88610_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_475_fu_70849_p3() {
    tmp_475_fu_70849_p3 = add_ln109_160_fu_70843_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_476_fu_70882_p4() {
    tmp_476_fu_70882_p4 = grp_fu_91002_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_477_fu_37200_p3() {
    tmp_477_fu_37200_p3 = add_ln395_160_fu_37194_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_478_fu_37233_p4() {
    tmp_478_fu_37233_p4 = grp_fu_88627_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_479_fu_70931_p3() {
    tmp_479_fu_70931_p3 = add_ln109_162_fu_70925_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_47_fu_64229_p4() {
    tmp_47_fu_64229_p4 = grp_fu_90197_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_480_fu_70963_p4() {
    tmp_480_fu_70963_p4 = grp_fu_91011_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_481_fu_37282_p3() {
    tmp_481_fu_37282_p3 = add_ln395_162_fu_37276_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_482_fu_37314_p4() {
    tmp_482_fu_37314_p4 = grp_fu_88636_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_487_fu_71078_p3() {
    tmp_487_fu_71078_p3 = add_ln109_166_fu_71072_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_488_fu_71111_p4() {
    tmp_488_fu_71111_p4 = grp_fu_91028_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_489_fu_37429_p3() {
    tmp_489_fu_37429_p3 = add_ln395_166_fu_37423_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_48_fu_30580_p4() {
    tmp_48_fu_30580_p4 = grp_fu_87822_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_490_fu_37462_p4() {
    tmp_490_fu_37462_p4 = grp_fu_88653_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_495_fu_71230_p3() {
    tmp_495_fu_71230_p3 = add_ln109_170_fu_71224_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_496_fu_71263_p4() {
    tmp_496_fu_71263_p4 = grp_fu_91037_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_497_fu_37581_p3() {
    tmp_497_fu_37581_p3 = add_ln395_170_fu_37575_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_498_fu_37614_p4() {
    tmp_498_fu_37614_p4 = grp_fu_88662_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_499_fu_71312_p3() {
    tmp_499_fu_71312_p3 = add_ln109_172_fu_71306_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_49_fu_64266_p4() {
    tmp_49_fu_64266_p4 = grp_fu_90206_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_4_fu_54079_p1001() {
    tmp_4_fu_54079_p1001 = esl_concat<6,4>(trunc_ln619_1_fu_54068_p1.read(), i77_0_reg_12367.read());
}

void poly1305_hw::thread_tmp_500_fu_71344_p4() {
    tmp_500_fu_71344_p4 = grp_fu_91046_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_501_fu_37663_p3() {
    tmp_501_fu_37663_p3 = add_ln395_172_fu_37657_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_502_fu_37695_p4() {
    tmp_502_fu_37695_p4 = grp_fu_88671_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_507_fu_71459_p3() {
    tmp_507_fu_71459_p3 = add_ln109_176_fu_71453_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_508_fu_71492_p4() {
    tmp_508_fu_71492_p4 = grp_fu_91063_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_509_fu_37810_p3() {
    tmp_509_fu_37810_p3 = add_ln395_176_fu_37804_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_50_fu_30617_p4() {
    tmp_50_fu_30617_p4 = grp_fu_87831_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_510_fu_37843_p4() {
    tmp_510_fu_37843_p4 = grp_fu_88688_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_511_fu_71541_p3() {
    tmp_511_fu_71541_p3 = add_ln109_178_fu_71535_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_512_fu_71573_p4() {
    tmp_512_fu_71573_p4 = grp_fu_91072_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_513_fu_37892_p3() {
    tmp_513_fu_37892_p3 = add_ln395_178_fu_37886_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_514_fu_37924_p4() {
    tmp_514_fu_37924_p4 = grp_fu_88697_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_519_fu_71688_p3() {
    tmp_519_fu_71688_p3 = add_ln109_182_fu_71682_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_51_fu_56095_p4() {
    tmp_51_fu_56095_p4 = sum_fu_56089_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_520_fu_71721_p4() {
    tmp_520_fu_71721_p4 = grp_fu_91089_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_521_fu_38039_p3() {
    tmp_521_fu_38039_p3 = add_ln395_182_fu_38033_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_522_fu_38072_p4() {
    tmp_522_fu_38072_p4 = grp_fu_88714_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_523_fu_71770_p3() {
    tmp_523_fu_71770_p3 = add_ln109_184_fu_71764_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_524_fu_71802_p4() {
    tmp_524_fu_71802_p4 = grp_fu_91098_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_525_fu_38121_p3() {
    tmp_525_fu_38121_p3 = add_ln395_184_fu_38115_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_526_fu_38153_p4() {
    tmp_526_fu_38153_p4 = grp_fu_88723_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_531_fu_71917_p3() {
    tmp_531_fu_71917_p3 = add_ln109_188_fu_71911_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_532_fu_71950_p4() {
    tmp_532_fu_71950_p4 = grp_fu_91115_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_533_fu_38268_p3() {
    tmp_533_fu_38268_p3 = add_ln395_188_fu_38262_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_534_fu_38301_p4() {
    tmp_534_fu_38301_p4 = grp_fu_88740_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_535_fu_71999_p3() {
    tmp_535_fu_71999_p3 = add_ln109_190_fu_71993_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_536_fu_72031_p4() {
    tmp_536_fu_72031_p4 = grp_fu_91124_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_537_fu_38350_p3() {
    tmp_537_fu_38350_p3 = add_ln395_190_fu_38344_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_538_fu_38382_p4() {
    tmp_538_fu_38382_p4 = grp_fu_88749_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_543_fu_72146_p3() {
    tmp_543_fu_72146_p3 = add_ln109_194_fu_72140_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_544_fu_72179_p4() {
    tmp_544_fu_72179_p4 = grp_fu_91141_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_545_fu_38497_p3() {
    tmp_545_fu_38497_p3 = add_ln395_194_fu_38491_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_546_fu_38530_p4() {
    tmp_546_fu_38530_p4 = grp_fu_88766_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_547_fu_72228_p3() {
    tmp_547_fu_72228_p3 = add_ln109_196_fu_72222_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_548_fu_72260_p4() {
    tmp_548_fu_72260_p4 = grp_fu_91150_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_549_fu_38579_p3() {
    tmp_549_fu_38579_p3 = add_ln395_196_fu_38573_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_54_fu_64322_p4() {
    tmp_54_fu_64322_p4 = grp_fu_90224_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_550_fu_38611_p4() {
    tmp_550_fu_38611_p4 = grp_fu_88775_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_555_fu_72375_p3() {
    tmp_555_fu_72375_p3 = add_ln109_200_fu_72369_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_556_fu_72408_p4() {
    tmp_556_fu_72408_p4 = grp_fu_91167_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_557_fu_38726_p3() {
    tmp_557_fu_38726_p3 = add_ln395_200_fu_38720_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_558_fu_38759_p4() {
    tmp_558_fu_38759_p4 = grp_fu_88792_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_55_fu_30673_p4() {
    tmp_55_fu_30673_p4 = grp_fu_87849_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_563_fu_72527_p3() {
    tmp_563_fu_72527_p3 = add_ln109_204_fu_72521_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_564_fu_72560_p4() {
    tmp_564_fu_72560_p4 = grp_fu_91176_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_565_fu_38878_p3() {
    tmp_565_fu_38878_p3 = add_ln395_204_fu_38872_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_566_fu_38911_p4() {
    tmp_566_fu_38911_p4 = grp_fu_88801_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_567_fu_72609_p3() {
    tmp_567_fu_72609_p3 = add_ln109_206_fu_72603_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_568_fu_72641_p4() {
    tmp_568_fu_72641_p4 = grp_fu_91185_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_569_fu_38960_p3() {
    tmp_569_fu_38960_p3 = add_ln395_206_fu_38954_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_56_fu_56292_p4() {
    tmp_56_fu_56292_p4 = mul_ln664_fu_56283_p2.read().range(15, 8);
}

void poly1305_hw::thread_tmp_570_fu_38992_p4() {
    tmp_570_fu_38992_p4 = grp_fu_88810_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_575_fu_72756_p3() {
    tmp_575_fu_72756_p3 = add_ln109_210_fu_72750_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_576_fu_72789_p4() {
    tmp_576_fu_72789_p4 = grp_fu_91202_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_577_fu_39107_p3() {
    tmp_577_fu_39107_p3 = add_ln395_210_fu_39101_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_578_fu_39140_p4() {
    tmp_578_fu_39140_p4 = grp_fu_88827_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_579_fu_72838_p3() {
    tmp_579_fu_72838_p3 = add_ln109_212_fu_72832_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_57_fu_56354_p4() {
    tmp_57_fu_56354_p4 = add_ln677_1_fu_56348_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_580_fu_72870_p4() {
    tmp_580_fu_72870_p4 = grp_fu_91211_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_581_fu_39189_p3() {
    tmp_581_fu_39189_p3 = add_ln395_212_fu_39183_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_582_fu_39221_p4() {
    tmp_582_fu_39221_p4 = grp_fu_88836_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_587_fu_72985_p3() {
    tmp_587_fu_72985_p3 = add_ln109_216_fu_72979_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_588_fu_73018_p4() {
    tmp_588_fu_73018_p4 = grp_fu_91228_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_589_fu_39336_p3() {
    tmp_589_fu_39336_p3 = add_ln395_216_fu_39330_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_58_fu_56407_p4() {
    tmp_58_fu_56407_p4 = grp_fu_90052_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_590_fu_39369_p4() {
    tmp_590_fu_39369_p4 = grp_fu_88853_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_591_fu_73067_p3() {
    tmp_591_fu_73067_p3 = add_ln109_218_fu_73061_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_592_fu_73099_p4() {
    tmp_592_fu_73099_p4 = grp_fu_91237_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_593_fu_39418_p3() {
    tmp_593_fu_39418_p3 = add_ln395_218_fu_39412_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_594_fu_39450_p4() {
    tmp_594_fu_39450_p4 = grp_fu_88862_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_599_fu_73214_p3() {
    tmp_599_fu_73214_p3 = add_ln109_222_fu_73208_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_59_fu_56849_p4() {
    tmp_59_fu_56849_p4 = add_ln677_17_fu_56843_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_600_fu_73247_p4() {
    tmp_600_fu_73247_p4 = grp_fu_91254_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_601_fu_39565_p3() {
    tmp_601_fu_39565_p3 = add_ln395_222_fu_39559_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_602_fu_39598_p4() {
    tmp_602_fu_39598_p4 = grp_fu_88879_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_603_fu_73296_p3() {
    tmp_603_fu_73296_p3 = add_ln109_224_fu_73290_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_604_fu_73328_p4() {
    tmp_604_fu_73328_p4 = grp_fu_91263_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_605_fu_39647_p3() {
    tmp_605_fu_39647_p3 = add_ln395_224_fu_39641_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_606_fu_39679_p4() {
    tmp_606_fu_39679_p4 = grp_fu_88888_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_60_fu_56466_p4() {
    tmp_60_fu_56466_p4 = grp_fu_90062_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_611_fu_73443_p3() {
    tmp_611_fu_73443_p3 = add_ln109_228_fu_73437_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_612_fu_73476_p4() {
    tmp_612_fu_73476_p4 = grp_fu_91280_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_613_fu_39794_p3() {
    tmp_613_fu_39794_p3 = add_ln395_228_fu_39788_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_614_fu_39827_p4() {
    tmp_614_fu_39827_p4 = grp_fu_88905_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_615_fu_73525_p3() {
    tmp_615_fu_73525_p3 = add_ln109_230_fu_73519_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_616_fu_73557_p4() {
    tmp_616_fu_73557_p4 = grp_fu_91289_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_617_fu_39876_p3() {
    tmp_617_fu_39876_p3 = add_ln395_230_fu_39870_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_618_fu_39908_p4() {
    tmp_618_fu_39908_p4 = grp_fu_88914_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_61_fu_56972_p4() {
    tmp_61_fu_56972_p4 = add_ln677_19_fu_56966_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_623_fu_73672_p3() {
    tmp_623_fu_73672_p3 = add_ln109_234_fu_73666_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_624_fu_73705_p4() {
    tmp_624_fu_73705_p4 = grp_fu_91306_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_625_fu_40023_p3() {
    tmp_625_fu_40023_p3 = add_ln395_234_fu_40017_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_626_fu_40056_p4() {
    tmp_626_fu_40056_p4 = grp_fu_88931_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_62_fu_56526_p4() {
    tmp_62_fu_56526_p4 = grp_fu_90071_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_631_fu_73828_p3() {
    tmp_631_fu_73828_p3 = add_ln109_238_fu_73822_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_632_fu_73861_p4() {
    tmp_632_fu_73861_p4 = grp_fu_91315_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_633_fu_40179_p3() {
    tmp_633_fu_40179_p3 = add_ln395_238_fu_40173_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_634_fu_40212_p4() {
    tmp_634_fu_40212_p4 = grp_fu_88940_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_635_fu_73910_p3() {
    tmp_635_fu_73910_p3 = add_ln109_240_fu_73904_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_636_fu_73942_p4() {
    tmp_636_fu_73942_p4 = grp_fu_91324_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_637_fu_40261_p3() {
    tmp_637_fu_40261_p3 = add_ln395_240_fu_40255_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_638_fu_40293_p4() {
    tmp_638_fu_40293_p4 = grp_fu_88949_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_63_fu_57048_p4() {
    tmp_63_fu_57048_p4 = add_ln677_21_fu_57042_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_643_fu_74057_p3() {
    tmp_643_fu_74057_p3 = add_ln109_244_fu_74051_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_644_fu_74090_p4() {
    tmp_644_fu_74090_p4 = grp_fu_91341_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_645_fu_40408_p3() {
    tmp_645_fu_40408_p3 = add_ln395_244_fu_40402_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_646_fu_40441_p4() {
    tmp_646_fu_40441_p4 = grp_fu_88966_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_647_fu_74139_p3() {
    tmp_647_fu_74139_p3 = add_ln109_246_fu_74133_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_648_fu_74171_p4() {
    tmp_648_fu_74171_p4 = grp_fu_91350_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_649_fu_40490_p3() {
    tmp_649_fu_40490_p3 = add_ln395_246_fu_40484_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_64_fu_56586_p4() {
    tmp_64_fu_56586_p4 = grp_fu_90080_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_650_fu_40522_p4() {
    tmp_650_fu_40522_p4 = grp_fu_88975_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_655_fu_74286_p3() {
    tmp_655_fu_74286_p3 = add_ln109_250_fu_74280_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_656_fu_74319_p4() {
    tmp_656_fu_74319_p4 = grp_fu_91367_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_657_fu_40637_p3() {
    tmp_657_fu_40637_p3 = add_ln395_250_fu_40631_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_658_fu_40670_p4() {
    tmp_658_fu_40670_p4 = grp_fu_88992_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_659_fu_74368_p3() {
    tmp_659_fu_74368_p3 = add_ln109_252_fu_74362_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_65_fu_57158_p4() {
    tmp_65_fu_57158_p4 = add_ln677_23_fu_57152_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_660_fu_74400_p4() {
    tmp_660_fu_74400_p4 = grp_fu_91376_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_661_fu_40719_p3() {
    tmp_661_fu_40719_p3 = add_ln395_252_fu_40713_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_662_fu_40751_p4() {
    tmp_662_fu_40751_p4 = grp_fu_89001_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_667_fu_74515_p3() {
    tmp_667_fu_74515_p3 = add_ln109_256_fu_74509_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_668_fu_74548_p4() {
    tmp_668_fu_74548_p4 = grp_fu_91393_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_669_fu_40866_p3() {
    tmp_669_fu_40866_p3 = add_ln395_256_fu_40860_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_66_fu_56646_p4() {
    tmp_66_fu_56646_p4 = grp_fu_90089_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_670_fu_40899_p4() {
    tmp_670_fu_40899_p4 = grp_fu_89018_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_671_fu_74597_p3() {
    tmp_671_fu_74597_p3 = add_ln109_258_fu_74591_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_672_fu_74629_p4() {
    tmp_672_fu_74629_p4 = grp_fu_91402_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_673_fu_40948_p3() {
    tmp_673_fu_40948_p3 = add_ln395_258_fu_40942_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_674_fu_40980_p4() {
    tmp_674_fu_40980_p4 = grp_fu_89027_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_679_fu_74744_p3() {
    tmp_679_fu_74744_p3 = add_ln109_262_fu_74738_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_67_fu_57233_p4() {
    tmp_67_fu_57233_p4 = add_ln677_25_fu_57227_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_680_fu_74777_p4() {
    tmp_680_fu_74777_p4 = grp_fu_91419_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_681_fu_41095_p3() {
    tmp_681_fu_41095_p3 = add_ln395_262_fu_41089_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_682_fu_41128_p4() {
    tmp_682_fu_41128_p4 = grp_fu_89044_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_683_fu_74826_p3() {
    tmp_683_fu_74826_p3 = add_ln109_264_fu_74820_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_684_fu_74858_p4() {
    tmp_684_fu_74858_p4 = grp_fu_91428_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_685_fu_41177_p3() {
    tmp_685_fu_41177_p3 = add_ln395_264_fu_41171_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_686_fu_41209_p4() {
    tmp_686_fu_41209_p4 = grp_fu_89053_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_68_fu_56706_p4() {
    tmp_68_fu_56706_p4 = grp_fu_90098_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_691_fu_74973_p3() {
    tmp_691_fu_74973_p3 = add_ln109_268_fu_74967_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_692_fu_75006_p4() {
    tmp_692_fu_75006_p4 = grp_fu_91445_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_693_fu_41324_p3() {
    tmp_693_fu_41324_p3 = add_ln395_268_fu_41318_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_694_fu_41357_p4() {
    tmp_694_fu_41357_p4 = grp_fu_89070_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_699_fu_75124_p3() {
    tmp_699_fu_75124_p3 = add_ln109_272_fu_75118_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_69_fu_57343_p4() {
    tmp_69_fu_57343_p4 = add_ln677_27_fu_57337_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_700_fu_75157_p4() {
    tmp_700_fu_75157_p4 = grp_fu_91454_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_701_fu_41475_p3() {
    tmp_701_fu_41475_p3 = add_ln395_272_fu_41469_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_702_fu_41508_p4() {
    tmp_702_fu_41508_p4 = grp_fu_89079_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_703_fu_75206_p3() {
    tmp_703_fu_75206_p3 = add_ln109_274_fu_75200_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_704_fu_75238_p4() {
    tmp_704_fu_75238_p4 = grp_fu_91463_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_705_fu_41557_p3() {
    tmp_705_fu_41557_p3 = add_ln395_274_fu_41551_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_706_fu_41589_p4() {
    tmp_706_fu_41589_p4 = grp_fu_89088_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_70_fu_56766_p4() {
    tmp_70_fu_56766_p4 = grp_fu_90107_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_711_fu_75353_p3() {
    tmp_711_fu_75353_p3 = add_ln109_278_fu_75347_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_712_fu_75386_p4() {
    tmp_712_fu_75386_p4 = grp_fu_91480_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_713_fu_41704_p3() {
    tmp_713_fu_41704_p3 = add_ln395_278_fu_41698_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_714_fu_41737_p4() {
    tmp_714_fu_41737_p4 = grp_fu_89105_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_715_fu_75435_p3() {
    tmp_715_fu_75435_p3 = add_ln109_280_fu_75429_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_716_fu_75467_p4() {
    tmp_716_fu_75467_p4 = grp_fu_91489_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_717_fu_41786_p3() {
    tmp_717_fu_41786_p3 = add_ln395_280_fu_41780_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_718_fu_41818_p4() {
    tmp_718_fu_41818_p4 = grp_fu_89114_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_71_fu_57418_p4() {
    tmp_71_fu_57418_p4 = add_ln677_29_fu_57412_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_723_fu_75582_p3() {
    tmp_723_fu_75582_p3 = add_ln109_284_fu_75576_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_724_fu_75615_p4() {
    tmp_724_fu_75615_p4 = grp_fu_91506_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_725_fu_41933_p3() {
    tmp_725_fu_41933_p3 = add_ln395_284_fu_41927_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_726_fu_41966_p4() {
    tmp_726_fu_41966_p4 = grp_fu_89131_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_727_fu_75664_p3() {
    tmp_727_fu_75664_p3 = add_ln109_286_fu_75658_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_728_fu_75696_p4() {
    tmp_728_fu_75696_p4 = grp_fu_91515_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_729_fu_42015_p3() {
    tmp_729_fu_42015_p3 = add_ln395_286_fu_42009_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_72_fu_56900_p4() {
    tmp_72_fu_56900_p4 = grp_fu_90116_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_730_fu_42047_p4() {
    tmp_730_fu_42047_p4 = grp_fu_89140_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_735_fu_75811_p3() {
    tmp_735_fu_75811_p3 = add_ln109_290_fu_75805_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_736_fu_75844_p4() {
    tmp_736_fu_75844_p4 = grp_fu_91532_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_737_fu_42162_p3() {
    tmp_737_fu_42162_p3 = add_ln395_290_fu_42156_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_738_fu_42195_p4() {
    tmp_738_fu_42195_p4 = grp_fu_89157_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_739_fu_75893_p3() {
    tmp_739_fu_75893_p3 = add_ln109_292_fu_75887_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_73_fu_57528_p4() {
    tmp_73_fu_57528_p4 = add_ln677_31_fu_57522_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_740_fu_75925_p4() {
    tmp_740_fu_75925_p4 = grp_fu_91541_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_741_fu_42244_p3() {
    tmp_741_fu_42244_p3 = add_ln395_292_fu_42238_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_742_fu_42276_p4() {
    tmp_742_fu_42276_p4 = grp_fu_89166_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_747_fu_76040_p3() {
    tmp_747_fu_76040_p3 = add_ln109_296_fu_76034_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_748_fu_76073_p4() {
    tmp_748_fu_76073_p4 = grp_fu_91558_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_749_fu_42391_p3() {
    tmp_749_fu_42391_p3 = add_ln395_296_fu_42385_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_74_fu_57098_p4() {
    tmp_74_fu_57098_p4 = grp_fu_90125_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_750_fu_42424_p4() {
    tmp_750_fu_42424_p4 = grp_fu_89183_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_751_fu_76122_p3() {
    tmp_751_fu_76122_p3 = add_ln109_298_fu_76116_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_752_fu_76154_p4() {
    tmp_752_fu_76154_p4 = grp_fu_91567_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_753_fu_42473_p3() {
    tmp_753_fu_42473_p3 = add_ln395_298_fu_42467_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_754_fu_42505_p4() {
    tmp_754_fu_42505_p4 = grp_fu_89192_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_759_fu_76269_p3() {
    tmp_759_fu_76269_p3 = add_ln109_302_fu_76263_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_75_fu_57603_p4() {
    tmp_75_fu_57603_p4 = add_ln677_33_fu_57597_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_760_fu_76302_p4() {
    tmp_760_fu_76302_p4 = grp_fu_91584_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_761_fu_42620_p3() {
    tmp_761_fu_42620_p3 = add_ln395_302_fu_42614_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_762_fu_42653_p4() {
    tmp_762_fu_42653_p4 = grp_fu_89209_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_767_fu_76421_p3() {
    tmp_767_fu_76421_p3 = add_ln109_306_fu_76415_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_768_fu_76454_p4() {
    tmp_768_fu_76454_p4 = grp_fu_91593_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_769_fu_42772_p3() {
    tmp_769_fu_42772_p3 = add_ln395_306_fu_42766_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_76_fu_57283_p4() {
    tmp_76_fu_57283_p4 = grp_fu_90134_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_770_fu_42805_p4() {
    tmp_770_fu_42805_p4 = grp_fu_89218_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_771_fu_76503_p3() {
    tmp_771_fu_76503_p3 = add_ln109_308_fu_76497_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_772_fu_76535_p4() {
    tmp_772_fu_76535_p4 = grp_fu_91602_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_773_fu_42854_p3() {
    tmp_773_fu_42854_p3 = add_ln395_308_fu_42848_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_774_fu_42886_p4() {
    tmp_774_fu_42886_p4 = grp_fu_89227_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_779_fu_76650_p3() {
    tmp_779_fu_76650_p3 = add_ln109_312_fu_76644_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_77_fu_57713_p4() {
    tmp_77_fu_57713_p4 = add_ln677_35_fu_57707_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_780_fu_76683_p4() {
    tmp_780_fu_76683_p4 = grp_fu_91619_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_781_fu_43001_p3() {
    tmp_781_fu_43001_p3 = add_ln395_312_fu_42995_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_782_fu_43034_p4() {
    tmp_782_fu_43034_p4 = grp_fu_89244_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_783_fu_76732_p3() {
    tmp_783_fu_76732_p3 = add_ln109_314_fu_76726_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_784_fu_76764_p4() {
    tmp_784_fu_76764_p4 = grp_fu_91628_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_785_fu_43083_p3() {
    tmp_785_fu_43083_p3 = add_ln395_314_fu_43077_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_786_fu_43115_p4() {
    tmp_786_fu_43115_p4 = grp_fu_89253_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_78_fu_57468_p4() {
    tmp_78_fu_57468_p4 = grp_fu_90143_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_791_fu_76879_p3() {
    tmp_791_fu_76879_p3 = add_ln109_318_fu_76873_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_792_fu_76912_p4() {
    tmp_792_fu_76912_p4 = grp_fu_91645_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_793_fu_43230_p3() {
    tmp_793_fu_43230_p3 = add_ln395_318_fu_43224_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_794_fu_43263_p4() {
    tmp_794_fu_43263_p4 = grp_fu_89270_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_795_fu_76961_p3() {
    tmp_795_fu_76961_p3 = add_ln109_320_fu_76955_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_796_fu_76993_p4() {
    tmp_796_fu_76993_p4 = grp_fu_91654_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_797_fu_43312_p3() {
    tmp_797_fu_43312_p3 = add_ln395_320_fu_43306_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_798_fu_43344_p4() {
    tmp_798_fu_43344_p4 = grp_fu_89279_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_79_fu_57788_p4() {
    tmp_79_fu_57788_p4 = add_ln677_37_fu_57782_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_803_fu_77108_p3() {
    tmp_803_fu_77108_p3 = add_ln109_324_fu_77102_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_804_fu_77141_p4() {
    tmp_804_fu_77141_p4 = grp_fu_91671_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_805_fu_43459_p3() {
    tmp_805_fu_43459_p3 = add_ln395_324_fu_43453_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_806_fu_43492_p4() {
    tmp_806_fu_43492_p4 = grp_fu_89296_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_807_fu_77190_p3() {
    tmp_807_fu_77190_p3 = add_ln109_326_fu_77184_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_808_fu_77222_p4() {
    tmp_808_fu_77222_p4 = grp_fu_91680_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_809_fu_43541_p3() {
    tmp_809_fu_43541_p3 = add_ln395_326_fu_43535_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_80_fu_57653_p4() {
    tmp_80_fu_57653_p4 = grp_fu_90152_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_810_fu_43573_p4() {
    tmp_810_fu_43573_p4 = grp_fu_89305_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_815_fu_77337_p3() {
    tmp_815_fu_77337_p3 = add_ln109_330_fu_77331_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_816_fu_77370_p4() {
    tmp_816_fu_77370_p4 = grp_fu_91697_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_817_fu_43688_p3() {
    tmp_817_fu_43688_p3 = add_ln395_330_fu_43682_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_818_fu_43721_p4() {
    tmp_818_fu_43721_p4 = grp_fu_89322_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_819_fu_77419_p3() {
    tmp_819_fu_77419_p3 = add_ln109_332_fu_77413_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_81_fu_57898_p4() {
    tmp_81_fu_57898_p4 = add_ln677_39_fu_57892_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_820_fu_77451_p4() {
    tmp_820_fu_77451_p4 = grp_fu_91706_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_821_fu_43770_p3() {
    tmp_821_fu_43770_p3 = add_ln395_332_fu_43764_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_822_fu_43802_p4() {
    tmp_822_fu_43802_p4 = grp_fu_89331_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_827_fu_77566_p3() {
    tmp_827_fu_77566_p3 = add_ln109_336_fu_77560_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_828_fu_77599_p4() {
    tmp_828_fu_77599_p4 = grp_fu_91723_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_829_fu_43917_p3() {
    tmp_829_fu_43917_p3 = add_ln395_336_fu_43911_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_82_fu_57838_p4() {
    tmp_82_fu_57838_p4 = grp_fu_90161_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_830_fu_43950_p4() {
    tmp_830_fu_43950_p4 = grp_fu_89348_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_835_fu_77718_p3() {
    tmp_835_fu_77718_p3 = add_ln109_340_fu_77712_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_836_fu_77751_p4() {
    tmp_836_fu_77751_p4 = grp_fu_91732_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_837_fu_44069_p3() {
    tmp_837_fu_44069_p3 = add_ln395_340_fu_44063_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_838_fu_44102_p4() {
    tmp_838_fu_44102_p4 = grp_fu_89357_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_839_fu_77800_p3() {
    tmp_839_fu_77800_p3 = add_ln109_342_fu_77794_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_83_fu_58019_p4() {
    tmp_83_fu_58019_p4 = add_ln677_41_fu_58013_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_840_fu_77832_p4() {
    tmp_840_fu_77832_p4 = grp_fu_91741_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_841_fu_44151_p3() {
    tmp_841_fu_44151_p3 = add_ln395_342_fu_44145_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_842_fu_44183_p4() {
    tmp_842_fu_44183_p4 = grp_fu_89366_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_847_fu_77947_p3() {
    tmp_847_fu_77947_p3 = add_ln109_346_fu_77941_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_848_fu_77980_p4() {
    tmp_848_fu_77980_p4 = grp_fu_91758_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_849_fu_44298_p3() {
    tmp_849_fu_44298_p3 = add_ln395_346_fu_44292_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_84_fu_57949_p4() {
    tmp_84_fu_57949_p4 = grp_fu_90170_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_850_fu_44331_p4() {
    tmp_850_fu_44331_p4 = grp_fu_89383_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_851_fu_78029_p3() {
    tmp_851_fu_78029_p3 = add_ln109_348_fu_78023_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_852_fu_78061_p4() {
    tmp_852_fu_78061_p4 = grp_fu_91767_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_853_fu_44380_p3() {
    tmp_853_fu_44380_p3 = add_ln395_348_fu_44374_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_854_fu_44412_p4() {
    tmp_854_fu_44412_p4 = grp_fu_89392_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_859_fu_78176_p3() {
    tmp_859_fu_78176_p3 = add_ln109_352_fu_78170_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_85_fu_58095_p4() {
    tmp_85_fu_58095_p4 = add_ln677_43_fu_58089_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_860_fu_78209_p4() {
    tmp_860_fu_78209_p4 = grp_fu_91784_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_861_fu_44527_p3() {
    tmp_861_fu_44527_p3 = add_ln395_352_fu_44521_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_862_fu_44560_p4() {
    tmp_862_fu_44560_p4 = grp_fu_89409_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_863_fu_78258_p3() {
    tmp_863_fu_78258_p3 = add_ln109_354_fu_78252_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_864_fu_78290_p4() {
    tmp_864_fu_78290_p4 = grp_fu_91793_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_865_fu_44609_p3() {
    tmp_865_fu_44609_p3 = add_ln395_354_fu_44603_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_866_fu_44641_p4() {
    tmp_866_fu_44641_p4 = grp_fu_89418_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_86_fu_58147_p4() {
    tmp_86_fu_58147_p4 = grp_fu_90179_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_871_fu_78405_p3() {
    tmp_871_fu_78405_p3 = add_ln109_358_fu_78399_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_872_fu_78438_p4() {
    tmp_872_fu_78438_p4 = grp_fu_91810_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_873_fu_44756_p3() {
    tmp_873_fu_44756_p3 = add_ln395_358_fu_44750_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_874_fu_44789_p4() {
    tmp_874_fu_44789_p4 = grp_fu_89435_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_875_fu_78487_p3() {
    tmp_875_fu_78487_p3 = add_ln109_360_fu_78481_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_876_fu_78519_p4() {
    tmp_876_fu_78519_p4 = grp_fu_91819_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_877_fu_44838_p3() {
    tmp_877_fu_44838_p3 = add_ln395_360_fu_44832_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_878_fu_44870_p4() {
    tmp_878_fu_44870_p4 = grp_fu_89444_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_87_fu_58207_p4() {
    tmp_87_fu_58207_p4 = add_ln677_45_fu_58201_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_883_fu_78634_p3() {
    tmp_883_fu_78634_p3 = add_ln109_364_fu_78628_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_884_fu_78667_p4() {
    tmp_884_fu_78667_p4 = grp_fu_91836_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_885_fu_44985_p3() {
    tmp_885_fu_44985_p3 = add_ln395_364_fu_44979_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_886_fu_45018_p4() {
    tmp_886_fu_45018_p4 = grp_fu_89461_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_887_fu_78716_p3() {
    tmp_887_fu_78716_p3 = add_ln109_366_fu_78710_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_888_fu_78748_p4() {
    tmp_888_fu_78748_p4 = grp_fu_91845_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_889_fu_45067_p3() {
    tmp_889_fu_45067_p3 = add_ln395_366_fu_45061_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_88_fu_58262_p4() {
    tmp_88_fu_58262_p4 = grp_fu_90188_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_890_fu_45099_p4() {
    tmp_890_fu_45099_p4 = grp_fu_89470_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_895_fu_78863_p3() {
    tmp_895_fu_78863_p3 = add_ln109_370_fu_78857_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_896_fu_78896_p4() {
    tmp_896_fu_78896_p4 = grp_fu_91862_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_897_fu_45214_p3() {
    tmp_897_fu_45214_p3 = add_ln395_370_fu_45208_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_898_fu_45247_p4() {
    tmp_898_fu_45247_p4 = grp_fu_89487_p3.read().range(11, 8);
}

void poly1305_hw::thread_tmp_89_fu_64359_p4() {
    tmp_89_fu_64359_p4 = grp_fu_90233_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_8_fu_56237_p17() {
    tmp_8_fu_56237_p17 = i87_0_reg_12421.read().range(4-1, 0);
}

void poly1305_hw::thread_tmp_903_fu_79019_p3() {
    tmp_903_fu_79019_p3 = add_ln109_374_fu_79013_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_904_fu_79052_p4() {
    tmp_904_fu_79052_p4 = grp_fu_91871_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_905_fu_45370_p3() {
    tmp_905_fu_45370_p3 = add_ln395_374_fu_45364_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_906_fu_45403_p4() {
    tmp_906_fu_45403_p4 = grp_fu_89496_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_907_fu_79101_p3() {
    tmp_907_fu_79101_p3 = add_ln109_376_fu_79095_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_908_fu_79133_p4() {
    tmp_908_fu_79133_p4 = grp_fu_91880_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_909_fu_45452_p3() {
    tmp_909_fu_45452_p3 = add_ln395_376_fu_45446_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_90_fu_30710_p4() {
    tmp_90_fu_30710_p4 = grp_fu_87858_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_910_fu_45484_p4() {
    tmp_910_fu_45484_p4 = grp_fu_89505_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_915_fu_79248_p3() {
    tmp_915_fu_79248_p3 = add_ln109_380_fu_79242_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_916_fu_79281_p4() {
    tmp_916_fu_79281_p4 = grp_fu_91897_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_917_fu_45599_p3() {
    tmp_917_fu_45599_p3 = add_ln395_380_fu_45593_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_918_fu_45632_p4() {
    tmp_918_fu_45632_p4 = grp_fu_89522_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_919_fu_79330_p3() {
    tmp_919_fu_79330_p3 = add_ln109_382_fu_79324_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_91_fu_58339_p4() {
    tmp_91_fu_58339_p4 = add_ln677_47_fu_58333_p2.read().range(9, 8);
}

void poly1305_hw::thread_tmp_920_fu_79362_p4() {
    tmp_920_fu_79362_p4 = grp_fu_91906_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_921_fu_45681_p3() {
    tmp_921_fu_45681_p3 = add_ln395_382_fu_45675_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_922_fu_45713_p4() {
    tmp_922_fu_45713_p4 = grp_fu_89531_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_927_fu_79477_p3() {
    tmp_927_fu_79477_p3 = add_ln109_386_fu_79471_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_928_fu_79510_p4() {
    tmp_928_fu_79510_p4 = grp_fu_91923_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_929_fu_45828_p3() {
    tmp_929_fu_45828_p3 = add_ln395_386_fu_45822_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_930_fu_45861_p4() {
    tmp_930_fu_45861_p4 = grp_fu_89548_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_931_fu_79559_p3() {
    tmp_931_fu_79559_p3 = add_ln109_388_fu_79553_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_932_fu_79591_p4() {
    tmp_932_fu_79591_p4 = grp_fu_91932_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_933_fu_45910_p3() {
    tmp_933_fu_45910_p3 = add_ln395_388_fu_45904_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_934_fu_45942_p4() {
    tmp_934_fu_45942_p4 = grp_fu_89557_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_939_fu_79706_p3() {
    tmp_939_fu_79706_p3 = add_ln109_392_fu_79700_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_940_fu_79739_p4() {
    tmp_940_fu_79739_p4 = grp_fu_91949_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_941_fu_46057_p3() {
    tmp_941_fu_46057_p3 = add_ln395_392_fu_46051_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_942_fu_46090_p4() {
    tmp_942_fu_46090_p4 = grp_fu_89574_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_943_fu_79788_p3() {
    tmp_943_fu_79788_p3 = add_ln109_394_fu_79782_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_944_fu_79820_p4() {
    tmp_944_fu_79820_p4 = grp_fu_91958_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_945_fu_46139_p3() {
    tmp_945_fu_46139_p3 = add_ln395_394_fu_46133_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_946_fu_46171_p4() {
    tmp_946_fu_46171_p4 = grp_fu_89583_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_951_fu_79935_p3() {
    tmp_951_fu_79935_p3 = add_ln109_398_fu_79929_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_952_fu_79968_p4() {
    tmp_952_fu_79968_p4 = grp_fu_91975_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_953_fu_46286_p3() {
    tmp_953_fu_46286_p3 = add_ln395_398_fu_46280_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_954_fu_46319_p4() {
    tmp_954_fu_46319_p4 = grp_fu_89600_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_955_fu_80017_p3() {
    tmp_955_fu_80017_p3 = add_ln109_400_fu_80011_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_956_fu_80049_p4() {
    tmp_956_fu_80049_p4 = grp_fu_91984_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_957_fu_46368_p3() {
    tmp_957_fu_46368_p3 = add_ln395_400_fu_46362_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_958_fu_46400_p4() {
    tmp_958_fu_46400_p4 = grp_fu_89609_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_95_fu_64415_p4() {
    tmp_95_fu_64415_p4 = grp_fu_90251_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_963_fu_80164_p3() {
    tmp_963_fu_80164_p3 = add_ln109_404_fu_80158_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_964_fu_80197_p4() {
    tmp_964_fu_80197_p4 = grp_fu_92001_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_965_fu_46515_p3() {
    tmp_965_fu_46515_p3 = add_ln395_404_fu_46509_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_966_fu_46548_p4() {
    tmp_966_fu_46548_p4 = grp_fu_89626_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_96_fu_30766_p4() {
    tmp_96_fu_30766_p4 = grp_fu_87876_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_971_fu_80315_p3() {
    tmp_971_fu_80315_p3 = add_ln109_408_fu_80309_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_972_fu_80348_p4() {
    tmp_972_fu_80348_p4 = grp_fu_92010_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_973_fu_46666_p3() {
    tmp_973_fu_46666_p3 = add_ln395_408_fu_46660_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_974_fu_46699_p4() {
    tmp_974_fu_46699_p4 = grp_fu_89635_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_975_fu_80397_p3() {
    tmp_975_fu_80397_p3 = add_ln109_410_fu_80391_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_976_fu_80429_p4() {
    tmp_976_fu_80429_p4 = grp_fu_92019_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_977_fu_46748_p3() {
    tmp_977_fu_46748_p3 = add_ln395_410_fu_46742_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_978_fu_46780_p4() {
    tmp_978_fu_46780_p4 = grp_fu_89644_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_97_fu_58471_p3() {
    tmp_97_fu_58471_p3 = boolean98_0_reg_12479.read().range(2, 2);
}

void poly1305_hw::thread_tmp_983_fu_80544_p3() {
    tmp_983_fu_80544_p3 = add_ln109_414_fu_80538_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_984_fu_80577_p4() {
    tmp_984_fu_80577_p4 = grp_fu_92036_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_985_fu_46895_p3() {
    tmp_985_fu_46895_p3 = add_ln395_414_fu_46889_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_986_fu_46928_p4() {
    tmp_986_fu_46928_p4 = grp_fu_89661_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_987_fu_80626_p3() {
    tmp_987_fu_80626_p3 = add_ln109_416_fu_80620_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_988_fu_80658_p4() {
    tmp_988_fu_80658_p4 = grp_fu_92045_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_989_fu_46977_p3() {
    tmp_989_fu_46977_p3 = add_ln395_416_fu_46971_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_98_fu_64452_p4() {
    tmp_98_fu_64452_p4 = grp_fu_90260_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_990_fu_47009_p4() {
    tmp_990_fu_47009_p4 = grp_fu_89670_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_995_fu_80773_p3() {
    tmp_995_fu_80773_p3 = add_ln109_420_fu_80767_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_996_fu_80806_p4() {
    tmp_996_fu_80806_p4 = grp_fu_92062_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_997_fu_47124_p3() {
    tmp_997_fu_47124_p3 = add_ln395_420_fu_47118_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_998_fu_47157_p4() {
    tmp_998_fu_47157_p4 = grp_fu_89687_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_999_fu_80855_p3() {
    tmp_999_fu_80855_p3 = add_ln109_422_fu_80849_p2.read().range(8, 8);
}

void poly1305_hw::thread_tmp_99_fu_30803_p4() {
    tmp_99_fu_30803_p4 = grp_fu_87885_p3.read().range(15, 8);
}

void poly1305_hw::thread_tmp_9_fu_27236_p4() {
    tmp_9_fu_27236_p4 = r_14_4_fu_6724.read().range(7, 2);
}

void poly1305_hw::thread_tmp_last_V_1_fu_87816_p2() {
    tmp_last_V_1_fu_87816_p2 = (!i122_0_reg_16431.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(i122_0_reg_16431.read() == ap_const_lv5_F);
}

void poly1305_hw::thread_tmp_s_fu_27254_p4() {
    tmp_s_fu_27254_p4 = r_14_5_fu_6728.read().range(7, 2);
}

void poly1305_hw::thread_trunc_ln109_10_fu_64532_p1() {
    trunc_ln109_10_fu_64532_p1 = add_ln96_9_reg_111032.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_11_fu_64570_p1() {
    trunc_ln109_11_fu_64570_p1 = grp_fu_90287_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_12_fu_64588_p1() {
    trunc_ln109_12_fu_64588_p1 = add_ln96_11_reg_111098.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_13_fu_64625_p1() {
    trunc_ln109_13_fu_64625_p1 = add_ln96_12_reg_111149.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_14_fu_64663_p1() {
    trunc_ln109_14_fu_64663_p1 = grp_fu_90314_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_15_fu_64681_p1() {
    trunc_ln109_15_fu_64681_p1 = add_ln96_14_reg_111215.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_16_fu_64718_p1() {
    trunc_ln109_16_fu_64718_p1 = grp_fu_90332_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_1_fu_64253_p1() {
    trunc_ln109_1_fu_64253_p1 = add_ln96_reg_110681.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_2_fu_64291_p1() {
    trunc_ln109_2_fu_64291_p1 = grp_fu_90206_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_3_fu_64309_p1() {
    trunc_ln109_3_fu_64309_p1 = add_ln96_2_reg_110747.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_4_fu_64346_p1() {
    trunc_ln109_4_fu_64346_p1 = add_ln96_3_reg_110798.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_5_fu_64384_p1() {
    trunc_ln109_5_fu_64384_p1 = grp_fu_90233_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_6_fu_64402_p1() {
    trunc_ln109_6_fu_64402_p1 = add_ln96_5_reg_110864.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_7_fu_64439_p1() {
    trunc_ln109_7_fu_64439_p1 = add_ln96_6_reg_110915.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_8_fu_64477_p1() {
    trunc_ln109_8_fu_64477_p1 = grp_fu_90260_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_9_fu_64495_p1() {
    trunc_ln109_9_fu_64495_p1 = add_ln96_8_reg_110981.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln109_fu_64216_p1() {
    trunc_ln109_fu_64216_p1 = mul_ln96_reg_110622.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln10_fu_84877_p4() {
    trunc_ln10_fu_84877_p4 = mul_ln230_fu_84851_p2.read().range(17, 8);
}

void poly1305_hw::thread_trunc_ln11_fu_84946_p4() {
    trunc_ln11_fu_84946_p4 = add_ln243_1_fu_84919_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln12_fu_51228_p4() {
    trunc_ln12_fu_51228_p4 = mul_ln514_fu_51202_p2.read().range(17, 8);
}

void poly1305_hw::thread_trunc_ln13_1_fu_21730_p1() {
    trunc_ln13_1_fu_21730_p1 = textLength_0_reg_8547.read().range(4-1, 0);
}

void poly1305_hw::thread_trunc_ln13_fu_51297_p4() {
    trunc_ln13_fu_51297_p4 = add_ln527_1_fu_51270_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln230_10_fu_86264_p1() {
    trunc_ln230_10_fu_86264_p1 = select_ln231_9_fu_86187_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_11_fu_86418_p1() {
    trunc_ln230_11_fu_86418_p1 = select_ln231_10_fu_86337_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_12_fu_86552_p1() {
    trunc_ln230_12_fu_86552_p1 = select_ln231_11_fu_86495_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_13_fu_86677_p1() {
    trunc_ln230_13_fu_86677_p1 = select_ln231_12_fu_86592_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_14_fu_86803_p1() {
    trunc_ln230_14_fu_86803_p1 = select_ln231_13_fu_86725_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_15_fu_86884_p1() {
    trunc_ln230_15_fu_86884_p1 = select_ln231_14_fu_86843_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_16_fu_87080_p1() {
    trunc_ln230_16_fu_87080_p1 = select_ln231_15_fu_86978_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_17_fu_87084_p1() {
    trunc_ln230_17_fu_87084_p1 = sub_ln230_1_fu_87070_p2.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_1_fu_84985_p1() {
    trunc_ln230_1_fu_84985_p1 = sub_ln230_fu_84975_p2.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_2_fu_85146_p1() {
    trunc_ln230_2_fu_85146_p1 = select_ln231_1_fu_85065_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_3_fu_85297_p1() {
    trunc_ln230_3_fu_85297_p1 = select_ln231_2_fu_85240_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_4_fu_85414_p1() {
    trunc_ln230_4_fu_85414_p1 = select_ln231_3_fu_85337_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_5_fu_85570_p1() {
    trunc_ln230_5_fu_85570_p1 = select_ln231_4_fu_85489_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_6_fu_85720_p1() {
    trunc_ln230_6_fu_85720_p1 = select_ln231_5_fu_85663_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_7_fu_85837_p1() {
    trunc_ln230_7_fu_85837_p1 = select_ln231_6_fu_85760_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_8_fu_85993_p1() {
    trunc_ln230_8_fu_85993_p1 = select_ln231_7_fu_85912_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_9_fu_86147_p1() {
    trunc_ln230_9_fu_86147_p1 = select_ln231_8_fu_86090_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln230_fu_84981_p1() {
    trunc_ln230_fu_84981_p1 = select_ln231_fu_84887_p3.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln231_fu_84857_p1() {
    trunc_ln231_fu_84857_p1 = mul_ln230_fu_84851_p2.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln232_11_fu_86582_p4() {
    trunc_ln232_11_fu_86582_p4 = add_ln230_11_fu_86556_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln232_13_fu_86833_p4() {
    trunc_ln232_13_fu_86833_p4 = add_ln230_13_fu_86807_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln232_15_fu_87116_p4() {
    trunc_ln232_15_fu_87116_p4 = add_ln230_15_fu_87088_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln232_1_fu_85055_p4() {
    trunc_ln232_1_fu_85055_p4 = add_ln230_fu_85033_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln232_3_fu_85327_p4() {
    trunc_ln232_3_fu_85327_p4 = add_ln230_2_fu_85301_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln232_4_fu_85479_p4() {
    trunc_ln232_4_fu_85479_p4 = add_ln230_3_fu_85458_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln232_6_fu_85750_p4() {
    trunc_ln232_6_fu_85750_p4 = add_ln230_5_fu_85724_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln232_7_fu_85902_p4() {
    trunc_ln232_7_fu_85902_p4 = add_ln230_6_fu_85881_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln232_9_fu_86177_p4() {
    trunc_ln232_9_fu_86177_p4 = add_ln230_8_fu_86151_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln232_s_fu_86327_p4() {
    trunc_ln232_s_fu_86327_p4 = add_ln230_9_fu_86306_p2.read().range(25, 8);
}

void poly1305_hw::thread_trunc_ln243_10_fu_85846_p1() {
    trunc_ln243_10_fu_85846_p1 = temp_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_11_fu_85850_p1() {
    trunc_ln243_11_fu_85850_p1 = temp_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_12_fu_86058_p1() {
    trunc_ln243_12_fu_86058_p1 = temp_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_13_fu_86062_p1() {
    trunc_ln243_13_fu_86062_p1 = temp_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_14_fu_86273_p1() {
    trunc_ln243_14_fu_86273_p1 = temp_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_15_fu_86277_p1() {
    trunc_ln243_15_fu_86277_p1 = temp_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_16_fu_86483_p1() {
    trunc_ln243_16_fu_86483_p1 = temp_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_1_fu_84824_p1() {
    trunc_ln243_1_fu_84824_p1 = temp_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_2_fu_84995_p1() {
    trunc_ln243_2_fu_84995_p1 = temp_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_3_fu_84999_p1() {
    trunc_ln243_3_fu_84999_p1 = temp_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_4_fu_85212_p1() {
    trunc_ln243_4_fu_85212_p1 = temp_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_5_fu_85216_p1() {
    trunc_ln243_5_fu_85216_p1 = temp_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_6_fu_85423_p1() {
    trunc_ln243_6_fu_85423_p1 = temp_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_7_fu_85427_p1() {
    trunc_ln243_7_fu_85427_p1 = temp_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_8_fu_85635_p1() {
    trunc_ln243_8_fu_85635_p1 = temp_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_9_fu_85639_p1() {
    trunc_ln243_9_fu_85639_p1 = temp_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln243_fu_84820_p1() {
    trunc_ln243_fu_84820_p1 = temp_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln245_10_fu_86534_p4() {
    trunc_ln245_10_fu_86534_p4 = add_ln243_38_fu_86512_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_11_fu_86659_p4() {
    trunc_ln245_11_fu_86659_p4 = add_ln243_40_fu_86632_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_12_fu_86785_p4() {
    trunc_ln245_12_fu_86785_p4 = add_ln243_42_fu_86759_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_13_fu_86960_p4() {
    trunc_ln245_13_fu_86960_p4 = add_ln243_44_fu_86938_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_14_fu_87041_p4() {
    trunc_ln245_14_fu_87041_p4 = add_ln243_46_fu_87014_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_15_fu_87241_p4() {
    trunc_ln245_15_fu_87241_p4 = add_ln243_48_fu_87219_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_1_fu_85128_p4() {
    trunc_ln245_1_fu_85128_p4 = add_ln243_18_fu_85101_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_2_fu_85279_p4() {
    trunc_ln245_2_fu_85279_p4 = add_ln243_20_fu_85257_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_3_fu_85396_p4() {
    trunc_ln245_3_fu_85396_p4 = add_ln243_22_fu_85369_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_4_fu_85552_p4() {
    trunc_ln245_4_fu_85552_p4 = add_ln243_24_fu_85525_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_5_fu_85702_p4() {
    trunc_ln245_5_fu_85702_p4 = add_ln243_26_fu_85680_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_6_fu_85819_p4() {
    trunc_ln245_6_fu_85819_p4 = add_ln243_28_fu_85792_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_7_fu_85975_p4() {
    trunc_ln245_7_fu_85975_p4 = add_ln243_30_fu_85948_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_8_fu_86129_p4() {
    trunc_ln245_8_fu_86129_p4 = add_ln243_32_fu_86107_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_9_fu_86246_p4() {
    trunc_ln245_9_fu_86246_p4 = add_ln243_34_fu_86219_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln245_s_fu_86400_p4() {
    trunc_ln245_s_fu_86400_p4 = add_ln243_36_fu_86373_p2.read().range(15, 8);
}

void poly1305_hw::thread_trunc_ln26_fu_21939_p1() {
    trunc_ln26_fu_21939_p1 = i_0_reg_8570.read().range(10-1, 0);
}

void poly1305_hw::thread_trunc_ln29_1_fu_27003_p1() {
    trunc_ln29_1_fu_27003_p1 = i1_0_reg_8581.read().range(5-1, 0);
}

void poly1305_hw::thread_trunc_ln2_fu_56111_p4() {
    trunc_ln2_fu_56111_p4 = sum_fu_56089_p2.read().range(9, 8);
}

void poly1305_hw::thread_trunc_ln326_10_fu_87667_p1() {
    trunc_ln326_10_fu_87667_p1 = arr1_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln326_11_fu_87672_p1() {
    trunc_ln326_11_fu_87672_p1 = arr1_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln326_12_fu_87677_p1() {
    trunc_ln326_12_fu_87677_p1 = arr1_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln326_13_fu_87682_p1() {
    trunc_ln326_13_fu_87682_p1 = arr1_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln326_14_fu_87687_p1() {
    trunc_ln326_14_fu_87687_p1 = arr1_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln326_15_fu_87692_p1() {
    trunc_ln326_15_fu_87692_p1 = arr1_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln326_16_fu_87697_p1() {
    trunc_ln326_16_fu_87697_p1 = arr1_q0.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln326_1_fu_87622_p1() {
    trunc_ln326_1_fu_87622_p1 = arr1_q1.read().range(8-1, 0);
}

void poly1305_hw::thread_trunc_ln326_2_fu_87627_p1() {
    trunc_ln326_2_fu_87627_p1 = arr1_q0.read().range(8-1, 0);
}

}

