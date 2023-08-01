#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_grp_fu_89296_p0() {
    grp_fu_89296_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_89296_p1() {
    grp_fu_89296_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89296_p2() {
    grp_fu_89296_p2 =  (sc_lv<8>) (grp_fu_89296_p20.read());
}

void poly1305_hw::thread_grp_fu_89296_p20() {
    grp_fu_89296_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_9_phi_fu_10672_p4.read());
}

void poly1305_hw::thread_grp_fu_89305_p0() {
    grp_fu_89305_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_89305_p1() {
    grp_fu_89305_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89305_p2() {
    grp_fu_89305_p2 =  (sc_lv<8>) (grp_fu_89305_p20.read());
}

void poly1305_hw::thread_grp_fu_89305_p20() {
    grp_fu_89305_p20 = esl_zext<16,8>(mulCarry42_1_10_10_reg_10679.read());
}

void poly1305_hw::thread_grp_fu_89314_p0() {
    grp_fu_89314_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_89314_p1() {
    grp_fu_89314_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89314_p2() {
    grp_fu_89314_p2 =  (sc_lv<8>) (grp_fu_89314_p20.read());
}

void poly1305_hw::thread_grp_fu_89314_p20() {
    grp_fu_89314_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_11_phi_fu_10693_p4.read());
}

void poly1305_hw::thread_grp_fu_89322_p0() {
    grp_fu_89322_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_89322_p1() {
    grp_fu_89322_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89322_p2() {
    grp_fu_89322_p2 =  (sc_lv<8>) (grp_fu_89322_p20.read());
}

void poly1305_hw::thread_grp_fu_89322_p20() {
    grp_fu_89322_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_12_phi_fu_10703_p4.read());
}

void poly1305_hw::thread_grp_fu_89331_p0() {
    grp_fu_89331_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_89331_p1() {
    grp_fu_89331_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89331_p2() {
    grp_fu_89331_p2 =  (sc_lv<8>) (grp_fu_89331_p20.read());
}

void poly1305_hw::thread_grp_fu_89331_p20() {
    grp_fu_89331_p20 = esl_zext<16,8>(mulCarry42_1_10_13_reg_10710.read());
}

void poly1305_hw::thread_grp_fu_89340_p0() {
    grp_fu_89340_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_89340_p1() {
    grp_fu_89340_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89340_p2() {
    grp_fu_89340_p2 =  (sc_lv<8>) (grp_fu_89340_p20.read());
}

void poly1305_hw::thread_grp_fu_89340_p20() {
    grp_fu_89340_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_14_phi_fu_10724_p4.read());
}

void poly1305_hw::thread_grp_fu_89348_p0() {
    grp_fu_89348_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_89348_p1() {
    grp_fu_89348_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89348_p2() {
    grp_fu_89348_p2 =  (sc_lv<8>) (grp_fu_89348_p20.read());
}

void poly1305_hw::thread_grp_fu_89348_p20() {
    grp_fu_89348_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_15_phi_fu_10734_p4.read());
}

void poly1305_hw::thread_grp_fu_89357_p0() {
    grp_fu_89357_p0 =  (sc_lv<8>) (zext_ln382_3_reg_100725.read());
}

void poly1305_hw::thread_grp_fu_89357_p1() {
    grp_fu_89357_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89357_p2() {
    grp_fu_89357_p2 =  (sc_lv<4>) (grp_fu_89357_p20.read());
}

void poly1305_hw::thread_grp_fu_89357_p20() {
    grp_fu_89357_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_0_phi_fu_10756_p4.read());
}

void poly1305_hw::thread_grp_fu_89366_p0() {
    grp_fu_89366_p0 =  (sc_lv<8>) (zext_ln382_6_reg_100767.read());
}

void poly1305_hw::thread_grp_fu_89366_p1() {
    grp_fu_89366_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89366_p2() {
    grp_fu_89366_p2 =  (sc_lv<4>) (grp_fu_89366_p20.read());
}

void poly1305_hw::thread_grp_fu_89366_p20() {
    grp_fu_89366_p20 = esl_zext<12,4>(mulCarry42_1_11_1_reg_10763.read());
}

void poly1305_hw::thread_grp_fu_89375_p0() {
    grp_fu_89375_p0 =  (sc_lv<8>) (zext_ln382_9_reg_100810.read());
}

void poly1305_hw::thread_grp_fu_89375_p1() {
    grp_fu_89375_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89375_p2() {
    grp_fu_89375_p2 =  (sc_lv<4>) (grp_fu_89375_p20.read());
}

void poly1305_hw::thread_grp_fu_89375_p20() {
    grp_fu_89375_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_2_phi_fu_10777_p4.read());
}

void poly1305_hw::thread_grp_fu_89383_p0() {
    grp_fu_89383_p0 =  (sc_lv<8>) (zext_ln382_12_reg_100842.read());
}

void poly1305_hw::thread_grp_fu_89383_p1() {
    grp_fu_89383_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89383_p2() {
    grp_fu_89383_p2 =  (sc_lv<4>) (grp_fu_89383_p20.read());
}

void poly1305_hw::thread_grp_fu_89383_p20() {
    grp_fu_89383_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_3_phi_fu_10787_p4.read());
}

void poly1305_hw::thread_grp_fu_89392_p0() {
    grp_fu_89392_p0 =  (sc_lv<8>) (zext_ln382_15_reg_100884.read());
}

void poly1305_hw::thread_grp_fu_89392_p1() {
    grp_fu_89392_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89392_p2() {
    grp_fu_89392_p2 =  (sc_lv<4>) (grp_fu_89392_p20.read());
}

void poly1305_hw::thread_grp_fu_89392_p20() {
    grp_fu_89392_p20 = esl_zext<12,4>(mulCarry42_1_11_4_reg_10794.read());
}

void poly1305_hw::thread_grp_fu_89401_p0() {
    grp_fu_89401_p0 =  (sc_lv<8>) (zext_ln382_18_reg_100927.read());
}

void poly1305_hw::thread_grp_fu_89401_p1() {
    grp_fu_89401_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89401_p2() {
    grp_fu_89401_p2 =  (sc_lv<4>) (grp_fu_89401_p20.read());
}

void poly1305_hw::thread_grp_fu_89401_p20() {
    grp_fu_89401_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_5_phi_fu_10808_p4.read());
}

void poly1305_hw::thread_grp_fu_89409_p0() {
    grp_fu_89409_p0 =  (sc_lv<8>) (zext_ln382_21_reg_100959.read());
}

void poly1305_hw::thread_grp_fu_89409_p1() {
    grp_fu_89409_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89409_p2() {
    grp_fu_89409_p2 =  (sc_lv<4>) (grp_fu_89409_p20.read());
}

void poly1305_hw::thread_grp_fu_89409_p20() {
    grp_fu_89409_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_6_phi_fu_10818_p4.read());
}

void poly1305_hw::thread_grp_fu_89418_p0() {
    grp_fu_89418_p0 =  (sc_lv<8>) (zext_ln382_24_reg_101001.read());
}

void poly1305_hw::thread_grp_fu_89418_p1() {
    grp_fu_89418_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89418_p2() {
    grp_fu_89418_p2 =  (sc_lv<4>) (grp_fu_89418_p20.read());
}

void poly1305_hw::thread_grp_fu_89418_p20() {
    grp_fu_89418_p20 = esl_zext<12,4>(mulCarry42_1_11_7_reg_10825.read());
}

void poly1305_hw::thread_grp_fu_89427_p0() {
    grp_fu_89427_p0 =  (sc_lv<8>) (zext_ln382_27_reg_101044.read());
}

void poly1305_hw::thread_grp_fu_89427_p1() {
    grp_fu_89427_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89427_p2() {
    grp_fu_89427_p2 =  (sc_lv<4>) (grp_fu_89427_p20.read());
}

void poly1305_hw::thread_grp_fu_89427_p20() {
    grp_fu_89427_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_8_phi_fu_10839_p4.read());
}

void poly1305_hw::thread_grp_fu_89435_p0() {
    grp_fu_89435_p0 =  (sc_lv<8>) (zext_ln382_30_reg_101076.read());
}

void poly1305_hw::thread_grp_fu_89435_p1() {
    grp_fu_89435_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89435_p2() {
    grp_fu_89435_p2 =  (sc_lv<4>) (grp_fu_89435_p20.read());
}

void poly1305_hw::thread_grp_fu_89435_p20() {
    grp_fu_89435_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_9_phi_fu_10849_p4.read());
}

void poly1305_hw::thread_grp_fu_89444_p0() {
    grp_fu_89444_p0 =  (sc_lv<8>) (zext_ln382_33_reg_101118.read());
}

void poly1305_hw::thread_grp_fu_89444_p1() {
    grp_fu_89444_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89444_p2() {
    grp_fu_89444_p2 =  (sc_lv<4>) (grp_fu_89444_p20.read());
}

void poly1305_hw::thread_grp_fu_89444_p20() {
    grp_fu_89444_p20 = esl_zext<12,4>(mulCarry42_1_11_10_reg_10856.read());
}

void poly1305_hw::thread_grp_fu_89453_p0() {
    grp_fu_89453_p0 =  (sc_lv<8>) (zext_ln382_36_reg_101161.read());
}

void poly1305_hw::thread_grp_fu_89453_p1() {
    grp_fu_89453_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89453_p2() {
    grp_fu_89453_p2 =  (sc_lv<4>) (grp_fu_89453_p20.read());
}

void poly1305_hw::thread_grp_fu_89453_p20() {
    grp_fu_89453_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_11_phi_fu_10870_p4.read());
}

void poly1305_hw::thread_grp_fu_89461_p0() {
    grp_fu_89461_p0 =  (sc_lv<8>) (zext_ln382_39_reg_101193.read());
}

void poly1305_hw::thread_grp_fu_89461_p1() {
    grp_fu_89461_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89461_p2() {
    grp_fu_89461_p2 =  (sc_lv<4>) (grp_fu_89461_p20.read());
}

void poly1305_hw::thread_grp_fu_89461_p20() {
    grp_fu_89461_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_12_phi_fu_10880_p4.read());
}

void poly1305_hw::thread_grp_fu_89470_p0() {
    grp_fu_89470_p0 =  (sc_lv<8>) (zext_ln382_47_reg_101235.read());
}

void poly1305_hw::thread_grp_fu_89470_p1() {
    grp_fu_89470_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89470_p2() {
    grp_fu_89470_p2 =  (sc_lv<4>) (grp_fu_89470_p20.read());
}

void poly1305_hw::thread_grp_fu_89470_p20() {
    grp_fu_89470_p20 = esl_zext<12,4>(mulCarry42_1_11_13_reg_10887.read());
}

void poly1305_hw::thread_grp_fu_89479_p0() {
    grp_fu_89479_p0 =  (sc_lv<8>) (zext_ln382_64_reg_101278.read());
}

void poly1305_hw::thread_grp_fu_89479_p1() {
    grp_fu_89479_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89479_p2() {
    grp_fu_89479_p2 =  (sc_lv<4>) (grp_fu_89479_p20.read());
}

void poly1305_hw::thread_grp_fu_89479_p20() {
    grp_fu_89479_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_14_phi_fu_10901_p4.read());
}

void poly1305_hw::thread_grp_fu_89487_p0() {
    grp_fu_89487_p0 =  (sc_lv<8>) (zext_ln382_81_reg_101310.read());
}

void poly1305_hw::thread_grp_fu_89487_p1() {
    grp_fu_89487_p1 =  (sc_lv<4>) (zext_ln96_47_reg_99897.read());
}

void poly1305_hw::thread_grp_fu_89487_p2() {
    grp_fu_89487_p2 =  (sc_lv<4>) (grp_fu_89487_p20.read());
}

void poly1305_hw::thread_grp_fu_89487_p20() {
    grp_fu_89487_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_11_15_phi_fu_10911_p4.read());
}

void poly1305_hw::thread_grp_fu_89496_p0() {
    grp_fu_89496_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_89496_p1() {
    grp_fu_89496_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89496_p2() {
    grp_fu_89496_p2 =  (sc_lv<8>) (grp_fu_89496_p20.read());
}

void poly1305_hw::thread_grp_fu_89496_p20() {
    grp_fu_89496_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_0_phi_fu_10933_p4.read());
}

void poly1305_hw::thread_grp_fu_89505_p0() {
    grp_fu_89505_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_89505_p1() {
    grp_fu_89505_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89505_p2() {
    grp_fu_89505_p2 =  (sc_lv<8>) (grp_fu_89505_p20.read());
}

void poly1305_hw::thread_grp_fu_89505_p20() {
    grp_fu_89505_p20 = esl_zext<16,8>(mulCarry42_1_12_1_reg_10940.read());
}

void poly1305_hw::thread_grp_fu_89514_p0() {
    grp_fu_89514_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_89514_p1() {
    grp_fu_89514_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89514_p2() {
    grp_fu_89514_p2 =  (sc_lv<8>) (grp_fu_89514_p20.read());
}

void poly1305_hw::thread_grp_fu_89514_p20() {
    grp_fu_89514_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_2_phi_fu_10954_p4.read());
}

void poly1305_hw::thread_grp_fu_89522_p0() {
    grp_fu_89522_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_89522_p1() {
    grp_fu_89522_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89522_p2() {
    grp_fu_89522_p2 =  (sc_lv<8>) (grp_fu_89522_p20.read());
}

void poly1305_hw::thread_grp_fu_89522_p20() {
    grp_fu_89522_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_3_phi_fu_10964_p4.read());
}

void poly1305_hw::thread_grp_fu_89531_p0() {
    grp_fu_89531_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_89531_p1() {
    grp_fu_89531_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89531_p2() {
    grp_fu_89531_p2 =  (sc_lv<8>) (grp_fu_89531_p20.read());
}

void poly1305_hw::thread_grp_fu_89531_p20() {
    grp_fu_89531_p20 = esl_zext<16,8>(mulCarry42_1_12_4_reg_10971.read());
}

void poly1305_hw::thread_grp_fu_89540_p0() {
    grp_fu_89540_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_89540_p1() {
    grp_fu_89540_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89540_p2() {
    grp_fu_89540_p2 =  (sc_lv<8>) (grp_fu_89540_p20.read());
}

void poly1305_hw::thread_grp_fu_89540_p20() {
    grp_fu_89540_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_5_phi_fu_10985_p4.read());
}

void poly1305_hw::thread_grp_fu_89548_p0() {
    grp_fu_89548_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_89548_p1() {
    grp_fu_89548_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89548_p2() {
    grp_fu_89548_p2 =  (sc_lv<8>) (grp_fu_89548_p20.read());
}

void poly1305_hw::thread_grp_fu_89548_p20() {
    grp_fu_89548_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_6_phi_fu_10995_p4.read());
}

void poly1305_hw::thread_grp_fu_89557_p0() {
    grp_fu_89557_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_89557_p1() {
    grp_fu_89557_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89557_p2() {
    grp_fu_89557_p2 =  (sc_lv<8>) (grp_fu_89557_p20.read());
}

void poly1305_hw::thread_grp_fu_89557_p20() {
    grp_fu_89557_p20 = esl_zext<16,8>(mulCarry42_1_12_7_reg_11002.read());
}

void poly1305_hw::thread_grp_fu_89566_p0() {
    grp_fu_89566_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_89566_p1() {
    grp_fu_89566_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89566_p2() {
    grp_fu_89566_p2 =  (sc_lv<8>) (grp_fu_89566_p20.read());
}

void poly1305_hw::thread_grp_fu_89566_p20() {
    grp_fu_89566_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_8_phi_fu_11016_p4.read());
}

void poly1305_hw::thread_grp_fu_89574_p0() {
    grp_fu_89574_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_89574_p1() {
    grp_fu_89574_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89574_p2() {
    grp_fu_89574_p2 =  (sc_lv<8>) (grp_fu_89574_p20.read());
}

void poly1305_hw::thread_grp_fu_89574_p20() {
    grp_fu_89574_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_9_phi_fu_11026_p4.read());
}

void poly1305_hw::thread_grp_fu_89583_p0() {
    grp_fu_89583_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_89583_p1() {
    grp_fu_89583_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89583_p2() {
    grp_fu_89583_p2 =  (sc_lv<8>) (grp_fu_89583_p20.read());
}

void poly1305_hw::thread_grp_fu_89583_p20() {
    grp_fu_89583_p20 = esl_zext<16,8>(mulCarry42_1_12_10_reg_11033.read());
}

void poly1305_hw::thread_grp_fu_89592_p0() {
    grp_fu_89592_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_89592_p1() {
    grp_fu_89592_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89592_p2() {
    grp_fu_89592_p2 =  (sc_lv<8>) (grp_fu_89592_p20.read());
}

void poly1305_hw::thread_grp_fu_89592_p20() {
    grp_fu_89592_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_11_phi_fu_11047_p4.read());
}

void poly1305_hw::thread_grp_fu_89600_p0() {
    grp_fu_89600_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_89600_p1() {
    grp_fu_89600_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89600_p2() {
    grp_fu_89600_p2 =  (sc_lv<8>) (grp_fu_89600_p20.read());
}

void poly1305_hw::thread_grp_fu_89600_p20() {
    grp_fu_89600_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_12_phi_fu_11057_p4.read());
}

void poly1305_hw::thread_grp_fu_89609_p0() {
    grp_fu_89609_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_89609_p1() {
    grp_fu_89609_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89609_p2() {
    grp_fu_89609_p2 =  (sc_lv<8>) (grp_fu_89609_p20.read());
}

void poly1305_hw::thread_grp_fu_89609_p20() {
    grp_fu_89609_p20 = esl_zext<16,8>(mulCarry42_1_12_13_reg_11064.read());
}

void poly1305_hw::thread_grp_fu_89618_p0() {
    grp_fu_89618_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_89618_p1() {
    grp_fu_89618_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89618_p2() {
    grp_fu_89618_p2 =  (sc_lv<8>) (grp_fu_89618_p20.read());
}

void poly1305_hw::thread_grp_fu_89618_p20() {
    grp_fu_89618_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_14_phi_fu_11078_p4.read());
}

void poly1305_hw::thread_grp_fu_89626_p0() {
    grp_fu_89626_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_89626_p1() {
    grp_fu_89626_p1 =  (sc_lv<8>) (zext_ln96_12_reg_99935.read());
}

void poly1305_hw::thread_grp_fu_89626_p2() {
    grp_fu_89626_p2 =  (sc_lv<8>) (grp_fu_89626_p20.read());
}

void poly1305_hw::thread_grp_fu_89626_p20() {
    grp_fu_89626_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_12_15_phi_fu_11088_p4.read());
}

void poly1305_hw::thread_grp_fu_89635_p0() {
    grp_fu_89635_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_89635_p1() {
    grp_fu_89635_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89635_p2() {
    grp_fu_89635_p2 =  (sc_lv<8>) (grp_fu_89635_p20.read());
}

void poly1305_hw::thread_grp_fu_89635_p20() {
    grp_fu_89635_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_0_phi_fu_11110_p4.read());
}

void poly1305_hw::thread_grp_fu_89644_p0() {
    grp_fu_89644_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_89644_p1() {
    grp_fu_89644_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89644_p2() {
    grp_fu_89644_p2 =  (sc_lv<8>) (grp_fu_89644_p20.read());
}

void poly1305_hw::thread_grp_fu_89644_p20() {
    grp_fu_89644_p20 = esl_zext<16,8>(mulCarry42_1_13_1_reg_11117.read());
}

void poly1305_hw::thread_grp_fu_89653_p0() {
    grp_fu_89653_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_89653_p1() {
    grp_fu_89653_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89653_p2() {
    grp_fu_89653_p2 =  (sc_lv<8>) (grp_fu_89653_p20.read());
}

void poly1305_hw::thread_grp_fu_89653_p20() {
    grp_fu_89653_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_2_phi_fu_11131_p4.read());
}

void poly1305_hw::thread_grp_fu_89661_p0() {
    grp_fu_89661_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_89661_p1() {
    grp_fu_89661_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89661_p2() {
    grp_fu_89661_p2 =  (sc_lv<8>) (grp_fu_89661_p20.read());
}

void poly1305_hw::thread_grp_fu_89661_p20() {
    grp_fu_89661_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_3_phi_fu_11141_p4.read());
}

void poly1305_hw::thread_grp_fu_89670_p0() {
    grp_fu_89670_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_89670_p1() {
    grp_fu_89670_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89670_p2() {
    grp_fu_89670_p2 =  (sc_lv<8>) (grp_fu_89670_p20.read());
}

void poly1305_hw::thread_grp_fu_89670_p20() {
    grp_fu_89670_p20 = esl_zext<16,8>(mulCarry42_1_13_4_reg_11148.read());
}

void poly1305_hw::thread_grp_fu_89679_p0() {
    grp_fu_89679_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_89679_p1() {
    grp_fu_89679_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89679_p2() {
    grp_fu_89679_p2 =  (sc_lv<8>) (grp_fu_89679_p20.read());
}

void poly1305_hw::thread_grp_fu_89679_p20() {
    grp_fu_89679_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_5_phi_fu_11162_p4.read());
}

void poly1305_hw::thread_grp_fu_89687_p0() {
    grp_fu_89687_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_89687_p1() {
    grp_fu_89687_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89687_p2() {
    grp_fu_89687_p2 =  (sc_lv<8>) (grp_fu_89687_p20.read());
}

void poly1305_hw::thread_grp_fu_89687_p20() {
    grp_fu_89687_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_6_phi_fu_11172_p4.read());
}

void poly1305_hw::thread_grp_fu_89696_p0() {
    grp_fu_89696_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_89696_p1() {
    grp_fu_89696_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89696_p2() {
    grp_fu_89696_p2 =  (sc_lv<8>) (grp_fu_89696_p20.read());
}

void poly1305_hw::thread_grp_fu_89696_p20() {
    grp_fu_89696_p20 = esl_zext<16,8>(mulCarry42_1_13_7_reg_11179.read());
}

void poly1305_hw::thread_grp_fu_89705_p0() {
    grp_fu_89705_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_89705_p1() {
    grp_fu_89705_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89705_p2() {
    grp_fu_89705_p2 =  (sc_lv<8>) (grp_fu_89705_p20.read());
}

void poly1305_hw::thread_grp_fu_89705_p20() {
    grp_fu_89705_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_8_phi_fu_11193_p4.read());
}

void poly1305_hw::thread_grp_fu_89713_p0() {
    grp_fu_89713_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_89713_p1() {
    grp_fu_89713_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89713_p2() {
    grp_fu_89713_p2 =  (sc_lv<8>) (grp_fu_89713_p20.read());
}

void poly1305_hw::thread_grp_fu_89713_p20() {
    grp_fu_89713_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_9_phi_fu_11203_p4.read());
}

void poly1305_hw::thread_grp_fu_89722_p0() {
    grp_fu_89722_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_89722_p1() {
    grp_fu_89722_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89722_p2() {
    grp_fu_89722_p2 =  (sc_lv<8>) (grp_fu_89722_p20.read());
}

void poly1305_hw::thread_grp_fu_89722_p20() {
    grp_fu_89722_p20 = esl_zext<16,8>(mulCarry42_1_13_10_reg_11210.read());
}

void poly1305_hw::thread_grp_fu_89731_p0() {
    grp_fu_89731_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_89731_p1() {
    grp_fu_89731_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89731_p2() {
    grp_fu_89731_p2 =  (sc_lv<8>) (grp_fu_89731_p20.read());
}

void poly1305_hw::thread_grp_fu_89731_p20() {
    grp_fu_89731_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_11_phi_fu_11224_p4.read());
}

void poly1305_hw::thread_grp_fu_89739_p0() {
    grp_fu_89739_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_89739_p1() {
    grp_fu_89739_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89739_p2() {
    grp_fu_89739_p2 =  (sc_lv<8>) (grp_fu_89739_p20.read());
}

void poly1305_hw::thread_grp_fu_89739_p20() {
    grp_fu_89739_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_12_phi_fu_11234_p4.read());
}

void poly1305_hw::thread_grp_fu_89748_p0() {
    grp_fu_89748_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_89748_p1() {
    grp_fu_89748_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89748_p2() {
    grp_fu_89748_p2 =  (sc_lv<8>) (grp_fu_89748_p20.read());
}

void poly1305_hw::thread_grp_fu_89748_p20() {
    grp_fu_89748_p20 = esl_zext<16,8>(mulCarry42_1_13_13_reg_11241.read());
}

void poly1305_hw::thread_grp_fu_89757_p0() {
    grp_fu_89757_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_89757_p1() {
    grp_fu_89757_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89757_p2() {
    grp_fu_89757_p2 =  (sc_lv<8>) (grp_fu_89757_p20.read());
}

void poly1305_hw::thread_grp_fu_89757_p20() {
    grp_fu_89757_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_14_phi_fu_11255_p4.read());
}

void poly1305_hw::thread_grp_fu_89765_p0() {
    grp_fu_89765_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_89765_p1() {
    grp_fu_89765_p1 =  (sc_lv<8>) (zext_ln96_13_reg_99973.read());
}

void poly1305_hw::thread_grp_fu_89765_p2() {
    grp_fu_89765_p2 =  (sc_lv<8>) (grp_fu_89765_p20.read());
}

void poly1305_hw::thread_grp_fu_89765_p20() {
    grp_fu_89765_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_13_15_phi_fu_11265_p4.read());
}

void poly1305_hw::thread_grp_fu_89774_p0() {
    grp_fu_89774_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_89774_p1() {
    grp_fu_89774_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89774_p2() {
    grp_fu_89774_p2 =  (sc_lv<8>) (grp_fu_89774_p20.read());
}

void poly1305_hw::thread_grp_fu_89774_p20() {
    grp_fu_89774_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_0_phi_fu_11287_p4.read());
}

void poly1305_hw::thread_grp_fu_89783_p0() {
    grp_fu_89783_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_89783_p1() {
    grp_fu_89783_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89783_p2() {
    grp_fu_89783_p2 =  (sc_lv<8>) (grp_fu_89783_p20.read());
}

void poly1305_hw::thread_grp_fu_89783_p20() {
    grp_fu_89783_p20 = esl_zext<16,8>(mulCarry42_1_14_1_reg_11294.read());
}

void poly1305_hw::thread_grp_fu_89792_p0() {
    grp_fu_89792_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_89792_p1() {
    grp_fu_89792_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89792_p2() {
    grp_fu_89792_p2 =  (sc_lv<8>) (grp_fu_89792_p20.read());
}

void poly1305_hw::thread_grp_fu_89792_p20() {
    grp_fu_89792_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_2_phi_fu_11308_p4.read());
}

void poly1305_hw::thread_grp_fu_89800_p0() {
    grp_fu_89800_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_89800_p1() {
    grp_fu_89800_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89800_p2() {
    grp_fu_89800_p2 =  (sc_lv<8>) (grp_fu_89800_p20.read());
}

void poly1305_hw::thread_grp_fu_89800_p20() {
    grp_fu_89800_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_3_phi_fu_11318_p4.read());
}

void poly1305_hw::thread_grp_fu_89809_p0() {
    grp_fu_89809_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_89809_p1() {
    grp_fu_89809_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89809_p2() {
    grp_fu_89809_p2 =  (sc_lv<8>) (grp_fu_89809_p20.read());
}

void poly1305_hw::thread_grp_fu_89809_p20() {
    grp_fu_89809_p20 = esl_zext<16,8>(mulCarry42_1_14_4_reg_11325.read());
}

void poly1305_hw::thread_grp_fu_89818_p0() {
    grp_fu_89818_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_89818_p1() {
    grp_fu_89818_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89818_p2() {
    grp_fu_89818_p2 =  (sc_lv<8>) (grp_fu_89818_p20.read());
}

void poly1305_hw::thread_grp_fu_89818_p20() {
    grp_fu_89818_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_5_phi_fu_11339_p4.read());
}

void poly1305_hw::thread_grp_fu_89826_p0() {
    grp_fu_89826_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_89826_p1() {
    grp_fu_89826_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89826_p2() {
    grp_fu_89826_p2 =  (sc_lv<8>) (grp_fu_89826_p20.read());
}

void poly1305_hw::thread_grp_fu_89826_p20() {
    grp_fu_89826_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_6_phi_fu_11349_p4.read());
}

void poly1305_hw::thread_grp_fu_89835_p0() {
    grp_fu_89835_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_89835_p1() {
    grp_fu_89835_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89835_p2() {
    grp_fu_89835_p2 =  (sc_lv<8>) (grp_fu_89835_p20.read());
}

void poly1305_hw::thread_grp_fu_89835_p20() {
    grp_fu_89835_p20 = esl_zext<16,8>(mulCarry42_1_14_7_reg_11356.read());
}

void poly1305_hw::thread_grp_fu_89844_p0() {
    grp_fu_89844_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_89844_p1() {
    grp_fu_89844_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89844_p2() {
    grp_fu_89844_p2 =  (sc_lv<8>) (grp_fu_89844_p20.read());
}

void poly1305_hw::thread_grp_fu_89844_p20() {
    grp_fu_89844_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_8_phi_fu_11370_p4.read());
}

void poly1305_hw::thread_grp_fu_89852_p0() {
    grp_fu_89852_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_89852_p1() {
    grp_fu_89852_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89852_p2() {
    grp_fu_89852_p2 =  (sc_lv<8>) (grp_fu_89852_p20.read());
}

void poly1305_hw::thread_grp_fu_89852_p20() {
    grp_fu_89852_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_9_phi_fu_11380_p4.read());
}

void poly1305_hw::thread_grp_fu_89861_p0() {
    grp_fu_89861_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_89861_p1() {
    grp_fu_89861_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89861_p2() {
    grp_fu_89861_p2 =  (sc_lv<8>) (grp_fu_89861_p20.read());
}

void poly1305_hw::thread_grp_fu_89861_p20() {
    grp_fu_89861_p20 = esl_zext<16,8>(mulCarry42_1_14_10_reg_11387.read());
}

void poly1305_hw::thread_grp_fu_89870_p0() {
    grp_fu_89870_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_89870_p1() {
    grp_fu_89870_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89870_p2() {
    grp_fu_89870_p2 =  (sc_lv<8>) (grp_fu_89870_p20.read());
}

void poly1305_hw::thread_grp_fu_89870_p20() {
    grp_fu_89870_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_11_phi_fu_11401_p4.read());
}

void poly1305_hw::thread_grp_fu_89878_p0() {
    grp_fu_89878_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_89878_p1() {
    grp_fu_89878_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89878_p2() {
    grp_fu_89878_p2 =  (sc_lv<8>) (grp_fu_89878_p20.read());
}

void poly1305_hw::thread_grp_fu_89878_p20() {
    grp_fu_89878_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_12_phi_fu_11411_p4.read());
}

void poly1305_hw::thread_grp_fu_89887_p0() {
    grp_fu_89887_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_89887_p1() {
    grp_fu_89887_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89887_p2() {
    grp_fu_89887_p2 =  (sc_lv<8>) (grp_fu_89887_p20.read());
}

void poly1305_hw::thread_grp_fu_89887_p20() {
    grp_fu_89887_p20 = esl_zext<16,8>(mulCarry42_1_14_13_reg_11418.read());
}

void poly1305_hw::thread_grp_fu_89896_p0() {
    grp_fu_89896_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_89896_p1() {
    grp_fu_89896_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89896_p2() {
    grp_fu_89896_p2 =  (sc_lv<8>) (grp_fu_89896_p20.read());
}

void poly1305_hw::thread_grp_fu_89896_p20() {
    grp_fu_89896_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_14_phi_fu_11432_p4.read());
}

void poly1305_hw::thread_grp_fu_89904_p0() {
    grp_fu_89904_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_89904_p1() {
    grp_fu_89904_p1 =  (sc_lv<8>) (zext_ln96_14_reg_100011.read());
}

void poly1305_hw::thread_grp_fu_89904_p2() {
    grp_fu_89904_p2 =  (sc_lv<8>) (grp_fu_89904_p20.read());
}

void poly1305_hw::thread_grp_fu_89904_p20() {
    grp_fu_89904_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_14_15_phi_fu_11442_p4.read());
}

void poly1305_hw::thread_grp_fu_89913_p0() {
    grp_fu_89913_p0 =  (sc_lv<8>) (zext_ln382_3_reg_100725.read());
}

void poly1305_hw::thread_grp_fu_89913_p1() {
    grp_fu_89913_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89913_p2() {
    grp_fu_89913_p2 =  (sc_lv<4>) (grp_fu_89913_p20.read());
}

void poly1305_hw::thread_grp_fu_89913_p20() {
    grp_fu_89913_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_0_phi_fu_11464_p4.read());
}

void poly1305_hw::thread_grp_fu_89922_p0() {
    grp_fu_89922_p0 =  (sc_lv<8>) (zext_ln382_6_reg_100767.read());
}

void poly1305_hw::thread_grp_fu_89922_p1() {
    grp_fu_89922_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89922_p2() {
    grp_fu_89922_p2 =  (sc_lv<4>) (grp_fu_89922_p20.read());
}

void poly1305_hw::thread_grp_fu_89922_p20() {
    grp_fu_89922_p20 = esl_zext<12,4>(mulCarry42_1_15_1_reg_11471.read());
}

void poly1305_hw::thread_grp_fu_89931_p0() {
    grp_fu_89931_p0 =  (sc_lv<8>) (zext_ln382_9_reg_100810.read());
}

void poly1305_hw::thread_grp_fu_89931_p1() {
    grp_fu_89931_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89931_p2() {
    grp_fu_89931_p2 =  (sc_lv<4>) (grp_fu_89931_p20.read());
}

void poly1305_hw::thread_grp_fu_89931_p20() {
    grp_fu_89931_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_2_phi_fu_11485_p4.read());
}

void poly1305_hw::thread_grp_fu_89939_p0() {
    grp_fu_89939_p0 =  (sc_lv<8>) (zext_ln382_12_reg_100842.read());
}

void poly1305_hw::thread_grp_fu_89939_p1() {
    grp_fu_89939_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89939_p2() {
    grp_fu_89939_p2 =  (sc_lv<4>) (grp_fu_89939_p20.read());
}

void poly1305_hw::thread_grp_fu_89939_p20() {
    grp_fu_89939_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_3_phi_fu_11495_p4.read());
}

void poly1305_hw::thread_grp_fu_89948_p0() {
    grp_fu_89948_p0 =  (sc_lv<8>) (zext_ln382_15_reg_100884.read());
}

void poly1305_hw::thread_grp_fu_89948_p1() {
    grp_fu_89948_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89948_p2() {
    grp_fu_89948_p2 =  (sc_lv<4>) (grp_fu_89948_p20.read());
}

void poly1305_hw::thread_grp_fu_89948_p20() {
    grp_fu_89948_p20 = esl_zext<12,4>(mulCarry42_1_15_4_reg_11502.read());
}

void poly1305_hw::thread_grp_fu_89957_p0() {
    grp_fu_89957_p0 =  (sc_lv<8>) (zext_ln382_18_reg_100927.read());
}

void poly1305_hw::thread_grp_fu_89957_p1() {
    grp_fu_89957_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89957_p2() {
    grp_fu_89957_p2 =  (sc_lv<4>) (grp_fu_89957_p20.read());
}

void poly1305_hw::thread_grp_fu_89957_p20() {
    grp_fu_89957_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_5_phi_fu_11516_p4.read());
}

void poly1305_hw::thread_grp_fu_89965_p0() {
    grp_fu_89965_p0 =  (sc_lv<8>) (zext_ln382_21_reg_100959.read());
}

void poly1305_hw::thread_grp_fu_89965_p1() {
    grp_fu_89965_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89965_p2() {
    grp_fu_89965_p2 =  (sc_lv<4>) (grp_fu_89965_p20.read());
}

void poly1305_hw::thread_grp_fu_89965_p20() {
    grp_fu_89965_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_6_phi_fu_11526_p4.read());
}

void poly1305_hw::thread_grp_fu_89974_p0() {
    grp_fu_89974_p0 =  (sc_lv<8>) (zext_ln382_24_reg_101001.read());
}

void poly1305_hw::thread_grp_fu_89974_p1() {
    grp_fu_89974_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89974_p2() {
    grp_fu_89974_p2 =  (sc_lv<4>) (grp_fu_89974_p20.read());
}

void poly1305_hw::thread_grp_fu_89974_p20() {
    grp_fu_89974_p20 = esl_zext<12,4>(mulCarry42_1_15_7_reg_11533.read());
}

void poly1305_hw::thread_grp_fu_89983_p0() {
    grp_fu_89983_p0 =  (sc_lv<8>) (zext_ln382_27_reg_101044.read());
}

void poly1305_hw::thread_grp_fu_89983_p1() {
    grp_fu_89983_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89983_p2() {
    grp_fu_89983_p2 =  (sc_lv<4>) (grp_fu_89983_p20.read());
}

void poly1305_hw::thread_grp_fu_89983_p20() {
    grp_fu_89983_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_8_phi_fu_11547_p4.read());
}

void poly1305_hw::thread_grp_fu_89991_p0() {
    grp_fu_89991_p0 =  (sc_lv<8>) (zext_ln382_30_reg_101076.read());
}

void poly1305_hw::thread_grp_fu_89991_p1() {
    grp_fu_89991_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_89991_p2() {
    grp_fu_89991_p2 =  (sc_lv<4>) (grp_fu_89991_p20.read());
}

void poly1305_hw::thread_grp_fu_89991_p20() {
    grp_fu_89991_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_9_phi_fu_11557_p4.read());
}

void poly1305_hw::thread_grp_fu_90000_p0() {
    grp_fu_90000_p0 =  (sc_lv<8>) (zext_ln382_33_reg_101118.read());
}

void poly1305_hw::thread_grp_fu_90000_p1() {
    grp_fu_90000_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_90000_p2() {
    grp_fu_90000_p2 =  (sc_lv<4>) (grp_fu_90000_p20.read());
}

void poly1305_hw::thread_grp_fu_90000_p20() {
    grp_fu_90000_p20 = esl_zext<12,4>(mulCarry42_1_15_10_reg_11564.read());
}

void poly1305_hw::thread_grp_fu_90009_p0() {
    grp_fu_90009_p0 =  (sc_lv<8>) (zext_ln382_36_reg_101161.read());
}

void poly1305_hw::thread_grp_fu_90009_p1() {
    grp_fu_90009_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_90009_p2() {
    grp_fu_90009_p2 =  (sc_lv<4>) (grp_fu_90009_p20.read());
}

void poly1305_hw::thread_grp_fu_90009_p20() {
    grp_fu_90009_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_11_phi_fu_11578_p4.read());
}

void poly1305_hw::thread_grp_fu_90017_p0() {
    grp_fu_90017_p0 =  (sc_lv<8>) (zext_ln382_39_reg_101193.read());
}

void poly1305_hw::thread_grp_fu_90017_p1() {
    grp_fu_90017_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_90017_p2() {
    grp_fu_90017_p2 =  (sc_lv<4>) (grp_fu_90017_p20.read());
}

void poly1305_hw::thread_grp_fu_90017_p20() {
    grp_fu_90017_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_12_phi_fu_11588_p4.read());
}

void poly1305_hw::thread_grp_fu_90026_p0() {
    grp_fu_90026_p0 =  (sc_lv<8>) (zext_ln382_47_reg_101235.read());
}

void poly1305_hw::thread_grp_fu_90026_p1() {
    grp_fu_90026_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_90026_p2() {
    grp_fu_90026_p2 =  (sc_lv<4>) (grp_fu_90026_p20.read());
}

void poly1305_hw::thread_grp_fu_90026_p20() {
    grp_fu_90026_p20 = esl_zext<12,4>(mulCarry42_1_15_13_reg_11595.read());
}

void poly1305_hw::thread_grp_fu_90035_p0() {
    grp_fu_90035_p0 =  (sc_lv<8>) (zext_ln382_64_reg_101278.read());
}

void poly1305_hw::thread_grp_fu_90035_p1() {
    grp_fu_90035_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_90035_p2() {
    grp_fu_90035_p2 =  (sc_lv<4>) (grp_fu_90035_p20.read());
}

void poly1305_hw::thread_grp_fu_90035_p20() {
    grp_fu_90035_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_14_phi_fu_11609_p4.read());
}

void poly1305_hw::thread_grp_fu_90043_p0() {
    grp_fu_90043_p0 =  (sc_lv<8>) (zext_ln382_81_reg_101310.read());
}

void poly1305_hw::thread_grp_fu_90043_p1() {
    grp_fu_90043_p1 =  (sc_lv<4>) (zext_ln134_33_reg_100049.read());
}

void poly1305_hw::thread_grp_fu_90043_p2() {
    grp_fu_90043_p2 =  (sc_lv<4>) (grp_fu_90043_p20.read());
}

void poly1305_hw::thread_grp_fu_90043_p20() {
    grp_fu_90043_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_15_15_phi_fu_11619_p4.read());
}

void poly1305_hw::thread_grp_fu_90052_p0() {
    grp_fu_90052_p0 =  (sc_lv<8>) (zext_ln664_3_reg_109029.read());
}

void poly1305_hw::thread_grp_fu_90052_p1() {
    grp_fu_90052_p1 =  (sc_lv<8>) (zext_ln664_fu_56280_p1.read());
}

void poly1305_hw::thread_grp_fu_90052_p2() {
    grp_fu_90052_p2 =  (sc_lv<8>) (grp_fu_90052_p20.read());
}

void poly1305_hw::thread_grp_fu_90052_p20() {
    grp_fu_90052_p20 = esl_zext<16,8>(select_ln665_fu_56318_p3.read());
}

void poly1305_hw::thread_grp_fu_90062_p0() {
    grp_fu_90062_p0 =  (sc_lv<8>) (zext_ln664_5_reg_109034.read());
}

void poly1305_hw::thread_grp_fu_90062_p1() {
    grp_fu_90062_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90062_p2() {
    grp_fu_90062_p2 =  (sc_lv<8>) (grp_fu_90062_p20.read());
}

void poly1305_hw::thread_grp_fu_90062_p20() {
    grp_fu_90062_p20 = esl_zext<16,8>(select_ln665_1_fu_56453_p3.read());
}

void poly1305_hw::thread_grp_fu_90071_p0() {
    grp_fu_90071_p0 =  (sc_lv<8>) (zext_ln664_7_reg_109039.read());
}

void poly1305_hw::thread_grp_fu_90071_p1() {
    grp_fu_90071_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90071_p2() {
    grp_fu_90071_p2 =  (sc_lv<8>) (grp_fu_90071_p20.read());
}

void poly1305_hw::thread_grp_fu_90071_p20() {
    grp_fu_90071_p20 = esl_zext<16,8>(select_ln665_2_reg_109204.read());
}

void poly1305_hw::thread_grp_fu_90080_p0() {
    grp_fu_90080_p0 =  (sc_lv<8>) (zext_ln664_9_reg_109044.read());
}

void poly1305_hw::thread_grp_fu_90080_p1() {
    grp_fu_90080_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90080_p2() {
    grp_fu_90080_p2 =  (sc_lv<8>) (grp_fu_90080_p20.read());
}

void poly1305_hw::thread_grp_fu_90080_p20() {
    grp_fu_90080_p20 = esl_zext<16,8>(select_ln665_3_reg_109233.read());
}

void poly1305_hw::thread_grp_fu_90089_p0() {
    grp_fu_90089_p0 =  (sc_lv<8>) (zext_ln664_11_reg_109049.read());
}

void poly1305_hw::thread_grp_fu_90089_p1() {
    grp_fu_90089_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90089_p2() {
    grp_fu_90089_p2 =  (sc_lv<8>) (grp_fu_90089_p20.read());
}

void poly1305_hw::thread_grp_fu_90089_p20() {
    grp_fu_90089_p20 = esl_zext<16,8>(select_ln665_4_reg_109268.read());
}

void poly1305_hw::thread_grp_fu_90098_p0() {
    grp_fu_90098_p0 =  (sc_lv<8>) (zext_ln664_13_reg_109054.read());
}

void poly1305_hw::thread_grp_fu_90098_p1() {
    grp_fu_90098_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90098_p2() {
    grp_fu_90098_p2 =  (sc_lv<8>) (grp_fu_90098_p20.read());
}

void poly1305_hw::thread_grp_fu_90098_p20() {
    grp_fu_90098_p20 = esl_zext<16,8>(select_ln665_5_reg_109303.read());
}

void poly1305_hw::thread_grp_fu_90107_p0() {
    grp_fu_90107_p0 =  (sc_lv<8>) (zext_ln664_15_reg_109059.read());
}

void poly1305_hw::thread_grp_fu_90107_p1() {
    grp_fu_90107_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90107_p2() {
    grp_fu_90107_p2 =  (sc_lv<8>) (grp_fu_90107_p20.read());
}

void poly1305_hw::thread_grp_fu_90107_p20() {
    grp_fu_90107_p20 = esl_zext<16,8>(select_ln665_6_reg_109338.read());
}

void poly1305_hw::thread_grp_fu_90116_p0() {
    grp_fu_90116_p0 =  (sc_lv<8>) (zext_ln664_17_reg_109064.read());
}

void poly1305_hw::thread_grp_fu_90116_p1() {
    grp_fu_90116_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90116_p2() {
    grp_fu_90116_p2 =  (sc_lv<8>) (grp_fu_90116_p20.read());
}

void poly1305_hw::thread_grp_fu_90116_p20() {
    grp_fu_90116_p20 = esl_zext<16,8>(select_ln665_7_reg_109373.read());
}

void poly1305_hw::thread_grp_fu_90125_p0() {
    grp_fu_90125_p0 =  (sc_lv<8>) (zext_ln664_19_reg_109069.read());
}

void poly1305_hw::thread_grp_fu_90125_p1() {
    grp_fu_90125_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90125_p2() {
    grp_fu_90125_p2 =  (sc_lv<8>) (grp_fu_90125_p20.read());
}

void poly1305_hw::thread_grp_fu_90125_p20() {
    grp_fu_90125_p20 = esl_zext<16,8>(select_ln665_8_reg_109419.read());
}

void poly1305_hw::thread_grp_fu_90134_p0() {
    grp_fu_90134_p0 =  (sc_lv<8>) (zext_ln664_21_reg_109074.read());
}

void poly1305_hw::thread_grp_fu_90134_p1() {
    grp_fu_90134_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90134_p2() {
    grp_fu_90134_p2 =  (sc_lv<8>) (grp_fu_90134_p20.read());
}

void poly1305_hw::thread_grp_fu_90134_p20() {
    grp_fu_90134_p20 = esl_zext<16,8>(select_ln665_9_reg_109453.read());
}

void poly1305_hw::thread_grp_fu_90143_p0() {
    grp_fu_90143_p0 =  (sc_lv<8>) (zext_ln664_23_reg_109079.read());
}

void poly1305_hw::thread_grp_fu_90143_p1() {
    grp_fu_90143_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90143_p2() {
    grp_fu_90143_p2 =  (sc_lv<8>) (grp_fu_90143_p20.read());
}

void poly1305_hw::thread_grp_fu_90143_p20() {
    grp_fu_90143_p20 = esl_zext<16,8>(select_ln665_10_reg_109475.read());
}

void poly1305_hw::thread_grp_fu_90152_p0() {
    grp_fu_90152_p0 =  (sc_lv<8>) (zext_ln664_25_reg_109084.read());
}

void poly1305_hw::thread_grp_fu_90152_p1() {
    grp_fu_90152_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90152_p2() {
    grp_fu_90152_p2 =  (sc_lv<8>) (grp_fu_90152_p20.read());
}

void poly1305_hw::thread_grp_fu_90152_p20() {
    grp_fu_90152_p20 = esl_zext<16,8>(select_ln665_11_reg_109497.read());
}

void poly1305_hw::thread_grp_fu_90161_p0() {
    grp_fu_90161_p0 =  (sc_lv<8>) (zext_ln664_27_reg_109089.read());
}

void poly1305_hw::thread_grp_fu_90161_p1() {
    grp_fu_90161_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90161_p2() {
    grp_fu_90161_p2 =  (sc_lv<8>) (grp_fu_90161_p20.read());
}

void poly1305_hw::thread_grp_fu_90161_p20() {
    grp_fu_90161_p20 = esl_zext<16,8>(select_ln665_12_reg_109519.read());
}

void poly1305_hw::thread_grp_fu_90170_p0() {
    grp_fu_90170_p0 =  (sc_lv<8>) (zext_ln664_29_reg_109094.read());
}

void poly1305_hw::thread_grp_fu_90170_p1() {
    grp_fu_90170_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90170_p2() {
    grp_fu_90170_p2 =  (sc_lv<8>) (grp_fu_90170_p20.read());
}

void poly1305_hw::thread_grp_fu_90170_p20() {
    grp_fu_90170_p20 = esl_zext<16,8>(select_ln665_13_reg_109541.read());
}

void poly1305_hw::thread_grp_fu_90179_p0() {
    grp_fu_90179_p0 =  (sc_lv<8>) (zext_ln664_31_reg_109099.read());
}

void poly1305_hw::thread_grp_fu_90179_p1() {
    grp_fu_90179_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90179_p2() {
    grp_fu_90179_p2 =  (sc_lv<8>) (grp_fu_90179_p20.read());
}

void poly1305_hw::thread_grp_fu_90179_p20() {
    grp_fu_90179_p20 = esl_zext<16,8>(select_ln665_14_reg_109558.read());
}

void poly1305_hw::thread_grp_fu_90188_p0() {
    grp_fu_90188_p0 =  (sc_lv<8>) (zext_ln664_33_reg_109104.read());
}

void poly1305_hw::thread_grp_fu_90188_p1() {
    grp_fu_90188_p1 =  (sc_lv<8>) (zext_ln664_reg_109140.read());
}

void poly1305_hw::thread_grp_fu_90188_p2() {
    grp_fu_90188_p2 =  (sc_lv<8>) (grp_fu_90188_p20.read());
}

void poly1305_hw::thread_grp_fu_90188_p20() {
    grp_fu_90188_p20 = esl_zext<16,8>(select_ln665_15_reg_109585.read());
}

void poly1305_hw::thread_grp_fu_90197_p0() {
    grp_fu_90197_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90197_p1() {
    grp_fu_90197_p1 =  (sc_lv<8>) (grp_fu_90197_p10.read());
}

void poly1305_hw::thread_grp_fu_90197_p10() {
    grp_fu_90197_p10 = esl_zext<16,8>(add_ln83_1_reg_110481.read());
}

void poly1305_hw::thread_grp_fu_90197_p2() {
    grp_fu_90197_p2 =  (sc_lv<8>) (grp_fu_90197_p20.read());
}

void poly1305_hw::thread_grp_fu_90197_p20() {
    grp_fu_90197_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_0_phi_fu_12850_p4.read());
}

void poly1305_hw::thread_grp_fu_90206_p0() {
    grp_fu_90206_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90206_p1() {
    grp_fu_90206_p1 =  (sc_lv<8>) (grp_fu_90206_p10.read());
}

void poly1305_hw::thread_grp_fu_90206_p10() {
    grp_fu_90206_p10 = esl_zext<16,8>(add_ln83_2_reg_110493.read());
}

void poly1305_hw::thread_grp_fu_90206_p2() {
    grp_fu_90206_p2 =  (sc_lv<8>) (grp_fu_90206_p20.read());
}

void poly1305_hw::thread_grp_fu_90206_p20() {
    grp_fu_90206_p20 = esl_zext<16,8>(mulCarry_1_0_1_reg_12857.read());
}

void poly1305_hw::thread_grp_fu_90216_p0() {
    grp_fu_90216_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90216_p1() {
    grp_fu_90216_p1 =  (sc_lv<8>) (grp_fu_90216_p10.read());
}

void poly1305_hw::thread_grp_fu_90216_p10() {
    grp_fu_90216_p10 = esl_zext<16,8>(add_ln83_3_reg_110499.read());
}

void poly1305_hw::thread_grp_fu_90216_p2() {
    grp_fu_90216_p2 =  (sc_lv<8>) (grp_fu_90216_p20.read());
}

void poly1305_hw::thread_grp_fu_90216_p20() {
    grp_fu_90216_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_2_phi_fu_12871_p4.read());
}

void poly1305_hw::thread_grp_fu_90224_p0() {
    grp_fu_90224_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90224_p1() {
    grp_fu_90224_p1 =  (sc_lv<8>) (grp_fu_90224_p10.read());
}

void poly1305_hw::thread_grp_fu_90224_p10() {
    grp_fu_90224_p10 = esl_zext<16,8>(add_ln83_4_reg_110511.read());
}

void poly1305_hw::thread_grp_fu_90224_p2() {
    grp_fu_90224_p2 =  (sc_lv<8>) (grp_fu_90224_p20.read());
}

void poly1305_hw::thread_grp_fu_90224_p20() {
    grp_fu_90224_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_3_phi_fu_12881_p4.read());
}

void poly1305_hw::thread_grp_fu_90233_p0() {
    grp_fu_90233_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90233_p1() {
    grp_fu_90233_p1 =  (sc_lv<8>) (grp_fu_90233_p10.read());
}

void poly1305_hw::thread_grp_fu_90233_p10() {
    grp_fu_90233_p10 = esl_zext<16,8>(add_ln83_5_reg_110517.read());
}

void poly1305_hw::thread_grp_fu_90233_p2() {
    grp_fu_90233_p2 =  (sc_lv<8>) (grp_fu_90233_p20.read());
}

void poly1305_hw::thread_grp_fu_90233_p20() {
    grp_fu_90233_p20 = esl_zext<16,8>(mulCarry_1_0_4_reg_12888.read());
}

void poly1305_hw::thread_grp_fu_90243_p0() {
    grp_fu_90243_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90243_p1() {
    grp_fu_90243_p1 =  (sc_lv<8>) (grp_fu_90243_p10.read());
}

void poly1305_hw::thread_grp_fu_90243_p10() {
    grp_fu_90243_p10 = esl_zext<16,8>(add_ln83_6_reg_110529.read());
}

void poly1305_hw::thread_grp_fu_90243_p2() {
    grp_fu_90243_p2 =  (sc_lv<8>) (grp_fu_90243_p20.read());
}

void poly1305_hw::thread_grp_fu_90243_p20() {
    grp_fu_90243_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_5_phi_fu_12902_p4.read());
}

void poly1305_hw::thread_grp_fu_90251_p0() {
    grp_fu_90251_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90251_p1() {
    grp_fu_90251_p1 =  (sc_lv<8>) (grp_fu_90251_p10.read());
}

void poly1305_hw::thread_grp_fu_90251_p10() {
    grp_fu_90251_p10 = esl_zext<16,8>(add_ln83_7_reg_110535.read());
}

void poly1305_hw::thread_grp_fu_90251_p2() {
    grp_fu_90251_p2 =  (sc_lv<8>) (grp_fu_90251_p20.read());
}

void poly1305_hw::thread_grp_fu_90251_p20() {
    grp_fu_90251_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_6_phi_fu_12912_p4.read());
}

void poly1305_hw::thread_grp_fu_90260_p0() {
    grp_fu_90260_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90260_p1() {
    grp_fu_90260_p1 =  (sc_lv<8>) (grp_fu_90260_p10.read());
}

void poly1305_hw::thread_grp_fu_90260_p10() {
    grp_fu_90260_p10 = esl_zext<16,8>(add_ln83_8_reg_110547.read());
}

void poly1305_hw::thread_grp_fu_90260_p2() {
    grp_fu_90260_p2 =  (sc_lv<8>) (grp_fu_90260_p20.read());
}

void poly1305_hw::thread_grp_fu_90260_p20() {
    grp_fu_90260_p20 = esl_zext<16,8>(mulCarry_1_0_7_reg_12919.read());
}

void poly1305_hw::thread_grp_fu_90270_p0() {
    grp_fu_90270_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90270_p1() {
    grp_fu_90270_p1 =  (sc_lv<8>) (grp_fu_90270_p10.read());
}

void poly1305_hw::thread_grp_fu_90270_p10() {
    grp_fu_90270_p10 = esl_zext<16,8>(add_ln83_9_reg_110553.read());
}

void poly1305_hw::thread_grp_fu_90270_p2() {
    grp_fu_90270_p2 =  (sc_lv<8>) (grp_fu_90270_p20.read());
}

void poly1305_hw::thread_grp_fu_90270_p20() {
    grp_fu_90270_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_8_phi_fu_12933_p4.read());
}

void poly1305_hw::thread_grp_fu_90278_p0() {
    grp_fu_90278_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90278_p1() {
    grp_fu_90278_p1 =  (sc_lv<8>) (grp_fu_90278_p10.read());
}

void poly1305_hw::thread_grp_fu_90278_p10() {
    grp_fu_90278_p10 = esl_zext<16,8>(add_ln83_10_reg_110565.read());
}

void poly1305_hw::thread_grp_fu_90278_p2() {
    grp_fu_90278_p2 =  (sc_lv<8>) (grp_fu_90278_p20.read());
}

void poly1305_hw::thread_grp_fu_90278_p20() {
    grp_fu_90278_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_9_phi_fu_12943_p4.read());
}

void poly1305_hw::thread_grp_fu_90287_p0() {
    grp_fu_90287_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90287_p1() {
    grp_fu_90287_p1 =  (sc_lv<8>) (grp_fu_90287_p10.read());
}

void poly1305_hw::thread_grp_fu_90287_p10() {
    grp_fu_90287_p10 = esl_zext<16,8>(add_ln83_11_reg_110571.read());
}

void poly1305_hw::thread_grp_fu_90287_p2() {
    grp_fu_90287_p2 =  (sc_lv<8>) (grp_fu_90287_p20.read());
}

void poly1305_hw::thread_grp_fu_90287_p20() {
    grp_fu_90287_p20 = esl_zext<16,8>(mulCarry_1_0_10_reg_12950.read());
}

void poly1305_hw::thread_grp_fu_90297_p0() {
    grp_fu_90297_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90297_p1() {
    grp_fu_90297_p1 =  (sc_lv<8>) (grp_fu_90297_p10.read());
}

void poly1305_hw::thread_grp_fu_90297_p10() {
    grp_fu_90297_p10 = esl_zext<16,8>(add_ln83_12_reg_110583.read());
}

void poly1305_hw::thread_grp_fu_90297_p2() {
    grp_fu_90297_p2 =  (sc_lv<8>) (grp_fu_90297_p20.read());
}

void poly1305_hw::thread_grp_fu_90297_p20() {
    grp_fu_90297_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_11_phi_fu_12964_p4.read());
}

void poly1305_hw::thread_grp_fu_90305_p0() {
    grp_fu_90305_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90305_p1() {
    grp_fu_90305_p1 =  (sc_lv<8>) (grp_fu_90305_p10.read());
}

void poly1305_hw::thread_grp_fu_90305_p10() {
    grp_fu_90305_p10 = esl_zext<16,8>(add_ln83_13_reg_110589.read());
}

void poly1305_hw::thread_grp_fu_90305_p2() {
    grp_fu_90305_p2 =  (sc_lv<8>) (grp_fu_90305_p20.read());
}

void poly1305_hw::thread_grp_fu_90305_p20() {
    grp_fu_90305_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_12_phi_fu_12974_p4.read());
}

void poly1305_hw::thread_grp_fu_90314_p0() {
    grp_fu_90314_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90314_p1() {
    grp_fu_90314_p1 =  (sc_lv<8>) (grp_fu_90314_p10.read());
}

void poly1305_hw::thread_grp_fu_90314_p10() {
    grp_fu_90314_p10 = esl_zext<16,8>(add_ln83_14_reg_110601.read());
}

void poly1305_hw::thread_grp_fu_90314_p2() {
    grp_fu_90314_p2 =  (sc_lv<8>) (grp_fu_90314_p20.read());
}

void poly1305_hw::thread_grp_fu_90314_p20() {
    grp_fu_90314_p20 = esl_zext<16,8>(mulCarry_1_0_13_reg_12981.read());
}

void poly1305_hw::thread_grp_fu_90324_p0() {
    grp_fu_90324_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90324_p1() {
    grp_fu_90324_p1 =  (sc_lv<8>) (grp_fu_90324_p10.read());
}

void poly1305_hw::thread_grp_fu_90324_p10() {
    grp_fu_90324_p10 = esl_zext<16,8>(add_ln83_15_reg_110632.read());
}

void poly1305_hw::thread_grp_fu_90324_p2() {
    grp_fu_90324_p2 =  (sc_lv<8>) (grp_fu_90324_p20.read());
}

void poly1305_hw::thread_grp_fu_90324_p20() {
    grp_fu_90324_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_14_phi_fu_12995_p4.read());
}

void poly1305_hw::thread_grp_fu_90332_p0() {
    grp_fu_90332_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_90332_p1() {
    grp_fu_90332_p1 =  (sc_lv<8>) (grp_fu_90332_p10.read());
}

void poly1305_hw::thread_grp_fu_90332_p10() {
    grp_fu_90332_p10 = esl_zext<16,8>(add_ln83_16_reg_110638.read());
}

void poly1305_hw::thread_grp_fu_90332_p2() {
    grp_fu_90332_p2 =  (sc_lv<8>) (grp_fu_90332_p20.read());
}

void poly1305_hw::thread_grp_fu_90332_p20() {
    grp_fu_90332_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_0_15_phi_fu_13005_p4.read());
}

void poly1305_hw::thread_grp_fu_90342_p0() {
    grp_fu_90342_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_90342_p1() {
    grp_fu_90342_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90342_p2() {
    grp_fu_90342_p2 =  (sc_lv<8>) (grp_fu_90342_p20.read());
}

void poly1305_hw::thread_grp_fu_90342_p20() {
    grp_fu_90342_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_0_phi_fu_13027_p4.read());
}

void poly1305_hw::thread_grp_fu_90351_p0() {
    grp_fu_90351_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_90351_p1() {
    grp_fu_90351_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90351_p2() {
    grp_fu_90351_p2 =  (sc_lv<8>) (grp_fu_90351_p20.read());
}

void poly1305_hw::thread_grp_fu_90351_p20() {
    grp_fu_90351_p20 = esl_zext<16,8>(mulCarry_1_1_1_reg_13034.read());
}

void poly1305_hw::thread_grp_fu_90360_p0() {
    grp_fu_90360_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_90360_p1() {
    grp_fu_90360_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90360_p2() {
    grp_fu_90360_p2 =  (sc_lv<8>) (grp_fu_90360_p20.read());
}

void poly1305_hw::thread_grp_fu_90360_p20() {
    grp_fu_90360_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_2_phi_fu_13048_p4.read());
}

void poly1305_hw::thread_grp_fu_90368_p0() {
    grp_fu_90368_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_90368_p1() {
    grp_fu_90368_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90368_p2() {
    grp_fu_90368_p2 =  (sc_lv<8>) (grp_fu_90368_p20.read());
}

void poly1305_hw::thread_grp_fu_90368_p20() {
    grp_fu_90368_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_3_phi_fu_13058_p4.read());
}

void poly1305_hw::thread_grp_fu_90377_p0() {
    grp_fu_90377_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_90377_p1() {
    grp_fu_90377_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90377_p2() {
    grp_fu_90377_p2 =  (sc_lv<8>) (grp_fu_90377_p20.read());
}

void poly1305_hw::thread_grp_fu_90377_p20() {
    grp_fu_90377_p20 = esl_zext<16,8>(mulCarry_1_1_4_reg_13065.read());
}

void poly1305_hw::thread_grp_fu_90386_p0() {
    grp_fu_90386_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_90386_p1() {
    grp_fu_90386_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90386_p2() {
    grp_fu_90386_p2 =  (sc_lv<8>) (grp_fu_90386_p20.read());
}

void poly1305_hw::thread_grp_fu_90386_p20() {
    grp_fu_90386_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_5_phi_fu_13079_p4.read());
}

void poly1305_hw::thread_grp_fu_90394_p0() {
    grp_fu_90394_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_90394_p1() {
    grp_fu_90394_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90394_p2() {
    grp_fu_90394_p2 =  (sc_lv<8>) (grp_fu_90394_p20.read());
}

void poly1305_hw::thread_grp_fu_90394_p20() {
    grp_fu_90394_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_6_phi_fu_13089_p4.read());
}

void poly1305_hw::thread_grp_fu_90403_p0() {
    grp_fu_90403_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_90403_p1() {
    grp_fu_90403_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90403_p2() {
    grp_fu_90403_p2 =  (sc_lv<8>) (grp_fu_90403_p20.read());
}

void poly1305_hw::thread_grp_fu_90403_p20() {
    grp_fu_90403_p20 = esl_zext<16,8>(mulCarry_1_1_7_reg_13096.read());
}

void poly1305_hw::thread_grp_fu_90412_p0() {
    grp_fu_90412_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_90412_p1() {
    grp_fu_90412_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90412_p2() {
    grp_fu_90412_p2 =  (sc_lv<8>) (grp_fu_90412_p20.read());
}

void poly1305_hw::thread_grp_fu_90412_p20() {
    grp_fu_90412_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_8_phi_fu_13110_p4.read());
}

void poly1305_hw::thread_grp_fu_90420_p0() {
    grp_fu_90420_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_90420_p1() {
    grp_fu_90420_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90420_p2() {
    grp_fu_90420_p2 =  (sc_lv<8>) (grp_fu_90420_p20.read());
}

void poly1305_hw::thread_grp_fu_90420_p20() {
    grp_fu_90420_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_9_phi_fu_13120_p4.read());
}

void poly1305_hw::thread_grp_fu_90429_p0() {
    grp_fu_90429_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_90429_p1() {
    grp_fu_90429_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90429_p2() {
    grp_fu_90429_p2 =  (sc_lv<8>) (grp_fu_90429_p20.read());
}

void poly1305_hw::thread_grp_fu_90429_p20() {
    grp_fu_90429_p20 = esl_zext<16,8>(mulCarry_1_1_10_reg_13127.read());
}

void poly1305_hw::thread_grp_fu_90438_p0() {
    grp_fu_90438_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_90438_p1() {
    grp_fu_90438_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90438_p2() {
    grp_fu_90438_p2 =  (sc_lv<8>) (grp_fu_90438_p20.read());
}

void poly1305_hw::thread_grp_fu_90438_p20() {
    grp_fu_90438_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_11_phi_fu_13141_p4.read());
}

void poly1305_hw::thread_grp_fu_90446_p0() {
    grp_fu_90446_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_90446_p1() {
    grp_fu_90446_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90446_p2() {
    grp_fu_90446_p2 =  (sc_lv<8>) (grp_fu_90446_p20.read());
}

void poly1305_hw::thread_grp_fu_90446_p20() {
    grp_fu_90446_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_12_phi_fu_13151_p4.read());
}

void poly1305_hw::thread_grp_fu_90455_p0() {
    grp_fu_90455_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_90455_p1() {
    grp_fu_90455_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90455_p2() {
    grp_fu_90455_p2 =  (sc_lv<8>) (grp_fu_90455_p20.read());
}

void poly1305_hw::thread_grp_fu_90455_p20() {
    grp_fu_90455_p20 = esl_zext<16,8>(mulCarry_1_1_13_reg_13158.read());
}

void poly1305_hw::thread_grp_fu_90464_p0() {
    grp_fu_90464_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_90464_p1() {
    grp_fu_90464_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90464_p2() {
    grp_fu_90464_p2 =  (sc_lv<8>) (grp_fu_90464_p20.read());
}

void poly1305_hw::thread_grp_fu_90464_p20() {
    grp_fu_90464_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_14_phi_fu_13172_p4.read());
}

void poly1305_hw::thread_grp_fu_90472_p0() {
    grp_fu_90472_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_90472_p1() {
    grp_fu_90472_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_90472_p2() {
    grp_fu_90472_p2 =  (sc_lv<8>) (grp_fu_90472_p20.read());
}

void poly1305_hw::thread_grp_fu_90472_p20() {
    grp_fu_90472_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_1_15_phi_fu_13182_p4.read());
}

void poly1305_hw::thread_grp_fu_90481_p0() {
    grp_fu_90481_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_90481_p1() {
    grp_fu_90481_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90481_p2() {
    grp_fu_90481_p2 =  (sc_lv<8>) (grp_fu_90481_p20.read());
}

void poly1305_hw::thread_grp_fu_90481_p20() {
    grp_fu_90481_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_0_phi_fu_13204_p4.read());
}

void poly1305_hw::thread_grp_fu_90490_p0() {
    grp_fu_90490_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_90490_p1() {
    grp_fu_90490_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90490_p2() {
    grp_fu_90490_p2 =  (sc_lv<8>) (grp_fu_90490_p20.read());
}

void poly1305_hw::thread_grp_fu_90490_p20() {
    grp_fu_90490_p20 = esl_zext<16,8>(mulCarry_1_2_1_reg_13211.read());
}

void poly1305_hw::thread_grp_fu_90499_p0() {
    grp_fu_90499_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_90499_p1() {
    grp_fu_90499_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90499_p2() {
    grp_fu_90499_p2 =  (sc_lv<8>) (grp_fu_90499_p20.read());
}

void poly1305_hw::thread_grp_fu_90499_p20() {
    grp_fu_90499_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_2_phi_fu_13225_p4.read());
}

void poly1305_hw::thread_grp_fu_90507_p0() {
    grp_fu_90507_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_90507_p1() {
    grp_fu_90507_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90507_p2() {
    grp_fu_90507_p2 =  (sc_lv<8>) (grp_fu_90507_p20.read());
}

void poly1305_hw::thread_grp_fu_90507_p20() {
    grp_fu_90507_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_3_phi_fu_13235_p4.read());
}

void poly1305_hw::thread_grp_fu_90516_p0() {
    grp_fu_90516_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_90516_p1() {
    grp_fu_90516_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90516_p2() {
    grp_fu_90516_p2 =  (sc_lv<8>) (grp_fu_90516_p20.read());
}

void poly1305_hw::thread_grp_fu_90516_p20() {
    grp_fu_90516_p20 = esl_zext<16,8>(mulCarry_1_2_4_reg_13242.read());
}

void poly1305_hw::thread_grp_fu_90525_p0() {
    grp_fu_90525_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_90525_p1() {
    grp_fu_90525_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90525_p2() {
    grp_fu_90525_p2 =  (sc_lv<8>) (grp_fu_90525_p20.read());
}

void poly1305_hw::thread_grp_fu_90525_p20() {
    grp_fu_90525_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_5_phi_fu_13256_p4.read());
}

void poly1305_hw::thread_grp_fu_90533_p0() {
    grp_fu_90533_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_90533_p1() {
    grp_fu_90533_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90533_p2() {
    grp_fu_90533_p2 =  (sc_lv<8>) (grp_fu_90533_p20.read());
}

void poly1305_hw::thread_grp_fu_90533_p20() {
    grp_fu_90533_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_6_phi_fu_13266_p4.read());
}

void poly1305_hw::thread_grp_fu_90542_p0() {
    grp_fu_90542_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_90542_p1() {
    grp_fu_90542_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90542_p2() {
    grp_fu_90542_p2 =  (sc_lv<8>) (grp_fu_90542_p20.read());
}

void poly1305_hw::thread_grp_fu_90542_p20() {
    grp_fu_90542_p20 = esl_zext<16,8>(mulCarry_1_2_7_reg_13273.read());
}

void poly1305_hw::thread_grp_fu_90551_p0() {
    grp_fu_90551_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_90551_p1() {
    grp_fu_90551_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90551_p2() {
    grp_fu_90551_p2 =  (sc_lv<8>) (grp_fu_90551_p20.read());
}

void poly1305_hw::thread_grp_fu_90551_p20() {
    grp_fu_90551_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_8_phi_fu_13287_p4.read());
}

void poly1305_hw::thread_grp_fu_90559_p0() {
    grp_fu_90559_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_90559_p1() {
    grp_fu_90559_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90559_p2() {
    grp_fu_90559_p2 =  (sc_lv<8>) (grp_fu_90559_p20.read());
}

void poly1305_hw::thread_grp_fu_90559_p20() {
    grp_fu_90559_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_9_phi_fu_13297_p4.read());
}

void poly1305_hw::thread_grp_fu_90568_p0() {
    grp_fu_90568_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_90568_p1() {
    grp_fu_90568_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90568_p2() {
    grp_fu_90568_p2 =  (sc_lv<8>) (grp_fu_90568_p20.read());
}

void poly1305_hw::thread_grp_fu_90568_p20() {
    grp_fu_90568_p20 = esl_zext<16,8>(mulCarry_1_2_10_reg_13304.read());
}

void poly1305_hw::thread_grp_fu_90577_p0() {
    grp_fu_90577_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_90577_p1() {
    grp_fu_90577_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90577_p2() {
    grp_fu_90577_p2 =  (sc_lv<8>) (grp_fu_90577_p20.read());
}

void poly1305_hw::thread_grp_fu_90577_p20() {
    grp_fu_90577_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_11_phi_fu_13318_p4.read());
}

void poly1305_hw::thread_grp_fu_90585_p0() {
    grp_fu_90585_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_90585_p1() {
    grp_fu_90585_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90585_p2() {
    grp_fu_90585_p2 =  (sc_lv<8>) (grp_fu_90585_p20.read());
}

void poly1305_hw::thread_grp_fu_90585_p20() {
    grp_fu_90585_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_12_phi_fu_13328_p4.read());
}

void poly1305_hw::thread_grp_fu_90594_p0() {
    grp_fu_90594_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_90594_p1() {
    grp_fu_90594_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90594_p2() {
    grp_fu_90594_p2 =  (sc_lv<8>) (grp_fu_90594_p20.read());
}

void poly1305_hw::thread_grp_fu_90594_p20() {
    grp_fu_90594_p20 = esl_zext<16,8>(mulCarry_1_2_13_reg_13335.read());
}

void poly1305_hw::thread_grp_fu_90603_p0() {
    grp_fu_90603_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_90603_p1() {
    grp_fu_90603_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90603_p2() {
    grp_fu_90603_p2 =  (sc_lv<8>) (grp_fu_90603_p20.read());
}

void poly1305_hw::thread_grp_fu_90603_p20() {
    grp_fu_90603_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_14_phi_fu_13349_p4.read());
}

void poly1305_hw::thread_grp_fu_90611_p0() {
    grp_fu_90611_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_90611_p1() {
    grp_fu_90611_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_90611_p2() {
    grp_fu_90611_p2 =  (sc_lv<8>) (grp_fu_90611_p20.read());
}

void poly1305_hw::thread_grp_fu_90611_p20() {
    grp_fu_90611_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_2_15_phi_fu_13359_p4.read());
}

void poly1305_hw::thread_grp_fu_90620_p0() {
    grp_fu_90620_p0 =  (sc_lv<8>) (zext_ln96_81_reg_110673.read());
}

void poly1305_hw::thread_grp_fu_90620_p1() {
    grp_fu_90620_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90620_p2() {
    grp_fu_90620_p2 =  (sc_lv<4>) (grp_fu_90620_p20.read());
}

void poly1305_hw::thread_grp_fu_90620_p20() {
    grp_fu_90620_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_0_phi_fu_13381_p4.read());
}

void poly1305_hw::thread_grp_fu_90629_p0() {
    grp_fu_90629_p0 =  (sc_lv<8>) (zext_ln96_82_reg_110715.read());
}

void poly1305_hw::thread_grp_fu_90629_p1() {
    grp_fu_90629_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90629_p2() {
    grp_fu_90629_p2 =  (sc_lv<4>) (grp_fu_90629_p20.read());
}

void poly1305_hw::thread_grp_fu_90629_p20() {
    grp_fu_90629_p20 = esl_zext<12,4>(mulCarry_1_3_1_reg_13388.read());
}

void poly1305_hw::thread_grp_fu_90638_p0() {
    grp_fu_90638_p0 =  (sc_lv<8>) (zext_ln96_83_reg_110758.read());
}

void poly1305_hw::thread_grp_fu_90638_p1() {
    grp_fu_90638_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90638_p2() {
    grp_fu_90638_p2 =  (sc_lv<4>) (grp_fu_90638_p20.read());
}

void poly1305_hw::thread_grp_fu_90638_p20() {
    grp_fu_90638_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_2_phi_fu_13402_p4.read());
}

void poly1305_hw::thread_grp_fu_90646_p0() {
    grp_fu_90646_p0 =  (sc_lv<8>) (zext_ln96_84_reg_110790.read());
}

void poly1305_hw::thread_grp_fu_90646_p1() {
    grp_fu_90646_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90646_p2() {
    grp_fu_90646_p2 =  (sc_lv<4>) (grp_fu_90646_p20.read());
}

void poly1305_hw::thread_grp_fu_90646_p20() {
    grp_fu_90646_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_3_phi_fu_13412_p4.read());
}

void poly1305_hw::thread_grp_fu_90655_p0() {
    grp_fu_90655_p0 =  (sc_lv<8>) (zext_ln96_85_reg_110832.read());
}

void poly1305_hw::thread_grp_fu_90655_p1() {
    grp_fu_90655_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90655_p2() {
    grp_fu_90655_p2 =  (sc_lv<4>) (grp_fu_90655_p20.read());
}

void poly1305_hw::thread_grp_fu_90655_p20() {
    grp_fu_90655_p20 = esl_zext<12,4>(mulCarry_1_3_4_reg_13419.read());
}

void poly1305_hw::thread_grp_fu_90664_p0() {
    grp_fu_90664_p0 =  (sc_lv<8>) (zext_ln96_86_reg_110875.read());
}

void poly1305_hw::thread_grp_fu_90664_p1() {
    grp_fu_90664_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90664_p2() {
    grp_fu_90664_p2 =  (sc_lv<4>) (grp_fu_90664_p20.read());
}

void poly1305_hw::thread_grp_fu_90664_p20() {
    grp_fu_90664_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_5_phi_fu_13433_p4.read());
}

void poly1305_hw::thread_grp_fu_90672_p0() {
    grp_fu_90672_p0 =  (sc_lv<8>) (zext_ln96_87_reg_110907.read());
}

void poly1305_hw::thread_grp_fu_90672_p1() {
    grp_fu_90672_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90672_p2() {
    grp_fu_90672_p2 =  (sc_lv<4>) (grp_fu_90672_p20.read());
}

void poly1305_hw::thread_grp_fu_90672_p20() {
    grp_fu_90672_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_6_phi_fu_13443_p4.read());
}

void poly1305_hw::thread_grp_fu_90681_p0() {
    grp_fu_90681_p0 =  (sc_lv<8>) (zext_ln96_88_reg_110949.read());
}

void poly1305_hw::thread_grp_fu_90681_p1() {
    grp_fu_90681_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90681_p2() {
    grp_fu_90681_p2 =  (sc_lv<4>) (grp_fu_90681_p20.read());
}

void poly1305_hw::thread_grp_fu_90681_p20() {
    grp_fu_90681_p20 = esl_zext<12,4>(mulCarry_1_3_7_reg_13450.read());
}

void poly1305_hw::thread_grp_fu_90690_p0() {
    grp_fu_90690_p0 =  (sc_lv<8>) (zext_ln96_89_reg_110992.read());
}

void poly1305_hw::thread_grp_fu_90690_p1() {
    grp_fu_90690_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90690_p2() {
    grp_fu_90690_p2 =  (sc_lv<4>) (grp_fu_90690_p20.read());
}

void poly1305_hw::thread_grp_fu_90690_p20() {
    grp_fu_90690_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_8_phi_fu_13464_p4.read());
}

void poly1305_hw::thread_grp_fu_90698_p0() {
    grp_fu_90698_p0 =  (sc_lv<8>) (zext_ln96_90_reg_111024.read());
}

void poly1305_hw::thread_grp_fu_90698_p1() {
    grp_fu_90698_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90698_p2() {
    grp_fu_90698_p2 =  (sc_lv<4>) (grp_fu_90698_p20.read());
}

void poly1305_hw::thread_grp_fu_90698_p20() {
    grp_fu_90698_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_9_phi_fu_13474_p4.read());
}

void poly1305_hw::thread_grp_fu_90707_p0() {
    grp_fu_90707_p0 =  (sc_lv<8>) (zext_ln96_91_reg_111066.read());
}

void poly1305_hw::thread_grp_fu_90707_p1() {
    grp_fu_90707_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90707_p2() {
    grp_fu_90707_p2 =  (sc_lv<4>) (grp_fu_90707_p20.read());
}

void poly1305_hw::thread_grp_fu_90707_p20() {
    grp_fu_90707_p20 = esl_zext<12,4>(mulCarry_1_3_10_reg_13481.read());
}

void poly1305_hw::thread_grp_fu_90716_p0() {
    grp_fu_90716_p0 =  (sc_lv<8>) (zext_ln96_92_reg_111109.read());
}

void poly1305_hw::thread_grp_fu_90716_p1() {
    grp_fu_90716_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90716_p2() {
    grp_fu_90716_p2 =  (sc_lv<4>) (grp_fu_90716_p20.read());
}

void poly1305_hw::thread_grp_fu_90716_p20() {
    grp_fu_90716_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_11_phi_fu_13495_p4.read());
}

void poly1305_hw::thread_grp_fu_90724_p0() {
    grp_fu_90724_p0 =  (sc_lv<8>) (zext_ln96_93_reg_111141.read());
}

void poly1305_hw::thread_grp_fu_90724_p1() {
    grp_fu_90724_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90724_p2() {
    grp_fu_90724_p2 =  (sc_lv<4>) (grp_fu_90724_p20.read());
}

void poly1305_hw::thread_grp_fu_90724_p20() {
    grp_fu_90724_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_12_phi_fu_13505_p4.read());
}

void poly1305_hw::thread_grp_fu_90733_p0() {
    grp_fu_90733_p0 =  (sc_lv<8>) (zext_ln96_94_reg_111183.read());
}

void poly1305_hw::thread_grp_fu_90733_p1() {
    grp_fu_90733_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90733_p2() {
    grp_fu_90733_p2 =  (sc_lv<4>) (grp_fu_90733_p20.read());
}

void poly1305_hw::thread_grp_fu_90733_p20() {
    grp_fu_90733_p20 = esl_zext<12,4>(mulCarry_1_3_13_reg_13512.read());
}

void poly1305_hw::thread_grp_fu_90742_p0() {
    grp_fu_90742_p0 =  (sc_lv<8>) (zext_ln96_95_reg_111226.read());
}

void poly1305_hw::thread_grp_fu_90742_p1() {
    grp_fu_90742_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90742_p2() {
    grp_fu_90742_p2 =  (sc_lv<4>) (grp_fu_90742_p20.read());
}

void poly1305_hw::thread_grp_fu_90742_p20() {
    grp_fu_90742_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_14_phi_fu_13526_p4.read());
}

void poly1305_hw::thread_grp_fu_90750_p0() {
    grp_fu_90750_p0 =  (sc_lv<8>) (zext_ln96_96_reg_111258.read());
}

void poly1305_hw::thread_grp_fu_90750_p1() {
    grp_fu_90750_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_90750_p2() {
    grp_fu_90750_p2 =  (sc_lv<4>) (grp_fu_90750_p20.read());
}

void poly1305_hw::thread_grp_fu_90750_p20() {
    grp_fu_90750_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_3_15_phi_fu_13536_p4.read());
}

void poly1305_hw::thread_grp_fu_90759_p0() {
    grp_fu_90759_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_90759_p1() {
    grp_fu_90759_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90759_p2() {
    grp_fu_90759_p2 =  (sc_lv<8>) (grp_fu_90759_p20.read());
}

void poly1305_hw::thread_grp_fu_90759_p20() {
    grp_fu_90759_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_0_phi_fu_13558_p4.read());
}

void poly1305_hw::thread_grp_fu_90768_p0() {
    grp_fu_90768_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_90768_p1() {
    grp_fu_90768_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90768_p2() {
    grp_fu_90768_p2 =  (sc_lv<8>) (grp_fu_90768_p20.read());
}

void poly1305_hw::thread_grp_fu_90768_p20() {
    grp_fu_90768_p20 = esl_zext<16,8>(mulCarry_1_4_1_reg_13565.read());
}

void poly1305_hw::thread_grp_fu_90777_p0() {
    grp_fu_90777_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_90777_p1() {
    grp_fu_90777_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90777_p2() {
    grp_fu_90777_p2 =  (sc_lv<8>) (grp_fu_90777_p20.read());
}

void poly1305_hw::thread_grp_fu_90777_p20() {
    grp_fu_90777_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_2_phi_fu_13579_p4.read());
}

void poly1305_hw::thread_grp_fu_90785_p0() {
    grp_fu_90785_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_90785_p1() {
    grp_fu_90785_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90785_p2() {
    grp_fu_90785_p2 =  (sc_lv<8>) (grp_fu_90785_p20.read());
}

void poly1305_hw::thread_grp_fu_90785_p20() {
    grp_fu_90785_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_3_phi_fu_13589_p4.read());
}

void poly1305_hw::thread_grp_fu_90794_p0() {
    grp_fu_90794_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_90794_p1() {
    grp_fu_90794_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90794_p2() {
    grp_fu_90794_p2 =  (sc_lv<8>) (grp_fu_90794_p20.read());
}

void poly1305_hw::thread_grp_fu_90794_p20() {
    grp_fu_90794_p20 = esl_zext<16,8>(mulCarry_1_4_4_reg_13596.read());
}

void poly1305_hw::thread_grp_fu_90803_p0() {
    grp_fu_90803_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_90803_p1() {
    grp_fu_90803_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90803_p2() {
    grp_fu_90803_p2 =  (sc_lv<8>) (grp_fu_90803_p20.read());
}

void poly1305_hw::thread_grp_fu_90803_p20() {
    grp_fu_90803_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_5_phi_fu_13610_p4.read());
}

void poly1305_hw::thread_grp_fu_90811_p0() {
    grp_fu_90811_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_90811_p1() {
    grp_fu_90811_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90811_p2() {
    grp_fu_90811_p2 =  (sc_lv<8>) (grp_fu_90811_p20.read());
}

void poly1305_hw::thread_grp_fu_90811_p20() {
    grp_fu_90811_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_6_phi_fu_13620_p4.read());
}

void poly1305_hw::thread_grp_fu_90820_p0() {
    grp_fu_90820_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_90820_p1() {
    grp_fu_90820_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90820_p2() {
    grp_fu_90820_p2 =  (sc_lv<8>) (grp_fu_90820_p20.read());
}

void poly1305_hw::thread_grp_fu_90820_p20() {
    grp_fu_90820_p20 = esl_zext<16,8>(mulCarry_1_4_7_reg_13627.read());
}

void poly1305_hw::thread_grp_fu_90829_p0() {
    grp_fu_90829_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_90829_p1() {
    grp_fu_90829_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90829_p2() {
    grp_fu_90829_p2 =  (sc_lv<8>) (grp_fu_90829_p20.read());
}

void poly1305_hw::thread_grp_fu_90829_p20() {
    grp_fu_90829_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_8_phi_fu_13641_p4.read());
}

void poly1305_hw::thread_grp_fu_90837_p0() {
    grp_fu_90837_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_90837_p1() {
    grp_fu_90837_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90837_p2() {
    grp_fu_90837_p2 =  (sc_lv<8>) (grp_fu_90837_p20.read());
}

void poly1305_hw::thread_grp_fu_90837_p20() {
    grp_fu_90837_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_9_phi_fu_13651_p4.read());
}

void poly1305_hw::thread_grp_fu_90846_p0() {
    grp_fu_90846_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_90846_p1() {
    grp_fu_90846_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90846_p2() {
    grp_fu_90846_p2 =  (sc_lv<8>) (grp_fu_90846_p20.read());
}

void poly1305_hw::thread_grp_fu_90846_p20() {
    grp_fu_90846_p20 = esl_zext<16,8>(mulCarry_1_4_10_reg_13658.read());
}

void poly1305_hw::thread_grp_fu_90855_p0() {
    grp_fu_90855_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_90855_p1() {
    grp_fu_90855_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90855_p2() {
    grp_fu_90855_p2 =  (sc_lv<8>) (grp_fu_90855_p20.read());
}

void poly1305_hw::thread_grp_fu_90855_p20() {
    grp_fu_90855_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_11_phi_fu_13672_p4.read());
}

void poly1305_hw::thread_grp_fu_90863_p0() {
    grp_fu_90863_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_90863_p1() {
    grp_fu_90863_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90863_p2() {
    grp_fu_90863_p2 =  (sc_lv<8>) (grp_fu_90863_p20.read());
}

void poly1305_hw::thread_grp_fu_90863_p20() {
    grp_fu_90863_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_12_phi_fu_13682_p4.read());
}

void poly1305_hw::thread_grp_fu_90872_p0() {
    grp_fu_90872_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_90872_p1() {
    grp_fu_90872_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90872_p2() {
    grp_fu_90872_p2 =  (sc_lv<8>) (grp_fu_90872_p20.read());
}

void poly1305_hw::thread_grp_fu_90872_p20() {
    grp_fu_90872_p20 = esl_zext<16,8>(mulCarry_1_4_13_reg_13689.read());
}

void poly1305_hw::thread_grp_fu_90881_p0() {
    grp_fu_90881_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_90881_p1() {
    grp_fu_90881_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90881_p2() {
    grp_fu_90881_p2 =  (sc_lv<8>) (grp_fu_90881_p20.read());
}

void poly1305_hw::thread_grp_fu_90881_p20() {
    grp_fu_90881_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_14_phi_fu_13703_p4.read());
}

void poly1305_hw::thread_grp_fu_90889_p0() {
    grp_fu_90889_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_90889_p1() {
    grp_fu_90889_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_90889_p2() {
    grp_fu_90889_p2 =  (sc_lv<8>) (grp_fu_90889_p20.read());
}

void poly1305_hw::thread_grp_fu_90889_p20() {
    grp_fu_90889_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_4_15_phi_fu_13713_p4.read());
}

void poly1305_hw::thread_grp_fu_90898_p0() {
    grp_fu_90898_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_90898_p1() {
    grp_fu_90898_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90898_p2() {
    grp_fu_90898_p2 =  (sc_lv<8>) (grp_fu_90898_p20.read());
}

void poly1305_hw::thread_grp_fu_90898_p20() {
    grp_fu_90898_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_0_phi_fu_13735_p4.read());
}

void poly1305_hw::thread_grp_fu_90907_p0() {
    grp_fu_90907_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_90907_p1() {
    grp_fu_90907_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90907_p2() {
    grp_fu_90907_p2 =  (sc_lv<8>) (grp_fu_90907_p20.read());
}

void poly1305_hw::thread_grp_fu_90907_p20() {
    grp_fu_90907_p20 = esl_zext<16,8>(mulCarry_1_5_1_reg_13742.read());
}

void poly1305_hw::thread_grp_fu_90916_p0() {
    grp_fu_90916_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_90916_p1() {
    grp_fu_90916_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90916_p2() {
    grp_fu_90916_p2 =  (sc_lv<8>) (grp_fu_90916_p20.read());
}

void poly1305_hw::thread_grp_fu_90916_p20() {
    grp_fu_90916_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_2_phi_fu_13756_p4.read());
}

void poly1305_hw::thread_grp_fu_90924_p0() {
    grp_fu_90924_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_90924_p1() {
    grp_fu_90924_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90924_p2() {
    grp_fu_90924_p2 =  (sc_lv<8>) (grp_fu_90924_p20.read());
}

void poly1305_hw::thread_grp_fu_90924_p20() {
    grp_fu_90924_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_3_phi_fu_13766_p4.read());
}

void poly1305_hw::thread_grp_fu_90933_p0() {
    grp_fu_90933_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_90933_p1() {
    grp_fu_90933_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90933_p2() {
    grp_fu_90933_p2 =  (sc_lv<8>) (grp_fu_90933_p20.read());
}

void poly1305_hw::thread_grp_fu_90933_p20() {
    grp_fu_90933_p20 = esl_zext<16,8>(mulCarry_1_5_4_reg_13773.read());
}

void poly1305_hw::thread_grp_fu_90942_p0() {
    grp_fu_90942_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_90942_p1() {
    grp_fu_90942_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90942_p2() {
    grp_fu_90942_p2 =  (sc_lv<8>) (grp_fu_90942_p20.read());
}

void poly1305_hw::thread_grp_fu_90942_p20() {
    grp_fu_90942_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_5_phi_fu_13787_p4.read());
}

void poly1305_hw::thread_grp_fu_90950_p0() {
    grp_fu_90950_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_90950_p1() {
    grp_fu_90950_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90950_p2() {
    grp_fu_90950_p2 =  (sc_lv<8>) (grp_fu_90950_p20.read());
}

void poly1305_hw::thread_grp_fu_90950_p20() {
    grp_fu_90950_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_6_phi_fu_13797_p4.read());
}

void poly1305_hw::thread_grp_fu_90959_p0() {
    grp_fu_90959_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_90959_p1() {
    grp_fu_90959_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90959_p2() {
    grp_fu_90959_p2 =  (sc_lv<8>) (grp_fu_90959_p20.read());
}

void poly1305_hw::thread_grp_fu_90959_p20() {
    grp_fu_90959_p20 = esl_zext<16,8>(mulCarry_1_5_7_reg_13804.read());
}

void poly1305_hw::thread_grp_fu_90968_p0() {
    grp_fu_90968_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_90968_p1() {
    grp_fu_90968_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90968_p2() {
    grp_fu_90968_p2 =  (sc_lv<8>) (grp_fu_90968_p20.read());
}

void poly1305_hw::thread_grp_fu_90968_p20() {
    grp_fu_90968_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_8_phi_fu_13818_p4.read());
}

void poly1305_hw::thread_grp_fu_90976_p0() {
    grp_fu_90976_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_90976_p1() {
    grp_fu_90976_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90976_p2() {
    grp_fu_90976_p2 =  (sc_lv<8>) (grp_fu_90976_p20.read());
}

void poly1305_hw::thread_grp_fu_90976_p20() {
    grp_fu_90976_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_9_phi_fu_13828_p4.read());
}

void poly1305_hw::thread_grp_fu_90985_p0() {
    grp_fu_90985_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_90985_p1() {
    grp_fu_90985_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90985_p2() {
    grp_fu_90985_p2 =  (sc_lv<8>) (grp_fu_90985_p20.read());
}

void poly1305_hw::thread_grp_fu_90985_p20() {
    grp_fu_90985_p20 = esl_zext<16,8>(mulCarry_1_5_10_reg_13835.read());
}

void poly1305_hw::thread_grp_fu_90994_p0() {
    grp_fu_90994_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_90994_p1() {
    grp_fu_90994_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_90994_p2() {
    grp_fu_90994_p2 =  (sc_lv<8>) (grp_fu_90994_p20.read());
}

void poly1305_hw::thread_grp_fu_90994_p20() {
    grp_fu_90994_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_11_phi_fu_13849_p4.read());
}

void poly1305_hw::thread_grp_fu_91002_p0() {
    grp_fu_91002_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_91002_p1() {
    grp_fu_91002_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_91002_p2() {
    grp_fu_91002_p2 =  (sc_lv<8>) (grp_fu_91002_p20.read());
}

void poly1305_hw::thread_grp_fu_91002_p20() {
    grp_fu_91002_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_12_phi_fu_13859_p4.read());
}

void poly1305_hw::thread_grp_fu_91011_p0() {
    grp_fu_91011_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_91011_p1() {
    grp_fu_91011_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_91011_p2() {
    grp_fu_91011_p2 =  (sc_lv<8>) (grp_fu_91011_p20.read());
}

void poly1305_hw::thread_grp_fu_91011_p20() {
    grp_fu_91011_p20 = esl_zext<16,8>(mulCarry_1_5_13_reg_13866.read());
}

void poly1305_hw::thread_grp_fu_91020_p0() {
    grp_fu_91020_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_91020_p1() {
    grp_fu_91020_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_91020_p2() {
    grp_fu_91020_p2 =  (sc_lv<8>) (grp_fu_91020_p20.read());
}

void poly1305_hw::thread_grp_fu_91020_p20() {
    grp_fu_91020_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_14_phi_fu_13880_p4.read());
}

void poly1305_hw::thread_grp_fu_91028_p0() {
    grp_fu_91028_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_91028_p1() {
    grp_fu_91028_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_91028_p2() {
    grp_fu_91028_p2 =  (sc_lv<8>) (grp_fu_91028_p20.read());
}

void poly1305_hw::thread_grp_fu_91028_p20() {
    grp_fu_91028_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_5_15_phi_fu_13890_p4.read());
}

void poly1305_hw::thread_grp_fu_91037_p0() {
    grp_fu_91037_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_91037_p1() {
    grp_fu_91037_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91037_p2() {
    grp_fu_91037_p2 =  (sc_lv<8>) (grp_fu_91037_p20.read());
}

void poly1305_hw::thread_grp_fu_91037_p20() {
    grp_fu_91037_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_0_phi_fu_13912_p4.read());
}

void poly1305_hw::thread_grp_fu_91046_p0() {
    grp_fu_91046_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_91046_p1() {
    grp_fu_91046_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91046_p2() {
    grp_fu_91046_p2 =  (sc_lv<8>) (grp_fu_91046_p20.read());
}

void poly1305_hw::thread_grp_fu_91046_p20() {
    grp_fu_91046_p20 = esl_zext<16,8>(mulCarry_1_6_1_reg_13919.read());
}

void poly1305_hw::thread_grp_fu_91055_p0() {
    grp_fu_91055_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_91055_p1() {
    grp_fu_91055_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91055_p2() {
    grp_fu_91055_p2 =  (sc_lv<8>) (grp_fu_91055_p20.read());
}

void poly1305_hw::thread_grp_fu_91055_p20() {
    grp_fu_91055_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_2_phi_fu_13933_p4.read());
}

void poly1305_hw::thread_grp_fu_91063_p0() {
    grp_fu_91063_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_91063_p1() {
    grp_fu_91063_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91063_p2() {
    grp_fu_91063_p2 =  (sc_lv<8>) (grp_fu_91063_p20.read());
}

void poly1305_hw::thread_grp_fu_91063_p20() {
    grp_fu_91063_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_3_phi_fu_13943_p4.read());
}

void poly1305_hw::thread_grp_fu_91072_p0() {
    grp_fu_91072_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_91072_p1() {
    grp_fu_91072_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91072_p2() {
    grp_fu_91072_p2 =  (sc_lv<8>) (grp_fu_91072_p20.read());
}

void poly1305_hw::thread_grp_fu_91072_p20() {
    grp_fu_91072_p20 = esl_zext<16,8>(mulCarry_1_6_4_reg_13950.read());
}

void poly1305_hw::thread_grp_fu_91081_p0() {
    grp_fu_91081_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_91081_p1() {
    grp_fu_91081_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91081_p2() {
    grp_fu_91081_p2 =  (sc_lv<8>) (grp_fu_91081_p20.read());
}

void poly1305_hw::thread_grp_fu_91081_p20() {
    grp_fu_91081_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_5_phi_fu_13964_p4.read());
}

void poly1305_hw::thread_grp_fu_91089_p0() {
    grp_fu_91089_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_91089_p1() {
    grp_fu_91089_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91089_p2() {
    grp_fu_91089_p2 =  (sc_lv<8>) (grp_fu_91089_p20.read());
}

void poly1305_hw::thread_grp_fu_91089_p20() {
    grp_fu_91089_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_6_phi_fu_13974_p4.read());
}

void poly1305_hw::thread_grp_fu_91098_p0() {
    grp_fu_91098_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_91098_p1() {
    grp_fu_91098_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91098_p2() {
    grp_fu_91098_p2 =  (sc_lv<8>) (grp_fu_91098_p20.read());
}

void poly1305_hw::thread_grp_fu_91098_p20() {
    grp_fu_91098_p20 = esl_zext<16,8>(mulCarry_1_6_7_reg_13981.read());
}

void poly1305_hw::thread_grp_fu_91107_p0() {
    grp_fu_91107_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_91107_p1() {
    grp_fu_91107_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91107_p2() {
    grp_fu_91107_p2 =  (sc_lv<8>) (grp_fu_91107_p20.read());
}

void poly1305_hw::thread_grp_fu_91107_p20() {
    grp_fu_91107_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_8_phi_fu_13995_p4.read());
}

void poly1305_hw::thread_grp_fu_91115_p0() {
    grp_fu_91115_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_91115_p1() {
    grp_fu_91115_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91115_p2() {
    grp_fu_91115_p2 =  (sc_lv<8>) (grp_fu_91115_p20.read());
}

void poly1305_hw::thread_grp_fu_91115_p20() {
    grp_fu_91115_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_9_phi_fu_14005_p4.read());
}

void poly1305_hw::thread_grp_fu_91124_p0() {
    grp_fu_91124_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_91124_p1() {
    grp_fu_91124_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91124_p2() {
    grp_fu_91124_p2 =  (sc_lv<8>) (grp_fu_91124_p20.read());
}

void poly1305_hw::thread_grp_fu_91124_p20() {
    grp_fu_91124_p20 = esl_zext<16,8>(mulCarry_1_6_10_reg_14012.read());
}

void poly1305_hw::thread_grp_fu_91133_p0() {
    grp_fu_91133_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_91133_p1() {
    grp_fu_91133_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91133_p2() {
    grp_fu_91133_p2 =  (sc_lv<8>) (grp_fu_91133_p20.read());
}

void poly1305_hw::thread_grp_fu_91133_p20() {
    grp_fu_91133_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_11_phi_fu_14026_p4.read());
}

void poly1305_hw::thread_grp_fu_91141_p0() {
    grp_fu_91141_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_91141_p1() {
    grp_fu_91141_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91141_p2() {
    grp_fu_91141_p2 =  (sc_lv<8>) (grp_fu_91141_p20.read());
}

void poly1305_hw::thread_grp_fu_91141_p20() {
    grp_fu_91141_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_12_phi_fu_14036_p4.read());
}

void poly1305_hw::thread_grp_fu_91150_p0() {
    grp_fu_91150_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_91150_p1() {
    grp_fu_91150_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91150_p2() {
    grp_fu_91150_p2 =  (sc_lv<8>) (grp_fu_91150_p20.read());
}

void poly1305_hw::thread_grp_fu_91150_p20() {
    grp_fu_91150_p20 = esl_zext<16,8>(mulCarry_1_6_13_reg_14043.read());
}

void poly1305_hw::thread_grp_fu_91159_p0() {
    grp_fu_91159_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_91159_p1() {
    grp_fu_91159_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91159_p2() {
    grp_fu_91159_p2 =  (sc_lv<8>) (grp_fu_91159_p20.read());
}

void poly1305_hw::thread_grp_fu_91159_p20() {
    grp_fu_91159_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_14_phi_fu_14057_p4.read());
}

void poly1305_hw::thread_grp_fu_91167_p0() {
    grp_fu_91167_p0 =  (sc_lv<8>) (zext_ln96_45_reg_111243.read());
}

void poly1305_hw::thread_grp_fu_91167_p1() {
    grp_fu_91167_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_91167_p2() {
    grp_fu_91167_p2 =  (sc_lv<8>) (grp_fu_91167_p20.read());
}

void poly1305_hw::thread_grp_fu_91167_p20() {
    grp_fu_91167_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_6_15_phi_fu_14067_p4.read());
}

void poly1305_hw::thread_grp_fu_91176_p0() {
    grp_fu_91176_p0 =  (sc_lv<8>) (zext_ln96_81_reg_110673.read());
}

void poly1305_hw::thread_grp_fu_91176_p1() {
    grp_fu_91176_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91176_p2() {
    grp_fu_91176_p2 =  (sc_lv<4>) (grp_fu_91176_p20.read());
}

void poly1305_hw::thread_grp_fu_91176_p20() {
    grp_fu_91176_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_0_phi_fu_14089_p4.read());
}

void poly1305_hw::thread_grp_fu_91185_p0() {
    grp_fu_91185_p0 =  (sc_lv<8>) (zext_ln96_82_reg_110715.read());
}

void poly1305_hw::thread_grp_fu_91185_p1() {
    grp_fu_91185_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91185_p2() {
    grp_fu_91185_p2 =  (sc_lv<4>) (grp_fu_91185_p20.read());
}

void poly1305_hw::thread_grp_fu_91185_p20() {
    grp_fu_91185_p20 = esl_zext<12,4>(mulCarry_1_7_1_reg_14096.read());
}

void poly1305_hw::thread_grp_fu_91194_p0() {
    grp_fu_91194_p0 =  (sc_lv<8>) (zext_ln96_83_reg_110758.read());
}

void poly1305_hw::thread_grp_fu_91194_p1() {
    grp_fu_91194_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91194_p2() {
    grp_fu_91194_p2 =  (sc_lv<4>) (grp_fu_91194_p20.read());
}

void poly1305_hw::thread_grp_fu_91194_p20() {
    grp_fu_91194_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_2_phi_fu_14110_p4.read());
}

void poly1305_hw::thread_grp_fu_91202_p0() {
    grp_fu_91202_p0 =  (sc_lv<8>) (zext_ln96_84_reg_110790.read());
}

void poly1305_hw::thread_grp_fu_91202_p1() {
    grp_fu_91202_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91202_p2() {
    grp_fu_91202_p2 =  (sc_lv<4>) (grp_fu_91202_p20.read());
}

void poly1305_hw::thread_grp_fu_91202_p20() {
    grp_fu_91202_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_3_phi_fu_14120_p4.read());
}

void poly1305_hw::thread_grp_fu_91211_p0() {
    grp_fu_91211_p0 =  (sc_lv<8>) (zext_ln96_85_reg_110832.read());
}

void poly1305_hw::thread_grp_fu_91211_p1() {
    grp_fu_91211_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91211_p2() {
    grp_fu_91211_p2 =  (sc_lv<4>) (grp_fu_91211_p20.read());
}

void poly1305_hw::thread_grp_fu_91211_p20() {
    grp_fu_91211_p20 = esl_zext<12,4>(mulCarry_1_7_4_reg_14127.read());
}

void poly1305_hw::thread_grp_fu_91220_p0() {
    grp_fu_91220_p0 =  (sc_lv<8>) (zext_ln96_86_reg_110875.read());
}

void poly1305_hw::thread_grp_fu_91220_p1() {
    grp_fu_91220_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91220_p2() {
    grp_fu_91220_p2 =  (sc_lv<4>) (grp_fu_91220_p20.read());
}

void poly1305_hw::thread_grp_fu_91220_p20() {
    grp_fu_91220_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_5_phi_fu_14141_p4.read());
}

void poly1305_hw::thread_grp_fu_91228_p0() {
    grp_fu_91228_p0 =  (sc_lv<8>) (zext_ln96_87_reg_110907.read());
}

void poly1305_hw::thread_grp_fu_91228_p1() {
    grp_fu_91228_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91228_p2() {
    grp_fu_91228_p2 =  (sc_lv<4>) (grp_fu_91228_p20.read());
}

void poly1305_hw::thread_grp_fu_91228_p20() {
    grp_fu_91228_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_6_phi_fu_14151_p4.read());
}

void poly1305_hw::thread_grp_fu_91237_p0() {
    grp_fu_91237_p0 =  (sc_lv<8>) (zext_ln96_88_reg_110949.read());
}

void poly1305_hw::thread_grp_fu_91237_p1() {
    grp_fu_91237_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91237_p2() {
    grp_fu_91237_p2 =  (sc_lv<4>) (grp_fu_91237_p20.read());
}

void poly1305_hw::thread_grp_fu_91237_p20() {
    grp_fu_91237_p20 = esl_zext<12,4>(mulCarry_1_7_7_reg_14158.read());
}

void poly1305_hw::thread_grp_fu_91246_p0() {
    grp_fu_91246_p0 =  (sc_lv<8>) (zext_ln96_89_reg_110992.read());
}

void poly1305_hw::thread_grp_fu_91246_p1() {
    grp_fu_91246_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91246_p2() {
    grp_fu_91246_p2 =  (sc_lv<4>) (grp_fu_91246_p20.read());
}

void poly1305_hw::thread_grp_fu_91246_p20() {
    grp_fu_91246_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_8_phi_fu_14172_p4.read());
}

void poly1305_hw::thread_grp_fu_91254_p0() {
    grp_fu_91254_p0 =  (sc_lv<8>) (zext_ln96_90_reg_111024.read());
}

void poly1305_hw::thread_grp_fu_91254_p1() {
    grp_fu_91254_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91254_p2() {
    grp_fu_91254_p2 =  (sc_lv<4>) (grp_fu_91254_p20.read());
}

void poly1305_hw::thread_grp_fu_91254_p20() {
    grp_fu_91254_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_9_phi_fu_14182_p4.read());
}

void poly1305_hw::thread_grp_fu_91263_p0() {
    grp_fu_91263_p0 =  (sc_lv<8>) (zext_ln96_91_reg_111066.read());
}

void poly1305_hw::thread_grp_fu_91263_p1() {
    grp_fu_91263_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91263_p2() {
    grp_fu_91263_p2 =  (sc_lv<4>) (grp_fu_91263_p20.read());
}

void poly1305_hw::thread_grp_fu_91263_p20() {
    grp_fu_91263_p20 = esl_zext<12,4>(mulCarry_1_7_10_reg_14189.read());
}

void poly1305_hw::thread_grp_fu_91272_p0() {
    grp_fu_91272_p0 =  (sc_lv<8>) (zext_ln96_92_reg_111109.read());
}

void poly1305_hw::thread_grp_fu_91272_p1() {
    grp_fu_91272_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91272_p2() {
    grp_fu_91272_p2 =  (sc_lv<4>) (grp_fu_91272_p20.read());
}

void poly1305_hw::thread_grp_fu_91272_p20() {
    grp_fu_91272_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_11_phi_fu_14203_p4.read());
}

void poly1305_hw::thread_grp_fu_91280_p0() {
    grp_fu_91280_p0 =  (sc_lv<8>) (zext_ln96_93_reg_111141.read());
}

void poly1305_hw::thread_grp_fu_91280_p1() {
    grp_fu_91280_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91280_p2() {
    grp_fu_91280_p2 =  (sc_lv<4>) (grp_fu_91280_p20.read());
}

void poly1305_hw::thread_grp_fu_91280_p20() {
    grp_fu_91280_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_12_phi_fu_14213_p4.read());
}

void poly1305_hw::thread_grp_fu_91289_p0() {
    grp_fu_91289_p0 =  (sc_lv<8>) (zext_ln96_94_reg_111183.read());
}

void poly1305_hw::thread_grp_fu_91289_p1() {
    grp_fu_91289_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91289_p2() {
    grp_fu_91289_p2 =  (sc_lv<4>) (grp_fu_91289_p20.read());
}

void poly1305_hw::thread_grp_fu_91289_p20() {
    grp_fu_91289_p20 = esl_zext<12,4>(mulCarry_1_7_13_reg_14220.read());
}

void poly1305_hw::thread_grp_fu_91298_p0() {
    grp_fu_91298_p0 =  (sc_lv<8>) (zext_ln96_95_reg_111226.read());
}

void poly1305_hw::thread_grp_fu_91298_p1() {
    grp_fu_91298_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91298_p2() {
    grp_fu_91298_p2 =  (sc_lv<4>) (grp_fu_91298_p20.read());
}

void poly1305_hw::thread_grp_fu_91298_p20() {
    grp_fu_91298_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_14_phi_fu_14234_p4.read());
}

void poly1305_hw::thread_grp_fu_91306_p0() {
    grp_fu_91306_p0 =  (sc_lv<8>) (zext_ln96_96_reg_111258.read());
}

void poly1305_hw::thread_grp_fu_91306_p1() {
    grp_fu_91306_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_91306_p2() {
    grp_fu_91306_p2 =  (sc_lv<4>) (grp_fu_91306_p20.read());
}

void poly1305_hw::thread_grp_fu_91306_p20() {
    grp_fu_91306_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry_1_7_15_phi_fu_14244_p4.read());
}

void poly1305_hw::thread_grp_fu_91315_p0() {
    grp_fu_91315_p0 =  (sc_lv<8>) (zext_ln96_2_reg_110658.read());
}

void poly1305_hw::thread_grp_fu_91315_p1() {
    grp_fu_91315_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91315_p2() {
    grp_fu_91315_p2 =  (sc_lv<8>) (grp_fu_91315_p20.read());
}

void poly1305_hw::thread_grp_fu_91315_p20() {
    grp_fu_91315_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_0_phi_fu_14266_p4.read());
}

void poly1305_hw::thread_grp_fu_91324_p0() {
    grp_fu_91324_p0 =  (sc_lv<8>) (zext_ln96_17_reg_110700.read());
}

void poly1305_hw::thread_grp_fu_91324_p1() {
    grp_fu_91324_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91324_p2() {
    grp_fu_91324_p2 =  (sc_lv<8>) (grp_fu_91324_p20.read());
}

void poly1305_hw::thread_grp_fu_91324_p20() {
    grp_fu_91324_p20 = esl_zext<16,8>(mulCarry_1_8_1_reg_14273.read());
}

void poly1305_hw::thread_grp_fu_91333_p0() {
    grp_fu_91333_p0 =  (sc_lv<8>) (zext_ln96_19_reg_110732.read());
}

void poly1305_hw::thread_grp_fu_91333_p1() {
    grp_fu_91333_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91333_p2() {
    grp_fu_91333_p2 =  (sc_lv<8>) (grp_fu_91333_p20.read());
}

void poly1305_hw::thread_grp_fu_91333_p20() {
    grp_fu_91333_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_2_phi_fu_14287_p4.read());
}

void poly1305_hw::thread_grp_fu_91341_p0() {
    grp_fu_91341_p0 =  (sc_lv<8>) (zext_ln96_21_reg_110775.read());
}

void poly1305_hw::thread_grp_fu_91341_p1() {
    grp_fu_91341_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91341_p2() {
    grp_fu_91341_p2 =  (sc_lv<8>) (grp_fu_91341_p20.read());
}

void poly1305_hw::thread_grp_fu_91341_p20() {
    grp_fu_91341_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_3_phi_fu_14297_p4.read());
}

void poly1305_hw::thread_grp_fu_91350_p0() {
    grp_fu_91350_p0 =  (sc_lv<8>) (zext_ln96_23_reg_110817.read());
}

void poly1305_hw::thread_grp_fu_91350_p1() {
    grp_fu_91350_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91350_p2() {
    grp_fu_91350_p2 =  (sc_lv<8>) (grp_fu_91350_p20.read());
}

void poly1305_hw::thread_grp_fu_91350_p20() {
    grp_fu_91350_p20 = esl_zext<16,8>(mulCarry_1_8_4_reg_14304.read());
}

void poly1305_hw::thread_grp_fu_91359_p0() {
    grp_fu_91359_p0 =  (sc_lv<8>) (zext_ln96_25_reg_110849.read());
}

void poly1305_hw::thread_grp_fu_91359_p1() {
    grp_fu_91359_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91359_p2() {
    grp_fu_91359_p2 =  (sc_lv<8>) (grp_fu_91359_p20.read());
}

void poly1305_hw::thread_grp_fu_91359_p20() {
    grp_fu_91359_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_5_phi_fu_14318_p4.read());
}

void poly1305_hw::thread_grp_fu_91367_p0() {
    grp_fu_91367_p0 =  (sc_lv<8>) (zext_ln96_27_reg_110892.read());
}

void poly1305_hw::thread_grp_fu_91367_p1() {
    grp_fu_91367_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91367_p2() {
    grp_fu_91367_p2 =  (sc_lv<8>) (grp_fu_91367_p20.read());
}

void poly1305_hw::thread_grp_fu_91367_p20() {
    grp_fu_91367_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_6_phi_fu_14328_p4.read());
}

void poly1305_hw::thread_grp_fu_91376_p0() {
    grp_fu_91376_p0 =  (sc_lv<8>) (zext_ln96_29_reg_110934.read());
}

void poly1305_hw::thread_grp_fu_91376_p1() {
    grp_fu_91376_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91376_p2() {
    grp_fu_91376_p2 =  (sc_lv<8>) (grp_fu_91376_p20.read());
}

void poly1305_hw::thread_grp_fu_91376_p20() {
    grp_fu_91376_p20 = esl_zext<16,8>(mulCarry_1_8_7_reg_14335.read());
}

void poly1305_hw::thread_grp_fu_91385_p0() {
    grp_fu_91385_p0 =  (sc_lv<8>) (zext_ln96_31_reg_110966.read());
}

void poly1305_hw::thread_grp_fu_91385_p1() {
    grp_fu_91385_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91385_p2() {
    grp_fu_91385_p2 =  (sc_lv<8>) (grp_fu_91385_p20.read());
}

void poly1305_hw::thread_grp_fu_91385_p20() {
    grp_fu_91385_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_8_phi_fu_14349_p4.read());
}

void poly1305_hw::thread_grp_fu_91393_p0() {
    grp_fu_91393_p0 =  (sc_lv<8>) (zext_ln96_33_reg_111009.read());
}

void poly1305_hw::thread_grp_fu_91393_p1() {
    grp_fu_91393_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91393_p2() {
    grp_fu_91393_p2 =  (sc_lv<8>) (grp_fu_91393_p20.read());
}

void poly1305_hw::thread_grp_fu_91393_p20() {
    grp_fu_91393_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_9_phi_fu_14359_p4.read());
}

void poly1305_hw::thread_grp_fu_91402_p0() {
    grp_fu_91402_p0 =  (sc_lv<8>) (zext_ln96_35_reg_111051.read());
}

void poly1305_hw::thread_grp_fu_91402_p1() {
    grp_fu_91402_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91402_p2() {
    grp_fu_91402_p2 =  (sc_lv<8>) (grp_fu_91402_p20.read());
}

void poly1305_hw::thread_grp_fu_91402_p20() {
    grp_fu_91402_p20 = esl_zext<16,8>(mulCarry_1_8_10_reg_14366.read());
}

void poly1305_hw::thread_grp_fu_91411_p0() {
    grp_fu_91411_p0 =  (sc_lv<8>) (zext_ln96_37_reg_111083.read());
}

void poly1305_hw::thread_grp_fu_91411_p1() {
    grp_fu_91411_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91411_p2() {
    grp_fu_91411_p2 =  (sc_lv<8>) (grp_fu_91411_p20.read());
}

void poly1305_hw::thread_grp_fu_91411_p20() {
    grp_fu_91411_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_11_phi_fu_14380_p4.read());
}

void poly1305_hw::thread_grp_fu_91419_p0() {
    grp_fu_91419_p0 =  (sc_lv<8>) (zext_ln96_39_reg_111126.read());
}

void poly1305_hw::thread_grp_fu_91419_p1() {
    grp_fu_91419_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91419_p2() {
    grp_fu_91419_p2 =  (sc_lv<8>) (grp_fu_91419_p20.read());
}

void poly1305_hw::thread_grp_fu_91419_p20() {
    grp_fu_91419_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_12_phi_fu_14390_p4.read());
}

void poly1305_hw::thread_grp_fu_91428_p0() {
    grp_fu_91428_p0 =  (sc_lv<8>) (zext_ln96_41_reg_111168.read());
}

void poly1305_hw::thread_grp_fu_91428_p1() {
    grp_fu_91428_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91428_p2() {
    grp_fu_91428_p2 =  (sc_lv<8>) (grp_fu_91428_p20.read());
}

void poly1305_hw::thread_grp_fu_91428_p20() {
    grp_fu_91428_p20 = esl_zext<16,8>(mulCarry_1_8_13_reg_14397.read());
}

void poly1305_hw::thread_grp_fu_91437_p0() {
    grp_fu_91437_p0 =  (sc_lv<8>) (zext_ln96_43_reg_111200.read());
}

void poly1305_hw::thread_grp_fu_91437_p1() {
    grp_fu_91437_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_91437_p2() {
    grp_fu_91437_p2 =  (sc_lv<8>) (grp_fu_91437_p20.read());
}

void poly1305_hw::thread_grp_fu_91437_p20() {
    grp_fu_91437_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry_1_8_14_phi_fu_14411_p4.read());
}

}

