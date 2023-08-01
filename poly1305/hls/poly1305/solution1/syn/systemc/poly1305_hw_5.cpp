#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_add_ln231_1_fu_85156_p2() {
    add_ln231_1_fu_85156_p2 = (!trunc_ln230_2_fu_85146_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_2_fu_85146_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_2_fu_85306_p2() {
    add_ln231_2_fu_85306_p2 = (!trunc_ln230_3_fu_85297_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_3_fu_85297_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_3_fu_85418_p2() {
    add_ln231_3_fu_85418_p2 = (!trunc_ln230_4_fu_85414_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_4_fu_85414_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_4_fu_85579_p2() {
    add_ln231_4_fu_85579_p2 = (!trunc_ln230_5_fu_85570_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_5_fu_85570_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_5_fu_85729_p2() {
    add_ln231_5_fu_85729_p2 = (!trunc_ln230_6_fu_85720_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_6_fu_85720_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_6_fu_85841_p2() {
    add_ln231_6_fu_85841_p2 = (!trunc_ln230_7_fu_85837_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_7_fu_85837_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_7_fu_86002_p2() {
    add_ln231_7_fu_86002_p2 = (!trunc_ln230_8_fu_85993_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_8_fu_85993_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_8_fu_86156_p2() {
    add_ln231_8_fu_86156_p2 = (!trunc_ln230_9_fu_86147_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_9_fu_86147_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_9_fu_86268_p2() {
    add_ln231_9_fu_86268_p2 = (!trunc_ln230_10_fu_86264_p1.read().is_01() || !trunc_ln230_1_reg_117724.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_10_fu_86264_p1.read()) + sc_biguint<8>(trunc_ln230_1_reg_117724.read()));
}

void poly1305_hw::thread_add_ln231_fu_84989_p2() {
    add_ln231_fu_84989_p2 = (!trunc_ln230_1_fu_84985_p1.read().is_01() || !trunc_ln230_fu_84981_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln230_1_fu_84985_p1.read()) + sc_biguint<8>(trunc_ln230_fu_84981_p1.read()));
}

void poly1305_hw::thread_add_ln239_fu_87163_p2() {
    add_ln239_fu_87163_p2 = (!zext_ln226_reg_117627.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln226_reg_117627.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void poly1305_hw::thread_add_ln243_10_fu_85643_p2() {
    add_ln243_10_fu_85643_p2 = (!ap_const_lv7_A.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_A) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_11_fu_85653_p2() {
    add_ln243_11_fu_85653_p2 = (!ap_const_lv7_B.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_12_fu_85854_p2() {
    add_ln243_12_fu_85854_p2 = (!ap_const_lv7_C.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_C) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_13_fu_85864_p2() {
    add_ln243_13_fu_85864_p2 = (!ap_const_lv7_D.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_D) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_14_fu_86066_p2() {
    add_ln243_14_fu_86066_p2 = (!ap_const_lv7_E.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_E) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_15_fu_86076_p2() {
    add_ln243_15_fu_86076_p2 = (!ap_const_lv7_F.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_F) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_16_fu_86281_p2() {
    add_ln243_16_fu_86281_p2 = (!ap_const_lv7_10.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_10) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_17_fu_85091_p2() {
    add_ln243_17_fu_85091_p2 = (!zext_ln243_7_fu_85084_p1.read().is_01() || !zext_ln243_5_fu_85081_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_7_fu_85084_p1.read()) + sc_biguint<9>(zext_ln243_5_fu_85081_p1.read()));
}

void poly1305_hw::thread_add_ln243_18_fu_85101_p2() {
    add_ln243_18_fu_85101_p2 = (!reg_21695.read().is_01() || !zext_ln243_8_fu_85097_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21695.read()) + sc_biguint<32>(zext_ln243_8_fu_85097_p1.read()));
}

void poly1305_hw::thread_add_ln243_19_fu_85201_p2() {
    add_ln243_19_fu_85201_p2 = (!zext_ln243_12_fu_85191_p1.read().is_01() || !zext_ln243_10_fu_85187_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_12_fu_85191_p1.read()) + sc_biguint<9>(zext_ln243_10_fu_85187_p1.read()));
}

void poly1305_hw::thread_add_ln243_1_fu_84919_p2() {
    add_ln243_1_fu_84919_p2 = (!reg_21690.read().is_01() || !zext_ln243_3_fu_84915_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21690.read()) + sc_biguint<32>(zext_ln243_3_fu_84915_p1.read()));
}

void poly1305_hw::thread_add_ln243_20_fu_85257_p2() {
    add_ln243_20_fu_85257_p2 = (!reg_21690.read().is_01() || !zext_ln243_13_fu_85254_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21690.read()) + sc_biguint<32>(zext_ln243_13_fu_85254_p1.read()));
}

void poly1305_hw::thread_add_ln243_21_fu_85359_p2() {
    add_ln243_21_fu_85359_p2 = (!zext_ln243_17_fu_85349_p1.read().is_01() || !zext_ln243_15_fu_85345_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_17_fu_85349_p1.read()) + sc_biguint<9>(zext_ln243_15_fu_85345_p1.read()));
}

void poly1305_hw::thread_add_ln243_22_fu_85369_p2() {
    add_ln243_22_fu_85369_p2 = (!reg_21699.read().is_01() || !zext_ln243_18_fu_85365_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21699.read()) + sc_biguint<32>(zext_ln243_18_fu_85365_p1.read()));
}

void poly1305_hw::thread_add_ln243_23_fu_85515_p2() {
    add_ln243_23_fu_85515_p2 = (!zext_ln243_34_fu_85508_p1.read().is_01() || !zext_ln243_33_fu_85505_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_34_fu_85508_p1.read()) + sc_biguint<9>(zext_ln243_33_fu_85505_p1.read()));
}

void poly1305_hw::thread_add_ln243_24_fu_85525_p2() {
    add_ln243_24_fu_85525_p2 = (!reg_21695.read().is_01() || !zext_ln243_35_fu_85521_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21695.read()) + sc_biguint<32>(zext_ln243_35_fu_85521_p1.read()));
}

void poly1305_hw::thread_add_ln243_25_fu_85624_p2() {
    add_ln243_25_fu_85624_p2 = (!zext_ln243_38_fu_85614_p1.read().is_01() || !zext_ln243_37_fu_85610_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_38_fu_85614_p1.read()) + sc_biguint<9>(zext_ln243_37_fu_85610_p1.read()));
}

void poly1305_hw::thread_add_ln243_26_fu_85680_p2() {
    add_ln243_26_fu_85680_p2 = (!reg_21704.read().is_01() || !zext_ln243_39_fu_85677_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21704.read()) + sc_biguint<32>(zext_ln243_39_fu_85677_p1.read()));
}

void poly1305_hw::thread_add_ln243_27_fu_85782_p2() {
    add_ln243_27_fu_85782_p2 = (!zext_ln243_42_fu_85772_p1.read().is_01() || !zext_ln243_41_fu_85768_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_42_fu_85772_p1.read()) + sc_biguint<9>(zext_ln243_41_fu_85768_p1.read()));
}

void poly1305_hw::thread_add_ln243_28_fu_85792_p2() {
    add_ln243_28_fu_85792_p2 = (!reg_21690.read().is_01() || !zext_ln243_43_fu_85788_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21690.read()) + sc_biguint<32>(zext_ln243_43_fu_85788_p1.read()));
}

void poly1305_hw::thread_add_ln243_29_fu_85938_p2() {
    add_ln243_29_fu_85938_p2 = (!zext_ln243_46_fu_85931_p1.read().is_01() || !zext_ln243_45_fu_85928_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_46_fu_85931_p1.read()) + sc_biguint<9>(zext_ln243_45_fu_85928_p1.read()));
}

void poly1305_hw::thread_add_ln243_2_fu_84828_p2() {
    add_ln243_2_fu_84828_p2 = (!ap_const_lv7_2.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_2) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_30_fu_85948_p2() {
    add_ln243_30_fu_85948_p2 = (!reg_21699.read().is_01() || !zext_ln243_47_fu_85944_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21699.read()) + sc_biguint<32>(zext_ln243_47_fu_85944_p1.read()));
}

void poly1305_hw::thread_add_ln243_31_fu_86047_p2() {
    add_ln243_31_fu_86047_p2 = (!zext_ln243_50_fu_86037_p1.read().is_01() || !zext_ln243_49_fu_86033_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_50_fu_86037_p1.read()) + sc_biguint<9>(zext_ln243_49_fu_86033_p1.read()));
}

void poly1305_hw::thread_add_ln243_32_fu_86107_p2() {
    add_ln243_32_fu_86107_p2 = (!reg_21695.read().is_01() || !zext_ln243_51_fu_86104_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21695.read()) + sc_biguint<32>(zext_ln243_51_fu_86104_p1.read()));
}

void poly1305_hw::thread_add_ln243_33_fu_86209_p2() {
    add_ln243_33_fu_86209_p2 = (!zext_ln243_54_fu_86199_p1.read().is_01() || !zext_ln243_53_fu_86195_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_54_fu_86199_p1.read()) + sc_biguint<9>(zext_ln243_53_fu_86195_p1.read()));
}

void poly1305_hw::thread_add_ln243_34_fu_86219_p2() {
    add_ln243_34_fu_86219_p2 = (!reg_21708.read().is_01() || !zext_ln243_55_fu_86215_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21708.read()) + sc_biguint<32>(zext_ln243_55_fu_86215_p1.read()));
}

void poly1305_hw::thread_add_ln243_35_fu_86363_p2() {
    add_ln243_35_fu_86363_p2 = (!zext_ln243_58_fu_86356_p1.read().is_01() || !zext_ln243_57_fu_86353_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_58_fu_86356_p1.read()) + sc_biguint<9>(zext_ln243_57_fu_86353_p1.read()));
}

void poly1305_hw::thread_add_ln243_36_fu_86373_p2() {
    add_ln243_36_fu_86373_p2 = (!reg_21690.read().is_01() || !zext_ln243_59_fu_86369_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21690.read()) + sc_biguint<32>(zext_ln243_59_fu_86369_p1.read()));
}

void poly1305_hw::thread_add_ln243_37_fu_86472_p2() {
    add_ln243_37_fu_86472_p2 = (!zext_ln243_62_fu_86462_p1.read().is_01() || !zext_ln243_61_fu_86458_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_62_fu_86462_p1.read()) + sc_biguint<9>(zext_ln243_61_fu_86458_p1.read()));
}

void poly1305_hw::thread_add_ln243_38_fu_86512_p2() {
    add_ln243_38_fu_86512_p2 = (!reg_21704.read().is_01() || !zext_ln243_63_fu_86509_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21704.read()) + sc_biguint<32>(zext_ln243_63_fu_86509_p1.read()));
}

void poly1305_hw::thread_add_ln243_39_fu_86622_p2() {
    add_ln243_39_fu_86622_p2 = (!zext_ln243_66_fu_86612_p1.read().is_01() || !zext_ln243_65_fu_86608_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_66_fu_86612_p1.read()) + sc_biguint<9>(zext_ln243_65_fu_86608_p1.read()));
}

void poly1305_hw::thread_add_ln243_3_fu_84838_p2() {
    add_ln243_3_fu_84838_p2 = (!ap_const_lv7_3.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_3) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_40_fu_86632_p2() {
    add_ln243_40_fu_86632_p2 = (!reg_21699.read().is_01() || !zext_ln243_67_fu_86628_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21699.read()) + sc_biguint<32>(zext_ln243_67_fu_86628_p1.read()));
}

void poly1305_hw::thread_add_ln243_41_fu_86749_p2() {
    add_ln243_41_fu_86749_p2 = (!zext_ln243_70_fu_86742_p1.read().is_01() || !zext_ln243_69_fu_86739_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_70_fu_86742_p1.read()) + sc_biguint<9>(zext_ln243_69_fu_86739_p1.read()));
}

void poly1305_hw::thread_add_ln243_42_fu_86759_p2() {
    add_ln243_42_fu_86759_p2 = (!temp_load_14_reg_117997.read().is_01() || !zext_ln243_71_fu_86755_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_load_14_reg_117997.read()) + sc_biguint<32>(zext_ln243_71_fu_86755_p1.read()));
}

void poly1305_hw::thread_add_ln243_43_fu_86873_p2() {
    add_ln243_43_fu_86873_p2 = (!zext_ln243_74_fu_86863_p1.read().is_01() || !zext_ln243_73_fu_86859_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_74_fu_86863_p1.read()) + sc_biguint<9>(zext_ln243_73_fu_86859_p1.read()));
}

void poly1305_hw::thread_add_ln243_44_fu_86938_p2() {
    add_ln243_44_fu_86938_p2 = (!reg_21695.read().is_01() || !zext_ln243_75_fu_86935_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21695.read()) + sc_biguint<32>(zext_ln243_75_fu_86935_p1.read()));
}

void poly1305_hw::thread_add_ln243_45_fu_87004_p2() {
    add_ln243_45_fu_87004_p2 = (!zext_ln243_78_fu_86995_p1.read().is_01() || !zext_ln243_77_fu_86992_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_78_fu_86995_p1.read()) + sc_biguint<9>(zext_ln243_77_fu_86992_p1.read()));
}

void poly1305_hw::thread_add_ln243_46_fu_87014_p2() {
    add_ln243_46_fu_87014_p2 = (!reg_21708.read().is_01() || !zext_ln243_79_fu_87010_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21708.read()) + sc_biguint<32>(zext_ln243_79_fu_87010_p1.read()));
}

void poly1305_hw::thread_add_ln243_47_fu_87209_p2() {
    add_ln243_47_fu_87209_p2 = (!zext_ln243_81_fu_87206_p1.read().is_01() || !zext_ln243_80_fu_87203_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_81_fu_87206_p1.read()) + sc_biguint<9>(zext_ln243_80_fu_87203_p1.read()));
}

void poly1305_hw::thread_add_ln243_48_fu_87219_p2() {
    add_ln243_48_fu_87219_p2 = (!reg_21690.read().is_01() || !zext_ln243_82_fu_87215_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21690.read()) + sc_biguint<32>(zext_ln243_82_fu_87215_p1.read()));
}

void poly1305_hw::thread_add_ln243_49_fu_84903_p2() {
    add_ln243_49_fu_84903_p2 = (!trunc_ln231_fu_84857_p1.read().is_01() || !addCarry_6_reg_15983.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln231_fu_84857_p1.read()) + sc_biguint<8>(addCarry_6_reg_15983.read()));
}

void poly1305_hw::thread_add_ln243_4_fu_85003_p2() {
    add_ln243_4_fu_85003_p2 = (!ap_const_lv7_4.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_4) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_50_fu_85087_p2() {
    add_ln243_50_fu_85087_p2 = (!add_ln231_reg_117742.read().is_01() || !select_ln244_reg_117713.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_reg_117742.read()) + sc_biguint<8>(select_ln244_reg_117713.read()));
}

void poly1305_hw::thread_add_ln243_51_fu_85195_p2() {
    add_ln243_51_fu_85195_p2 = (!add_ln231_1_fu_85156_p2.read().is_01() || !select_ln244_1_fu_85138_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_1_fu_85156_p2.read()) + sc_biguint<8>(select_ln244_1_fu_85138_p3.read()));
}

void poly1305_hw::thread_add_ln243_52_fu_85353_p2() {
    add_ln243_52_fu_85353_p2 = (!add_ln231_2_fu_85306_p2.read().is_01() || !select_ln244_2_fu_85289_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_2_fu_85306_p2.read()) + sc_biguint<8>(select_ln244_2_fu_85289_p3.read()));
}

void poly1305_hw::thread_add_ln243_53_fu_85511_p2() {
    add_ln243_53_fu_85511_p2 = (!add_ln231_3_reg_117850.read().is_01() || !select_ln244_3_reg_117844.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_3_reg_117850.read()) + sc_biguint<8>(select_ln244_3_reg_117844.read()));
}

void poly1305_hw::thread_add_ln243_54_fu_85618_p2() {
    add_ln243_54_fu_85618_p2 = (!add_ln231_4_fu_85579_p2.read().is_01() || !select_ln244_4_fu_85562_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_4_fu_85579_p2.read()) + sc_biguint<8>(select_ln244_4_fu_85562_p3.read()));
}

void poly1305_hw::thread_add_ln243_55_fu_85776_p2() {
    add_ln243_55_fu_85776_p2 = (!add_ln231_5_fu_85729_p2.read().is_01() || !select_ln244_5_fu_85712_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_5_fu_85729_p2.read()) + sc_biguint<8>(select_ln244_5_fu_85712_p3.read()));
}

void poly1305_hw::thread_add_ln243_56_fu_85934_p2() {
    add_ln243_56_fu_85934_p2 = (!add_ln231_6_reg_117941.read().is_01() || !select_ln244_6_reg_117935.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_6_reg_117941.read()) + sc_biguint<8>(select_ln244_6_reg_117935.read()));
}

void poly1305_hw::thread_add_ln243_57_fu_86041_p2() {
    add_ln243_57_fu_86041_p2 = (!add_ln231_7_fu_86002_p2.read().is_01() || !select_ln244_7_fu_85985_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_7_fu_86002_p2.read()) + sc_biguint<8>(select_ln244_7_fu_85985_p3.read()));
}

void poly1305_hw::thread_add_ln243_58_fu_86203_p2() {
    add_ln243_58_fu_86203_p2 = (!add_ln231_8_fu_86156_p2.read().is_01() || !select_ln244_8_fu_86139_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_8_fu_86156_p2.read()) + sc_biguint<8>(select_ln244_8_fu_86139_p3.read()));
}

void poly1305_hw::thread_add_ln243_59_fu_86359_p2() {
    add_ln243_59_fu_86359_p2 = (!add_ln231_9_reg_118033.read().is_01() || !select_ln244_9_reg_118027.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_9_reg_118033.read()) + sc_biguint<8>(select_ln244_9_reg_118027.read()));
}

void poly1305_hw::thread_add_ln243_5_fu_85013_p2() {
    add_ln243_5_fu_85013_p2 = (!ap_const_lv7_5.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_5) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_60_fu_86466_p2() {
    add_ln243_60_fu_86466_p2 = (!add_ln231_10_fu_86427_p2.read().is_01() || !select_ln244_10_fu_86410_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_10_fu_86427_p2.read()) + sc_biguint<8>(select_ln244_10_fu_86410_p3.read()));
}

void poly1305_hw::thread_add_ln243_61_fu_86616_p2() {
    add_ln243_61_fu_86616_p2 = (!add_ln231_11_fu_86561_p2.read().is_01() || !select_ln244_11_fu_86544_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_11_fu_86561_p2.read()) + sc_biguint<8>(select_ln244_11_fu_86544_p3.read()));
}

void poly1305_hw::thread_add_ln243_62_fu_86745_p2() {
    add_ln243_62_fu_86745_p2 = (!add_ln231_12_reg_118096.read().is_01() || !select_ln244_12_reg_118090.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_12_reg_118096.read()) + sc_biguint<8>(select_ln244_12_reg_118090.read()));
}

void poly1305_hw::thread_add_ln243_63_fu_86867_p2() {
    add_ln243_63_fu_86867_p2 = (!add_ln231_13_fu_86812_p2.read().is_01() || !select_ln244_13_fu_86795_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_13_fu_86812_p2.read()) + sc_biguint<8>(select_ln244_13_fu_86795_p3.read()));
}

void poly1305_hw::thread_add_ln243_64_fu_86999_p2() {
    add_ln243_64_fu_86999_p2 = (!add_ln231_14_reg_118127.read().is_01() || !select_ln244_14_fu_86970_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_14_reg_118127.read()) + sc_biguint<8>(select_ln244_14_fu_86970_p3.read()));
}

void poly1305_hw::thread_add_ln243_65_fu_87189_p2() {
    add_ln243_65_fu_87189_p2 = (!add_ln231_15_reg_118154.read().is_01() || !select_ln244_15_reg_118148.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln231_15_reg_118154.read()) + sc_biguint<8>(select_ln244_15_reg_118148.read()));
}

void poly1305_hw::thread_add_ln243_6_fu_85220_p2() {
    add_ln243_6_fu_85220_p2 = (!ap_const_lv7_6.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_6) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_7_fu_85230_p2() {
    add_ln243_7_fu_85230_p2 = (!ap_const_lv7_7.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_7) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_8_fu_85431_p2() {
    add_ln243_8_fu_85431_p2 = (!ap_const_lv7_8.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_9_fu_85441_p2() {
    add_ln243_9_fu_85441_p2 = (!ap_const_lv7_9.is_01() || !zext_ln226_reg_117627.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_9) + sc_biguint<7>(zext_ln226_reg_117627.read()));
}

void poly1305_hw::thread_add_ln243_fu_84909_p2() {
    add_ln243_fu_84909_p2 = (!zext_ln243_2_fu_84899_p1.read().is_01() || !zext_ln243_1_fu_84895_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln243_2_fu_84899_p1.read()) + sc_biguint<9>(zext_ln243_1_fu_84895_p1.read()));
}

void poly1305_hw::thread_add_ln244_10_fu_86379_p2() {
    add_ln244_10_fu_86379_p2 = (!add_ln243_59_fu_86359_p2.read().is_01() || !trunc_ln243_10_reg_117947.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_59_fu_86359_p2.read()) + sc_biguint<8>(trunc_ln243_10_reg_117947.read()));
}

void poly1305_hw::thread_add_ln244_11_fu_86478_p2() {
    add_ln244_11_fu_86478_p2 = (!add_ln243_60_fu_86466_p2.read().is_01() || !trunc_ln243_11_reg_117952.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_60_fu_86466_p2.read()) + sc_biguint<8>(trunc_ln243_11_reg_117952.read()));
}

void poly1305_hw::thread_add_ln244_12_fu_86638_p2() {
    add_ln244_12_fu_86638_p2 = (!add_ln243_61_fu_86616_p2.read().is_01() || !trunc_ln243_12_reg_117992.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_61_fu_86616_p2.read()) + sc_biguint<8>(trunc_ln243_12_reg_117992.read()));
}

void poly1305_hw::thread_add_ln244_13_fu_86764_p2() {
    add_ln244_13_fu_86764_p2 = (!add_ln243_62_fu_86745_p2.read().is_01() || !trunc_ln243_13_reg_118002.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_62_fu_86745_p2.read()) + sc_biguint<8>(trunc_ln243_13_reg_118002.read()));
}

void poly1305_hw::thread_add_ln244_14_fu_86879_p2() {
    add_ln244_14_fu_86879_p2 = (!add_ln243_63_fu_86867_p2.read().is_01() || !trunc_ln243_14_reg_118039.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_63_fu_86867_p2.read()) + sc_biguint<8>(trunc_ln243_14_reg_118039.read()));
}

void poly1305_hw::thread_add_ln244_15_fu_87020_p2() {
    add_ln244_15_fu_87020_p2 = (!add_ln243_64_fu_86999_p2.read().is_01() || !trunc_ln243_15_reg_118044.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_64_fu_86999_p2.read()) + sc_biguint<8>(trunc_ln243_15_reg_118044.read()));
}

void poly1305_hw::thread_add_ln244_16_fu_87193_p2() {
    add_ln244_16_fu_87193_p2 = (!add_ln243_65_fu_87189_p2.read().is_01() || !trunc_ln243_16_reg_118080.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_65_fu_87189_p2.read()) + sc_biguint<8>(trunc_ln243_16_reg_118080.read()));
}

void poly1305_hw::thread_add_ln244_1_fu_85107_p2() {
    add_ln244_1_fu_85107_p2 = (!add_ln243_50_fu_85087_p2.read().is_01() || !trunc_ln243_1_reg_117686.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_50_fu_85087_p2.read()) + sc_biguint<8>(trunc_ln243_1_reg_117686.read()));
}

void poly1305_hw::thread_add_ln244_2_fu_85207_p2() {
    add_ln244_2_fu_85207_p2 = (!add_ln243_51_fu_85195_p2.read().is_01() || !trunc_ln243_2_reg_117748.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_51_fu_85195_p2.read()) + sc_biguint<8>(trunc_ln243_2_reg_117748.read()));
}

void poly1305_hw::thread_add_ln244_3_fu_85375_p2() {
    add_ln244_3_fu_85375_p2 = (!add_ln243_52_fu_85353_p2.read().is_01() || !trunc_ln243_3_reg_117753.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_52_fu_85353_p2.read()) + sc_biguint<8>(trunc_ln243_3_reg_117753.read()));
}

void poly1305_hw::thread_add_ln244_4_fu_85531_p2() {
    add_ln244_4_fu_85531_p2 = (!add_ln243_53_fu_85511_p2.read().is_01() || !trunc_ln243_4_reg_117812.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_53_fu_85511_p2.read()) + sc_biguint<8>(trunc_ln243_4_reg_117812.read()));
}

void poly1305_hw::thread_add_ln244_5_fu_85630_p2() {
    add_ln244_5_fu_85630_p2 = (!add_ln243_54_fu_85618_p2.read().is_01() || !trunc_ln243_5_reg_117817.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_54_fu_85618_p2.read()) + sc_biguint<8>(trunc_ln243_5_reg_117817.read()));
}

void poly1305_hw::thread_add_ln244_6_fu_85798_p2() {
    add_ln244_6_fu_85798_p2 = (!add_ln243_55_fu_85776_p2.read().is_01() || !trunc_ln243_6_reg_117856.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_55_fu_85776_p2.read()) + sc_biguint<8>(trunc_ln243_6_reg_117856.read()));
}

void poly1305_hw::thread_add_ln244_7_fu_85954_p2() {
    add_ln244_7_fu_85954_p2 = (!add_ln243_56_fu_85934_p2.read().is_01() || !trunc_ln243_7_reg_117861.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_56_fu_85934_p2.read()) + sc_biguint<8>(trunc_ln243_7_reg_117861.read()));
}

void poly1305_hw::thread_add_ln244_8_fu_86053_p2() {
    add_ln244_8_fu_86053_p2 = (!add_ln243_57_fu_86041_p2.read().is_01() || !trunc_ln243_8_reg_117903.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_57_fu_86041_p2.read()) + sc_biguint<8>(trunc_ln243_8_reg_117903.read()));
}

void poly1305_hw::thread_add_ln244_9_fu_86225_p2() {
    add_ln244_9_fu_86225_p2 = (!add_ln243_58_fu_86203_p2.read().is_01() || !trunc_ln243_9_reg_117908.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_58_fu_86203_p2.read()) + sc_biguint<8>(trunc_ln243_9_reg_117908.read()));
}

void poly1305_hw::thread_add_ln244_fu_84925_p2() {
    add_ln244_fu_84925_p2 = (!add_ln243_49_fu_84903_p2.read().is_01() || !trunc_ln243_reg_117681.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln243_49_fu_84903_p2.read()) + sc_biguint<8>(trunc_ln243_reg_117681.read()));
}

void poly1305_hw::thread_add_ln253_2_fu_87273_p2() {
    add_ln253_2_fu_87273_p2 = (!temp_q0.read().is_01() || !zext_ln253_fu_87270_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_q0.read()) + sc_biguint<32>(zext_ln253_fu_87270_p1.read()));
}

void poly1305_hw::thread_add_ln253_fu_84779_p2() {
    add_ln253_fu_84779_p2 = (!sub_ln252_fu_84773_p2.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(sub_ln252_fu_84773_p2.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void poly1305_hw::thread_add_ln264_fu_87311_p2() {
    add_ln264_fu_87311_p2 = (!arr1_load_5_reg_118205.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_load_5_reg_118205.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln355_10_fu_28762_p2() {
    add_ln355_10_fu_28762_p2 = (!select_ln355_4_fu_28749_p3.read().is_01() || !add_ln355_9_fu_28756_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_4_fu_28749_p3.read()) + sc_biguint<9>(add_ln355_9_fu_28756_p2.read()));
}

void poly1305_hw::thread_add_ln355_11_fu_28812_p2() {
    add_ln355_11_fu_28812_p2 = (!zext_ln355_13_fu_28800_p1.read().is_01() || !zext_ln355_12_fu_28796_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_13_fu_28800_p1.read()) + sc_biguint<9>(zext_ln355_12_fu_28796_p1.read()));
}

void poly1305_hw::thread_add_ln355_12_fu_28818_p2() {
    add_ln355_12_fu_28818_p2 = (!select_ln355_5_fu_28804_p3.read().is_01() || !add_ln355_11_fu_28812_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_5_fu_28804_p3.read()) + sc_biguint<9>(add_ln355_11_fu_28812_p2.read()));
}

void poly1305_hw::thread_add_ln355_13_fu_29132_p2() {
    add_ln355_13_fu_29132_p2 = (!zext_ln355_15_fu_29121_p1.read().is_01() || !zext_ln355_14_fu_29117_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_15_fu_29121_p1.read()) + sc_biguint<9>(zext_ln355_14_fu_29117_p1.read()));
}

void poly1305_hw::thread_add_ln355_14_fu_29138_p2() {
    add_ln355_14_fu_29138_p2 = (!select_ln355_6_fu_29125_p3.read().is_01() || !add_ln355_13_fu_29132_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_6_fu_29125_p3.read()) + sc_biguint<9>(add_ln355_13_fu_29132_p2.read()));
}

void poly1305_hw::thread_add_ln355_15_fu_29188_p2() {
    add_ln355_15_fu_29188_p2 = (!zext_ln355_17_fu_29176_p1.read().is_01() || !zext_ln355_16_fu_29172_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_17_fu_29176_p1.read()) + sc_biguint<9>(zext_ln355_16_fu_29172_p1.read()));
}

void poly1305_hw::thread_add_ln355_16_fu_29194_p2() {
    add_ln355_16_fu_29194_p2 = (!select_ln355_7_fu_29180_p3.read().is_01() || !add_ln355_15_fu_29188_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_7_fu_29180_p3.read()) + sc_biguint<9>(add_ln355_15_fu_29188_p2.read()));
}

void poly1305_hw::thread_add_ln355_17_fu_29508_p2() {
    add_ln355_17_fu_29508_p2 = (!zext_ln355_19_fu_29497_p1.read().is_01() || !zext_ln355_18_fu_29493_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_19_fu_29497_p1.read()) + sc_biguint<9>(zext_ln355_18_fu_29493_p1.read()));
}

void poly1305_hw::thread_add_ln355_18_fu_29514_p2() {
    add_ln355_18_fu_29514_p2 = (!select_ln355_8_fu_29501_p3.read().is_01() || !add_ln355_17_fu_29508_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_8_fu_29501_p3.read()) + sc_biguint<9>(add_ln355_17_fu_29508_p2.read()));
}

void poly1305_hw::thread_add_ln355_19_fu_29564_p2() {
    add_ln355_19_fu_29564_p2 = (!zext_ln355_21_fu_29552_p1.read().is_01() || !zext_ln355_20_fu_29548_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_21_fu_29552_p1.read()) + sc_biguint<9>(zext_ln355_20_fu_29548_p1.read()));
}

void poly1305_hw::thread_add_ln355_1_fu_28004_p2() {
    add_ln355_1_fu_28004_p2 = (!zext_ln355_3_fu_27993_p1.read().is_01() || !zext_ln355_2_fu_27989_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_3_fu_27993_p1.read()) + sc_biguint<9>(zext_ln355_2_fu_27989_p1.read()));
}

void poly1305_hw::thread_add_ln355_20_fu_29570_p2() {
    add_ln355_20_fu_29570_p2 = (!select_ln355_9_fu_29556_p3.read().is_01() || !add_ln355_19_fu_29564_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_9_fu_29556_p3.read()) + sc_biguint<9>(add_ln355_19_fu_29564_p2.read()));
}

void poly1305_hw::thread_add_ln355_21_fu_29884_p2() {
    add_ln355_21_fu_29884_p2 = (!zext_ln355_23_fu_29873_p1.read().is_01() || !zext_ln355_22_fu_29869_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_23_fu_29873_p1.read()) + sc_biguint<9>(zext_ln355_22_fu_29869_p1.read()));
}

void poly1305_hw::thread_add_ln355_22_fu_29890_p2() {
    add_ln355_22_fu_29890_p2 = (!select_ln355_10_fu_29877_p3.read().is_01() || !add_ln355_21_fu_29884_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_10_fu_29877_p3.read()) + sc_biguint<9>(add_ln355_21_fu_29884_p2.read()));
}

void poly1305_hw::thread_add_ln355_23_fu_29940_p2() {
    add_ln355_23_fu_29940_p2 = (!zext_ln355_25_fu_29928_p1.read().is_01() || !zext_ln355_24_fu_29924_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_25_fu_29928_p1.read()) + sc_biguint<9>(zext_ln355_24_fu_29924_p1.read()));
}

void poly1305_hw::thread_add_ln355_24_fu_29946_p2() {
    add_ln355_24_fu_29946_p2 = (!select_ln355_11_fu_29932_p3.read().is_01() || !add_ln355_23_fu_29940_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_11_fu_29932_p3.read()) + sc_biguint<9>(add_ln355_23_fu_29940_p2.read()));
}

void poly1305_hw::thread_add_ln355_25_fu_30260_p2() {
    add_ln355_25_fu_30260_p2 = (!zext_ln355_27_fu_30249_p1.read().is_01() || !zext_ln355_26_fu_30245_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_27_fu_30249_p1.read()) + sc_biguint<9>(zext_ln355_26_fu_30245_p1.read()));
}

void poly1305_hw::thread_add_ln355_26_fu_30266_p2() {
    add_ln355_26_fu_30266_p2 = (!select_ln355_12_fu_30253_p3.read().is_01() || !add_ln355_25_fu_30260_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_12_fu_30253_p3.read()) + sc_biguint<9>(add_ln355_25_fu_30260_p2.read()));
}

void poly1305_hw::thread_add_ln355_27_fu_30316_p2() {
    add_ln355_27_fu_30316_p2 = (!zext_ln355_29_fu_30304_p1.read().is_01() || !zext_ln355_28_fu_30300_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_29_fu_30304_p1.read()) + sc_biguint<9>(zext_ln355_28_fu_30300_p1.read()));
}

void poly1305_hw::thread_add_ln355_28_fu_30322_p2() {
    add_ln355_28_fu_30322_p2 = (!select_ln355_13_fu_30308_p3.read().is_01() || !add_ln355_27_fu_30316_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_13_fu_30308_p3.read()) + sc_biguint<9>(add_ln355_27_fu_30316_p2.read()));
}

void poly1305_hw::thread_add_ln355_29_fu_30518_p2() {
    add_ln355_29_fu_30518_p2 = (!zext_ln355_31_fu_30507_p1.read().is_01() || !zext_ln355_30_fu_30503_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_31_fu_30507_p1.read()) + sc_biguint<9>(zext_ln355_30_fu_30503_p1.read()));
}

void poly1305_hw::thread_add_ln355_2_fu_28010_p2() {
    add_ln355_2_fu_28010_p2 = (!select_ln355_fu_27997_p3.read().is_01() || !add_ln355_1_fu_28004_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_fu_27997_p3.read()) + sc_biguint<9>(add_ln355_1_fu_28004_p2.read()));
}

void poly1305_hw::thread_add_ln355_30_fu_30524_p2() {
    add_ln355_30_fu_30524_p2 = (!select_ln355_14_fu_30511_p3.read().is_01() || !add_ln355_29_fu_30518_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_14_fu_30511_p3.read()) + sc_biguint<9>(add_ln355_29_fu_30518_p2.read()));
}

void poly1305_hw::thread_add_ln355_3_fu_28060_p2() {
    add_ln355_3_fu_28060_p2 = (!zext_ln355_5_fu_28048_p1.read().is_01() || !zext_ln355_4_fu_28044_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_5_fu_28048_p1.read()) + sc_biguint<9>(zext_ln355_4_fu_28044_p1.read()));
}

void poly1305_hw::thread_add_ln355_4_fu_28066_p2() {
    add_ln355_4_fu_28066_p2 = (!select_ln355_1_fu_28052_p3.read().is_01() || !add_ln355_3_fu_28060_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_1_fu_28052_p3.read()) + sc_biguint<9>(add_ln355_3_fu_28060_p2.read()));
}

void poly1305_hw::thread_add_ln355_5_fu_28380_p2() {
    add_ln355_5_fu_28380_p2 = (!zext_ln355_7_fu_28369_p1.read().is_01() || !zext_ln355_6_fu_28365_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_7_fu_28369_p1.read()) + sc_biguint<9>(zext_ln355_6_fu_28365_p1.read()));
}

void poly1305_hw::thread_add_ln355_6_fu_28386_p2() {
    add_ln355_6_fu_28386_p2 = (!select_ln355_2_fu_28373_p3.read().is_01() || !add_ln355_5_fu_28380_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_2_fu_28373_p3.read()) + sc_biguint<9>(add_ln355_5_fu_28380_p2.read()));
}

void poly1305_hw::thread_add_ln355_7_fu_28436_p2() {
    add_ln355_7_fu_28436_p2 = (!zext_ln355_9_fu_28424_p1.read().is_01() || !zext_ln355_8_fu_28420_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_9_fu_28424_p1.read()) + sc_biguint<9>(zext_ln355_8_fu_28420_p1.read()));
}

void poly1305_hw::thread_add_ln355_8_fu_28442_p2() {
    add_ln355_8_fu_28442_p2 = (!select_ln355_3_fu_28428_p3.read().is_01() || !add_ln355_7_fu_28436_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln355_3_fu_28428_p3.read()) + sc_biguint<9>(add_ln355_7_fu_28436_p2.read()));
}

void poly1305_hw::thread_add_ln355_9_fu_28756_p2() {
    add_ln355_9_fu_28756_p2 = (!zext_ln355_11_fu_28745_p1.read().is_01() || !zext_ln355_10_fu_28741_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_11_fu_28745_p1.read()) + sc_biguint<9>(zext_ln355_10_fu_28741_p1.read()));
}

void poly1305_hw::thread_add_ln355_fu_27696_p2() {
    add_ln355_fu_27696_p2 = (!zext_ln355_1_fu_27692_p1.read().is_01() || !zext_ln355_fu_27688_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln355_1_fu_27692_p1.read()) + sc_biguint<9>(zext_ln355_fu_27688_p1.read()));
}

void poly1305_hw::thread_add_ln362_10_fu_29590_p2() {
    add_ln362_10_fu_29590_p2 = (!acc_q0.read().is_01() || !add_ln362_26_fu_29584_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln362_26_fu_29584_p2.read()));
}

void poly1305_hw::thread_add_ln362_11_fu_29918_p2() {
    add_ln362_11_fu_29918_p2 = (!acc_q1.read().is_01() || !add_ln362_27_fu_29912_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln362_27_fu_29912_p2.read()));
}

void poly1305_hw::thread_add_ln362_12_fu_29966_p2() {
    add_ln362_12_fu_29966_p2 = (!acc_q0.read().is_01() || !add_ln362_28_fu_29960_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln362_28_fu_29960_p2.read()));
}

void poly1305_hw::thread_add_ln362_13_fu_30294_p2() {
    add_ln362_13_fu_30294_p2 = (!acc_q1.read().is_01() || !add_ln362_29_fu_30288_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln362_29_fu_30288_p2.read()));
}

void poly1305_hw::thread_add_ln362_14_fu_30342_p2() {
    add_ln362_14_fu_30342_p2 = (!acc_q0.read().is_01() || !add_ln362_30_fu_30336_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln362_30_fu_30336_p2.read()));
}

void poly1305_hw::thread_add_ln362_15_fu_30552_p2() {
    add_ln362_15_fu_30552_p2 = (!acc_q1.read().is_01() || !add_ln362_31_fu_30546_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln362_31_fu_30546_p2.read()));
}

void poly1305_hw::thread_add_ln362_16_fu_30558_p2() {
    add_ln362_16_fu_30558_p2 = (!select_ln362_15_fu_30538_p3.read().is_01() || !acc_q0.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_15_fu_30538_p3.read()) + sc_biguint<8>(acc_q0.read()));
}

void poly1305_hw::thread_add_ln362_17_fu_28032_p2() {
    add_ln362_17_fu_28032_p2 = (!select_ln362_fu_27982_p3.read().is_01() || !phi_ln341_1_fu_27716_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_fu_27982_p3.read()) + sc_biguint<8>(phi_ln341_1_fu_27716_p66.read()));
}

void poly1305_hw::thread_add_ln362_18_fu_28080_p2() {
    add_ln362_18_fu_28080_p2 = (!select_ln362_1_fu_28024_p3.read().is_01() || !phi_ln341_2_fu_27849_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_1_fu_28024_p3.read()) + sc_biguint<8>(phi_ln341_2_fu_27849_p66.read()));
}

void poly1305_hw::thread_add_ln362_19_fu_28408_p2() {
    add_ln362_19_fu_28408_p2 = (!select_ln362_2_fu_28358_p3.read().is_01() || !phi_ln341_3_fu_28092_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_2_fu_28358_p3.read()) + sc_biguint<8>(phi_ln341_3_fu_28092_p66.read()));
}

void poly1305_hw::thread_add_ln362_1_fu_28038_p2() {
    add_ln362_1_fu_28038_p2 = (!acc_q0.read().is_01() || !add_ln362_17_fu_28032_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln362_17_fu_28032_p2.read()));
}

void poly1305_hw::thread_add_ln362_20_fu_28456_p2() {
    add_ln362_20_fu_28456_p2 = (!select_ln362_3_fu_28400_p3.read().is_01() || !phi_ln341_4_fu_28225_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_3_fu_28400_p3.read()) + sc_biguint<8>(phi_ln341_4_fu_28225_p66.read()));
}

void poly1305_hw::thread_add_ln362_21_fu_28784_p2() {
    add_ln362_21_fu_28784_p2 = (!select_ln362_4_fu_28734_p3.read().is_01() || !phi_ln341_5_fu_28468_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_4_fu_28734_p3.read()) + sc_biguint<8>(phi_ln341_5_fu_28468_p66.read()));
}

void poly1305_hw::thread_add_ln362_22_fu_28832_p2() {
    add_ln362_22_fu_28832_p2 = (!select_ln362_5_fu_28776_p3.read().is_01() || !phi_ln341_6_fu_28601_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_5_fu_28776_p3.read()) + sc_biguint<8>(phi_ln341_6_fu_28601_p66.read()));
}

void poly1305_hw::thread_add_ln362_23_fu_29160_p2() {
    add_ln362_23_fu_29160_p2 = (!select_ln362_6_fu_29110_p3.read().is_01() || !phi_ln341_7_fu_28844_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_6_fu_29110_p3.read()) + sc_biguint<8>(phi_ln341_7_fu_28844_p66.read()));
}

void poly1305_hw::thread_add_ln362_24_fu_29208_p2() {
    add_ln362_24_fu_29208_p2 = (!select_ln362_7_fu_29152_p3.read().is_01() || !phi_ln341_8_fu_28977_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_7_fu_29152_p3.read()) + sc_biguint<8>(phi_ln341_8_fu_28977_p66.read()));
}

void poly1305_hw::thread_add_ln362_25_fu_29536_p2() {
    add_ln362_25_fu_29536_p2 = (!select_ln362_8_fu_29486_p3.read().is_01() || !phi_ln341_9_fu_29220_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_8_fu_29486_p3.read()) + sc_biguint<8>(phi_ln341_9_fu_29220_p66.read()));
}

void poly1305_hw::thread_add_ln362_26_fu_29584_p2() {
    add_ln362_26_fu_29584_p2 = (!select_ln362_9_fu_29528_p3.read().is_01() || !phi_ln341_s_fu_29353_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_9_fu_29528_p3.read()) + sc_biguint<8>(phi_ln341_s_fu_29353_p66.read()));
}

void poly1305_hw::thread_add_ln362_27_fu_29912_p2() {
    add_ln362_27_fu_29912_p2 = (!select_ln362_10_fu_29862_p3.read().is_01() || !phi_ln341_10_fu_29596_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_10_fu_29862_p3.read()) + sc_biguint<8>(phi_ln341_10_fu_29596_p66.read()));
}

void poly1305_hw::thread_add_ln362_28_fu_29960_p2() {
    add_ln362_28_fu_29960_p2 = (!select_ln362_11_fu_29904_p3.read().is_01() || !phi_ln341_11_fu_29729_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_11_fu_29904_p3.read()) + sc_biguint<8>(phi_ln341_11_fu_29729_p66.read()));
}

void poly1305_hw::thread_add_ln362_29_fu_30288_p2() {
    add_ln362_29_fu_30288_p2 = (!select_ln362_12_fu_30238_p3.read().is_01() || !phi_ln341_12_fu_29972_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_12_fu_30238_p3.read()) + sc_biguint<8>(phi_ln341_12_fu_29972_p66.read()));
}

void poly1305_hw::thread_add_ln362_2_fu_28086_p2() {
    add_ln362_2_fu_28086_p2 = (!acc_q1.read().is_01() || !add_ln362_18_fu_28080_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln362_18_fu_28080_p2.read()));
}

void poly1305_hw::thread_add_ln362_30_fu_30336_p2() {
    add_ln362_30_fu_30336_p2 = (!select_ln362_13_fu_30280_p3.read().is_01() || !phi_ln341_13_fu_30105_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_13_fu_30280_p3.read()) + sc_biguint<8>(phi_ln341_13_fu_30105_p66.read()));
}

void poly1305_hw::thread_add_ln362_31_fu_30546_p2() {
    add_ln362_31_fu_30546_p2 = (!select_ln362_14_fu_30496_p3.read().is_01() || !phi_ln341_14_fu_30363_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln362_14_fu_30496_p3.read()) + sc_biguint<8>(phi_ln341_14_fu_30363_p66.read()));
}

void poly1305_hw::thread_add_ln362_3_fu_28414_p2() {
    add_ln362_3_fu_28414_p2 = (!acc_q1.read().is_01() || !add_ln362_19_fu_28408_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln362_19_fu_28408_p2.read()));
}

void poly1305_hw::thread_add_ln362_4_fu_28462_p2() {
    add_ln362_4_fu_28462_p2 = (!acc_q0.read().is_01() || !add_ln362_20_fu_28456_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln362_20_fu_28456_p2.read()));
}

void poly1305_hw::thread_add_ln362_5_fu_28790_p2() {
    add_ln362_5_fu_28790_p2 = (!acc_q1.read().is_01() || !add_ln362_21_fu_28784_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln362_21_fu_28784_p2.read()));
}

void poly1305_hw::thread_add_ln362_6_fu_28838_p2() {
    add_ln362_6_fu_28838_p2 = (!acc_q0.read().is_01() || !add_ln362_22_fu_28832_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln362_22_fu_28832_p2.read()));
}

void poly1305_hw::thread_add_ln362_7_fu_29166_p2() {
    add_ln362_7_fu_29166_p2 = (!acc_q1.read().is_01() || !add_ln362_23_fu_29160_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln362_23_fu_29160_p2.read()));
}

void poly1305_hw::thread_add_ln362_8_fu_29214_p2() {
    add_ln362_8_fu_29214_p2 = (!acc_q0.read().is_01() || !add_ln362_24_fu_29208_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln362_24_fu_29208_p2.read()));
}

void poly1305_hw::thread_add_ln362_9_fu_29542_p2() {
    add_ln362_9_fu_29542_p2 = (!acc_q1.read().is_01() || !add_ln362_25_fu_29536_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln362_25_fu_29536_p2.read()));
}

void poly1305_hw::thread_add_ln362_fu_27710_p2() {
    add_ln362_fu_27710_p2 = (!phi_ln341_reg_8675.read().is_01() || !acc_q0.read().is_01())? sc_lv<8>(): (sc_biguint<8>(phi_ln341_reg_8675.read()) + sc_biguint<8>(acc_q0.read()));
}

void poly1305_hw::thread_add_ln395_100_fu_34911_p2() {
    add_ln395_100_fu_34911_p2 = (!zext_ln395_100_fu_34889_p1.read().is_01() || !add_ln395_99_fu_34905_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_100_fu_34889_p1.read()) + sc_biguint<9>(add_ln395_99_fu_34905_p2.read()));
}

void poly1305_hw::thread_add_ln395_101_fu_34976_p2() {
    add_ln395_101_fu_34976_p2 = (!zext_ln395_103_fu_34966_p1.read().is_01() || !select_ln395_50_fu_34969_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_103_fu_34966_p1.read()) + sc_biguint<9>(select_ln395_50_fu_34969_p3.read()));
}

void poly1305_hw::thread_add_ln395_102_fu_34982_p2() {
    add_ln395_102_fu_34982_p2 = (!zext_ln395_102_fu_34963_p1.read().is_01() || !add_ln395_101_fu_34976_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_102_fu_34963_p1.read()) + sc_biguint<9>(add_ln395_101_fu_34976_p2.read()));
}

void poly1305_hw::thread_add_ln395_103_fu_35058_p2() {
    add_ln395_103_fu_35058_p2 = (!zext_ln395_105_fu_35048_p1.read().is_01() || !select_ln395_51_fu_35051_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_105_fu_35048_p1.read()) + sc_biguint<9>(select_ln395_51_fu_35051_p3.read()));
}

void poly1305_hw::thread_add_ln395_104_fu_35064_p2() {
    add_ln395_104_fu_35064_p2 = (!zext_ln395_104_fu_35045_p1.read().is_01() || !add_ln395_103_fu_35058_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_104_fu_35045_p1.read()) + sc_biguint<9>(add_ln395_103_fu_35058_p2.read()));
}

void poly1305_hw::thread_add_ln395_105_fu_35142_p2() {
    add_ln395_105_fu_35142_p2 = (!zext_ln395_107_fu_35131_p1.read().is_01() || !select_ln395_52_fu_35134_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_107_fu_35131_p1.read()) + sc_biguint<9>(select_ln395_52_fu_35134_p3.read()));
}

void poly1305_hw::thread_add_ln395_106_fu_35148_p2() {
    add_ln395_106_fu_35148_p2 = (!zext_ln395_106_fu_35127_p1.read().is_01() || !add_ln395_105_fu_35142_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_106_fu_35127_p1.read()) + sc_biguint<9>(add_ln395_105_fu_35142_p2.read()));
}

void poly1305_hw::thread_add_ln395_107_fu_35205_p2() {
    add_ln395_107_fu_35205_p2 = (!zext_ln395_109_fu_35195_p1.read().is_01() || !select_ln395_53_fu_35198_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_109_fu_35195_p1.read()) + sc_biguint<9>(select_ln395_53_fu_35198_p3.read()));
}

void poly1305_hw::thread_add_ln395_108_fu_35211_p2() {
    add_ln395_108_fu_35211_p2 = (!zext_ln395_108_fu_35192_p1.read().is_01() || !add_ln395_107_fu_35205_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_108_fu_35192_p1.read()) + sc_biguint<9>(add_ln395_107_fu_35205_p2.read()));
}

void poly1305_hw::thread_add_ln395_109_fu_35287_p2() {
    add_ln395_109_fu_35287_p2 = (!zext_ln395_111_fu_35277_p1.read().is_01() || !select_ln395_54_fu_35280_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_111_fu_35277_p1.read()) + sc_biguint<9>(select_ln395_54_fu_35280_p3.read()));
}

void poly1305_hw::thread_add_ln395_10_fu_31482_p2() {
    add_ln395_10_fu_31482_p2 = (!zext_ln395_10_fu_31461_p1.read().is_01() || !add_ln395_9_fu_31476_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_10_fu_31461_p1.read()) + sc_biguint<9>(add_ln395_9_fu_31476_p2.read()));
}

void poly1305_hw::thread_add_ln395_110_fu_35293_p2() {
    add_ln395_110_fu_35293_p2 = (!zext_ln395_110_fu_35274_p1.read().is_01() || !add_ln395_109_fu_35287_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_110_fu_35274_p1.read()) + sc_biguint<9>(add_ln395_109_fu_35287_p2.read()));
}

void poly1305_hw::thread_add_ln395_111_fu_35371_p2() {
    add_ln395_111_fu_35371_p2 = (!zext_ln395_113_fu_35360_p1.read().is_01() || !select_ln395_55_fu_35363_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_113_fu_35360_p1.read()) + sc_biguint<9>(select_ln395_55_fu_35363_p3.read()));
}

void poly1305_hw::thread_add_ln395_112_fu_35377_p2() {
    add_ln395_112_fu_35377_p2 = (!zext_ln395_112_fu_35356_p1.read().is_01() || !add_ln395_111_fu_35371_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_112_fu_35356_p1.read()) + sc_biguint<9>(add_ln395_111_fu_35371_p2.read()));
}

void poly1305_hw::thread_add_ln395_113_fu_35434_p2() {
    add_ln395_113_fu_35434_p2 = (!zext_ln395_115_fu_35424_p1.read().is_01() || !select_ln395_56_fu_35427_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_115_fu_35424_p1.read()) + sc_biguint<9>(select_ln395_56_fu_35427_p3.read()));
}

void poly1305_hw::thread_add_ln395_114_fu_35440_p2() {
    add_ln395_114_fu_35440_p2 = (!zext_ln395_114_fu_35421_p1.read().is_01() || !add_ln395_113_fu_35434_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_114_fu_35421_p1.read()) + sc_biguint<9>(add_ln395_113_fu_35434_p2.read()));
}

void poly1305_hw::thread_add_ln395_115_fu_35516_p2() {
    add_ln395_115_fu_35516_p2 = (!zext_ln395_117_fu_35506_p1.read().is_01() || !select_ln395_57_fu_35509_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_117_fu_35506_p1.read()) + sc_biguint<9>(select_ln395_57_fu_35509_p3.read()));
}

void poly1305_hw::thread_add_ln395_116_fu_35522_p2() {
    add_ln395_116_fu_35522_p2 = (!zext_ln395_116_fu_35503_p1.read().is_01() || !add_ln395_115_fu_35516_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_116_fu_35503_p1.read()) + sc_biguint<9>(add_ln395_115_fu_35516_p2.read()));
}

void poly1305_hw::thread_add_ln395_117_fu_35600_p2() {
    add_ln395_117_fu_35600_p2 = (!zext_ln395_119_fu_35589_p1.read().is_01() || !select_ln395_58_fu_35592_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_119_fu_35589_p1.read()) + sc_biguint<9>(select_ln395_58_fu_35592_p3.read()));
}

void poly1305_hw::thread_add_ln395_118_fu_35606_p2() {
    add_ln395_118_fu_35606_p2 = (!zext_ln395_118_fu_35585_p1.read().is_01() || !add_ln395_117_fu_35600_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_118_fu_35585_p1.read()) + sc_biguint<9>(add_ln395_117_fu_35600_p2.read()));
}

void poly1305_hw::thread_add_ln395_119_fu_35663_p2() {
    add_ln395_119_fu_35663_p2 = (!zext_ln395_121_fu_35653_p1.read().is_01() || !select_ln395_59_fu_35656_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_121_fu_35653_p1.read()) + sc_biguint<9>(select_ln395_59_fu_35656_p3.read()));
}

void poly1305_hw::thread_add_ln395_11_fu_31539_p2() {
    add_ln395_11_fu_31539_p2 = (!zext_ln395_13_fu_31529_p1.read().is_01() || !select_ln395_5_fu_31532_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_13_fu_31529_p1.read()) + sc_biguint<9>(select_ln395_5_fu_31532_p3.read()));
}

void poly1305_hw::thread_add_ln395_120_fu_35669_p2() {
    add_ln395_120_fu_35669_p2 = (!zext_ln395_120_fu_35650_p1.read().is_01() || !add_ln395_119_fu_35663_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_120_fu_35650_p1.read()) + sc_biguint<9>(add_ln395_119_fu_35663_p2.read()));
}

void poly1305_hw::thread_add_ln395_121_fu_35745_p2() {
    add_ln395_121_fu_35745_p2 = (!zext_ln395_123_fu_35735_p1.read().is_01() || !select_ln395_60_fu_35738_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_123_fu_35735_p1.read()) + sc_biguint<9>(select_ln395_60_fu_35738_p3.read()));
}

void poly1305_hw::thread_add_ln395_122_fu_35751_p2() {
    add_ln395_122_fu_35751_p2 = (!zext_ln395_122_fu_35732_p1.read().is_01() || !add_ln395_121_fu_35745_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_122_fu_35732_p1.read()) + sc_biguint<9>(add_ln395_121_fu_35745_p2.read()));
}

void poly1305_hw::thread_add_ln395_123_fu_35829_p2() {
    add_ln395_123_fu_35829_p2 = (!zext_ln395_125_fu_35818_p1.read().is_01() || !select_ln395_61_fu_35821_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_125_fu_35818_p1.read()) + sc_biguint<9>(select_ln395_61_fu_35821_p3.read()));
}

void poly1305_hw::thread_add_ln395_124_fu_35835_p2() {
    add_ln395_124_fu_35835_p2 = (!zext_ln395_124_fu_35814_p1.read().is_01() || !add_ln395_123_fu_35829_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_124_fu_35814_p1.read()) + sc_biguint<9>(add_ln395_123_fu_35829_p2.read()));
}

void poly1305_hw::thread_add_ln395_125_fu_35892_p2() {
    add_ln395_125_fu_35892_p2 = (!zext_ln395_127_fu_35882_p1.read().is_01() || !select_ln395_62_fu_35885_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_127_fu_35882_p1.read()) + sc_biguint<9>(select_ln395_62_fu_35885_p3.read()));
}

void poly1305_hw::thread_add_ln395_126_fu_35898_p2() {
    add_ln395_126_fu_35898_p2 = (!zext_ln395_126_fu_35879_p1.read().is_01() || !add_ln395_125_fu_35892_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_126_fu_35879_p1.read()) + sc_biguint<9>(add_ln395_125_fu_35892_p2.read()));
}

void poly1305_hw::thread_add_ln395_127_fu_35974_p2() {
    add_ln395_127_fu_35974_p2 = (!zext_ln395_129_fu_35964_p1.read().is_01() || !select_ln395_63_fu_35967_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_129_fu_35964_p1.read()) + sc_biguint<9>(select_ln395_63_fu_35967_p3.read()));
}

void poly1305_hw::thread_add_ln395_128_fu_35980_p2() {
    add_ln395_128_fu_35980_p2 = (!zext_ln395_128_fu_35961_p1.read().is_01() || !add_ln395_127_fu_35974_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_128_fu_35961_p1.read()) + sc_biguint<9>(add_ln395_127_fu_35974_p2.read()));
}

void poly1305_hw::thread_add_ln395_129_fu_36058_p2() {
    add_ln395_129_fu_36058_p2 = (!zext_ln395_131_fu_36047_p1.read().is_01() || !select_ln395_64_fu_36050_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_131_fu_36047_p1.read()) + sc_biguint<9>(select_ln395_64_fu_36050_p3.read()));
}

void poly1305_hw::thread_add_ln395_12_fu_31545_p2() {
    add_ln395_12_fu_31545_p2 = (!zext_ln395_12_fu_31526_p1.read().is_01() || !add_ln395_11_fu_31539_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_12_fu_31526_p1.read()) + sc_biguint<9>(add_ln395_11_fu_31539_p2.read()));
}

void poly1305_hw::thread_add_ln395_130_fu_36064_p2() {
    add_ln395_130_fu_36064_p2 = (!zext_ln395_130_fu_36043_p1.read().is_01() || !add_ln395_129_fu_36058_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_130_fu_36043_p1.read()) + sc_biguint<9>(add_ln395_129_fu_36058_p2.read()));
}

void poly1305_hw::thread_add_ln395_131_fu_36121_p2() {
    add_ln395_131_fu_36121_p2 = (!zext_ln395_133_fu_36111_p1.read().is_01() || !select_ln395_65_fu_36114_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_133_fu_36111_p1.read()) + sc_biguint<9>(select_ln395_65_fu_36114_p3.read()));
}

void poly1305_hw::thread_add_ln395_132_fu_36127_p2() {
    add_ln395_132_fu_36127_p2 = (!zext_ln395_132_fu_36108_p1.read().is_01() || !add_ln395_131_fu_36121_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_132_fu_36108_p1.read()) + sc_biguint<9>(add_ln395_131_fu_36121_p2.read()));
}

void poly1305_hw::thread_add_ln395_133_fu_36202_p2() {
    add_ln395_133_fu_36202_p2 = (!mul_20_1_reg_9502.read().is_01() || !select_ln395_66_fu_36194_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(mul_20_1_reg_9502.read()) + sc_biguint<4>(select_ln395_66_fu_36194_p3.read()));
}

void poly1305_hw::thread_add_ln395_134_fu_36212_p2() {
    add_ln395_134_fu_36212_p2 = (!zext_ln395_134_fu_36190_p1.read().is_01() || !zext_ln395_135_fu_36208_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_134_fu_36190_p1.read()) + sc_biguint<9>(zext_ln395_135_fu_36208_p1.read()));
}

void poly1305_hw::thread_add_ln395_135_fu_36272_p2() {
    add_ln395_135_fu_36272_p2 = (!zext_ln395_137_fu_36262_p1.read().is_01() || !select_ln395_67_fu_36265_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_137_fu_36262_p1.read()) + sc_biguint<9>(select_ln395_67_fu_36265_p3.read()));
}

void poly1305_hw::thread_add_ln395_136_fu_36278_p2() {
    add_ln395_136_fu_36278_p2 = (!zext_ln395_136_fu_36259_p1.read().is_01() || !add_ln395_135_fu_36272_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_136_fu_36259_p1.read()) + sc_biguint<9>(add_ln395_135_fu_36272_p2.read()));
}

void poly1305_hw::thread_add_ln395_137_fu_36354_p2() {
    add_ln395_137_fu_36354_p2 = (!zext_ln395_139_fu_36344_p1.read().is_01() || !select_ln395_68_fu_36347_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_139_fu_36344_p1.read()) + sc_biguint<9>(select_ln395_68_fu_36347_p3.read()));
}

void poly1305_hw::thread_add_ln395_138_fu_36360_p2() {
    add_ln395_138_fu_36360_p2 = (!zext_ln395_138_fu_36341_p1.read().is_01() || !add_ln395_137_fu_36354_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_138_fu_36341_p1.read()) + sc_biguint<9>(add_ln395_137_fu_36354_p2.read()));
}

void poly1305_hw::thread_add_ln395_139_fu_36438_p2() {
    add_ln395_139_fu_36438_p2 = (!zext_ln395_141_fu_36427_p1.read().is_01() || !select_ln395_69_fu_36430_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_141_fu_36427_p1.read()) + sc_biguint<9>(select_ln395_69_fu_36430_p3.read()));
}

void poly1305_hw::thread_add_ln395_13_fu_31621_p2() {
    add_ln395_13_fu_31621_p2 = (!zext_ln395_15_fu_31611_p1.read().is_01() || !select_ln395_6_fu_31614_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_15_fu_31611_p1.read()) + sc_biguint<9>(select_ln395_6_fu_31614_p3.read()));
}

void poly1305_hw::thread_add_ln395_140_fu_36444_p2() {
    add_ln395_140_fu_36444_p2 = (!zext_ln395_140_fu_36423_p1.read().is_01() || !add_ln395_139_fu_36438_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_140_fu_36423_p1.read()) + sc_biguint<9>(add_ln395_139_fu_36438_p2.read()));
}

void poly1305_hw::thread_add_ln395_141_fu_36501_p2() {
    add_ln395_141_fu_36501_p2 = (!zext_ln395_143_fu_36491_p1.read().is_01() || !select_ln395_70_fu_36494_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_143_fu_36491_p1.read()) + sc_biguint<9>(select_ln395_70_fu_36494_p3.read()));
}

void poly1305_hw::thread_add_ln395_142_fu_36507_p2() {
    add_ln395_142_fu_36507_p2 = (!zext_ln395_142_fu_36488_p1.read().is_01() || !add_ln395_141_fu_36501_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_142_fu_36488_p1.read()) + sc_biguint<9>(add_ln395_141_fu_36501_p2.read()));
}

void poly1305_hw::thread_add_ln395_143_fu_36583_p2() {
    add_ln395_143_fu_36583_p2 = (!zext_ln395_145_fu_36573_p1.read().is_01() || !select_ln395_71_fu_36576_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_145_fu_36573_p1.read()) + sc_biguint<9>(select_ln395_71_fu_36576_p3.read()));
}

void poly1305_hw::thread_add_ln395_144_fu_36589_p2() {
    add_ln395_144_fu_36589_p2 = (!zext_ln395_144_fu_36570_p1.read().is_01() || !add_ln395_143_fu_36583_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_144_fu_36570_p1.read()) + sc_biguint<9>(add_ln395_143_fu_36583_p2.read()));
}

void poly1305_hw::thread_add_ln395_145_fu_36667_p2() {
    add_ln395_145_fu_36667_p2 = (!zext_ln395_147_fu_36656_p1.read().is_01() || !select_ln395_72_fu_36659_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_147_fu_36656_p1.read()) + sc_biguint<9>(select_ln395_72_fu_36659_p3.read()));
}

void poly1305_hw::thread_add_ln395_146_fu_36673_p2() {
    add_ln395_146_fu_36673_p2 = (!zext_ln395_146_fu_36652_p1.read().is_01() || !add_ln395_145_fu_36667_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_146_fu_36652_p1.read()) + sc_biguint<9>(add_ln395_145_fu_36667_p2.read()));
}

void poly1305_hw::thread_add_ln395_147_fu_36730_p2() {
    add_ln395_147_fu_36730_p2 = (!zext_ln395_149_fu_36720_p1.read().is_01() || !select_ln395_73_fu_36723_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_149_fu_36720_p1.read()) + sc_biguint<9>(select_ln395_73_fu_36723_p3.read()));
}

void poly1305_hw::thread_add_ln395_148_fu_36736_p2() {
    add_ln395_148_fu_36736_p2 = (!zext_ln395_148_fu_36717_p1.read().is_01() || !add_ln395_147_fu_36730_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_148_fu_36717_p1.read()) + sc_biguint<9>(add_ln395_147_fu_36730_p2.read()));
}

void poly1305_hw::thread_add_ln395_149_fu_36812_p2() {
    add_ln395_149_fu_36812_p2 = (!zext_ln395_151_fu_36802_p1.read().is_01() || !select_ln395_74_fu_36805_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_151_fu_36802_p1.read()) + sc_biguint<9>(select_ln395_74_fu_36805_p3.read()));
}

void poly1305_hw::thread_add_ln395_14_fu_31627_p2() {
    add_ln395_14_fu_31627_p2 = (!zext_ln395_14_fu_31608_p1.read().is_01() || !add_ln395_13_fu_31621_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_14_fu_31608_p1.read()) + sc_biguint<9>(add_ln395_13_fu_31621_p2.read()));
}

void poly1305_hw::thread_add_ln395_150_fu_36818_p2() {
    add_ln395_150_fu_36818_p2 = (!zext_ln395_150_fu_36799_p1.read().is_01() || !add_ln395_149_fu_36812_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_150_fu_36799_p1.read()) + sc_biguint<9>(add_ln395_149_fu_36812_p2.read()));
}

void poly1305_hw::thread_add_ln395_151_fu_36896_p2() {
    add_ln395_151_fu_36896_p2 = (!zext_ln395_153_fu_36885_p1.read().is_01() || !select_ln395_75_fu_36888_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_153_fu_36885_p1.read()) + sc_biguint<9>(select_ln395_75_fu_36888_p3.read()));
}

void poly1305_hw::thread_add_ln395_152_fu_36902_p2() {
    add_ln395_152_fu_36902_p2 = (!zext_ln395_152_fu_36881_p1.read().is_01() || !add_ln395_151_fu_36896_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_152_fu_36881_p1.read()) + sc_biguint<9>(add_ln395_151_fu_36896_p2.read()));
}

void poly1305_hw::thread_add_ln395_153_fu_36959_p2() {
    add_ln395_153_fu_36959_p2 = (!zext_ln395_155_fu_36949_p1.read().is_01() || !select_ln395_76_fu_36952_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_155_fu_36949_p1.read()) + sc_biguint<9>(select_ln395_76_fu_36952_p3.read()));
}

void poly1305_hw::thread_add_ln395_154_fu_36965_p2() {
    add_ln395_154_fu_36965_p2 = (!zext_ln395_154_fu_36946_p1.read().is_01() || !add_ln395_153_fu_36959_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_154_fu_36946_p1.read()) + sc_biguint<9>(add_ln395_153_fu_36959_p2.read()));
}

void poly1305_hw::thread_add_ln395_155_fu_37041_p2() {
    add_ln395_155_fu_37041_p2 = (!zext_ln395_157_fu_37031_p1.read().is_01() || !select_ln395_77_fu_37034_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_157_fu_37031_p1.read()) + sc_biguint<9>(select_ln395_77_fu_37034_p3.read()));
}

void poly1305_hw::thread_add_ln395_156_fu_37047_p2() {
    add_ln395_156_fu_37047_p2 = (!zext_ln395_156_fu_37028_p1.read().is_01() || !add_ln395_155_fu_37041_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_156_fu_37028_p1.read()) + sc_biguint<9>(add_ln395_155_fu_37041_p2.read()));
}

void poly1305_hw::thread_add_ln395_157_fu_37125_p2() {
    add_ln395_157_fu_37125_p2 = (!zext_ln395_159_fu_37114_p1.read().is_01() || !select_ln395_78_fu_37117_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_159_fu_37114_p1.read()) + sc_biguint<9>(select_ln395_78_fu_37117_p3.read()));
}

void poly1305_hw::thread_add_ln395_158_fu_37131_p2() {
    add_ln395_158_fu_37131_p2 = (!zext_ln395_158_fu_37110_p1.read().is_01() || !add_ln395_157_fu_37125_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_158_fu_37110_p1.read()) + sc_biguint<9>(add_ln395_157_fu_37125_p2.read()));
}

void poly1305_hw::thread_add_ln395_159_fu_37188_p2() {
    add_ln395_159_fu_37188_p2 = (!zext_ln395_161_fu_37178_p1.read().is_01() || !select_ln395_79_fu_37181_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_161_fu_37178_p1.read()) + sc_biguint<9>(select_ln395_79_fu_37181_p3.read()));
}

void poly1305_hw::thread_add_ln395_15_fu_31705_p2() {
    add_ln395_15_fu_31705_p2 = (!zext_ln395_17_fu_31694_p1.read().is_01() || !select_ln395_7_fu_31697_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_17_fu_31694_p1.read()) + sc_biguint<9>(select_ln395_7_fu_31697_p3.read()));
}

void poly1305_hw::thread_add_ln395_160_fu_37194_p2() {
    add_ln395_160_fu_37194_p2 = (!zext_ln395_160_fu_37175_p1.read().is_01() || !add_ln395_159_fu_37188_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_160_fu_37175_p1.read()) + sc_biguint<9>(add_ln395_159_fu_37188_p2.read()));
}

void poly1305_hw::thread_add_ln395_161_fu_37270_p2() {
    add_ln395_161_fu_37270_p2 = (!zext_ln395_163_fu_37260_p1.read().is_01() || !select_ln395_80_fu_37263_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_163_fu_37260_p1.read()) + sc_biguint<9>(select_ln395_80_fu_37263_p3.read()));
}

void poly1305_hw::thread_add_ln395_162_fu_37276_p2() {
    add_ln395_162_fu_37276_p2 = (!zext_ln395_162_fu_37257_p1.read().is_01() || !add_ln395_161_fu_37270_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_162_fu_37257_p1.read()) + sc_biguint<9>(add_ln395_161_fu_37270_p2.read()));
}

void poly1305_hw::thread_add_ln395_163_fu_37354_p2() {
    add_ln395_163_fu_37354_p2 = (!zext_ln395_165_fu_37343_p1.read().is_01() || !select_ln395_81_fu_37346_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_165_fu_37343_p1.read()) + sc_biguint<9>(select_ln395_81_fu_37346_p3.read()));
}

void poly1305_hw::thread_add_ln395_164_fu_37360_p2() {
    add_ln395_164_fu_37360_p2 = (!zext_ln395_164_fu_37339_p1.read().is_01() || !add_ln395_163_fu_37354_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_164_fu_37339_p1.read()) + sc_biguint<9>(add_ln395_163_fu_37354_p2.read()));
}

void poly1305_hw::thread_add_ln395_165_fu_37417_p2() {
    add_ln395_165_fu_37417_p2 = (!zext_ln395_167_fu_37407_p1.read().is_01() || !select_ln395_82_fu_37410_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_167_fu_37407_p1.read()) + sc_biguint<9>(select_ln395_82_fu_37410_p3.read()));
}

void poly1305_hw::thread_add_ln395_166_fu_37423_p2() {
    add_ln395_166_fu_37423_p2 = (!zext_ln395_166_fu_37404_p1.read().is_01() || !add_ln395_165_fu_37417_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_166_fu_37404_p1.read()) + sc_biguint<9>(add_ln395_165_fu_37417_p2.read()));
}

void poly1305_hw::thread_add_ln395_167_fu_37502_p2() {
    add_ln395_167_fu_37502_p2 = (!zext_ln395_169_fu_37490_p1.read().is_01() || !select_ln395_83_fu_37494_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_169_fu_37490_p1.read()) + sc_biguint<9>(select_ln395_83_fu_37494_p3.read()));
}

void poly1305_hw::thread_add_ln395_168_fu_37508_p2() {
    add_ln395_168_fu_37508_p2 = (!zext_ln395_168_fu_37486_p1.read().is_01() || !add_ln395_167_fu_37502_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_168_fu_37486_p1.read()) + sc_biguint<9>(add_ln395_167_fu_37502_p2.read()));
}

void poly1305_hw::thread_add_ln395_169_fu_37569_p2() {
    add_ln395_169_fu_37569_p2 = (!zext_ln395_171_fu_37559_p1.read().is_01() || !select_ln395_84_fu_37562_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_171_fu_37559_p1.read()) + sc_biguint<9>(select_ln395_84_fu_37562_p3.read()));
}

void poly1305_hw::thread_add_ln395_16_fu_31711_p2() {
    add_ln395_16_fu_31711_p2 = (!zext_ln395_16_fu_31690_p1.read().is_01() || !add_ln395_15_fu_31705_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_16_fu_31690_p1.read()) + sc_biguint<9>(add_ln395_15_fu_31705_p2.read()));
}

void poly1305_hw::thread_add_ln395_170_fu_37575_p2() {
    add_ln395_170_fu_37575_p2 = (!zext_ln395_170_fu_37556_p1.read().is_01() || !add_ln395_169_fu_37569_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_170_fu_37556_p1.read()) + sc_biguint<9>(add_ln395_169_fu_37569_p2.read()));
}

void poly1305_hw::thread_add_ln395_171_fu_37651_p2() {
    add_ln395_171_fu_37651_p2 = (!zext_ln395_173_fu_37641_p1.read().is_01() || !select_ln395_85_fu_37644_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_173_fu_37641_p1.read()) + sc_biguint<9>(select_ln395_85_fu_37644_p3.read()));
}

void poly1305_hw::thread_add_ln395_172_fu_37657_p2() {
    add_ln395_172_fu_37657_p2 = (!zext_ln395_172_fu_37638_p1.read().is_01() || !add_ln395_171_fu_37651_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_172_fu_37638_p1.read()) + sc_biguint<9>(add_ln395_171_fu_37651_p2.read()));
}

void poly1305_hw::thread_add_ln395_173_fu_37735_p2() {
    add_ln395_173_fu_37735_p2 = (!zext_ln395_175_fu_37724_p1.read().is_01() || !select_ln395_86_fu_37727_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_175_fu_37724_p1.read()) + sc_biguint<9>(select_ln395_86_fu_37727_p3.read()));
}

void poly1305_hw::thread_add_ln395_174_fu_37741_p2() {
    add_ln395_174_fu_37741_p2 = (!zext_ln395_174_fu_37720_p1.read().is_01() || !add_ln395_173_fu_37735_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_174_fu_37720_p1.read()) + sc_biguint<9>(add_ln395_173_fu_37735_p2.read()));
}

void poly1305_hw::thread_add_ln395_175_fu_37798_p2() {
    add_ln395_175_fu_37798_p2 = (!zext_ln395_177_fu_37788_p1.read().is_01() || !select_ln395_87_fu_37791_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_177_fu_37788_p1.read()) + sc_biguint<9>(select_ln395_87_fu_37791_p3.read()));
}

void poly1305_hw::thread_add_ln395_176_fu_37804_p2() {
    add_ln395_176_fu_37804_p2 = (!zext_ln395_176_fu_37785_p1.read().is_01() || !add_ln395_175_fu_37798_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_176_fu_37785_p1.read()) + sc_biguint<9>(add_ln395_175_fu_37798_p2.read()));
}

void poly1305_hw::thread_add_ln395_177_fu_37880_p2() {
    add_ln395_177_fu_37880_p2 = (!zext_ln395_179_fu_37870_p1.read().is_01() || !select_ln395_88_fu_37873_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_179_fu_37870_p1.read()) + sc_biguint<9>(select_ln395_88_fu_37873_p3.read()));
}

void poly1305_hw::thread_add_ln395_178_fu_37886_p2() {
    add_ln395_178_fu_37886_p2 = (!zext_ln395_178_fu_37867_p1.read().is_01() || !add_ln395_177_fu_37880_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_178_fu_37867_p1.read()) + sc_biguint<9>(add_ln395_177_fu_37880_p2.read()));
}

void poly1305_hw::thread_add_ln395_179_fu_37964_p2() {
    add_ln395_179_fu_37964_p2 = (!zext_ln395_181_fu_37953_p1.read().is_01() || !select_ln395_89_fu_37956_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_181_fu_37953_p1.read()) + sc_biguint<9>(select_ln395_89_fu_37956_p3.read()));
}

void poly1305_hw::thread_add_ln395_17_fu_31768_p2() {
    add_ln395_17_fu_31768_p2 = (!zext_ln395_19_fu_31758_p1.read().is_01() || !select_ln395_8_fu_31761_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_19_fu_31758_p1.read()) + sc_biguint<9>(select_ln395_8_fu_31761_p3.read()));
}

void poly1305_hw::thread_add_ln395_180_fu_37970_p2() {
    add_ln395_180_fu_37970_p2 = (!zext_ln395_180_fu_37949_p1.read().is_01() || !add_ln395_179_fu_37964_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_180_fu_37949_p1.read()) + sc_biguint<9>(add_ln395_179_fu_37964_p2.read()));
}

void poly1305_hw::thread_add_ln395_181_fu_38027_p2() {
    add_ln395_181_fu_38027_p2 = (!zext_ln395_183_fu_38017_p1.read().is_01() || !select_ln395_90_fu_38020_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_183_fu_38017_p1.read()) + sc_biguint<9>(select_ln395_90_fu_38020_p3.read()));
}

void poly1305_hw::thread_add_ln395_182_fu_38033_p2() {
    add_ln395_182_fu_38033_p2 = (!zext_ln395_182_fu_38014_p1.read().is_01() || !add_ln395_181_fu_38027_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_182_fu_38014_p1.read()) + sc_biguint<9>(add_ln395_181_fu_38027_p2.read()));
}

void poly1305_hw::thread_add_ln395_183_fu_38109_p2() {
    add_ln395_183_fu_38109_p2 = (!zext_ln395_185_fu_38099_p1.read().is_01() || !select_ln395_91_fu_38102_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_185_fu_38099_p1.read()) + sc_biguint<9>(select_ln395_91_fu_38102_p3.read()));
}

void poly1305_hw::thread_add_ln395_184_fu_38115_p2() {
    add_ln395_184_fu_38115_p2 = (!zext_ln395_184_fu_38096_p1.read().is_01() || !add_ln395_183_fu_38109_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_184_fu_38096_p1.read()) + sc_biguint<9>(add_ln395_183_fu_38109_p2.read()));
}

void poly1305_hw::thread_add_ln395_185_fu_38193_p2() {
    add_ln395_185_fu_38193_p2 = (!zext_ln395_187_fu_38182_p1.read().is_01() || !select_ln395_92_fu_38185_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_187_fu_38182_p1.read()) + sc_biguint<9>(select_ln395_92_fu_38185_p3.read()));
}

void poly1305_hw::thread_add_ln395_186_fu_38199_p2() {
    add_ln395_186_fu_38199_p2 = (!zext_ln395_186_fu_38178_p1.read().is_01() || !add_ln395_185_fu_38193_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_186_fu_38178_p1.read()) + sc_biguint<9>(add_ln395_185_fu_38193_p2.read()));
}

void poly1305_hw::thread_add_ln395_187_fu_38256_p2() {
    add_ln395_187_fu_38256_p2 = (!zext_ln395_189_fu_38246_p1.read().is_01() || !select_ln395_93_fu_38249_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_189_fu_38246_p1.read()) + sc_biguint<9>(select_ln395_93_fu_38249_p3.read()));
}

void poly1305_hw::thread_add_ln395_188_fu_38262_p2() {
    add_ln395_188_fu_38262_p2 = (!zext_ln395_188_fu_38243_p1.read().is_01() || !add_ln395_187_fu_38256_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_188_fu_38243_p1.read()) + sc_biguint<9>(add_ln395_187_fu_38256_p2.read()));
}

void poly1305_hw::thread_add_ln395_189_fu_38338_p2() {
    add_ln395_189_fu_38338_p2 = (!zext_ln395_191_fu_38328_p1.read().is_01() || !select_ln395_94_fu_38331_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_191_fu_38328_p1.read()) + sc_biguint<9>(select_ln395_94_fu_38331_p3.read()));
}

void poly1305_hw::thread_add_ln395_18_fu_31774_p2() {
    add_ln395_18_fu_31774_p2 = (!zext_ln395_18_fu_31755_p1.read().is_01() || !add_ln395_17_fu_31768_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_18_fu_31755_p1.read()) + sc_biguint<9>(add_ln395_17_fu_31768_p2.read()));
}

void poly1305_hw::thread_add_ln395_190_fu_38344_p2() {
    add_ln395_190_fu_38344_p2 = (!zext_ln395_190_fu_38325_p1.read().is_01() || !add_ln395_189_fu_38338_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_190_fu_38325_p1.read()) + sc_biguint<9>(add_ln395_189_fu_38338_p2.read()));
}

void poly1305_hw::thread_add_ln395_191_fu_38422_p2() {
    add_ln395_191_fu_38422_p2 = (!zext_ln395_193_fu_38411_p1.read().is_01() || !select_ln395_95_fu_38414_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_193_fu_38411_p1.read()) + sc_biguint<9>(select_ln395_95_fu_38414_p3.read()));
}

void poly1305_hw::thread_add_ln395_192_fu_38428_p2() {
    add_ln395_192_fu_38428_p2 = (!zext_ln395_192_fu_38407_p1.read().is_01() || !add_ln395_191_fu_38422_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_192_fu_38407_p1.read()) + sc_biguint<9>(add_ln395_191_fu_38422_p2.read()));
}

void poly1305_hw::thread_add_ln395_193_fu_38485_p2() {
    add_ln395_193_fu_38485_p2 = (!zext_ln395_195_fu_38475_p1.read().is_01() || !select_ln395_96_fu_38478_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_195_fu_38475_p1.read()) + sc_biguint<9>(select_ln395_96_fu_38478_p3.read()));
}

void poly1305_hw::thread_add_ln395_194_fu_38491_p2() {
    add_ln395_194_fu_38491_p2 = (!zext_ln395_194_fu_38472_p1.read().is_01() || !add_ln395_193_fu_38485_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_194_fu_38472_p1.read()) + sc_biguint<9>(add_ln395_193_fu_38485_p2.read()));
}

void poly1305_hw::thread_add_ln395_195_fu_38567_p2() {
    add_ln395_195_fu_38567_p2 = (!zext_ln395_197_fu_38557_p1.read().is_01() || !select_ln395_97_fu_38560_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_197_fu_38557_p1.read()) + sc_biguint<9>(select_ln395_97_fu_38560_p3.read()));
}

void poly1305_hw::thread_add_ln395_196_fu_38573_p2() {
    add_ln395_196_fu_38573_p2 = (!zext_ln395_196_fu_38554_p1.read().is_01() || !add_ln395_195_fu_38567_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_196_fu_38554_p1.read()) + sc_biguint<9>(add_ln395_195_fu_38567_p2.read()));
}

void poly1305_hw::thread_add_ln395_197_fu_38651_p2() {
    add_ln395_197_fu_38651_p2 = (!zext_ln395_199_fu_38640_p1.read().is_01() || !select_ln395_98_fu_38643_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_199_fu_38640_p1.read()) + sc_biguint<9>(select_ln395_98_fu_38643_p3.read()));
}

void poly1305_hw::thread_add_ln395_198_fu_38657_p2() {
    add_ln395_198_fu_38657_p2 = (!zext_ln395_198_fu_38636_p1.read().is_01() || !add_ln395_197_fu_38651_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_198_fu_38636_p1.read()) + sc_biguint<9>(add_ln395_197_fu_38651_p2.read()));
}

void poly1305_hw::thread_add_ln395_199_fu_38714_p2() {
    add_ln395_199_fu_38714_p2 = (!zext_ln395_201_fu_38704_p1.read().is_01() || !select_ln395_99_fu_38707_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_201_fu_38704_p1.read()) + sc_biguint<9>(select_ln395_99_fu_38707_p3.read()));
}

void poly1305_hw::thread_add_ln395_19_fu_31850_p2() {
    add_ln395_19_fu_31850_p2 = (!zext_ln395_21_fu_31840_p1.read().is_01() || !select_ln395_9_fu_31843_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_21_fu_31840_p1.read()) + sc_biguint<9>(select_ln395_9_fu_31843_p3.read()));
}

void poly1305_hw::thread_add_ln395_1_fu_31163_p2() {
    add_ln395_1_fu_31163_p2 = (!zext_ln395_3_fu_31153_p1.read().is_01() || !select_ln395_fu_31156_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_3_fu_31153_p1.read()) + sc_biguint<9>(select_ln395_fu_31156_p3.read()));
}

void poly1305_hw::thread_add_ln395_200_fu_38720_p2() {
    add_ln395_200_fu_38720_p2 = (!zext_ln395_200_fu_38701_p1.read().is_01() || !add_ln395_199_fu_38714_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_200_fu_38701_p1.read()) + sc_biguint<9>(add_ln395_199_fu_38714_p2.read()));
}

void poly1305_hw::thread_add_ln395_201_fu_38799_p2() {
    add_ln395_201_fu_38799_p2 = (!zext_ln395_203_fu_38787_p1.read().is_01() || !select_ln395_100_fu_38791_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_203_fu_38787_p1.read()) + sc_biguint<9>(select_ln395_100_fu_38791_p3.read()));
}

void poly1305_hw::thread_add_ln395_202_fu_38805_p2() {
    add_ln395_202_fu_38805_p2 = (!zext_ln395_202_fu_38783_p1.read().is_01() || !add_ln395_201_fu_38799_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_202_fu_38783_p1.read()) + sc_biguint<9>(add_ln395_201_fu_38799_p2.read()));
}

void poly1305_hw::thread_add_ln395_203_fu_38866_p2() {
    add_ln395_203_fu_38866_p2 = (!zext_ln395_205_fu_38856_p1.read().is_01() || !select_ln395_101_fu_38859_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_205_fu_38856_p1.read()) + sc_biguint<9>(select_ln395_101_fu_38859_p3.read()));
}

void poly1305_hw::thread_add_ln395_204_fu_38872_p2() {
    add_ln395_204_fu_38872_p2 = (!zext_ln395_204_fu_38853_p1.read().is_01() || !add_ln395_203_fu_38866_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_204_fu_38853_p1.read()) + sc_biguint<9>(add_ln395_203_fu_38866_p2.read()));
}

void poly1305_hw::thread_add_ln395_205_fu_38948_p2() {
    add_ln395_205_fu_38948_p2 = (!zext_ln395_207_fu_38938_p1.read().is_01() || !select_ln395_102_fu_38941_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_207_fu_38938_p1.read()) + sc_biguint<9>(select_ln395_102_fu_38941_p3.read()));
}

void poly1305_hw::thread_add_ln395_206_fu_38954_p2() {
    add_ln395_206_fu_38954_p2 = (!zext_ln395_206_fu_38935_p1.read().is_01() || !add_ln395_205_fu_38948_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_206_fu_38935_p1.read()) + sc_biguint<9>(add_ln395_205_fu_38948_p2.read()));
}

void poly1305_hw::thread_add_ln395_207_fu_39032_p2() {
    add_ln395_207_fu_39032_p2 = (!zext_ln395_209_fu_39021_p1.read().is_01() || !select_ln395_103_fu_39024_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_209_fu_39021_p1.read()) + sc_biguint<9>(select_ln395_103_fu_39024_p3.read()));
}

void poly1305_hw::thread_add_ln395_208_fu_39038_p2() {
    add_ln395_208_fu_39038_p2 = (!zext_ln395_208_fu_39017_p1.read().is_01() || !add_ln395_207_fu_39032_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_208_fu_39017_p1.read()) + sc_biguint<9>(add_ln395_207_fu_39032_p2.read()));
}

void poly1305_hw::thread_add_ln395_209_fu_39095_p2() {
    add_ln395_209_fu_39095_p2 = (!zext_ln395_211_fu_39085_p1.read().is_01() || !select_ln395_104_fu_39088_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_211_fu_39085_p1.read()) + sc_biguint<9>(select_ln395_104_fu_39088_p3.read()));
}

void poly1305_hw::thread_add_ln395_20_fu_31856_p2() {
    add_ln395_20_fu_31856_p2 = (!zext_ln395_20_fu_31837_p1.read().is_01() || !add_ln395_19_fu_31850_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_20_fu_31837_p1.read()) + sc_biguint<9>(add_ln395_19_fu_31850_p2.read()));
}

void poly1305_hw::thread_add_ln395_210_fu_39101_p2() {
    add_ln395_210_fu_39101_p2 = (!zext_ln395_210_fu_39082_p1.read().is_01() || !add_ln395_209_fu_39095_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_210_fu_39082_p1.read()) + sc_biguint<9>(add_ln395_209_fu_39095_p2.read()));
}

void poly1305_hw::thread_add_ln395_211_fu_39177_p2() {
    add_ln395_211_fu_39177_p2 = (!zext_ln395_213_fu_39167_p1.read().is_01() || !select_ln395_105_fu_39170_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_213_fu_39167_p1.read()) + sc_biguint<9>(select_ln395_105_fu_39170_p3.read()));
}

void poly1305_hw::thread_add_ln395_212_fu_39183_p2() {
    add_ln395_212_fu_39183_p2 = (!zext_ln395_212_fu_39164_p1.read().is_01() || !add_ln395_211_fu_39177_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_212_fu_39164_p1.read()) + sc_biguint<9>(add_ln395_211_fu_39177_p2.read()));
}

void poly1305_hw::thread_add_ln395_213_fu_39261_p2() {
    add_ln395_213_fu_39261_p2 = (!zext_ln395_215_fu_39250_p1.read().is_01() || !select_ln395_106_fu_39253_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_215_fu_39250_p1.read()) + sc_biguint<9>(select_ln395_106_fu_39253_p3.read()));
}

void poly1305_hw::thread_add_ln395_214_fu_39267_p2() {
    add_ln395_214_fu_39267_p2 = (!zext_ln395_214_fu_39246_p1.read().is_01() || !add_ln395_213_fu_39261_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_214_fu_39246_p1.read()) + sc_biguint<9>(add_ln395_213_fu_39261_p2.read()));
}

void poly1305_hw::thread_add_ln395_215_fu_39324_p2() {
    add_ln395_215_fu_39324_p2 = (!zext_ln395_217_fu_39314_p1.read().is_01() || !select_ln395_107_fu_39317_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_217_fu_39314_p1.read()) + sc_biguint<9>(select_ln395_107_fu_39317_p3.read()));
}

void poly1305_hw::thread_add_ln395_216_fu_39330_p2() {
    add_ln395_216_fu_39330_p2 = (!zext_ln395_216_fu_39311_p1.read().is_01() || !add_ln395_215_fu_39324_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_216_fu_39311_p1.read()) + sc_biguint<9>(add_ln395_215_fu_39324_p2.read()));
}

void poly1305_hw::thread_add_ln395_217_fu_39406_p2() {
    add_ln395_217_fu_39406_p2 = (!zext_ln395_219_fu_39396_p1.read().is_01() || !select_ln395_108_fu_39399_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_219_fu_39396_p1.read()) + sc_biguint<9>(select_ln395_108_fu_39399_p3.read()));
}

void poly1305_hw::thread_add_ln395_218_fu_39412_p2() {
    add_ln395_218_fu_39412_p2 = (!zext_ln395_218_fu_39393_p1.read().is_01() || !add_ln395_217_fu_39406_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_218_fu_39393_p1.read()) + sc_biguint<9>(add_ln395_217_fu_39406_p2.read()));
}

void poly1305_hw::thread_add_ln395_219_fu_39490_p2() {
    add_ln395_219_fu_39490_p2 = (!zext_ln395_221_fu_39479_p1.read().is_01() || !select_ln395_109_fu_39482_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_221_fu_39479_p1.read()) + sc_biguint<9>(select_ln395_109_fu_39482_p3.read()));
}

void poly1305_hw::thread_add_ln395_21_fu_31934_p2() {
    add_ln395_21_fu_31934_p2 = (!zext_ln395_23_fu_31923_p1.read().is_01() || !select_ln395_10_fu_31926_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_23_fu_31923_p1.read()) + sc_biguint<9>(select_ln395_10_fu_31926_p3.read()));
}

void poly1305_hw::thread_add_ln395_220_fu_39496_p2() {
    add_ln395_220_fu_39496_p2 = (!zext_ln395_220_fu_39475_p1.read().is_01() || !add_ln395_219_fu_39490_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_220_fu_39475_p1.read()) + sc_biguint<9>(add_ln395_219_fu_39490_p2.read()));
}

void poly1305_hw::thread_add_ln395_221_fu_39553_p2() {
    add_ln395_221_fu_39553_p2 = (!zext_ln395_223_fu_39543_p1.read().is_01() || !select_ln395_110_fu_39546_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_223_fu_39543_p1.read()) + sc_biguint<9>(select_ln395_110_fu_39546_p3.read()));
}

void poly1305_hw::thread_add_ln395_222_fu_39559_p2() {
    add_ln395_222_fu_39559_p2 = (!zext_ln395_222_fu_39540_p1.read().is_01() || !add_ln395_221_fu_39553_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_222_fu_39540_p1.read()) + sc_biguint<9>(add_ln395_221_fu_39553_p2.read()));
}

void poly1305_hw::thread_add_ln395_223_fu_39635_p2() {
    add_ln395_223_fu_39635_p2 = (!zext_ln395_225_fu_39625_p1.read().is_01() || !select_ln395_111_fu_39628_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_225_fu_39625_p1.read()) + sc_biguint<9>(select_ln395_111_fu_39628_p3.read()));
}

void poly1305_hw::thread_add_ln395_224_fu_39641_p2() {
    add_ln395_224_fu_39641_p2 = (!zext_ln395_224_fu_39622_p1.read().is_01() || !add_ln395_223_fu_39635_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_224_fu_39622_p1.read()) + sc_biguint<9>(add_ln395_223_fu_39635_p2.read()));
}

void poly1305_hw::thread_add_ln395_225_fu_39719_p2() {
    add_ln395_225_fu_39719_p2 = (!zext_ln395_227_fu_39708_p1.read().is_01() || !select_ln395_112_fu_39711_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_227_fu_39708_p1.read()) + sc_biguint<9>(select_ln395_112_fu_39711_p3.read()));
}

void poly1305_hw::thread_add_ln395_226_fu_39725_p2() {
    add_ln395_226_fu_39725_p2 = (!zext_ln395_226_fu_39704_p1.read().is_01() || !add_ln395_225_fu_39719_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_226_fu_39704_p1.read()) + sc_biguint<9>(add_ln395_225_fu_39719_p2.read()));
}

void poly1305_hw::thread_add_ln395_227_fu_39782_p2() {
    add_ln395_227_fu_39782_p2 = (!zext_ln395_229_fu_39772_p1.read().is_01() || !select_ln395_113_fu_39775_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_229_fu_39772_p1.read()) + sc_biguint<9>(select_ln395_113_fu_39775_p3.read()));
}

void poly1305_hw::thread_add_ln395_228_fu_39788_p2() {
    add_ln395_228_fu_39788_p2 = (!zext_ln395_228_fu_39769_p1.read().is_01() || !add_ln395_227_fu_39782_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_228_fu_39769_p1.read()) + sc_biguint<9>(add_ln395_227_fu_39782_p2.read()));
}

void poly1305_hw::thread_add_ln395_229_fu_39864_p2() {
    add_ln395_229_fu_39864_p2 = (!zext_ln395_231_fu_39854_p1.read().is_01() || !select_ln395_114_fu_39857_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_231_fu_39854_p1.read()) + sc_biguint<9>(select_ln395_114_fu_39857_p3.read()));
}

void poly1305_hw::thread_add_ln395_22_fu_31940_p2() {
    add_ln395_22_fu_31940_p2 = (!zext_ln395_22_fu_31919_p1.read().is_01() || !add_ln395_21_fu_31934_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_22_fu_31919_p1.read()) + sc_biguint<9>(add_ln395_21_fu_31934_p2.read()));
}

void poly1305_hw::thread_add_ln395_230_fu_39870_p2() {
    add_ln395_230_fu_39870_p2 = (!zext_ln395_230_fu_39851_p1.read().is_01() || !add_ln395_229_fu_39864_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_230_fu_39851_p1.read()) + sc_biguint<9>(add_ln395_229_fu_39864_p2.read()));
}

void poly1305_hw::thread_add_ln395_231_fu_39948_p2() {
    add_ln395_231_fu_39948_p2 = (!zext_ln395_233_fu_39937_p1.read().is_01() || !select_ln395_115_fu_39940_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_233_fu_39937_p1.read()) + sc_biguint<9>(select_ln395_115_fu_39940_p3.read()));
}

void poly1305_hw::thread_add_ln395_232_fu_39954_p2() {
    add_ln395_232_fu_39954_p2 = (!zext_ln395_232_fu_39933_p1.read().is_01() || !add_ln395_231_fu_39948_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_232_fu_39933_p1.read()) + sc_biguint<9>(add_ln395_231_fu_39948_p2.read()));
}

void poly1305_hw::thread_add_ln395_233_fu_40011_p2() {
    add_ln395_233_fu_40011_p2 = (!zext_ln395_235_fu_40001_p1.read().is_01() || !select_ln395_116_fu_40004_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_235_fu_40001_p1.read()) + sc_biguint<9>(select_ln395_116_fu_40004_p3.read()));
}

void poly1305_hw::thread_add_ln395_234_fu_40017_p2() {
    add_ln395_234_fu_40017_p2 = (!zext_ln395_234_fu_39998_p1.read().is_01() || !add_ln395_233_fu_40011_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_234_fu_39998_p1.read()) + sc_biguint<9>(add_ln395_233_fu_40011_p2.read()));
}

void poly1305_hw::thread_add_ln395_235_fu_40096_p2() {
    add_ln395_235_fu_40096_p2 = (!zext_ln395_237_fu_40084_p1.read().is_01() || !select_ln395_117_fu_40088_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_237_fu_40084_p1.read()) + sc_biguint<9>(select_ln395_117_fu_40088_p3.read()));
}

void poly1305_hw::thread_add_ln395_236_fu_40102_p2() {
    add_ln395_236_fu_40102_p2 = (!zext_ln395_236_fu_40080_p1.read().is_01() || !add_ln395_235_fu_40096_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_236_fu_40080_p1.read()) + sc_biguint<9>(add_ln395_235_fu_40096_p2.read()));
}

void poly1305_hw::thread_add_ln395_237_fu_40167_p2() {
    add_ln395_237_fu_40167_p2 = (!zext_ln395_239_fu_40157_p1.read().is_01() || !select_ln395_118_fu_40160_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_239_fu_40157_p1.read()) + sc_biguint<9>(select_ln395_118_fu_40160_p3.read()));
}

void poly1305_hw::thread_add_ln395_238_fu_40173_p2() {
    add_ln395_238_fu_40173_p2 = (!zext_ln395_238_fu_40154_p1.read().is_01() || !add_ln395_237_fu_40167_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_238_fu_40154_p1.read()) + sc_biguint<9>(add_ln395_237_fu_40167_p2.read()));
}

void poly1305_hw::thread_add_ln395_239_fu_40249_p2() {
    add_ln395_239_fu_40249_p2 = (!zext_ln395_241_fu_40239_p1.read().is_01() || !select_ln395_119_fu_40242_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_241_fu_40239_p1.read()) + sc_biguint<9>(select_ln395_119_fu_40242_p3.read()));
}

void poly1305_hw::thread_add_ln395_23_fu_31997_p2() {
    add_ln395_23_fu_31997_p2 = (!zext_ln395_25_fu_31987_p1.read().is_01() || !select_ln395_11_fu_31990_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_25_fu_31987_p1.read()) + sc_biguint<9>(select_ln395_11_fu_31990_p3.read()));
}

void poly1305_hw::thread_add_ln395_240_fu_40255_p2() {
    add_ln395_240_fu_40255_p2 = (!zext_ln395_240_fu_40236_p1.read().is_01() || !add_ln395_239_fu_40249_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_240_fu_40236_p1.read()) + sc_biguint<9>(add_ln395_239_fu_40249_p2.read()));
}

void poly1305_hw::thread_add_ln395_241_fu_40333_p2() {
    add_ln395_241_fu_40333_p2 = (!zext_ln395_243_fu_40322_p1.read().is_01() || !select_ln395_120_fu_40325_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_243_fu_40322_p1.read()) + sc_biguint<9>(select_ln395_120_fu_40325_p3.read()));
}

void poly1305_hw::thread_add_ln395_242_fu_40339_p2() {
    add_ln395_242_fu_40339_p2 = (!zext_ln395_242_fu_40318_p1.read().is_01() || !add_ln395_241_fu_40333_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_242_fu_40318_p1.read()) + sc_biguint<9>(add_ln395_241_fu_40333_p2.read()));
}

void poly1305_hw::thread_add_ln395_243_fu_40396_p2() {
    add_ln395_243_fu_40396_p2 = (!zext_ln395_245_fu_40386_p1.read().is_01() || !select_ln395_121_fu_40389_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_245_fu_40386_p1.read()) + sc_biguint<9>(select_ln395_121_fu_40389_p3.read()));
}

void poly1305_hw::thread_add_ln395_244_fu_40402_p2() {
    add_ln395_244_fu_40402_p2 = (!zext_ln395_244_fu_40383_p1.read().is_01() || !add_ln395_243_fu_40396_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_244_fu_40383_p1.read()) + sc_biguint<9>(add_ln395_243_fu_40396_p2.read()));
}

void poly1305_hw::thread_add_ln395_245_fu_40478_p2() {
    add_ln395_245_fu_40478_p2 = (!zext_ln395_247_fu_40468_p1.read().is_01() || !select_ln395_122_fu_40471_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_247_fu_40468_p1.read()) + sc_biguint<9>(select_ln395_122_fu_40471_p3.read()));
}

void poly1305_hw::thread_add_ln395_246_fu_40484_p2() {
    add_ln395_246_fu_40484_p2 = (!zext_ln395_246_fu_40465_p1.read().is_01() || !add_ln395_245_fu_40478_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_246_fu_40465_p1.read()) + sc_biguint<9>(add_ln395_245_fu_40478_p2.read()));
}

void poly1305_hw::thread_add_ln395_247_fu_40562_p2() {
    add_ln395_247_fu_40562_p2 = (!zext_ln395_249_fu_40551_p1.read().is_01() || !select_ln395_123_fu_40554_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_249_fu_40551_p1.read()) + sc_biguint<9>(select_ln395_123_fu_40554_p3.read()));
}

void poly1305_hw::thread_add_ln395_248_fu_40568_p2() {
    add_ln395_248_fu_40568_p2 = (!zext_ln395_248_fu_40547_p1.read().is_01() || !add_ln395_247_fu_40562_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_248_fu_40547_p1.read()) + sc_biguint<9>(add_ln395_247_fu_40562_p2.read()));
}

void poly1305_hw::thread_add_ln395_249_fu_40625_p2() {
    add_ln395_249_fu_40625_p2 = (!zext_ln395_251_fu_40615_p1.read().is_01() || !select_ln395_124_fu_40618_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_251_fu_40615_p1.read()) + sc_biguint<9>(select_ln395_124_fu_40618_p3.read()));
}

void poly1305_hw::thread_add_ln395_24_fu_32003_p2() {
    add_ln395_24_fu_32003_p2 = (!zext_ln395_24_fu_31984_p1.read().is_01() || !add_ln395_23_fu_31997_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_24_fu_31984_p1.read()) + sc_biguint<9>(add_ln395_23_fu_31997_p2.read()));
}

void poly1305_hw::thread_add_ln395_250_fu_40631_p2() {
    add_ln395_250_fu_40631_p2 = (!zext_ln395_250_fu_40612_p1.read().is_01() || !add_ln395_249_fu_40625_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_250_fu_40612_p1.read()) + sc_biguint<9>(add_ln395_249_fu_40625_p2.read()));
}

void poly1305_hw::thread_add_ln395_251_fu_40707_p2() {
    add_ln395_251_fu_40707_p2 = (!zext_ln395_253_fu_40697_p1.read().is_01() || !select_ln395_125_fu_40700_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_253_fu_40697_p1.read()) + sc_biguint<9>(select_ln395_125_fu_40700_p3.read()));
}

void poly1305_hw::thread_add_ln395_252_fu_40713_p2() {
    add_ln395_252_fu_40713_p2 = (!zext_ln395_252_fu_40694_p1.read().is_01() || !add_ln395_251_fu_40707_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_252_fu_40694_p1.read()) + sc_biguint<9>(add_ln395_251_fu_40707_p2.read()));
}

void poly1305_hw::thread_add_ln395_253_fu_40791_p2() {
    add_ln395_253_fu_40791_p2 = (!zext_ln395_255_fu_40780_p1.read().is_01() || !select_ln395_126_fu_40783_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_255_fu_40780_p1.read()) + sc_biguint<9>(select_ln395_126_fu_40783_p3.read()));
}

void poly1305_hw::thread_add_ln395_254_fu_40797_p2() {
    add_ln395_254_fu_40797_p2 = (!zext_ln395_254_fu_40776_p1.read().is_01() || !add_ln395_253_fu_40791_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_254_fu_40776_p1.read()) + sc_biguint<9>(add_ln395_253_fu_40791_p2.read()));
}

void poly1305_hw::thread_add_ln395_255_fu_40854_p2() {
    add_ln395_255_fu_40854_p2 = (!zext_ln395_257_fu_40844_p1.read().is_01() || !select_ln395_127_fu_40847_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_257_fu_40844_p1.read()) + sc_biguint<9>(select_ln395_127_fu_40847_p3.read()));
}

void poly1305_hw::thread_add_ln395_256_fu_40860_p2() {
    add_ln395_256_fu_40860_p2 = (!zext_ln395_256_fu_40841_p1.read().is_01() || !add_ln395_255_fu_40854_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_256_fu_40841_p1.read()) + sc_biguint<9>(add_ln395_255_fu_40854_p2.read()));
}

void poly1305_hw::thread_add_ln395_257_fu_40936_p2() {
    add_ln395_257_fu_40936_p2 = (!zext_ln395_259_fu_40926_p1.read().is_01() || !select_ln395_128_fu_40929_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_259_fu_40926_p1.read()) + sc_biguint<9>(select_ln395_128_fu_40929_p3.read()));
}

void poly1305_hw::thread_add_ln395_258_fu_40942_p2() {
    add_ln395_258_fu_40942_p2 = (!zext_ln395_258_fu_40923_p1.read().is_01() || !add_ln395_257_fu_40936_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_258_fu_40923_p1.read()) + sc_biguint<9>(add_ln395_257_fu_40936_p2.read()));
}

void poly1305_hw::thread_add_ln395_259_fu_41020_p2() {
    add_ln395_259_fu_41020_p2 = (!zext_ln395_261_fu_41009_p1.read().is_01() || !select_ln395_129_fu_41012_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_261_fu_41009_p1.read()) + sc_biguint<9>(select_ln395_129_fu_41012_p3.read()));
}

void poly1305_hw::thread_add_ln395_25_fu_32079_p2() {
    add_ln395_25_fu_32079_p2 = (!zext_ln395_27_fu_32069_p1.read().is_01() || !select_ln395_12_fu_32072_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_27_fu_32069_p1.read()) + sc_biguint<9>(select_ln395_12_fu_32072_p3.read()));
}

void poly1305_hw::thread_add_ln395_260_fu_41026_p2() {
    add_ln395_260_fu_41026_p2 = (!zext_ln395_260_fu_41005_p1.read().is_01() || !add_ln395_259_fu_41020_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_260_fu_41005_p1.read()) + sc_biguint<9>(add_ln395_259_fu_41020_p2.read()));
}

void poly1305_hw::thread_add_ln395_261_fu_41083_p2() {
    add_ln395_261_fu_41083_p2 = (!zext_ln395_263_fu_41073_p1.read().is_01() || !select_ln395_130_fu_41076_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_263_fu_41073_p1.read()) + sc_biguint<9>(select_ln395_130_fu_41076_p3.read()));
}

void poly1305_hw::thread_add_ln395_262_fu_41089_p2() {
    add_ln395_262_fu_41089_p2 = (!zext_ln395_262_fu_41070_p1.read().is_01() || !add_ln395_261_fu_41083_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_262_fu_41070_p1.read()) + sc_biguint<9>(add_ln395_261_fu_41083_p2.read()));
}

void poly1305_hw::thread_add_ln395_263_fu_41165_p2() {
    add_ln395_263_fu_41165_p2 = (!zext_ln395_265_fu_41155_p1.read().is_01() || !select_ln395_131_fu_41158_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_265_fu_41155_p1.read()) + sc_biguint<9>(select_ln395_131_fu_41158_p3.read()));
}

void poly1305_hw::thread_add_ln395_264_fu_41171_p2() {
    add_ln395_264_fu_41171_p2 = (!zext_ln395_264_fu_41152_p1.read().is_01() || !add_ln395_263_fu_41165_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_264_fu_41152_p1.read()) + sc_biguint<9>(add_ln395_263_fu_41165_p2.read()));
}

void poly1305_hw::thread_add_ln395_265_fu_41249_p2() {
    add_ln395_265_fu_41249_p2 = (!zext_ln395_267_fu_41238_p1.read().is_01() || !select_ln395_132_fu_41241_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_267_fu_41238_p1.read()) + sc_biguint<9>(select_ln395_132_fu_41241_p3.read()));
}

void poly1305_hw::thread_add_ln395_266_fu_41255_p2() {
    add_ln395_266_fu_41255_p2 = (!zext_ln395_266_fu_41234_p1.read().is_01() || !add_ln395_265_fu_41249_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_266_fu_41234_p1.read()) + sc_biguint<9>(add_ln395_265_fu_41249_p2.read()));
}

void poly1305_hw::thread_add_ln395_267_fu_41312_p2() {
    add_ln395_267_fu_41312_p2 = (!zext_ln395_269_fu_41302_p1.read().is_01() || !select_ln395_133_fu_41305_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_269_fu_41302_p1.read()) + sc_biguint<9>(select_ln395_133_fu_41305_p3.read()));
}

void poly1305_hw::thread_add_ln395_268_fu_41318_p2() {
    add_ln395_268_fu_41318_p2 = (!zext_ln395_268_fu_41299_p1.read().is_01() || !add_ln395_267_fu_41312_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_268_fu_41299_p1.read()) + sc_biguint<9>(add_ln395_267_fu_41312_p2.read()));
}

void poly1305_hw::thread_add_ln395_269_fu_41393_p2() {
    add_ln395_269_fu_41393_p2 = (!mul_24_1_reg_10210.read().is_01() || !select_ln395_134_fu_41385_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(mul_24_1_reg_10210.read()) + sc_biguint<4>(select_ln395_134_fu_41385_p3.read()));
}

void poly1305_hw::thread_add_ln395_26_fu_32085_p2() {
    add_ln395_26_fu_32085_p2 = (!zext_ln395_26_fu_32066_p1.read().is_01() || !add_ln395_25_fu_32079_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_26_fu_32066_p1.read()) + sc_biguint<9>(add_ln395_25_fu_32079_p2.read()));
}

void poly1305_hw::thread_add_ln395_270_fu_41403_p2() {
    add_ln395_270_fu_41403_p2 = (!zext_ln395_270_fu_41381_p1.read().is_01() || !zext_ln395_271_fu_41399_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_270_fu_41381_p1.read()) + sc_biguint<9>(zext_ln395_271_fu_41399_p1.read()));
}

void poly1305_hw::thread_add_ln395_271_fu_41463_p2() {
    add_ln395_271_fu_41463_p2 = (!zext_ln395_273_fu_41453_p1.read().is_01() || !select_ln395_135_fu_41456_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_273_fu_41453_p1.read()) + sc_biguint<9>(select_ln395_135_fu_41456_p3.read()));
}

void poly1305_hw::thread_add_ln395_272_fu_41469_p2() {
    add_ln395_272_fu_41469_p2 = (!zext_ln395_272_fu_41450_p1.read().is_01() || !add_ln395_271_fu_41463_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_272_fu_41450_p1.read()) + sc_biguint<9>(add_ln395_271_fu_41463_p2.read()));
}

void poly1305_hw::thread_add_ln395_273_fu_41545_p2() {
    add_ln395_273_fu_41545_p2 = (!zext_ln395_275_fu_41535_p1.read().is_01() || !select_ln395_136_fu_41538_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_275_fu_41535_p1.read()) + sc_biguint<9>(select_ln395_136_fu_41538_p3.read()));
}

void poly1305_hw::thread_add_ln395_274_fu_41551_p2() {
    add_ln395_274_fu_41551_p2 = (!zext_ln395_274_fu_41532_p1.read().is_01() || !add_ln395_273_fu_41545_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_274_fu_41532_p1.read()) + sc_biguint<9>(add_ln395_273_fu_41545_p2.read()));
}

void poly1305_hw::thread_add_ln395_275_fu_41629_p2() {
    add_ln395_275_fu_41629_p2 = (!zext_ln395_277_fu_41618_p1.read().is_01() || !select_ln395_137_fu_41621_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_277_fu_41618_p1.read()) + sc_biguint<9>(select_ln395_137_fu_41621_p3.read()));
}

void poly1305_hw::thread_add_ln395_276_fu_41635_p2() {
    add_ln395_276_fu_41635_p2 = (!zext_ln395_276_fu_41614_p1.read().is_01() || !add_ln395_275_fu_41629_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_276_fu_41614_p1.read()) + sc_biguint<9>(add_ln395_275_fu_41629_p2.read()));
}

void poly1305_hw::thread_add_ln395_277_fu_41692_p2() {
    add_ln395_277_fu_41692_p2 = (!zext_ln395_279_fu_41682_p1.read().is_01() || !select_ln395_138_fu_41685_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_279_fu_41682_p1.read()) + sc_biguint<9>(select_ln395_138_fu_41685_p3.read()));
}

void poly1305_hw::thread_add_ln395_278_fu_41698_p2() {
    add_ln395_278_fu_41698_p2 = (!zext_ln395_278_fu_41679_p1.read().is_01() || !add_ln395_277_fu_41692_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_278_fu_41679_p1.read()) + sc_biguint<9>(add_ln395_277_fu_41692_p2.read()));
}

void poly1305_hw::thread_add_ln395_279_fu_41774_p2() {
    add_ln395_279_fu_41774_p2 = (!zext_ln395_281_fu_41764_p1.read().is_01() || !select_ln395_139_fu_41767_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_281_fu_41764_p1.read()) + sc_biguint<9>(select_ln395_139_fu_41767_p3.read()));
}

void poly1305_hw::thread_add_ln395_27_fu_32163_p2() {
    add_ln395_27_fu_32163_p2 = (!zext_ln395_29_fu_32152_p1.read().is_01() || !select_ln395_13_fu_32155_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_29_fu_32152_p1.read()) + sc_biguint<9>(select_ln395_13_fu_32155_p3.read()));
}

void poly1305_hw::thread_add_ln395_280_fu_41780_p2() {
    add_ln395_280_fu_41780_p2 = (!zext_ln395_280_fu_41761_p1.read().is_01() || !add_ln395_279_fu_41774_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_280_fu_41761_p1.read()) + sc_biguint<9>(add_ln395_279_fu_41774_p2.read()));
}

void poly1305_hw::thread_add_ln395_281_fu_41858_p2() {
    add_ln395_281_fu_41858_p2 = (!zext_ln395_283_fu_41847_p1.read().is_01() || !select_ln395_140_fu_41850_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_283_fu_41847_p1.read()) + sc_biguint<9>(select_ln395_140_fu_41850_p3.read()));
}

void poly1305_hw::thread_add_ln395_282_fu_41864_p2() {
    add_ln395_282_fu_41864_p2 = (!zext_ln395_282_fu_41843_p1.read().is_01() || !add_ln395_281_fu_41858_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_282_fu_41843_p1.read()) + sc_biguint<9>(add_ln395_281_fu_41858_p2.read()));
}

void poly1305_hw::thread_add_ln395_283_fu_41921_p2() {
    add_ln395_283_fu_41921_p2 = (!zext_ln395_285_fu_41911_p1.read().is_01() || !select_ln395_141_fu_41914_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_285_fu_41911_p1.read()) + sc_biguint<9>(select_ln395_141_fu_41914_p3.read()));
}

void poly1305_hw::thread_add_ln395_284_fu_41927_p2() {
    add_ln395_284_fu_41927_p2 = (!zext_ln395_284_fu_41908_p1.read().is_01() || !add_ln395_283_fu_41921_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_284_fu_41908_p1.read()) + sc_biguint<9>(add_ln395_283_fu_41921_p2.read()));
}

void poly1305_hw::thread_add_ln395_285_fu_42003_p2() {
    add_ln395_285_fu_42003_p2 = (!zext_ln395_287_fu_41993_p1.read().is_01() || !select_ln395_142_fu_41996_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_287_fu_41993_p1.read()) + sc_biguint<9>(select_ln395_142_fu_41996_p3.read()));
}

void poly1305_hw::thread_add_ln395_286_fu_42009_p2() {
    add_ln395_286_fu_42009_p2 = (!zext_ln395_286_fu_41990_p1.read().is_01() || !add_ln395_285_fu_42003_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_286_fu_41990_p1.read()) + sc_biguint<9>(add_ln395_285_fu_42003_p2.read()));
}

void poly1305_hw::thread_add_ln395_287_fu_42087_p2() {
    add_ln395_287_fu_42087_p2 = (!zext_ln395_289_fu_42076_p1.read().is_01() || !select_ln395_143_fu_42079_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_289_fu_42076_p1.read()) + sc_biguint<9>(select_ln395_143_fu_42079_p3.read()));
}

void poly1305_hw::thread_add_ln395_288_fu_42093_p2() {
    add_ln395_288_fu_42093_p2 = (!zext_ln395_288_fu_42072_p1.read().is_01() || !add_ln395_287_fu_42087_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_288_fu_42072_p1.read()) + sc_biguint<9>(add_ln395_287_fu_42087_p2.read()));
}

void poly1305_hw::thread_add_ln395_289_fu_42150_p2() {
    add_ln395_289_fu_42150_p2 = (!zext_ln395_291_fu_42140_p1.read().is_01() || !select_ln395_144_fu_42143_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_291_fu_42140_p1.read()) + sc_biguint<9>(select_ln395_144_fu_42143_p3.read()));
}

void poly1305_hw::thread_add_ln395_28_fu_32169_p2() {
    add_ln395_28_fu_32169_p2 = (!zext_ln395_28_fu_32148_p1.read().is_01() || !add_ln395_27_fu_32163_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_28_fu_32148_p1.read()) + sc_biguint<9>(add_ln395_27_fu_32163_p2.read()));
}

void poly1305_hw::thread_add_ln395_290_fu_42156_p2() {
    add_ln395_290_fu_42156_p2 = (!zext_ln395_290_fu_42137_p1.read().is_01() || !add_ln395_289_fu_42150_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_290_fu_42137_p1.read()) + sc_biguint<9>(add_ln395_289_fu_42150_p2.read()));
}

void poly1305_hw::thread_add_ln395_291_fu_42232_p2() {
    add_ln395_291_fu_42232_p2 = (!zext_ln395_293_fu_42222_p1.read().is_01() || !select_ln395_145_fu_42225_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_293_fu_42222_p1.read()) + sc_biguint<9>(select_ln395_145_fu_42225_p3.read()));
}

void poly1305_hw::thread_add_ln395_292_fu_42238_p2() {
    add_ln395_292_fu_42238_p2 = (!zext_ln395_292_fu_42219_p1.read().is_01() || !add_ln395_291_fu_42232_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_292_fu_42219_p1.read()) + sc_biguint<9>(add_ln395_291_fu_42232_p2.read()));
}

void poly1305_hw::thread_add_ln395_293_fu_42316_p2() {
    add_ln395_293_fu_42316_p2 = (!zext_ln395_295_fu_42305_p1.read().is_01() || !select_ln395_146_fu_42308_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_295_fu_42305_p1.read()) + sc_biguint<9>(select_ln395_146_fu_42308_p3.read()));
}

void poly1305_hw::thread_add_ln395_294_fu_42322_p2() {
    add_ln395_294_fu_42322_p2 = (!zext_ln395_294_fu_42301_p1.read().is_01() || !add_ln395_293_fu_42316_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_294_fu_42301_p1.read()) + sc_biguint<9>(add_ln395_293_fu_42316_p2.read()));
}

void poly1305_hw::thread_add_ln395_295_fu_42379_p2() {
    add_ln395_295_fu_42379_p2 = (!zext_ln395_297_fu_42369_p1.read().is_01() || !select_ln395_147_fu_42372_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_297_fu_42369_p1.read()) + sc_biguint<9>(select_ln395_147_fu_42372_p3.read()));
}

void poly1305_hw::thread_add_ln395_296_fu_42385_p2() {
    add_ln395_296_fu_42385_p2 = (!zext_ln395_296_fu_42366_p1.read().is_01() || !add_ln395_295_fu_42379_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_296_fu_42366_p1.read()) + sc_biguint<9>(add_ln395_295_fu_42379_p2.read()));
}

void poly1305_hw::thread_add_ln395_297_fu_42461_p2() {
    add_ln395_297_fu_42461_p2 = (!zext_ln395_299_fu_42451_p1.read().is_01() || !select_ln395_148_fu_42454_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_299_fu_42451_p1.read()) + sc_biguint<9>(select_ln395_148_fu_42454_p3.read()));
}

void poly1305_hw::thread_add_ln395_298_fu_42467_p2() {
    add_ln395_298_fu_42467_p2 = (!zext_ln395_298_fu_42448_p1.read().is_01() || !add_ln395_297_fu_42461_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_298_fu_42448_p1.read()) + sc_biguint<9>(add_ln395_297_fu_42461_p2.read()));
}

void poly1305_hw::thread_add_ln395_299_fu_42545_p2() {
    add_ln395_299_fu_42545_p2 = (!zext_ln395_301_fu_42534_p1.read().is_01() || !select_ln395_149_fu_42537_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_301_fu_42534_p1.read()) + sc_biguint<9>(select_ln395_149_fu_42537_p3.read()));
}

void poly1305_hw::thread_add_ln395_29_fu_32226_p2() {
    add_ln395_29_fu_32226_p2 = (!zext_ln395_31_fu_32216_p1.read().is_01() || !select_ln395_14_fu_32219_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_31_fu_32216_p1.read()) + sc_biguint<9>(select_ln395_14_fu_32219_p3.read()));
}

void poly1305_hw::thread_add_ln395_2_fu_31169_p2() {
    add_ln395_2_fu_31169_p2 = (!zext_ln395_2_fu_31150_p1.read().is_01() || !add_ln395_1_fu_31163_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_2_fu_31150_p1.read()) + sc_biguint<9>(add_ln395_1_fu_31163_p2.read()));
}

void poly1305_hw::thread_add_ln395_300_fu_42551_p2() {
    add_ln395_300_fu_42551_p2 = (!zext_ln395_300_fu_42530_p1.read().is_01() || !add_ln395_299_fu_42545_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_300_fu_42530_p1.read()) + sc_biguint<9>(add_ln395_299_fu_42545_p2.read()));
}

void poly1305_hw::thread_add_ln395_301_fu_42608_p2() {
    add_ln395_301_fu_42608_p2 = (!zext_ln395_303_fu_42598_p1.read().is_01() || !select_ln395_150_fu_42601_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_303_fu_42598_p1.read()) + sc_biguint<9>(select_ln395_150_fu_42601_p3.read()));
}

void poly1305_hw::thread_add_ln395_302_fu_42614_p2() {
    add_ln395_302_fu_42614_p2 = (!zext_ln395_302_fu_42595_p1.read().is_01() || !add_ln395_301_fu_42608_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_302_fu_42595_p1.read()) + sc_biguint<9>(add_ln395_301_fu_42608_p2.read()));
}

void poly1305_hw::thread_add_ln395_303_fu_42693_p2() {
    add_ln395_303_fu_42693_p2 = (!zext_ln395_305_fu_42681_p1.read().is_01() || !select_ln395_151_fu_42685_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_305_fu_42681_p1.read()) + sc_biguint<9>(select_ln395_151_fu_42685_p3.read()));
}

void poly1305_hw::thread_add_ln395_304_fu_42699_p2() {
    add_ln395_304_fu_42699_p2 = (!zext_ln395_304_fu_42677_p1.read().is_01() || !add_ln395_303_fu_42693_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_304_fu_42677_p1.read()) + sc_biguint<9>(add_ln395_303_fu_42693_p2.read()));
}

void poly1305_hw::thread_add_ln395_305_fu_42760_p2() {
    add_ln395_305_fu_42760_p2 = (!zext_ln395_307_fu_42750_p1.read().is_01() || !select_ln395_152_fu_42753_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_307_fu_42750_p1.read()) + sc_biguint<9>(select_ln395_152_fu_42753_p3.read()));
}

void poly1305_hw::thread_add_ln395_306_fu_42766_p2() {
    add_ln395_306_fu_42766_p2 = (!zext_ln395_306_fu_42747_p1.read().is_01() || !add_ln395_305_fu_42760_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_306_fu_42747_p1.read()) + sc_biguint<9>(add_ln395_305_fu_42760_p2.read()));
}

void poly1305_hw::thread_add_ln395_307_fu_42842_p2() {
    add_ln395_307_fu_42842_p2 = (!zext_ln395_309_fu_42832_p1.read().is_01() || !select_ln395_153_fu_42835_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_309_fu_42832_p1.read()) + sc_biguint<9>(select_ln395_153_fu_42835_p3.read()));
}

void poly1305_hw::thread_add_ln395_308_fu_42848_p2() {
    add_ln395_308_fu_42848_p2 = (!zext_ln395_308_fu_42829_p1.read().is_01() || !add_ln395_307_fu_42842_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_308_fu_42829_p1.read()) + sc_biguint<9>(add_ln395_307_fu_42842_p2.read()));
}

void poly1305_hw::thread_add_ln395_309_fu_42926_p2() {
    add_ln395_309_fu_42926_p2 = (!zext_ln395_311_fu_42915_p1.read().is_01() || !select_ln395_154_fu_42918_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_311_fu_42915_p1.read()) + sc_biguint<9>(select_ln395_154_fu_42918_p3.read()));
}

void poly1305_hw::thread_add_ln395_30_fu_32232_p2() {
    add_ln395_30_fu_32232_p2 = (!zext_ln395_30_fu_32213_p1.read().is_01() || !add_ln395_29_fu_32226_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_30_fu_32213_p1.read()) + sc_biguint<9>(add_ln395_29_fu_32226_p2.read()));
}

void poly1305_hw::thread_add_ln395_310_fu_42932_p2() {
    add_ln395_310_fu_42932_p2 = (!zext_ln395_310_fu_42911_p1.read().is_01() || !add_ln395_309_fu_42926_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_310_fu_42911_p1.read()) + sc_biguint<9>(add_ln395_309_fu_42926_p2.read()));
}

void poly1305_hw::thread_add_ln395_311_fu_42989_p2() {
    add_ln395_311_fu_42989_p2 = (!zext_ln395_313_fu_42979_p1.read().is_01() || !select_ln395_155_fu_42982_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_313_fu_42979_p1.read()) + sc_biguint<9>(select_ln395_155_fu_42982_p3.read()));
}

void poly1305_hw::thread_add_ln395_312_fu_42995_p2() {
    add_ln395_312_fu_42995_p2 = (!zext_ln395_312_fu_42976_p1.read().is_01() || !add_ln395_311_fu_42989_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_312_fu_42976_p1.read()) + sc_biguint<9>(add_ln395_311_fu_42989_p2.read()));
}

void poly1305_hw::thread_add_ln395_313_fu_43071_p2() {
    add_ln395_313_fu_43071_p2 = (!zext_ln395_315_fu_43061_p1.read().is_01() || !select_ln395_156_fu_43064_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_315_fu_43061_p1.read()) + sc_biguint<9>(select_ln395_156_fu_43064_p3.read()));
}

void poly1305_hw::thread_add_ln395_314_fu_43077_p2() {
    add_ln395_314_fu_43077_p2 = (!zext_ln395_314_fu_43058_p1.read().is_01() || !add_ln395_313_fu_43071_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_314_fu_43058_p1.read()) + sc_biguint<9>(add_ln395_313_fu_43071_p2.read()));
}

void poly1305_hw::thread_add_ln395_315_fu_43155_p2() {
    add_ln395_315_fu_43155_p2 = (!zext_ln395_317_fu_43144_p1.read().is_01() || !select_ln395_157_fu_43147_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_317_fu_43144_p1.read()) + sc_biguint<9>(select_ln395_157_fu_43147_p3.read()));
}

void poly1305_hw::thread_add_ln395_316_fu_43161_p2() {
    add_ln395_316_fu_43161_p2 = (!zext_ln395_316_fu_43140_p1.read().is_01() || !add_ln395_315_fu_43155_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_316_fu_43140_p1.read()) + sc_biguint<9>(add_ln395_315_fu_43155_p2.read()));
}

void poly1305_hw::thread_add_ln395_317_fu_43218_p2() {
    add_ln395_317_fu_43218_p2 = (!zext_ln395_319_fu_43208_p1.read().is_01() || !select_ln395_158_fu_43211_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_319_fu_43208_p1.read()) + sc_biguint<9>(select_ln395_158_fu_43211_p3.read()));
}

void poly1305_hw::thread_add_ln395_318_fu_43224_p2() {
    add_ln395_318_fu_43224_p2 = (!zext_ln395_318_fu_43205_p1.read().is_01() || !add_ln395_317_fu_43218_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_318_fu_43205_p1.read()) + sc_biguint<9>(add_ln395_317_fu_43218_p2.read()));
}

void poly1305_hw::thread_add_ln395_319_fu_43300_p2() {
    add_ln395_319_fu_43300_p2 = (!zext_ln395_321_fu_43290_p1.read().is_01() || !select_ln395_159_fu_43293_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_321_fu_43290_p1.read()) + sc_biguint<9>(select_ln395_159_fu_43293_p3.read()));
}

void poly1305_hw::thread_add_ln395_31_fu_32311_p2() {
    add_ln395_31_fu_32311_p2 = (!zext_ln395_33_fu_32299_p1.read().is_01() || !select_ln395_15_fu_32303_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_33_fu_32299_p1.read()) + sc_biguint<9>(select_ln395_15_fu_32303_p3.read()));
}

void poly1305_hw::thread_add_ln395_320_fu_43306_p2() {
    add_ln395_320_fu_43306_p2 = (!zext_ln395_320_fu_43287_p1.read().is_01() || !add_ln395_319_fu_43300_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_320_fu_43287_p1.read()) + sc_biguint<9>(add_ln395_319_fu_43300_p2.read()));
}

void poly1305_hw::thread_add_ln395_321_fu_43384_p2() {
    add_ln395_321_fu_43384_p2 = (!zext_ln395_323_fu_43373_p1.read().is_01() || !select_ln395_160_fu_43376_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_323_fu_43373_p1.read()) + sc_biguint<9>(select_ln395_160_fu_43376_p3.read()));
}

void poly1305_hw::thread_add_ln395_322_fu_43390_p2() {
    add_ln395_322_fu_43390_p2 = (!zext_ln395_322_fu_43369_p1.read().is_01() || !add_ln395_321_fu_43384_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_322_fu_43369_p1.read()) + sc_biguint<9>(add_ln395_321_fu_43384_p2.read()));
}

void poly1305_hw::thread_add_ln395_323_fu_43447_p2() {
    add_ln395_323_fu_43447_p2 = (!zext_ln395_325_fu_43437_p1.read().is_01() || !select_ln395_161_fu_43440_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_325_fu_43437_p1.read()) + sc_biguint<9>(select_ln395_161_fu_43440_p3.read()));
}

void poly1305_hw::thread_add_ln395_324_fu_43453_p2() {
    add_ln395_324_fu_43453_p2 = (!zext_ln395_324_fu_43434_p1.read().is_01() || !add_ln395_323_fu_43447_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_324_fu_43434_p1.read()) + sc_biguint<9>(add_ln395_323_fu_43447_p2.read()));
}

void poly1305_hw::thread_add_ln395_325_fu_43529_p2() {
    add_ln395_325_fu_43529_p2 = (!zext_ln395_327_fu_43519_p1.read().is_01() || !select_ln395_162_fu_43522_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_327_fu_43519_p1.read()) + sc_biguint<9>(select_ln395_162_fu_43522_p3.read()));
}

void poly1305_hw::thread_add_ln395_326_fu_43535_p2() {
    add_ln395_326_fu_43535_p2 = (!zext_ln395_326_fu_43516_p1.read().is_01() || !add_ln395_325_fu_43529_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_326_fu_43516_p1.read()) + sc_biguint<9>(add_ln395_325_fu_43529_p2.read()));
}

void poly1305_hw::thread_add_ln395_327_fu_43613_p2() {
    add_ln395_327_fu_43613_p2 = (!zext_ln395_329_fu_43602_p1.read().is_01() || !select_ln395_163_fu_43605_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_329_fu_43602_p1.read()) + sc_biguint<9>(select_ln395_163_fu_43605_p3.read()));
}

void poly1305_hw::thread_add_ln395_328_fu_43619_p2() {
    add_ln395_328_fu_43619_p2 = (!zext_ln395_328_fu_43598_p1.read().is_01() || !add_ln395_327_fu_43613_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_328_fu_43598_p1.read()) + sc_biguint<9>(add_ln395_327_fu_43613_p2.read()));
}

void poly1305_hw::thread_add_ln395_329_fu_43676_p2() {
    add_ln395_329_fu_43676_p2 = (!zext_ln395_331_fu_43666_p1.read().is_01() || !select_ln395_164_fu_43669_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_331_fu_43666_p1.read()) + sc_biguint<9>(select_ln395_164_fu_43669_p3.read()));
}

void poly1305_hw::thread_add_ln395_32_fu_32317_p2() {
    add_ln395_32_fu_32317_p2 = (!zext_ln395_32_fu_32295_p1.read().is_01() || !add_ln395_31_fu_32311_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_32_fu_32295_p1.read()) + sc_biguint<9>(add_ln395_31_fu_32311_p2.read()));
}

void poly1305_hw::thread_add_ln395_330_fu_43682_p2() {
    add_ln395_330_fu_43682_p2 = (!zext_ln395_330_fu_43663_p1.read().is_01() || !add_ln395_329_fu_43676_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_330_fu_43663_p1.read()) + sc_biguint<9>(add_ln395_329_fu_43676_p2.read()));
}

void poly1305_hw::thread_add_ln395_331_fu_43758_p2() {
    add_ln395_331_fu_43758_p2 = (!zext_ln395_333_fu_43748_p1.read().is_01() || !select_ln395_165_fu_43751_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_333_fu_43748_p1.read()) + sc_biguint<9>(select_ln395_165_fu_43751_p3.read()));
}

void poly1305_hw::thread_add_ln395_332_fu_43764_p2() {
    add_ln395_332_fu_43764_p2 = (!zext_ln395_332_fu_43745_p1.read().is_01() || !add_ln395_331_fu_43758_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_332_fu_43745_p1.read()) + sc_biguint<9>(add_ln395_331_fu_43758_p2.read()));
}

void poly1305_hw::thread_add_ln395_333_fu_43842_p2() {
    add_ln395_333_fu_43842_p2 = (!zext_ln395_335_fu_43831_p1.read().is_01() || !select_ln395_166_fu_43834_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_335_fu_43831_p1.read()) + sc_biguint<9>(select_ln395_166_fu_43834_p3.read()));
}

void poly1305_hw::thread_add_ln395_334_fu_43848_p2() {
    add_ln395_334_fu_43848_p2 = (!zext_ln395_334_fu_43827_p1.read().is_01() || !add_ln395_333_fu_43842_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_334_fu_43827_p1.read()) + sc_biguint<9>(add_ln395_333_fu_43842_p2.read()));
}

void poly1305_hw::thread_add_ln395_335_fu_43905_p2() {
    add_ln395_335_fu_43905_p2 = (!zext_ln395_337_fu_43895_p1.read().is_01() || !select_ln395_167_fu_43898_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_337_fu_43895_p1.read()) + sc_biguint<9>(select_ln395_167_fu_43898_p3.read()));
}

void poly1305_hw::thread_add_ln395_336_fu_43911_p2() {
    add_ln395_336_fu_43911_p2 = (!zext_ln395_336_fu_43892_p1.read().is_01() || !add_ln395_335_fu_43905_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_336_fu_43892_p1.read()) + sc_biguint<9>(add_ln395_335_fu_43905_p2.read()));
}

void poly1305_hw::thread_add_ln395_337_fu_43990_p2() {
    add_ln395_337_fu_43990_p2 = (!zext_ln395_339_fu_43978_p1.read().is_01() || !select_ln395_168_fu_43982_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_339_fu_43978_p1.read()) + sc_biguint<9>(select_ln395_168_fu_43982_p3.read()));
}

void poly1305_hw::thread_add_ln395_338_fu_43996_p2() {
    add_ln395_338_fu_43996_p2 = (!zext_ln395_338_fu_43974_p1.read().is_01() || !add_ln395_337_fu_43990_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_338_fu_43974_p1.read()) + sc_biguint<9>(add_ln395_337_fu_43990_p2.read()));
}

void poly1305_hw::thread_add_ln395_339_fu_44057_p2() {
    add_ln395_339_fu_44057_p2 = (!zext_ln395_341_fu_44047_p1.read().is_01() || !select_ln395_169_fu_44050_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_341_fu_44047_p1.read()) + sc_biguint<9>(select_ln395_169_fu_44050_p3.read()));
}

void poly1305_hw::thread_add_ln395_33_fu_32378_p2() {
    add_ln395_33_fu_32378_p2 = (!zext_ln395_35_fu_32368_p1.read().is_01() || !select_ln395_16_fu_32371_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_35_fu_32368_p1.read()) + sc_biguint<9>(select_ln395_16_fu_32371_p3.read()));
}

void poly1305_hw::thread_add_ln395_340_fu_44063_p2() {
    add_ln395_340_fu_44063_p2 = (!zext_ln395_340_fu_44044_p1.read().is_01() || !add_ln395_339_fu_44057_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_340_fu_44044_p1.read()) + sc_biguint<9>(add_ln395_339_fu_44057_p2.read()));
}

void poly1305_hw::thread_add_ln395_341_fu_44139_p2() {
    add_ln395_341_fu_44139_p2 = (!zext_ln395_343_fu_44129_p1.read().is_01() || !select_ln395_170_fu_44132_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_343_fu_44129_p1.read()) + sc_biguint<9>(select_ln395_170_fu_44132_p3.read()));
}

void poly1305_hw::thread_add_ln395_342_fu_44145_p2() {
    add_ln395_342_fu_44145_p2 = (!zext_ln395_342_fu_44126_p1.read().is_01() || !add_ln395_341_fu_44139_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_342_fu_44126_p1.read()) + sc_biguint<9>(add_ln395_341_fu_44139_p2.read()));
}

void poly1305_hw::thread_add_ln395_343_fu_44223_p2() {
    add_ln395_343_fu_44223_p2 = (!zext_ln395_345_fu_44212_p1.read().is_01() || !select_ln395_171_fu_44215_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_345_fu_44212_p1.read()) + sc_biguint<9>(select_ln395_171_fu_44215_p3.read()));
}

void poly1305_hw::thread_add_ln395_344_fu_44229_p2() {
    add_ln395_344_fu_44229_p2 = (!zext_ln395_344_fu_44208_p1.read().is_01() || !add_ln395_343_fu_44223_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_344_fu_44208_p1.read()) + sc_biguint<9>(add_ln395_343_fu_44223_p2.read()));
}

void poly1305_hw::thread_add_ln395_345_fu_44286_p2() {
    add_ln395_345_fu_44286_p2 = (!zext_ln395_347_fu_44276_p1.read().is_01() || !select_ln395_172_fu_44279_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_347_fu_44276_p1.read()) + sc_biguint<9>(select_ln395_172_fu_44279_p3.read()));
}

void poly1305_hw::thread_add_ln395_346_fu_44292_p2() {
    add_ln395_346_fu_44292_p2 = (!zext_ln395_346_fu_44273_p1.read().is_01() || !add_ln395_345_fu_44286_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_346_fu_44273_p1.read()) + sc_biguint<9>(add_ln395_345_fu_44286_p2.read()));
}

void poly1305_hw::thread_add_ln395_347_fu_44368_p2() {
    add_ln395_347_fu_44368_p2 = (!zext_ln395_349_fu_44358_p1.read().is_01() || !select_ln395_173_fu_44361_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_349_fu_44358_p1.read()) + sc_biguint<9>(select_ln395_173_fu_44361_p3.read()));
}

void poly1305_hw::thread_add_ln395_348_fu_44374_p2() {
    add_ln395_348_fu_44374_p2 = (!zext_ln395_348_fu_44355_p1.read().is_01() || !add_ln395_347_fu_44368_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_348_fu_44355_p1.read()) + sc_biguint<9>(add_ln395_347_fu_44368_p2.read()));
}

void poly1305_hw::thread_add_ln395_349_fu_44452_p2() {
    add_ln395_349_fu_44452_p2 = (!zext_ln395_351_fu_44441_p1.read().is_01() || !select_ln395_174_fu_44444_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_351_fu_44441_p1.read()) + sc_biguint<9>(select_ln395_174_fu_44444_p3.read()));
}

void poly1305_hw::thread_add_ln395_34_fu_32384_p2() {
    add_ln395_34_fu_32384_p2 = (!zext_ln395_34_fu_32365_p1.read().is_01() || !add_ln395_33_fu_32378_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_34_fu_32365_p1.read()) + sc_biguint<9>(add_ln395_33_fu_32378_p2.read()));
}

void poly1305_hw::thread_add_ln395_350_fu_44458_p2() {
    add_ln395_350_fu_44458_p2 = (!zext_ln395_350_fu_44437_p1.read().is_01() || !add_ln395_349_fu_44452_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_350_fu_44437_p1.read()) + sc_biguint<9>(add_ln395_349_fu_44452_p2.read()));
}

void poly1305_hw::thread_add_ln395_351_fu_44515_p2() {
    add_ln395_351_fu_44515_p2 = (!zext_ln395_353_fu_44505_p1.read().is_01() || !select_ln395_175_fu_44508_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_353_fu_44505_p1.read()) + sc_biguint<9>(select_ln395_175_fu_44508_p3.read()));
}

void poly1305_hw::thread_add_ln395_352_fu_44521_p2() {
    add_ln395_352_fu_44521_p2 = (!zext_ln395_352_fu_44502_p1.read().is_01() || !add_ln395_351_fu_44515_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_352_fu_44502_p1.read()) + sc_biguint<9>(add_ln395_351_fu_44515_p2.read()));
}

void poly1305_hw::thread_add_ln395_353_fu_44597_p2() {
    add_ln395_353_fu_44597_p2 = (!zext_ln395_355_fu_44587_p1.read().is_01() || !select_ln395_176_fu_44590_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_355_fu_44587_p1.read()) + sc_biguint<9>(select_ln395_176_fu_44590_p3.read()));
}

void poly1305_hw::thread_add_ln395_354_fu_44603_p2() {
    add_ln395_354_fu_44603_p2 = (!zext_ln395_354_fu_44584_p1.read().is_01() || !add_ln395_353_fu_44597_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_354_fu_44584_p1.read()) + sc_biguint<9>(add_ln395_353_fu_44597_p2.read()));
}

void poly1305_hw::thread_add_ln395_355_fu_44681_p2() {
    add_ln395_355_fu_44681_p2 = (!zext_ln395_357_fu_44670_p1.read().is_01() || !select_ln395_177_fu_44673_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_357_fu_44670_p1.read()) + sc_biguint<9>(select_ln395_177_fu_44673_p3.read()));
}

void poly1305_hw::thread_add_ln395_356_fu_44687_p2() {
    add_ln395_356_fu_44687_p2 = (!zext_ln395_356_fu_44666_p1.read().is_01() || !add_ln395_355_fu_44681_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_356_fu_44666_p1.read()) + sc_biguint<9>(add_ln395_355_fu_44681_p2.read()));
}

void poly1305_hw::thread_add_ln395_357_fu_44744_p2() {
    add_ln395_357_fu_44744_p2 = (!zext_ln395_359_fu_44734_p1.read().is_01() || !select_ln395_178_fu_44737_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_359_fu_44734_p1.read()) + sc_biguint<9>(select_ln395_178_fu_44737_p3.read()));
}

void poly1305_hw::thread_add_ln395_358_fu_44750_p2() {
    add_ln395_358_fu_44750_p2 = (!zext_ln395_358_fu_44731_p1.read().is_01() || !add_ln395_357_fu_44744_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_358_fu_44731_p1.read()) + sc_biguint<9>(add_ln395_357_fu_44744_p2.read()));
}

void poly1305_hw::thread_add_ln395_359_fu_44826_p2() {
    add_ln395_359_fu_44826_p2 = (!zext_ln395_361_fu_44816_p1.read().is_01() || !select_ln395_179_fu_44819_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_361_fu_44816_p1.read()) + sc_biguint<9>(select_ln395_179_fu_44819_p3.read()));
}

void poly1305_hw::thread_add_ln395_35_fu_32460_p2() {
    add_ln395_35_fu_32460_p2 = (!zext_ln395_37_fu_32450_p1.read().is_01() || !select_ln395_17_fu_32453_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_37_fu_32450_p1.read()) + sc_biguint<9>(select_ln395_17_fu_32453_p3.read()));
}

void poly1305_hw::thread_add_ln395_360_fu_44832_p2() {
    add_ln395_360_fu_44832_p2 = (!zext_ln395_360_fu_44813_p1.read().is_01() || !add_ln395_359_fu_44826_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_360_fu_44813_p1.read()) + sc_biguint<9>(add_ln395_359_fu_44826_p2.read()));
}

void poly1305_hw::thread_add_ln395_361_fu_44910_p2() {
    add_ln395_361_fu_44910_p2 = (!zext_ln395_363_fu_44899_p1.read().is_01() || !select_ln395_180_fu_44902_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_363_fu_44899_p1.read()) + sc_biguint<9>(select_ln395_180_fu_44902_p3.read()));
}

void poly1305_hw::thread_add_ln395_362_fu_44916_p2() {
    add_ln395_362_fu_44916_p2 = (!zext_ln395_362_fu_44895_p1.read().is_01() || !add_ln395_361_fu_44910_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_362_fu_44895_p1.read()) + sc_biguint<9>(add_ln395_361_fu_44910_p2.read()));
}

void poly1305_hw::thread_add_ln395_363_fu_44973_p2() {
    add_ln395_363_fu_44973_p2 = (!zext_ln395_365_fu_44963_p1.read().is_01() || !select_ln395_181_fu_44966_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_365_fu_44963_p1.read()) + sc_biguint<9>(select_ln395_181_fu_44966_p3.read()));
}

void poly1305_hw::thread_add_ln395_364_fu_44979_p2() {
    add_ln395_364_fu_44979_p2 = (!zext_ln395_364_fu_44960_p1.read().is_01() || !add_ln395_363_fu_44973_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_364_fu_44960_p1.read()) + sc_biguint<9>(add_ln395_363_fu_44973_p2.read()));
}

void poly1305_hw::thread_add_ln395_365_fu_45055_p2() {
    add_ln395_365_fu_45055_p2 = (!zext_ln395_367_fu_45045_p1.read().is_01() || !select_ln395_182_fu_45048_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_367_fu_45045_p1.read()) + sc_biguint<9>(select_ln395_182_fu_45048_p3.read()));
}

void poly1305_hw::thread_add_ln395_366_fu_45061_p2() {
    add_ln395_366_fu_45061_p2 = (!zext_ln395_366_fu_45042_p1.read().is_01() || !add_ln395_365_fu_45055_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_366_fu_45042_p1.read()) + sc_biguint<9>(add_ln395_365_fu_45055_p2.read()));
}

void poly1305_hw::thread_add_ln395_367_fu_45139_p2() {
    add_ln395_367_fu_45139_p2 = (!zext_ln395_369_fu_45128_p1.read().is_01() || !select_ln395_183_fu_45131_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_369_fu_45128_p1.read()) + sc_biguint<9>(select_ln395_183_fu_45131_p3.read()));
}

void poly1305_hw::thread_add_ln395_368_fu_45145_p2() {
    add_ln395_368_fu_45145_p2 = (!zext_ln395_368_fu_45124_p1.read().is_01() || !add_ln395_367_fu_45139_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_368_fu_45124_p1.read()) + sc_biguint<9>(add_ln395_367_fu_45139_p2.read()));
}

void poly1305_hw::thread_add_ln395_369_fu_45202_p2() {
    add_ln395_369_fu_45202_p2 = (!zext_ln395_371_fu_45192_p1.read().is_01() || !select_ln395_184_fu_45195_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_371_fu_45192_p1.read()) + sc_biguint<9>(select_ln395_184_fu_45195_p3.read()));
}

void poly1305_hw::thread_add_ln395_36_fu_32466_p2() {
    add_ln395_36_fu_32466_p2 = (!zext_ln395_36_fu_32447_p1.read().is_01() || !add_ln395_35_fu_32460_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_36_fu_32447_p1.read()) + sc_biguint<9>(add_ln395_35_fu_32460_p2.read()));
}

void poly1305_hw::thread_add_ln395_370_fu_45208_p2() {
    add_ln395_370_fu_45208_p2 = (!zext_ln395_370_fu_45189_p1.read().is_01() || !add_ln395_369_fu_45202_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_370_fu_45189_p1.read()) + sc_biguint<9>(add_ln395_369_fu_45202_p2.read()));
}

void poly1305_hw::thread_add_ln395_371_fu_45287_p2() {
    add_ln395_371_fu_45287_p2 = (!zext_ln395_373_fu_45275_p1.read().is_01() || !select_ln395_185_fu_45279_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_373_fu_45275_p1.read()) + sc_biguint<9>(select_ln395_185_fu_45279_p3.read()));
}

void poly1305_hw::thread_add_ln395_372_fu_45293_p2() {
    add_ln395_372_fu_45293_p2 = (!zext_ln395_372_fu_45271_p1.read().is_01() || !add_ln395_371_fu_45287_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_372_fu_45271_p1.read()) + sc_biguint<9>(add_ln395_371_fu_45287_p2.read()));
}

void poly1305_hw::thread_add_ln395_373_fu_45358_p2() {
    add_ln395_373_fu_45358_p2 = (!zext_ln395_375_fu_45348_p1.read().is_01() || !select_ln395_186_fu_45351_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_375_fu_45348_p1.read()) + sc_biguint<9>(select_ln395_186_fu_45351_p3.read()));
}

void poly1305_hw::thread_add_ln395_374_fu_45364_p2() {
    add_ln395_374_fu_45364_p2 = (!zext_ln395_374_fu_45345_p1.read().is_01() || !add_ln395_373_fu_45358_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_374_fu_45345_p1.read()) + sc_biguint<9>(add_ln395_373_fu_45358_p2.read()));
}

void poly1305_hw::thread_add_ln395_375_fu_45440_p2() {
    add_ln395_375_fu_45440_p2 = (!zext_ln395_377_fu_45430_p1.read().is_01() || !select_ln395_187_fu_45433_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_377_fu_45430_p1.read()) + sc_biguint<9>(select_ln395_187_fu_45433_p3.read()));
}

void poly1305_hw::thread_add_ln395_376_fu_45446_p2() {
    add_ln395_376_fu_45446_p2 = (!zext_ln395_376_fu_45427_p1.read().is_01() || !add_ln395_375_fu_45440_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_376_fu_45427_p1.read()) + sc_biguint<9>(add_ln395_375_fu_45440_p2.read()));
}

void poly1305_hw::thread_add_ln395_377_fu_45524_p2() {
    add_ln395_377_fu_45524_p2 = (!zext_ln395_379_fu_45513_p1.read().is_01() || !select_ln395_188_fu_45516_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_379_fu_45513_p1.read()) + sc_biguint<9>(select_ln395_188_fu_45516_p3.read()));
}

void poly1305_hw::thread_add_ln395_378_fu_45530_p2() {
    add_ln395_378_fu_45530_p2 = (!zext_ln395_378_fu_45509_p1.read().is_01() || !add_ln395_377_fu_45524_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_378_fu_45509_p1.read()) + sc_biguint<9>(add_ln395_377_fu_45524_p2.read()));
}

void poly1305_hw::thread_add_ln395_379_fu_45587_p2() {
    add_ln395_379_fu_45587_p2 = (!zext_ln395_381_fu_45577_p1.read().is_01() || !select_ln395_189_fu_45580_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_381_fu_45577_p1.read()) + sc_biguint<9>(select_ln395_189_fu_45580_p3.read()));
}

void poly1305_hw::thread_add_ln395_37_fu_32544_p2() {
    add_ln395_37_fu_32544_p2 = (!zext_ln395_39_fu_32533_p1.read().is_01() || !select_ln395_18_fu_32536_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_39_fu_32533_p1.read()) + sc_biguint<9>(select_ln395_18_fu_32536_p3.read()));
}

void poly1305_hw::thread_add_ln395_380_fu_45593_p2() {
    add_ln395_380_fu_45593_p2 = (!zext_ln395_380_fu_45574_p1.read().is_01() || !add_ln395_379_fu_45587_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_380_fu_45574_p1.read()) + sc_biguint<9>(add_ln395_379_fu_45587_p2.read()));
}

void poly1305_hw::thread_add_ln395_381_fu_45669_p2() {
    add_ln395_381_fu_45669_p2 = (!zext_ln395_383_fu_45659_p1.read().is_01() || !select_ln395_190_fu_45662_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_383_fu_45659_p1.read()) + sc_biguint<9>(select_ln395_190_fu_45662_p3.read()));
}

void poly1305_hw::thread_add_ln395_382_fu_45675_p2() {
    add_ln395_382_fu_45675_p2 = (!zext_ln395_382_fu_45656_p1.read().is_01() || !add_ln395_381_fu_45669_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_382_fu_45656_p1.read()) + sc_biguint<9>(add_ln395_381_fu_45669_p2.read()));
}

void poly1305_hw::thread_add_ln395_383_fu_45753_p2() {
    add_ln395_383_fu_45753_p2 = (!zext_ln395_385_fu_45742_p1.read().is_01() || !select_ln395_191_fu_45745_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_385_fu_45742_p1.read()) + sc_biguint<9>(select_ln395_191_fu_45745_p3.read()));
}

void poly1305_hw::thread_add_ln395_384_fu_45759_p2() {
    add_ln395_384_fu_45759_p2 = (!zext_ln395_384_fu_45738_p1.read().is_01() || !add_ln395_383_fu_45753_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_384_fu_45738_p1.read()) + sc_biguint<9>(add_ln395_383_fu_45753_p2.read()));
}

void poly1305_hw::thread_add_ln395_385_fu_45816_p2() {
    add_ln395_385_fu_45816_p2 = (!zext_ln395_387_fu_45806_p1.read().is_01() || !select_ln395_192_fu_45809_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_387_fu_45806_p1.read()) + sc_biguint<9>(select_ln395_192_fu_45809_p3.read()));
}

void poly1305_hw::thread_add_ln395_386_fu_45822_p2() {
    add_ln395_386_fu_45822_p2 = (!zext_ln395_386_fu_45803_p1.read().is_01() || !add_ln395_385_fu_45816_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_386_fu_45803_p1.read()) + sc_biguint<9>(add_ln395_385_fu_45816_p2.read()));
}

void poly1305_hw::thread_add_ln395_387_fu_45898_p2() {
    add_ln395_387_fu_45898_p2 = (!zext_ln395_389_fu_45888_p1.read().is_01() || !select_ln395_193_fu_45891_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_389_fu_45888_p1.read()) + sc_biguint<9>(select_ln395_193_fu_45891_p3.read()));
}

void poly1305_hw::thread_add_ln395_388_fu_45904_p2() {
    add_ln395_388_fu_45904_p2 = (!zext_ln395_388_fu_45885_p1.read().is_01() || !add_ln395_387_fu_45898_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_388_fu_45885_p1.read()) + sc_biguint<9>(add_ln395_387_fu_45898_p2.read()));
}

void poly1305_hw::thread_add_ln395_389_fu_45982_p2() {
    add_ln395_389_fu_45982_p2 = (!zext_ln395_391_fu_45971_p1.read().is_01() || !select_ln395_194_fu_45974_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_391_fu_45971_p1.read()) + sc_biguint<9>(select_ln395_194_fu_45974_p3.read()));
}

void poly1305_hw::thread_add_ln395_38_fu_32550_p2() {
    add_ln395_38_fu_32550_p2 = (!zext_ln395_38_fu_32529_p1.read().is_01() || !add_ln395_37_fu_32544_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_38_fu_32529_p1.read()) + sc_biguint<9>(add_ln395_37_fu_32544_p2.read()));
}

void poly1305_hw::thread_add_ln395_390_fu_45988_p2() {
    add_ln395_390_fu_45988_p2 = (!zext_ln395_390_fu_45967_p1.read().is_01() || !add_ln395_389_fu_45982_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_390_fu_45967_p1.read()) + sc_biguint<9>(add_ln395_389_fu_45982_p2.read()));
}

void poly1305_hw::thread_add_ln395_391_fu_46045_p2() {
    add_ln395_391_fu_46045_p2 = (!zext_ln395_393_fu_46035_p1.read().is_01() || !select_ln395_195_fu_46038_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_393_fu_46035_p1.read()) + sc_biguint<9>(select_ln395_195_fu_46038_p3.read()));
}

void poly1305_hw::thread_add_ln395_392_fu_46051_p2() {
    add_ln395_392_fu_46051_p2 = (!zext_ln395_392_fu_46032_p1.read().is_01() || !add_ln395_391_fu_46045_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_392_fu_46032_p1.read()) + sc_biguint<9>(add_ln395_391_fu_46045_p2.read()));
}

void poly1305_hw::thread_add_ln395_393_fu_46127_p2() {
    add_ln395_393_fu_46127_p2 = (!zext_ln395_395_fu_46117_p1.read().is_01() || !select_ln395_196_fu_46120_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_395_fu_46117_p1.read()) + sc_biguint<9>(select_ln395_196_fu_46120_p3.read()));
}

void poly1305_hw::thread_add_ln395_394_fu_46133_p2() {
    add_ln395_394_fu_46133_p2 = (!zext_ln395_394_fu_46114_p1.read().is_01() || !add_ln395_393_fu_46127_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_394_fu_46114_p1.read()) + sc_biguint<9>(add_ln395_393_fu_46127_p2.read()));
}

void poly1305_hw::thread_add_ln395_395_fu_46211_p2() {
    add_ln395_395_fu_46211_p2 = (!zext_ln395_397_fu_46200_p1.read().is_01() || !select_ln395_197_fu_46203_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_397_fu_46200_p1.read()) + sc_biguint<9>(select_ln395_197_fu_46203_p3.read()));
}

void poly1305_hw::thread_add_ln395_396_fu_46217_p2() {
    add_ln395_396_fu_46217_p2 = (!zext_ln395_396_fu_46196_p1.read().is_01() || !add_ln395_395_fu_46211_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_396_fu_46196_p1.read()) + sc_biguint<9>(add_ln395_395_fu_46211_p2.read()));
}

void poly1305_hw::thread_add_ln395_397_fu_46274_p2() {
    add_ln395_397_fu_46274_p2 = (!zext_ln395_399_fu_46264_p1.read().is_01() || !select_ln395_198_fu_46267_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_399_fu_46264_p1.read()) + sc_biguint<9>(select_ln395_198_fu_46267_p3.read()));
}

void poly1305_hw::thread_add_ln395_398_fu_46280_p2() {
    add_ln395_398_fu_46280_p2 = (!zext_ln395_398_fu_46261_p1.read().is_01() || !add_ln395_397_fu_46274_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_398_fu_46261_p1.read()) + sc_biguint<9>(add_ln395_397_fu_46274_p2.read()));
}

void poly1305_hw::thread_add_ln395_399_fu_46356_p2() {
    add_ln395_399_fu_46356_p2 = (!zext_ln395_401_fu_46346_p1.read().is_01() || !select_ln395_199_fu_46349_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_401_fu_46346_p1.read()) + sc_biguint<9>(select_ln395_199_fu_46349_p3.read()));
}

void poly1305_hw::thread_add_ln395_39_fu_32607_p2() {
    add_ln395_39_fu_32607_p2 = (!zext_ln395_41_fu_32597_p1.read().is_01() || !select_ln395_19_fu_32600_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_41_fu_32597_p1.read()) + sc_biguint<9>(select_ln395_19_fu_32600_p3.read()));
}

void poly1305_hw::thread_add_ln395_3_fu_31247_p2() {
    add_ln395_3_fu_31247_p2 = (!zext_ln395_5_fu_31236_p1.read().is_01() || !select_ln395_1_fu_31239_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_5_fu_31236_p1.read()) + sc_biguint<9>(select_ln395_1_fu_31239_p3.read()));
}

void poly1305_hw::thread_add_ln395_400_fu_46362_p2() {
    add_ln395_400_fu_46362_p2 = (!zext_ln395_400_fu_46343_p1.read().is_01() || !add_ln395_399_fu_46356_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_400_fu_46343_p1.read()) + sc_biguint<9>(add_ln395_399_fu_46356_p2.read()));
}

void poly1305_hw::thread_add_ln395_401_fu_46440_p2() {
    add_ln395_401_fu_46440_p2 = (!zext_ln395_403_fu_46429_p1.read().is_01() || !select_ln395_200_fu_46432_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_403_fu_46429_p1.read()) + sc_biguint<9>(select_ln395_200_fu_46432_p3.read()));
}

void poly1305_hw::thread_add_ln395_402_fu_46446_p2() {
    add_ln395_402_fu_46446_p2 = (!zext_ln395_402_fu_46425_p1.read().is_01() || !add_ln395_401_fu_46440_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_402_fu_46425_p1.read()) + sc_biguint<9>(add_ln395_401_fu_46440_p2.read()));
}

void poly1305_hw::thread_add_ln395_403_fu_46503_p2() {
    add_ln395_403_fu_46503_p2 = (!zext_ln395_405_fu_46493_p1.read().is_01() || !select_ln395_201_fu_46496_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_405_fu_46493_p1.read()) + sc_biguint<9>(select_ln395_201_fu_46496_p3.read()));
}

void poly1305_hw::thread_add_ln395_404_fu_46509_p2() {
    add_ln395_404_fu_46509_p2 = (!zext_ln395_404_fu_46490_p1.read().is_01() || !add_ln395_403_fu_46503_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_404_fu_46490_p1.read()) + sc_biguint<9>(add_ln395_403_fu_46503_p2.read()));
}

void poly1305_hw::thread_add_ln395_405_fu_46584_p2() {
    add_ln395_405_fu_46584_p2 = (!mul_28_1_reg_10918.read().is_01() || !select_ln395_202_fu_46576_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(mul_28_1_reg_10918.read()) + sc_biguint<4>(select_ln395_202_fu_46576_p3.read()));
}

void poly1305_hw::thread_add_ln395_406_fu_46594_p2() {
    add_ln395_406_fu_46594_p2 = (!zext_ln395_406_fu_46572_p1.read().is_01() || !zext_ln395_407_fu_46590_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_406_fu_46572_p1.read()) + sc_biguint<9>(zext_ln395_407_fu_46590_p1.read()));
}

void poly1305_hw::thread_add_ln395_407_fu_46654_p2() {
    add_ln395_407_fu_46654_p2 = (!zext_ln395_409_fu_46644_p1.read().is_01() || !select_ln395_203_fu_46647_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_409_fu_46644_p1.read()) + sc_biguint<9>(select_ln395_203_fu_46647_p3.read()));
}

void poly1305_hw::thread_add_ln395_408_fu_46660_p2() {
    add_ln395_408_fu_46660_p2 = (!zext_ln395_408_fu_46641_p1.read().is_01() || !add_ln395_407_fu_46654_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_408_fu_46641_p1.read()) + sc_biguint<9>(add_ln395_407_fu_46654_p2.read()));
}

void poly1305_hw::thread_add_ln395_409_fu_46736_p2() {
    add_ln395_409_fu_46736_p2 = (!zext_ln395_411_fu_46726_p1.read().is_01() || !select_ln395_204_fu_46729_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_411_fu_46726_p1.read()) + sc_biguint<9>(select_ln395_204_fu_46729_p3.read()));
}

void poly1305_hw::thread_add_ln395_40_fu_32613_p2() {
    add_ln395_40_fu_32613_p2 = (!zext_ln395_40_fu_32594_p1.read().is_01() || !add_ln395_39_fu_32607_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_40_fu_32594_p1.read()) + sc_biguint<9>(add_ln395_39_fu_32607_p2.read()));
}

void poly1305_hw::thread_add_ln395_410_fu_46742_p2() {
    add_ln395_410_fu_46742_p2 = (!zext_ln395_410_fu_46723_p1.read().is_01() || !add_ln395_409_fu_46736_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_410_fu_46723_p1.read()) + sc_biguint<9>(add_ln395_409_fu_46736_p2.read()));
}

void poly1305_hw::thread_add_ln395_411_fu_46820_p2() {
    add_ln395_411_fu_46820_p2 = (!zext_ln395_413_fu_46809_p1.read().is_01() || !select_ln395_205_fu_46812_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_413_fu_46809_p1.read()) + sc_biguint<9>(select_ln395_205_fu_46812_p3.read()));
}

void poly1305_hw::thread_add_ln395_412_fu_46826_p2() {
    add_ln395_412_fu_46826_p2 = (!zext_ln395_412_fu_46805_p1.read().is_01() || !add_ln395_411_fu_46820_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_412_fu_46805_p1.read()) + sc_biguint<9>(add_ln395_411_fu_46820_p2.read()));
}

void poly1305_hw::thread_add_ln395_413_fu_46883_p2() {
    add_ln395_413_fu_46883_p2 = (!zext_ln395_415_fu_46873_p1.read().is_01() || !select_ln395_206_fu_46876_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_415_fu_46873_p1.read()) + sc_biguint<9>(select_ln395_206_fu_46876_p3.read()));
}

void poly1305_hw::thread_add_ln395_414_fu_46889_p2() {
    add_ln395_414_fu_46889_p2 = (!zext_ln395_414_fu_46870_p1.read().is_01() || !add_ln395_413_fu_46883_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_414_fu_46870_p1.read()) + sc_biguint<9>(add_ln395_413_fu_46883_p2.read()));
}

void poly1305_hw::thread_add_ln395_415_fu_46965_p2() {
    add_ln395_415_fu_46965_p2 = (!zext_ln395_417_fu_46955_p1.read().is_01() || !select_ln395_207_fu_46958_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_417_fu_46955_p1.read()) + sc_biguint<9>(select_ln395_207_fu_46958_p3.read()));
}

void poly1305_hw::thread_add_ln395_416_fu_46971_p2() {
    add_ln395_416_fu_46971_p2 = (!zext_ln395_416_fu_46952_p1.read().is_01() || !add_ln395_415_fu_46965_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_416_fu_46952_p1.read()) + sc_biguint<9>(add_ln395_415_fu_46965_p2.read()));
}

void poly1305_hw::thread_add_ln395_417_fu_47049_p2() {
    add_ln395_417_fu_47049_p2 = (!zext_ln395_419_fu_47038_p1.read().is_01() || !select_ln395_208_fu_47041_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_419_fu_47038_p1.read()) + sc_biguint<9>(select_ln395_208_fu_47041_p3.read()));
}

void poly1305_hw::thread_add_ln395_418_fu_47055_p2() {
    add_ln395_418_fu_47055_p2 = (!zext_ln395_418_fu_47034_p1.read().is_01() || !add_ln395_417_fu_47049_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_418_fu_47034_p1.read()) + sc_biguint<9>(add_ln395_417_fu_47049_p2.read()));
}

void poly1305_hw::thread_add_ln395_419_fu_47112_p2() {
    add_ln395_419_fu_47112_p2 = (!zext_ln395_421_fu_47102_p1.read().is_01() || !select_ln395_209_fu_47105_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_421_fu_47102_p1.read()) + sc_biguint<9>(select_ln395_209_fu_47105_p3.read()));
}

void poly1305_hw::thread_add_ln395_41_fu_32689_p2() {
    add_ln395_41_fu_32689_p2 = (!zext_ln395_43_fu_32679_p1.read().is_01() || !select_ln395_20_fu_32682_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_43_fu_32679_p1.read()) + sc_biguint<9>(select_ln395_20_fu_32682_p3.read()));
}

void poly1305_hw::thread_add_ln395_420_fu_47118_p2() {
    add_ln395_420_fu_47118_p2 = (!zext_ln395_420_fu_47099_p1.read().is_01() || !add_ln395_419_fu_47112_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_420_fu_47099_p1.read()) + sc_biguint<9>(add_ln395_419_fu_47112_p2.read()));
}

void poly1305_hw::thread_add_ln395_421_fu_47194_p2() {
    add_ln395_421_fu_47194_p2 = (!zext_ln395_423_fu_47184_p1.read().is_01() || !select_ln395_210_fu_47187_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_423_fu_47184_p1.read()) + sc_biguint<9>(select_ln395_210_fu_47187_p3.read()));
}

void poly1305_hw::thread_add_ln395_422_fu_47200_p2() {
    add_ln395_422_fu_47200_p2 = (!zext_ln395_422_fu_47181_p1.read().is_01() || !add_ln395_421_fu_47194_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_422_fu_47181_p1.read()) + sc_biguint<9>(add_ln395_421_fu_47194_p2.read()));
}

void poly1305_hw::thread_add_ln395_423_fu_47278_p2() {
    add_ln395_423_fu_47278_p2 = (!zext_ln395_425_fu_47267_p1.read().is_01() || !select_ln395_211_fu_47270_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_425_fu_47267_p1.read()) + sc_biguint<9>(select_ln395_211_fu_47270_p3.read()));
}

void poly1305_hw::thread_add_ln395_424_fu_47284_p2() {
    add_ln395_424_fu_47284_p2 = (!zext_ln395_424_fu_47263_p1.read().is_01() || !add_ln395_423_fu_47278_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_424_fu_47263_p1.read()) + sc_biguint<9>(add_ln395_423_fu_47278_p2.read()));
}

void poly1305_hw::thread_add_ln395_425_fu_47341_p2() {
    add_ln395_425_fu_47341_p2 = (!zext_ln395_427_fu_47331_p1.read().is_01() || !select_ln395_212_fu_47334_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_427_fu_47331_p1.read()) + sc_biguint<9>(select_ln395_212_fu_47334_p3.read()));
}

void poly1305_hw::thread_add_ln395_426_fu_47347_p2() {
    add_ln395_426_fu_47347_p2 = (!zext_ln395_426_fu_47328_p1.read().is_01() || !add_ln395_425_fu_47341_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_426_fu_47328_p1.read()) + sc_biguint<9>(add_ln395_425_fu_47341_p2.read()));
}

void poly1305_hw::thread_add_ln395_427_fu_47423_p2() {
    add_ln395_427_fu_47423_p2 = (!zext_ln395_429_fu_47413_p1.read().is_01() || !select_ln395_213_fu_47416_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_429_fu_47413_p1.read()) + sc_biguint<9>(select_ln395_213_fu_47416_p3.read()));
}

void poly1305_hw::thread_add_ln395_428_fu_47429_p2() {
    add_ln395_428_fu_47429_p2 = (!zext_ln395_428_fu_47410_p1.read().is_01() || !add_ln395_427_fu_47423_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_428_fu_47410_p1.read()) + sc_biguint<9>(add_ln395_427_fu_47423_p2.read()));
}

void poly1305_hw::thread_add_ln395_429_fu_47507_p2() {
    add_ln395_429_fu_47507_p2 = (!zext_ln395_431_fu_47496_p1.read().is_01() || !select_ln395_214_fu_47499_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_431_fu_47496_p1.read()) + sc_biguint<9>(select_ln395_214_fu_47499_p3.read()));
}

void poly1305_hw::thread_add_ln395_42_fu_32695_p2() {
    add_ln395_42_fu_32695_p2 = (!zext_ln395_42_fu_32676_p1.read().is_01() || !add_ln395_41_fu_32689_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_42_fu_32676_p1.read()) + sc_biguint<9>(add_ln395_41_fu_32689_p2.read()));
}

void poly1305_hw::thread_add_ln395_430_fu_47513_p2() {
    add_ln395_430_fu_47513_p2 = (!zext_ln395_430_fu_47492_p1.read().is_01() || !add_ln395_429_fu_47507_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_430_fu_47492_p1.read()) + sc_biguint<9>(add_ln395_429_fu_47507_p2.read()));
}

void poly1305_hw::thread_add_ln395_431_fu_47570_p2() {
    add_ln395_431_fu_47570_p2 = (!zext_ln395_433_fu_47560_p1.read().is_01() || !select_ln395_215_fu_47563_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_433_fu_47560_p1.read()) + sc_biguint<9>(select_ln395_215_fu_47563_p3.read()));
}

void poly1305_hw::thread_add_ln395_432_fu_47576_p2() {
    add_ln395_432_fu_47576_p2 = (!zext_ln395_432_fu_47557_p1.read().is_01() || !add_ln395_431_fu_47570_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_432_fu_47557_p1.read()) + sc_biguint<9>(add_ln395_431_fu_47570_p2.read()));
}

void poly1305_hw::thread_add_ln395_433_fu_47652_p2() {
    add_ln395_433_fu_47652_p2 = (!zext_ln395_435_fu_47642_p1.read().is_01() || !select_ln395_216_fu_47645_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_435_fu_47642_p1.read()) + sc_biguint<9>(select_ln395_216_fu_47645_p3.read()));
}

void poly1305_hw::thread_add_ln395_434_fu_47658_p2() {
    add_ln395_434_fu_47658_p2 = (!zext_ln395_434_fu_47639_p1.read().is_01() || !add_ln395_433_fu_47652_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_434_fu_47639_p1.read()) + sc_biguint<9>(add_ln395_433_fu_47652_p2.read()));
}

void poly1305_hw::thread_add_ln395_435_fu_47736_p2() {
    add_ln395_435_fu_47736_p2 = (!zext_ln395_437_fu_47725_p1.read().is_01() || !select_ln395_217_fu_47728_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_437_fu_47725_p1.read()) + sc_biguint<9>(select_ln395_217_fu_47728_p3.read()));
}

void poly1305_hw::thread_add_ln395_436_fu_47742_p2() {
    add_ln395_436_fu_47742_p2 = (!zext_ln395_436_fu_47721_p1.read().is_01() || !add_ln395_435_fu_47736_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_436_fu_47721_p1.read()) + sc_biguint<9>(add_ln395_435_fu_47736_p2.read()));
}

void poly1305_hw::thread_add_ln395_437_fu_47799_p2() {
    add_ln395_437_fu_47799_p2 = (!zext_ln395_439_fu_47789_p1.read().is_01() || !select_ln395_218_fu_47792_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_439_fu_47789_p1.read()) + sc_biguint<9>(select_ln395_218_fu_47792_p3.read()));
}

void poly1305_hw::thread_add_ln395_438_fu_47805_p2() {
    add_ln395_438_fu_47805_p2 = (!zext_ln395_438_fu_47786_p1.read().is_01() || !add_ln395_437_fu_47799_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_438_fu_47786_p1.read()) + sc_biguint<9>(add_ln395_437_fu_47799_p2.read()));
}

void poly1305_hw::thread_add_ln395_439_fu_47884_p2() {
    add_ln395_439_fu_47884_p2 = (!zext_ln395_441_fu_47872_p1.read().is_01() || !select_ln395_219_fu_47876_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_441_fu_47872_p1.read()) + sc_biguint<9>(select_ln395_219_fu_47876_p3.read()));
}

void poly1305_hw::thread_add_ln395_43_fu_32773_p2() {
    add_ln395_43_fu_32773_p2 = (!zext_ln395_45_fu_32762_p1.read().is_01() || !select_ln395_21_fu_32765_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_45_fu_32762_p1.read()) + sc_biguint<9>(select_ln395_21_fu_32765_p3.read()));
}

void poly1305_hw::thread_add_ln395_440_fu_47890_p2() {
    add_ln395_440_fu_47890_p2 = (!zext_ln395_440_fu_47868_p1.read().is_01() || !add_ln395_439_fu_47884_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_440_fu_47868_p1.read()) + sc_biguint<9>(add_ln395_439_fu_47884_p2.read()));
}

void poly1305_hw::thread_add_ln395_441_fu_47951_p2() {
    add_ln395_441_fu_47951_p2 = (!zext_ln395_443_fu_47941_p1.read().is_01() || !select_ln395_220_fu_47944_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_443_fu_47941_p1.read()) + sc_biguint<9>(select_ln395_220_fu_47944_p3.read()));
}

void poly1305_hw::thread_add_ln395_442_fu_47957_p2() {
    add_ln395_442_fu_47957_p2 = (!zext_ln395_442_fu_47938_p1.read().is_01() || !add_ln395_441_fu_47951_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_442_fu_47938_p1.read()) + sc_biguint<9>(add_ln395_441_fu_47951_p2.read()));
}

void poly1305_hw::thread_add_ln395_443_fu_48033_p2() {
    add_ln395_443_fu_48033_p2 = (!zext_ln395_445_fu_48023_p1.read().is_01() || !select_ln395_221_fu_48026_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_445_fu_48023_p1.read()) + sc_biguint<9>(select_ln395_221_fu_48026_p3.read()));
}

void poly1305_hw::thread_add_ln395_444_fu_48039_p2() {
    add_ln395_444_fu_48039_p2 = (!zext_ln395_444_fu_48020_p1.read().is_01() || !add_ln395_443_fu_48033_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_444_fu_48020_p1.read()) + sc_biguint<9>(add_ln395_443_fu_48033_p2.read()));
}

void poly1305_hw::thread_add_ln395_445_fu_48117_p2() {
    add_ln395_445_fu_48117_p2 = (!zext_ln395_447_fu_48106_p1.read().is_01() || !select_ln395_222_fu_48109_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_447_fu_48106_p1.read()) + sc_biguint<9>(select_ln395_222_fu_48109_p3.read()));
}

void poly1305_hw::thread_add_ln395_446_fu_48123_p2() {
    add_ln395_446_fu_48123_p2 = (!zext_ln395_446_fu_48102_p1.read().is_01() || !add_ln395_445_fu_48117_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_446_fu_48102_p1.read()) + sc_biguint<9>(add_ln395_445_fu_48117_p2.read()));
}

void poly1305_hw::thread_add_ln395_447_fu_48180_p2() {
    add_ln395_447_fu_48180_p2 = (!zext_ln395_449_fu_48170_p1.read().is_01() || !select_ln395_223_fu_48173_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_449_fu_48170_p1.read()) + sc_biguint<9>(select_ln395_223_fu_48173_p3.read()));
}

void poly1305_hw::thread_add_ln395_448_fu_48186_p2() {
    add_ln395_448_fu_48186_p2 = (!zext_ln395_448_fu_48167_p1.read().is_01() || !add_ln395_447_fu_48180_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_448_fu_48167_p1.read()) + sc_biguint<9>(add_ln395_447_fu_48180_p2.read()));
}

void poly1305_hw::thread_add_ln395_449_fu_48262_p2() {
    add_ln395_449_fu_48262_p2 = (!zext_ln395_451_fu_48252_p1.read().is_01() || !select_ln395_224_fu_48255_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_451_fu_48252_p1.read()) + sc_biguint<9>(select_ln395_224_fu_48255_p3.read()));
}

void poly1305_hw::thread_add_ln395_44_fu_32779_p2() {
    add_ln395_44_fu_32779_p2 = (!zext_ln395_44_fu_32758_p1.read().is_01() || !add_ln395_43_fu_32773_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_44_fu_32758_p1.read()) + sc_biguint<9>(add_ln395_43_fu_32773_p2.read()));
}

void poly1305_hw::thread_add_ln395_450_fu_48268_p2() {
    add_ln395_450_fu_48268_p2 = (!zext_ln395_450_fu_48249_p1.read().is_01() || !add_ln395_449_fu_48262_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_450_fu_48249_p1.read()) + sc_biguint<9>(add_ln395_449_fu_48262_p2.read()));
}

void poly1305_hw::thread_add_ln395_451_fu_48346_p2() {
    add_ln395_451_fu_48346_p2 = (!zext_ln395_453_fu_48335_p1.read().is_01() || !select_ln395_225_fu_48338_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_453_fu_48335_p1.read()) + sc_biguint<9>(select_ln395_225_fu_48338_p3.read()));
}

void poly1305_hw::thread_add_ln395_452_fu_48352_p2() {
    add_ln395_452_fu_48352_p2 = (!zext_ln395_452_fu_48331_p1.read().is_01() || !add_ln395_451_fu_48346_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_452_fu_48331_p1.read()) + sc_biguint<9>(add_ln395_451_fu_48346_p2.read()));
}

void poly1305_hw::thread_add_ln395_453_fu_48409_p2() {
    add_ln395_453_fu_48409_p2 = (!zext_ln395_455_fu_48399_p1.read().is_01() || !select_ln395_226_fu_48402_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_455_fu_48399_p1.read()) + sc_biguint<9>(select_ln395_226_fu_48402_p3.read()));
}

void poly1305_hw::thread_add_ln395_454_fu_48415_p2() {
    add_ln395_454_fu_48415_p2 = (!zext_ln395_454_fu_48396_p1.read().is_01() || !add_ln395_453_fu_48409_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_454_fu_48396_p1.read()) + sc_biguint<9>(add_ln395_453_fu_48409_p2.read()));
}

void poly1305_hw::thread_add_ln395_455_fu_48491_p2() {
    add_ln395_455_fu_48491_p2 = (!zext_ln395_457_fu_48481_p1.read().is_01() || !select_ln395_227_fu_48484_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_457_fu_48481_p1.read()) + sc_biguint<9>(select_ln395_227_fu_48484_p3.read()));
}

void poly1305_hw::thread_add_ln395_456_fu_48497_p2() {
    add_ln395_456_fu_48497_p2 = (!zext_ln395_456_fu_48478_p1.read().is_01() || !add_ln395_455_fu_48491_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_456_fu_48478_p1.read()) + sc_biguint<9>(add_ln395_455_fu_48491_p2.read()));
}

void poly1305_hw::thread_add_ln395_457_fu_48575_p2() {
    add_ln395_457_fu_48575_p2 = (!zext_ln395_459_fu_48564_p1.read().is_01() || !select_ln395_228_fu_48567_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_459_fu_48564_p1.read()) + sc_biguint<9>(select_ln395_228_fu_48567_p3.read()));
}

void poly1305_hw::thread_add_ln395_458_fu_48581_p2() {
    add_ln395_458_fu_48581_p2 = (!zext_ln395_458_fu_48560_p1.read().is_01() || !add_ln395_457_fu_48575_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_458_fu_48560_p1.read()) + sc_biguint<9>(add_ln395_457_fu_48575_p2.read()));
}

void poly1305_hw::thread_add_ln395_459_fu_48638_p2() {
    add_ln395_459_fu_48638_p2 = (!zext_ln395_461_fu_48628_p1.read().is_01() || !select_ln395_229_fu_48631_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_461_fu_48628_p1.read()) + sc_biguint<9>(select_ln395_229_fu_48631_p3.read()));
}

void poly1305_hw::thread_add_ln395_45_fu_32836_p2() {
    add_ln395_45_fu_32836_p2 = (!zext_ln395_47_fu_32826_p1.read().is_01() || !select_ln395_22_fu_32829_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_47_fu_32826_p1.read()) + sc_biguint<9>(select_ln395_22_fu_32829_p3.read()));
}

void poly1305_hw::thread_add_ln395_460_fu_48644_p2() {
    add_ln395_460_fu_48644_p2 = (!zext_ln395_460_fu_48625_p1.read().is_01() || !add_ln395_459_fu_48638_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_460_fu_48625_p1.read()) + sc_biguint<9>(add_ln395_459_fu_48638_p2.read()));
}

void poly1305_hw::thread_add_ln395_461_fu_48720_p2() {
    add_ln395_461_fu_48720_p2 = (!zext_ln395_463_fu_48710_p1.read().is_01() || !select_ln395_230_fu_48713_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_463_fu_48710_p1.read()) + sc_biguint<9>(select_ln395_230_fu_48713_p3.read()));
}

void poly1305_hw::thread_add_ln395_462_fu_48726_p2() {
    add_ln395_462_fu_48726_p2 = (!zext_ln395_462_fu_48707_p1.read().is_01() || !add_ln395_461_fu_48720_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_462_fu_48707_p1.read()) + sc_biguint<9>(add_ln395_461_fu_48720_p2.read()));
}

void poly1305_hw::thread_add_ln395_463_fu_48804_p2() {
    add_ln395_463_fu_48804_p2 = (!zext_ln395_465_fu_48793_p1.read().is_01() || !select_ln395_231_fu_48796_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_465_fu_48793_p1.read()) + sc_biguint<9>(select_ln395_231_fu_48796_p3.read()));
}

void poly1305_hw::thread_add_ln395_464_fu_48810_p2() {
    add_ln395_464_fu_48810_p2 = (!zext_ln395_464_fu_48789_p1.read().is_01() || !add_ln395_463_fu_48804_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_464_fu_48789_p1.read()) + sc_biguint<9>(add_ln395_463_fu_48804_p2.read()));
}

void poly1305_hw::thread_add_ln395_465_fu_48867_p2() {
    add_ln395_465_fu_48867_p2 = (!zext_ln395_467_fu_48857_p1.read().is_01() || !select_ln395_232_fu_48860_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_467_fu_48857_p1.read()) + sc_biguint<9>(select_ln395_232_fu_48860_p3.read()));
}

void poly1305_hw::thread_add_ln395_466_fu_48873_p2() {
    add_ln395_466_fu_48873_p2 = (!zext_ln395_466_fu_48854_p1.read().is_01() || !add_ln395_465_fu_48867_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_466_fu_48854_p1.read()) + sc_biguint<9>(add_ln395_465_fu_48867_p2.read()));
}

void poly1305_hw::thread_add_ln395_467_fu_48949_p2() {
    add_ln395_467_fu_48949_p2 = (!zext_ln395_469_fu_48939_p1.read().is_01() || !select_ln395_233_fu_48942_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_469_fu_48939_p1.read()) + sc_biguint<9>(select_ln395_233_fu_48942_p3.read()));
}

void poly1305_hw::thread_add_ln395_468_fu_48955_p2() {
    add_ln395_468_fu_48955_p2 = (!zext_ln395_468_fu_48936_p1.read().is_01() || !add_ln395_467_fu_48949_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_468_fu_48936_p1.read()) + sc_biguint<9>(add_ln395_467_fu_48949_p2.read()));
}

void poly1305_hw::thread_add_ln395_469_fu_49033_p2() {
    add_ln395_469_fu_49033_p2 = (!zext_ln395_471_fu_49022_p1.read().is_01() || !select_ln395_234_fu_49025_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_471_fu_49022_p1.read()) + sc_biguint<9>(select_ln395_234_fu_49025_p3.read()));
}

void poly1305_hw::thread_add_ln395_46_fu_32842_p2() {
    add_ln395_46_fu_32842_p2 = (!zext_ln395_46_fu_32823_p1.read().is_01() || !add_ln395_45_fu_32836_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_46_fu_32823_p1.read()) + sc_biguint<9>(add_ln395_45_fu_32836_p2.read()));
}

void poly1305_hw::thread_add_ln395_470_fu_49039_p2() {
    add_ln395_470_fu_49039_p2 = (!zext_ln395_470_fu_49018_p1.read().is_01() || !add_ln395_469_fu_49033_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_470_fu_49018_p1.read()) + sc_biguint<9>(add_ln395_469_fu_49033_p2.read()));
}

void poly1305_hw::thread_add_ln395_471_fu_49096_p2() {
    add_ln395_471_fu_49096_p2 = (!zext_ln395_473_fu_49086_p1.read().is_01() || !select_ln395_235_fu_49089_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_473_fu_49086_p1.read()) + sc_biguint<9>(select_ln395_235_fu_49089_p3.read()));
}

void poly1305_hw::thread_add_ln395_472_fu_49102_p2() {
    add_ln395_472_fu_49102_p2 = (!zext_ln395_472_fu_49083_p1.read().is_01() || !add_ln395_471_fu_49096_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_472_fu_49083_p1.read()) + sc_biguint<9>(add_ln395_471_fu_49096_p2.read()));
}

void poly1305_hw::thread_add_ln395_473_fu_49181_p2() {
    add_ln395_473_fu_49181_p2 = (!zext_ln395_475_fu_49169_p1.read().is_01() || !select_ln395_236_fu_49173_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_475_fu_49169_p1.read()) + sc_biguint<9>(select_ln395_236_fu_49173_p3.read()));
}

void poly1305_hw::thread_add_ln395_474_fu_49187_p2() {
    add_ln395_474_fu_49187_p2 = (!zext_ln395_474_fu_49165_p1.read().is_01() || !add_ln395_473_fu_49181_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_474_fu_49165_p1.read()) + sc_biguint<9>(add_ln395_473_fu_49181_p2.read()));
}

void poly1305_hw::thread_add_ln395_475_fu_49248_p2() {
    add_ln395_475_fu_49248_p2 = (!zext_ln395_477_fu_49238_p1.read().is_01() || !select_ln395_237_fu_49241_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_477_fu_49238_p1.read()) + sc_biguint<9>(select_ln395_237_fu_49241_p3.read()));
}

void poly1305_hw::thread_add_ln395_476_fu_49254_p2() {
    add_ln395_476_fu_49254_p2 = (!zext_ln395_476_fu_49235_p1.read().is_01() || !add_ln395_475_fu_49248_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_476_fu_49235_p1.read()) + sc_biguint<9>(add_ln395_475_fu_49248_p2.read()));
}

void poly1305_hw::thread_add_ln395_477_fu_49330_p2() {
    add_ln395_477_fu_49330_p2 = (!zext_ln395_479_fu_49320_p1.read().is_01() || !select_ln395_238_fu_49323_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_479_fu_49320_p1.read()) + sc_biguint<9>(select_ln395_238_fu_49323_p3.read()));
}

void poly1305_hw::thread_add_ln395_478_fu_49336_p2() {
    add_ln395_478_fu_49336_p2 = (!zext_ln395_478_fu_49317_p1.read().is_01() || !add_ln395_477_fu_49330_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_478_fu_49317_p1.read()) + sc_biguint<9>(add_ln395_477_fu_49330_p2.read()));
}

void poly1305_hw::thread_add_ln395_479_fu_49414_p2() {
    add_ln395_479_fu_49414_p2 = (!zext_ln395_481_fu_49403_p1.read().is_01() || !select_ln395_239_fu_49406_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_481_fu_49403_p1.read()) + sc_biguint<9>(select_ln395_239_fu_49406_p3.read()));
}

void poly1305_hw::thread_add_ln395_47_fu_32918_p2() {
    add_ln395_47_fu_32918_p2 = (!zext_ln395_49_fu_32908_p1.read().is_01() || !select_ln395_23_fu_32911_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_49_fu_32908_p1.read()) + sc_biguint<9>(select_ln395_23_fu_32911_p3.read()));
}

void poly1305_hw::thread_add_ln395_480_fu_49420_p2() {
    add_ln395_480_fu_49420_p2 = (!zext_ln395_480_fu_49399_p1.read().is_01() || !add_ln395_479_fu_49414_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_480_fu_49399_p1.read()) + sc_biguint<9>(add_ln395_479_fu_49414_p2.read()));
}

void poly1305_hw::thread_add_ln395_481_fu_49477_p2() {
    add_ln395_481_fu_49477_p2 = (!zext_ln395_483_fu_49467_p1.read().is_01() || !select_ln395_240_fu_49470_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_483_fu_49467_p1.read()) + sc_biguint<9>(select_ln395_240_fu_49470_p3.read()));
}

void poly1305_hw::thread_add_ln395_482_fu_49483_p2() {
    add_ln395_482_fu_49483_p2 = (!zext_ln395_482_fu_49464_p1.read().is_01() || !add_ln395_481_fu_49477_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_482_fu_49464_p1.read()) + sc_biguint<9>(add_ln395_481_fu_49477_p2.read()));
}

void poly1305_hw::thread_add_ln395_483_fu_49559_p2() {
    add_ln395_483_fu_49559_p2 = (!zext_ln395_485_fu_49549_p1.read().is_01() || !select_ln395_241_fu_49552_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_485_fu_49549_p1.read()) + sc_biguint<9>(select_ln395_241_fu_49552_p3.read()));
}

void poly1305_hw::thread_add_ln395_484_fu_49565_p2() {
    add_ln395_484_fu_49565_p2 = (!zext_ln395_484_fu_49546_p1.read().is_01() || !add_ln395_483_fu_49559_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_484_fu_49546_p1.read()) + sc_biguint<9>(add_ln395_483_fu_49559_p2.read()));
}

void poly1305_hw::thread_add_ln395_485_fu_49643_p2() {
    add_ln395_485_fu_49643_p2 = (!zext_ln395_487_fu_49632_p1.read().is_01() || !select_ln395_242_fu_49635_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_487_fu_49632_p1.read()) + sc_biguint<9>(select_ln395_242_fu_49635_p3.read()));
}

void poly1305_hw::thread_add_ln395_486_fu_49649_p2() {
    add_ln395_486_fu_49649_p2 = (!zext_ln395_486_fu_49628_p1.read().is_01() || !add_ln395_485_fu_49643_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_486_fu_49628_p1.read()) + sc_biguint<9>(add_ln395_485_fu_49643_p2.read()));
}

void poly1305_hw::thread_add_ln395_487_fu_49706_p2() {
    add_ln395_487_fu_49706_p2 = (!zext_ln395_489_fu_49696_p1.read().is_01() || !select_ln395_243_fu_49699_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_489_fu_49696_p1.read()) + sc_biguint<9>(select_ln395_243_fu_49699_p3.read()));
}

void poly1305_hw::thread_add_ln395_488_fu_49712_p2() {
    add_ln395_488_fu_49712_p2 = (!zext_ln395_488_fu_49693_p1.read().is_01() || !add_ln395_487_fu_49706_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_488_fu_49693_p1.read()) + sc_biguint<9>(add_ln395_487_fu_49706_p2.read()));
}

void poly1305_hw::thread_add_ln395_489_fu_49788_p2() {
    add_ln395_489_fu_49788_p2 = (!zext_ln395_491_fu_49778_p1.read().is_01() || !select_ln395_244_fu_49781_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_491_fu_49778_p1.read()) + sc_biguint<9>(select_ln395_244_fu_49781_p3.read()));
}

void poly1305_hw::thread_add_ln395_48_fu_32924_p2() {
    add_ln395_48_fu_32924_p2 = (!zext_ln395_48_fu_32905_p1.read().is_01() || !add_ln395_47_fu_32918_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_48_fu_32905_p1.read()) + sc_biguint<9>(add_ln395_47_fu_32918_p2.read()));
}

void poly1305_hw::thread_add_ln395_490_fu_49794_p2() {
    add_ln395_490_fu_49794_p2 = (!zext_ln395_490_fu_49775_p1.read().is_01() || !add_ln395_489_fu_49788_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_490_fu_49775_p1.read()) + sc_biguint<9>(add_ln395_489_fu_49788_p2.read()));
}

void poly1305_hw::thread_add_ln395_491_fu_49872_p2() {
    add_ln395_491_fu_49872_p2 = (!zext_ln395_493_fu_49861_p1.read().is_01() || !select_ln395_245_fu_49864_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_493_fu_49861_p1.read()) + sc_biguint<9>(select_ln395_245_fu_49864_p3.read()));
}

void poly1305_hw::thread_add_ln395_492_fu_49878_p2() {
    add_ln395_492_fu_49878_p2 = (!zext_ln395_492_fu_49857_p1.read().is_01() || !add_ln395_491_fu_49872_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_492_fu_49857_p1.read()) + sc_biguint<9>(add_ln395_491_fu_49872_p2.read()));
}

void poly1305_hw::thread_add_ln395_493_fu_49935_p2() {
    add_ln395_493_fu_49935_p2 = (!zext_ln395_495_fu_49925_p1.read().is_01() || !select_ln395_246_fu_49928_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_495_fu_49925_p1.read()) + sc_biguint<9>(select_ln395_246_fu_49928_p3.read()));
}

void poly1305_hw::thread_add_ln395_494_fu_49941_p2() {
    add_ln395_494_fu_49941_p2 = (!zext_ln395_494_fu_49922_p1.read().is_01() || !add_ln395_493_fu_49935_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_494_fu_49922_p1.read()) + sc_biguint<9>(add_ln395_493_fu_49935_p2.read()));
}

void poly1305_hw::thread_add_ln395_495_fu_50017_p2() {
    add_ln395_495_fu_50017_p2 = (!zext_ln395_497_fu_50007_p1.read().is_01() || !select_ln395_247_fu_50010_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_497_fu_50007_p1.read()) + sc_biguint<9>(select_ln395_247_fu_50010_p3.read()));
}

void poly1305_hw::thread_add_ln395_496_fu_50023_p2() {
    add_ln395_496_fu_50023_p2 = (!zext_ln395_496_fu_50004_p1.read().is_01() || !add_ln395_495_fu_50017_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_496_fu_50004_p1.read()) + sc_biguint<9>(add_ln395_495_fu_50017_p2.read()));
}

void poly1305_hw::thread_add_ln395_497_fu_50101_p2() {
    add_ln395_497_fu_50101_p2 = (!zext_ln395_499_fu_50090_p1.read().is_01() || !select_ln395_248_fu_50093_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_499_fu_50090_p1.read()) + sc_biguint<9>(select_ln395_248_fu_50093_p3.read()));
}

void poly1305_hw::thread_add_ln395_498_fu_50107_p2() {
    add_ln395_498_fu_50107_p2 = (!zext_ln395_498_fu_50086_p1.read().is_01() || !add_ln395_497_fu_50101_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_498_fu_50086_p1.read()) + sc_biguint<9>(add_ln395_497_fu_50101_p2.read()));
}

void poly1305_hw::thread_add_ln395_499_fu_50164_p2() {
    add_ln395_499_fu_50164_p2 = (!zext_ln395_501_fu_50154_p1.read().is_01() || !select_ln395_249_fu_50157_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_501_fu_50154_p1.read()) + sc_biguint<9>(select_ln395_249_fu_50157_p3.read()));
}

void poly1305_hw::thread_add_ln395_49_fu_33002_p2() {
    add_ln395_49_fu_33002_p2 = (!zext_ln395_51_fu_32991_p1.read().is_01() || !select_ln395_24_fu_32994_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_51_fu_32991_p1.read()) + sc_biguint<9>(select_ln395_24_fu_32994_p3.read()));
}

void poly1305_hw::thread_add_ln395_4_fu_31253_p2() {
    add_ln395_4_fu_31253_p2 = (!zext_ln395_4_fu_31232_p1.read().is_01() || !add_ln395_3_fu_31247_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_4_fu_31232_p1.read()) + sc_biguint<9>(add_ln395_3_fu_31247_p2.read()));
}

void poly1305_hw::thread_add_ln395_500_fu_50170_p2() {
    add_ln395_500_fu_50170_p2 = (!zext_ln395_500_fu_50151_p1.read().is_01() || !add_ln395_499_fu_50164_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_500_fu_50151_p1.read()) + sc_biguint<9>(add_ln395_499_fu_50164_p2.read()));
}

void poly1305_hw::thread_add_ln395_501_fu_50246_p2() {
    add_ln395_501_fu_50246_p2 = (!zext_ln395_503_fu_50236_p1.read().is_01() || !select_ln395_250_fu_50239_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_503_fu_50236_p1.read()) + sc_biguint<9>(select_ln395_250_fu_50239_p3.read()));
}

void poly1305_hw::thread_add_ln395_502_fu_50252_p2() {
    add_ln395_502_fu_50252_p2 = (!zext_ln395_502_fu_50233_p1.read().is_01() || !add_ln395_501_fu_50246_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_502_fu_50233_p1.read()) + sc_biguint<9>(add_ln395_501_fu_50246_p2.read()));
}

void poly1305_hw::thread_add_ln395_503_fu_50330_p2() {
    add_ln395_503_fu_50330_p2 = (!zext_ln395_505_fu_50319_p1.read().is_01() || !select_ln395_251_fu_50322_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_505_fu_50319_p1.read()) + sc_biguint<9>(select_ln395_251_fu_50322_p3.read()));
}

void poly1305_hw::thread_add_ln395_504_fu_50336_p2() {
    add_ln395_504_fu_50336_p2 = (!zext_ln395_504_fu_50315_p1.read().is_01() || !add_ln395_503_fu_50330_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_504_fu_50315_p1.read()) + sc_biguint<9>(add_ln395_503_fu_50330_p2.read()));
}

void poly1305_hw::thread_add_ln395_505_fu_50393_p2() {
    add_ln395_505_fu_50393_p2 = (!zext_ln395_507_fu_50383_p1.read().is_01() || !select_ln395_252_fu_50386_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_507_fu_50383_p1.read()) + sc_biguint<9>(select_ln395_252_fu_50386_p3.read()));
}

void poly1305_hw::thread_add_ln395_506_fu_50399_p2() {
    add_ln395_506_fu_50399_p2 = (!zext_ln395_506_fu_50380_p1.read().is_01() || !add_ln395_505_fu_50393_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_506_fu_50380_p1.read()) + sc_biguint<9>(add_ln395_505_fu_50393_p2.read()));
}

void poly1305_hw::thread_add_ln395_507_fu_50496_p2() {
    add_ln395_507_fu_50496_p2 = (!zext_ln395_509_fu_50485_p1.read().is_01() || !select_ln395_253_fu_50489_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_509_fu_50485_p1.read()) + sc_biguint<9>(select_ln395_253_fu_50489_p3.read()));
}

void poly1305_hw::thread_add_ln395_508_fu_50502_p2() {
    add_ln395_508_fu_50502_p2 = (!zext_ln395_508_fu_50482_p1.read().is_01() || !add_ln395_507_fu_50496_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_508_fu_50482_p1.read()) + sc_biguint<9>(add_ln395_507_fu_50496_p2.read()));
}

void poly1305_hw::thread_add_ln395_50_fu_33008_p2() {
    add_ln395_50_fu_33008_p2 = (!zext_ln395_50_fu_32987_p1.read().is_01() || !add_ln395_49_fu_33002_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_50_fu_32987_p1.read()) + sc_biguint<9>(add_ln395_49_fu_33002_p2.read()));
}

void poly1305_hw::thread_add_ln395_51_fu_33065_p2() {
    add_ln395_51_fu_33065_p2 = (!zext_ln395_53_fu_33055_p1.read().is_01() || !select_ln395_25_fu_33058_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_53_fu_33055_p1.read()) + sc_biguint<9>(select_ln395_25_fu_33058_p3.read()));
}

void poly1305_hw::thread_add_ln395_52_fu_33071_p2() {
    add_ln395_52_fu_33071_p2 = (!zext_ln395_52_fu_33052_p1.read().is_01() || !add_ln395_51_fu_33065_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_52_fu_33052_p1.read()) + sc_biguint<9>(add_ln395_51_fu_33065_p2.read()));
}

void poly1305_hw::thread_add_ln395_53_fu_33147_p2() {
    add_ln395_53_fu_33147_p2 = (!zext_ln395_55_fu_33137_p1.read().is_01() || !select_ln395_26_fu_33140_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_55_fu_33137_p1.read()) + sc_biguint<9>(select_ln395_26_fu_33140_p3.read()));
}

void poly1305_hw::thread_add_ln395_54_fu_33153_p2() {
    add_ln395_54_fu_33153_p2 = (!zext_ln395_54_fu_33134_p1.read().is_01() || !add_ln395_53_fu_33147_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_54_fu_33134_p1.read()) + sc_biguint<9>(add_ln395_53_fu_33147_p2.read()));
}

void poly1305_hw::thread_add_ln395_55_fu_33231_p2() {
    add_ln395_55_fu_33231_p2 = (!zext_ln395_57_fu_33220_p1.read().is_01() || !select_ln395_27_fu_33223_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_57_fu_33220_p1.read()) + sc_biguint<9>(select_ln395_27_fu_33223_p3.read()));
}

void poly1305_hw::thread_add_ln395_56_fu_33237_p2() {
    add_ln395_56_fu_33237_p2 = (!zext_ln395_56_fu_33216_p1.read().is_01() || !add_ln395_55_fu_33231_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_56_fu_33216_p1.read()) + sc_biguint<9>(add_ln395_55_fu_33231_p2.read()));
}

void poly1305_hw::thread_add_ln395_57_fu_33294_p2() {
    add_ln395_57_fu_33294_p2 = (!zext_ln395_59_fu_33284_p1.read().is_01() || !select_ln395_28_fu_33287_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_59_fu_33284_p1.read()) + sc_biguint<9>(select_ln395_28_fu_33287_p3.read()));
}

void poly1305_hw::thread_add_ln395_58_fu_33300_p2() {
    add_ln395_58_fu_33300_p2 = (!zext_ln395_58_fu_33281_p1.read().is_01() || !add_ln395_57_fu_33294_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_58_fu_33281_p1.read()) + sc_biguint<9>(add_ln395_57_fu_33294_p2.read()));
}

void poly1305_hw::thread_add_ln395_59_fu_33376_p2() {
    add_ln395_59_fu_33376_p2 = (!zext_ln395_61_fu_33366_p1.read().is_01() || !select_ln395_29_fu_33369_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_61_fu_33366_p1.read()) + sc_biguint<9>(select_ln395_29_fu_33369_p3.read()));
}

void poly1305_hw::thread_add_ln395_5_fu_31310_p2() {
    add_ln395_5_fu_31310_p2 = (!zext_ln395_7_fu_31300_p1.read().is_01() || !select_ln395_2_fu_31303_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_7_fu_31300_p1.read()) + sc_biguint<9>(select_ln395_2_fu_31303_p3.read()));
}

void poly1305_hw::thread_add_ln395_60_fu_33382_p2() {
    add_ln395_60_fu_33382_p2 = (!zext_ln395_60_fu_33363_p1.read().is_01() || !add_ln395_59_fu_33376_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_60_fu_33363_p1.read()) + sc_biguint<9>(add_ln395_59_fu_33376_p2.read()));
}

void poly1305_hw::thread_add_ln395_61_fu_33460_p2() {
    add_ln395_61_fu_33460_p2 = (!zext_ln395_63_fu_33449_p1.read().is_01() || !select_ln395_30_fu_33452_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_63_fu_33449_p1.read()) + sc_biguint<9>(select_ln395_30_fu_33452_p3.read()));
}

void poly1305_hw::thread_add_ln395_62_fu_33466_p2() {
    add_ln395_62_fu_33466_p2 = (!zext_ln395_62_fu_33445_p1.read().is_01() || !add_ln395_61_fu_33460_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_62_fu_33445_p1.read()) + sc_biguint<9>(add_ln395_61_fu_33460_p2.read()));
}

void poly1305_hw::thread_add_ln395_63_fu_33523_p2() {
    add_ln395_63_fu_33523_p2 = (!zext_ln395_65_fu_33513_p1.read().is_01() || !select_ln395_31_fu_33516_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_65_fu_33513_p1.read()) + sc_biguint<9>(select_ln395_31_fu_33516_p3.read()));
}

void poly1305_hw::thread_add_ln395_64_fu_33529_p2() {
    add_ln395_64_fu_33529_p2 = (!zext_ln395_64_fu_33510_p1.read().is_01() || !add_ln395_63_fu_33523_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_64_fu_33510_p1.read()) + sc_biguint<9>(add_ln395_63_fu_33523_p2.read()));
}

void poly1305_hw::thread_add_ln395_65_fu_33608_p2() {
    add_ln395_65_fu_33608_p2 = (!zext_ln395_67_fu_33596_p1.read().is_01() || !select_ln395_32_fu_33600_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_67_fu_33596_p1.read()) + sc_biguint<9>(select_ln395_32_fu_33600_p3.read()));
}

void poly1305_hw::thread_add_ln395_66_fu_33614_p2() {
    add_ln395_66_fu_33614_p2 = (!zext_ln395_66_fu_33592_p1.read().is_01() || !add_ln395_65_fu_33608_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_66_fu_33592_p1.read()) + sc_biguint<9>(add_ln395_65_fu_33608_p2.read()));
}

void poly1305_hw::thread_add_ln395_67_fu_33675_p2() {
    add_ln395_67_fu_33675_p2 = (!zext_ln395_69_fu_33665_p1.read().is_01() || !select_ln395_33_fu_33668_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_69_fu_33665_p1.read()) + sc_biguint<9>(select_ln395_33_fu_33668_p3.read()));
}

void poly1305_hw::thread_add_ln395_68_fu_33681_p2() {
    add_ln395_68_fu_33681_p2 = (!zext_ln395_68_fu_33662_p1.read().is_01() || !add_ln395_67_fu_33675_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_68_fu_33662_p1.read()) + sc_biguint<9>(add_ln395_67_fu_33675_p2.read()));
}

void poly1305_hw::thread_add_ln395_69_fu_33757_p2() {
    add_ln395_69_fu_33757_p2 = (!zext_ln395_71_fu_33747_p1.read().is_01() || !select_ln395_34_fu_33750_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_71_fu_33747_p1.read()) + sc_biguint<9>(select_ln395_34_fu_33750_p3.read()));
}

void poly1305_hw::thread_add_ln395_6_fu_31316_p2() {
    add_ln395_6_fu_31316_p2 = (!zext_ln395_6_fu_31297_p1.read().is_01() || !add_ln395_5_fu_31310_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_6_fu_31297_p1.read()) + sc_biguint<9>(add_ln395_5_fu_31310_p2.read()));
}

void poly1305_hw::thread_add_ln395_70_fu_33763_p2() {
    add_ln395_70_fu_33763_p2 = (!zext_ln395_70_fu_33744_p1.read().is_01() || !add_ln395_69_fu_33757_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_70_fu_33744_p1.read()) + sc_biguint<9>(add_ln395_69_fu_33757_p2.read()));
}

void poly1305_hw::thread_add_ln395_71_fu_33841_p2() {
    add_ln395_71_fu_33841_p2 = (!zext_ln395_73_fu_33830_p1.read().is_01() || !select_ln395_35_fu_33833_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_73_fu_33830_p1.read()) + sc_biguint<9>(select_ln395_35_fu_33833_p3.read()));
}

void poly1305_hw::thread_add_ln395_72_fu_33847_p2() {
    add_ln395_72_fu_33847_p2 = (!zext_ln395_72_fu_33826_p1.read().is_01() || !add_ln395_71_fu_33841_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_72_fu_33826_p1.read()) + sc_biguint<9>(add_ln395_71_fu_33841_p2.read()));
}

void poly1305_hw::thread_add_ln395_73_fu_33904_p2() {
    add_ln395_73_fu_33904_p2 = (!zext_ln395_75_fu_33894_p1.read().is_01() || !select_ln395_36_fu_33897_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_75_fu_33894_p1.read()) + sc_biguint<9>(select_ln395_36_fu_33897_p3.read()));
}

void poly1305_hw::thread_add_ln395_74_fu_33910_p2() {
    add_ln395_74_fu_33910_p2 = (!zext_ln395_74_fu_33891_p1.read().is_01() || !add_ln395_73_fu_33904_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_74_fu_33891_p1.read()) + sc_biguint<9>(add_ln395_73_fu_33904_p2.read()));
}

void poly1305_hw::thread_add_ln395_75_fu_33986_p2() {
    add_ln395_75_fu_33986_p2 = (!zext_ln395_77_fu_33976_p1.read().is_01() || !select_ln395_37_fu_33979_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_77_fu_33976_p1.read()) + sc_biguint<9>(select_ln395_37_fu_33979_p3.read()));
}

void poly1305_hw::thread_add_ln395_76_fu_33992_p2() {
    add_ln395_76_fu_33992_p2 = (!zext_ln395_76_fu_33973_p1.read().is_01() || !add_ln395_75_fu_33986_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_76_fu_33973_p1.read()) + sc_biguint<9>(add_ln395_75_fu_33986_p2.read()));
}

void poly1305_hw::thread_add_ln395_77_fu_34070_p2() {
    add_ln395_77_fu_34070_p2 = (!zext_ln395_79_fu_34059_p1.read().is_01() || !select_ln395_38_fu_34062_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_79_fu_34059_p1.read()) + sc_biguint<9>(select_ln395_38_fu_34062_p3.read()));
}

void poly1305_hw::thread_add_ln395_78_fu_34076_p2() {
    add_ln395_78_fu_34076_p2 = (!zext_ln395_78_fu_34055_p1.read().is_01() || !add_ln395_77_fu_34070_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_78_fu_34055_p1.read()) + sc_biguint<9>(add_ln395_77_fu_34070_p2.read()));
}

void poly1305_hw::thread_add_ln395_79_fu_34133_p2() {
    add_ln395_79_fu_34133_p2 = (!zext_ln395_81_fu_34123_p1.read().is_01() || !select_ln395_39_fu_34126_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_81_fu_34123_p1.read()) + sc_biguint<9>(select_ln395_39_fu_34126_p3.read()));
}

void poly1305_hw::thread_add_ln395_7_fu_31392_p2() {
    add_ln395_7_fu_31392_p2 = (!zext_ln395_9_fu_31382_p1.read().is_01() || !select_ln395_3_fu_31385_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_9_fu_31382_p1.read()) + sc_biguint<9>(select_ln395_3_fu_31385_p3.read()));
}

void poly1305_hw::thread_add_ln395_80_fu_34139_p2() {
    add_ln395_80_fu_34139_p2 = (!zext_ln395_80_fu_34120_p1.read().is_01() || !add_ln395_79_fu_34133_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_80_fu_34120_p1.read()) + sc_biguint<9>(add_ln395_79_fu_34133_p2.read()));
}

void poly1305_hw::thread_add_ln395_81_fu_34215_p2() {
    add_ln395_81_fu_34215_p2 = (!zext_ln395_83_fu_34205_p1.read().is_01() || !select_ln395_40_fu_34208_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_83_fu_34205_p1.read()) + sc_biguint<9>(select_ln395_40_fu_34208_p3.read()));
}

void poly1305_hw::thread_add_ln395_82_fu_34221_p2() {
    add_ln395_82_fu_34221_p2 = (!zext_ln395_82_fu_34202_p1.read().is_01() || !add_ln395_81_fu_34215_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_82_fu_34202_p1.read()) + sc_biguint<9>(add_ln395_81_fu_34215_p2.read()));
}

void poly1305_hw::thread_add_ln395_83_fu_34299_p2() {
    add_ln395_83_fu_34299_p2 = (!zext_ln395_85_fu_34288_p1.read().is_01() || !select_ln395_41_fu_34291_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_85_fu_34288_p1.read()) + sc_biguint<9>(select_ln395_41_fu_34291_p3.read()));
}

void poly1305_hw::thread_add_ln395_84_fu_34305_p2() {
    add_ln395_84_fu_34305_p2 = (!zext_ln395_84_fu_34284_p1.read().is_01() || !add_ln395_83_fu_34299_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_84_fu_34284_p1.read()) + sc_biguint<9>(add_ln395_83_fu_34299_p2.read()));
}

void poly1305_hw::thread_add_ln395_85_fu_34362_p2() {
    add_ln395_85_fu_34362_p2 = (!zext_ln395_87_fu_34352_p1.read().is_01() || !select_ln395_42_fu_34355_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_87_fu_34352_p1.read()) + sc_biguint<9>(select_ln395_42_fu_34355_p3.read()));
}

void poly1305_hw::thread_add_ln395_86_fu_34368_p2() {
    add_ln395_86_fu_34368_p2 = (!zext_ln395_86_fu_34349_p1.read().is_01() || !add_ln395_85_fu_34362_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_86_fu_34349_p1.read()) + sc_biguint<9>(add_ln395_85_fu_34362_p2.read()));
}

void poly1305_hw::thread_add_ln395_87_fu_34444_p2() {
    add_ln395_87_fu_34444_p2 = (!zext_ln395_89_fu_34434_p1.read().is_01() || !select_ln395_43_fu_34437_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_89_fu_34434_p1.read()) + sc_biguint<9>(select_ln395_43_fu_34437_p3.read()));
}

void poly1305_hw::thread_add_ln395_88_fu_34450_p2() {
    add_ln395_88_fu_34450_p2 = (!zext_ln395_88_fu_34431_p1.read().is_01() || !add_ln395_87_fu_34444_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_88_fu_34431_p1.read()) + sc_biguint<9>(add_ln395_87_fu_34444_p2.read()));
}

void poly1305_hw::thread_add_ln395_89_fu_34528_p2() {
    add_ln395_89_fu_34528_p2 = (!zext_ln395_91_fu_34517_p1.read().is_01() || !select_ln395_44_fu_34520_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_91_fu_34517_p1.read()) + sc_biguint<9>(select_ln395_44_fu_34520_p3.read()));
}

void poly1305_hw::thread_add_ln395_8_fu_31398_p2() {
    add_ln395_8_fu_31398_p2 = (!zext_ln395_8_fu_31379_p1.read().is_01() || !add_ln395_7_fu_31392_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_8_fu_31379_p1.read()) + sc_biguint<9>(add_ln395_7_fu_31392_p2.read()));
}

void poly1305_hw::thread_add_ln395_90_fu_34534_p2() {
    add_ln395_90_fu_34534_p2 = (!zext_ln395_90_fu_34513_p1.read().is_01() || !add_ln395_89_fu_34528_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_90_fu_34513_p1.read()) + sc_biguint<9>(add_ln395_89_fu_34528_p2.read()));
}

void poly1305_hw::thread_add_ln395_91_fu_34591_p2() {
    add_ln395_91_fu_34591_p2 = (!zext_ln395_93_fu_34581_p1.read().is_01() || !select_ln395_45_fu_34584_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_93_fu_34581_p1.read()) + sc_biguint<9>(select_ln395_45_fu_34584_p3.read()));
}

void poly1305_hw::thread_add_ln395_92_fu_34597_p2() {
    add_ln395_92_fu_34597_p2 = (!zext_ln395_92_fu_34578_p1.read().is_01() || !add_ln395_91_fu_34591_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_92_fu_34578_p1.read()) + sc_biguint<9>(add_ln395_91_fu_34591_p2.read()));
}

void poly1305_hw::thread_add_ln395_93_fu_34673_p2() {
    add_ln395_93_fu_34673_p2 = (!zext_ln395_95_fu_34663_p1.read().is_01() || !select_ln395_46_fu_34666_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_95_fu_34663_p1.read()) + sc_biguint<9>(select_ln395_46_fu_34666_p3.read()));
}

void poly1305_hw::thread_add_ln395_94_fu_34679_p2() {
    add_ln395_94_fu_34679_p2 = (!zext_ln395_94_fu_34660_p1.read().is_01() || !add_ln395_93_fu_34673_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_94_fu_34660_p1.read()) + sc_biguint<9>(add_ln395_93_fu_34673_p2.read()));
}

void poly1305_hw::thread_add_ln395_95_fu_34757_p2() {
    add_ln395_95_fu_34757_p2 = (!zext_ln395_97_fu_34746_p1.read().is_01() || !select_ln395_47_fu_34749_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_97_fu_34746_p1.read()) + sc_biguint<9>(select_ln395_47_fu_34749_p3.read()));
}

void poly1305_hw::thread_add_ln395_96_fu_34763_p2() {
    add_ln395_96_fu_34763_p2 = (!zext_ln395_96_fu_34742_p1.read().is_01() || !add_ln395_95_fu_34757_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_96_fu_34742_p1.read()) + sc_biguint<9>(add_ln395_95_fu_34757_p2.read()));
}

void poly1305_hw::thread_add_ln395_97_fu_34820_p2() {
    add_ln395_97_fu_34820_p2 = (!zext_ln395_99_fu_34810_p1.read().is_01() || !select_ln395_48_fu_34813_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_99_fu_34810_p1.read()) + sc_biguint<9>(select_ln395_48_fu_34813_p3.read()));
}

void poly1305_hw::thread_add_ln395_98_fu_34826_p2() {
    add_ln395_98_fu_34826_p2 = (!zext_ln395_98_fu_34807_p1.read().is_01() || !add_ln395_97_fu_34820_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_98_fu_34807_p1.read()) + sc_biguint<9>(add_ln395_97_fu_34820_p2.read()));
}

void poly1305_hw::thread_add_ln395_99_fu_34905_p2() {
    add_ln395_99_fu_34905_p2 = (!zext_ln395_101_fu_34893_p1.read().is_01() || !select_ln395_49_fu_34897_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_101_fu_34893_p1.read()) + sc_biguint<9>(select_ln395_49_fu_34897_p3.read()));
}

void poly1305_hw::thread_add_ln395_9_fu_31476_p2() {
    add_ln395_9_fu_31476_p2 = (!zext_ln395_11_fu_31465_p1.read().is_01() || !select_ln395_4_fu_31468_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_11_fu_31465_p1.read()) + sc_biguint<9>(select_ln395_4_fu_31468_p3.read()));
}

void poly1305_hw::thread_add_ln395_fu_31093_p2() {
    add_ln395_fu_31093_p2 = (!zext_ln395_1_fu_31090_p1.read().is_01() || !zext_ln395_fu_31087_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln395_1_fu_31090_p1.read()) + sc_biguint<9>(zext_ln395_fu_31087_p1.read()));
}

void poly1305_hw::thread_add_ln402_100_fu_32564_p2() {
    add_ln402_100_fu_32564_p2 = (!add_ln402_3_reg_101427.read().is_01() || !trunc_ln383_19_fu_32501_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_3_reg_101427.read()) + sc_biguint<8>(trunc_ln383_19_fu_32501_p1.read()));
}

void poly1305_hw::thread_add_ln402_101_fu_32635_p2() {
    add_ln402_101_fu_32635_p2 = (!add_ln402_4_reg_101447.read().is_01() || !trunc_ln383_20_reg_101794.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_4_reg_101447.read()) + sc_biguint<8>(trunc_ln383_20_reg_101794.read()));
}

void poly1305_hw::thread_add_ln402_102_fu_38898_p2() {
    add_ln402_102_fu_38898_p2 = (!select_ln402_101_fu_38846_p3.read().is_01() || !add_ln402_257_fu_38894_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_101_fu_38846_p3.read()) + sc_biguint<8>(add_ln402_257_fu_38894_p2.read()));
}

void poly1305_hw::thread_add_ln402_103_fu_38980_p2() {
    add_ln402_103_fu_38980_p2 = (!select_ln402_102_reg_103703.read().is_01() || !add_ln402_258_fu_38976_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_102_reg_103703.read()) + sc_biguint<8>(add_ln402_258_fu_38976_p2.read()));
}

void poly1305_hw::thread_add_ln402_104_fu_39057_p2() {
    add_ln402_104_fu_39057_p2 = (!select_ln402_103_fu_38968_p3.read().is_01() || !add_ln402_259_fu_39052_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_103_fu_38968_p3.read()) + sc_biguint<8>(add_ln402_259_fu_39052_p2.read()));
}

void poly1305_hw::thread_add_ln402_105_fu_39127_p2() {
    add_ln402_105_fu_39127_p2 = (!select_ln402_104_fu_39070_p3.read().is_01() || !add_ln402_260_fu_39123_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_104_fu_39070_p3.read()) + sc_biguint<8>(add_ln402_260_fu_39123_p2.read()));
}

void poly1305_hw::thread_add_ln402_106_fu_39209_p2() {
    add_ln402_106_fu_39209_p2 = (!select_ln402_105_reg_103773.read().is_01() || !add_ln402_261_fu_39205_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_105_reg_103773.read()) + sc_biguint<8>(add_ln402_261_fu_39205_p2.read()));
}

void poly1305_hw::thread_add_ln402_107_fu_39286_p2() {
    add_ln402_107_fu_39286_p2 = (!select_ln402_106_fu_39197_p3.read().is_01() || !add_ln402_262_fu_39281_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_106_fu_39197_p3.read()) + sc_biguint<8>(add_ln402_262_fu_39281_p2.read()));
}

void poly1305_hw::thread_add_ln402_108_fu_39356_p2() {
    add_ln402_108_fu_39356_p2 = (!select_ln402_107_fu_39299_p3.read().is_01() || !add_ln402_263_fu_39352_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_107_fu_39299_p3.read()) + sc_biguint<8>(add_ln402_263_fu_39352_p2.read()));
}

void poly1305_hw::thread_add_ln402_109_fu_39438_p2() {
    add_ln402_109_fu_39438_p2 = (!select_ln402_108_reg_103843.read().is_01() || !add_ln402_264_fu_39434_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_108_reg_103843.read()) + sc_biguint<8>(add_ln402_264_fu_39434_p2.read()));
}

void poly1305_hw::thread_add_ln402_10_fu_31882_p2() {
    add_ln402_10_fu_31882_p2 = (!select_ln402_9_reg_101562.read().is_01() || !add_ln402_67_fu_31878_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_9_reg_101562.read()) + sc_biguint<8>(add_ln402_67_fu_31878_p2.read()));
}

void poly1305_hw::thread_add_ln402_110_fu_39515_p2() {
    add_ln402_110_fu_39515_p2 = (!select_ln402_109_fu_39426_p3.read().is_01() || !add_ln402_265_fu_39510_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_109_fu_39426_p3.read()) + sc_biguint<8>(add_ln402_265_fu_39510_p2.read()));
}

void poly1305_hw::thread_add_ln402_111_fu_39585_p2() {
    add_ln402_111_fu_39585_p2 = (!select_ln402_110_fu_39528_p3.read().is_01() || !add_ln402_266_fu_39581_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_110_fu_39528_p3.read()) + sc_biguint<8>(add_ln402_266_fu_39581_p2.read()));
}

void poly1305_hw::thread_add_ln402_112_fu_32717_p2() {
    add_ln402_112_fu_32717_p2 = (!add_ln402_5_reg_101462.read().is_01() || !trunc_ln383_21_reg_101824.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_5_reg_101462.read()) + sc_biguint<8>(trunc_ln383_21_reg_101824.read()));
}

void poly1305_hw::thread_add_ln402_113_fu_32793_p2() {
    add_ln402_113_fu_32793_p2 = (!add_ln402_6_reg_101497.read().is_01() || !trunc_ln383_22_fu_32730_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_6_reg_101497.read()) + sc_biguint<8>(trunc_ln383_22_fu_32730_p1.read()));
}

void poly1305_hw::thread_add_ln402_114_fu_32864_p2() {
    add_ln402_114_fu_32864_p2 = (!add_ln402_7_reg_101517.read().is_01() || !trunc_ln383_23_reg_101864.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_7_reg_101517.read()) + sc_biguint<8>(trunc_ln383_23_reg_101864.read()));
}

void poly1305_hw::thread_add_ln402_115_fu_32946_p2() {
    add_ln402_115_fu_32946_p2 = (!add_ln402_8_reg_101532.read().is_01() || !trunc_ln383_24_reg_101894.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_8_reg_101532.read()) + sc_biguint<8>(trunc_ln383_24_reg_101894.read()));
}

void poly1305_hw::thread_add_ln402_116_fu_33022_p2() {
    add_ln402_116_fu_33022_p2 = (!add_ln402_9_reg_101567.read().is_01() || !trunc_ln383_25_fu_32959_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_9_reg_101567.read()) + sc_biguint<8>(trunc_ln383_25_fu_32959_p1.read()));
}

void poly1305_hw::thread_add_ln402_117_fu_33093_p2() {
    add_ln402_117_fu_33093_p2 = (!add_ln402_10_reg_101587.read().is_01() || !trunc_ln383_26_reg_101934.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_10_reg_101587.read()) + sc_biguint<8>(trunc_ln383_26_reg_101934.read()));
}

void poly1305_hw::thread_add_ln402_118_fu_33175_p2() {
    add_ln402_118_fu_33175_p2 = (!add_ln402_11_reg_101602.read().is_01() || !trunc_ln383_27_reg_101964.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_11_reg_101602.read()) + sc_biguint<8>(trunc_ln383_27_reg_101964.read()));
}

void poly1305_hw::thread_add_ln402_119_fu_40199_p2() {
    add_ln402_119_fu_40199_p2 = (!select_ln402_118_fu_40147_p3.read().is_01() || !add_ln402_281_fu_40195_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_118_fu_40147_p3.read()) + sc_biguint<8>(add_ln402_281_fu_40195_p2.read()));
}

void poly1305_hw::thread_add_ln402_11_fu_31959_p2() {
    add_ln402_11_fu_31959_p2 = (!select_ln402_10_fu_31870_p3.read().is_01() || !add_ln402_80_fu_31954_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_10_fu_31870_p3.read()) + sc_biguint<8>(add_ln402_80_fu_31954_p2.read()));
}

void poly1305_hw::thread_add_ln402_120_fu_40281_p2() {
    add_ln402_120_fu_40281_p2 = (!select_ln402_119_reg_104099.read().is_01() || !add_ln402_282_fu_40277_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_119_reg_104099.read()) + sc_biguint<8>(add_ln402_282_fu_40277_p2.read()));
}

void poly1305_hw::thread_add_ln402_121_fu_40358_p2() {
    add_ln402_121_fu_40358_p2 = (!select_ln402_120_fu_40269_p3.read().is_01() || !add_ln402_283_fu_40353_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_120_fu_40269_p3.read()) + sc_biguint<8>(add_ln402_283_fu_40353_p2.read()));
}

void poly1305_hw::thread_add_ln402_122_fu_40428_p2() {
    add_ln402_122_fu_40428_p2 = (!select_ln402_121_fu_40371_p3.read().is_01() || !add_ln402_284_fu_40424_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_121_fu_40371_p3.read()) + sc_biguint<8>(add_ln402_284_fu_40424_p2.read()));
}

void poly1305_hw::thread_add_ln402_123_fu_40510_p2() {
    add_ln402_123_fu_40510_p2 = (!select_ln402_122_reg_104169.read().is_01() || !add_ln402_285_fu_40506_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_122_reg_104169.read()) + sc_biguint<8>(add_ln402_285_fu_40506_p2.read()));
}

void poly1305_hw::thread_add_ln402_124_fu_40587_p2() {
    add_ln402_124_fu_40587_p2 = (!select_ln402_123_fu_40498_p3.read().is_01() || !add_ln402_286_fu_40582_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_123_fu_40498_p3.read()) + sc_biguint<8>(add_ln402_286_fu_40582_p2.read()));
}

void poly1305_hw::thread_add_ln402_125_fu_40657_p2() {
    add_ln402_125_fu_40657_p2 = (!select_ln402_124_fu_40600_p3.read().is_01() || !add_ln402_287_fu_40653_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_124_fu_40600_p3.read()) + sc_biguint<8>(add_ln402_287_fu_40653_p2.read()));
}

void poly1305_hw::thread_add_ln402_126_fu_40739_p2() {
    add_ln402_126_fu_40739_p2 = (!select_ln402_125_reg_104239.read().is_01() || !add_ln402_288_fu_40735_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_125_reg_104239.read()) + sc_biguint<8>(add_ln402_288_fu_40735_p2.read()));
}

void poly1305_hw::thread_add_ln402_127_fu_40816_p2() {
    add_ln402_127_fu_40816_p2 = (!select_ln402_126_fu_40727_p3.read().is_01() || !add_ln402_289_fu_40811_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_126_fu_40727_p3.read()) + sc_biguint<8>(add_ln402_289_fu_40811_p2.read()));
}

void poly1305_hw::thread_add_ln402_128_fu_33251_p2() {
    add_ln402_128_fu_33251_p2 = (!add_ln402_12_reg_101637.read().is_01() || !trunc_ln383_28_fu_33188_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_12_reg_101637.read()) + sc_biguint<8>(trunc_ln383_28_fu_33188_p1.read()));
}

void poly1305_hw::thread_add_ln402_129_fu_33322_p2() {
    add_ln402_129_fu_33322_p2 = (!add_ln402_13_reg_101657.read().is_01() || !trunc_ln383_29_reg_102004.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_13_reg_101657.read()) + sc_biguint<8>(trunc_ln383_29_reg_102004.read()));
}

void poly1305_hw::thread_add_ln402_12_fu_32029_p2() {
    add_ln402_12_fu_32029_p2 = (!select_ln402_11_fu_31972_p3.read().is_01() || !add_ln402_81_fu_32025_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_11_fu_31972_p3.read()) + sc_biguint<8>(add_ln402_81_fu_32025_p2.read()));
}

void poly1305_hw::thread_add_ln402_130_fu_33404_p2() {
    add_ln402_130_fu_33404_p2 = (!add_ln402_14_reg_101672.read().is_01() || !trunc_ln383_30_reg_102034.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_14_reg_101672.read()) + sc_biguint<8>(trunc_ln383_30_reg_102034.read()));
}

void poly1305_hw::thread_add_ln402_131_fu_33480_p2() {
    add_ln402_131_fu_33480_p2 = (!add_ln402_15_reg_101697.read().is_01() || !trunc_ln383_31_fu_33417_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_15_reg_101697.read()) + sc_biguint<8>(trunc_ln383_31_fu_33417_p1.read()));
}

void poly1305_hw::thread_add_ln402_132_fu_33551_p2() {
    add_ln402_132_fu_33551_p2 = (!mul_17_3_reg_101717.read().is_01() || !trunc_ln383_32_reg_102074.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_3_reg_101717.read()) + sc_biguint<8>(trunc_ln383_32_reg_102074.read()));
}

void poly1305_hw::thread_add_ln402_134_fu_33628_p2() {
    add_ln402_134_fu_33628_p2 = (!mul_18_1_reg_9148.read().is_01() || !trunc_ln383_33_fu_33565_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_1_reg_9148.read()) + sc_biguint<8>(trunc_ln383_33_fu_33565_p1.read()));
}

void poly1305_hw::thread_add_ln402_136_fu_41495_p2() {
    add_ln402_136_fu_41495_p2 = (!select_ln402_135_fu_41443_p3.read().is_01() || !add_ln402_306_fu_41491_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_135_fu_41443_p3.read()) + sc_biguint<8>(add_ln402_306_fu_41491_p2.read()));
}

void poly1305_hw::thread_add_ln402_137_fu_41577_p2() {
    add_ln402_137_fu_41577_p2 = (!select_ln402_136_reg_104490.read().is_01() || !add_ln402_307_fu_41573_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_136_reg_104490.read()) + sc_biguint<8>(add_ln402_307_fu_41573_p2.read()));
}

void poly1305_hw::thread_add_ln402_138_fu_41654_p2() {
    add_ln402_138_fu_41654_p2 = (!select_ln402_137_fu_41565_p3.read().is_01() || !add_ln402_308_fu_41649_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_137_fu_41565_p3.read()) + sc_biguint<8>(add_ln402_308_fu_41649_p2.read()));
}

void poly1305_hw::thread_add_ln402_139_fu_41724_p2() {
    add_ln402_139_fu_41724_p2 = (!select_ln402_138_fu_41667_p3.read().is_01() || !add_ln402_309_fu_41720_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_138_fu_41667_p3.read()) + sc_biguint<8>(add_ln402_309_fu_41720_p2.read()));
}

void poly1305_hw::thread_add_ln402_13_fu_32111_p2() {
    add_ln402_13_fu_32111_p2 = (!select_ln402_12_reg_101632.read().is_01() || !add_ln402_82_fu_32107_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_12_reg_101632.read()) + sc_biguint<8>(add_ln402_82_fu_32107_p2.read()));
}

void poly1305_hw::thread_add_ln402_140_fu_41806_p2() {
    add_ln402_140_fu_41806_p2 = (!select_ln402_139_reg_104560.read().is_01() || !add_ln402_310_fu_41802_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_139_reg_104560.read()) + sc_biguint<8>(add_ln402_310_fu_41802_p2.read()));
}

void poly1305_hw::thread_add_ln402_141_fu_41883_p2() {
    add_ln402_141_fu_41883_p2 = (!select_ln402_140_fu_41794_p3.read().is_01() || !add_ln402_311_fu_41878_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_140_fu_41794_p3.read()) + sc_biguint<8>(add_ln402_311_fu_41878_p2.read()));
}

void poly1305_hw::thread_add_ln402_142_fu_41953_p2() {
    add_ln402_142_fu_41953_p2 = (!select_ln402_141_fu_41896_p3.read().is_01() || !add_ln402_312_fu_41949_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_141_fu_41896_p3.read()) + sc_biguint<8>(add_ln402_312_fu_41949_p2.read()));
}

void poly1305_hw::thread_add_ln402_143_fu_42035_p2() {
    add_ln402_143_fu_42035_p2 = (!select_ln402_142_reg_104630.read().is_01() || !add_ln402_313_fu_42031_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_142_reg_104630.read()) + sc_biguint<8>(add_ln402_313_fu_42031_p2.read()));
}

void poly1305_hw::thread_add_ln402_144_fu_33703_p2() {
    add_ln402_144_fu_33703_p2 = (!add_ln402_18_reg_101768.read().is_01() || !trunc_ln383_34_reg_102119.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_18_reg_101768.read()) + sc_biguint<8>(trunc_ln383_34_reg_102119.read()));
}

void poly1305_hw::thread_add_ln402_145_fu_33785_p2() {
    add_ln402_145_fu_33785_p2 = (!add_ln402_19_reg_101783.read().is_01() || !trunc_ln382_reg_102145.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_19_reg_101783.read()) + sc_biguint<8>(trunc_ln382_reg_102145.read()));
}

void poly1305_hw::thread_add_ln402_146_fu_33861_p2() {
    add_ln402_146_fu_33861_p2 = (!add_ln402_20_reg_101818.read().is_01() || !trunc_ln382_1_fu_33798_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_20_reg_101818.read()) + sc_biguint<8>(trunc_ln382_1_fu_33798_p1.read()));
}

void poly1305_hw::thread_add_ln402_147_fu_33932_p2() {
    add_ln402_147_fu_33932_p2 = (!add_ln402_21_reg_101838.read().is_01() || !trunc_ln382_2_reg_102185.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_21_reg_101838.read()) + sc_biguint<8>(trunc_ln382_2_reg_102185.read()));
}

void poly1305_hw::thread_add_ln402_148_fu_34014_p2() {
    add_ln402_148_fu_34014_p2 = (!add_ln402_22_reg_101853.read().is_01() || !trunc_ln382_3_reg_102215.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_22_reg_101853.read()) + sc_biguint<8>(trunc_ln382_3_reg_102215.read()));
}

void poly1305_hw::thread_add_ln402_149_fu_34090_p2() {
    add_ln402_149_fu_34090_p2 = (!add_ln402_23_reg_101888.read().is_01() || !trunc_ln382_4_fu_34027_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_23_reg_101888.read()) + sc_biguint<8>(trunc_ln382_4_fu_34027_p1.read()));
}

void poly1305_hw::thread_add_ln402_14_fu_32188_p2() {
    add_ln402_14_fu_32188_p2 = (!select_ln402_13_fu_32099_p3.read().is_01() || !add_ln402_83_fu_32183_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_13_fu_32099_p3.read()) + sc_biguint<8>(add_ln402_83_fu_32183_p2.read()));
}

void poly1305_hw::thread_add_ln402_150_fu_34161_p2() {
    add_ln402_150_fu_34161_p2 = (!add_ln402_24_reg_101908.read().is_01() || !trunc_ln382_5_reg_102255.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_24_reg_101908.read()) + sc_biguint<8>(trunc_ln382_5_reg_102255.read()));
}

void poly1305_hw::thread_add_ln402_151_fu_34243_p2() {
    add_ln402_151_fu_34243_p2 = (!add_ln402_25_reg_101923.read().is_01() || !trunc_ln382_6_reg_102285.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_25_reg_101923.read()) + sc_biguint<8>(trunc_ln382_6_reg_102285.read()));
}

void poly1305_hw::thread_add_ln402_152_fu_34319_p2() {
    add_ln402_152_fu_34319_p2 = (!add_ln402_26_reg_101958.read().is_01() || !trunc_ln382_7_fu_34256_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_26_reg_101958.read()) + sc_biguint<8>(trunc_ln382_7_fu_34256_p1.read()));
}

void poly1305_hw::thread_add_ln402_153_fu_42792_p2() {
    add_ln402_153_fu_42792_p2 = (!select_ln402_152_fu_42740_p3.read().is_01() || !add_ln402_332_fu_42788_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_152_fu_42740_p3.read()) + sc_biguint<8>(add_ln402_332_fu_42788_p2.read()));
}

void poly1305_hw::thread_add_ln402_154_fu_42874_p2() {
    add_ln402_154_fu_42874_p2 = (!select_ln402_153_reg_104881.read().is_01() || !add_ln402_333_fu_42870_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_153_reg_104881.read()) + sc_biguint<8>(add_ln402_333_fu_42870_p2.read()));
}

void poly1305_hw::thread_add_ln402_155_fu_42951_p2() {
    add_ln402_155_fu_42951_p2 = (!select_ln402_154_fu_42862_p3.read().is_01() || !add_ln402_334_fu_42946_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_154_fu_42862_p3.read()) + sc_biguint<8>(add_ln402_334_fu_42946_p2.read()));
}

void poly1305_hw::thread_add_ln402_156_fu_43021_p2() {
    add_ln402_156_fu_43021_p2 = (!select_ln402_155_fu_42964_p3.read().is_01() || !add_ln402_335_fu_43017_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_155_fu_42964_p3.read()) + sc_biguint<8>(add_ln402_335_fu_43017_p2.read()));
}

void poly1305_hw::thread_add_ln402_157_fu_43103_p2() {
    add_ln402_157_fu_43103_p2 = (!select_ln402_156_reg_104951.read().is_01() || !add_ln402_336_fu_43099_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_156_reg_104951.read()) + sc_biguint<8>(add_ln402_336_fu_43099_p2.read()));
}

void poly1305_hw::thread_add_ln402_158_fu_43180_p2() {
    add_ln402_158_fu_43180_p2 = (!select_ln402_157_fu_43091_p3.read().is_01() || !add_ln402_337_fu_43175_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_157_fu_43091_p3.read()) + sc_biguint<8>(add_ln402_337_fu_43175_p2.read()));
}

void poly1305_hw::thread_add_ln402_159_fu_43250_p2() {
    add_ln402_159_fu_43250_p2 = (!select_ln402_158_fu_43193_p3.read().is_01() || !add_ln402_338_fu_43246_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_158_fu_43193_p3.read()) + sc_biguint<8>(add_ln402_338_fu_43246_p2.read()));
}

void poly1305_hw::thread_add_ln402_15_fu_32258_p2() {
    add_ln402_15_fu_32258_p2 = (!select_ln402_14_fu_32201_p3.read().is_01() || !add_ln402_84_fu_32254_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_14_fu_32201_p3.read()) + sc_biguint<8>(add_ln402_84_fu_32254_p2.read()));
}

void poly1305_hw::thread_add_ln402_160_fu_34390_p2() {
    add_ln402_160_fu_34390_p2 = (!add_ln402_27_reg_101978.read().is_01() || !trunc_ln382_8_reg_102325.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_27_reg_101978.read()) + sc_biguint<8>(trunc_ln382_8_reg_102325.read()));
}

void poly1305_hw::thread_add_ln402_161_fu_34472_p2() {
    add_ln402_161_fu_34472_p2 = (!add_ln402_28_reg_101993.read().is_01() || !trunc_ln382_9_reg_102355.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_28_reg_101993.read()) + sc_biguint<8>(trunc_ln382_9_reg_102355.read()));
}

void poly1305_hw::thread_add_ln402_162_fu_34548_p2() {
    add_ln402_162_fu_34548_p2 = (!add_ln402_29_reg_102028.read().is_01() || !trunc_ln382_10_fu_34485_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_29_reg_102028.read()) + sc_biguint<8>(trunc_ln382_10_fu_34485_p1.read()));
}

void poly1305_hw::thread_add_ln402_163_fu_34619_p2() {
    add_ln402_163_fu_34619_p2 = (!add_ln402_30_reg_102048.read().is_01() || !trunc_ln382_11_reg_102395.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_30_reg_102048.read()) + sc_biguint<8>(trunc_ln382_11_reg_102395.read()));
}

void poly1305_hw::thread_add_ln402_164_fu_34701_p2() {
    add_ln402_164_fu_34701_p2 = (!add_ln402_31_reg_102063.read().is_01() || !trunc_ln382_12_reg_102425.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_31_reg_102063.read()) + sc_biguint<8>(trunc_ln382_12_reg_102425.read()));
}

void poly1305_hw::thread_add_ln402_165_fu_34777_p2() {
    add_ln402_165_fu_34777_p2 = (!mul_17_5_reg_102088.read().is_01() || !trunc_ln382_13_fu_34714_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_5_reg_102088.read()) + sc_biguint<8>(trunc_ln382_13_fu_34714_p1.read()));
}

void poly1305_hw::thread_add_ln402_167_fu_34848_p2() {
    add_ln402_167_fu_34848_p2 = (!mul_18_3_reg_102108.read().is_01() || !trunc_ln382_14_reg_102465.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_3_reg_102108.read()) + sc_biguint<8>(trunc_ln382_14_reg_102465.read()));
}

void poly1305_hw::thread_add_ln402_169_fu_34925_p2() {
    add_ln402_169_fu_34925_p2 = (!mul_19_1_reg_9325.read().is_01() || !trunc_ln382_15_fu_34862_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_1_reg_9325.read()) + sc_biguint<8>(trunc_ln382_15_fu_34862_p1.read()));
}

void poly1305_hw::thread_add_ln402_16_fu_31191_p2() {
    add_ln402_16_fu_31191_p2 = (!trunc_ln395_2_reg_100778.read().is_01() || !trunc_ln383_1_reg_101363.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_2_reg_100778.read()) + sc_biguint<8>(trunc_ln383_1_reg_101363.read()));
}

void poly1305_hw::thread_add_ln402_170_fu_44089_p2() {
    add_ln402_170_fu_44089_p2 = (!select_ln402_169_fu_44037_p3.read().is_01() || !add_ln402_359_fu_44085_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_169_fu_44037_p3.read()) + sc_biguint<8>(add_ln402_359_fu_44085_p2.read()));
}

void poly1305_hw::thread_add_ln402_171_fu_44171_p2() {
    add_ln402_171_fu_44171_p2 = (!select_ln402_170_reg_105272.read().is_01() || !add_ln402_360_fu_44167_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_170_reg_105272.read()) + sc_biguint<8>(add_ln402_360_fu_44167_p2.read()));
}

void poly1305_hw::thread_add_ln402_172_fu_44248_p2() {
    add_ln402_172_fu_44248_p2 = (!select_ln402_171_fu_44159_p3.read().is_01() || !add_ln402_361_fu_44243_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_171_fu_44159_p3.read()) + sc_biguint<8>(add_ln402_361_fu_44243_p2.read()));
}

void poly1305_hw::thread_add_ln402_173_fu_44318_p2() {
    add_ln402_173_fu_44318_p2 = (!select_ln402_172_fu_44261_p3.read().is_01() || !add_ln402_362_fu_44314_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_172_fu_44261_p3.read()) + sc_biguint<8>(add_ln402_362_fu_44314_p2.read()));
}

void poly1305_hw::thread_add_ln402_174_fu_44400_p2() {
    add_ln402_174_fu_44400_p2 = (!select_ln402_173_reg_105342.read().is_01() || !add_ln402_363_fu_44396_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_173_reg_105342.read()) + sc_biguint<8>(add_ln402_363_fu_44396_p2.read()));
}

void poly1305_hw::thread_add_ln402_175_fu_44477_p2() {
    add_ln402_175_fu_44477_p2 = (!select_ln402_174_fu_44388_p3.read().is_01() || !add_ln402_364_fu_44472_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_174_fu_44388_p3.read()) + sc_biguint<8>(add_ln402_364_fu_44472_p2.read()));
}

void poly1305_hw::thread_add_ln402_177_fu_35004_p2() {
    add_ln402_177_fu_35004_p2 = (!add_ln402_35_reg_102159.read().is_01() || !trunc_ln383_35_reg_102510.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_35_reg_102159.read()) + sc_biguint<8>(trunc_ln383_35_reg_102510.read()));
}

void poly1305_hw::thread_add_ln402_178_fu_35086_p2() {
    add_ln402_178_fu_35086_p2 = (!add_ln402_36_reg_102174.read().is_01() || !trunc_ln383_36_reg_102541.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_36_reg_102174.read()) + sc_biguint<8>(trunc_ln383_36_reg_102541.read()));
}

void poly1305_hw::thread_add_ln402_179_fu_35162_p2() {
    add_ln402_179_fu_35162_p2 = (!add_ln402_37_reg_102209.read().is_01() || !trunc_ln383_37_fu_35099_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_37_reg_102209.read()) + sc_biguint<8>(trunc_ln383_37_fu_35099_p1.read()));
}

void poly1305_hw::thread_add_ln402_17_fu_32410_p2() {
    add_ln402_17_fu_32410_p2 = (!select_ln402_16_fu_32358_p3.read().is_01() || !add_ln402_98_fu_32406_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_16_fu_32358_p3.read()) + sc_biguint<8>(add_ln402_98_fu_32406_p2.read()));
}

void poly1305_hw::thread_add_ln402_180_fu_35233_p2() {
    add_ln402_180_fu_35233_p2 = (!add_ln402_38_reg_102229.read().is_01() || !trunc_ln383_38_reg_102581.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_38_reg_102229.read()) + sc_biguint<8>(trunc_ln383_38_reg_102581.read()));
}

void poly1305_hw::thread_add_ln402_181_fu_35315_p2() {
    add_ln402_181_fu_35315_p2 = (!add_ln402_39_reg_102244.read().is_01() || !trunc_ln383_39_reg_102611.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_39_reg_102244.read()) + sc_biguint<8>(trunc_ln383_39_reg_102611.read()));
}

void poly1305_hw::thread_add_ln402_182_fu_35391_p2() {
    add_ln402_182_fu_35391_p2 = (!add_ln402_40_reg_102279.read().is_01() || !trunc_ln383_40_fu_35328_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_40_reg_102279.read()) + sc_biguint<8>(trunc_ln383_40_fu_35328_p1.read()));
}

void poly1305_hw::thread_add_ln402_183_fu_35462_p2() {
    add_ln402_183_fu_35462_p2 = (!add_ln402_41_reg_102299.read().is_01() || !trunc_ln383_41_reg_102651.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_41_reg_102299.read()) + sc_biguint<8>(trunc_ln383_41_reg_102651.read()));
}

void poly1305_hw::thread_add_ln402_184_fu_35544_p2() {
    add_ln402_184_fu_35544_p2 = (!add_ln402_42_reg_102314.read().is_01() || !trunc_ln383_42_reg_102681.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_42_reg_102314.read()) + sc_biguint<8>(trunc_ln383_42_reg_102681.read()));
}

void poly1305_hw::thread_add_ln402_185_fu_35620_p2() {
    add_ln402_185_fu_35620_p2 = (!add_ln402_43_reg_102349.read().is_01() || !trunc_ln383_43_fu_35557_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_43_reg_102349.read()) + sc_biguint<8>(trunc_ln383_43_fu_35557_p1.read()));
}

void poly1305_hw::thread_add_ln402_186_fu_35691_p2() {
    add_ln402_186_fu_35691_p2 = (!add_ln402_44_reg_102369.read().is_01() || !trunc_ln383_44_reg_102721.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_44_reg_102369.read()) + sc_biguint<8>(trunc_ln383_44_reg_102721.read()));
}

void poly1305_hw::thread_add_ln402_187_fu_45390_p2() {
    add_ln402_187_fu_45390_p2 = (!select_ln402_186_fu_45338_p3.read().is_01() || !add_ln402_387_fu_45386_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_186_fu_45338_p3.read()) + sc_biguint<8>(add_ln402_387_fu_45386_p2.read()));
}

void poly1305_hw::thread_add_ln402_188_fu_45472_p2() {
    add_ln402_188_fu_45472_p2 = (!select_ln402_187_reg_105668.read().is_01() || !add_ln402_388_fu_45468_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_187_reg_105668.read()) + sc_biguint<8>(add_ln402_388_fu_45468_p2.read()));
}

void poly1305_hw::thread_add_ln402_189_fu_45549_p2() {
    add_ln402_189_fu_45549_p2 = (!select_ln402_188_fu_45460_p3.read().is_01() || !add_ln402_389_fu_45544_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_188_fu_45460_p3.read()) + sc_biguint<8>(add_ln402_389_fu_45544_p2.read()));
}

void poly1305_hw::thread_add_ln402_18_fu_32492_p2() {
    add_ln402_18_fu_32492_p2 = (!select_ln402_17_reg_101743.read().is_01() || !add_ln402_99_fu_32488_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_17_reg_101743.read()) + sc_biguint<8>(add_ln402_99_fu_32488_p2.read()));
}

void poly1305_hw::thread_add_ln402_190_fu_45619_p2() {
    add_ln402_190_fu_45619_p2 = (!select_ln402_189_fu_45562_p3.read().is_01() || !add_ln402_390_fu_45615_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_189_fu_45562_p3.read()) + sc_biguint<8>(add_ln402_390_fu_45615_p2.read()));
}

void poly1305_hw::thread_add_ln402_191_fu_45701_p2() {
    add_ln402_191_fu_45701_p2 = (!select_ln402_190_reg_105738.read().is_01() || !add_ln402_391_fu_45697_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_190_reg_105738.read()) + sc_biguint<8>(add_ln402_391_fu_45697_p2.read()));
}

void poly1305_hw::thread_add_ln402_192_fu_35773_p2() {
    add_ln402_192_fu_35773_p2 = (!add_ln402_45_reg_102384.read().is_01() || !trunc_ln383_45_reg_102751.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_45_reg_102384.read()) + sc_biguint<8>(trunc_ln383_45_reg_102751.read()));
}

void poly1305_hw::thread_add_ln402_193_fu_35849_p2() {
    add_ln402_193_fu_35849_p2 = (!add_ln402_46_reg_102419.read().is_01() || !trunc_ln383_46_fu_35786_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_46_reg_102419.read()) + sc_biguint<8>(trunc_ln383_46_fu_35786_p1.read()));
}

void poly1305_hw::thread_add_ln402_194_fu_35920_p2() {
    add_ln402_194_fu_35920_p2 = (!add_ln402_47_reg_102439.read().is_01() || !trunc_ln383_47_reg_102791.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_47_reg_102439.read()) + sc_biguint<8>(trunc_ln383_47_reg_102791.read()));
}

void poly1305_hw::thread_add_ln402_195_fu_36002_p2() {
    add_ln402_195_fu_36002_p2 = (!mul_17_7_reg_102454.read().is_01() || !trunc_ln383_48_reg_102821.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_7_reg_102454.read()) + sc_biguint<8>(trunc_ln383_48_reg_102821.read()));
}

void poly1305_hw::thread_add_ln402_197_fu_36078_p2() {
    add_ln402_197_fu_36078_p2 = (!mul_18_5_reg_102479.read().is_01() || !trunc_ln383_49_fu_36015_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_5_reg_102479.read()) + sc_biguint<8>(trunc_ln383_49_fu_36015_p1.read()));
}

void poly1305_hw::thread_add_ln402_199_fu_36149_p2() {
    add_ln402_199_fu_36149_p2 = (!mul_19_3_reg_102499.read().is_01() || !trunc_ln383_50_reg_102861.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_3_reg_102499.read()) + sc_biguint<8>(trunc_ln383_50_reg_102861.read()));
}

void poly1305_hw::thread_add_ln402_19_fu_32569_p2() {
    add_ln402_19_fu_32569_p2 = (!select_ln402_18_fu_32480_p3.read().is_01() || !add_ln402_100_fu_32564_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_18_fu_32480_p3.read()) + sc_biguint<8>(add_ln402_100_fu_32564_p2.read()));
}

void poly1305_hw::thread_add_ln402_1_fu_31195_p2() {
    add_ln402_1_fu_31195_p2 = (!select_ln402_reg_101352.read().is_01() || !add_ln402_16_fu_31191_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_reg_101352.read()) + sc_biguint<8>(add_ln402_16_fu_31191_p2.read()));
}

void poly1305_hw::thread_add_ln402_201_fu_36226_p2() {
    add_ln402_201_fu_36226_p2 = (!zext_ln391_reg_102520.read().is_01() || !trunc_ln383_51_fu_36163_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln391_reg_102520.read()) + sc_biguint<8>(trunc_ln383_51_fu_36163_p1.read()));
}

void poly1305_hw::thread_add_ln402_203_fu_36300_p2() {
    add_ln402_203_fu_36300_p2 = (!add_ln402_52_reg_102555.read().is_01() || !trunc_ln383_52_reg_102906.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_52_reg_102555.read()) + sc_biguint<8>(trunc_ln383_52_reg_102906.read()));
}

void poly1305_hw::thread_add_ln402_204_fu_46686_p2() {
    add_ln402_204_fu_46686_p2 = (!select_ln402_203_fu_46634_p3.read().is_01() || !add_ln402_416_fu_46682_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_203_fu_46634_p3.read()) + sc_biguint<8>(add_ln402_416_fu_46682_p2.read()));
}

void poly1305_hw::thread_add_ln402_205_fu_46768_p2() {
    add_ln402_205_fu_46768_p2 = (!select_ln402_204_reg_106059.read().is_01() || !add_ln402_417_fu_46764_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_204_reg_106059.read()) + sc_biguint<8>(add_ln402_417_fu_46764_p2.read()));
}

void poly1305_hw::thread_add_ln402_206_fu_46845_p2() {
    add_ln402_206_fu_46845_p2 = (!select_ln402_205_fu_46756_p3.read().is_01() || !add_ln402_418_fu_46840_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_205_fu_46756_p3.read()) + sc_biguint<8>(add_ln402_418_fu_46840_p2.read()));
}

void poly1305_hw::thread_add_ln402_207_fu_46915_p2() {
    add_ln402_207_fu_46915_p2 = (!select_ln402_206_fu_46858_p3.read().is_01() || !add_ln402_419_fu_46911_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_206_fu_46858_p3.read()) + sc_biguint<8>(add_ln402_419_fu_46911_p2.read()));
}

void poly1305_hw::thread_add_ln402_208_fu_36382_p2() {
    add_ln402_208_fu_36382_p2 = (!add_ln402_53_reg_102570.read().is_01() || !trunc_ln383_53_reg_102932.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_53_reg_102570.read()) + sc_biguint<8>(trunc_ln383_53_reg_102932.read()));
}

void poly1305_hw::thread_add_ln402_209_fu_36458_p2() {
    add_ln402_209_fu_36458_p2 = (!add_ln402_54_reg_102605.read().is_01() || !trunc_ln383_54_fu_36395_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_54_reg_102605.read()) + sc_biguint<8>(trunc_ln383_54_fu_36395_p1.read()));
}

void poly1305_hw::thread_add_ln402_20_fu_32639_p2() {
    add_ln402_20_fu_32639_p2 = (!select_ln402_19_fu_32582_p3.read().is_01() || !add_ln402_101_fu_32635_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_19_fu_32582_p3.read()) + sc_biguint<8>(add_ln402_101_fu_32635_p2.read()));
}

void poly1305_hw::thread_add_ln402_210_fu_36529_p2() {
    add_ln402_210_fu_36529_p2 = (!add_ln402_55_reg_102625.read().is_01() || !trunc_ln383_55_reg_102972.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_55_reg_102625.read()) + sc_biguint<8>(trunc_ln383_55_reg_102972.read()));
}

void poly1305_hw::thread_add_ln402_211_fu_36611_p2() {
    add_ln402_211_fu_36611_p2 = (!add_ln402_56_reg_102640.read().is_01() || !trunc_ln383_56_reg_103002.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_56_reg_102640.read()) + sc_biguint<8>(trunc_ln383_56_reg_103002.read()));
}

void poly1305_hw::thread_add_ln402_212_fu_36687_p2() {
    add_ln402_212_fu_36687_p2 = (!add_ln402_57_reg_102675.read().is_01() || !trunc_ln383_57_fu_36624_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_57_reg_102675.read()) + sc_biguint<8>(trunc_ln383_57_fu_36624_p1.read()));
}

void poly1305_hw::thread_add_ln402_213_fu_36758_p2() {
    add_ln402_213_fu_36758_p2 = (!add_ln402_58_reg_102695.read().is_01() || !trunc_ln383_58_reg_103042.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_58_reg_102695.read()) + sc_biguint<8>(trunc_ln383_58_reg_103042.read()));
}

void poly1305_hw::thread_add_ln402_214_fu_36840_p2() {
    add_ln402_214_fu_36840_p2 = (!add_ln402_59_reg_102710.read().is_01() || !trunc_ln383_59_reg_103072.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_59_reg_102710.read()) + sc_biguint<8>(trunc_ln383_59_reg_103072.read()));
}

void poly1305_hw::thread_add_ln402_215_fu_36916_p2() {
    add_ln402_215_fu_36916_p2 = (!add_ln402_60_reg_102745.read().is_01() || !trunc_ln383_60_fu_36853_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_60_reg_102745.read()) + sc_biguint<8>(trunc_ln383_60_fu_36853_p1.read()));
}

void poly1305_hw::thread_add_ln402_216_fu_36987_p2() {
    add_ln402_216_fu_36987_p2 = (!add_ln402_61_reg_102765.read().is_01() || !trunc_ln383_61_reg_103112.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_61_reg_102765.read()) + sc_biguint<8>(trunc_ln383_61_reg_103112.read()));
}

void poly1305_hw::thread_add_ln402_217_fu_37069_p2() {
    add_ln402_217_fu_37069_p2 = (!add_ln402_62_reg_102780.read().is_01() || !trunc_ln383_62_reg_103142.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_62_reg_102780.read()) + sc_biguint<8>(trunc_ln383_62_reg_103142.read()));
}

void poly1305_hw::thread_add_ln402_218_fu_37145_p2() {
    add_ln402_218_fu_37145_p2 = (!add_ln402_63_reg_102815.read().is_01() || !trunc_ln383_63_fu_37082_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_63_reg_102815.read()) + sc_biguint<8>(trunc_ln383_63_fu_37082_p1.read()));
}

void poly1305_hw::thread_add_ln402_219_fu_37216_p2() {
    add_ln402_219_fu_37216_p2 = (!mul_17_9_reg_102835.read().is_01() || !trunc_ln383_64_reg_103182.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_9_reg_102835.read()) + sc_biguint<8>(trunc_ln383_64_reg_103182.read()));
}

void poly1305_hw::thread_add_ln402_21_fu_32721_p2() {
    add_ln402_21_fu_32721_p2 = (!select_ln402_20_reg_101813.read().is_01() || !add_ln402_112_fu_32717_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_20_reg_101813.read()) + sc_biguint<8>(add_ln402_112_fu_32717_p2.read()));
}

void poly1305_hw::thread_add_ln402_221_fu_47983_p2() {
    add_ln402_221_fu_47983_p2 = (!select_ln402_220_fu_47931_p3.read().is_01() || !add_ln402_446_fu_47979_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_220_fu_47931_p3.read()) + sc_biguint<8>(add_ln402_446_fu_47979_p2.read()));
}

void poly1305_hw::thread_add_ln402_222_fu_48065_p2() {
    add_ln402_222_fu_48065_p2 = (!select_ln402_221_reg_106450.read().is_01() || !add_ln402_447_fu_48061_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_221_reg_106450.read()) + sc_biguint<8>(add_ln402_447_fu_48061_p2.read()));
}

void poly1305_hw::thread_add_ln402_223_fu_48142_p2() {
    add_ln402_223_fu_48142_p2 = (!select_ln402_222_fu_48053_p3.read().is_01() || !add_ln402_448_fu_48137_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_222_fu_48053_p3.read()) + sc_biguint<8>(add_ln402_448_fu_48137_p2.read()));
}

void poly1305_hw::thread_add_ln402_224_fu_37298_p2() {
    add_ln402_224_fu_37298_p2 = (!mul_18_7_reg_102850.read().is_01() || !trunc_ln383_65_reg_103212.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_7_reg_102850.read()) + sc_biguint<8>(trunc_ln383_65_reg_103212.read()));
}

void poly1305_hw::thread_add_ln402_226_fu_37374_p2() {
    add_ln402_226_fu_37374_p2 = (!mul_19_5_reg_102875.read().is_01() || !trunc_ln383_66_fu_37311_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_5_reg_102875.read()) + sc_biguint<8>(trunc_ln383_66_fu_37311_p1.read()));
}

void poly1305_hw::thread_add_ln402_228_fu_37445_p2() {
    add_ln402_228_fu_37445_p2 = (!mul_20_3_reg_102895.read().is_01() || !trunc_ln383_67_reg_103252.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_3_reg_102895.read()) + sc_biguint<8>(trunc_ln383_67_reg_103252.read()));
}

void poly1305_hw::thread_add_ln402_22_fu_32798_p2() {
    add_ln402_22_fu_32798_p2 = (!select_ln402_21_fu_32709_p3.read().is_01() || !add_ln402_113_fu_32793_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_21_fu_32709_p3.read()) + sc_biguint<8>(add_ln402_113_fu_32793_p2.read()));
}

void poly1305_hw::thread_add_ln402_230_fu_37522_p2() {
    add_ln402_230_fu_37522_p2 = (!mul_21_1_reg_9679.read().is_01() || !trunc_ln383_68_fu_37459_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_1_reg_9679.read()) + sc_biguint<8>(trunc_ln383_68_fu_37459_p1.read()));
}

void poly1305_hw::thread_add_ln402_232_fu_37597_p2() {
    add_ln402_232_fu_37597_p2 = (!add_ln402_69_reg_102946.read().is_01() || !trunc_ln383_69_reg_103297.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_69_reg_102946.read()) + sc_biguint<8>(trunc_ln383_69_reg_103297.read()));
}

void poly1305_hw::thread_add_ln402_233_fu_37679_p2() {
    add_ln402_233_fu_37679_p2 = (!add_ln402_70_reg_102961.read().is_01() || !trunc_ln383_70_reg_103323.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_70_reg_102961.read()) + sc_biguint<8>(trunc_ln383_70_reg_103323.read()));
}

void poly1305_hw::thread_add_ln402_234_fu_37755_p2() {
    add_ln402_234_fu_37755_p2 = (!add_ln402_71_reg_102996.read().is_01() || !trunc_ln383_71_fu_37692_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_71_reg_102996.read()) + sc_biguint<8>(trunc_ln383_71_fu_37692_p1.read()));
}

void poly1305_hw::thread_add_ln402_235_fu_37826_p2() {
    add_ln402_235_fu_37826_p2 = (!add_ln402_72_reg_103016.read().is_01() || !trunc_ln383_72_reg_103363.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_72_reg_103016.read()) + sc_biguint<8>(trunc_ln383_72_reg_103363.read()));
}

void poly1305_hw::thread_add_ln402_236_fu_37908_p2() {
    add_ln402_236_fu_37908_p2 = (!add_ln402_73_reg_103031.read().is_01() || !trunc_ln383_73_reg_103393.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_73_reg_103031.read()) + sc_biguint<8>(trunc_ln383_73_reg_103393.read()));
}

void poly1305_hw::thread_add_ln402_237_fu_37984_p2() {
    add_ln402_237_fu_37984_p2 = (!add_ln402_74_reg_103066.read().is_01() || !trunc_ln383_74_fu_37921_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_74_reg_103066.read()) + sc_biguint<8>(trunc_ln383_74_fu_37921_p1.read()));
}

void poly1305_hw::thread_add_ln402_238_fu_49280_p2() {
    add_ln402_238_fu_49280_p2 = (!select_ln402_237_fu_49228_p3.read().is_01() || !add_ln402_477_fu_49276_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_237_fu_49228_p3.read()) + sc_biguint<8>(add_ln402_477_fu_49276_p2.read()));
}

void poly1305_hw::thread_add_ln402_239_fu_49362_p2() {
    add_ln402_239_fu_49362_p2 = (!select_ln402_238_reg_106841.read().is_01() || !add_ln402_478_fu_49358_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_238_reg_106841.read()) + sc_biguint<8>(add_ln402_478_fu_49358_p2.read()));
}

void poly1305_hw::thread_add_ln402_23_fu_32868_p2() {
    add_ln402_23_fu_32868_p2 = (!select_ln402_22_fu_32811_p3.read().is_01() || !add_ln402_114_fu_32864_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_22_fu_32811_p3.read()) + sc_biguint<8>(add_ln402_114_fu_32864_p2.read()));
}

void poly1305_hw::thread_add_ln402_240_fu_38055_p2() {
    add_ln402_240_fu_38055_p2 = (!add_ln402_75_reg_103086.read().is_01() || !trunc_ln383_75_reg_103433.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_75_reg_103086.read()) + sc_biguint<8>(trunc_ln383_75_reg_103433.read()));
}

void poly1305_hw::thread_add_ln402_241_fu_38137_p2() {
    add_ln402_241_fu_38137_p2 = (!add_ln402_76_reg_103101.read().is_01() || !trunc_ln383_76_reg_103463.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_76_reg_103101.read()) + sc_biguint<8>(trunc_ln383_76_reg_103463.read()));
}

void poly1305_hw::thread_add_ln402_242_fu_38213_p2() {
    add_ln402_242_fu_38213_p2 = (!add_ln402_77_reg_103136.read().is_01() || !trunc_ln383_77_fu_38150_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_77_reg_103136.read()) + sc_biguint<8>(trunc_ln383_77_fu_38150_p1.read()));
}

void poly1305_hw::thread_add_ln402_243_fu_38284_p2() {
    add_ln402_243_fu_38284_p2 = (!add_ln402_78_reg_103156.read().is_01() || !trunc_ln383_78_reg_103503.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_78_reg_103156.read()) + sc_biguint<8>(trunc_ln383_78_reg_103503.read()));
}

void poly1305_hw::thread_add_ln402_244_fu_38366_p2() {
    add_ln402_244_fu_38366_p2 = (!add_ln402_79_reg_103171.read().is_01() || !trunc_ln383_79_reg_103533.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_79_reg_103171.read()) + sc_biguint<8>(trunc_ln383_79_reg_103533.read()));
}

void poly1305_hw::thread_add_ln402_245_fu_38442_p2() {
    add_ln402_245_fu_38442_p2 = (!mul_17_11_reg_103206.read().is_01() || !trunc_ln383_80_fu_38379_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_11_reg_103206.read()) + sc_biguint<8>(trunc_ln383_80_fu_38379_p1.read()));
}

void poly1305_hw::thread_add_ln402_247_fu_38513_p2() {
    add_ln402_247_fu_38513_p2 = (!mul_18_9_reg_103226.read().is_01() || !trunc_ln383_81_reg_103573.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_9_reg_103226.read()) + sc_biguint<8>(trunc_ln383_81_reg_103573.read()));
}

void poly1305_hw::thread_add_ln402_249_fu_38595_p2() {
    add_ln402_249_fu_38595_p2 = (!mul_19_7_reg_103241.read().is_01() || !trunc_ln383_82_reg_103603.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_7_reg_103241.read()) + sc_biguint<8>(trunc_ln383_82_reg_103603.read()));
}

void poly1305_hw::thread_add_ln402_24_fu_32950_p2() {
    add_ln402_24_fu_32950_p2 = (!select_ln402_23_reg_101883.read().is_01() || !add_ln402_115_fu_32946_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_23_reg_101883.read()) + sc_biguint<8>(add_ln402_115_fu_32946_p2.read()));
}

void poly1305_hw::thread_add_ln402_251_fu_38671_p2() {
    add_ln402_251_fu_38671_p2 = (!mul_20_5_reg_103266.read().is_01() || !trunc_ln383_83_fu_38608_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_5_reg_103266.read()) + sc_biguint<8>(trunc_ln383_83_fu_38608_p1.read()));
}

void poly1305_hw::thread_add_ln402_253_fu_38742_p2() {
    add_ln402_253_fu_38742_p2 = (!mul_21_3_reg_103286.read().is_01() || !trunc_ln383_84_reg_103643.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_3_reg_103286.read()) + sc_biguint<8>(trunc_ln383_84_reg_103643.read()));
}

void poly1305_hw::thread_add_ln402_255_fu_38819_p2() {
    add_ln402_255_fu_38819_p2 = (!mul_22_1_reg_9856.read().is_01() || !trunc_ln383_85_fu_38756_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_1_reg_9856.read()) + sc_biguint<8>(trunc_ln383_85_fu_38756_p1.read()));
}

void poly1305_hw::thread_add_ln402_257_fu_38894_p2() {
    add_ln402_257_fu_38894_p2 = (!add_ln402_86_reg_103337.read().is_01() || !trunc_ln383_86_reg_103688.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_86_reg_103337.read()) + sc_biguint<8>(trunc_ln383_86_reg_103688.read()));
}

void poly1305_hw::thread_add_ln402_258_fu_38976_p2() {
    add_ln402_258_fu_38976_p2 = (!add_ln402_87_reg_103352.read().is_01() || !trunc_ln382_16_reg_103714.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_87_reg_103352.read()) + sc_biguint<8>(trunc_ln382_16_reg_103714.read()));
}

void poly1305_hw::thread_add_ln402_259_fu_39052_p2() {
    add_ln402_259_fu_39052_p2 = (!add_ln402_88_reg_103387.read().is_01() || !trunc_ln382_17_fu_38989_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_88_reg_103387.read()) + sc_biguint<8>(trunc_ln382_17_fu_38989_p1.read()));
}

void poly1305_hw::thread_add_ln402_25_fu_33027_p2() {
    add_ln402_25_fu_33027_p2 = (!select_ln402_24_fu_32938_p3.read().is_01() || !add_ln402_116_fu_33022_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_24_fu_32938_p3.read()) + sc_biguint<8>(add_ln402_116_fu_33022_p2.read()));
}

void poly1305_hw::thread_add_ln402_260_fu_39123_p2() {
    add_ln402_260_fu_39123_p2 = (!add_ln402_89_reg_103407.read().is_01() || !trunc_ln382_18_reg_103754.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_89_reg_103407.read()) + sc_biguint<8>(trunc_ln382_18_reg_103754.read()));
}

void poly1305_hw::thread_add_ln402_261_fu_39205_p2() {
    add_ln402_261_fu_39205_p2 = (!add_ln402_90_reg_103422.read().is_01() || !trunc_ln382_19_reg_103784.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_90_reg_103422.read()) + sc_biguint<8>(trunc_ln382_19_reg_103784.read()));
}

void poly1305_hw::thread_add_ln402_262_fu_39281_p2() {
    add_ln402_262_fu_39281_p2 = (!add_ln402_91_reg_103457.read().is_01() || !trunc_ln382_20_fu_39218_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_91_reg_103457.read()) + sc_biguint<8>(trunc_ln382_20_fu_39218_p1.read()));
}

void poly1305_hw::thread_add_ln402_263_fu_39352_p2() {
    add_ln402_263_fu_39352_p2 = (!add_ln402_92_reg_103477.read().is_01() || !trunc_ln382_21_reg_103824.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_92_reg_103477.read()) + sc_biguint<8>(trunc_ln382_21_reg_103824.read()));
}

void poly1305_hw::thread_add_ln402_264_fu_39434_p2() {
    add_ln402_264_fu_39434_p2 = (!add_ln402_93_reg_103492.read().is_01() || !trunc_ln382_22_reg_103854.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_93_reg_103492.read()) + sc_biguint<8>(trunc_ln382_22_reg_103854.read()));
}

void poly1305_hw::thread_add_ln402_265_fu_39510_p2() {
    add_ln402_265_fu_39510_p2 = (!add_ln402_94_reg_103527.read().is_01() || !trunc_ln382_23_fu_39447_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_94_reg_103527.read()) + sc_biguint<8>(trunc_ln382_23_fu_39447_p1.read()));
}

void poly1305_hw::thread_add_ln402_266_fu_39581_p2() {
    add_ln402_266_fu_39581_p2 = (!add_ln402_95_reg_103547.read().is_01() || !trunc_ln382_24_reg_103894.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_95_reg_103547.read()) + sc_biguint<8>(trunc_ln382_24_reg_103894.read()));
}

void poly1305_hw::thread_add_ln402_267_fu_39663_p2() {
    add_ln402_267_fu_39663_p2 = (!mul_17_13_reg_103562.read().is_01() || !trunc_ln382_25_reg_103924.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_13_reg_103562.read()) + sc_biguint<8>(trunc_ln382_25_reg_103924.read()));
}

void poly1305_hw::thread_add_ln402_269_fu_39739_p2() {
    add_ln402_269_fu_39739_p2 = (!mul_18_11_reg_103597.read().is_01() || !trunc_ln382_26_fu_39676_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_11_reg_103597.read()) + sc_biguint<8>(trunc_ln382_26_fu_39676_p1.read()));
}

void poly1305_hw::thread_add_ln402_26_fu_33097_p2() {
    add_ln402_26_fu_33097_p2 = (!select_ln402_25_fu_33040_p3.read().is_01() || !add_ln402_117_fu_33093_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_25_fu_33040_p3.read()) + sc_biguint<8>(add_ln402_117_fu_33093_p2.read()));
}

void poly1305_hw::thread_add_ln402_271_fu_39810_p2() {
    add_ln402_271_fu_39810_p2 = (!mul_19_9_reg_103617.read().is_01() || !trunc_ln382_27_reg_103964.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_9_reg_103617.read()) + sc_biguint<8>(trunc_ln382_27_reg_103964.read()));
}

void poly1305_hw::thread_add_ln402_273_fu_39892_p2() {
    add_ln402_273_fu_39892_p2 = (!mul_20_7_reg_103632.read().is_01() || !trunc_ln382_28_reg_103994.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_7_reg_103632.read()) + sc_biguint<8>(trunc_ln382_28_reg_103994.read()));
}

void poly1305_hw::thread_add_ln402_275_fu_39968_p2() {
    add_ln402_275_fu_39968_p2 = (!mul_21_5_reg_103657.read().is_01() || !trunc_ln382_29_fu_39905_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_5_reg_103657.read()) + sc_biguint<8>(trunc_ln382_29_fu_39905_p1.read()));
}

void poly1305_hw::thread_add_ln402_277_fu_40039_p2() {
    add_ln402_277_fu_40039_p2 = (!mul_22_3_reg_103677.read().is_01() || !trunc_ln382_30_reg_104034.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_3_reg_103677.read()) + sc_biguint<8>(trunc_ln382_30_reg_104034.read()));
}

void poly1305_hw::thread_add_ln402_279_fu_40116_p2() {
    add_ln402_279_fu_40116_p2 = (!mul_23_1_reg_10033.read().is_01() || !trunc_ln382_31_fu_40053_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_1_reg_10033.read()) + sc_biguint<8>(trunc_ln382_31_fu_40053_p1.read()));
}

void poly1305_hw::thread_add_ln402_27_fu_33179_p2() {
    add_ln402_27_fu_33179_p2 = (!select_ln402_26_reg_101953.read().is_01() || !add_ln402_118_fu_33175_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_26_reg_101953.read()) + sc_biguint<8>(add_ln402_118_fu_33175_p2.read()));
}

void poly1305_hw::thread_add_ln402_281_fu_40195_p2() {
    add_ln402_281_fu_40195_p2 = (!add_ln402_103_reg_103728.read().is_01() || !trunc_ln383_87_reg_104079.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_103_reg_103728.read()) + sc_biguint<8>(trunc_ln383_87_reg_104079.read()));
}

void poly1305_hw::thread_add_ln402_282_fu_40277_p2() {
    add_ln402_282_fu_40277_p2 = (!add_ln402_104_reg_103743.read().is_01() || !trunc_ln383_88_reg_104110.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_104_reg_103743.read()) + sc_biguint<8>(trunc_ln383_88_reg_104110.read()));
}

void poly1305_hw::thread_add_ln402_283_fu_40353_p2() {
    add_ln402_283_fu_40353_p2 = (!add_ln402_105_reg_103778.read().is_01() || !trunc_ln383_89_fu_40290_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_105_reg_103778.read()) + sc_biguint<8>(trunc_ln383_89_fu_40290_p1.read()));
}

void poly1305_hw::thread_add_ln402_284_fu_40424_p2() {
    add_ln402_284_fu_40424_p2 = (!add_ln402_106_reg_103798.read().is_01() || !trunc_ln383_90_reg_104150.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_106_reg_103798.read()) + sc_biguint<8>(trunc_ln383_90_reg_104150.read()));
}

void poly1305_hw::thread_add_ln402_285_fu_40506_p2() {
    add_ln402_285_fu_40506_p2 = (!add_ln402_107_reg_103813.read().is_01() || !trunc_ln383_91_reg_104180.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_107_reg_103813.read()) + sc_biguint<8>(trunc_ln383_91_reg_104180.read()));
}

void poly1305_hw::thread_add_ln402_286_fu_40582_p2() {
    add_ln402_286_fu_40582_p2 = (!add_ln402_108_reg_103848.read().is_01() || !trunc_ln383_92_fu_40519_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_108_reg_103848.read()) + sc_biguint<8>(trunc_ln383_92_fu_40519_p1.read()));
}

void poly1305_hw::thread_add_ln402_287_fu_40653_p2() {
    add_ln402_287_fu_40653_p2 = (!add_ln402_109_reg_103868.read().is_01() || !trunc_ln383_93_reg_104220.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_109_reg_103868.read()) + sc_biguint<8>(trunc_ln383_93_reg_104220.read()));
}

void poly1305_hw::thread_add_ln402_288_fu_40735_p2() {
    add_ln402_288_fu_40735_p2 = (!add_ln402_110_reg_103883.read().is_01() || !trunc_ln383_94_reg_104250.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_110_reg_103883.read()) + sc_biguint<8>(trunc_ln383_94_reg_104250.read()));
}

void poly1305_hw::thread_add_ln402_289_fu_40811_p2() {
    add_ln402_289_fu_40811_p2 = (!add_ln402_111_reg_103918.read().is_01() || !trunc_ln383_95_fu_40748_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_111_reg_103918.read()) + sc_biguint<8>(trunc_ln383_95_fu_40748_p1.read()));
}

void poly1305_hw::thread_add_ln402_28_fu_33256_p2() {
    add_ln402_28_fu_33256_p2 = (!select_ln402_27_fu_33167_p3.read().is_01() || !add_ln402_128_fu_33251_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_27_fu_33167_p3.read()) + sc_biguint<8>(add_ln402_128_fu_33251_p2.read()));
}

void poly1305_hw::thread_add_ln402_290_fu_40882_p2() {
    add_ln402_290_fu_40882_p2 = (!mul_17_15_reg_103938.read().is_01() || !trunc_ln383_96_reg_104290.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_15_reg_103938.read()) + sc_biguint<8>(trunc_ln383_96_reg_104290.read()));
}

void poly1305_hw::thread_add_ln402_292_fu_40964_p2() {
    add_ln402_292_fu_40964_p2 = (!mul_18_13_reg_103953.read().is_01() || !trunc_ln383_97_reg_104320.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_13_reg_103953.read()) + sc_biguint<8>(trunc_ln383_97_reg_104320.read()));
}

void poly1305_hw::thread_add_ln402_294_fu_41040_p2() {
    add_ln402_294_fu_41040_p2 = (!mul_19_11_reg_103988.read().is_01() || !trunc_ln383_98_fu_40977_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_11_reg_103988.read()) + sc_biguint<8>(trunc_ln383_98_fu_40977_p1.read()));
}

void poly1305_hw::thread_add_ln402_296_fu_41111_p2() {
    add_ln402_296_fu_41111_p2 = (!mul_20_9_reg_104008.read().is_01() || !trunc_ln383_99_reg_104360.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_9_reg_104008.read()) + sc_biguint<8>(trunc_ln383_99_reg_104360.read()));
}

void poly1305_hw::thread_add_ln402_298_fu_41193_p2() {
    add_ln402_298_fu_41193_p2 = (!mul_21_7_reg_104023.read().is_01() || !trunc_ln383_100_reg_104390.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_7_reg_104023.read()) + sc_biguint<8>(trunc_ln383_100_reg_104390.read()));
}

void poly1305_hw::thread_add_ln402_29_fu_33326_p2() {
    add_ln402_29_fu_33326_p2 = (!select_ln402_28_fu_33269_p3.read().is_01() || !add_ln402_129_fu_33322_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_28_fu_33269_p3.read()) + sc_biguint<8>(add_ln402_129_fu_33322_p2.read()));
}

void poly1305_hw::thread_add_ln402_2_fu_31272_p2() {
    add_ln402_2_fu_31272_p2 = (!select_ln402_1_fu_31183_p3.read().is_01() || !add_ln402_32_fu_31267_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_1_fu_31183_p3.read()) + sc_biguint<8>(add_ln402_32_fu_31267_p2.read()));
}

void poly1305_hw::thread_add_ln402_300_fu_41269_p2() {
    add_ln402_300_fu_41269_p2 = (!mul_22_5_reg_104048.read().is_01() || !trunc_ln383_101_fu_41206_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_5_reg_104048.read()) + sc_biguint<8>(trunc_ln383_101_fu_41206_p1.read()));
}

void poly1305_hw::thread_add_ln402_302_fu_41340_p2() {
    add_ln402_302_fu_41340_p2 = (!mul_23_3_reg_104068.read().is_01() || !trunc_ln383_102_reg_104430.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_3_reg_104068.read()) + sc_biguint<8>(trunc_ln383_102_reg_104430.read()));
}

void poly1305_hw::thread_add_ln402_304_fu_41417_p2() {
    add_ln402_304_fu_41417_p2 = (!zext_ln391_1_reg_104089.read().is_01() || !trunc_ln383_103_fu_41354_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln391_1_reg_104089.read()) + sc_biguint<8>(trunc_ln383_103_fu_41354_p1.read()));
}

void poly1305_hw::thread_add_ln402_306_fu_41491_p2() {
    add_ln402_306_fu_41491_p2 = (!add_ln402_120_reg_104124.read().is_01() || !trunc_ln383_104_reg_104475.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_120_reg_104124.read()) + sc_biguint<8>(trunc_ln383_104_reg_104475.read()));
}

void poly1305_hw::thread_add_ln402_307_fu_41573_p2() {
    add_ln402_307_fu_41573_p2 = (!add_ln402_121_reg_104139.read().is_01() || !trunc_ln383_105_reg_104501.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_121_reg_104139.read()) + sc_biguint<8>(trunc_ln383_105_reg_104501.read()));
}

void poly1305_hw::thread_add_ln402_308_fu_41649_p2() {
    add_ln402_308_fu_41649_p2 = (!add_ln402_122_reg_104174.read().is_01() || !trunc_ln383_106_fu_41586_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_122_reg_104174.read()) + sc_biguint<8>(trunc_ln383_106_fu_41586_p1.read()));
}

void poly1305_hw::thread_add_ln402_309_fu_41720_p2() {
    add_ln402_309_fu_41720_p2 = (!add_ln402_123_reg_104194.read().is_01() || !trunc_ln383_107_reg_104541.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_123_reg_104194.read()) + sc_biguint<8>(trunc_ln383_107_reg_104541.read()));
}

void poly1305_hw::thread_add_ln402_30_fu_33408_p2() {
    add_ln402_30_fu_33408_p2 = (!select_ln402_29_reg_102023.read().is_01() || !add_ln402_130_fu_33404_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_29_reg_102023.read()) + sc_biguint<8>(add_ln402_130_fu_33404_p2.read()));
}

void poly1305_hw::thread_add_ln402_310_fu_41802_p2() {
    add_ln402_310_fu_41802_p2 = (!add_ln402_124_reg_104209.read().is_01() || !trunc_ln383_108_reg_104571.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_124_reg_104209.read()) + sc_biguint<8>(trunc_ln383_108_reg_104571.read()));
}

void poly1305_hw::thread_add_ln402_311_fu_41878_p2() {
    add_ln402_311_fu_41878_p2 = (!add_ln402_125_reg_104244.read().is_01() || !trunc_ln383_109_fu_41815_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_125_reg_104244.read()) + sc_biguint<8>(trunc_ln383_109_fu_41815_p1.read()));
}

void poly1305_hw::thread_add_ln402_312_fu_41949_p2() {
    add_ln402_312_fu_41949_p2 = (!add_ln402_126_reg_104264.read().is_01() || !trunc_ln383_110_reg_104611.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_126_reg_104264.read()) + sc_biguint<8>(trunc_ln383_110_reg_104611.read()));
}

void poly1305_hw::thread_add_ln402_313_fu_42031_p2() {
    add_ln402_313_fu_42031_p2 = (!add_ln402_127_reg_104279.read().is_01() || !trunc_ln383_111_reg_104641.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_127_reg_104279.read()) + sc_biguint<8>(trunc_ln383_111_reg_104641.read()));
}

void poly1305_hw::thread_add_ln402_314_fu_42107_p2() {
    add_ln402_314_fu_42107_p2 = (!mul_17_17_reg_104314.read().is_01() || !trunc_ln383_112_fu_42044_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_17_reg_104314.read()) + sc_biguint<8>(trunc_ln383_112_fu_42044_p1.read()));
}

void poly1305_hw::thread_add_ln402_316_fu_42178_p2() {
    add_ln402_316_fu_42178_p2 = (!mul_18_15_reg_104334.read().is_01() || !trunc_ln383_113_reg_104681.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_15_reg_104334.read()) + sc_biguint<8>(trunc_ln383_113_reg_104681.read()));
}

void poly1305_hw::thread_add_ln402_318_fu_42260_p2() {
    add_ln402_318_fu_42260_p2 = (!mul_19_13_reg_104349.read().is_01() || !trunc_ln383_114_reg_104711.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_13_reg_104349.read()) + sc_biguint<8>(trunc_ln383_114_reg_104711.read()));
}

void poly1305_hw::thread_add_ln402_31_fu_33485_p2() {
    add_ln402_31_fu_33485_p2 = (!select_ln402_30_fu_33396_p3.read().is_01() || !add_ln402_131_fu_33480_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_30_fu_33396_p3.read()) + sc_biguint<8>(add_ln402_131_fu_33480_p2.read()));
}

void poly1305_hw::thread_add_ln402_320_fu_42336_p2() {
    add_ln402_320_fu_42336_p2 = (!mul_20_11_reg_104384.read().is_01() || !trunc_ln383_115_fu_42273_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_11_reg_104384.read()) + sc_biguint<8>(trunc_ln383_115_fu_42273_p1.read()));
}

void poly1305_hw::thread_add_ln402_322_fu_42407_p2() {
    add_ln402_322_fu_42407_p2 = (!mul_21_9_reg_104404.read().is_01() || !trunc_ln383_116_reg_104751.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_9_reg_104404.read()) + sc_biguint<8>(trunc_ln383_116_reg_104751.read()));
}

void poly1305_hw::thread_add_ln402_324_fu_42489_p2() {
    add_ln402_324_fu_42489_p2 = (!mul_22_7_reg_104419.read().is_01() || !trunc_ln383_117_reg_104781.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_7_reg_104419.read()) + sc_biguint<8>(trunc_ln383_117_reg_104781.read()));
}

void poly1305_hw::thread_add_ln402_326_fu_42565_p2() {
    add_ln402_326_fu_42565_p2 = (!mul_23_5_reg_104444.read().is_01() || !trunc_ln383_118_fu_42502_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_5_reg_104444.read()) + sc_biguint<8>(trunc_ln383_118_fu_42502_p1.read()));
}

void poly1305_hw::thread_add_ln402_328_fu_42636_p2() {
    add_ln402_328_fu_42636_p2 = (!mul_24_3_reg_104464.read().is_01() || !trunc_ln383_119_reg_104821.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_3_reg_104464.read()) + sc_biguint<8>(trunc_ln383_119_reg_104821.read()));
}

void poly1305_hw::thread_add_ln402_32_fu_31267_p2() {
    add_ln402_32_fu_31267_p2 = (!trunc_ln395_3_reg_100821.read().is_01() || !trunc_ln383_2_fu_31204_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_3_reg_100821.read()) + sc_biguint<8>(trunc_ln383_2_fu_31204_p1.read()));
}

void poly1305_hw::thread_add_ln402_330_fu_42713_p2() {
    add_ln402_330_fu_42713_p2 = (!mul_25_1_reg_10387.read().is_01() || !trunc_ln383_120_fu_42650_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_1_reg_10387.read()) + sc_biguint<8>(trunc_ln383_120_fu_42650_p1.read()));
}

void poly1305_hw::thread_add_ln402_332_fu_42788_p2() {
    add_ln402_332_fu_42788_p2 = (!add_ln402_137_reg_104515.read().is_01() || !trunc_ln383_121_reg_104866.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_137_reg_104515.read()) + sc_biguint<8>(trunc_ln383_121_reg_104866.read()));
}

void poly1305_hw::thread_add_ln402_333_fu_42870_p2() {
    add_ln402_333_fu_42870_p2 = (!add_ln402_138_reg_104530.read().is_01() || !trunc_ln383_122_reg_104892.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_138_reg_104530.read()) + sc_biguint<8>(trunc_ln383_122_reg_104892.read()));
}

void poly1305_hw::thread_add_ln402_334_fu_42946_p2() {
    add_ln402_334_fu_42946_p2 = (!add_ln402_139_reg_104565.read().is_01() || !trunc_ln383_123_fu_42883_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_139_reg_104565.read()) + sc_biguint<8>(trunc_ln383_123_fu_42883_p1.read()));
}

void poly1305_hw::thread_add_ln402_335_fu_43017_p2() {
    add_ln402_335_fu_43017_p2 = (!add_ln402_140_reg_104585.read().is_01() || !trunc_ln383_124_reg_104932.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_140_reg_104585.read()) + sc_biguint<8>(trunc_ln383_124_reg_104932.read()));
}

void poly1305_hw::thread_add_ln402_336_fu_43099_p2() {
    add_ln402_336_fu_43099_p2 = (!add_ln402_141_reg_104600.read().is_01() || !trunc_ln383_125_reg_104962.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_141_reg_104600.read()) + sc_biguint<8>(trunc_ln383_125_reg_104962.read()));
}

void poly1305_hw::thread_add_ln402_337_fu_43175_p2() {
    add_ln402_337_fu_43175_p2 = (!add_ln402_142_reg_104635.read().is_01() || !trunc_ln383_126_fu_43112_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_142_reg_104635.read()) + sc_biguint<8>(trunc_ln383_126_fu_43112_p1.read()));
}

void poly1305_hw::thread_add_ln402_338_fu_43246_p2() {
    add_ln402_338_fu_43246_p2 = (!add_ln402_143_reg_104655.read().is_01() || !trunc_ln383_127_reg_105002.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_143_reg_104655.read()) + sc_biguint<8>(trunc_ln383_127_reg_105002.read()));
}

void poly1305_hw::thread_add_ln402_339_fu_43328_p2() {
    add_ln402_339_fu_43328_p2 = (!mul_17_19_reg_104670.read().is_01() || !trunc_ln383_128_reg_105032.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_19_reg_104670.read()) + sc_biguint<8>(trunc_ln383_128_reg_105032.read()));
}

void poly1305_hw::thread_add_ln402_33_fu_31338_p2() {
    add_ln402_33_fu_31338_p2 = (!trunc_ln395_4_reg_100863.read().is_01() || !trunc_ln383_3_reg_101403.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_4_reg_100863.read()) + sc_biguint<8>(trunc_ln383_3_reg_101403.read()));
}

void poly1305_hw::thread_add_ln402_341_fu_43404_p2() {
    add_ln402_341_fu_43404_p2 = (!mul_18_17_reg_104705.read().is_01() || !trunc_ln383_129_fu_43341_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_17_reg_104705.read()) + sc_biguint<8>(trunc_ln383_129_fu_43341_p1.read()));
}

void poly1305_hw::thread_add_ln402_343_fu_43475_p2() {
    add_ln402_343_fu_43475_p2 = (!mul_19_15_reg_104725.read().is_01() || !trunc_ln383_130_reg_105072.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_15_reg_104725.read()) + sc_biguint<8>(trunc_ln383_130_reg_105072.read()));
}

void poly1305_hw::thread_add_ln402_345_fu_43557_p2() {
    add_ln402_345_fu_43557_p2 = (!mul_20_13_reg_104740.read().is_01() || !trunc_ln383_131_reg_105102.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_13_reg_104740.read()) + sc_biguint<8>(trunc_ln383_131_reg_105102.read()));
}

void poly1305_hw::thread_add_ln402_347_fu_43633_p2() {
    add_ln402_347_fu_43633_p2 = (!mul_21_11_reg_104775.read().is_01() || !trunc_ln383_132_fu_43570_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_11_reg_104775.read()) + sc_biguint<8>(trunc_ln383_132_fu_43570_p1.read()));
}

void poly1305_hw::thread_add_ln402_349_fu_43704_p2() {
    add_ln402_349_fu_43704_p2 = (!mul_22_9_reg_104795.read().is_01() || !trunc_ln383_133_reg_105142.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_9_reg_104795.read()) + sc_biguint<8>(trunc_ln383_133_reg_105142.read()));
}

void poly1305_hw::thread_add_ln402_34_fu_33707_p2() {
    add_ln402_34_fu_33707_p2 = (!select_ln402_33_fu_33655_p3.read().is_01() || !add_ln402_144_fu_33703_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_33_fu_33655_p3.read()) + sc_biguint<8>(add_ln402_144_fu_33703_p2.read()));
}

void poly1305_hw::thread_add_ln402_351_fu_43786_p2() {
    add_ln402_351_fu_43786_p2 = (!mul_23_7_reg_104810.read().is_01() || !trunc_ln383_134_reg_105172.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_7_reg_104810.read()) + sc_biguint<8>(trunc_ln383_134_reg_105172.read()));
}

void poly1305_hw::thread_add_ln402_353_fu_43862_p2() {
    add_ln402_353_fu_43862_p2 = (!mul_24_5_reg_104835.read().is_01() || !trunc_ln383_135_fu_43799_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_5_reg_104835.read()) + sc_biguint<8>(trunc_ln383_135_fu_43799_p1.read()));
}

void poly1305_hw::thread_add_ln402_355_fu_43933_p2() {
    add_ln402_355_fu_43933_p2 = (!mul_25_3_reg_104855.read().is_01() || !trunc_ln383_136_reg_105212.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_3_reg_104855.read()) + sc_biguint<8>(trunc_ln383_136_reg_105212.read()));
}

void poly1305_hw::thread_add_ln402_357_fu_44010_p2() {
    add_ln402_357_fu_44010_p2 = (!mul_26_1_reg_10564.read().is_01() || !trunc_ln383_137_fu_43947_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_1_reg_10564.read()) + sc_biguint<8>(trunc_ln383_137_fu_43947_p1.read()));
}

void poly1305_hw::thread_add_ln402_359_fu_44085_p2() {
    add_ln402_359_fu_44085_p2 = (!add_ln402_154_reg_104906.read().is_01() || !trunc_ln383_138_reg_105257.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_154_reg_104906.read()) + sc_biguint<8>(trunc_ln383_138_reg_105257.read()));
}

void poly1305_hw::thread_add_ln402_35_fu_33789_p2() {
    add_ln402_35_fu_33789_p2 = (!select_ln402_34_reg_102134.read().is_01() || !add_ln402_145_fu_33785_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_34_reg_102134.read()) + sc_biguint<8>(add_ln402_145_fu_33785_p2.read()));
}

void poly1305_hw::thread_add_ln402_360_fu_44167_p2() {
    add_ln402_360_fu_44167_p2 = (!add_ln402_155_reg_104921.read().is_01() || !trunc_ln382_32_reg_105283.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_155_reg_104921.read()) + sc_biguint<8>(trunc_ln382_32_reg_105283.read()));
}

void poly1305_hw::thread_add_ln402_361_fu_44243_p2() {
    add_ln402_361_fu_44243_p2 = (!add_ln402_156_reg_104956.read().is_01() || !trunc_ln382_33_fu_44180_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_156_reg_104956.read()) + sc_biguint<8>(trunc_ln382_33_fu_44180_p1.read()));
}

void poly1305_hw::thread_add_ln402_362_fu_44314_p2() {
    add_ln402_362_fu_44314_p2 = (!add_ln402_157_reg_104976.read().is_01() || !trunc_ln382_34_reg_105323.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_157_reg_104976.read()) + sc_biguint<8>(trunc_ln382_34_reg_105323.read()));
}

void poly1305_hw::thread_add_ln402_363_fu_44396_p2() {
    add_ln402_363_fu_44396_p2 = (!add_ln402_158_reg_104991.read().is_01() || !trunc_ln382_35_reg_105353.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_158_reg_104991.read()) + sc_biguint<8>(trunc_ln382_35_reg_105353.read()));
}

void poly1305_hw::thread_add_ln402_364_fu_44472_p2() {
    add_ln402_364_fu_44472_p2 = (!add_ln402_159_reg_105026.read().is_01() || !trunc_ln382_36_fu_44409_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_159_reg_105026.read()) + sc_biguint<8>(trunc_ln382_36_fu_44409_p1.read()));
}

void poly1305_hw::thread_add_ln402_365_fu_44543_p2() {
    add_ln402_365_fu_44543_p2 = (!mul_17_21_reg_105046.read().is_01() || !trunc_ln382_37_reg_105393.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_21_reg_105046.read()) + sc_biguint<8>(trunc_ln382_37_reg_105393.read()));
}

void poly1305_hw::thread_add_ln402_367_fu_44625_p2() {
    add_ln402_367_fu_44625_p2 = (!mul_18_19_reg_105061.read().is_01() || !trunc_ln382_38_reg_105423.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_19_reg_105061.read()) + sc_biguint<8>(trunc_ln382_38_reg_105423.read()));
}

void poly1305_hw::thread_add_ln402_369_fu_44701_p2() {
    add_ln402_369_fu_44701_p2 = (!mul_19_17_reg_105096.read().is_01() || !trunc_ln382_39_fu_44638_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_17_reg_105096.read()) + sc_biguint<8>(trunc_ln382_39_fu_44638_p1.read()));
}

void poly1305_hw::thread_add_ln402_36_fu_33866_p2() {
    add_ln402_36_fu_33866_p2 = (!select_ln402_35_fu_33777_p3.read().is_01() || !add_ln402_146_fu_33861_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_35_fu_33777_p3.read()) + sc_biguint<8>(add_ln402_146_fu_33861_p2.read()));
}

void poly1305_hw::thread_add_ln402_371_fu_44772_p2() {
    add_ln402_371_fu_44772_p2 = (!mul_20_15_reg_105116.read().is_01() || !trunc_ln382_40_reg_105463.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_15_reg_105116.read()) + sc_biguint<8>(trunc_ln382_40_reg_105463.read()));
}

void poly1305_hw::thread_add_ln402_373_fu_44854_p2() {
    add_ln402_373_fu_44854_p2 = (!mul_21_13_reg_105131.read().is_01() || !trunc_ln382_41_reg_105493.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_13_reg_105131.read()) + sc_biguint<8>(trunc_ln382_41_reg_105493.read()));
}

void poly1305_hw::thread_add_ln402_375_fu_44930_p2() {
    add_ln402_375_fu_44930_p2 = (!mul_22_11_reg_105166.read().is_01() || !trunc_ln382_42_fu_44867_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_11_reg_105166.read()) + sc_biguint<8>(trunc_ln382_42_fu_44867_p1.read()));
}

void poly1305_hw::thread_add_ln402_377_fu_45001_p2() {
    add_ln402_377_fu_45001_p2 = (!mul_23_9_reg_105186.read().is_01() || !trunc_ln382_43_reg_105533.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_9_reg_105186.read()) + sc_biguint<8>(trunc_ln382_43_reg_105533.read()));
}

void poly1305_hw::thread_add_ln402_379_fu_45083_p2() {
    add_ln402_379_fu_45083_p2 = (!mul_24_7_reg_105201.read().is_01() || !trunc_ln382_44_reg_105563.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_7_reg_105201.read()) + sc_biguint<8>(trunc_ln382_44_reg_105563.read()));
}

void poly1305_hw::thread_add_ln402_37_fu_33936_p2() {
    add_ln402_37_fu_33936_p2 = (!select_ln402_36_fu_33879_p3.read().is_01() || !add_ln402_147_fu_33932_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_36_fu_33879_p3.read()) + sc_biguint<8>(add_ln402_147_fu_33932_p2.read()));
}

void poly1305_hw::thread_add_ln402_381_fu_45159_p2() {
    add_ln402_381_fu_45159_p2 = (!mul_25_5_reg_105226.read().is_01() || !trunc_ln382_45_fu_45096_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_5_reg_105226.read()) + sc_biguint<8>(trunc_ln382_45_fu_45096_p1.read()));
}

void poly1305_hw::thread_add_ln402_383_fu_45230_p2() {
    add_ln402_383_fu_45230_p2 = (!mul_26_3_reg_105246.read().is_01() || !trunc_ln382_46_reg_105603.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_3_reg_105246.read()) + sc_biguint<8>(trunc_ln382_46_reg_105603.read()));
}

void poly1305_hw::thread_add_ln402_385_fu_45307_p2() {
    add_ln402_385_fu_45307_p2 = (!mul_27_1_reg_10741.read().is_01() || !trunc_ln382_47_fu_45244_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_1_reg_10741.read()) + sc_biguint<8>(trunc_ln382_47_fu_45244_p1.read()));
}

void poly1305_hw::thread_add_ln402_387_fu_45386_p2() {
    add_ln402_387_fu_45386_p2 = (!add_ln402_171_reg_105297.read().is_01() || !trunc_ln383_139_reg_105648.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_171_reg_105297.read()) + sc_biguint<8>(trunc_ln383_139_reg_105648.read()));
}

void poly1305_hw::thread_add_ln402_388_fu_45468_p2() {
    add_ln402_388_fu_45468_p2 = (!add_ln402_172_reg_105312.read().is_01() || !trunc_ln383_140_reg_105679.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_172_reg_105312.read()) + sc_biguint<8>(trunc_ln383_140_reg_105679.read()));
}

void poly1305_hw::thread_add_ln402_389_fu_45544_p2() {
    add_ln402_389_fu_45544_p2 = (!add_ln402_173_reg_105347.read().is_01() || !trunc_ln383_141_fu_45481_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_173_reg_105347.read()) + sc_biguint<8>(trunc_ln383_141_fu_45481_p1.read()));
}

void poly1305_hw::thread_add_ln402_38_fu_34018_p2() {
    add_ln402_38_fu_34018_p2 = (!select_ln402_37_reg_102204.read().is_01() || !add_ln402_148_fu_34014_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_37_reg_102204.read()) + sc_biguint<8>(add_ln402_148_fu_34014_p2.read()));
}

void poly1305_hw::thread_add_ln402_390_fu_45615_p2() {
    add_ln402_390_fu_45615_p2 = (!add_ln402_174_reg_105367.read().is_01() || !trunc_ln383_142_reg_105719.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_174_reg_105367.read()) + sc_biguint<8>(trunc_ln383_142_reg_105719.read()));
}

void poly1305_hw::thread_add_ln402_391_fu_45697_p2() {
    add_ln402_391_fu_45697_p2 = (!add_ln402_175_reg_105382.read().is_01() || !trunc_ln383_143_reg_105749.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_175_reg_105382.read()) + sc_biguint<8>(trunc_ln383_143_reg_105749.read()));
}

void poly1305_hw::thread_add_ln402_392_fu_45773_p2() {
    add_ln402_392_fu_45773_p2 = (!mul_17_23_reg_105417.read().is_01() || !trunc_ln383_144_fu_45710_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_23_reg_105417.read()) + sc_biguint<8>(trunc_ln383_144_fu_45710_p1.read()));
}

void poly1305_hw::thread_add_ln402_394_fu_45844_p2() {
    add_ln402_394_fu_45844_p2 = (!mul_18_21_reg_105437.read().is_01() || !trunc_ln383_145_reg_105789.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_21_reg_105437.read()) + sc_biguint<8>(trunc_ln383_145_reg_105789.read()));
}

void poly1305_hw::thread_add_ln402_396_fu_45926_p2() {
    add_ln402_396_fu_45926_p2 = (!mul_19_19_reg_105452.read().is_01() || !trunc_ln383_146_reg_105819.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_19_reg_105452.read()) + sc_biguint<8>(trunc_ln383_146_reg_105819.read()));
}

void poly1305_hw::thread_add_ln402_398_fu_46002_p2() {
    add_ln402_398_fu_46002_p2 = (!mul_20_17_reg_105487.read().is_01() || !trunc_ln383_147_fu_45939_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_17_reg_105487.read()) + sc_biguint<8>(trunc_ln383_147_fu_45939_p1.read()));
}

void poly1305_hw::thread_add_ln402_39_fu_34095_p2() {
    add_ln402_39_fu_34095_p2 = (!select_ln402_38_fu_34006_p3.read().is_01() || !add_ln402_149_fu_34090_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_38_fu_34006_p3.read()) + sc_biguint<8>(add_ln402_149_fu_34090_p2.read()));
}

void poly1305_hw::thread_add_ln402_3_fu_31342_p2() {
    add_ln402_3_fu_31342_p2 = (!select_ln402_2_fu_31285_p3.read().is_01() || !add_ln402_33_fu_31338_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_2_fu_31285_p3.read()) + sc_biguint<8>(add_ln402_33_fu_31338_p2.read()));
}

void poly1305_hw::thread_add_ln402_400_fu_46073_p2() {
    add_ln402_400_fu_46073_p2 = (!mul_21_15_reg_105507.read().is_01() || !trunc_ln383_148_reg_105859.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_15_reg_105507.read()) + sc_biguint<8>(trunc_ln383_148_reg_105859.read()));
}

void poly1305_hw::thread_add_ln402_402_fu_46155_p2() {
    add_ln402_402_fu_46155_p2 = (!mul_22_13_reg_105522.read().is_01() || !trunc_ln383_149_reg_105889.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_13_reg_105522.read()) + sc_biguint<8>(trunc_ln383_149_reg_105889.read()));
}

void poly1305_hw::thread_add_ln402_404_fu_46231_p2() {
    add_ln402_404_fu_46231_p2 = (!mul_23_11_reg_105557.read().is_01() || !trunc_ln383_150_fu_46168_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_11_reg_105557.read()) + sc_biguint<8>(trunc_ln383_150_fu_46168_p1.read()));
}

void poly1305_hw::thread_add_ln402_406_fu_46302_p2() {
    add_ln402_406_fu_46302_p2 = (!mul_24_9_reg_105577.read().is_01() || !trunc_ln383_151_reg_105929.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_9_reg_105577.read()) + sc_biguint<8>(trunc_ln383_151_reg_105929.read()));
}

void poly1305_hw::thread_add_ln402_408_fu_46384_p2() {
    add_ln402_408_fu_46384_p2 = (!mul_25_7_reg_105592.read().is_01() || !trunc_ln383_152_reg_105959.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_7_reg_105592.read()) + sc_biguint<8>(trunc_ln383_152_reg_105959.read()));
}

void poly1305_hw::thread_add_ln402_40_fu_34165_p2() {
    add_ln402_40_fu_34165_p2 = (!select_ln402_39_fu_34108_p3.read().is_01() || !add_ln402_150_fu_34161_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_39_fu_34108_p3.read()) + sc_biguint<8>(add_ln402_150_fu_34161_p2.read()));
}

void poly1305_hw::thread_add_ln402_410_fu_46460_p2() {
    add_ln402_410_fu_46460_p2 = (!mul_26_5_reg_105617.read().is_01() || !trunc_ln383_153_fu_46397_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_5_reg_105617.read()) + sc_biguint<8>(trunc_ln383_153_fu_46397_p1.read()));
}

void poly1305_hw::thread_add_ln402_412_fu_46531_p2() {
    add_ln402_412_fu_46531_p2 = (!mul_27_3_reg_105637.read().is_01() || !trunc_ln383_154_reg_105999.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_3_reg_105637.read()) + sc_biguint<8>(trunc_ln383_154_reg_105999.read()));
}

void poly1305_hw::thread_add_ln402_414_fu_46608_p2() {
    add_ln402_414_fu_46608_p2 = (!zext_ln391_2_reg_105658.read().is_01() || !trunc_ln383_155_fu_46545_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln391_2_reg_105658.read()) + sc_biguint<8>(trunc_ln383_155_fu_46545_p1.read()));
}

void poly1305_hw::thread_add_ln402_416_fu_46682_p2() {
    add_ln402_416_fu_46682_p2 = (!add_ln402_188_reg_105693.read().is_01() || !trunc_ln383_156_reg_106044.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_188_reg_105693.read()) + sc_biguint<8>(trunc_ln383_156_reg_106044.read()));
}

void poly1305_hw::thread_add_ln402_417_fu_46764_p2() {
    add_ln402_417_fu_46764_p2 = (!add_ln402_189_reg_105708.read().is_01() || !trunc_ln383_157_reg_106070.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_189_reg_105708.read()) + sc_biguint<8>(trunc_ln383_157_reg_106070.read()));
}

void poly1305_hw::thread_add_ln402_418_fu_46840_p2() {
    add_ln402_418_fu_46840_p2 = (!add_ln402_190_reg_105743.read().is_01() || !trunc_ln383_158_fu_46777_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_190_reg_105743.read()) + sc_biguint<8>(trunc_ln383_158_fu_46777_p1.read()));
}

void poly1305_hw::thread_add_ln402_419_fu_46911_p2() {
    add_ln402_419_fu_46911_p2 = (!add_ln402_191_reg_105763.read().is_01() || !trunc_ln383_159_reg_106110.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_191_reg_105763.read()) + sc_biguint<8>(trunc_ln383_159_reg_106110.read()));
}

void poly1305_hw::thread_add_ln402_41_fu_34247_p2() {
    add_ln402_41_fu_34247_p2 = (!select_ln402_40_reg_102274.read().is_01() || !add_ln402_151_fu_34243_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_40_reg_102274.read()) + sc_biguint<8>(add_ln402_151_fu_34243_p2.read()));
}

void poly1305_hw::thread_add_ln402_420_fu_46993_p2() {
    add_ln402_420_fu_46993_p2 = (!mul_17_25_reg_105778.read().is_01() || !trunc_ln383_160_reg_106140.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_25_reg_105778.read()) + sc_biguint<8>(trunc_ln383_160_reg_106140.read()));
}

void poly1305_hw::thread_add_ln402_422_fu_47069_p2() {
    add_ln402_422_fu_47069_p2 = (!mul_18_23_reg_105813.read().is_01() || !trunc_ln383_161_fu_47006_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_23_reg_105813.read()) + sc_biguint<8>(trunc_ln383_161_fu_47006_p1.read()));
}

void poly1305_hw::thread_add_ln402_424_fu_47140_p2() {
    add_ln402_424_fu_47140_p2 = (!mul_19_21_reg_105833.read().is_01() || !trunc_ln383_162_reg_106180.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_21_reg_105833.read()) + sc_biguint<8>(trunc_ln383_162_reg_106180.read()));
}

void poly1305_hw::thread_add_ln402_426_fu_47222_p2() {
    add_ln402_426_fu_47222_p2 = (!mul_20_19_reg_105848.read().is_01() || !trunc_ln383_163_reg_106210.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_19_reg_105848.read()) + sc_biguint<8>(trunc_ln383_163_reg_106210.read()));
}

void poly1305_hw::thread_add_ln402_428_fu_47298_p2() {
    add_ln402_428_fu_47298_p2 = (!mul_21_17_reg_105883.read().is_01() || !trunc_ln383_164_fu_47235_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_17_reg_105883.read()) + sc_biguint<8>(trunc_ln383_164_fu_47235_p1.read()));
}

void poly1305_hw::thread_add_ln402_42_fu_34324_p2() {
    add_ln402_42_fu_34324_p2 = (!select_ln402_41_fu_34235_p3.read().is_01() || !add_ln402_152_fu_34319_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_41_fu_34235_p3.read()) + sc_biguint<8>(add_ln402_152_fu_34319_p2.read()));
}

void poly1305_hw::thread_add_ln402_430_fu_47369_p2() {
    add_ln402_430_fu_47369_p2 = (!mul_22_15_reg_105903.read().is_01() || !trunc_ln383_165_reg_106250.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_15_reg_105903.read()) + sc_biguint<8>(trunc_ln383_165_reg_106250.read()));
}

void poly1305_hw::thread_add_ln402_432_fu_47451_p2() {
    add_ln402_432_fu_47451_p2 = (!mul_23_13_reg_105918.read().is_01() || !trunc_ln383_166_reg_106280.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_13_reg_105918.read()) + sc_biguint<8>(trunc_ln383_166_reg_106280.read()));
}

void poly1305_hw::thread_add_ln402_434_fu_47527_p2() {
    add_ln402_434_fu_47527_p2 = (!mul_24_11_reg_105953.read().is_01() || !trunc_ln383_167_fu_47464_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_11_reg_105953.read()) + sc_biguint<8>(trunc_ln383_167_fu_47464_p1.read()));
}

void poly1305_hw::thread_add_ln402_436_fu_47598_p2() {
    add_ln402_436_fu_47598_p2 = (!mul_25_9_reg_105973.read().is_01() || !trunc_ln383_168_reg_106320.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_9_reg_105973.read()) + sc_biguint<8>(trunc_ln383_168_reg_106320.read()));
}

void poly1305_hw::thread_add_ln402_438_fu_47680_p2() {
    add_ln402_438_fu_47680_p2 = (!mul_26_7_reg_105988.read().is_01() || !trunc_ln383_169_reg_106350.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_7_reg_105988.read()) + sc_biguint<8>(trunc_ln383_169_reg_106350.read()));
}

void poly1305_hw::thread_add_ln402_43_fu_34394_p2() {
    add_ln402_43_fu_34394_p2 = (!select_ln402_42_fu_34337_p3.read().is_01() || !add_ln402_160_fu_34390_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_42_fu_34337_p3.read()) + sc_biguint<8>(add_ln402_160_fu_34390_p2.read()));
}

void poly1305_hw::thread_add_ln402_440_fu_47756_p2() {
    add_ln402_440_fu_47756_p2 = (!mul_27_5_reg_106013.read().is_01() || !trunc_ln383_170_fu_47693_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_5_reg_106013.read()) + sc_biguint<8>(trunc_ln383_170_fu_47693_p1.read()));
}

void poly1305_hw::thread_add_ln402_442_fu_47827_p2() {
    add_ln402_442_fu_47827_p2 = (!mul_28_3_reg_106033.read().is_01() || !trunc_ln383_171_reg_106390.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_28_3_reg_106033.read()) + sc_biguint<8>(trunc_ln383_171_reg_106390.read()));
}

void poly1305_hw::thread_add_ln402_444_fu_47904_p2() {
    add_ln402_444_fu_47904_p2 = (!mul_29_1_reg_11095.read().is_01() || !trunc_ln383_172_fu_47841_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_29_1_reg_11095.read()) + sc_biguint<8>(trunc_ln383_172_fu_47841_p1.read()));
}

void poly1305_hw::thread_add_ln402_446_fu_47979_p2() {
    add_ln402_446_fu_47979_p2 = (!add_ln402_205_reg_106084.read().is_01() || !trunc_ln383_173_reg_106435.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_205_reg_106084.read()) + sc_biguint<8>(trunc_ln383_173_reg_106435.read()));
}

void poly1305_hw::thread_add_ln402_447_fu_48061_p2() {
    add_ln402_447_fu_48061_p2 = (!add_ln402_206_reg_106099.read().is_01() || !trunc_ln383_174_reg_106461.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_206_reg_106099.read()) + sc_biguint<8>(trunc_ln383_174_reg_106461.read()));
}

void poly1305_hw::thread_add_ln402_448_fu_48137_p2() {
    add_ln402_448_fu_48137_p2 = (!add_ln402_207_reg_106134.read().is_01() || !trunc_ln383_175_fu_48074_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_207_reg_106134.read()) + sc_biguint<8>(trunc_ln383_175_fu_48074_p1.read()));
}

void poly1305_hw::thread_add_ln402_449_fu_48208_p2() {
    add_ln402_449_fu_48208_p2 = (!mul_17_27_reg_106154.read().is_01() || !trunc_ln383_176_reg_106501.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_27_reg_106154.read()) + sc_biguint<8>(trunc_ln383_176_reg_106501.read()));
}

void poly1305_hw::thread_add_ln402_44_fu_34476_p2() {
    add_ln402_44_fu_34476_p2 = (!select_ln402_43_reg_102344.read().is_01() || !add_ln402_161_fu_34472_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_43_reg_102344.read()) + sc_biguint<8>(add_ln402_161_fu_34472_p2.read()));
}

void poly1305_hw::thread_add_ln402_451_fu_48290_p2() {
    add_ln402_451_fu_48290_p2 = (!mul_18_25_reg_106169.read().is_01() || !trunc_ln383_177_reg_106531.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_25_reg_106169.read()) + sc_biguint<8>(trunc_ln383_177_reg_106531.read()));
}

void poly1305_hw::thread_add_ln402_453_fu_48366_p2() {
    add_ln402_453_fu_48366_p2 = (!mul_19_23_reg_106204.read().is_01() || !trunc_ln383_178_fu_48303_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_23_reg_106204.read()) + sc_biguint<8>(trunc_ln383_178_fu_48303_p1.read()));
}

void poly1305_hw::thread_add_ln402_455_fu_48437_p2() {
    add_ln402_455_fu_48437_p2 = (!mul_20_21_reg_106224.read().is_01() || !trunc_ln383_179_reg_106571.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_21_reg_106224.read()) + sc_biguint<8>(trunc_ln383_179_reg_106571.read()));
}

void poly1305_hw::thread_add_ln402_457_fu_48519_p2() {
    add_ln402_457_fu_48519_p2 = (!mul_21_19_reg_106239.read().is_01() || !trunc_ln383_180_reg_106601.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_19_reg_106239.read()) + sc_biguint<8>(trunc_ln383_180_reg_106601.read()));
}

void poly1305_hw::thread_add_ln402_459_fu_48595_p2() {
    add_ln402_459_fu_48595_p2 = (!mul_22_17_reg_106274.read().is_01() || !trunc_ln383_181_fu_48532_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_17_reg_106274.read()) + sc_biguint<8>(trunc_ln383_181_fu_48532_p1.read()));
}

void poly1305_hw::thread_add_ln402_45_fu_34553_p2() {
    add_ln402_45_fu_34553_p2 = (!select_ln402_44_fu_34464_p3.read().is_01() || !add_ln402_162_fu_34548_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_44_fu_34464_p3.read()) + sc_biguint<8>(add_ln402_162_fu_34548_p2.read()));
}

void poly1305_hw::thread_add_ln402_461_fu_48666_p2() {
    add_ln402_461_fu_48666_p2 = (!mul_23_15_reg_106294.read().is_01() || !trunc_ln383_182_reg_106641.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_15_reg_106294.read()) + sc_biguint<8>(trunc_ln383_182_reg_106641.read()));
}

void poly1305_hw::thread_add_ln402_463_fu_48748_p2() {
    add_ln402_463_fu_48748_p2 = (!mul_24_13_reg_106309.read().is_01() || !trunc_ln383_183_reg_106671.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_13_reg_106309.read()) + sc_biguint<8>(trunc_ln383_183_reg_106671.read()));
}

void poly1305_hw::thread_add_ln402_465_fu_48824_p2() {
    add_ln402_465_fu_48824_p2 = (!mul_25_11_reg_106344.read().is_01() || !trunc_ln383_184_fu_48761_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_11_reg_106344.read()) + sc_biguint<8>(trunc_ln383_184_fu_48761_p1.read()));
}

void poly1305_hw::thread_add_ln402_467_fu_48895_p2() {
    add_ln402_467_fu_48895_p2 = (!mul_26_9_reg_106364.read().is_01() || !trunc_ln383_185_reg_106711.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_9_reg_106364.read()) + sc_biguint<8>(trunc_ln383_185_reg_106711.read()));
}

void poly1305_hw::thread_add_ln402_469_fu_48977_p2() {
    add_ln402_469_fu_48977_p2 = (!mul_27_7_reg_106379.read().is_01() || !trunc_ln383_186_reg_106741.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_7_reg_106379.read()) + sc_biguint<8>(trunc_ln383_186_reg_106741.read()));
}

void poly1305_hw::thread_add_ln402_46_fu_34623_p2() {
    add_ln402_46_fu_34623_p2 = (!select_ln402_45_fu_34566_p3.read().is_01() || !add_ln402_163_fu_34619_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_45_fu_34566_p3.read()) + sc_biguint<8>(add_ln402_163_fu_34619_p2.read()));
}

void poly1305_hw::thread_add_ln402_471_fu_49053_p2() {
    add_ln402_471_fu_49053_p2 = (!mul_28_5_reg_106404.read().is_01() || !trunc_ln383_187_fu_48990_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_28_5_reg_106404.read()) + sc_biguint<8>(trunc_ln383_187_fu_48990_p1.read()));
}

void poly1305_hw::thread_add_ln402_473_fu_49124_p2() {
    add_ln402_473_fu_49124_p2 = (!mul_29_3_reg_106424.read().is_01() || !trunc_ln383_188_reg_106781.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_29_3_reg_106424.read()) + sc_biguint<8>(trunc_ln383_188_reg_106781.read()));
}

void poly1305_hw::thread_add_ln402_475_fu_49201_p2() {
    add_ln402_475_fu_49201_p2 = (!mul_30_1_reg_11272.read().is_01() || !trunc_ln383_189_fu_49138_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_30_1_reg_11272.read()) + sc_biguint<8>(trunc_ln383_189_fu_49138_p1.read()));
}

void poly1305_hw::thread_add_ln402_477_fu_49276_p2() {
    add_ln402_477_fu_49276_p2 = (!add_ln402_222_reg_106475.read().is_01() || !trunc_ln383_190_reg_106826.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_222_reg_106475.read()) + sc_biguint<8>(trunc_ln383_190_reg_106826.read()));
}

void poly1305_hw::thread_add_ln402_478_fu_49358_p2() {
    add_ln402_478_fu_49358_p2 = (!add_ln402_223_reg_106490.read().is_01() || !trunc_ln382_48_reg_106852.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_223_reg_106490.read()) + sc_biguint<8>(trunc_ln382_48_reg_106852.read()));
}

void poly1305_hw::thread_add_ln402_479_fu_49434_p2() {
    add_ln402_479_fu_49434_p2 = (!mul_17_29_reg_106525.read().is_01() || !trunc_ln382_49_fu_49371_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_29_reg_106525.read()) + sc_biguint<8>(trunc_ln382_49_fu_49371_p1.read()));
}

void poly1305_hw::thread_add_ln402_47_fu_34705_p2() {
    add_ln402_47_fu_34705_p2 = (!select_ln402_46_reg_102414.read().is_01() || !add_ln402_164_fu_34701_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_46_reg_102414.read()) + sc_biguint<8>(add_ln402_164_fu_34701_p2.read()));
}

void poly1305_hw::thread_add_ln402_481_fu_49505_p2() {
    add_ln402_481_fu_49505_p2 = (!mul_18_27_reg_106545.read().is_01() || !trunc_ln382_50_reg_106892.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_18_27_reg_106545.read()) + sc_biguint<8>(trunc_ln382_50_reg_106892.read()));
}

void poly1305_hw::thread_add_ln402_483_fu_49587_p2() {
    add_ln402_483_fu_49587_p2 = (!mul_19_25_reg_106560.read().is_01() || !trunc_ln382_51_reg_106922.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_19_25_reg_106560.read()) + sc_biguint<8>(trunc_ln382_51_reg_106922.read()));
}

void poly1305_hw::thread_add_ln402_485_fu_49663_p2() {
    add_ln402_485_fu_49663_p2 = (!mul_20_23_reg_106595.read().is_01() || !trunc_ln382_52_fu_49600_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_20_23_reg_106595.read()) + sc_biguint<8>(trunc_ln382_52_fu_49600_p1.read()));
}

void poly1305_hw::thread_add_ln402_487_fu_49734_p2() {
    add_ln402_487_fu_49734_p2 = (!mul_21_21_reg_106615.read().is_01() || !trunc_ln382_53_reg_106962.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_21_21_reg_106615.read()) + sc_biguint<8>(trunc_ln382_53_reg_106962.read()));
}

void poly1305_hw::thread_add_ln402_489_fu_49816_p2() {
    add_ln402_489_fu_49816_p2 = (!mul_22_19_reg_106630.read().is_01() || !trunc_ln382_54_reg_106992.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_22_19_reg_106630.read()) + sc_biguint<8>(trunc_ln382_54_reg_106992.read()));
}

void poly1305_hw::thread_add_ln402_48_fu_31420_p2() {
    add_ln402_48_fu_31420_p2 = (!trunc_ln395_5_reg_100895.read().is_01() || !trunc_ln383_4_reg_101433.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_5_reg_100895.read()) + sc_biguint<8>(trunc_ln383_4_reg_101433.read()));
}

void poly1305_hw::thread_add_ln402_491_fu_49892_p2() {
    add_ln402_491_fu_49892_p2 = (!mul_23_17_reg_106665.read().is_01() || !trunc_ln382_55_fu_49829_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_23_17_reg_106665.read()) + sc_biguint<8>(trunc_ln382_55_fu_49829_p1.read()));
}

void poly1305_hw::thread_add_ln402_493_fu_49963_p2() {
    add_ln402_493_fu_49963_p2 = (!mul_24_15_reg_106685.read().is_01() || !trunc_ln382_56_reg_107032.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_24_15_reg_106685.read()) + sc_biguint<8>(trunc_ln382_56_reg_107032.read()));
}

void poly1305_hw::thread_add_ln402_495_fu_50045_p2() {
    add_ln402_495_fu_50045_p2 = (!mul_25_13_reg_106700.read().is_01() || !trunc_ln382_57_reg_107062.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_25_13_reg_106700.read()) + sc_biguint<8>(trunc_ln382_57_reg_107062.read()));
}

void poly1305_hw::thread_add_ln402_497_fu_50121_p2() {
    add_ln402_497_fu_50121_p2 = (!mul_26_11_reg_106735.read().is_01() || !trunc_ln382_58_fu_50058_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_26_11_reg_106735.read()) + sc_biguint<8>(trunc_ln382_58_fu_50058_p1.read()));
}

void poly1305_hw::thread_add_ln402_499_fu_50192_p2() {
    add_ln402_499_fu_50192_p2 = (!mul_27_9_reg_106755.read().is_01() || !trunc_ln382_59_reg_107102.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_27_9_reg_106755.read()) + sc_biguint<8>(trunc_ln382_59_reg_107102.read()));
}

void poly1305_hw::thread_add_ln402_49_fu_31496_p2() {
    add_ln402_49_fu_31496_p2 = (!trunc_ln395_6_reg_100938.read().is_01() || !trunc_ln383_5_fu_31433_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_6_reg_100938.read()) + sc_biguint<8>(trunc_ln383_5_fu_31433_p1.read()));
}

void poly1305_hw::thread_add_ln402_4_fu_31424_p2() {
    add_ln402_4_fu_31424_p2 = (!select_ln402_3_reg_101422.read().is_01() || !add_ln402_48_fu_31420_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_3_reg_101422.read()) + sc_biguint<8>(add_ln402_48_fu_31420_p2.read()));
}

void poly1305_hw::thread_add_ln402_501_fu_50274_p2() {
    add_ln402_501_fu_50274_p2 = (!mul_28_7_reg_106770.read().is_01() || !trunc_ln382_60_reg_107132.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_28_7_reg_106770.read()) + sc_biguint<8>(trunc_ln382_60_reg_107132.read()));
}

}

