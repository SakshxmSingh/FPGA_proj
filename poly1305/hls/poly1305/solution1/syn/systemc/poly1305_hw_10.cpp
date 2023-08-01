#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_grp_fu_91445_p0() {
    grp_fu_91445_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_91445_p1() {
    grp_fu_91445_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91445_p2() {
    grp_fu_91445_p2 =  (sc_lv<8>) (grp_fu_91445_p20.read());
}

void poly1305_hw::thread_grp_fu_91445_p20() {
    grp_fu_91445_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_15_phi_fu_14421_p4.read());
}

void poly1305_hw::thread_grp_fu_91454_p0() {
    grp_fu_91454_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_91454_p1() {
    grp_fu_91454_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91454_p2() {
    grp_fu_91454_p2 =  (sc_lv<8>) (grp_fu_91454_p20.read());
}

void poly1305_hw::thread_grp_fu_91454_p20() {
    grp_fu_91454_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_0_phi_fu_14443_p4.read());
}

void poly1305_hw::thread_grp_fu_91463_p0() {
    grp_fu_91463_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_91463_p1() {
    grp_fu_91463_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91463_p2() {
    grp_fu_91463_p2 =  (sc_lv<8>) (grp_fu_91463_p20.read());
}

void poly1305_hw::thread_grp_fu_91463_p20() {
    grp_fu_91463_p20 = esl_zext<16,8>(mulCarry_1_9_1_reg_14450.read());
}

void poly1305_hw::thread_grp_fu_91472_p0() {
    grp_fu_91472_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_91472_p1() {
    grp_fu_91472_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91472_p2() {
    grp_fu_91472_p2 =  (sc_lv<8>) (grp_fu_91472_p20.read());
}

void poly1305_hw::thread_grp_fu_91472_p20() {
    grp_fu_91472_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_2_phi_fu_14464_p4.read());
}

void poly1305_hw::thread_grp_fu_91480_p0() {
    grp_fu_91480_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_91480_p1() {
    grp_fu_91480_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91480_p2() {
    grp_fu_91480_p2 =  (sc_lv<8>) (grp_fu_91480_p20.read());
}

void poly1305_hw::thread_grp_fu_91480_p20() {
    grp_fu_91480_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_3_phi_fu_14474_p4.read());
}

void poly1305_hw::thread_grp_fu_91489_p0() {
    grp_fu_91489_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_91489_p1() {
    grp_fu_91489_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91489_p2() {
    grp_fu_91489_p2 =  (sc_lv<8>) (grp_fu_91489_p20.read());
}

void poly1305_hw::thread_grp_fu_91489_p20() {
    grp_fu_91489_p20 = esl_zext<16,8>(mulCarry_1_9_4_reg_14481.read());
}

void poly1305_hw::thread_grp_fu_91498_p0() {
    grp_fu_91498_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_91498_p1() {
    grp_fu_91498_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91498_p2() {
    grp_fu_91498_p2 =  (sc_lv<8>) (grp_fu_91498_p20.read());
}

void poly1305_hw::thread_grp_fu_91498_p20() {
    grp_fu_91498_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_5_phi_fu_14495_p4.read());
}

void poly1305_hw::thread_grp_fu_91506_p0() {
    grp_fu_91506_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_91506_p1() {
    grp_fu_91506_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91506_p2() {
    grp_fu_91506_p2 =  (sc_lv<8>) (grp_fu_91506_p20.read());
}

void poly1305_hw::thread_grp_fu_91506_p20() {
    grp_fu_91506_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_6_phi_fu_14505_p4.read());
}

void poly1305_hw::thread_grp_fu_91515_p0() {
    grp_fu_91515_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_91515_p1() {
    grp_fu_91515_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91515_p2() {
    grp_fu_91515_p2 =  (sc_lv<8>) (grp_fu_91515_p20.read());
}

void poly1305_hw::thread_grp_fu_91515_p20() {
    grp_fu_91515_p20 = esl_zext<16,8>(mulCarry_1_9_7_reg_14512.read());
}

void poly1305_hw::thread_grp_fu_91524_p0() {
    grp_fu_91524_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_91524_p1() {
    grp_fu_91524_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91524_p2() {
    grp_fu_91524_p2 =  (sc_lv<8>) (grp_fu_91524_p20.read());
}

void poly1305_hw::thread_grp_fu_91524_p20() {
    grp_fu_91524_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_8_phi_fu_14526_p4.read());
}

void poly1305_hw::thread_grp_fu_91532_p0() {
    grp_fu_91532_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_91532_p1() {
    grp_fu_91532_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91532_p2() {
    grp_fu_91532_p2 =  (sc_lv<8>) (grp_fu_91532_p20.read());
}

void poly1305_hw::thread_grp_fu_91532_p20() {
    grp_fu_91532_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_9_phi_fu_14536_p4.read());
}

void poly1305_hw::thread_grp_fu_91541_p0() {
    grp_fu_91541_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_91541_p1() {
    grp_fu_91541_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91541_p2() {
    grp_fu_91541_p2 =  (sc_lv<8>) (grp_fu_91541_p20.read());
}

void poly1305_hw::thread_grp_fu_91541_p20() {
    grp_fu_91541_p20 = esl_zext<16,8>(mulCarry_1_9_10_reg_14543.read());
}

void poly1305_hw::thread_grp_fu_91550_p0() {
    grp_fu_91550_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_91550_p1() {
    grp_fu_91550_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91550_p2() {
    grp_fu_91550_p2 =  (sc_lv<8>) (grp_fu_91550_p20.read());
}

void poly1305_hw::thread_grp_fu_91550_p20() {
    grp_fu_91550_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_11_phi_fu_14557_p4.read());
}

void poly1305_hw::thread_grp_fu_91558_p0() {
    grp_fu_91558_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_91558_p1() {
    grp_fu_91558_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91558_p2() {
    grp_fu_91558_p2 =  (sc_lv<8>) (grp_fu_91558_p20.read());
}

void poly1305_hw::thread_grp_fu_91558_p20() {
    grp_fu_91558_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_12_phi_fu_14567_p4.read());
}

void poly1305_hw::thread_grp_fu_91567_p0() {
    grp_fu_91567_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_91567_p1() {
    grp_fu_91567_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91567_p2() {
    grp_fu_91567_p2 =  (sc_lv<8>) (grp_fu_91567_p20.read());
}

void poly1305_hw::thread_grp_fu_91567_p20() {
    grp_fu_91567_p20 = esl_zext<16,8>(mulCarry_1_9_13_reg_14574.read());
}

void poly1305_hw::thread_grp_fu_91576_p0() {
    grp_fu_91576_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_91576_p1() {
    grp_fu_91576_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91576_p2() {
    grp_fu_91576_p2 =  (sc_lv<8>) (grp_fu_91576_p20.read());
}

void poly1305_hw::thread_grp_fu_91576_p20() {
    grp_fu_91576_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_14_phi_fu_14588_p4.read());
}

void poly1305_hw::thread_grp_fu_91584_p0() {
    grp_fu_91584_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_91584_p1() {
    grp_fu_91584_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_91584_p2() {
    grp_fu_91584_p2 =  (sc_lv<8>) (grp_fu_91584_p20.read());
}

void poly1305_hw::thread_grp_fu_91584_p20() {
    grp_fu_91584_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_9_15_phi_fu_14598_p4.read());
}

void poly1305_hw::thread_grp_fu_91593_p0() {
    grp_fu_91593_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_91593_p1() {
    grp_fu_91593_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91593_p2() {
    grp_fu_91593_p2 =  (sc_lv<8>) (grp_fu_91593_p20.read());
}

void poly1305_hw::thread_grp_fu_91593_p20() {
    grp_fu_91593_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_0_phi_fu_14620_p4.read());
}

void poly1305_hw::thread_grp_fu_91602_p0() {
    grp_fu_91602_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_91602_p1() {
    grp_fu_91602_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91602_p2() {
    grp_fu_91602_p2 =  (sc_lv<8>) (grp_fu_91602_p20.read());
}

void poly1305_hw::thread_grp_fu_91602_p20() {
    grp_fu_91602_p20 = esl_zext<16,8>(mulCarry_1_10_1_reg_14627.read());
}

void poly1305_hw::thread_grp_fu_91611_p0() {
    grp_fu_91611_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_91611_p1() {
    grp_fu_91611_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91611_p2() {
    grp_fu_91611_p2 =  (sc_lv<8>) (grp_fu_91611_p20.read());
}

void poly1305_hw::thread_grp_fu_91611_p20() {
    grp_fu_91611_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_2_phi_fu_14641_p4.read());
}

void poly1305_hw::thread_grp_fu_91619_p0() {
    grp_fu_91619_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_91619_p1() {
    grp_fu_91619_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91619_p2() {
    grp_fu_91619_p2 =  (sc_lv<8>) (grp_fu_91619_p20.read());
}

void poly1305_hw::thread_grp_fu_91619_p20() {
    grp_fu_91619_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_3_phi_fu_14651_p4.read());
}

void poly1305_hw::thread_grp_fu_91628_p0() {
    grp_fu_91628_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_91628_p1() {
    grp_fu_91628_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91628_p2() {
    grp_fu_91628_p2 =  (sc_lv<8>) (grp_fu_91628_p20.read());
}

void poly1305_hw::thread_grp_fu_91628_p20() {
    grp_fu_91628_p20 = esl_zext<16,8>(mulCarry_1_10_4_reg_14658.read());
}

void poly1305_hw::thread_grp_fu_91637_p0() {
    grp_fu_91637_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_91637_p1() {
    grp_fu_91637_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91637_p2() {
    grp_fu_91637_p2 =  (sc_lv<8>) (grp_fu_91637_p20.read());
}

void poly1305_hw::thread_grp_fu_91637_p20() {
    grp_fu_91637_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_5_phi_fu_14672_p4.read());
}

void poly1305_hw::thread_grp_fu_91645_p0() {
    grp_fu_91645_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_91645_p1() {
    grp_fu_91645_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91645_p2() {
    grp_fu_91645_p2 =  (sc_lv<8>) (grp_fu_91645_p20.read());
}

void poly1305_hw::thread_grp_fu_91645_p20() {
    grp_fu_91645_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_6_phi_fu_14682_p4.read());
}

void poly1305_hw::thread_grp_fu_91654_p0() {
    grp_fu_91654_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_91654_p1() {
    grp_fu_91654_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91654_p2() {
    grp_fu_91654_p2 =  (sc_lv<8>) (grp_fu_91654_p20.read());
}

void poly1305_hw::thread_grp_fu_91654_p20() {
    grp_fu_91654_p20 = esl_zext<16,8>(mulCarry_1_10_7_reg_14689.read());
}

void poly1305_hw::thread_grp_fu_91663_p0() {
    grp_fu_91663_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_91663_p1() {
    grp_fu_91663_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91663_p2() {
    grp_fu_91663_p2 =  (sc_lv<8>) (grp_fu_91663_p20.read());
}

void poly1305_hw::thread_grp_fu_91663_p20() {
    grp_fu_91663_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_8_phi_fu_14703_p4.read());
}

void poly1305_hw::thread_grp_fu_91671_p0() {
    grp_fu_91671_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_91671_p1() {
    grp_fu_91671_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91671_p2() {
    grp_fu_91671_p2 =  (sc_lv<8>) (grp_fu_91671_p20.read());
}

void poly1305_hw::thread_grp_fu_91671_p20() {
    grp_fu_91671_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_9_phi_fu_14713_p4.read());
}

void poly1305_hw::thread_grp_fu_91680_p0() {
    grp_fu_91680_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_91680_p1() {
    grp_fu_91680_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91680_p2() {
    grp_fu_91680_p2 =  (sc_lv<8>) (grp_fu_91680_p20.read());
}

void poly1305_hw::thread_grp_fu_91680_p20() {
    grp_fu_91680_p20 = esl_zext<16,8>(mulCarry_1_10_10_reg_14720.read());
}

void poly1305_hw::thread_grp_fu_91689_p0() {
    grp_fu_91689_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_91689_p1() {
    grp_fu_91689_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91689_p2() {
    grp_fu_91689_p2 =  (sc_lv<8>) (grp_fu_91689_p20.read());
}

void poly1305_hw::thread_grp_fu_91689_p20() {
    grp_fu_91689_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_11_phi_fu_14734_p4.read());
}

void poly1305_hw::thread_grp_fu_91697_p0() {
    grp_fu_91697_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_91697_p1() {
    grp_fu_91697_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91697_p2() {
    grp_fu_91697_p2 =  (sc_lv<8>) (grp_fu_91697_p20.read());
}

void poly1305_hw::thread_grp_fu_91697_p20() {
    grp_fu_91697_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_12_phi_fu_14744_p4.read());
}

void poly1305_hw::thread_grp_fu_91706_p0() {
    grp_fu_91706_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_91706_p1() {
    grp_fu_91706_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91706_p2() {
    grp_fu_91706_p2 =  (sc_lv<8>) (grp_fu_91706_p20.read());
}

void poly1305_hw::thread_grp_fu_91706_p20() {
    grp_fu_91706_p20 = esl_zext<16,8>(mulCarry_1_10_13_reg_14751.read());
}

void poly1305_hw::thread_grp_fu_91715_p0() {
    grp_fu_91715_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_91715_p1() {
    grp_fu_91715_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91715_p2() {
    grp_fu_91715_p2 =  (sc_lv<8>) (grp_fu_91715_p20.read());
}

void poly1305_hw::thread_grp_fu_91715_p20() {
    grp_fu_91715_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_14_phi_fu_14765_p4.read());
}

void poly1305_hw::thread_grp_fu_91723_p0() {
    grp_fu_91723_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_91723_p1() {
    grp_fu_91723_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_91723_p2() {
    grp_fu_91723_p2 =  (sc_lv<8>) (grp_fu_91723_p20.read());
}

void poly1305_hw::thread_grp_fu_91723_p20() {
    grp_fu_91723_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_10_15_phi_fu_14775_p4.read());
}

void poly1305_hw::thread_grp_fu_91732_p0() {
    grp_fu_91732_p0 =  (sc_lv<8>) (zext_ln96_81_reg_110673.read());
}

void poly1305_hw::thread_grp_fu_91732_p1() {
    grp_fu_91732_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91732_p2() {
    grp_fu_91732_p2 =  (sc_lv<4>) (grp_fu_91732_p20.read());
}

void poly1305_hw::thread_grp_fu_91732_p20() {
    grp_fu_91732_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_0_phi_fu_14797_p4.read());
}

void poly1305_hw::thread_grp_fu_91741_p0() {
    grp_fu_91741_p0 =  (sc_lv<8>) (zext_ln96_82_reg_110715.read());
}

void poly1305_hw::thread_grp_fu_91741_p1() {
    grp_fu_91741_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91741_p2() {
    grp_fu_91741_p2 =  (sc_lv<4>) (grp_fu_91741_p20.read());
}

void poly1305_hw::thread_grp_fu_91741_p20() {
    grp_fu_91741_p20 = esl_zext<12,4>(mulCarry_1_11_1_reg_14804.read());
}

void poly1305_hw::thread_grp_fu_91750_p0() {
    grp_fu_91750_p0 =  (sc_lv<8>) (zext_ln96_83_reg_110758.read());
}

void poly1305_hw::thread_grp_fu_91750_p1() {
    grp_fu_91750_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91750_p2() {
    grp_fu_91750_p2 =  (sc_lv<4>) (grp_fu_91750_p20.read());
}

void poly1305_hw::thread_grp_fu_91750_p20() {
    grp_fu_91750_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_2_phi_fu_14818_p4.read());
}

void poly1305_hw::thread_grp_fu_91758_p0() {
    grp_fu_91758_p0 =  (sc_lv<8>) (zext_ln96_84_reg_110790.read());
}

void poly1305_hw::thread_grp_fu_91758_p1() {
    grp_fu_91758_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91758_p2() {
    grp_fu_91758_p2 =  (sc_lv<4>) (grp_fu_91758_p20.read());
}

void poly1305_hw::thread_grp_fu_91758_p20() {
    grp_fu_91758_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_3_phi_fu_14828_p4.read());
}

void poly1305_hw::thread_grp_fu_91767_p0() {
    grp_fu_91767_p0 =  (sc_lv<8>) (zext_ln96_85_reg_110832.read());
}

void poly1305_hw::thread_grp_fu_91767_p1() {
    grp_fu_91767_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91767_p2() {
    grp_fu_91767_p2 =  (sc_lv<4>) (grp_fu_91767_p20.read());
}

void poly1305_hw::thread_grp_fu_91767_p20() {
    grp_fu_91767_p20 = esl_zext<12,4>(mulCarry_1_11_4_reg_14835.read());
}

void poly1305_hw::thread_grp_fu_91776_p0() {
    grp_fu_91776_p0 =  (sc_lv<8>) (zext_ln96_86_reg_110875.read());
}

void poly1305_hw::thread_grp_fu_91776_p1() {
    grp_fu_91776_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91776_p2() {
    grp_fu_91776_p2 =  (sc_lv<4>) (grp_fu_91776_p20.read());
}

void poly1305_hw::thread_grp_fu_91776_p20() {
    grp_fu_91776_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_5_phi_fu_14849_p4.read());
}

void poly1305_hw::thread_grp_fu_91784_p0() {
    grp_fu_91784_p0 =  (sc_lv<8>) (zext_ln96_87_reg_110907.read());
}

void poly1305_hw::thread_grp_fu_91784_p1() {
    grp_fu_91784_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91784_p2() {
    grp_fu_91784_p2 =  (sc_lv<4>) (grp_fu_91784_p20.read());
}

void poly1305_hw::thread_grp_fu_91784_p20() {
    grp_fu_91784_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_6_phi_fu_14859_p4.read());
}

void poly1305_hw::thread_grp_fu_91793_p0() {
    grp_fu_91793_p0 =  (sc_lv<8>) (zext_ln96_88_reg_110949.read());
}

void poly1305_hw::thread_grp_fu_91793_p1() {
    grp_fu_91793_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91793_p2() {
    grp_fu_91793_p2 =  (sc_lv<4>) (grp_fu_91793_p20.read());
}

void poly1305_hw::thread_grp_fu_91793_p20() {
    grp_fu_91793_p20 = esl_zext<12,4>(mulCarry_1_11_7_reg_14866.read());
}

void poly1305_hw::thread_grp_fu_91802_p0() {
    grp_fu_91802_p0 =  (sc_lv<8>) (zext_ln96_89_reg_110992.read());
}

void poly1305_hw::thread_grp_fu_91802_p1() {
    grp_fu_91802_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91802_p2() {
    grp_fu_91802_p2 =  (sc_lv<4>) (grp_fu_91802_p20.read());
}

void poly1305_hw::thread_grp_fu_91802_p20() {
    grp_fu_91802_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_8_phi_fu_14880_p4.read());
}

void poly1305_hw::thread_grp_fu_91810_p0() {
    grp_fu_91810_p0 =  (sc_lv<8>) (zext_ln96_90_reg_111024.read());
}

void poly1305_hw::thread_grp_fu_91810_p1() {
    grp_fu_91810_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91810_p2() {
    grp_fu_91810_p2 =  (sc_lv<4>) (grp_fu_91810_p20.read());
}

void poly1305_hw::thread_grp_fu_91810_p20() {
    grp_fu_91810_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_9_phi_fu_14890_p4.read());
}

void poly1305_hw::thread_grp_fu_91819_p0() {
    grp_fu_91819_p0 =  (sc_lv<8>) (zext_ln96_91_reg_111066.read());
}

void poly1305_hw::thread_grp_fu_91819_p1() {
    grp_fu_91819_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91819_p2() {
    grp_fu_91819_p2 =  (sc_lv<4>) (grp_fu_91819_p20.read());
}

void poly1305_hw::thread_grp_fu_91819_p20() {
    grp_fu_91819_p20 = esl_zext<12,4>(mulCarry_1_11_10_reg_14897.read());
}

void poly1305_hw::thread_grp_fu_91828_p0() {
    grp_fu_91828_p0 =  (sc_lv<8>) (zext_ln96_92_reg_111109.read());
}

void poly1305_hw::thread_grp_fu_91828_p1() {
    grp_fu_91828_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91828_p2() {
    grp_fu_91828_p2 =  (sc_lv<4>) (grp_fu_91828_p20.read());
}

void poly1305_hw::thread_grp_fu_91828_p20() {
    grp_fu_91828_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_11_phi_fu_14911_p4.read());
}

void poly1305_hw::thread_grp_fu_91836_p0() {
    grp_fu_91836_p0 =  (sc_lv<8>) (zext_ln96_93_reg_111141.read());
}

void poly1305_hw::thread_grp_fu_91836_p1() {
    grp_fu_91836_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91836_p2() {
    grp_fu_91836_p2 =  (sc_lv<4>) (grp_fu_91836_p20.read());
}

void poly1305_hw::thread_grp_fu_91836_p20() {
    grp_fu_91836_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_12_phi_fu_14921_p4.read());
}

void poly1305_hw::thread_grp_fu_91845_p0() {
    grp_fu_91845_p0 =  (sc_lv<8>) (zext_ln96_94_reg_111183.read());
}

void poly1305_hw::thread_grp_fu_91845_p1() {
    grp_fu_91845_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91845_p2() {
    grp_fu_91845_p2 =  (sc_lv<4>) (grp_fu_91845_p20.read());
}

void poly1305_hw::thread_grp_fu_91845_p20() {
    grp_fu_91845_p20 = esl_zext<12,4>(mulCarry_1_11_13_reg_14928.read());
}

void poly1305_hw::thread_grp_fu_91854_p0() {
    grp_fu_91854_p0 =  (sc_lv<8>) (zext_ln96_95_reg_111226.read());
}

void poly1305_hw::thread_grp_fu_91854_p1() {
    grp_fu_91854_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91854_p2() {
    grp_fu_91854_p2 =  (sc_lv<4>) (grp_fu_91854_p20.read());
}

void poly1305_hw::thread_grp_fu_91854_p20() {
    grp_fu_91854_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_14_phi_fu_14942_p4.read());
}

void poly1305_hw::thread_grp_fu_91862_p0() {
    grp_fu_91862_p0 =  (sc_lv<8>) (zext_ln96_96_reg_111258.read());
}

void poly1305_hw::thread_grp_fu_91862_p1() {
    grp_fu_91862_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_91862_p2() {
    grp_fu_91862_p2 =  (sc_lv<4>) (grp_fu_91862_p20.read());
}

void poly1305_hw::thread_grp_fu_91862_p20() {
    grp_fu_91862_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_11_15_phi_fu_14952_p4.read());
}

void poly1305_hw::thread_grp_fu_91871_p0() {
    grp_fu_91871_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_91871_p1() {
    grp_fu_91871_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91871_p2() {
    grp_fu_91871_p2 =  (sc_lv<8>) (grp_fu_91871_p20.read());
}

void poly1305_hw::thread_grp_fu_91871_p20() {
    grp_fu_91871_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_0_phi_fu_14974_p4.read());
}

void poly1305_hw::thread_grp_fu_91880_p0() {
    grp_fu_91880_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_91880_p1() {
    grp_fu_91880_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91880_p2() {
    grp_fu_91880_p2 =  (sc_lv<8>) (grp_fu_91880_p20.read());
}

void poly1305_hw::thread_grp_fu_91880_p20() {
    grp_fu_91880_p20 = esl_zext<16,8>(mulCarry_1_12_1_reg_14981.read());
}

void poly1305_hw::thread_grp_fu_91889_p0() {
    grp_fu_91889_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_91889_p1() {
    grp_fu_91889_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91889_p2() {
    grp_fu_91889_p2 =  (sc_lv<8>) (grp_fu_91889_p20.read());
}

void poly1305_hw::thread_grp_fu_91889_p20() {
    grp_fu_91889_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_2_phi_fu_14995_p4.read());
}

void poly1305_hw::thread_grp_fu_91897_p0() {
    grp_fu_91897_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_91897_p1() {
    grp_fu_91897_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91897_p2() {
    grp_fu_91897_p2 =  (sc_lv<8>) (grp_fu_91897_p20.read());
}

void poly1305_hw::thread_grp_fu_91897_p20() {
    grp_fu_91897_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_3_phi_fu_15005_p4.read());
}

void poly1305_hw::thread_grp_fu_91906_p0() {
    grp_fu_91906_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_91906_p1() {
    grp_fu_91906_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91906_p2() {
    grp_fu_91906_p2 =  (sc_lv<8>) (grp_fu_91906_p20.read());
}

void poly1305_hw::thread_grp_fu_91906_p20() {
    grp_fu_91906_p20 = esl_zext<16,8>(mulCarry_1_12_4_reg_15012.read());
}

void poly1305_hw::thread_grp_fu_91915_p0() {
    grp_fu_91915_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_91915_p1() {
    grp_fu_91915_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91915_p2() {
    grp_fu_91915_p2 =  (sc_lv<8>) (grp_fu_91915_p20.read());
}

void poly1305_hw::thread_grp_fu_91915_p20() {
    grp_fu_91915_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_5_phi_fu_15026_p4.read());
}

void poly1305_hw::thread_grp_fu_91923_p0() {
    grp_fu_91923_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_91923_p1() {
    grp_fu_91923_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91923_p2() {
    grp_fu_91923_p2 =  (sc_lv<8>) (grp_fu_91923_p20.read());
}

void poly1305_hw::thread_grp_fu_91923_p20() {
    grp_fu_91923_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_6_phi_fu_15036_p4.read());
}

void poly1305_hw::thread_grp_fu_91932_p0() {
    grp_fu_91932_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_91932_p1() {
    grp_fu_91932_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91932_p2() {
    grp_fu_91932_p2 =  (sc_lv<8>) (grp_fu_91932_p20.read());
}

void poly1305_hw::thread_grp_fu_91932_p20() {
    grp_fu_91932_p20 = esl_zext<16,8>(mulCarry_1_12_7_reg_15043.read());
}

void poly1305_hw::thread_grp_fu_91941_p0() {
    grp_fu_91941_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_91941_p1() {
    grp_fu_91941_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91941_p2() {
    grp_fu_91941_p2 =  (sc_lv<8>) (grp_fu_91941_p20.read());
}

void poly1305_hw::thread_grp_fu_91941_p20() {
    grp_fu_91941_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_8_phi_fu_15057_p4.read());
}

void poly1305_hw::thread_grp_fu_91949_p0() {
    grp_fu_91949_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_91949_p1() {
    grp_fu_91949_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91949_p2() {
    grp_fu_91949_p2 =  (sc_lv<8>) (grp_fu_91949_p20.read());
}

void poly1305_hw::thread_grp_fu_91949_p20() {
    grp_fu_91949_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_9_phi_fu_15067_p4.read());
}

void poly1305_hw::thread_grp_fu_91958_p0() {
    grp_fu_91958_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_91958_p1() {
    grp_fu_91958_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91958_p2() {
    grp_fu_91958_p2 =  (sc_lv<8>) (grp_fu_91958_p20.read());
}

void poly1305_hw::thread_grp_fu_91958_p20() {
    grp_fu_91958_p20 = esl_zext<16,8>(mulCarry_1_12_10_reg_15074.read());
}

void poly1305_hw::thread_grp_fu_91967_p0() {
    grp_fu_91967_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_91967_p1() {
    grp_fu_91967_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91967_p2() {
    grp_fu_91967_p2 =  (sc_lv<8>) (grp_fu_91967_p20.read());
}

void poly1305_hw::thread_grp_fu_91967_p20() {
    grp_fu_91967_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_11_phi_fu_15088_p4.read());
}

void poly1305_hw::thread_grp_fu_91975_p0() {
    grp_fu_91975_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_91975_p1() {
    grp_fu_91975_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91975_p2() {
    grp_fu_91975_p2 =  (sc_lv<8>) (grp_fu_91975_p20.read());
}

void poly1305_hw::thread_grp_fu_91975_p20() {
    grp_fu_91975_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_12_phi_fu_15098_p4.read());
}

void poly1305_hw::thread_grp_fu_91984_p0() {
    grp_fu_91984_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_91984_p1() {
    grp_fu_91984_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91984_p2() {
    grp_fu_91984_p2 =  (sc_lv<8>) (grp_fu_91984_p20.read());
}

void poly1305_hw::thread_grp_fu_91984_p20() {
    grp_fu_91984_p20 = esl_zext<16,8>(mulCarry_1_12_13_reg_15105.read());
}

void poly1305_hw::thread_grp_fu_91993_p0() {
    grp_fu_91993_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_91993_p1() {
    grp_fu_91993_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_91993_p2() {
    grp_fu_91993_p2 =  (sc_lv<8>) (grp_fu_91993_p20.read());
}

void poly1305_hw::thread_grp_fu_91993_p20() {
    grp_fu_91993_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_14_phi_fu_15119_p4.read());
}

void poly1305_hw::thread_grp_fu_92001_p0() {
    grp_fu_92001_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_92001_p1() {
    grp_fu_92001_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_92001_p2() {
    grp_fu_92001_p2 =  (sc_lv<8>) (grp_fu_92001_p20.read());
}

void poly1305_hw::thread_grp_fu_92001_p20() {
    grp_fu_92001_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_12_15_phi_fu_15129_p4.read());
}

void poly1305_hw::thread_grp_fu_92010_p0() {
    grp_fu_92010_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_92010_p1() {
    grp_fu_92010_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92010_p2() {
    grp_fu_92010_p2 =  (sc_lv<8>) (grp_fu_92010_p20.read());
}

void poly1305_hw::thread_grp_fu_92010_p20() {
    grp_fu_92010_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_0_phi_fu_15151_p4.read());
}

void poly1305_hw::thread_grp_fu_92019_p0() {
    grp_fu_92019_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_92019_p1() {
    grp_fu_92019_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92019_p2() {
    grp_fu_92019_p2 =  (sc_lv<8>) (grp_fu_92019_p20.read());
}

void poly1305_hw::thread_grp_fu_92019_p20() {
    grp_fu_92019_p20 = esl_zext<16,8>(mulCarry_1_13_1_reg_15158.read());
}

void poly1305_hw::thread_grp_fu_92028_p0() {
    grp_fu_92028_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_92028_p1() {
    grp_fu_92028_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92028_p2() {
    grp_fu_92028_p2 =  (sc_lv<8>) (grp_fu_92028_p20.read());
}

void poly1305_hw::thread_grp_fu_92028_p20() {
    grp_fu_92028_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_2_phi_fu_15172_p4.read());
}

void poly1305_hw::thread_grp_fu_92036_p0() {
    grp_fu_92036_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_92036_p1() {
    grp_fu_92036_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92036_p2() {
    grp_fu_92036_p2 =  (sc_lv<8>) (grp_fu_92036_p20.read());
}

void poly1305_hw::thread_grp_fu_92036_p20() {
    grp_fu_92036_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_3_phi_fu_15182_p4.read());
}

void poly1305_hw::thread_grp_fu_92045_p0() {
    grp_fu_92045_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_92045_p1() {
    grp_fu_92045_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92045_p2() {
    grp_fu_92045_p2 =  (sc_lv<8>) (grp_fu_92045_p20.read());
}

void poly1305_hw::thread_grp_fu_92045_p20() {
    grp_fu_92045_p20 = esl_zext<16,8>(mulCarry_1_13_4_reg_15189.read());
}

void poly1305_hw::thread_grp_fu_92054_p0() {
    grp_fu_92054_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_92054_p1() {
    grp_fu_92054_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92054_p2() {
    grp_fu_92054_p2 =  (sc_lv<8>) (grp_fu_92054_p20.read());
}

void poly1305_hw::thread_grp_fu_92054_p20() {
    grp_fu_92054_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_5_phi_fu_15203_p4.read());
}

void poly1305_hw::thread_grp_fu_92062_p0() {
    grp_fu_92062_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_92062_p1() {
    grp_fu_92062_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92062_p2() {
    grp_fu_92062_p2 =  (sc_lv<8>) (grp_fu_92062_p20.read());
}

void poly1305_hw::thread_grp_fu_92062_p20() {
    grp_fu_92062_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_6_phi_fu_15213_p4.read());
}

void poly1305_hw::thread_grp_fu_92071_p0() {
    grp_fu_92071_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_92071_p1() {
    grp_fu_92071_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92071_p2() {
    grp_fu_92071_p2 =  (sc_lv<8>) (grp_fu_92071_p20.read());
}

void poly1305_hw::thread_grp_fu_92071_p20() {
    grp_fu_92071_p20 = esl_zext<16,8>(mulCarry_1_13_7_reg_15220.read());
}

void poly1305_hw::thread_grp_fu_92080_p0() {
    grp_fu_92080_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_92080_p1() {
    grp_fu_92080_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92080_p2() {
    grp_fu_92080_p2 =  (sc_lv<8>) (grp_fu_92080_p20.read());
}

void poly1305_hw::thread_grp_fu_92080_p20() {
    grp_fu_92080_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_8_phi_fu_15234_p4.read());
}

void poly1305_hw::thread_grp_fu_92088_p0() {
    grp_fu_92088_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_92088_p1() {
    grp_fu_92088_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92088_p2() {
    grp_fu_92088_p2 =  (sc_lv<8>) (grp_fu_92088_p20.read());
}

void poly1305_hw::thread_grp_fu_92088_p20() {
    grp_fu_92088_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_9_phi_fu_15244_p4.read());
}

void poly1305_hw::thread_grp_fu_92097_p0() {
    grp_fu_92097_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_92097_p1() {
    grp_fu_92097_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92097_p2() {
    grp_fu_92097_p2 =  (sc_lv<8>) (grp_fu_92097_p20.read());
}

void poly1305_hw::thread_grp_fu_92097_p20() {
    grp_fu_92097_p20 = esl_zext<16,8>(mulCarry_1_13_10_reg_15251.read());
}

void poly1305_hw::thread_grp_fu_92106_p0() {
    grp_fu_92106_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_92106_p1() {
    grp_fu_92106_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92106_p2() {
    grp_fu_92106_p2 =  (sc_lv<8>) (grp_fu_92106_p20.read());
}

void poly1305_hw::thread_grp_fu_92106_p20() {
    grp_fu_92106_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_11_phi_fu_15265_p4.read());
}

void poly1305_hw::thread_grp_fu_92114_p0() {
    grp_fu_92114_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_92114_p1() {
    grp_fu_92114_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92114_p2() {
    grp_fu_92114_p2 =  (sc_lv<8>) (grp_fu_92114_p20.read());
}

void poly1305_hw::thread_grp_fu_92114_p20() {
    grp_fu_92114_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_12_phi_fu_15275_p4.read());
}

void poly1305_hw::thread_grp_fu_92123_p0() {
    grp_fu_92123_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_92123_p1() {
    grp_fu_92123_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92123_p2() {
    grp_fu_92123_p2 =  (sc_lv<8>) (grp_fu_92123_p20.read());
}

void poly1305_hw::thread_grp_fu_92123_p20() {
    grp_fu_92123_p20 = esl_zext<16,8>(mulCarry_1_13_13_reg_15282.read());
}

void poly1305_hw::thread_grp_fu_92132_p0() {
    grp_fu_92132_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_92132_p1() {
    grp_fu_92132_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92132_p2() {
    grp_fu_92132_p2 =  (sc_lv<8>) (grp_fu_92132_p20.read());
}

void poly1305_hw::thread_grp_fu_92132_p20() {
    grp_fu_92132_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_14_phi_fu_15296_p4.read());
}

void poly1305_hw::thread_grp_fu_92140_p0() {
    grp_fu_92140_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_92140_p1() {
    grp_fu_92140_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_92140_p2() {
    grp_fu_92140_p2 =  (sc_lv<8>) (grp_fu_92140_p20.read());
}

void poly1305_hw::thread_grp_fu_92140_p20() {
    grp_fu_92140_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_13_15_phi_fu_15306_p4.read());
}

void poly1305_hw::thread_grp_fu_92149_p0() {
    grp_fu_92149_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_92149_p1() {
    grp_fu_92149_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92149_p2() {
    grp_fu_92149_p2 =  (sc_lv<8>) (grp_fu_92149_p20.read());
}

void poly1305_hw::thread_grp_fu_92149_p20() {
    grp_fu_92149_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_0_phi_fu_15328_p4.read());
}

void poly1305_hw::thread_grp_fu_92158_p0() {
    grp_fu_92158_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_92158_p1() {
    grp_fu_92158_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92158_p2() {
    grp_fu_92158_p2 =  (sc_lv<8>) (grp_fu_92158_p20.read());
}

void poly1305_hw::thread_grp_fu_92158_p20() {
    grp_fu_92158_p20 = esl_zext<16,8>(mulCarry_1_14_1_reg_15335.read());
}

void poly1305_hw::thread_grp_fu_92167_p0() {
    grp_fu_92167_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_92167_p1() {
    grp_fu_92167_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92167_p2() {
    grp_fu_92167_p2 =  (sc_lv<8>) (grp_fu_92167_p20.read());
}

void poly1305_hw::thread_grp_fu_92167_p20() {
    grp_fu_92167_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_2_phi_fu_15349_p4.read());
}

void poly1305_hw::thread_grp_fu_92175_p0() {
    grp_fu_92175_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_92175_p1() {
    grp_fu_92175_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92175_p2() {
    grp_fu_92175_p2 =  (sc_lv<8>) (grp_fu_92175_p20.read());
}

void poly1305_hw::thread_grp_fu_92175_p20() {
    grp_fu_92175_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_3_phi_fu_15359_p4.read());
}

void poly1305_hw::thread_grp_fu_92184_p0() {
    grp_fu_92184_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_92184_p1() {
    grp_fu_92184_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92184_p2() {
    grp_fu_92184_p2 =  (sc_lv<8>) (grp_fu_92184_p20.read());
}

void poly1305_hw::thread_grp_fu_92184_p20() {
    grp_fu_92184_p20 = esl_zext<16,8>(mulCarry_1_14_4_reg_15366.read());
}

void poly1305_hw::thread_grp_fu_92193_p0() {
    grp_fu_92193_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_92193_p1() {
    grp_fu_92193_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92193_p2() {
    grp_fu_92193_p2 =  (sc_lv<8>) (grp_fu_92193_p20.read());
}

void poly1305_hw::thread_grp_fu_92193_p20() {
    grp_fu_92193_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_5_phi_fu_15380_p4.read());
}

void poly1305_hw::thread_grp_fu_92201_p0() {
    grp_fu_92201_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_92201_p1() {
    grp_fu_92201_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92201_p2() {
    grp_fu_92201_p2 =  (sc_lv<8>) (grp_fu_92201_p20.read());
}

void poly1305_hw::thread_grp_fu_92201_p20() {
    grp_fu_92201_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_6_phi_fu_15390_p4.read());
}

void poly1305_hw::thread_grp_fu_92210_p0() {
    grp_fu_92210_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_92210_p1() {
    grp_fu_92210_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92210_p2() {
    grp_fu_92210_p2 =  (sc_lv<8>) (grp_fu_92210_p20.read());
}

void poly1305_hw::thread_grp_fu_92210_p20() {
    grp_fu_92210_p20 = esl_zext<16,8>(mulCarry_1_14_7_reg_15397.read());
}

void poly1305_hw::thread_grp_fu_92219_p0() {
    grp_fu_92219_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_92219_p1() {
    grp_fu_92219_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92219_p2() {
    grp_fu_92219_p2 =  (sc_lv<8>) (grp_fu_92219_p20.read());
}

void poly1305_hw::thread_grp_fu_92219_p20() {
    grp_fu_92219_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_8_phi_fu_15411_p4.read());
}

void poly1305_hw::thread_grp_fu_92227_p0() {
    grp_fu_92227_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_92227_p1() {
    grp_fu_92227_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92227_p2() {
    grp_fu_92227_p2 =  (sc_lv<8>) (grp_fu_92227_p20.read());
}

void poly1305_hw::thread_grp_fu_92227_p20() {
    grp_fu_92227_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_9_phi_fu_15421_p4.read());
}

void poly1305_hw::thread_grp_fu_92236_p0() {
    grp_fu_92236_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_92236_p1() {
    grp_fu_92236_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92236_p2() {
    grp_fu_92236_p2 =  (sc_lv<8>) (grp_fu_92236_p20.read());
}

void poly1305_hw::thread_grp_fu_92236_p20() {
    grp_fu_92236_p20 = esl_zext<16,8>(mulCarry_1_14_10_reg_15428.read());
}

void poly1305_hw::thread_grp_fu_92245_p0() {
    grp_fu_92245_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_92245_p1() {
    grp_fu_92245_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92245_p2() {
    grp_fu_92245_p2 =  (sc_lv<8>) (grp_fu_92245_p20.read());
}

void poly1305_hw::thread_grp_fu_92245_p20() {
    grp_fu_92245_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_11_phi_fu_15442_p4.read());
}

void poly1305_hw::thread_grp_fu_92253_p0() {
    grp_fu_92253_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_92253_p1() {
    grp_fu_92253_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92253_p2() {
    grp_fu_92253_p2 =  (sc_lv<8>) (grp_fu_92253_p20.read());
}

void poly1305_hw::thread_grp_fu_92253_p20() {
    grp_fu_92253_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_12_phi_fu_15452_p4.read());
}

void poly1305_hw::thread_grp_fu_92262_p0() {
    grp_fu_92262_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_92262_p1() {
    grp_fu_92262_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92262_p2() {
    grp_fu_92262_p2 =  (sc_lv<8>) (grp_fu_92262_p20.read());
}

void poly1305_hw::thread_grp_fu_92262_p20() {
    grp_fu_92262_p20 = esl_zext<16,8>(mulCarry_1_14_13_reg_15459.read());
}

void poly1305_hw::thread_grp_fu_92271_p0() {
    grp_fu_92271_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_92271_p1() {
    grp_fu_92271_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92271_p2() {
    grp_fu_92271_p2 =  (sc_lv<8>) (grp_fu_92271_p20.read());
}

void poly1305_hw::thread_grp_fu_92271_p20() {
    grp_fu_92271_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_14_phi_fu_15473_p4.read());
}

void poly1305_hw::thread_grp_fu_92279_p0() {
    grp_fu_92279_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_92279_p1() {
    grp_fu_92279_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_92279_p2() {
    grp_fu_92279_p2 =  (sc_lv<8>) (grp_fu_92279_p20.read());
}

void poly1305_hw::thread_grp_fu_92279_p20() {
    grp_fu_92279_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_14_15_phi_fu_15483_p4.read());
}

void poly1305_hw::thread_grp_fu_92288_p0() {
    grp_fu_92288_p0 =  (sc_lv<8>) (zext_ln96_81_reg_110673.read());
}

void poly1305_hw::thread_grp_fu_92288_p1() {
    grp_fu_92288_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92288_p2() {
    grp_fu_92288_p2 =  (sc_lv<4>) (grp_fu_92288_p20.read());
}

void poly1305_hw::thread_grp_fu_92288_p20() {
    grp_fu_92288_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_0_phi_fu_15505_p4.read());
}

void poly1305_hw::thread_grp_fu_92297_p0() {
    grp_fu_92297_p0 =  (sc_lv<8>) (zext_ln96_82_reg_110715.read());
}

void poly1305_hw::thread_grp_fu_92297_p1() {
    grp_fu_92297_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92297_p2() {
    grp_fu_92297_p2 =  (sc_lv<4>) (grp_fu_92297_p20.read());
}

void poly1305_hw::thread_grp_fu_92297_p20() {
    grp_fu_92297_p20 = esl_zext<12,4>(mulCarry_1_15_1_reg_15512.read());
}

void poly1305_hw::thread_grp_fu_92306_p0() {
    grp_fu_92306_p0 =  (sc_lv<8>) (zext_ln96_83_reg_110758.read());
}

void poly1305_hw::thread_grp_fu_92306_p1() {
    grp_fu_92306_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92306_p2() {
    grp_fu_92306_p2 =  (sc_lv<4>) (grp_fu_92306_p20.read());
}

void poly1305_hw::thread_grp_fu_92306_p20() {
    grp_fu_92306_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_2_phi_fu_15526_p4.read());
}

void poly1305_hw::thread_grp_fu_92314_p0() {
    grp_fu_92314_p0 =  (sc_lv<8>) (zext_ln96_84_reg_110790.read());
}

void poly1305_hw::thread_grp_fu_92314_p1() {
    grp_fu_92314_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92314_p2() {
    grp_fu_92314_p2 =  (sc_lv<4>) (grp_fu_92314_p20.read());
}

void poly1305_hw::thread_grp_fu_92314_p20() {
    grp_fu_92314_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_3_phi_fu_15536_p4.read());
}

void poly1305_hw::thread_grp_fu_92323_p0() {
    grp_fu_92323_p0 =  (sc_lv<8>) (zext_ln96_85_reg_110832.read());
}

void poly1305_hw::thread_grp_fu_92323_p1() {
    grp_fu_92323_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92323_p2() {
    grp_fu_92323_p2 =  (sc_lv<4>) (grp_fu_92323_p20.read());
}

void poly1305_hw::thread_grp_fu_92323_p20() {
    grp_fu_92323_p20 = esl_zext<12,4>(mulCarry_1_15_4_reg_15543.read());
}

void poly1305_hw::thread_grp_fu_92332_p0() {
    grp_fu_92332_p0 =  (sc_lv<8>) (zext_ln96_86_reg_110875.read());
}

void poly1305_hw::thread_grp_fu_92332_p1() {
    grp_fu_92332_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92332_p2() {
    grp_fu_92332_p2 =  (sc_lv<4>) (grp_fu_92332_p20.read());
}

void poly1305_hw::thread_grp_fu_92332_p20() {
    grp_fu_92332_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_5_phi_fu_15557_p4.read());
}

void poly1305_hw::thread_grp_fu_92340_p0() {
    grp_fu_92340_p0 =  (sc_lv<8>) (zext_ln96_87_reg_110907.read());
}

void poly1305_hw::thread_grp_fu_92340_p1() {
    grp_fu_92340_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92340_p2() {
    grp_fu_92340_p2 =  (sc_lv<4>) (grp_fu_92340_p20.read());
}

void poly1305_hw::thread_grp_fu_92340_p20() {
    grp_fu_92340_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_6_phi_fu_15567_p4.read());
}

void poly1305_hw::thread_grp_fu_92349_p0() {
    grp_fu_92349_p0 =  (sc_lv<8>) (zext_ln96_88_reg_110949.read());
}

void poly1305_hw::thread_grp_fu_92349_p1() {
    grp_fu_92349_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92349_p2() {
    grp_fu_92349_p2 =  (sc_lv<4>) (grp_fu_92349_p20.read());
}

void poly1305_hw::thread_grp_fu_92349_p20() {
    grp_fu_92349_p20 = esl_zext<12,4>(mulCarry_1_15_7_reg_15574.read());
}

void poly1305_hw::thread_grp_fu_92358_p0() {
    grp_fu_92358_p0 =  (sc_lv<8>) (zext_ln96_89_reg_110992.read());
}

void poly1305_hw::thread_grp_fu_92358_p1() {
    grp_fu_92358_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92358_p2() {
    grp_fu_92358_p2 =  (sc_lv<4>) (grp_fu_92358_p20.read());
}

void poly1305_hw::thread_grp_fu_92358_p20() {
    grp_fu_92358_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_8_phi_fu_15588_p4.read());
}

void poly1305_hw::thread_grp_fu_92366_p0() {
    grp_fu_92366_p0 =  (sc_lv<8>) (zext_ln96_90_reg_111024.read());
}

void poly1305_hw::thread_grp_fu_92366_p1() {
    grp_fu_92366_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92366_p2() {
    grp_fu_92366_p2 =  (sc_lv<4>) (grp_fu_92366_p20.read());
}

void poly1305_hw::thread_grp_fu_92366_p20() {
    grp_fu_92366_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_9_phi_fu_15598_p4.read());
}

void poly1305_hw::thread_grp_fu_92375_p0() {
    grp_fu_92375_p0 =  (sc_lv<8>) (zext_ln96_91_reg_111066.read());
}

void poly1305_hw::thread_grp_fu_92375_p1() {
    grp_fu_92375_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92375_p2() {
    grp_fu_92375_p2 =  (sc_lv<4>) (grp_fu_92375_p20.read());
}

void poly1305_hw::thread_grp_fu_92375_p20() {
    grp_fu_92375_p20 = esl_zext<12,4>(mulCarry_1_15_10_reg_15605.read());
}

void poly1305_hw::thread_grp_fu_92384_p0() {
    grp_fu_92384_p0 =  (sc_lv<8>) (zext_ln96_92_reg_111109.read());
}

void poly1305_hw::thread_grp_fu_92384_p1() {
    grp_fu_92384_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92384_p2() {
    grp_fu_92384_p2 =  (sc_lv<4>) (grp_fu_92384_p20.read());
}

void poly1305_hw::thread_grp_fu_92384_p20() {
    grp_fu_92384_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_11_phi_fu_15619_p4.read());
}

void poly1305_hw::thread_grp_fu_92392_p0() {
    grp_fu_92392_p0 =  (sc_lv<8>) (zext_ln96_93_reg_111141.read());
}

void poly1305_hw::thread_grp_fu_92392_p1() {
    grp_fu_92392_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92392_p2() {
    grp_fu_92392_p2 =  (sc_lv<4>) (grp_fu_92392_p20.read());
}

void poly1305_hw::thread_grp_fu_92392_p20() {
    grp_fu_92392_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_12_phi_fu_15629_p4.read());
}

void poly1305_hw::thread_grp_fu_92401_p0() {
    grp_fu_92401_p0 =  (sc_lv<8>) (zext_ln96_94_reg_111183.read());
}

void poly1305_hw::thread_grp_fu_92401_p1() {
    grp_fu_92401_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92401_p2() {
    grp_fu_92401_p2 =  (sc_lv<4>) (grp_fu_92401_p20.read());
}

void poly1305_hw::thread_grp_fu_92401_p20() {
    grp_fu_92401_p20 = esl_zext<12,4>(mulCarry_1_15_13_reg_15636.read());
}

void poly1305_hw::thread_grp_fu_92410_p0() {
    grp_fu_92410_p0 =  (sc_lv<8>) (zext_ln96_95_reg_111226.read());
}

void poly1305_hw::thread_grp_fu_92410_p1() {
    grp_fu_92410_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92410_p2() {
    grp_fu_92410_p2 =  (sc_lv<4>) (grp_fu_92410_p20.read());
}

void poly1305_hw::thread_grp_fu_92410_p20() {
    grp_fu_92410_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_14_phi_fu_15650_p4.read());
}

void poly1305_hw::thread_grp_fu_92418_p0() {
    grp_fu_92418_p0 =  (sc_lv<8>) (zext_ln96_96_reg_111258.read());
}

void poly1305_hw::thread_grp_fu_92418_p1() {
    grp_fu_92418_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_92418_p2() {
    grp_fu_92418_p2 =  (sc_lv<4>) (grp_fu_92418_p20.read());
}

void poly1305_hw::thread_grp_fu_92418_p20() {
    grp_fu_92418_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_15_15_phi_fu_15660_p4.read());
}

void poly1305_hw::thread_i_10_fu_58570_p2() {
    i_10_fu_58570_p2 = (!i108_0_reg_12513.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i108_0_reg_12513.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void poly1305_hw::thread_i_11_fu_61154_p2() {
    i_11_fu_61154_p2 = (!i114_0_reg_12589.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i114_0_reg_12589.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_12_fu_61220_p2() {
    i_12_fu_61220_p2 = (!i115_0_reg_12613.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i115_0_reg_12613.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_13_fu_61248_p2() {
    i_13_fu_61248_p2 = (!i117_0_in_reg_12638.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_biguint<7>(i117_0_in_reg_12638.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_14_fu_61302_p2() {
    i_14_fu_61302_p2 = (!i118_0_reg_12682.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i118_0_reg_12682.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_15_fu_87805_p2() {
    i_15_fu_87805_p2 = (!i122_0_reg_16431.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i122_0_reg_16431.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_16_fu_84342_p2() {
    i_16_fu_84342_p2 = (!i12_0_in_reg_15827.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(i12_0_in_reg_15827.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_i_17_fu_50693_p2() {
    i_17_fu_50693_p2 = (!i57_0_in_reg_11773.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(i57_0_in_reg_11773.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_i_18_fu_87289_p2() {
    i_18_fu_87289_p2 = (!i24_0_reg_16018.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(i24_0_reg_16018.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void poly1305_hw::thread_i_19_fu_53640_p2() {
    i_19_fu_53640_p2 = (!i70_0_reg_11977.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(i70_0_reg_11977.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void poly1305_hw::thread_i_1_fu_26997_p2() {
    i_1_fu_26997_p2 = (!i1_0_reg_8581.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i1_0_reg_8581.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_20_fu_84803_p2() {
    i_20_fu_84803_p2 = (!i19_0_reg_15995.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i19_0_reg_15995.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_21_fu_51154_p2() {
    i_21_fu_51154_p2 = (!i65_0_reg_11942.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i65_0_reg_11942.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_22_fu_87573_p2() {
    i_22_fu_87573_p2 = (!i28_0_in_reg_16340.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(i28_0_in_reg_16340.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_i_23_fu_53924_p2() {
    i_23_fu_53924_p2 = (!i74_0_in_reg_12286.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(i74_0_in_reg_12286.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_i_24_fu_61327_p2() {
    i_24_fu_61327_p2 = (!i3_0_reg_12693.read().is_01() || !ap_const_lv28_1.is_01())? sc_lv<28>(): (sc_biguint<28>(i3_0_reg_12693.read()) + sc_biguint<28>(ap_const_lv28_1));
}

void poly1305_hw::thread_i_25_fu_27643_p2() {
    i_25_fu_27643_p2 = (!i30_0_reg_8652.read().is_01() || !ap_const_lv28_1.is_01())? sc_lv<28>(): (sc_biguint<28>(i30_0_reg_8652.read()) + sc_biguint<28>(ap_const_lv28_1));
}

void poly1305_hw::thread_i_2_fu_27173_p2() {
    i_2_fu_27173_p2 = (!i2_0_reg_8592.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i2_0_reg_8592.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_3_fu_54062_p2() {
    i_3_fu_54062_p2 = (!i77_0_reg_12367.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i77_0_reg_12367.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void poly1305_hw::thread_i_4_fu_56032_p2() {
    i_4_fu_56032_p2 = (!i78_0_in_reg_12378.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(i78_0_in_reg_12378.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void poly1305_hw::thread_i_5_fu_58414_p2() {
    i_5_fu_58414_p2 = (!i94_0_reg_12433.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i94_0_reg_12433.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_6_fu_56222_p2() {
    i_6_fu_56222_p2 = (!i87_0_reg_12421.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i87_0_reg_12421.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_7_fu_58459_p2() {
    i_7_fu_58459_p2 = (!i101_0_reg_12444.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_bigint<7>(i101_0_reg_12444.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void poly1305_hw::thread_i_8_fu_61107_p2() {
    i_8_fu_61107_p2 = (!i105_0_reg_12569.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i105_0_reg_12569.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_i_9_fu_61067_p2() {
    i_9_fu_61067_p2 = (!i113_0_reg_12549.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i113_0_reg_12549.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_i_fu_21933_p2() {
    i_fu_21933_p2 = (!i_0_reg_8570.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(i_0_reg_8570.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void poly1305_hw::thread_icmp_ln147_fu_84303_p2() {
    icmp_ln147_fu_84303_p2 = (!mul_32_2_reg_117164.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_32_2_reg_117164.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln160_fu_84330_p2() {
    icmp_ln160_fu_84330_p2 = (!sub_ln160_fu_84320_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln160_fu_84320_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln163_fu_84336_p2() {
    icmp_ln163_fu_84336_p2 = (!sub_ln160_fu_84320_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln160_fu_84320_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln167_fu_84348_p2() {
    icmp_ln167_fu_84348_p2 = (!i12_0_in_reg_15827.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(i12_0_in_reg_15827.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void poly1305_hw::thread_icmp_ln168_fu_84368_p2() {
    icmp_ln168_fu_84368_p2 = (!arr1_q1.read().is_01() || !zext_ln168_1_fu_84364_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q1.read()) > sc_bigint<32>(zext_ln168_1_fu_84364_p1.read()));
}

void poly1305_hw::thread_icmp_ln172_fu_84374_p2() {
    icmp_ln172_fu_84374_p2 = (!arr1_q1.read().is_01() || !zext_ln168_1_fu_84364_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q1.read()) < sc_bigint<32>(zext_ln168_1_fu_84364_p1.read()));
}

void poly1305_hw::thread_icmp_ln196_fu_84698_p2() {
    icmp_ln196_fu_84698_p2 = (!arr1Zeroes_1_lcssa_reg_15867.read().is_01() || !ap_const_lv7_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes_1_lcssa_reg_15867.read() == ap_const_lv7_21);
}

void poly1305_hw::thread_icmp_ln202_fu_84726_p2() {
    icmp_ln202_fu_84726_p2 = (!zext_ln202_fu_84722_p1.read().is_01() || !sub_ln202_reg_117578.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln202_fu_84722_p1.read()) < sc_bigint<7>(sub_ln202_reg_117578.read()));
}

void poly1305_hw::thread_icmp_ln206_fu_84742_p2() {
    icmp_ln206_fu_84742_p2 = (!sub_ln202_reg_117578.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<1>(): (sc_bigint<7>(sub_ln202_reg_117578.read()) < sc_bigint<7>(ap_const_lv7_12));
}

void poly1305_hw::thread_icmp_ln208_16_fu_87521_p2() {
    icmp_ln208_16_fu_87521_p2 = (!arr1_q0.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q0.read()) < sc_bigint<32>(ap_const_lv32_3));
}

void poly1305_hw::thread_icmp_ln208_fu_87323_p2() {
    icmp_ln208_fu_87323_p2 = (!arr1_q0.read().is_01() || !ap_const_lv32_FB.is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q0.read()) < sc_bigint<32>(ap_const_lv32_FB));
}

void poly1305_hw::thread_icmp_ln221_fu_84757_p2() {
    icmp_ln221_fu_84757_p2 = (!zext_ln221_fu_84753_p1.read().is_01() || !sub_ln221_reg_117601.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln221_fu_84753_p1.read()) < sc_bigint<7>(sub_ln221_reg_117601.read()));
}

void poly1305_hw::thread_icmp_ln226_fu_84798_p2() {
    icmp_ln226_fu_84798_p2 = (!zext_ln226_fu_84794_p1.read().is_01() || !sub_ln221_reg_117601.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln226_fu_84794_p1.read()) < sc_bigint<7>(sub_ln221_reg_117601.read()));
}

void poly1305_hw::thread_icmp_ln231_10_fu_86321_p2() {
    icmp_ln231_10_fu_86321_p2 = (!tmp_1195_fu_86311_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1195_fu_86311_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_11_fu_86442_p2() {
    icmp_ln231_11_fu_86442_p2 = (!tmp_1197_fu_86432_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1197_fu_86432_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_12_fu_86576_p2() {
    icmp_ln231_12_fu_86576_p2 = (!tmp_1199_fu_86566_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1199_fu_86566_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_13_fu_86701_p2() {
    icmp_ln231_13_fu_86701_p2 = (!tmp_1201_fu_86691_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1201_fu_86691_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_14_fu_86827_p2() {
    icmp_ln231_14_fu_86827_p2 = (!tmp_1203_fu_86817_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1203_fu_86817_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_15_fu_86908_p2() {
    icmp_ln231_15_fu_86908_p2 = (!tmp_1205_fu_86898_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1205_fu_86898_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_16_fu_87110_p2() {
    icmp_ln231_16_fu_87110_p2 = (!tmp_1207_fu_87100_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1207_fu_87100_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_1_fu_85049_p2() {
    icmp_ln231_1_fu_85049_p2 = (!tmp_1177_fu_85039_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1177_fu_85039_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_2_fu_85171_p2() {
    icmp_ln231_2_fu_85171_p2 = (!tmp_1179_fu_85161_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1179_fu_85161_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_3_fu_85321_p2() {
    icmp_ln231_3_fu_85321_p2 = (!tmp_1181_fu_85311_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1181_fu_85311_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_4_fu_85473_p2() {
    icmp_ln231_4_fu_85473_p2 = (!tmp_1183_fu_85463_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1183_fu_85463_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_5_fu_85594_p2() {
    icmp_ln231_5_fu_85594_p2 = (!tmp_1185_fu_85584_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1185_fu_85584_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_6_fu_85744_p2() {
    icmp_ln231_6_fu_85744_p2 = (!tmp_1187_fu_85734_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1187_fu_85734_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_7_fu_85896_p2() {
    icmp_ln231_7_fu_85896_p2 = (!tmp_1189_fu_85886_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1189_fu_85886_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_8_fu_86017_p2() {
    icmp_ln231_8_fu_86017_p2 = (!tmp_1191_fu_86007_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1191_fu_86007_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_9_fu_86171_p2() {
    icmp_ln231_9_fu_86171_p2 = (!tmp_1193_fu_86161_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1193_fu_86161_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln231_fu_84871_p2() {
    icmp_ln231_fu_84871_p2 = (!tmp_1175_fu_84861_p4.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(tmp_1175_fu_84861_p4.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void poly1305_hw::thread_icmp_ln238_fu_87158_p2() {
    icmp_ln238_fu_87158_p2 = (!select_ln231_16_reg_118160.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln231_16_reg_118160.read() == ap_const_lv18_0);
}

void poly1305_hw::thread_icmp_ln244_10_fu_86394_p2() {
    icmp_ln244_10_fu_86394_p2 = (!tmp_1196_fu_86384_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1196_fu_86384_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_11_fu_86528_p2() {
    icmp_ln244_11_fu_86528_p2 = (!tmp_1198_fu_86518_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1198_fu_86518_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_12_fu_86653_p2() {
    icmp_ln244_12_fu_86653_p2 = (!tmp_1200_fu_86643_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1200_fu_86643_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_13_fu_86779_p2() {
    icmp_ln244_13_fu_86779_p2 = (!tmp_1202_fu_86769_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1202_fu_86769_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_14_fu_86954_p2() {
    icmp_ln244_14_fu_86954_p2 = (!tmp_1204_fu_86944_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1204_fu_86944_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_15_fu_87035_p2() {
    icmp_ln244_15_fu_87035_p2 = (!tmp_1206_fu_87025_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1206_fu_87025_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_16_fu_87235_p2() {
    icmp_ln244_16_fu_87235_p2 = (!tmp_1241_fu_87225_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1241_fu_87225_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_1_fu_85122_p2() {
    icmp_ln244_1_fu_85122_p2 = (!tmp_1178_fu_85112_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1178_fu_85112_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_2_fu_85273_p2() {
    icmp_ln244_2_fu_85273_p2 = (!tmp_1180_fu_85263_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1180_fu_85263_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_3_fu_85390_p2() {
    icmp_ln244_3_fu_85390_p2 = (!tmp_1182_fu_85380_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1182_fu_85380_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_4_fu_85546_p2() {
    icmp_ln244_4_fu_85546_p2 = (!tmp_1184_fu_85536_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1184_fu_85536_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_5_fu_85696_p2() {
    icmp_ln244_5_fu_85696_p2 = (!tmp_1186_fu_85686_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1186_fu_85686_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_6_fu_85813_p2() {
    icmp_ln244_6_fu_85813_p2 = (!tmp_1188_fu_85803_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1188_fu_85803_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_7_fu_85969_p2() {
    icmp_ln244_7_fu_85969_p2 = (!tmp_1190_fu_85959_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1190_fu_85959_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_8_fu_86123_p2() {
    icmp_ln244_8_fu_86123_p2 = (!tmp_1192_fu_86113_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1192_fu_86113_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_9_fu_86240_p2() {
    icmp_ln244_9_fu_86240_p2 = (!tmp_1194_fu_86230_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1194_fu_86230_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln244_fu_84940_p2() {
    icmp_ln244_fu_84940_p2 = (!tmp_1176_fu_84930_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1176_fu_84930_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln252_1_fu_87259_p2() {
    icmp_ln252_1_fu_87259_p2 = (!select_ln244_16_fu_87251_p3.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln244_16_fu_87251_p3.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln252_fu_87142_p2() {
    icmp_ln252_fu_87142_p2 = (!zext_ln226_reg_117627.read().is_01() || !sub_ln252_reg_117616.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln226_reg_117627.read() != sub_ln252_reg_117616.read());
}

void poly1305_hw::thread_icmp_ln259_fu_87284_p2() {
    icmp_ln259_fu_87284_p2 = (!zext_ln259_fu_87280_p1.read().is_01() || !sext_ln202_reg_117584.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln259_fu_87280_p1.read() == sext_ln202_reg_117584.read());
}

void poly1305_hw::thread_icmp_ln25_fu_21927_p2() {
    icmp_ln25_fu_21927_p2 = (!zext_ln25_fu_21923_p1.read().is_01() || !textLength_0_reg_8547.read().is_01())? sc_lv<1>(): (sc_bigint<32>(zext_ln25_fu_21923_p1.read()) < sc_bigint<32>(textLength_0_reg_8547.read()));
}

void poly1305_hw::thread_icmp_ln260_fu_87301_p2() {
    icmp_ln260_fu_87301_p2 = (!arr1_q1.read().is_01() || !temp_q0.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q1.read()) < sc_bigint<32>(temp_q0.read()));
}

void poly1305_hw::thread_icmp_ln28_fu_26991_p2() {
    icmp_ln28_fu_26991_p2 = (!i1_0_reg_8581.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(i1_0_reg_8581.read() == ap_const_lv6_20);
}

void poly1305_hw::thread_icmp_ln296_fu_87561_p2() {
    icmp_ln296_fu_87561_p2 = (!sub_ln296_fu_87551_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln296_fu_87551_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln299_fu_87567_p2() {
    icmp_ln299_fu_87567_p2 = (!sub_ln296_fu_87551_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln296_fu_87551_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln303_fu_87579_p2() {
    icmp_ln303_fu_87579_p2 = (!i28_0_in_reg_16340.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(i28_0_in_reg_16340.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void poly1305_hw::thread_icmp_ln304_fu_87599_p2() {
    icmp_ln304_fu_87599_p2 = (!arr1_q1.read().is_01() || !zext_ln304_1_fu_87595_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q1.read()) > sc_bigint<32>(zext_ln304_1_fu_87595_p1.read()));
}

void poly1305_hw::thread_icmp_ln308_fu_87605_p2() {
    icmp_ln308_fu_87605_p2 = (!arr1_q1.read().is_01() || !zext_ln304_1_fu_87595_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q1.read()) < sc_bigint<32>(zext_ln304_1_fu_87595_p1.read()));
}

void poly1305_hw::thread_icmp_ln318_fu_87611_p2() {
    icmp_ln318_fu_87611_p2 = (!arr1Zeroes_3_lcssa_reg_16191.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes_3_lcssa_reg_16191.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln337_fu_27638_p2() {
    icmp_ln337_fu_27638_p2 = (!zext_ln337_fu_27634_p1.read().is_01() || !select_ln58_reg_99370.read().is_01())? sc_lv<1>(): (sc_bigint<29>(zext_ln337_fu_27634_p1.read()) < sc_bigint<29>(select_ln58_reg_99370.read()));
}

void poly1305_hw::thread_icmp_ln383_100_fu_37399_p2() {
    icmp_ln383_100_fu_37399_p2 = (!tmp_486_reg_103258.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_486_reg_103258.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_101_fu_37471_p2() {
    icmp_ln383_101_fu_37471_p2 = (!tmp_490_fu_37462_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_490_fu_37462_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_102_fu_37543_p2() {
    icmp_ln383_102_fu_37543_p2 = (!grp_fu_19644_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19644_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_103_fu_37623_p2() {
    icmp_ln383_103_fu_37623_p2 = (!tmp_498_fu_37614_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_498_fu_37614_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_104_fu_37704_p2() {
    icmp_ln383_104_fu_37704_p2 = (!tmp_502_fu_37695_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_502_fu_37695_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_105_fu_37780_p2() {
    icmp_ln383_105_fu_37780_p2 = (!tmp_506_reg_103369.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_506_reg_103369.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_106_fu_37852_p2() {
    icmp_ln383_106_fu_37852_p2 = (!tmp_510_fu_37843_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_510_fu_37843_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_107_fu_37933_p2() {
    icmp_ln383_107_fu_37933_p2 = (!tmp_514_fu_37924_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_514_fu_37924_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_108_fu_38009_p2() {
    icmp_ln383_108_fu_38009_p2 = (!tmp_518_reg_103439.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_518_reg_103439.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_109_fu_38081_p2() {
    icmp_ln383_109_fu_38081_p2 = (!tmp_522_fu_38072_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_522_fu_38072_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_10_fu_30868_p2() {
    icmp_ln383_10_fu_30868_p2 = (!tmp_103_fu_30859_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_103_fu_30859_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_110_fu_38162_p2() {
    icmp_ln383_110_fu_38162_p2 = (!tmp_526_fu_38153_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_526_fu_38153_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_111_fu_38238_p2() {
    icmp_ln383_111_fu_38238_p2 = (!tmp_530_reg_103509.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_530_reg_103509.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_112_fu_38310_p2() {
    icmp_ln383_112_fu_38310_p2 = (!tmp_534_fu_38301_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_534_fu_38301_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_113_fu_38391_p2() {
    icmp_ln383_113_fu_38391_p2 = (!tmp_538_fu_38382_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_538_fu_38382_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_114_fu_38467_p2() {
    icmp_ln383_114_fu_38467_p2 = (!tmp_542_reg_103579.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_542_reg_103579.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_115_fu_38539_p2() {
    icmp_ln383_115_fu_38539_p2 = (!tmp_546_fu_38530_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_546_fu_38530_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_116_fu_38620_p2() {
    icmp_ln383_116_fu_38620_p2 = (!tmp_550_fu_38611_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_550_fu_38611_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_117_fu_38696_p2() {
    icmp_ln383_117_fu_38696_p2 = (!tmp_554_reg_103649.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_554_reg_103649.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_118_fu_38768_p2() {
    icmp_ln383_118_fu_38768_p2 = (!tmp_558_fu_38759_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_558_fu_38759_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_119_fu_38840_p2() {
    icmp_ln383_119_fu_38840_p2 = (!grp_fu_19704_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19704_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_11_fu_30905_p2() {
    icmp_ln383_11_fu_30905_p2 = (!tmp_105_fu_30896_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_105_fu_30896_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_120_fu_38920_p2() {
    icmp_ln383_120_fu_38920_p2 = (!tmp_566_fu_38911_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_566_fu_38911_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_121_fu_39001_p2() {
    icmp_ln383_121_fu_39001_p2 = (!tmp_570_fu_38992_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_570_fu_38992_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_122_fu_39077_p2() {
    icmp_ln383_122_fu_39077_p2 = (!tmp_574_reg_103760.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_574_reg_103760.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_123_fu_39149_p2() {
    icmp_ln383_123_fu_39149_p2 = (!tmp_578_fu_39140_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_578_fu_39140_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_124_fu_39230_p2() {
    icmp_ln383_124_fu_39230_p2 = (!tmp_582_fu_39221_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_582_fu_39221_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_125_fu_39306_p2() {
    icmp_ln383_125_fu_39306_p2 = (!tmp_586_reg_103830.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_586_reg_103830.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_126_fu_39378_p2() {
    icmp_ln383_126_fu_39378_p2 = (!tmp_590_fu_39369_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_590_fu_39369_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_127_fu_39459_p2() {
    icmp_ln383_127_fu_39459_p2 = (!tmp_594_fu_39450_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_594_fu_39450_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_128_fu_39535_p2() {
    icmp_ln383_128_fu_39535_p2 = (!tmp_598_reg_103900.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_598_reg_103900.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_129_fu_39607_p2() {
    icmp_ln383_129_fu_39607_p2 = (!tmp_602_fu_39598_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_602_fu_39598_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_12_fu_30934_p2() {
    icmp_ln383_12_fu_30934_p2 = (!tmp_140_reg_101156.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_140_reg_101156.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_130_fu_39688_p2() {
    icmp_ln383_130_fu_39688_p2 = (!tmp_606_fu_39679_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_606_fu_39679_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_131_fu_39764_p2() {
    icmp_ln383_131_fu_39764_p2 = (!tmp_610_reg_103970.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_610_reg_103970.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_132_fu_39836_p2() {
    icmp_ln383_132_fu_39836_p2 = (!tmp_614_fu_39827_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_614_fu_39827_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_133_fu_39917_p2() {
    icmp_ln383_133_fu_39917_p2 = (!tmp_618_fu_39908_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_618_fu_39908_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_134_fu_39993_p2() {
    icmp_ln383_134_fu_39993_p2 = (!tmp_622_reg_104040.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_622_reg_104040.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_135_fu_40065_p2() {
    icmp_ln383_135_fu_40065_p2 = (!tmp_626_fu_40056_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_626_fu_40056_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_136_fu_40137_p2() {
    icmp_ln383_136_fu_40137_p2 = (!grp_fu_19764_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19764_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_137_fu_40221_p2() {
    icmp_ln383_137_fu_40221_p2 = (!tmp_634_fu_40212_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_634_fu_40212_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_138_fu_40302_p2() {
    icmp_ln383_138_fu_40302_p2 = (!tmp_638_fu_40293_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_638_fu_40293_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_139_fu_40378_p2() {
    icmp_ln383_139_fu_40378_p2 = (!tmp_642_reg_104156.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_642_reg_104156.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_13_fu_30961_p2() {
    icmp_ln383_13_fu_30961_p2 = (!tmp_143_fu_30952_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_30952_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_140_fu_40450_p2() {
    icmp_ln383_140_fu_40450_p2 = (!tmp_646_fu_40441_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_646_fu_40441_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_141_fu_40531_p2() {
    icmp_ln383_141_fu_40531_p2 = (!tmp_650_fu_40522_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_650_fu_40522_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_142_fu_40607_p2() {
    icmp_ln383_142_fu_40607_p2 = (!tmp_654_reg_104226.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_654_reg_104226.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_143_fu_40679_p2() {
    icmp_ln383_143_fu_40679_p2 = (!tmp_658_fu_40670_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_658_fu_40670_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_144_fu_40760_p2() {
    icmp_ln383_144_fu_40760_p2 = (!tmp_662_fu_40751_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_662_fu_40751_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_145_fu_40836_p2() {
    icmp_ln383_145_fu_40836_p2 = (!tmp_666_reg_104296.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_666_reg_104296.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_146_fu_40908_p2() {
    icmp_ln383_146_fu_40908_p2 = (!tmp_670_fu_40899_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_670_fu_40899_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_147_fu_40989_p2() {
    icmp_ln383_147_fu_40989_p2 = (!tmp_674_fu_40980_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_674_fu_40980_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_148_fu_41065_p2() {
    icmp_ln383_148_fu_41065_p2 = (!tmp_678_reg_104366.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_678_reg_104366.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_149_fu_41137_p2() {
    icmp_ln383_149_fu_41137_p2 = (!tmp_682_fu_41128_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_682_fu_41128_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_14_fu_30998_p2() {
    icmp_ln383_14_fu_30998_p2 = (!tmp_145_fu_30989_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_145_fu_30989_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_150_fu_41218_p2() {
    icmp_ln383_150_fu_41218_p2 = (!tmp_686_fu_41209_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_686_fu_41209_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_151_fu_41294_p2() {
    icmp_ln383_151_fu_41294_p2 = (!tmp_690_reg_104436.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_690_reg_104436.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_152_fu_41366_p2() {
    icmp_ln383_152_fu_41366_p2 = (!tmp_694_fu_41357_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_694_fu_41357_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_153_fu_41437_p2() {
    icmp_ln383_153_fu_41437_p2 = (!grp_fu_19824_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19824_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_154_fu_41517_p2() {
    icmp_ln383_154_fu_41517_p2 = (!tmp_702_fu_41508_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_702_fu_41508_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_155_fu_41598_p2() {
    icmp_ln383_155_fu_41598_p2 = (!tmp_706_fu_41589_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_706_fu_41589_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_156_fu_41674_p2() {
    icmp_ln383_156_fu_41674_p2 = (!tmp_710_reg_104547.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_710_reg_104547.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_157_fu_41746_p2() {
    icmp_ln383_157_fu_41746_p2 = (!tmp_714_fu_41737_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_714_fu_41737_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_158_fu_41827_p2() {
    icmp_ln383_158_fu_41827_p2 = (!tmp_718_fu_41818_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_718_fu_41818_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_159_fu_41903_p2() {
    icmp_ln383_159_fu_41903_p2 = (!tmp_722_reg_104617.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_722_reg_104617.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_15_fu_31027_p2() {
    icmp_ln383_15_fu_31027_p2 = (!tmp_149_reg_101273.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_149_reg_101273.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_160_fu_41975_p2() {
    icmp_ln383_160_fu_41975_p2 = (!tmp_726_fu_41966_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_726_fu_41966_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_161_fu_42056_p2() {
    icmp_ln383_161_fu_42056_p2 = (!tmp_730_fu_42047_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_730_fu_42047_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_162_fu_42132_p2() {
    icmp_ln383_162_fu_42132_p2 = (!tmp_734_reg_104687.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_734_reg_104687.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_163_fu_42204_p2() {
    icmp_ln383_163_fu_42204_p2 = (!tmp_738_fu_42195_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_738_fu_42195_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_164_fu_42285_p2() {
    icmp_ln383_164_fu_42285_p2 = (!tmp_742_fu_42276_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_742_fu_42276_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_165_fu_42361_p2() {
    icmp_ln383_165_fu_42361_p2 = (!tmp_746_reg_104757.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_746_reg_104757.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_166_fu_42433_p2() {
    icmp_ln383_166_fu_42433_p2 = (!tmp_750_fu_42424_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_750_fu_42424_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_167_fu_42514_p2() {
    icmp_ln383_167_fu_42514_p2 = (!tmp_754_fu_42505_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_754_fu_42505_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_168_fu_42590_p2() {
    icmp_ln383_168_fu_42590_p2 = (!tmp_758_reg_104827.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_758_reg_104827.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_169_fu_42662_p2() {
    icmp_ln383_169_fu_42662_p2 = (!tmp_762_fu_42653_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_762_fu_42653_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_16_fu_31054_p2() {
    icmp_ln383_16_fu_31054_p2 = (!tmp_151_fu_31045_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_151_fu_31045_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_170_fu_42734_p2() {
    icmp_ln383_170_fu_42734_p2 = (!grp_fu_19884_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19884_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_171_fu_42814_p2() {
    icmp_ln383_171_fu_42814_p2 = (!tmp_770_fu_42805_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_770_fu_42805_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_172_fu_42895_p2() {
    icmp_ln383_172_fu_42895_p2 = (!tmp_774_fu_42886_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_774_fu_42886_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_173_fu_42971_p2() {
    icmp_ln383_173_fu_42971_p2 = (!tmp_778_reg_104938.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_778_reg_104938.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_174_fu_43043_p2() {
    icmp_ln383_174_fu_43043_p2 = (!tmp_782_fu_43034_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_782_fu_43034_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_175_fu_43124_p2() {
    icmp_ln383_175_fu_43124_p2 = (!tmp_786_fu_43115_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_786_fu_43115_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_176_fu_43200_p2() {
    icmp_ln383_176_fu_43200_p2 = (!tmp_790_reg_105008.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_790_reg_105008.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_177_fu_43272_p2() {
    icmp_ln383_177_fu_43272_p2 = (!tmp_794_fu_43263_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_794_fu_43263_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_178_fu_43353_p2() {
    icmp_ln383_178_fu_43353_p2 = (!tmp_798_fu_43344_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_798_fu_43344_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_179_fu_43429_p2() {
    icmp_ln383_179_fu_43429_p2 = (!tmp_802_reg_105078.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_802_reg_105078.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_17_fu_31081_p2() {
    icmp_ln383_17_fu_31081_p2 = (!grp_fu_19344_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19344_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_180_fu_43501_p2() {
    icmp_ln383_180_fu_43501_p2 = (!tmp_806_fu_43492_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_806_fu_43492_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_181_fu_43582_p2() {
    icmp_ln383_181_fu_43582_p2 = (!tmp_810_fu_43573_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_810_fu_43573_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_182_fu_43658_p2() {
    icmp_ln383_182_fu_43658_p2 = (!tmp_814_reg_105148.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_814_reg_105148.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_183_fu_43730_p2() {
    icmp_ln383_183_fu_43730_p2 = (!tmp_818_fu_43721_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_818_fu_43721_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_184_fu_43811_p2() {
    icmp_ln383_184_fu_43811_p2 = (!tmp_822_fu_43802_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_822_fu_43802_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_185_fu_43887_p2() {
    icmp_ln383_185_fu_43887_p2 = (!tmp_826_reg_105218.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_826_reg_105218.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_186_fu_43959_p2() {
    icmp_ln383_186_fu_43959_p2 = (!tmp_830_fu_43950_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_830_fu_43950_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_187_fu_44031_p2() {
    icmp_ln383_187_fu_44031_p2 = (!grp_fu_19944_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19944_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_188_fu_44111_p2() {
    icmp_ln383_188_fu_44111_p2 = (!tmp_838_fu_44102_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_838_fu_44102_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_189_fu_44192_p2() {
    icmp_ln383_189_fu_44192_p2 = (!tmp_842_fu_44183_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_842_fu_44183_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_18_fu_31135_p2() {
    icmp_ln383_18_fu_31135_p2 = (!tmp_157_fu_31126_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_157_fu_31126_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_190_fu_44268_p2() {
    icmp_ln383_190_fu_44268_p2 = (!tmp_846_reg_105329.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_846_reg_105329.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_191_fu_44340_p2() {
    icmp_ln383_191_fu_44340_p2 = (!tmp_850_fu_44331_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_850_fu_44331_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_192_fu_44421_p2() {
    icmp_ln383_192_fu_44421_p2 = (!tmp_854_fu_44412_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_854_fu_44412_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_193_fu_44497_p2() {
    icmp_ln383_193_fu_44497_p2 = (!tmp_858_reg_105399.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_858_reg_105399.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_194_fu_44569_p2() {
    icmp_ln383_194_fu_44569_p2 = (!tmp_862_fu_44560_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_862_fu_44560_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_195_fu_44650_p2() {
    icmp_ln383_195_fu_44650_p2 = (!tmp_866_fu_44641_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_866_fu_44641_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_196_fu_44726_p2() {
    icmp_ln383_196_fu_44726_p2 = (!tmp_870_reg_105469.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_870_reg_105469.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_197_fu_44798_p2() {
    icmp_ln383_197_fu_44798_p2 = (!tmp_874_fu_44789_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_874_fu_44789_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_198_fu_44879_p2() {
    icmp_ln383_198_fu_44879_p2 = (!tmp_878_fu_44870_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_878_fu_44870_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_199_fu_44955_p2() {
    icmp_ln383_199_fu_44955_p2 = (!tmp_882_reg_105539.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_882_reg_105539.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_19_fu_31216_p2() {
    icmp_ln383_19_fu_31216_p2 = (!tmp_161_fu_31207_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_31207_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_1_fu_30589_p2() {
    icmp_ln383_1_fu_30589_p2 = (!tmp_48_fu_30580_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_48_fu_30580_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_200_fu_45027_p2() {
    icmp_ln383_200_fu_45027_p2 = (!tmp_886_fu_45018_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_886_fu_45018_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_201_fu_45108_p2() {
    icmp_ln383_201_fu_45108_p2 = (!tmp_890_fu_45099_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_890_fu_45099_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_202_fu_45184_p2() {
    icmp_ln383_202_fu_45184_p2 = (!tmp_894_reg_105609.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_894_reg_105609.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_203_fu_45256_p2() {
    icmp_ln383_203_fu_45256_p2 = (!tmp_898_fu_45247_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_898_fu_45247_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_204_fu_45328_p2() {
    icmp_ln383_204_fu_45328_p2 = (!grp_fu_20004_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_20004_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_205_fu_45412_p2() {
    icmp_ln383_205_fu_45412_p2 = (!tmp_906_fu_45403_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_906_fu_45403_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_206_fu_45493_p2() {
    icmp_ln383_206_fu_45493_p2 = (!tmp_910_fu_45484_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_910_fu_45484_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_207_fu_45569_p2() {
    icmp_ln383_207_fu_45569_p2 = (!tmp_914_reg_105725.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_914_reg_105725.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_208_fu_45641_p2() {
    icmp_ln383_208_fu_45641_p2 = (!tmp_918_fu_45632_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_918_fu_45632_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_209_fu_45722_p2() {
    icmp_ln383_209_fu_45722_p2 = (!tmp_922_fu_45713_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_922_fu_45713_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_20_fu_31292_p2() {
    icmp_ln383_20_fu_31292_p2 = (!tmp_165_reg_101409.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_165_reg_101409.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_210_fu_45798_p2() {
    icmp_ln383_210_fu_45798_p2 = (!tmp_926_reg_105795.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_926_reg_105795.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_211_fu_45870_p2() {
    icmp_ln383_211_fu_45870_p2 = (!tmp_930_fu_45861_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_930_fu_45861_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_212_fu_45951_p2() {
    icmp_ln383_212_fu_45951_p2 = (!tmp_934_fu_45942_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_934_fu_45942_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_213_fu_46027_p2() {
    icmp_ln383_213_fu_46027_p2 = (!tmp_938_reg_105865.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_938_reg_105865.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_214_fu_46099_p2() {
    icmp_ln383_214_fu_46099_p2 = (!tmp_942_fu_46090_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_942_fu_46090_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_215_fu_46180_p2() {
    icmp_ln383_215_fu_46180_p2 = (!tmp_946_fu_46171_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_946_fu_46171_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_216_fu_46256_p2() {
    icmp_ln383_216_fu_46256_p2 = (!tmp_950_reg_105935.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_950_reg_105935.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_217_fu_46328_p2() {
    icmp_ln383_217_fu_46328_p2 = (!tmp_954_fu_46319_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_954_fu_46319_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_218_fu_46409_p2() {
    icmp_ln383_218_fu_46409_p2 = (!tmp_958_fu_46400_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_958_fu_46400_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_219_fu_46485_p2() {
    icmp_ln383_219_fu_46485_p2 = (!tmp_962_reg_106005.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_962_reg_106005.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_21_fu_31364_p2() {
    icmp_ln383_21_fu_31364_p2 = (!tmp_169_fu_31355_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_169_fu_31355_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_220_fu_46557_p2() {
    icmp_ln383_220_fu_46557_p2 = (!tmp_966_fu_46548_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_966_fu_46548_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_221_fu_46628_p2() {
    icmp_ln383_221_fu_46628_p2 = (!grp_fu_20064_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_20064_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_222_fu_46708_p2() {
    icmp_ln383_222_fu_46708_p2 = (!tmp_974_fu_46699_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_974_fu_46699_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_223_fu_46789_p2() {
    icmp_ln383_223_fu_46789_p2 = (!tmp_978_fu_46780_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_978_fu_46780_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_224_fu_46865_p2() {
    icmp_ln383_224_fu_46865_p2 = (!tmp_982_reg_106116.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_982_reg_106116.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_225_fu_46937_p2() {
    icmp_ln383_225_fu_46937_p2 = (!tmp_986_fu_46928_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_986_fu_46928_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_226_fu_47018_p2() {
    icmp_ln383_226_fu_47018_p2 = (!tmp_990_fu_47009_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_990_fu_47009_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_227_fu_47094_p2() {
    icmp_ln383_227_fu_47094_p2 = (!tmp_994_reg_106186.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_994_reg_106186.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_228_fu_47166_p2() {
    icmp_ln383_228_fu_47166_p2 = (!tmp_998_fu_47157_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_998_fu_47157_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_229_fu_47247_p2() {
    icmp_ln383_229_fu_47247_p2 = (!tmp_1002_fu_47238_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1002_fu_47238_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_22_fu_31445_p2() {
    icmp_ln383_22_fu_31445_p2 = (!tmp_173_fu_31436_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_31436_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_230_fu_47323_p2() {
    icmp_ln383_230_fu_47323_p2 = (!tmp_1006_reg_106256.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1006_reg_106256.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_231_fu_47395_p2() {
    icmp_ln383_231_fu_47395_p2 = (!tmp_1010_fu_47386_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1010_fu_47386_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_232_fu_47476_p2() {
    icmp_ln383_232_fu_47476_p2 = (!tmp_1014_fu_47467_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1014_fu_47467_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_233_fu_47552_p2() {
    icmp_ln383_233_fu_47552_p2 = (!tmp_1018_reg_106326.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1018_reg_106326.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_234_fu_47624_p2() {
    icmp_ln383_234_fu_47624_p2 = (!tmp_1022_fu_47615_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1022_fu_47615_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_235_fu_47705_p2() {
    icmp_ln383_235_fu_47705_p2 = (!tmp_1026_fu_47696_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1026_fu_47696_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_236_fu_47781_p2() {
    icmp_ln383_236_fu_47781_p2 = (!tmp_1030_reg_106396.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1030_reg_106396.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_237_fu_47853_p2() {
    icmp_ln383_237_fu_47853_p2 = (!tmp_1034_fu_47844_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1034_fu_47844_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_238_fu_47925_p2() {
    icmp_ln383_238_fu_47925_p2 = (!grp_fu_20124_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_20124_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_239_fu_48005_p2() {
    icmp_ln383_239_fu_48005_p2 = (!tmp_1042_fu_47996_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1042_fu_47996_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_23_fu_31521_p2() {
    icmp_ln383_23_fu_31521_p2 = (!tmp_178_reg_101479.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_178_reg_101479.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_240_fu_48086_p2() {
    icmp_ln383_240_fu_48086_p2 = (!tmp_1046_fu_48077_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1046_fu_48077_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_241_fu_48162_p2() {
    icmp_ln383_241_fu_48162_p2 = (!tmp_1050_reg_106507.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1050_reg_106507.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_242_fu_48234_p2() {
    icmp_ln383_242_fu_48234_p2 = (!tmp_1054_fu_48225_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1054_fu_48225_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_243_fu_48315_p2() {
    icmp_ln383_243_fu_48315_p2 = (!tmp_1058_fu_48306_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1058_fu_48306_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_244_fu_48391_p2() {
    icmp_ln383_244_fu_48391_p2 = (!tmp_1062_reg_106577.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1062_reg_106577.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_245_fu_48463_p2() {
    icmp_ln383_245_fu_48463_p2 = (!tmp_1066_fu_48454_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1066_fu_48454_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_246_fu_48544_p2() {
    icmp_ln383_246_fu_48544_p2 = (!tmp_1070_fu_48535_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1070_fu_48535_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_247_fu_48620_p2() {
    icmp_ln383_247_fu_48620_p2 = (!tmp_1074_reg_106647.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1074_reg_106647.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_248_fu_48692_p2() {
    icmp_ln383_248_fu_48692_p2 = (!tmp_1078_fu_48683_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1078_fu_48683_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_249_fu_48773_p2() {
    icmp_ln383_249_fu_48773_p2 = (!tmp_1082_fu_48764_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1082_fu_48764_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_24_fu_31593_p2() {
    icmp_ln383_24_fu_31593_p2 = (!tmp_182_fu_31584_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_182_fu_31584_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_250_fu_48849_p2() {
    icmp_ln383_250_fu_48849_p2 = (!tmp_1086_reg_106717.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1086_reg_106717.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_251_fu_48921_p2() {
    icmp_ln383_251_fu_48921_p2 = (!tmp_1090_fu_48912_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1090_fu_48912_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_252_fu_49002_p2() {
    icmp_ln383_252_fu_49002_p2 = (!tmp_1094_fu_48993_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1094_fu_48993_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_253_fu_49078_p2() {
    icmp_ln383_253_fu_49078_p2 = (!tmp_1098_reg_106787.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1098_reg_106787.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_254_fu_49150_p2() {
    icmp_ln383_254_fu_49150_p2 = (!tmp_1102_fu_49141_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1102_fu_49141_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_255_fu_49222_p2() {
    icmp_ln383_255_fu_49222_p2 = (!grp_fu_20184_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_20184_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_256_fu_49302_p2() {
    icmp_ln383_256_fu_49302_p2 = (!tmp_1110_fu_49293_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1110_fu_49293_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_257_fu_49383_p2() {
    icmp_ln383_257_fu_49383_p2 = (!tmp_1114_fu_49374_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1114_fu_49374_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_258_fu_49459_p2() {
    icmp_ln383_258_fu_49459_p2 = (!tmp_1118_reg_106898.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1118_reg_106898.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_259_fu_49531_p2() {
    icmp_ln383_259_fu_49531_p2 = (!tmp_1122_fu_49522_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1122_fu_49522_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_25_fu_31674_p2() {
    icmp_ln383_25_fu_31674_p2 = (!tmp_186_fu_31665_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_186_fu_31665_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_260_fu_49612_p2() {
    icmp_ln383_260_fu_49612_p2 = (!tmp_1126_fu_49603_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1126_fu_49603_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_261_fu_49688_p2() {
    icmp_ln383_261_fu_49688_p2 = (!tmp_1130_reg_106968.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1130_reg_106968.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_262_fu_49760_p2() {
    icmp_ln383_262_fu_49760_p2 = (!tmp_1134_fu_49751_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1134_fu_49751_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_263_fu_49841_p2() {
    icmp_ln383_263_fu_49841_p2 = (!tmp_1138_fu_49832_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1138_fu_49832_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_264_fu_49917_p2() {
    icmp_ln383_264_fu_49917_p2 = (!tmp_1142_reg_107038.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1142_reg_107038.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_265_fu_49989_p2() {
    icmp_ln383_265_fu_49989_p2 = (!tmp_1146_fu_49980_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1146_fu_49980_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_266_fu_50070_p2() {
    icmp_ln383_266_fu_50070_p2 = (!tmp_1150_fu_50061_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1150_fu_50061_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_267_fu_50146_p2() {
    icmp_ln383_267_fu_50146_p2 = (!tmp_1154_reg_107108.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1154_reg_107108.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_268_fu_50218_p2() {
    icmp_ln383_268_fu_50218_p2 = (!tmp_1158_fu_50209_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1158_fu_50209_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_269_fu_50299_p2() {
    icmp_ln383_269_fu_50299_p2 = (!tmp_1162_fu_50290_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1162_fu_50290_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_26_fu_31750_p2() {
    icmp_ln383_26_fu_31750_p2 = (!tmp_190_reg_101549.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_190_reg_101549.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_270_fu_50375_p2() {
    icmp_ln383_270_fu_50375_p2 = (!tmp_1166_reg_107178.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1166_reg_107178.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_271_fu_50447_p2() {
    icmp_ln383_271_fu_50447_p2 = (!tmp_1170_fu_50438_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1170_fu_50438_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_27_fu_31822_p2() {
    icmp_ln383_27_fu_31822_p2 = (!tmp_194_fu_31813_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_194_fu_31813_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_28_fu_31903_p2() {
    icmp_ln383_28_fu_31903_p2 = (!tmp_198_fu_31894_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_198_fu_31894_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_29_fu_31979_p2() {
    icmp_ln383_29_fu_31979_p2 = (!tmp_202_reg_101619.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_202_reg_101619.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_2_fu_30626_p2() {
    icmp_ln383_2_fu_30626_p2 = (!tmp_50_fu_30617_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_50_fu_30617_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_30_fu_32051_p2() {
    icmp_ln383_30_fu_32051_p2 = (!tmp_206_fu_32042_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_206_fu_32042_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_31_fu_32132_p2() {
    icmp_ln383_31_fu_32132_p2 = (!tmp_210_fu_32123_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_210_fu_32123_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_32_fu_32208_p2() {
    icmp_ln383_32_fu_32208_p2 = (!tmp_214_reg_101689.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_214_reg_101689.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_33_fu_32280_p2() {
    icmp_ln383_33_fu_32280_p2 = (!tmp_218_fu_32271_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_218_fu_32271_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_34_fu_32352_p2() {
    icmp_ln383_34_fu_32352_p2 = (!grp_fu_19404_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19404_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_35_fu_32432_p2() {
    icmp_ln383_35_fu_32432_p2 = (!tmp_226_fu_32423_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_fu_32423_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_36_fu_32513_p2() {
    icmp_ln383_36_fu_32513_p2 = (!tmp_230_fu_32504_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_230_fu_32504_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_37_fu_32589_p2() {
    icmp_ln383_37_fu_32589_p2 = (!tmp_234_reg_101800.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_234_reg_101800.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_38_fu_32661_p2() {
    icmp_ln383_38_fu_32661_p2 = (!tmp_238_fu_32652_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_238_fu_32652_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_39_fu_32742_p2() {
    icmp_ln383_39_fu_32742_p2 = (!tmp_242_fu_32733_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_242_fu_32733_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_3_fu_30655_p2() {
    icmp_ln383_3_fu_30655_p2 = (!tmp_53_reg_100805.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_53_reg_100805.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_40_fu_32818_p2() {
    icmp_ln383_40_fu_32818_p2 = (!tmp_246_reg_101870.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_246_reg_101870.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_41_fu_32890_p2() {
    icmp_ln383_41_fu_32890_p2 = (!tmp_250_fu_32881_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_250_fu_32881_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_42_fu_32971_p2() {
    icmp_ln383_42_fu_32971_p2 = (!tmp_254_fu_32962_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_254_fu_32962_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_43_fu_33047_p2() {
    icmp_ln383_43_fu_33047_p2 = (!tmp_258_reg_101940.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_258_reg_101940.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_44_fu_33119_p2() {
    icmp_ln383_44_fu_33119_p2 = (!tmp_262_fu_33110_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_262_fu_33110_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_45_fu_33200_p2() {
    icmp_ln383_45_fu_33200_p2 = (!tmp_266_fu_33191_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_266_fu_33191_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_46_fu_33276_p2() {
    icmp_ln383_46_fu_33276_p2 = (!tmp_270_reg_102010.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_270_reg_102010.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_47_fu_33348_p2() {
    icmp_ln383_47_fu_33348_p2 = (!tmp_274_fu_33339_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_274_fu_33339_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_48_fu_33429_p2() {
    icmp_ln383_48_fu_33429_p2 = (!tmp_278_fu_33420_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_278_fu_33420_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_49_fu_33505_p2() {
    icmp_ln383_49_fu_33505_p2 = (!tmp_282_reg_102080.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_282_reg_102080.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_4_fu_30682_p2() {
    icmp_ln383_4_fu_30682_p2 = (!tmp_55_fu_30673_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_55_fu_30673_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_50_fu_33577_p2() {
    icmp_ln383_50_fu_33577_p2 = (!tmp_286_fu_33568_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_286_fu_33568_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_51_fu_33649_p2() {
    icmp_ln383_51_fu_33649_p2 = (!grp_fu_19464_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19464_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_52_fu_33729_p2() {
    icmp_ln383_52_fu_33729_p2 = (!tmp_294_fu_33720_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_294_fu_33720_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_53_fu_33810_p2() {
    icmp_ln383_53_fu_33810_p2 = (!tmp_298_fu_33801_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_298_fu_33801_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_54_fu_33886_p2() {
    icmp_ln383_54_fu_33886_p2 = (!tmp_302_reg_102191.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_302_reg_102191.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_55_fu_33958_p2() {
    icmp_ln383_55_fu_33958_p2 = (!tmp_306_fu_33949_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_306_fu_33949_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_56_fu_34039_p2() {
    icmp_ln383_56_fu_34039_p2 = (!tmp_310_fu_34030_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_310_fu_34030_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_57_fu_34115_p2() {
    icmp_ln383_57_fu_34115_p2 = (!tmp_314_reg_102261.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_314_reg_102261.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_58_fu_34187_p2() {
    icmp_ln383_58_fu_34187_p2 = (!tmp_318_fu_34178_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_318_fu_34178_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_59_fu_34268_p2() {
    icmp_ln383_59_fu_34268_p2 = (!tmp_322_fu_34259_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_322_fu_34259_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_5_fu_30719_p2() {
    icmp_ln383_5_fu_30719_p2 = (!tmp_90_fu_30710_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_90_fu_30710_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_60_fu_34344_p2() {
    icmp_ln383_60_fu_34344_p2 = (!tmp_326_reg_102331.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_326_reg_102331.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_61_fu_34416_p2() {
    icmp_ln383_61_fu_34416_p2 = (!tmp_330_fu_34407_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_330_fu_34407_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_62_fu_34497_p2() {
    icmp_ln383_62_fu_34497_p2 = (!tmp_334_fu_34488_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_334_fu_34488_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_63_fu_34573_p2() {
    icmp_ln383_63_fu_34573_p2 = (!tmp_338_reg_102401.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_338_reg_102401.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_64_fu_34645_p2() {
    icmp_ln383_64_fu_34645_p2 = (!tmp_342_fu_34636_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_342_fu_34636_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_65_fu_34726_p2() {
    icmp_ln383_65_fu_34726_p2 = (!tmp_346_fu_34717_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_346_fu_34717_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_66_fu_34802_p2() {
    icmp_ln383_66_fu_34802_p2 = (!tmp_350_reg_102471.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_350_reg_102471.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_67_fu_34874_p2() {
    icmp_ln383_67_fu_34874_p2 = (!tmp_354_fu_34865_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_354_fu_34865_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln383_68_fu_34946_p2() {
    icmp_ln383_68_fu_34946_p2 = (!grp_fu_19524_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19524_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_69_fu_35030_p2() {
    icmp_ln383_69_fu_35030_p2 = (!tmp_362_fu_35021_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_362_fu_35021_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_6_fu_30748_p2() {
    icmp_ln383_6_fu_30748_p2 = (!tmp_94_reg_100922.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_94_reg_100922.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_70_fu_35111_p2() {
    icmp_ln383_70_fu_35111_p2 = (!tmp_366_fu_35102_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_366_fu_35102_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_71_fu_35187_p2() {
    icmp_ln383_71_fu_35187_p2 = (!tmp_370_reg_102587.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_370_reg_102587.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_72_fu_35259_p2() {
    icmp_ln383_72_fu_35259_p2 = (!tmp_374_fu_35250_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_374_fu_35250_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_73_fu_35340_p2() {
    icmp_ln383_73_fu_35340_p2 = (!tmp_378_fu_35331_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_378_fu_35331_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_74_fu_35416_p2() {
    icmp_ln383_74_fu_35416_p2 = (!tmp_382_reg_102657.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_382_reg_102657.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_75_fu_35488_p2() {
    icmp_ln383_75_fu_35488_p2 = (!tmp_386_fu_35479_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_386_fu_35479_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_76_fu_35569_p2() {
    icmp_ln383_76_fu_35569_p2 = (!tmp_390_fu_35560_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_390_fu_35560_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_77_fu_35645_p2() {
    icmp_ln383_77_fu_35645_p2 = (!tmp_394_reg_102727.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_394_reg_102727.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_78_fu_35717_p2() {
    icmp_ln383_78_fu_35717_p2 = (!tmp_398_fu_35708_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_398_fu_35708_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_79_fu_35798_p2() {
    icmp_ln383_79_fu_35798_p2 = (!tmp_402_fu_35789_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_402_fu_35789_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_7_fu_30775_p2() {
    icmp_ln383_7_fu_30775_p2 = (!tmp_96_fu_30766_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_fu_30766_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_80_fu_35874_p2() {
    icmp_ln383_80_fu_35874_p2 = (!tmp_406_reg_102797.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_406_reg_102797.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_81_fu_35946_p2() {
    icmp_ln383_81_fu_35946_p2 = (!tmp_410_fu_35937_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_410_fu_35937_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_82_fu_36027_p2() {
    icmp_ln383_82_fu_36027_p2 = (!tmp_414_fu_36018_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_414_fu_36018_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_83_fu_36103_p2() {
    icmp_ln383_83_fu_36103_p2 = (!tmp_418_reg_102867.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_418_reg_102867.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_84_fu_36175_p2() {
    icmp_ln383_84_fu_36175_p2 = (!tmp_422_fu_36166_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_422_fu_36166_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_85_fu_36246_p2() {
    icmp_ln383_85_fu_36246_p2 = (!grp_fu_19584_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19584_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_86_fu_36326_p2() {
    icmp_ln383_86_fu_36326_p2 = (!tmp_430_fu_36317_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_430_fu_36317_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_87_fu_36407_p2() {
    icmp_ln383_87_fu_36407_p2 = (!tmp_434_fu_36398_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_434_fu_36398_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_88_fu_36483_p2() {
    icmp_ln383_88_fu_36483_p2 = (!tmp_438_reg_102978.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_438_reg_102978.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_89_fu_36555_p2() {
    icmp_ln383_89_fu_36555_p2 = (!tmp_442_fu_36546_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_442_fu_36546_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_8_fu_30812_p2() {
    icmp_ln383_8_fu_30812_p2 = (!tmp_99_fu_30803_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_99_fu_30803_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_90_fu_36636_p2() {
    icmp_ln383_90_fu_36636_p2 = (!tmp_446_fu_36627_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_446_fu_36627_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_91_fu_36712_p2() {
    icmp_ln383_91_fu_36712_p2 = (!tmp_450_reg_103048.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_450_reg_103048.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_92_fu_36784_p2() {
    icmp_ln383_92_fu_36784_p2 = (!tmp_454_fu_36775_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_454_fu_36775_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_93_fu_36865_p2() {
    icmp_ln383_93_fu_36865_p2 = (!tmp_458_fu_36856_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_458_fu_36856_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_94_fu_36941_p2() {
    icmp_ln383_94_fu_36941_p2 = (!tmp_462_reg_103118.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_462_reg_103118.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_95_fu_37013_p2() {
    icmp_ln383_95_fu_37013_p2 = (!tmp_466_fu_37004_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_466_fu_37004_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_96_fu_37094_p2() {
    icmp_ln383_96_fu_37094_p2 = (!tmp_470_fu_37085_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_470_fu_37085_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_97_fu_37170_p2() {
    icmp_ln383_97_fu_37170_p2 = (!tmp_474_reg_103188.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_474_reg_103188.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_98_fu_37242_p2() {
    icmp_ln383_98_fu_37242_p2 = (!tmp_478_fu_37233_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_478_fu_37233_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_99_fu_37323_p2() {
    icmp_ln383_99_fu_37323_p2 = (!tmp_482_fu_37314_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_482_fu_37314_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_9_fu_30841_p2() {
    icmp_ln383_9_fu_30841_p2 = (!tmp_101_reg_101039.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_reg_101039.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln383_fu_30357_p2() {
    icmp_ln383_fu_30357_p2 = (!grp_fu_19098_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_19098_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln38_fu_27167_p2() {
    icmp_ln38_fu_27167_p2 = (!i2_0_reg_8592.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i2_0_reg_8592.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln434_fu_50654_p2() {
    icmp_ln434_fu_50654_p2 = (!mul_32_3_reg_107216.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_32_3_reg_107216.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln447_fu_50681_p2() {
    icmp_ln447_fu_50681_p2 = (!sub_ln447_fu_50671_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln447_fu_50671_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln450_fu_50687_p2() {
    icmp_ln450_fu_50687_p2 = (!sub_ln447_fu_50671_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln447_fu_50671_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln454_fu_50699_p2() {
    icmp_ln454_fu_50699_p2 = (!i57_0_in_reg_11773.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(i57_0_in_reg_11773.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void poly1305_hw::thread_icmp_ln455_fu_50719_p2() {
    icmp_ln455_fu_50719_p2 = (!arr1_1_q1.read().is_01() || !zext_ln455_1_fu_50715_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q1.read()) > sc_bigint<32>(zext_ln455_1_fu_50715_p1.read()));
}

void poly1305_hw::thread_icmp_ln459_fu_50725_p2() {
    icmp_ln459_fu_50725_p2 = (!arr1_1_q1.read().is_01() || !zext_ln455_1_fu_50715_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q1.read()) < sc_bigint<32>(zext_ln455_1_fu_50715_p1.read()));
}

void poly1305_hw::thread_icmp_ln483_fu_51049_p2() {
    icmp_ln483_fu_51049_p2 = (!arr1Zeroes53_1_lcssa_reg_11826.read().is_01() || !ap_const_lv7_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes53_1_lcssa_reg_11826.read() == ap_const_lv7_21);
}

void poly1305_hw::thread_icmp_ln486_fu_51077_p2() {
    icmp_ln486_fu_51077_p2 = (!zext_ln486_fu_51073_p1.read().is_01() || !sub_ln486_reg_107630.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln486_fu_51073_p1.read()) < sc_bigint<7>(sub_ln486_reg_107630.read()));
}

void poly1305_hw::thread_icmp_ln490_fu_51093_p2() {
    icmp_ln490_fu_51093_p2 = (!sub_ln486_reg_107630.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<1>(): (sc_bigint<7>(sub_ln486_reg_107630.read()) < sc_bigint<7>(ap_const_lv7_12));
}

void poly1305_hw::thread_icmp_ln492_16_fu_53872_p2() {
    icmp_ln492_16_fu_53872_p2 = (!arr1_1_q0.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q0.read()) < sc_bigint<32>(ap_const_lv32_3));
}

void poly1305_hw::thread_icmp_ln492_fu_53674_p2() {
    icmp_ln492_fu_53674_p2 = (!arr1_1_q0.read().is_01() || !ap_const_lv32_FB.is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q0.read()) < sc_bigint<32>(ap_const_lv32_FB));
}

void poly1305_hw::thread_icmp_ln505_fu_51108_p2() {
    icmp_ln505_fu_51108_p2 = (!zext_ln505_fu_51104_p1.read().is_01() || !sub_ln505_reg_107653.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln505_fu_51104_p1.read()) < sc_bigint<7>(sub_ln505_reg_107653.read()));
}

void poly1305_hw::thread_icmp_ln510_fu_51149_p2() {
    icmp_ln510_fu_51149_p2 = (!zext_ln510_fu_51145_p1.read().is_01() || !sub_ln505_reg_107653.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln510_fu_51145_p1.read()) < sc_bigint<7>(sub_ln505_reg_107653.read()));
}

void poly1305_hw::thread_icmp_ln515_10_fu_52672_p2() {
    icmp_ln515_10_fu_52672_p2 = (!tmp_1228_fu_52662_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1228_fu_52662_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_11_fu_52793_p2() {
    icmp_ln515_11_fu_52793_p2 = (!tmp_1230_fu_52783_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1230_fu_52783_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_12_fu_52927_p2() {
    icmp_ln515_12_fu_52927_p2 = (!tmp_1232_fu_52917_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1232_fu_52917_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_13_fu_53052_p2() {
    icmp_ln515_13_fu_53052_p2 = (!tmp_1234_fu_53042_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1234_fu_53042_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_14_fu_53178_p2() {
    icmp_ln515_14_fu_53178_p2 = (!tmp_1236_fu_53168_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1236_fu_53168_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_15_fu_53259_p2() {
    icmp_ln515_15_fu_53259_p2 = (!tmp_1238_fu_53249_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1238_fu_53249_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_16_fu_53461_p2() {
    icmp_ln515_16_fu_53461_p2 = (!tmp_1240_fu_53451_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1240_fu_53451_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_1_fu_51400_p2() {
    icmp_ln515_1_fu_51400_p2 = (!tmp_1210_fu_51390_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1210_fu_51390_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_2_fu_51522_p2() {
    icmp_ln515_2_fu_51522_p2 = (!tmp_1212_fu_51512_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1212_fu_51512_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_3_fu_51672_p2() {
    icmp_ln515_3_fu_51672_p2 = (!tmp_1214_fu_51662_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1214_fu_51662_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_4_fu_51824_p2() {
    icmp_ln515_4_fu_51824_p2 = (!tmp_1216_fu_51814_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1216_fu_51814_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_5_fu_51945_p2() {
    icmp_ln515_5_fu_51945_p2 = (!tmp_1218_fu_51935_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1218_fu_51935_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_6_fu_52095_p2() {
    icmp_ln515_6_fu_52095_p2 = (!tmp_1220_fu_52085_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1220_fu_52085_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_7_fu_52247_p2() {
    icmp_ln515_7_fu_52247_p2 = (!tmp_1222_fu_52237_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1222_fu_52237_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_8_fu_52368_p2() {
    icmp_ln515_8_fu_52368_p2 = (!tmp_1224_fu_52358_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1224_fu_52358_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_9_fu_52522_p2() {
    icmp_ln515_9_fu_52522_p2 = (!tmp_1226_fu_52512_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_1226_fu_52512_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln515_fu_51222_p2() {
    icmp_ln515_fu_51222_p2 = (!tmp_1208_fu_51212_p4.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(tmp_1208_fu_51212_p4.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void poly1305_hw::thread_icmp_ln522_fu_53509_p2() {
    icmp_ln522_fu_53509_p2 = (!select_ln515_16_reg_108212.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln515_16_reg_108212.read() == ap_const_lv18_0);
}

void poly1305_hw::thread_icmp_ln528_10_fu_52745_p2() {
    icmp_ln528_10_fu_52745_p2 = (!tmp_1229_fu_52735_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1229_fu_52735_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_11_fu_52879_p2() {
    icmp_ln528_11_fu_52879_p2 = (!tmp_1231_fu_52869_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1231_fu_52869_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_12_fu_53004_p2() {
    icmp_ln528_12_fu_53004_p2 = (!tmp_1233_fu_52994_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1233_fu_52994_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_13_fu_53130_p2() {
    icmp_ln528_13_fu_53130_p2 = (!tmp_1235_fu_53120_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1235_fu_53120_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_14_fu_53305_p2() {
    icmp_ln528_14_fu_53305_p2 = (!tmp_1237_fu_53295_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1237_fu_53295_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_15_fu_53386_p2() {
    icmp_ln528_15_fu_53386_p2 = (!tmp_1239_fu_53376_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1239_fu_53376_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_16_fu_53586_p2() {
    icmp_ln528_16_fu_53586_p2 = (!tmp_1242_fu_53576_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1242_fu_53576_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_1_fu_51473_p2() {
    icmp_ln528_1_fu_51473_p2 = (!tmp_1211_fu_51463_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1211_fu_51463_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_2_fu_51624_p2() {
    icmp_ln528_2_fu_51624_p2 = (!tmp_1213_fu_51614_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1213_fu_51614_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_3_fu_51741_p2() {
    icmp_ln528_3_fu_51741_p2 = (!tmp_1215_fu_51731_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1215_fu_51731_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_4_fu_51897_p2() {
    icmp_ln528_4_fu_51897_p2 = (!tmp_1217_fu_51887_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1217_fu_51887_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_5_fu_52047_p2() {
    icmp_ln528_5_fu_52047_p2 = (!tmp_1219_fu_52037_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1219_fu_52037_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_6_fu_52164_p2() {
    icmp_ln528_6_fu_52164_p2 = (!tmp_1221_fu_52154_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1221_fu_52154_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_7_fu_52320_p2() {
    icmp_ln528_7_fu_52320_p2 = (!tmp_1223_fu_52310_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1223_fu_52310_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_8_fu_52474_p2() {
    icmp_ln528_8_fu_52474_p2 = (!tmp_1225_fu_52464_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1225_fu_52464_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_9_fu_52591_p2() {
    icmp_ln528_9_fu_52591_p2 = (!tmp_1227_fu_52581_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1227_fu_52581_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln528_fu_51291_p2() {
    icmp_ln528_fu_51291_p2 = (!tmp_1209_fu_51281_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_1209_fu_51281_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln536_1_fu_53610_p2() {
    icmp_ln536_1_fu_53610_p2 = (!select_ln528_16_fu_53602_p3.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln528_16_fu_53602_p3.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln536_fu_53493_p2() {
    icmp_ln536_fu_53493_p2 = (!zext_ln510_reg_107679.read().is_01() || !sub_ln536_reg_107668.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln510_reg_107679.read() != sub_ln536_reg_107668.read());
}

void poly1305_hw::thread_icmp_ln543_fu_53635_p2() {
    icmp_ln543_fu_53635_p2 = (!zext_ln543_fu_53631_p1.read().is_01() || !sext_ln486_reg_107636.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln543_fu_53631_p1.read() == sext_ln486_reg_107636.read());
}

void poly1305_hw::thread_icmp_ln544_fu_53652_p2() {
    icmp_ln544_fu_53652_p2 = (!arr1_1_q1.read().is_01() || !temp_1_q0.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q1.read()) < sc_bigint<32>(temp_1_q0.read()));
}

void poly1305_hw::thread_icmp_ln55_fu_27510_p2() {
    icmp_ln55_fu_27510_p2 = (!phi_ln55_reg_8641.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln55_reg_8641.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln57_fu_27516_p2() {
    icmp_ln57_fu_27516_p2 = (!trunc_ln13_1_reg_98437.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln13_1_reg_98437.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln580_fu_53912_p2() {
    icmp_ln580_fu_53912_p2 = (!sub_ln580_fu_53902_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln580_fu_53902_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln583_fu_53918_p2() {
    icmp_ln583_fu_53918_p2 = (!sub_ln580_fu_53902_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln580_fu_53902_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln587_fu_53930_p2() {
    icmp_ln587_fu_53930_p2 = (!i74_0_in_reg_12286.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(i74_0_in_reg_12286.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void poly1305_hw::thread_icmp_ln588_fu_53950_p2() {
    icmp_ln588_fu_53950_p2 = (!arr1_1_q1.read().is_01() || !zext_ln588_1_fu_53946_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q1.read()) > sc_bigint<32>(zext_ln588_1_fu_53946_p1.read()));
}

void poly1305_hw::thread_icmp_ln58_fu_61322_p2() {
    icmp_ln58_fu_61322_p2 = (!zext_ln58_fu_61318_p1.read().is_01() || !select_ln58_reg_99370.read().is_01())? sc_lv<1>(): (sc_bigint<29>(zext_ln58_fu_61318_p1.read()) < sc_bigint<29>(select_ln58_reg_99370.read()));
}

void poly1305_hw::thread_icmp_ln592_fu_53956_p2() {
    icmp_ln592_fu_53956_p2 = (!arr1_1_q1.read().is_01() || !zext_ln588_1_fu_53946_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q1.read()) < sc_bigint<32>(zext_ln588_1_fu_53946_p1.read()));
}

void poly1305_hw::thread_icmp_ln601_fu_53962_p2() {
    icmp_ln601_fu_53962_p2 = (!arr1Zeroes53_3_lcssa_reg_12150.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes53_3_lcssa_reg_12150.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln618_fu_54057_p2() {
    icmp_ln618_fu_54057_p2 = (!zext_ln618_fu_54053_p1.read().is_01() || !trunc_ln619_reg_100516.read().is_01())? sc_lv<1>(): (sc_bigint<5>(zext_ln618_fu_54053_p1.read()) < sc_bigint<5>(trunc_ln619_reg_100516.read()));
}

void poly1305_hw::thread_icmp_ln623_fu_56038_p2() {
    icmp_ln623_fu_56038_p2 = (!i_4_fu_56032_p2.read().is_01() || !ap_const_lv32_11.is_01())? sc_lv<1>(): (sc_bigint<32>(i_4_fu_56032_p2.read()) < sc_bigint<32>(ap_const_lv32_11));
}

void poly1305_hw::thread_icmp_ln637_fu_56049_p2() {
    icmp_ln637_fu_56049_p2 = (!j82_0_reg_12387.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(j82_0_reg_12387.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln639_fu_56105_p2() {
    icmp_ln639_fu_56105_p2 = (!tmp_51_fu_56095_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_56095_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln655_fu_56146_p2() {
    icmp_ln655_fu_56146_p2 = (!k86_0_reg_12410.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(k86_0_reg_12410.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln660_fu_56216_p2() {
    icmp_ln660_fu_56216_p2 = (!i87_0_reg_12421.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i87_0_reg_12421.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln665_10_fu_57292_p2() {
    icmp_ln665_10_fu_57292_p2 = (!tmp_76_fu_57283_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_76_fu_57283_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_11_fu_57477_p2() {
    icmp_ln665_11_fu_57477_p2 = (!tmp_78_fu_57468_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_78_fu_57468_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_12_fu_57662_p2() {
    icmp_ln665_12_fu_57662_p2 = (!tmp_80_fu_57653_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_80_fu_57653_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_13_fu_57847_p2() {
    icmp_ln665_13_fu_57847_p2 = (!tmp_82_fu_57838_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_82_fu_57838_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_14_fu_57958_p2() {
    icmp_ln665_14_fu_57958_p2 = (!tmp_84_fu_57949_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_84_fu_57949_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_15_fu_58156_p2() {
    icmp_ln665_15_fu_58156_p2 = (!tmp_86_fu_58147_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_86_fu_58147_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_16_fu_58271_p2() {
    icmp_ln665_16_fu_58271_p2 = (!tmp_88_fu_58262_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_88_fu_58262_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_1_fu_56416_p2() {
    icmp_ln665_1_fu_56416_p2 = (!tmp_58_fu_56407_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_58_fu_56407_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_2_fu_56475_p2() {
    icmp_ln665_2_fu_56475_p2 = (!tmp_60_fu_56466_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_56466_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_3_fu_56535_p2() {
    icmp_ln665_3_fu_56535_p2 = (!tmp_62_fu_56526_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_62_fu_56526_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_4_fu_56595_p2() {
    icmp_ln665_4_fu_56595_p2 = (!tmp_64_fu_56586_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_64_fu_56586_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_5_fu_56655_p2() {
    icmp_ln665_5_fu_56655_p2 = (!tmp_66_fu_56646_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_56646_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_6_fu_56715_p2() {
    icmp_ln665_6_fu_56715_p2 = (!tmp_68_fu_56706_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_68_fu_56706_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_7_fu_56775_p2() {
    icmp_ln665_7_fu_56775_p2 = (!tmp_70_fu_56766_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_56766_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_8_fu_56909_p2() {
    icmp_ln665_8_fu_56909_p2 = (!tmp_72_fu_56900_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_72_fu_56900_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_9_fu_57107_p2() {
    icmp_ln665_9_fu_57107_p2 = (!tmp_74_fu_57098_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_74_fu_57098_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln665_fu_56302_p2() {
    icmp_ln665_fu_56302_p2 = (!tmp_56_fu_56292_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_56_fu_56292_p4.read() != ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln672_fu_58295_p2() {
    icmp_ln672_fu_58295_p2 = (!select_ln665_16_fu_58286_p3.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln665_16_fu_58286_p3.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln678_10_fu_57723_p2() {
    icmp_ln678_10_fu_57723_p2 = (!tmp_77_fu_57713_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_57713_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_11_fu_57798_p2() {
    icmp_ln678_11_fu_57798_p2 = (!tmp_79_fu_57788_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_79_fu_57788_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_12_fu_57908_p2() {
    icmp_ln678_12_fu_57908_p2 = (!tmp_81_fu_57898_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_81_fu_57898_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_13_fu_58029_p2() {
    icmp_ln678_13_fu_58029_p2 = (!tmp_83_fu_58019_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_58019_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_14_fu_58105_p2() {
    icmp_ln678_14_fu_58105_p2 = (!tmp_85_fu_58095_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_85_fu_58095_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_15_fu_58217_p2() {
    icmp_ln678_15_fu_58217_p2 = (!tmp_87_fu_58207_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_87_fu_58207_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_16_fu_58349_p2() {
    icmp_ln678_16_fu_58349_p2 = (!tmp_91_fu_58339_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_91_fu_58339_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_1_fu_56859_p2() {
    icmp_ln678_1_fu_56859_p2 = (!tmp_59_fu_56849_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_59_fu_56849_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_2_fu_56982_p2() {
    icmp_ln678_2_fu_56982_p2 = (!tmp_61_fu_56972_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_61_fu_56972_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_3_fu_57058_p2() {
    icmp_ln678_3_fu_57058_p2 = (!tmp_63_fu_57048_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_63_fu_57048_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_4_fu_57168_p2() {
    icmp_ln678_4_fu_57168_p2 = (!tmp_65_fu_57158_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_65_fu_57158_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_5_fu_57243_p2() {
    icmp_ln678_5_fu_57243_p2 = (!tmp_67_fu_57233_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_67_fu_57233_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_6_fu_57353_p2() {
    icmp_ln678_6_fu_57353_p2 = (!tmp_69_fu_57343_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_69_fu_57343_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_7_fu_57428_p2() {
    icmp_ln678_7_fu_57428_p2 = (!tmp_71_fu_57418_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_71_fu_57418_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_8_fu_57538_p2() {
    icmp_ln678_8_fu_57538_p2 = (!tmp_73_fu_57528_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_73_fu_57528_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_9_fu_57613_p2() {
    icmp_ln678_9_fu_57613_p2 = (!tmp_75_fu_57603_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_75_fu_57603_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln678_fu_56364_p2() {
    icmp_ln678_fu_56364_p2 = (!tmp_57_fu_56354_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_56354_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln686_1_fu_58388_p2() {
    icmp_ln686_1_fu_58388_p2 = (!select_ln678_16_reg_109593.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln678_16_reg_109593.read() == ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln686_fu_57985_p2() {
    icmp_ln686_fu_57985_p2 = (!i87_0_reg_12421.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(i87_0_reg_12421.read() != ap_const_lv5_F);
}

void poly1305_hw::thread_icmp_ln700_fu_58408_p2() {
    icmp_ln700_fu_58408_p2 = (!i94_0_reg_12433.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(i94_0_reg_12433.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln714_fu_58453_p2() {
    icmp_ln714_fu_58453_p2 = (!arr1_2_q0.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_2_q0.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_icmp_ln727_fu_58465_p2() {
    icmp_ln727_fu_58465_p2 = (!arr1Zeroes99_0_reg_12456.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes99_0_reg_12456.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln730_fu_58493_p2() {
    icmp_ln730_fu_58493_p2 = (!zext_ln730_fu_58489_p1.read().is_01() || !sub_ln730_reg_109662.read().is_01())? sc_lv<1>(): (sc_bigint<7>(zext_ln730_fu_58489_p1.read()) < sc_bigint<7>(sub_ln730_reg_109662.read()));
}

void poly1305_hw::thread_icmp_ln734_fu_58509_p2() {
    icmp_ln734_fu_58509_p2 = (!sub_ln730_reg_109662.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<1>(): (sc_bigint<7>(sub_ln730_reg_109662.read()) < sc_bigint<7>(ap_const_lv7_12));
}

void poly1305_hw::thread_icmp_ln735_fu_61101_p2() {
    icmp_ln735_fu_61101_p2 = (!i105_0_reg_12569.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i105_0_reg_12569.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln736_fu_61127_p2() {
    icmp_ln736_fu_61127_p2 = (!arr1_2_q0.read().is_01() || !zext_ln736_1_fu_61123_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_2_q0.read()) < sc_bigint<32>(zext_ln736_1_fu_61123_p1.read()));
}

void poly1305_hw::thread_icmp_ln749_fu_58524_p2() {
    icmp_ln749_fu_58524_p2 = (!zext_ln749_fu_58520_p1.read().is_01() || !sub_ln749_reg_109681.read().is_01())? sc_lv<1>(): (sc_bigint<6>(zext_ln749_fu_58520_p1.read()) < sc_bigint<6>(sub_ln749_reg_109681.read()));
}

void poly1305_hw::thread_icmp_ln754_fu_58565_p2() {
    icmp_ln754_fu_58565_p2 = (!zext_ln754_1_fu_58561_p1.read().is_01() || !sub_ln749_reg_109681.read().is_01())? sc_lv<1>(): (sc_bigint<6>(zext_ln754_1_fu_58561_p1.read()) < sc_bigint<6>(sub_ln749_reg_109681.read()));
}

void poly1305_hw::thread_icmp_ln759_10_fu_60121_p2() {
    icmp_ln759_10_fu_60121_p2 = (!tmp_126_fu_60111_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_126_fu_60111_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_11_fu_60242_p2() {
    icmp_ln759_11_fu_60242_p2 = (!tmp_128_fu_60232_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_128_fu_60232_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_12_fu_60372_p2() {
    icmp_ln759_12_fu_60372_p2 = (!tmp_130_fu_60362_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_130_fu_60362_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_13_fu_60497_p2() {
    icmp_ln759_13_fu_60497_p2 = (!tmp_132_fu_60487_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_132_fu_60487_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_14_fu_60623_p2() {
    icmp_ln759_14_fu_60623_p2 = (!tmp_134_fu_60613_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_134_fu_60613_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_15_fu_60704_p2() {
    icmp_ln759_15_fu_60704_p2 = (!tmp_136_fu_60694_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_136_fu_60694_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_16_fu_60902_p2() {
    icmp_ln759_16_fu_60902_p2 = (!tmp_138_fu_60892_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_138_fu_60892_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_1_fu_58883_p2() {
    icmp_ln759_1_fu_58883_p2 = (!tmp_108_fu_58873_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_108_fu_58873_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_2_fu_59005_p2() {
    icmp_ln759_2_fu_59005_p2 = (!tmp_110_fu_58995_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_110_fu_58995_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_3_fu_59155_p2() {
    icmp_ln759_3_fu_59155_p2 = (!tmp_112_fu_59145_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_112_fu_59145_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_4_fu_59307_p2() {
    icmp_ln759_4_fu_59307_p2 = (!tmp_114_fu_59297_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_114_fu_59297_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_5_fu_59428_p2() {
    icmp_ln759_5_fu_59428_p2 = (!tmp_116_fu_59418_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_116_fu_59418_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_6_fu_59582_p2() {
    icmp_ln759_6_fu_59582_p2 = (!tmp_118_fu_59572_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_118_fu_59572_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_7_fu_59735_p2() {
    icmp_ln759_7_fu_59735_p2 = (!tmp_120_fu_59725_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_120_fu_59725_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_8_fu_59856_p2() {
    icmp_ln759_8_fu_59856_p2 = (!tmp_122_fu_59846_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_122_fu_59846_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_9_fu_59990_p2() {
    icmp_ln759_9_fu_59990_p2 = (!tmp_124_fu_59980_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_124_fu_59980_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void poly1305_hw::thread_icmp_ln759_fu_58705_p2() {
    icmp_ln759_fu_58705_p2 = (!tmp_106_fu_58695_p4.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): (sc_bigint<9>(tmp_106_fu_58695_p4.read()) > sc_bigint<9>(ap_const_lv9_0));
}

void poly1305_hw::thread_icmp_ln766_fu_60935_p2() {
    icmp_ln766_fu_60935_p2 = (!select_ln759_16_fu_60918_p3.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln759_16_fu_60918_p3.read() == ap_const_lv18_0);
}

void poly1305_hw::thread_icmp_ln772_10_fu_60194_p2() {
    icmp_ln772_10_fu_60194_p2 = (!tmp_127_fu_60184_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_127_fu_60184_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_11_fu_60324_p2() {
    icmp_ln772_11_fu_60324_p2 = (!tmp_129_fu_60314_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_129_fu_60314_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_12_fu_60449_p2() {
    icmp_ln772_12_fu_60449_p2 = (!tmp_131_fu_60439_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_131_fu_60439_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_13_fu_60575_p2() {
    icmp_ln772_13_fu_60575_p2 = (!tmp_133_fu_60565_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_133_fu_60565_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_14_fu_60746_p2() {
    icmp_ln772_14_fu_60746_p2 = (!tmp_135_fu_60736_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_135_fu_60736_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_15_fu_60827_p2() {
    icmp_ln772_15_fu_60827_p2 = (!tmp_137_fu_60817_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_137_fu_60817_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_16_fu_61013_p2() {
    icmp_ln772_16_fu_61013_p2 = (!tmp_141_fu_61003_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_141_fu_61003_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_1_fu_58956_p2() {
    icmp_ln772_1_fu_58956_p2 = (!tmp_109_fu_58946_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_109_fu_58946_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_2_fu_59107_p2() {
    icmp_ln772_2_fu_59107_p2 = (!tmp_111_fu_59097_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_111_fu_59097_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_3_fu_59224_p2() {
    icmp_ln772_3_fu_59224_p2 = (!tmp_113_fu_59214_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_113_fu_59214_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_4_fu_59380_p2() {
    icmp_ln772_4_fu_59380_p2 = (!tmp_115_fu_59370_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_115_fu_59370_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_5_fu_59534_p2() {
    icmp_ln772_5_fu_59534_p2 = (!tmp_117_fu_59524_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_117_fu_59524_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_6_fu_59651_p2() {
    icmp_ln772_6_fu_59651_p2 = (!tmp_119_fu_59641_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_119_fu_59641_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_7_fu_59808_p2() {
    icmp_ln772_7_fu_59808_p2 = (!tmp_121_fu_59798_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_121_fu_59798_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_8_fu_59942_p2() {
    icmp_ln772_8_fu_59942_p2 = (!tmp_123_fu_59932_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_123_fu_59932_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_9_fu_60058_p2() {
    icmp_ln772_9_fu_60058_p2 = (!tmp_125_fu_60048_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_125_fu_60048_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln772_fu_58774_p2() {
    icmp_ln772_fu_58774_p2 = (!tmp_107_fu_58764_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(tmp_107_fu_58764_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void poly1305_hw::thread_icmp_ln780_1_fu_61037_p2() {
    icmp_ln780_1_fu_61037_p2 = (!select_ln772_16_fu_61029_p3.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln772_16_fu_61029_p3.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln780_fu_58582_p2() {
    icmp_ln780_fu_58582_p2 = (!zext_ln754_1_fu_58561_p1.read().is_01() || !sub_ln780_reg_109696.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln754_1_fu_58561_p1.read() != sub_ln780_reg_109696.read());
}

void poly1305_hw::thread_icmp_ln787_fu_61062_p2() {
    icmp_ln787_fu_61062_p2 = (!zext_ln787_fu_61058_p1.read().is_01() || !sub_ln730_reg_109662.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln787_fu_61058_p1.read() == sub_ln730_reg_109662.read());
}

void poly1305_hw::thread_icmp_ln788_fu_61079_p2() {
    icmp_ln788_fu_61079_p2 = (!arr1_2_q0.read().is_01() || !temp_2_q0.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_2_q0.read()) < sc_bigint<32>(temp_2_q0.read()));
}

void poly1305_hw::thread_icmp_ln800_fu_61148_p2() {
    icmp_ln800_fu_61148_p2 = (!i114_0_reg_12589.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(i114_0_reg_12589.read() == ap_const_lv6_20);
}

void poly1305_hw::thread_icmp_ln811_fu_61214_p2() {
    icmp_ln811_fu_61214_p2 = (!arr1_2_q1.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_2_q1.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_icmp_ln824_fu_61236_p2() {
    icmp_ln824_fu_61236_p2 = (!sub_ln824_fu_61226_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln824_fu_61226_p2.read()) > sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln827_fu_61242_p2() {
    icmp_ln827_fu_61242_p2 = (!sub_ln824_fu_61226_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): (sc_biguint<6>(sub_ln824_fu_61226_p2.read()) < sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_icmp_ln831_fu_61258_p2() {
    icmp_ln831_fu_61258_p2 = (!i117_0_in_reg_12638.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): (sc_bigint<7>(i117_0_in_reg_12638.read()) > sc_bigint<7>(ap_const_lv7_0));
}

void poly1305_hw::thread_icmp_ln832_fu_61278_p2() {
    icmp_ln832_fu_61278_p2 = (!arr1_2_q1.read().is_01() || !zext_ln832_1_fu_61274_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_2_q1.read()) > sc_bigint<32>(zext_ln832_1_fu_61274_p1.read()));
}

void poly1305_hw::thread_icmp_ln836_fu_61284_p2() {
    icmp_ln836_fu_61284_p2 = (!arr1_2_q1.read().is_01() || !zext_ln832_1_fu_61274_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_2_q1.read()) < sc_bigint<32>(zext_ln832_1_fu_61274_p1.read()));
}

void poly1305_hw::thread_icmp_ln846_fu_61290_p2() {
    icmp_ln846_fu_61290_p2 = (!arr1Zeroes99_2_reg_12600.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(arr1Zeroes99_2_reg_12600.read() == ap_const_lv6_21);
}

void poly1305_hw::thread_icmp_ln853_fu_61296_p2() {
    icmp_ln853_fu_61296_p2 = (!i118_0_reg_12682.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i118_0_reg_12682.read() == ap_const_lv5_11);
}

void poly1305_hw::thread_icmp_ln866_fu_87702_p2() {
    icmp_ln866_fu_87702_p2 = (!j120_0_reg_16420.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j120_0_reg_16420.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln868_fu_87758_p2() {
    icmp_ln868_fu_87758_p2 = (!tmp_174_fu_87748_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_174_fu_87748_p4.read() != ap_const_lv2_0);
}

void poly1305_hw::thread_icmp_ln883_fu_87799_p2() {
    icmp_ln883_fu_87799_p2 = (!i122_0_reg_16431.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i122_0_reg_16431.read() == ap_const_lv5_10);
}

void poly1305_hw::thread_icmp_ln97_100_fu_71048_p2() {
    icmp_ln97_100_fu_71048_p2 = (!tmp_484_reg_113206.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_484_reg_113206.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_101_fu_71120_p2() {
    icmp_ln97_101_fu_71120_p2 = (!tmp_488_fu_71111_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_488_fu_71111_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_102_fu_71192_p2() {
    icmp_ln97_102_fu_71192_p2 = (!grp_fu_20823_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_20823_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_103_fu_71272_p2() {
    icmp_ln97_103_fu_71272_p2 = (!tmp_496_fu_71263_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_496_fu_71263_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_104_fu_71353_p2() {
    icmp_ln97_104_fu_71353_p2 = (!tmp_500_fu_71344_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_500_fu_71344_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_105_fu_71429_p2() {
    icmp_ln97_105_fu_71429_p2 = (!tmp_504_reg_113317.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_504_reg_113317.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_106_fu_71501_p2() {
    icmp_ln97_106_fu_71501_p2 = (!tmp_508_fu_71492_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_508_fu_71492_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_107_fu_71582_p2() {
    icmp_ln97_107_fu_71582_p2 = (!tmp_512_fu_71573_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_512_fu_71573_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_108_fu_71658_p2() {
    icmp_ln97_108_fu_71658_p2 = (!tmp_516_reg_113387.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_516_reg_113387.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_109_fu_71730_p2() {
    icmp_ln97_109_fu_71730_p2 = (!tmp_520_fu_71721_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_520_fu_71721_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_10_fu_64517_p2() {
    icmp_ln97_10_fu_64517_p2 = (!tmp_102_fu_64508_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_102_fu_64508_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_110_fu_71811_p2() {
    icmp_ln97_110_fu_71811_p2 = (!tmp_524_fu_71802_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_524_fu_71802_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_111_fu_71887_p2() {
    icmp_ln97_111_fu_71887_p2 = (!tmp_528_reg_113457.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_528_reg_113457.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_112_fu_71959_p2() {
    icmp_ln97_112_fu_71959_p2 = (!tmp_532_fu_71950_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_532_fu_71950_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_113_fu_72040_p2() {
    icmp_ln97_113_fu_72040_p2 = (!tmp_536_fu_72031_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_536_fu_72031_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_114_fu_72116_p2() {
    icmp_ln97_114_fu_72116_p2 = (!tmp_540_reg_113527.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_540_reg_113527.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_115_fu_72188_p2() {
    icmp_ln97_115_fu_72188_p2 = (!tmp_544_fu_72179_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_544_fu_72179_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_116_fu_72269_p2() {
    icmp_ln97_116_fu_72269_p2 = (!tmp_548_fu_72260_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_548_fu_72260_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_117_fu_72345_p2() {
    icmp_ln97_117_fu_72345_p2 = (!tmp_552_reg_113597.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_552_reg_113597.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_118_fu_72417_p2() {
    icmp_ln97_118_fu_72417_p2 = (!tmp_556_fu_72408_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_556_fu_72408_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_119_fu_72489_p2() {
    icmp_ln97_119_fu_72489_p2 = (!grp_fu_20883_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_20883_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln97_11_fu_64554_p2() {
    icmp_ln97_11_fu_64554_p2 = (!tmp_104_fu_64545_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_104_fu_64545_p4.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_icmp_ln97_120_fu_72569_p2() {
    icmp_ln97_120_fu_72569_p2 = (!tmp_564_fu_72560_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_564_fu_72560_p4.read() == ap_const_lv4_0);
}

void poly1305_hw::thread_icmp_ln97_121_fu_72650_p2() {
    icmp_ln97_121_fu_72650_p2 = (!tmp_568_fu_72641_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_568_fu_72641_p4.read() == ap_const_lv4_0);
}

}

