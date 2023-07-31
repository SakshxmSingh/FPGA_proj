#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_zext_ln766_1_fu_5138_p1() {
    zext_ln766_1_fu_5138_p1 = esl_zext<64,32>(sext_ln766_fu_5134_p1.read());
}

void poly1305_hw::thread_zext_ln766_fu_5408_p1() {
    zext_ln766_fu_5408_p1 = esl_zext<32,8>(select_ln757_reg_8160.read());
}

void poly1305_hw::thread_zext_ln772_fu_5418_p1() {
    zext_ln772_fu_5418_p1 = esl_zext<7,6>(i113_0_reg_2337.read());
}

void poly1305_hw::thread_zext_ln773_fu_5433_p1() {
    zext_ln773_fu_5433_p1 = esl_zext<64,6>(i113_0_reg_2337.read());
}

void poly1305_hw::thread_zext_ln778_fu_5445_p1() {
    zext_ln778_fu_5445_p1 = esl_zext<64,6>(i_59_reg_8173.read());
}

void poly1305_hw::thread_zext_ln786_fu_5519_p1() {
    zext_ln786_fu_5519_p1 = esl_zext<64,6>(i114_0_reg_2377.read());
}

void poly1305_hw::thread_zext_ln788_fu_5539_p1() {
    zext_ln788_fu_5539_p1 = esl_zext<64,6>(i_60_reg_8259.read());
}

void poly1305_hw::thread_zext_ln78_fu_5840_p1() {
    zext_ln78_fu_5840_p1 = esl_zext<64,6>(k_0_reg_2539.read());
}

void poly1305_hw::thread_zext_ln796_fu_5568_p1() {
    zext_ln796_fu_5568_p1 = esl_zext<64,32>(sext_ln795_fu_5550_p1.read());
}

void poly1305_hw::thread_zext_ln809_fu_5591_p1() {
    zext_ln809_fu_5591_p1 = esl_zext<7,6>(sub_ln809_fu_5585_p2.read());
}

void poly1305_hw::thread_zext_ln817_1_fu_5633_p1() {
    zext_ln817_1_fu_5633_p1 = esl_zext<32,8>(sext_ln817_fu_5629_p1.read());
}

void poly1305_hw::thread_zext_ln817_fu_5623_p1() {
    zext_ln817_fu_5623_p1 = esl_zext<64,32>(sext_ln816_fu_5613_p1.read());
}

void poly1305_hw::thread_zext_ln82_fu_5845_p1() {
    zext_ln82_fu_5845_p1 = esl_zext<6,5>(i6_0_reg_2550.read());
}

void poly1305_hw::thread_zext_ln839_fu_5667_p1() {
    zext_ln839_fu_5667_p1 = esl_zext<64,5>(i118_0_reg_2470.read());
}

void poly1305_hw::thread_zext_ln84_fu_6073_p1() {
    zext_ln84_fu_6073_p1 = esl_zext<8,2>(addCarry_5_reg_2623.read());
}

void poly1305_hw::thread_zext_ln851_fu_6943_p1() {
    zext_ln851_fu_6943_p1 = esl_zext<8,2>(addCarry119_0_reg_3038.read());
}

void poly1305_hw::thread_zext_ln852_1_fu_6881_p1() {
    zext_ln852_1_fu_6881_p1 = esl_zext<9,8>(s_q0.read());
}

void poly1305_hw::thread_zext_ln852_2_fu_6885_p1() {
    zext_ln852_2_fu_6885_p1 = esl_zext<9,8>(acc_q0.read());
}

void poly1305_hw::thread_zext_ln852_3_fu_6889_p1() {
    zext_ln852_3_fu_6889_p1 = esl_zext<10,2>(addCarry119_0_reg_3038.read());
}

void poly1305_hw::thread_zext_ln852_4_fu_6899_p1() {
    zext_ln852_4_fu_6899_p1 = esl_zext<10,9>(add_ln852_fu_6893_p2.read());
}

void poly1305_hw::thread_zext_ln852_fu_6875_p1() {
    zext_ln852_fu_6875_p1 = esl_zext<64,5>(j120_0_reg_3050.read());
}

void poly1305_hw::thread_zext_ln85_3_fu_5861_p1() {
    zext_ln85_3_fu_5861_p1 = esl_zext<64,5>(i6_0_reg_2550.read());
}

void poly1305_hw::thread_zext_ln85_4_fu_5898_p1() {
    zext_ln85_4_fu_5898_p1 = esl_zext<64,5>(j7_0_reg_2598.read());
}

void poly1305_hw::thread_zext_ln85_fu_5866_p1() {
    zext_ln85_fu_5866_p1 = esl_zext<16,8>(r_q1.read());
}

void poly1305_hw::thread_zext_ln870_fu_6972_p1() {
    zext_ln870_fu_6972_p1 = esl_zext<64,5>(i122_0_reg_3061.read());
}

void poly1305_hw::thread_zext_ln94_fu_5881_p1() {
    zext_ln94_fu_5881_p1 = esl_zext<64,6>(add_ln94_fu_5876_p2.read());
}

void poly1305_hw::thread_zext_ln98_1_fu_5969_p1() {
    zext_ln98_1_fu_5969_p1 = esl_zext<64,5>(add_ln98_fu_5963_p2.read());
}

void poly1305_hw::thread_zext_ln98_2_fu_5977_p1() {
    zext_ln98_2_fu_5977_p1 = esl_zext<9,8>(mul_q1.read());
}

void poly1305_hw::thread_zext_ln98_3_fu_5981_p1() {
    zext_ln98_3_fu_5981_p1 = esl_zext<9,8>(addCarry_3_reg_2586.read());
}

void poly1305_hw::thread_zext_ln98_4_fu_5991_p1() {
    zext_ln98_4_fu_5991_p1 = esl_zext<10,9>(add_ln98_1_fu_5985_p2.read());
}

void poly1305_hw::thread_zext_ln98_fu_5974_p1() {
    zext_ln98_fu_5974_p1 = esl_zext<10,8>(trunc_ln85_reg_8468.read());
}

void poly1305_hw::thread_zext_ln99_fu_6035_p1() {
    zext_ln99_fu_6035_p1 = esl_zext<8,2>(select_ln99_fu_6027_p3.read());
}

}

