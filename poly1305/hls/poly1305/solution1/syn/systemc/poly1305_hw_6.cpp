#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_add_ln402_503_fu_50350_p2() {
    add_ln402_503_fu_50350_p2 = (!mul_29_5_reg_106795.read().is_01() || !trunc_ln382_61_fu_50287_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_29_5_reg_106795.read()) + sc_biguint<8>(trunc_ln382_61_fu_50287_p1.read()));
}

void poly1305_hw::thread_add_ln402_505_fu_50421_p2() {
    add_ln402_505_fu_50421_p2 = (!mul_30_3_reg_106815.read().is_01() || !trunc_ln382_62_reg_107172.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_30_3_reg_106815.read()) + sc_biguint<8>(trunc_ln382_62_reg_107172.read()));
}

void poly1305_hw::thread_add_ln402_507_fu_50462_p2() {
    add_ln402_507_fu_50462_p2 = (!mul_31_1_reg_11449.read().is_01() || !trunc_ln382_63_fu_50435_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_31_1_reg_11449.read()) + sc_biguint<8>(trunc_ln382_63_fu_50435_p1.read()));
}

void poly1305_hw::thread_add_ln402_50_fu_31567_p2() {
    add_ln402_50_fu_31567_p2 = (!trunc_ln395_7_reg_100980.read().is_01() || !trunc_ln383_6_reg_101473.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_7_reg_100980.read()) + sc_biguint<8>(trunc_ln383_6_reg_101473.read()));
}

void poly1305_hw::thread_add_ln402_51_fu_35008_p2() {
    add_ln402_51_fu_35008_p2 = (!select_ln402_50_fu_34956_p3.read().is_01() || !add_ln402_177_fu_35004_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_50_fu_34956_p3.read()) + sc_biguint<8>(add_ln402_177_fu_35004_p2.read()));
}

void poly1305_hw::thread_add_ln402_52_fu_35090_p2() {
    add_ln402_52_fu_35090_p2 = (!select_ln402_51_reg_102530.read().is_01() || !add_ln402_178_fu_35086_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_51_reg_102530.read()) + sc_biguint<8>(add_ln402_178_fu_35086_p2.read()));
}

void poly1305_hw::thread_add_ln402_53_fu_35167_p2() {
    add_ln402_53_fu_35167_p2 = (!select_ln402_52_fu_35078_p3.read().is_01() || !add_ln402_179_fu_35162_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_52_fu_35078_p3.read()) + sc_biguint<8>(add_ln402_179_fu_35162_p2.read()));
}

void poly1305_hw::thread_add_ln402_54_fu_35237_p2() {
    add_ln402_54_fu_35237_p2 = (!select_ln402_53_fu_35180_p3.read().is_01() || !add_ln402_180_fu_35233_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_53_fu_35180_p3.read()) + sc_biguint<8>(add_ln402_180_fu_35233_p2.read()));
}

void poly1305_hw::thread_add_ln402_55_fu_35319_p2() {
    add_ln402_55_fu_35319_p2 = (!select_ln402_54_reg_102600.read().is_01() || !add_ln402_181_fu_35315_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_54_reg_102600.read()) + sc_biguint<8>(add_ln402_181_fu_35315_p2.read()));
}

void poly1305_hw::thread_add_ln402_56_fu_35396_p2() {
    add_ln402_56_fu_35396_p2 = (!select_ln402_55_fu_35307_p3.read().is_01() || !add_ln402_182_fu_35391_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_55_fu_35307_p3.read()) + sc_biguint<8>(add_ln402_182_fu_35391_p2.read()));
}

void poly1305_hw::thread_add_ln402_57_fu_35466_p2() {
    add_ln402_57_fu_35466_p2 = (!select_ln402_56_fu_35409_p3.read().is_01() || !add_ln402_183_fu_35462_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_56_fu_35409_p3.read()) + sc_biguint<8>(add_ln402_183_fu_35462_p2.read()));
}

void poly1305_hw::thread_add_ln402_58_fu_35548_p2() {
    add_ln402_58_fu_35548_p2 = (!select_ln402_57_reg_102670.read().is_01() || !add_ln402_184_fu_35544_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_57_reg_102670.read()) + sc_biguint<8>(add_ln402_184_fu_35544_p2.read()));
}

void poly1305_hw::thread_add_ln402_59_fu_35625_p2() {
    add_ln402_59_fu_35625_p2 = (!select_ln402_58_fu_35536_p3.read().is_01() || !add_ln402_185_fu_35620_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_58_fu_35536_p3.read()) + sc_biguint<8>(add_ln402_185_fu_35620_p2.read()));
}

void poly1305_hw::thread_add_ln402_5_fu_31501_p2() {
    add_ln402_5_fu_31501_p2 = (!select_ln402_4_fu_31412_p3.read().is_01() || !add_ln402_49_fu_31496_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_4_fu_31412_p3.read()) + sc_biguint<8>(add_ln402_49_fu_31496_p2.read()));
}

void poly1305_hw::thread_add_ln402_60_fu_35695_p2() {
    add_ln402_60_fu_35695_p2 = (!select_ln402_59_fu_35638_p3.read().is_01() || !add_ln402_186_fu_35691_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_59_fu_35638_p3.read()) + sc_biguint<8>(add_ln402_186_fu_35691_p2.read()));
}

void poly1305_hw::thread_add_ln402_61_fu_35777_p2() {
    add_ln402_61_fu_35777_p2 = (!select_ln402_60_reg_102740.read().is_01() || !add_ln402_192_fu_35773_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_60_reg_102740.read()) + sc_biguint<8>(add_ln402_192_fu_35773_p2.read()));
}

void poly1305_hw::thread_add_ln402_62_fu_35854_p2() {
    add_ln402_62_fu_35854_p2 = (!select_ln402_61_fu_35765_p3.read().is_01() || !add_ln402_193_fu_35849_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_61_fu_35765_p3.read()) + sc_biguint<8>(add_ln402_193_fu_35849_p2.read()));
}

void poly1305_hw::thread_add_ln402_63_fu_35924_p2() {
    add_ln402_63_fu_35924_p2 = (!select_ln402_62_fu_35867_p3.read().is_01() || !add_ln402_194_fu_35920_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_62_fu_35867_p3.read()) + sc_biguint<8>(add_ln402_194_fu_35920_p2.read()));
}

void poly1305_hw::thread_add_ln402_64_fu_31649_p2() {
    add_ln402_64_fu_31649_p2 = (!trunc_ln395_8_reg_101012.read().is_01() || !trunc_ln383_7_reg_101503.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_8_reg_101012.read()) + sc_biguint<8>(trunc_ln383_7_reg_101503.read()));
}

void poly1305_hw::thread_add_ln402_65_fu_31725_p2() {
    add_ln402_65_fu_31725_p2 = (!trunc_ln395_9_reg_101055.read().is_01() || !trunc_ln383_8_fu_31662_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_9_reg_101055.read()) + sc_biguint<8>(trunc_ln383_8_fu_31662_p1.read()));
}

void poly1305_hw::thread_add_ln402_66_fu_31796_p2() {
    add_ln402_66_fu_31796_p2 = (!trunc_ln395_10_reg_101097.read().is_01() || !trunc_ln383_9_reg_101543.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_10_reg_101097.read()) + sc_biguint<8>(trunc_ln383_9_reg_101543.read()));
}

void poly1305_hw::thread_add_ln402_67_fu_31878_p2() {
    add_ln402_67_fu_31878_p2 = (!trunc_ln395_11_reg_101129.read().is_01() || !trunc_ln383_10_reg_101573.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_11_reg_101129.read()) + sc_biguint<8>(trunc_ln383_10_reg_101573.read()));
}

void poly1305_hw::thread_add_ln402_68_fu_36304_p2() {
    add_ln402_68_fu_36304_p2 = (!select_ln402_67_fu_36252_p3.read().is_01() || !add_ln402_203_fu_36300_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_67_fu_36252_p3.read()) + sc_biguint<8>(add_ln402_203_fu_36300_p2.read()));
}

void poly1305_hw::thread_add_ln402_69_fu_36386_p2() {
    add_ln402_69_fu_36386_p2 = (!select_ln402_68_reg_102921.read().is_01() || !add_ln402_208_fu_36382_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_68_reg_102921.read()) + sc_biguint<8>(add_ln402_208_fu_36382_p2.read()));
}

void poly1305_hw::thread_add_ln402_6_fu_31571_p2() {
    add_ln402_6_fu_31571_p2 = (!select_ln402_5_fu_31514_p3.read().is_01() || !add_ln402_50_fu_31567_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_5_fu_31514_p3.read()) + sc_biguint<8>(add_ln402_50_fu_31567_p2.read()));
}

void poly1305_hw::thread_add_ln402_70_fu_36463_p2() {
    add_ln402_70_fu_36463_p2 = (!select_ln402_69_fu_36374_p3.read().is_01() || !add_ln402_209_fu_36458_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_69_fu_36374_p3.read()) + sc_biguint<8>(add_ln402_209_fu_36458_p2.read()));
}

void poly1305_hw::thread_add_ln402_71_fu_36533_p2() {
    add_ln402_71_fu_36533_p2 = (!select_ln402_70_fu_36476_p3.read().is_01() || !add_ln402_210_fu_36529_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_70_fu_36476_p3.read()) + sc_biguint<8>(add_ln402_210_fu_36529_p2.read()));
}

void poly1305_hw::thread_add_ln402_72_fu_36615_p2() {
    add_ln402_72_fu_36615_p2 = (!select_ln402_71_reg_102991.read().is_01() || !add_ln402_211_fu_36611_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_71_reg_102991.read()) + sc_biguint<8>(add_ln402_211_fu_36611_p2.read()));
}

void poly1305_hw::thread_add_ln402_73_fu_36692_p2() {
    add_ln402_73_fu_36692_p2 = (!select_ln402_72_fu_36603_p3.read().is_01() || !add_ln402_212_fu_36687_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_72_fu_36603_p3.read()) + sc_biguint<8>(add_ln402_212_fu_36687_p2.read()));
}

void poly1305_hw::thread_add_ln402_74_fu_36762_p2() {
    add_ln402_74_fu_36762_p2 = (!select_ln402_73_fu_36705_p3.read().is_01() || !add_ln402_213_fu_36758_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_73_fu_36705_p3.read()) + sc_biguint<8>(add_ln402_213_fu_36758_p2.read()));
}

void poly1305_hw::thread_add_ln402_75_fu_36844_p2() {
    add_ln402_75_fu_36844_p2 = (!select_ln402_74_reg_103061.read().is_01() || !add_ln402_214_fu_36840_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_74_reg_103061.read()) + sc_biguint<8>(add_ln402_214_fu_36840_p2.read()));
}

void poly1305_hw::thread_add_ln402_76_fu_36921_p2() {
    add_ln402_76_fu_36921_p2 = (!select_ln402_75_fu_36832_p3.read().is_01() || !add_ln402_215_fu_36916_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_75_fu_36832_p3.read()) + sc_biguint<8>(add_ln402_215_fu_36916_p2.read()));
}

void poly1305_hw::thread_add_ln402_77_fu_36991_p2() {
    add_ln402_77_fu_36991_p2 = (!select_ln402_76_fu_36934_p3.read().is_01() || !add_ln402_216_fu_36987_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_76_fu_36934_p3.read()) + sc_biguint<8>(add_ln402_216_fu_36987_p2.read()));
}

void poly1305_hw::thread_add_ln402_78_fu_37073_p2() {
    add_ln402_78_fu_37073_p2 = (!select_ln402_77_reg_103131.read().is_01() || !add_ln402_217_fu_37069_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_77_reg_103131.read()) + sc_biguint<8>(add_ln402_217_fu_37069_p2.read()));
}

void poly1305_hw::thread_add_ln402_79_fu_37150_p2() {
    add_ln402_79_fu_37150_p2 = (!select_ln402_78_fu_37061_p3.read().is_01() || !add_ln402_218_fu_37145_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_78_fu_37061_p3.read()) + sc_biguint<8>(add_ln402_218_fu_37145_p2.read()));
}

void poly1305_hw::thread_add_ln402_7_fu_31653_p2() {
    add_ln402_7_fu_31653_p2 = (!select_ln402_6_reg_101492.read().is_01() || !add_ln402_64_fu_31649_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_6_reg_101492.read()) + sc_biguint<8>(add_ln402_64_fu_31649_p2.read()));
}

void poly1305_hw::thread_add_ln402_80_fu_31954_p2() {
    add_ln402_80_fu_31954_p2 = (!trunc_ln395_12_reg_101172.read().is_01() || !trunc_ln383_11_fu_31891_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_12_reg_101172.read()) + sc_biguint<8>(trunc_ln383_11_fu_31891_p1.read()));
}

void poly1305_hw::thread_add_ln402_81_fu_32025_p2() {
    add_ln402_81_fu_32025_p2 = (!trunc_ln395_13_reg_101214.read().is_01() || !trunc_ln383_12_reg_101613.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_13_reg_101214.read()) + sc_biguint<8>(trunc_ln383_12_reg_101613.read()));
}

void poly1305_hw::thread_add_ln402_82_fu_32107_p2() {
    add_ln402_82_fu_32107_p2 = (!trunc_ln395_14_reg_101246.read().is_01() || !trunc_ln383_13_reg_101643.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_14_reg_101246.read()) + sc_biguint<8>(trunc_ln383_13_reg_101643.read()));
}

void poly1305_hw::thread_add_ln402_83_fu_32183_p2() {
    add_ln402_83_fu_32183_p2 = (!trunc_ln395_15_reg_101289.read().is_01() || !trunc_ln383_14_fu_32120_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_15_reg_101289.read()) + sc_biguint<8>(trunc_ln383_14_fu_32120_p1.read()));
}

void poly1305_hw::thread_add_ln402_84_fu_32254_p2() {
    add_ln402_84_fu_32254_p2 = (!trunc_ln395_16_reg_101326.read().is_01() || !trunc_ln383_15_reg_101683.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_16_reg_101326.read()) + sc_biguint<8>(trunc_ln383_15_reg_101683.read()));
}

void poly1305_hw::thread_add_ln402_85_fu_37601_p2() {
    add_ln402_85_fu_37601_p2 = (!select_ln402_84_fu_37549_p3.read().is_01() || !add_ln402_232_fu_37597_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_84_fu_37549_p3.read()) + sc_biguint<8>(add_ln402_232_fu_37597_p2.read()));
}

void poly1305_hw::thread_add_ln402_86_fu_37683_p2() {
    add_ln402_86_fu_37683_p2 = (!select_ln402_85_reg_103312.read().is_01() || !add_ln402_233_fu_37679_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_85_reg_103312.read()) + sc_biguint<8>(add_ln402_233_fu_37679_p2.read()));
}

void poly1305_hw::thread_add_ln402_87_fu_37760_p2() {
    add_ln402_87_fu_37760_p2 = (!select_ln402_86_fu_37671_p3.read().is_01() || !add_ln402_234_fu_37755_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_86_fu_37671_p3.read()) + sc_biguint<8>(add_ln402_234_fu_37755_p2.read()));
}

void poly1305_hw::thread_add_ln402_88_fu_37830_p2() {
    add_ln402_88_fu_37830_p2 = (!select_ln402_87_fu_37773_p3.read().is_01() || !add_ln402_235_fu_37826_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_87_fu_37773_p3.read()) + sc_biguint<8>(add_ln402_235_fu_37826_p2.read()));
}

void poly1305_hw::thread_add_ln402_89_fu_37912_p2() {
    add_ln402_89_fu_37912_p2 = (!select_ln402_88_reg_103382.read().is_01() || !add_ln402_236_fu_37908_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_88_reg_103382.read()) + sc_biguint<8>(add_ln402_236_fu_37908_p2.read()));
}

void poly1305_hw::thread_add_ln402_8_fu_31730_p2() {
    add_ln402_8_fu_31730_p2 = (!select_ln402_7_fu_31641_p3.read().is_01() || !add_ln402_65_fu_31725_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_7_fu_31641_p3.read()) + sc_biguint<8>(add_ln402_65_fu_31725_p2.read()));
}

void poly1305_hw::thread_add_ln402_90_fu_37989_p2() {
    add_ln402_90_fu_37989_p2 = (!select_ln402_89_fu_37900_p3.read().is_01() || !add_ln402_237_fu_37984_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_89_fu_37900_p3.read()) + sc_biguint<8>(add_ln402_237_fu_37984_p2.read()));
}

void poly1305_hw::thread_add_ln402_91_fu_38059_p2() {
    add_ln402_91_fu_38059_p2 = (!select_ln402_90_fu_38002_p3.read().is_01() || !add_ln402_240_fu_38055_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_90_fu_38002_p3.read()) + sc_biguint<8>(add_ln402_240_fu_38055_p2.read()));
}

void poly1305_hw::thread_add_ln402_92_fu_38141_p2() {
    add_ln402_92_fu_38141_p2 = (!select_ln402_91_reg_103452.read().is_01() || !add_ln402_241_fu_38137_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_91_reg_103452.read()) + sc_biguint<8>(add_ln402_241_fu_38137_p2.read()));
}

void poly1305_hw::thread_add_ln402_93_fu_38218_p2() {
    add_ln402_93_fu_38218_p2 = (!select_ln402_92_fu_38129_p3.read().is_01() || !add_ln402_242_fu_38213_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_92_fu_38129_p3.read()) + sc_biguint<8>(add_ln402_242_fu_38213_p2.read()));
}

void poly1305_hw::thread_add_ln402_94_fu_38288_p2() {
    add_ln402_94_fu_38288_p2 = (!select_ln402_93_fu_38231_p3.read().is_01() || !add_ln402_243_fu_38284_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_93_fu_38231_p3.read()) + sc_biguint<8>(add_ln402_243_fu_38284_p2.read()));
}

void poly1305_hw::thread_add_ln402_95_fu_38370_p2() {
    add_ln402_95_fu_38370_p2 = (!select_ln402_94_reg_103522.read().is_01() || !add_ln402_244_fu_38366_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_94_reg_103522.read()) + sc_biguint<8>(add_ln402_244_fu_38366_p2.read()));
}

void poly1305_hw::thread_add_ln402_96_fu_32331_p2() {
    add_ln402_96_fu_32331_p2 = (!mul_17_1_reg_8971.read().is_01() || !trunc_ln383_16_fu_32268_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_17_1_reg_8971.read()) + sc_biguint<8>(trunc_ln383_16_fu_32268_p1.read()));
}

void poly1305_hw::thread_add_ln402_98_fu_32406_p2() {
    add_ln402_98_fu_32406_p2 = (!add_ln402_1_reg_101377.read().is_01() || !trunc_ln383_17_reg_101728.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_1_reg_101377.read()) + sc_biguint<8>(trunc_ln383_17_reg_101728.read()));
}

void poly1305_hw::thread_add_ln402_99_fu_32488_p2() {
    add_ln402_99_fu_32488_p2 = (!add_ln402_2_reg_101392.read().is_01() || !trunc_ln383_18_reg_101754.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln402_2_reg_101392.read()) + sc_biguint<8>(trunc_ln383_18_reg_101754.read()));
}

void poly1305_hw::thread_add_ln402_9_fu_31800_p2() {
    add_ln402_9_fu_31800_p2 = (!select_ln402_8_fu_31743_p3.read().is_01() || !add_ln402_66_fu_31796_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln402_8_fu_31743_p3.read()) + sc_biguint<8>(add_ln402_66_fu_31796_p2.read()));
}

void poly1305_hw::thread_add_ln402_fu_31115_p2() {
    add_ln402_fu_31115_p2 = (!trunc_ln395_1_reg_100746.read().is_01() || !trunc_ln383_reg_101337.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln395_1_reg_100746.read()) + sc_biguint<8>(trunc_ln383_reg_101337.read()));
}

void poly1305_hw::thread_add_ln470_fu_51044_p2() {
    add_ln470_fu_51044_p2 = (!select_ln470_fu_51036_p3.read().is_01() || !zext_ln447_reg_107324.read().is_01())? sc_lv<7>(): (sc_biguint<7>(select_ln470_fu_51036_p3.read()) + sc_biguint<7>(zext_ln447_reg_107324.read()));
}

void poly1305_hw::thread_add_ln471_10_fu_50831_p2() {
    add_ln471_10_fu_50831_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_B));
}

void poly1305_hw::thread_add_ln471_11_fu_50841_p2() {
    add_ln471_11_fu_50841_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_C));
}

void poly1305_hw::thread_add_ln471_12_fu_50851_p2() {
    add_ln471_12_fu_50851_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_D));
}

void poly1305_hw::thread_add_ln471_13_fu_50861_p2() {
    add_ln471_13_fu_50861_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_E));
}

void poly1305_hw::thread_add_ln471_14_fu_50871_p2() {
    add_ln471_14_fu_50871_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_F));
}

void poly1305_hw::thread_add_ln471_15_fu_50881_p2() {
    add_ln471_15_fu_50881_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_10));
}

void poly1305_hw::thread_add_ln471_16_fu_50891_p2() {
    add_ln471_16_fu_50891_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln471_17_fu_50901_p2() {
    add_ln471_17_fu_50901_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_12));
}

void poly1305_hw::thread_add_ln471_18_fu_50911_p2() {
    add_ln471_18_fu_50911_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_13));
}

void poly1305_hw::thread_add_ln471_19_fu_50921_p2() {
    add_ln471_19_fu_50921_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_14));
}

void poly1305_hw::thread_add_ln471_1_fu_50741_p2() {
    add_ln471_1_fu_50741_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void poly1305_hw::thread_add_ln471_20_fu_50931_p2() {
    add_ln471_20_fu_50931_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_15));
}

void poly1305_hw::thread_add_ln471_21_fu_50941_p2() {
    add_ln471_21_fu_50941_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_16));
}

void poly1305_hw::thread_add_ln471_22_fu_50951_p2() {
    add_ln471_22_fu_50951_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_17));
}

void poly1305_hw::thread_add_ln471_23_fu_50961_p2() {
    add_ln471_23_fu_50961_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void poly1305_hw::thread_add_ln471_24_fu_50971_p2() {
    add_ln471_24_fu_50971_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_19));
}

void poly1305_hw::thread_add_ln471_25_fu_50981_p2() {
    add_ln471_25_fu_50981_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_1A));
}

void poly1305_hw::thread_add_ln471_26_fu_50991_p2() {
    add_ln471_26_fu_50991_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_1B));
}

void poly1305_hw::thread_add_ln471_27_fu_51001_p2() {
    add_ln471_27_fu_51001_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_1C));
}

void poly1305_hw::thread_add_ln471_28_fu_51011_p2() {
    add_ln471_28_fu_51011_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_1D));
}

void poly1305_hw::thread_add_ln471_29_fu_51021_p2() {
    add_ln471_29_fu_51021_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_1E));
}

void poly1305_hw::thread_add_ln471_2_fu_50751_p2() {
    add_ln471_2_fu_50751_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void poly1305_hw::thread_add_ln471_30_fu_51031_p2() {
    add_ln471_30_fu_51031_p2 = (!zext_ln447_reg_107324.read().is_01() || !ap_const_lv7_1F.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln447_reg_107324.read()) + sc_biguint<7>(ap_const_lv7_1F));
}

void poly1305_hw::thread_add_ln471_3_fu_50761_p2() {
    add_ln471_3_fu_50761_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_4));
}

void poly1305_hw::thread_add_ln471_4_fu_50771_p2() {
    add_ln471_4_fu_50771_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_5));
}

void poly1305_hw::thread_add_ln471_5_fu_50781_p2() {
    add_ln471_5_fu_50781_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_6));
}

void poly1305_hw::thread_add_ln471_6_fu_50791_p2() {
    add_ln471_6_fu_50791_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_7));
}

void poly1305_hw::thread_add_ln471_7_fu_50801_p2() {
    add_ln471_7_fu_50801_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_8));
}

void poly1305_hw::thread_add_ln471_8_fu_50811_p2() {
    add_ln471_8_fu_50811_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_9));
}

void poly1305_hw::thread_add_ln471_9_fu_50821_p2() {
    add_ln471_9_fu_50821_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_A));
}

void poly1305_hw::thread_add_ln471_fu_50731_p2() {
    add_ln471_fu_50731_p2 = (!arr1Zeroes53_0_lcssa_reg_11637.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(arr1Zeroes53_0_lcssa_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void poly1305_hw::thread_add_ln496_10_fu_53800_p2() {
    add_ln496_10_fu_53800_p2 = (!arr1_1_load_24_reg_108427.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_24_reg_108427.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_11_fu_53812_p2() {
    add_ln496_11_fu_53812_p2 = (!arr1_1_load_26_reg_108442.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_26_reg_108442.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_12_fu_53824_p2() {
    add_ln496_12_fu_53824_p2 = (!arr1_1_load_28_reg_108457.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_28_reg_108457.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_13_fu_53836_p2() {
    add_ln496_13_fu_53836_p2 = (!arr1_1_load_30_reg_108472.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_30_reg_108472.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_14_fu_53848_p2() {
    add_ln496_14_fu_53848_p2 = (!arr1_1_load_32_reg_108487.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_32_reg_108487.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_15_fu_53860_p2() {
    add_ln496_15_fu_53860_p2 = (!arr1_1_load_34_reg_108502.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_34_reg_108502.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_16_fu_53878_p2() {
    add_ln496_16_fu_53878_p2 = (!arr1_1_load_36_reg_108517.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_36_reg_108517.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_1_fu_53692_p2() {
    add_ln496_1_fu_53692_p2 = (!arr1_1_load_3_reg_108292.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_3_reg_108292.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_2_fu_53704_p2() {
    add_ln496_2_fu_53704_p2 = (!arr1_1_load_7_reg_108307.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_7_reg_108307.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_3_fu_53716_p2() {
    add_ln496_3_fu_53716_p2 = (!arr1_1_load_9_reg_108322.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_9_reg_108322.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_4_fu_53728_p2() {
    add_ln496_4_fu_53728_p2 = (!arr1_1_load_12_reg_108337.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_12_reg_108337.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_5_fu_53740_p2() {
    add_ln496_5_fu_53740_p2 = (!arr1_1_load_14_reg_108352.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_14_reg_108352.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_6_fu_53752_p2() {
    add_ln496_6_fu_53752_p2 = (!arr1_1_load_16_reg_108367.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_16_reg_108367.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_7_fu_53764_p2() {
    add_ln496_7_fu_53764_p2 = (!arr1_1_load_18_reg_108382.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_18_reg_108382.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_8_fu_53776_p2() {
    add_ln496_8_fu_53776_p2 = (!arr1_1_load_20_reg_108397.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_20_reg_108397.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_9_fu_53788_p2() {
    add_ln496_9_fu_53788_p2 = (!arr1_1_load_22_reg_108412.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_22_reg_108412.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln496_fu_53680_p2() {
    add_ln496_fu_53680_p2 = (!arr1_1_load_1_reg_108277.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_1_reg_108277.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln498_10_fu_53805_p2() {
    add_ln498_10_fu_53805_p2 = (!p_pn189_10_reg_12087.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_10_reg_12087.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_11_fu_53817_p2() {
    add_ln498_11_fu_53817_p2 = (!p_pn189_11_reg_12096.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_11_reg_12096.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_12_fu_53829_p2() {
    add_ln498_12_fu_53829_p2 = (!p_pn189_12_reg_12105.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_12_reg_12105.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_13_fu_53841_p2() {
    add_ln498_13_fu_53841_p2 = (!p_pn189_13_reg_12114.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_13_reg_12114.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_14_fu_53853_p2() {
    add_ln498_14_fu_53853_p2 = (!p_pn189_14_reg_12123.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_14_reg_12123.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_15_fu_53865_p2() {
    add_ln498_15_fu_53865_p2 = (!p_pn189_15_reg_12132.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_15_reg_12132.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_16_fu_53883_p2() {
    add_ln498_16_fu_53883_p2 = (!p_pn189_16_reg_12141.read().is_01() || !ap_const_lv32_FFFFFFFD.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_16_reg_12141.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFD));
}

void poly1305_hw::thread_add_ln498_1_fu_53697_p2() {
    add_ln498_1_fu_53697_p2 = (!p_pn189_1_reg_12006.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_1_reg_12006.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_2_fu_53709_p2() {
    add_ln498_2_fu_53709_p2 = (!p_pn189_2_reg_12015.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_2_reg_12015.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_3_fu_53721_p2() {
    add_ln498_3_fu_53721_p2 = (!p_pn189_3_reg_12024.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_3_reg_12024.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_4_fu_53733_p2() {
    add_ln498_4_fu_53733_p2 = (!p_pn189_4_reg_12033.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_4_reg_12033.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_5_fu_53745_p2() {
    add_ln498_5_fu_53745_p2 = (!p_pn189_5_reg_12042.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_5_reg_12042.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_6_fu_53757_p2() {
    add_ln498_6_fu_53757_p2 = (!p_pn189_6_reg_12051.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_6_reg_12051.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_7_fu_53769_p2() {
    add_ln498_7_fu_53769_p2 = (!p_pn189_7_reg_12060.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_7_reg_12060.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_8_fu_53781_p2() {
    add_ln498_8_fu_53781_p2 = (!p_pn189_8_reg_12069.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_8_reg_12069.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_9_fu_53793_p2() {
    add_ln498_9_fu_53793_p2 = (!p_pn189_9_reg_12078.read().is_01() || !ap_const_lv32_FFFFFF01.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_9_reg_12078.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF01));
}

void poly1305_hw::thread_add_ln498_fu_53685_p2() {
    add_ln498_fu_53685_p2 = (!p_pn189_0_reg_11997.read().is_01() || !ap_const_lv32_FFFFFF05.is_01())? sc_lv<32>(): (sc_biguint<32>(p_pn189_0_reg_11997.read()) + sc_bigint<32>(ap_const_lv32_FFFFFF05));
}

void poly1305_hw::thread_add_ln514_10_fu_52773_p2() {
    add_ln514_10_fu_52773_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_56_fu_52700_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_56_fu_52700_p1.read()));
}

void poly1305_hw::thread_add_ln514_11_fu_52907_p2() {
    add_ln514_11_fu_52907_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_60_fu_52856_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_60_fu_52856_p1.read()));
}

void poly1305_hw::thread_add_ln514_12_fu_53032_p2() {
    add_ln514_12_fu_53032_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_64_fu_52955_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_64_fu_52955_p1.read()));
}

void poly1305_hw::thread_add_ln514_13_fu_53158_p2() {
    add_ln514_13_fu_53158_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_68_fu_53086_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_68_fu_53086_p1.read()));
}

void poly1305_hw::thread_add_ln514_14_fu_53239_p2() {
    add_ln514_14_fu_53239_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_72_fu_53206_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_72_fu_53206_p1.read()));
}

void poly1305_hw::thread_add_ln514_15_fu_53439_p2() {
    add_ln514_15_fu_53439_p2 = (!zext_ln527_76_fu_53339_p1.read().is_01() || !sext_ln514_3_fu_53427_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(zext_ln527_76_fu_53339_p1.read()) + sc_bigint<26>(sext_ln514_3_fu_53427_p1.read()));
}

void poly1305_hw::thread_add_ln514_1_fu_51501_p2() {
    add_ln514_1_fu_51501_p2 = (!sext_ln514_1_fu_51381_p1.read().is_01() || !zext_ln527_4_fu_51428_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_fu_51381_p1.read()) + sc_biguint<26>(zext_ln527_4_fu_51428_p1.read()));
}

void poly1305_hw::thread_add_ln514_2_fu_51652_p2() {
    add_ln514_2_fu_51652_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_9_fu_51601_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_9_fu_51601_p1.read()));
}

void poly1305_hw::thread_add_ln514_3_fu_51809_p2() {
    add_ln514_3_fu_51809_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_14_fu_51805_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_14_fu_51805_p1.read()));
}

void poly1305_hw::thread_add_ln514_4_fu_51925_p2() {
    add_ln514_4_fu_51925_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_19_fu_51852_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_19_fu_51852_p1.read()));
}

void poly1305_hw::thread_add_ln514_5_fu_52075_p2() {
    add_ln514_5_fu_52075_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_36_fu_52024_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_36_fu_52024_p1.read()));
}

void poly1305_hw::thread_add_ln514_6_fu_52232_p2() {
    add_ln514_6_fu_52232_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_40_fu_52228_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_40_fu_52228_p1.read()));
}

void poly1305_hw::thread_add_ln514_7_fu_52348_p2() {
    add_ln514_7_fu_52348_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_44_fu_52275_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_44_fu_52275_p1.read()));
}

void poly1305_hw::thread_add_ln514_8_fu_52502_p2() {
    add_ln514_8_fu_52502_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_48_fu_52451_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_48_fu_52451_p1.read()));
}

void poly1305_hw::thread_add_ln514_9_fu_52657_p2() {
    add_ln514_9_fu_52657_p2 = (!sext_ln514_1_reg_107822.read().is_01() || !zext_ln527_52_fu_52653_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln514_1_reg_107822.read()) + sc_biguint<26>(zext_ln527_52_fu_52653_p1.read()));
}

void poly1305_hw::thread_add_ln514_fu_51384_p2() {
    add_ln514_fu_51384_p2 = (!zext_ln527_fu_51377_p1.read().is_01() || !sext_ln514_1_fu_51381_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(zext_ln527_fu_51377_p1.read()) + sc_bigint<26>(sext_ln514_1_fu_51381_p1.read()));
}

void poly1305_hw::thread_add_ln515_10_fu_52778_p2() {
    add_ln515_10_fu_52778_p2 = (!trunc_ln514_11_fu_52769_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_11_fu_52769_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_11_fu_52912_p2() {
    add_ln515_11_fu_52912_p2 = (!trunc_ln514_12_fu_52903_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_12_fu_52903_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_12_fu_53037_p2() {
    add_ln515_12_fu_53037_p2 = (!trunc_ln514_13_fu_53028_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_13_fu_53028_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_13_fu_53163_p2() {
    add_ln515_13_fu_53163_p2 = (!trunc_ln514_14_fu_53154_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_14_fu_53154_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_14_fu_53244_p2() {
    add_ln515_14_fu_53244_p2 = (!trunc_ln514_15_fu_53235_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_15_fu_53235_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_15_fu_53445_p2() {
    add_ln515_15_fu_53445_p2 = (!trunc_ln514_17_fu_53435_p1.read().is_01() || !trunc_ln514_16_fu_53431_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_17_fu_53435_p1.read()) + sc_biguint<8>(trunc_ln514_16_fu_53431_p1.read()));
}

void poly1305_hw::thread_add_ln515_1_fu_51507_p2() {
    add_ln515_1_fu_51507_p2 = (!trunc_ln514_2_fu_51497_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_2_fu_51497_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_2_fu_51657_p2() {
    add_ln515_2_fu_51657_p2 = (!trunc_ln514_3_fu_51648_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_3_fu_51648_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_3_fu_51769_p2() {
    add_ln515_3_fu_51769_p2 = (!trunc_ln514_4_fu_51765_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_4_fu_51765_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_4_fu_51930_p2() {
    add_ln515_4_fu_51930_p2 = (!trunc_ln514_5_fu_51921_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_5_fu_51921_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_5_fu_52080_p2() {
    add_ln515_5_fu_52080_p2 = (!trunc_ln514_6_fu_52071_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_6_fu_52071_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_6_fu_52192_p2() {
    add_ln515_6_fu_52192_p2 = (!trunc_ln514_7_fu_52188_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_7_fu_52188_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_7_fu_52353_p2() {
    add_ln515_7_fu_52353_p2 = (!trunc_ln514_8_fu_52344_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_8_fu_52344_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_8_fu_52507_p2() {
    add_ln515_8_fu_52507_p2 = (!trunc_ln514_9_fu_52498_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_9_fu_52498_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_9_fu_52619_p2() {
    add_ln515_9_fu_52619_p2 = (!trunc_ln514_10_fu_52615_p1.read().is_01() || !trunc_ln514_1_reg_107776.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_10_fu_52615_p1.read()) + sc_biguint<8>(trunc_ln514_1_reg_107776.read()));
}

void poly1305_hw::thread_add_ln515_fu_51340_p2() {
    add_ln515_fu_51340_p2 = (!trunc_ln514_1_fu_51336_p1.read().is_01() || !trunc_ln514_fu_51332_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln514_1_fu_51336_p1.read()) + sc_biguint<8>(trunc_ln514_fu_51332_p1.read()));
}

void poly1305_hw::thread_add_ln523_fu_53514_p2() {
    add_ln523_fu_53514_p2 = (!zext_ln510_reg_107679.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln510_reg_107679.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void poly1305_hw::thread_add_ln527_10_fu_51994_p2() {
    add_ln527_10_fu_51994_p2 = (!ap_const_lv7_A.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_A) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_11_fu_52004_p2() {
    add_ln527_11_fu_52004_p2 = (!ap_const_lv7_B.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_12_fu_52205_p2() {
    add_ln527_12_fu_52205_p2 = (!ap_const_lv7_C.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_C) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_13_fu_52215_p2() {
    add_ln527_13_fu_52215_p2 = (!ap_const_lv7_D.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_D) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_14_fu_52417_p2() {
    add_ln527_14_fu_52417_p2 = (!ap_const_lv7_E.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_E) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_15_fu_52427_p2() {
    add_ln527_15_fu_52427_p2 = (!ap_const_lv7_F.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_F) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_16_fu_52632_p2() {
    add_ln527_16_fu_52632_p2 = (!ap_const_lv7_10.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_10) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_17_fu_51442_p2() {
    add_ln527_17_fu_51442_p2 = (!zext_ln527_7_fu_51435_p1.read().is_01() || !zext_ln527_5_fu_51432_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_7_fu_51435_p1.read()) + sc_biguint<9>(zext_ln527_5_fu_51432_p1.read()));
}

void poly1305_hw::thread_add_ln527_18_fu_51452_p2() {
    add_ln527_18_fu_51452_p2 = (!reg_21635.read().is_01() || !zext_ln527_8_fu_51448_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21635.read()) + sc_biguint<32>(zext_ln527_8_fu_51448_p1.read()));
}

void poly1305_hw::thread_add_ln527_19_fu_51552_p2() {
    add_ln527_19_fu_51552_p2 = (!zext_ln527_12_fu_51542_p1.read().is_01() || !zext_ln527_10_fu_51538_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_12_fu_51542_p1.read()) + sc_biguint<9>(zext_ln527_10_fu_51538_p1.read()));
}

void poly1305_hw::thread_add_ln527_1_fu_51270_p2() {
    add_ln527_1_fu_51270_p2 = (!reg_21630.read().is_01() || !zext_ln527_3_fu_51266_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21630.read()) + sc_biguint<32>(zext_ln527_3_fu_51266_p1.read()));
}

void poly1305_hw::thread_add_ln527_20_fu_51608_p2() {
    add_ln527_20_fu_51608_p2 = (!reg_21630.read().is_01() || !zext_ln527_13_fu_51605_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21630.read()) + sc_biguint<32>(zext_ln527_13_fu_51605_p1.read()));
}

void poly1305_hw::thread_add_ln527_21_fu_51710_p2() {
    add_ln527_21_fu_51710_p2 = (!zext_ln527_17_fu_51700_p1.read().is_01() || !zext_ln527_15_fu_51696_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_17_fu_51700_p1.read()) + sc_biguint<9>(zext_ln527_15_fu_51696_p1.read()));
}

void poly1305_hw::thread_add_ln527_22_fu_51720_p2() {
    add_ln527_22_fu_51720_p2 = (!reg_21639.read().is_01() || !zext_ln527_18_fu_51716_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21639.read()) + sc_biguint<32>(zext_ln527_18_fu_51716_p1.read()));
}

void poly1305_hw::thread_add_ln527_23_fu_51866_p2() {
    add_ln527_23_fu_51866_p2 = (!zext_ln527_34_fu_51859_p1.read().is_01() || !zext_ln527_33_fu_51856_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_34_fu_51859_p1.read()) + sc_biguint<9>(zext_ln527_33_fu_51856_p1.read()));
}

void poly1305_hw::thread_add_ln527_24_fu_51876_p2() {
    add_ln527_24_fu_51876_p2 = (!reg_21635.read().is_01() || !zext_ln527_35_fu_51872_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21635.read()) + sc_biguint<32>(zext_ln527_35_fu_51872_p1.read()));
}

void poly1305_hw::thread_add_ln527_25_fu_51975_p2() {
    add_ln527_25_fu_51975_p2 = (!zext_ln527_38_fu_51965_p1.read().is_01() || !zext_ln527_37_fu_51961_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_38_fu_51965_p1.read()) + sc_biguint<9>(zext_ln527_37_fu_51961_p1.read()));
}

void poly1305_hw::thread_add_ln527_26_fu_52031_p2() {
    add_ln527_26_fu_52031_p2 = (!reg_21644.read().is_01() || !zext_ln527_39_fu_52028_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21644.read()) + sc_biguint<32>(zext_ln527_39_fu_52028_p1.read()));
}

void poly1305_hw::thread_add_ln527_27_fu_52133_p2() {
    add_ln527_27_fu_52133_p2 = (!zext_ln527_42_fu_52123_p1.read().is_01() || !zext_ln527_41_fu_52119_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_42_fu_52123_p1.read()) + sc_biguint<9>(zext_ln527_41_fu_52119_p1.read()));
}

void poly1305_hw::thread_add_ln527_28_fu_52143_p2() {
    add_ln527_28_fu_52143_p2 = (!reg_21630.read().is_01() || !zext_ln527_43_fu_52139_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21630.read()) + sc_biguint<32>(zext_ln527_43_fu_52139_p1.read()));
}

void poly1305_hw::thread_add_ln527_29_fu_52289_p2() {
    add_ln527_29_fu_52289_p2 = (!zext_ln527_46_fu_52282_p1.read().is_01() || !zext_ln527_45_fu_52279_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_46_fu_52282_p1.read()) + sc_biguint<9>(zext_ln527_45_fu_52279_p1.read()));
}

void poly1305_hw::thread_add_ln527_2_fu_51179_p2() {
    add_ln527_2_fu_51179_p2 = (!ap_const_lv7_2.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_2) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_30_fu_52299_p2() {
    add_ln527_30_fu_52299_p2 = (!reg_21639.read().is_01() || !zext_ln527_47_fu_52295_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21639.read()) + sc_biguint<32>(zext_ln527_47_fu_52295_p1.read()));
}

void poly1305_hw::thread_add_ln527_31_fu_52398_p2() {
    add_ln527_31_fu_52398_p2 = (!zext_ln527_50_fu_52388_p1.read().is_01() || !zext_ln527_49_fu_52384_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_50_fu_52388_p1.read()) + sc_biguint<9>(zext_ln527_49_fu_52384_p1.read()));
}

void poly1305_hw::thread_add_ln527_32_fu_52458_p2() {
    add_ln527_32_fu_52458_p2 = (!reg_21635.read().is_01() || !zext_ln527_51_fu_52455_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21635.read()) + sc_biguint<32>(zext_ln527_51_fu_52455_p1.read()));
}

void poly1305_hw::thread_add_ln527_33_fu_52560_p2() {
    add_ln527_33_fu_52560_p2 = (!zext_ln527_54_fu_52550_p1.read().is_01() || !zext_ln527_53_fu_52546_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_54_fu_52550_p1.read()) + sc_biguint<9>(zext_ln527_53_fu_52546_p1.read()));
}

void poly1305_hw::thread_add_ln527_34_fu_52570_p2() {
    add_ln527_34_fu_52570_p2 = (!reg_21648.read().is_01() || !zext_ln527_55_fu_52566_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21648.read()) + sc_biguint<32>(zext_ln527_55_fu_52566_p1.read()));
}

void poly1305_hw::thread_add_ln527_35_fu_52714_p2() {
    add_ln527_35_fu_52714_p2 = (!zext_ln527_58_fu_52707_p1.read().is_01() || !zext_ln527_57_fu_52704_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_58_fu_52707_p1.read()) + sc_biguint<9>(zext_ln527_57_fu_52704_p1.read()));
}

void poly1305_hw::thread_add_ln527_36_fu_52724_p2() {
    add_ln527_36_fu_52724_p2 = (!reg_21630.read().is_01() || !zext_ln527_59_fu_52720_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21630.read()) + sc_biguint<32>(zext_ln527_59_fu_52720_p1.read()));
}

void poly1305_hw::thread_add_ln527_37_fu_52823_p2() {
    add_ln527_37_fu_52823_p2 = (!zext_ln527_62_fu_52813_p1.read().is_01() || !zext_ln527_61_fu_52809_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_62_fu_52813_p1.read()) + sc_biguint<9>(zext_ln527_61_fu_52809_p1.read()));
}

void poly1305_hw::thread_add_ln527_38_fu_52863_p2() {
    add_ln527_38_fu_52863_p2 = (!reg_21644.read().is_01() || !zext_ln527_63_fu_52860_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21644.read()) + sc_biguint<32>(zext_ln527_63_fu_52860_p1.read()));
}

void poly1305_hw::thread_add_ln527_39_fu_52973_p2() {
    add_ln527_39_fu_52973_p2 = (!zext_ln527_66_fu_52963_p1.read().is_01() || !zext_ln527_65_fu_52959_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_66_fu_52963_p1.read()) + sc_biguint<9>(zext_ln527_65_fu_52959_p1.read()));
}

void poly1305_hw::thread_add_ln527_3_fu_51189_p2() {
    add_ln527_3_fu_51189_p2 = (!ap_const_lv7_3.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_3) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_40_fu_52983_p2() {
    add_ln527_40_fu_52983_p2 = (!reg_21639.read().is_01() || !zext_ln527_67_fu_52979_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21639.read()) + sc_biguint<32>(zext_ln527_67_fu_52979_p1.read()));
}

void poly1305_hw::thread_add_ln527_41_fu_53100_p2() {
    add_ln527_41_fu_53100_p2 = (!zext_ln527_70_fu_53093_p1.read().is_01() || !zext_ln527_69_fu_53090_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_70_fu_53093_p1.read()) + sc_biguint<9>(zext_ln527_69_fu_53090_p1.read()));
}

void poly1305_hw::thread_add_ln527_42_fu_53110_p2() {
    add_ln527_42_fu_53110_p2 = (!temp_1_load_14_reg_108049.read().is_01() || !zext_ln527_71_fu_53106_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_1_load_14_reg_108049.read()) + sc_biguint<32>(zext_ln527_71_fu_53106_p1.read()));
}

void poly1305_hw::thread_add_ln527_43_fu_53224_p2() {
    add_ln527_43_fu_53224_p2 = (!zext_ln527_74_fu_53214_p1.read().is_01() || !zext_ln527_73_fu_53210_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_74_fu_53214_p1.read()) + sc_biguint<9>(zext_ln527_73_fu_53210_p1.read()));
}

void poly1305_hw::thread_add_ln527_44_fu_53289_p2() {
    add_ln527_44_fu_53289_p2 = (!reg_21635.read().is_01() || !zext_ln527_75_fu_53286_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21635.read()) + sc_biguint<32>(zext_ln527_75_fu_53286_p1.read()));
}

void poly1305_hw::thread_add_ln527_45_fu_53355_p2() {
    add_ln527_45_fu_53355_p2 = (!zext_ln527_78_fu_53346_p1.read().is_01() || !zext_ln527_77_fu_53343_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_78_fu_53346_p1.read()) + sc_biguint<9>(zext_ln527_77_fu_53343_p1.read()));
}

void poly1305_hw::thread_add_ln527_46_fu_53365_p2() {
    add_ln527_46_fu_53365_p2 = (!reg_21648.read().is_01() || !zext_ln527_79_fu_53361_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21648.read()) + sc_biguint<32>(zext_ln527_79_fu_53361_p1.read()));
}

void poly1305_hw::thread_add_ln527_47_fu_53560_p2() {
    add_ln527_47_fu_53560_p2 = (!zext_ln527_81_fu_53557_p1.read().is_01() || !zext_ln527_80_fu_53554_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_81_fu_53557_p1.read()) + sc_biguint<9>(zext_ln527_80_fu_53554_p1.read()));
}

void poly1305_hw::thread_add_ln527_48_fu_53570_p2() {
    add_ln527_48_fu_53570_p2 = (!reg_21630.read().is_01() || !zext_ln527_82_fu_53566_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21630.read()) + sc_biguint<32>(zext_ln527_82_fu_53566_p1.read()));
}

void poly1305_hw::thread_add_ln527_49_fu_51254_p2() {
    add_ln527_49_fu_51254_p2 = (!trunc_ln515_fu_51208_p1.read().is_01() || !addCarry34_6_reg_11953.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln515_fu_51208_p1.read()) + sc_biguint<8>(addCarry34_6_reg_11953.read()));
}

void poly1305_hw::thread_add_ln527_4_fu_51354_p2() {
    add_ln527_4_fu_51354_p2 = (!ap_const_lv7_4.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_4) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_50_fu_51438_p2() {
    add_ln527_50_fu_51438_p2 = (!add_ln515_reg_107794.read().is_01() || !select_ln528_reg_107765.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_reg_107794.read()) + sc_biguint<8>(select_ln528_reg_107765.read()));
}

void poly1305_hw::thread_add_ln527_51_fu_51546_p2() {
    add_ln527_51_fu_51546_p2 = (!add_ln515_1_fu_51507_p2.read().is_01() || !select_ln528_1_fu_51489_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_1_fu_51507_p2.read()) + sc_biguint<8>(select_ln528_1_fu_51489_p3.read()));
}

void poly1305_hw::thread_add_ln527_52_fu_51704_p2() {
    add_ln527_52_fu_51704_p2 = (!add_ln515_2_fu_51657_p2.read().is_01() || !select_ln528_2_fu_51640_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_2_fu_51657_p2.read()) + sc_biguint<8>(select_ln528_2_fu_51640_p3.read()));
}

void poly1305_hw::thread_add_ln527_53_fu_51862_p2() {
    add_ln527_53_fu_51862_p2 = (!add_ln515_3_reg_107902.read().is_01() || !select_ln528_3_reg_107896.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_3_reg_107902.read()) + sc_biguint<8>(select_ln528_3_reg_107896.read()));
}

void poly1305_hw::thread_add_ln527_54_fu_51969_p2() {
    add_ln527_54_fu_51969_p2 = (!add_ln515_4_fu_51930_p2.read().is_01() || !select_ln528_4_fu_51913_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_4_fu_51930_p2.read()) + sc_biguint<8>(select_ln528_4_fu_51913_p3.read()));
}

void poly1305_hw::thread_add_ln527_55_fu_52127_p2() {
    add_ln527_55_fu_52127_p2 = (!add_ln515_5_fu_52080_p2.read().is_01() || !select_ln528_5_fu_52063_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_5_fu_52080_p2.read()) + sc_biguint<8>(select_ln528_5_fu_52063_p3.read()));
}

void poly1305_hw::thread_add_ln527_56_fu_52285_p2() {
    add_ln527_56_fu_52285_p2 = (!add_ln515_6_reg_107993.read().is_01() || !select_ln528_6_reg_107987.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_6_reg_107993.read()) + sc_biguint<8>(select_ln528_6_reg_107987.read()));
}

void poly1305_hw::thread_add_ln527_57_fu_52392_p2() {
    add_ln527_57_fu_52392_p2 = (!add_ln515_7_fu_52353_p2.read().is_01() || !select_ln528_7_fu_52336_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_7_fu_52353_p2.read()) + sc_biguint<8>(select_ln528_7_fu_52336_p3.read()));
}

void poly1305_hw::thread_add_ln527_58_fu_52554_p2() {
    add_ln527_58_fu_52554_p2 = (!add_ln515_8_fu_52507_p2.read().is_01() || !select_ln528_8_fu_52490_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_8_fu_52507_p2.read()) + sc_biguint<8>(select_ln528_8_fu_52490_p3.read()));
}

void poly1305_hw::thread_add_ln527_59_fu_52710_p2() {
    add_ln527_59_fu_52710_p2 = (!add_ln515_9_reg_108085.read().is_01() || !select_ln528_9_reg_108079.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_9_reg_108085.read()) + sc_biguint<8>(select_ln528_9_reg_108079.read()));
}

void poly1305_hw::thread_add_ln527_5_fu_51364_p2() {
    add_ln527_5_fu_51364_p2 = (!ap_const_lv7_5.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_5) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_60_fu_52817_p2() {
    add_ln527_60_fu_52817_p2 = (!add_ln515_10_fu_52778_p2.read().is_01() || !select_ln528_10_fu_52761_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_10_fu_52778_p2.read()) + sc_biguint<8>(select_ln528_10_fu_52761_p3.read()));
}

void poly1305_hw::thread_add_ln527_61_fu_52967_p2() {
    add_ln527_61_fu_52967_p2 = (!add_ln515_11_fu_52912_p2.read().is_01() || !select_ln528_11_fu_52895_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_11_fu_52912_p2.read()) + sc_biguint<8>(select_ln528_11_fu_52895_p3.read()));
}

void poly1305_hw::thread_add_ln527_62_fu_53096_p2() {
    add_ln527_62_fu_53096_p2 = (!add_ln515_12_reg_108148.read().is_01() || !select_ln528_12_reg_108142.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_12_reg_108148.read()) + sc_biguint<8>(select_ln528_12_reg_108142.read()));
}

void poly1305_hw::thread_add_ln527_63_fu_53218_p2() {
    add_ln527_63_fu_53218_p2 = (!add_ln515_13_fu_53163_p2.read().is_01() || !select_ln528_13_fu_53146_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_13_fu_53163_p2.read()) + sc_biguint<8>(select_ln528_13_fu_53146_p3.read()));
}

void poly1305_hw::thread_add_ln527_64_fu_53350_p2() {
    add_ln527_64_fu_53350_p2 = (!add_ln515_14_reg_108179.read().is_01() || !select_ln528_14_fu_53321_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_14_reg_108179.read()) + sc_biguint<8>(select_ln528_14_fu_53321_p3.read()));
}

void poly1305_hw::thread_add_ln527_65_fu_53540_p2() {
    add_ln527_65_fu_53540_p2 = (!add_ln515_15_reg_108206.read().is_01() || !select_ln528_15_reg_108200.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln515_15_reg_108206.read()) + sc_biguint<8>(select_ln528_15_reg_108200.read()));
}

void poly1305_hw::thread_add_ln527_6_fu_51571_p2() {
    add_ln527_6_fu_51571_p2 = (!ap_const_lv7_6.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_6) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_7_fu_51581_p2() {
    add_ln527_7_fu_51581_p2 = (!ap_const_lv7_7.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_7) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_8_fu_51782_p2() {
    add_ln527_8_fu_51782_p2 = (!ap_const_lv7_8.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_9_fu_51792_p2() {
    add_ln527_9_fu_51792_p2 = (!ap_const_lv7_9.is_01() || !zext_ln510_reg_107679.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_9) + sc_biguint<7>(zext_ln510_reg_107679.read()));
}

void poly1305_hw::thread_add_ln527_fu_51260_p2() {
    add_ln527_fu_51260_p2 = (!zext_ln527_2_fu_51250_p1.read().is_01() || !zext_ln527_1_fu_51246_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln527_2_fu_51250_p1.read()) + sc_biguint<9>(zext_ln527_1_fu_51246_p1.read()));
}

void poly1305_hw::thread_add_ln528_10_fu_52730_p2() {
    add_ln528_10_fu_52730_p2 = (!add_ln527_59_fu_52710_p2.read().is_01() || !trunc_ln527_10_reg_107999.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_59_fu_52710_p2.read()) + sc_biguint<8>(trunc_ln527_10_reg_107999.read()));
}

void poly1305_hw::thread_add_ln528_11_fu_52829_p2() {
    add_ln528_11_fu_52829_p2 = (!add_ln527_60_fu_52817_p2.read().is_01() || !trunc_ln527_11_reg_108004.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_60_fu_52817_p2.read()) + sc_biguint<8>(trunc_ln527_11_reg_108004.read()));
}

void poly1305_hw::thread_add_ln528_12_fu_52989_p2() {
    add_ln528_12_fu_52989_p2 = (!add_ln527_61_fu_52967_p2.read().is_01() || !trunc_ln527_12_reg_108044.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_61_fu_52967_p2.read()) + sc_biguint<8>(trunc_ln527_12_reg_108044.read()));
}

void poly1305_hw::thread_add_ln528_13_fu_53115_p2() {
    add_ln528_13_fu_53115_p2 = (!add_ln527_62_fu_53096_p2.read().is_01() || !trunc_ln527_13_reg_108054.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_62_fu_53096_p2.read()) + sc_biguint<8>(trunc_ln527_13_reg_108054.read()));
}

void poly1305_hw::thread_add_ln528_14_fu_53230_p2() {
    add_ln528_14_fu_53230_p2 = (!add_ln527_63_fu_53218_p2.read().is_01() || !trunc_ln527_14_reg_108091.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_63_fu_53218_p2.read()) + sc_biguint<8>(trunc_ln527_14_reg_108091.read()));
}

void poly1305_hw::thread_add_ln528_15_fu_53371_p2() {
    add_ln528_15_fu_53371_p2 = (!add_ln527_64_fu_53350_p2.read().is_01() || !trunc_ln527_15_reg_108096.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_64_fu_53350_p2.read()) + sc_biguint<8>(trunc_ln527_15_reg_108096.read()));
}

void poly1305_hw::thread_add_ln528_16_fu_53544_p2() {
    add_ln528_16_fu_53544_p2 = (!add_ln527_65_fu_53540_p2.read().is_01() || !trunc_ln527_16_reg_108132.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_65_fu_53540_p2.read()) + sc_biguint<8>(trunc_ln527_16_reg_108132.read()));
}

void poly1305_hw::thread_add_ln528_1_fu_51458_p2() {
    add_ln528_1_fu_51458_p2 = (!add_ln527_50_fu_51438_p2.read().is_01() || !trunc_ln527_1_reg_107738.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_50_fu_51438_p2.read()) + sc_biguint<8>(trunc_ln527_1_reg_107738.read()));
}

void poly1305_hw::thread_add_ln528_2_fu_51558_p2() {
    add_ln528_2_fu_51558_p2 = (!add_ln527_51_fu_51546_p2.read().is_01() || !trunc_ln527_2_reg_107800.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_51_fu_51546_p2.read()) + sc_biguint<8>(trunc_ln527_2_reg_107800.read()));
}

void poly1305_hw::thread_add_ln528_3_fu_51726_p2() {
    add_ln528_3_fu_51726_p2 = (!add_ln527_52_fu_51704_p2.read().is_01() || !trunc_ln527_3_reg_107805.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_52_fu_51704_p2.read()) + sc_biguint<8>(trunc_ln527_3_reg_107805.read()));
}

void poly1305_hw::thread_add_ln528_4_fu_51882_p2() {
    add_ln528_4_fu_51882_p2 = (!add_ln527_53_fu_51862_p2.read().is_01() || !trunc_ln527_4_reg_107864.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_53_fu_51862_p2.read()) + sc_biguint<8>(trunc_ln527_4_reg_107864.read()));
}

void poly1305_hw::thread_add_ln528_5_fu_51981_p2() {
    add_ln528_5_fu_51981_p2 = (!add_ln527_54_fu_51969_p2.read().is_01() || !trunc_ln527_5_reg_107869.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_54_fu_51969_p2.read()) + sc_biguint<8>(trunc_ln527_5_reg_107869.read()));
}

void poly1305_hw::thread_add_ln528_6_fu_52149_p2() {
    add_ln528_6_fu_52149_p2 = (!add_ln527_55_fu_52127_p2.read().is_01() || !trunc_ln527_6_reg_107908.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_55_fu_52127_p2.read()) + sc_biguint<8>(trunc_ln527_6_reg_107908.read()));
}

void poly1305_hw::thread_add_ln528_7_fu_52305_p2() {
    add_ln528_7_fu_52305_p2 = (!add_ln527_56_fu_52285_p2.read().is_01() || !trunc_ln527_7_reg_107913.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_56_fu_52285_p2.read()) + sc_biguint<8>(trunc_ln527_7_reg_107913.read()));
}

void poly1305_hw::thread_add_ln528_8_fu_52404_p2() {
    add_ln528_8_fu_52404_p2 = (!add_ln527_57_fu_52392_p2.read().is_01() || !trunc_ln527_8_reg_107955.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_57_fu_52392_p2.read()) + sc_biguint<8>(trunc_ln527_8_reg_107955.read()));
}

void poly1305_hw::thread_add_ln528_9_fu_52576_p2() {
    add_ln528_9_fu_52576_p2 = (!add_ln527_58_fu_52554_p2.read().is_01() || !trunc_ln527_9_reg_107960.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_58_fu_52554_p2.read()) + sc_biguint<8>(trunc_ln527_9_reg_107960.read()));
}

void poly1305_hw::thread_add_ln528_fu_51276_p2() {
    add_ln528_fu_51276_p2 = (!add_ln527_49_fu_51254_p2.read().is_01() || !trunc_ln527_reg_107733.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln527_49_fu_51254_p2.read()) + sc_biguint<8>(trunc_ln527_reg_107733.read()));
}

void poly1305_hw::thread_add_ln537_2_fu_53624_p2() {
    add_ln537_2_fu_53624_p2 = (!temp_1_q0.read().is_01() || !zext_ln537_fu_53621_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_1_q0.read()) + sc_biguint<32>(zext_ln537_fu_53621_p1.read()));
}

void poly1305_hw::thread_add_ln537_fu_51130_p2() {
    add_ln537_fu_51130_p2 = (!sub_ln536_fu_51124_p2.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(sub_ln536_fu_51124_p2.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void poly1305_hw::thread_add_ln548_fu_53662_p2() {
    add_ln548_fu_53662_p2 = (!arr1_1_load_5_reg_108257.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_load_5_reg_108257.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln55_fu_27499_p2() {
    add_ln55_fu_27499_p2 = (!phi_ln55_reg_8641.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(phi_ln55_reg_8641.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void poly1305_hw::thread_add_ln638_fu_56079_p2() {
    add_ln638_fu_56079_p2 = (!zext_ln638_1_fu_56067_p1.read().is_01() || !zext_ln638_2_fu_56071_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln638_1_fu_56067_p1.read()) + sc_biguint<9>(zext_ln638_2_fu_56071_p1.read()));
}

void poly1305_hw::thread_add_ln645_1_fu_56133_p2() {
    add_ln645_1_fu_56133_p2 = (!acc_q1.read().is_01() || !zext_ln637_fu_56129_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(zext_ln637_fu_56129_p1.read()));
}

void poly1305_hw::thread_add_ln673_fu_58301_p2() {
    add_ln673_fu_58301_p2 = (!zext_ln660_reg_109563.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln660_reg_109563.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln677_10_fu_56678_p2() {
    add_ln677_10_fu_56678_p2 = (!ap_const_lv5_A.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_11_fu_56689_p2() {
    add_ln677_11_fu_56689_p2 = (!ap_const_lv5_B.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_B) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_12_fu_56738_p2() {
    add_ln677_12_fu_56738_p2 = (!ap_const_lv5_C.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_13_fu_56749_p2() {
    add_ln677_13_fu_56749_p2 = (!ap_const_lv5_D.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_D) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_14_fu_56798_p2() {
    add_ln677_14_fu_56798_p2 = (!ap_const_lv5_E.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_E) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_15_fu_56809_p2() {
    add_ln677_15_fu_56809_p2 = (!ap_const_lv5_F.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_F) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_16_fu_56833_p2() {
    add_ln677_16_fu_56833_p2 = (!zext_ln677_6_fu_56826_p1.read().is_01() || !zext_ln677_7_fu_56830_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_6_fu_56826_p1.read()) + sc_biguint<9>(zext_ln677_7_fu_56830_p1.read()));
}

void poly1305_hw::thread_add_ln677_17_fu_56843_p2() {
    add_ln677_17_fu_56843_p2 = (!zext_ln677_4_fu_56823_p1.read().is_01() || !zext_ln677_8_fu_56839_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_4_fu_56823_p1.read()) + sc_biguint<10>(zext_ln677_8_fu_56839_p1.read()));
}

void poly1305_hw::thread_add_ln677_18_fu_56956_p2() {
    add_ln677_18_fu_56956_p2 = (!zext_ln677_11_fu_56949_p1.read().is_01() || !zext_ln677_12_fu_56953_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_11_fu_56949_p1.read()) + sc_biguint<9>(zext_ln677_12_fu_56953_p1.read()));
}

void poly1305_hw::thread_add_ln677_19_fu_56966_p2() {
    add_ln677_19_fu_56966_p2 = (!zext_ln677_9_fu_56946_p1.read().is_01() || !zext_ln677_13_fu_56962_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_9_fu_56946_p1.read()) + sc_biguint<10>(zext_ln677_13_fu_56962_p1.read()));
}

void poly1305_hw::thread_add_ln677_1_fu_56348_p2() {
    add_ln677_1_fu_56348_p2 = (!zext_ln677_fu_56326_p1.read().is_01() || !zext_ln677_3_fu_56344_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_fu_56326_p1.read()) + sc_biguint<10>(zext_ln677_3_fu_56344_p1.read()));
}

void poly1305_hw::thread_add_ln677_20_fu_57032_p2() {
    add_ln677_20_fu_57032_p2 = (!zext_ln677_16_fu_57025_p1.read().is_01() || !zext_ln677_17_fu_57028_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_16_fu_57025_p1.read()) + sc_biguint<9>(zext_ln677_17_fu_57028_p1.read()));
}

void poly1305_hw::thread_add_ln677_21_fu_57042_p2() {
    add_ln677_21_fu_57042_p2 = (!zext_ln677_14_fu_57022_p1.read().is_01() || !zext_ln677_18_fu_57038_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_14_fu_57022_p1.read()) + sc_biguint<10>(zext_ln677_18_fu_57038_p1.read()));
}

void poly1305_hw::thread_add_ln677_22_fu_57142_p2() {
    add_ln677_22_fu_57142_p2 = (!zext_ln677_21_fu_57136_p1.read().is_01() || !zext_ln677_22_fu_57139_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_21_fu_57136_p1.read()) + sc_biguint<9>(zext_ln677_22_fu_57139_p1.read()));
}

void poly1305_hw::thread_add_ln677_23_fu_57152_p2() {
    add_ln677_23_fu_57152_p2 = (!zext_ln677_19_fu_57133_p1.read().is_01() || !zext_ln677_23_fu_57148_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_19_fu_57133_p1.read()) + sc_biguint<10>(zext_ln677_23_fu_57148_p1.read()));
}

void poly1305_hw::thread_add_ln677_24_fu_57217_p2() {
    add_ln677_24_fu_57217_p2 = (!zext_ln677_26_fu_57210_p1.read().is_01() || !zext_ln677_27_fu_57213_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_26_fu_57210_p1.read()) + sc_biguint<9>(zext_ln677_27_fu_57213_p1.read()));
}

void poly1305_hw::thread_add_ln677_25_fu_57227_p2() {
    add_ln677_25_fu_57227_p2 = (!zext_ln677_24_fu_57207_p1.read().is_01() || !zext_ln677_29_fu_57223_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_24_fu_57207_p1.read()) + sc_biguint<10>(zext_ln677_29_fu_57223_p1.read()));
}

void poly1305_hw::thread_add_ln677_26_fu_57327_p2() {
    add_ln677_26_fu_57327_p2 = (!zext_ln677_33_fu_57321_p1.read().is_01() || !zext_ln677_35_fu_57324_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_33_fu_57321_p1.read()) + sc_biguint<9>(zext_ln677_35_fu_57324_p1.read()));
}

void poly1305_hw::thread_add_ln677_27_fu_57337_p2() {
    add_ln677_27_fu_57337_p2 = (!zext_ln677_31_fu_57318_p1.read().is_01() || !zext_ln677_37_fu_57333_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_31_fu_57318_p1.read()) + sc_biguint<10>(zext_ln677_37_fu_57333_p1.read()));
}

void poly1305_hw::thread_add_ln677_28_fu_57402_p2() {
    add_ln677_28_fu_57402_p2 = (!zext_ln677_41_fu_57395_p1.read().is_01() || !zext_ln677_43_fu_57398_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_41_fu_57395_p1.read()) + sc_biguint<9>(zext_ln677_43_fu_57398_p1.read()));
}

void poly1305_hw::thread_add_ln677_29_fu_57412_p2() {
    add_ln677_29_fu_57412_p2 = (!zext_ln677_39_fu_57392_p1.read().is_01() || !zext_ln677_45_fu_57408_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_39_fu_57392_p1.read()) + sc_biguint<10>(zext_ln677_45_fu_57408_p1.read()));
}

void poly1305_hw::thread_add_ln677_2_fu_56431_p2() {
    add_ln677_2_fu_56431_p2 = (!ap_const_lv5_2.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_2) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_30_fu_57512_p2() {
    add_ln677_30_fu_57512_p2 = (!zext_ln677_49_fu_57506_p1.read().is_01() || !zext_ln677_50_fu_57509_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_49_fu_57506_p1.read()) + sc_biguint<9>(zext_ln677_50_fu_57509_p1.read()));
}

void poly1305_hw::thread_add_ln677_31_fu_57522_p2() {
    add_ln677_31_fu_57522_p2 = (!zext_ln677_47_fu_57503_p1.read().is_01() || !zext_ln677_51_fu_57518_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_47_fu_57503_p1.read()) + sc_biguint<10>(zext_ln677_51_fu_57518_p1.read()));
}

void poly1305_hw::thread_add_ln677_32_fu_57587_p2() {
    add_ln677_32_fu_57587_p2 = (!zext_ln677_53_fu_57580_p1.read().is_01() || !zext_ln677_54_fu_57583_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_53_fu_57580_p1.read()) + sc_biguint<9>(zext_ln677_54_fu_57583_p1.read()));
}

void poly1305_hw::thread_add_ln677_33_fu_57597_p2() {
    add_ln677_33_fu_57597_p2 = (!zext_ln677_52_fu_57577_p1.read().is_01() || !zext_ln677_55_fu_57593_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_52_fu_57577_p1.read()) + sc_biguint<10>(zext_ln677_55_fu_57593_p1.read()));
}

void poly1305_hw::thread_add_ln677_34_fu_57697_p2() {
    add_ln677_34_fu_57697_p2 = (!zext_ln677_57_fu_57691_p1.read().is_01() || !zext_ln677_58_fu_57694_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_57_fu_57691_p1.read()) + sc_biguint<9>(zext_ln677_58_fu_57694_p1.read()));
}

void poly1305_hw::thread_add_ln677_35_fu_57707_p2() {
    add_ln677_35_fu_57707_p2 = (!zext_ln677_56_fu_57688_p1.read().is_01() || !zext_ln677_59_fu_57703_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_56_fu_57688_p1.read()) + sc_biguint<10>(zext_ln677_59_fu_57703_p1.read()));
}

void poly1305_hw::thread_add_ln677_36_fu_57772_p2() {
    add_ln677_36_fu_57772_p2 = (!zext_ln677_61_fu_57765_p1.read().is_01() || !zext_ln677_62_fu_57768_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_61_fu_57765_p1.read()) + sc_biguint<9>(zext_ln677_62_fu_57768_p1.read()));
}

void poly1305_hw::thread_add_ln677_37_fu_57782_p2() {
    add_ln677_37_fu_57782_p2 = (!zext_ln677_60_fu_57762_p1.read().is_01() || !zext_ln677_63_fu_57778_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_60_fu_57762_p1.read()) + sc_biguint<10>(zext_ln677_63_fu_57778_p1.read()));
}

void poly1305_hw::thread_add_ln677_38_fu_57882_p2() {
    add_ln677_38_fu_57882_p2 = (!zext_ln677_65_fu_57876_p1.read().is_01() || !zext_ln677_66_fu_57879_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_65_fu_57876_p1.read()) + sc_biguint<9>(zext_ln677_66_fu_57879_p1.read()));
}

void poly1305_hw::thread_add_ln677_39_fu_57892_p2() {
    add_ln677_39_fu_57892_p2 = (!zext_ln677_64_fu_57873_p1.read().is_01() || !zext_ln677_67_fu_57888_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_64_fu_57873_p1.read()) + sc_biguint<10>(zext_ln677_67_fu_57888_p1.read()));
}

void poly1305_hw::thread_add_ln677_3_fu_56442_p2() {
    add_ln677_3_fu_56442_p2 = (!ap_const_lv5_3.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_3) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_40_fu_58003_p2() {
    add_ln677_40_fu_58003_p2 = (!zext_ln677_69_fu_57997_p1.read().is_01() || !zext_ln677_70_fu_58000_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_69_fu_57997_p1.read()) + sc_biguint<9>(zext_ln677_70_fu_58000_p1.read()));
}

void poly1305_hw::thread_add_ln677_41_fu_58013_p2() {
    add_ln677_41_fu_58013_p2 = (!zext_ln677_68_fu_57994_p1.read().is_01() || !zext_ln677_71_fu_58009_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_68_fu_57994_p1.read()) + sc_biguint<10>(zext_ln677_71_fu_58009_p1.read()));
}

void poly1305_hw::thread_add_ln677_42_fu_58079_p2() {
    add_ln677_42_fu_58079_p2 = (!zext_ln677_73_fu_58071_p1.read().is_01() || !zext_ln677_74_fu_58075_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_73_fu_58071_p1.read()) + sc_biguint<9>(zext_ln677_74_fu_58075_p1.read()));
}

void poly1305_hw::thread_add_ln677_43_fu_58089_p2() {
    add_ln677_43_fu_58089_p2 = (!zext_ln677_72_fu_58068_p1.read().is_01() || !zext_ln677_75_fu_58085_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_72_fu_58068_p1.read()) + sc_biguint<10>(zext_ln677_75_fu_58085_p1.read()));
}

void poly1305_hw::thread_add_ln677_44_fu_58191_p2() {
    add_ln677_44_fu_58191_p2 = (!zext_ln677_77_fu_58185_p1.read().is_01() || !zext_ln677_78_fu_58188_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_77_fu_58185_p1.read()) + sc_biguint<9>(zext_ln677_78_fu_58188_p1.read()));
}

void poly1305_hw::thread_add_ln677_45_fu_58201_p2() {
    add_ln677_45_fu_58201_p2 = (!zext_ln677_76_fu_58182_p1.read().is_01() || !zext_ln677_79_fu_58197_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_76_fu_58182_p1.read()) + sc_biguint<10>(zext_ln677_79_fu_58197_p1.read()));
}

void poly1305_hw::thread_add_ln677_46_fu_58323_p2() {
    add_ln677_46_fu_58323_p2 = (!zext_ln677_82_fu_58319_p1.read().is_01() || !zext_ln677_81_fu_58315_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_82_fu_58319_p1.read()) + sc_biguint<9>(zext_ln677_81_fu_58315_p1.read()));
}

void poly1305_hw::thread_add_ln677_47_fu_58333_p2() {
    add_ln677_47_fu_58333_p2 = (!zext_ln677_83_fu_58329_p1.read().is_01() || !zext_ln677_80_fu_58311_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln677_83_fu_58329_p1.read()) + sc_biguint<10>(zext_ln677_80_fu_58311_p1.read()));
}

void poly1305_hw::thread_add_ln677_4_fu_56498_p2() {
    add_ln677_4_fu_56498_p2 = (!ap_const_lv5_4.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_4) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_5_fu_56509_p2() {
    add_ln677_5_fu_56509_p2 = (!ap_const_lv5_5.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_5) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_6_fu_56558_p2() {
    add_ln677_6_fu_56558_p2 = (!ap_const_lv5_6.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_6) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_7_fu_56569_p2() {
    add_ln677_7_fu_56569_p2 = (!ap_const_lv5_7.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_7) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_8_fu_56618_p2() {
    add_ln677_8_fu_56618_p2 = (!ap_const_lv5_8.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_8) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_9_fu_56629_p2() {
    add_ln677_9_fu_56629_p2 = (!ap_const_lv5_9.is_01() || !i87_0_reg_12421.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_9) + sc_biguint<5>(i87_0_reg_12421.read()));
}

void poly1305_hw::thread_add_ln677_fu_56338_p2() {
    add_ln677_fu_56338_p2 = (!zext_ln677_1_fu_56330_p1.read().is_01() || !zext_ln677_2_fu_56334_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln677_1_fu_56330_p1.read()) + sc_biguint<9>(zext_ln677_2_fu_56334_p1.read()));
}

void poly1305_hw::thread_add_ln684_10_fu_57756_p2() {
    add_ln684_10_fu_57756_p2 = (!mul_load_11_reg_109343.read().is_01() || !add_ln684_27_fu_57751_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_11_reg_109343.read()) + sc_biguint<8>(add_ln684_27_fu_57751_p2.read()));
}

void poly1305_hw::thread_add_ln684_11_fu_57827_p2() {
    add_ln684_11_fu_57827_p2 = (!mul_load_12_reg_109349.read().is_01() || !add_ln684_28_fu_57822_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_12_reg_109349.read()) + sc_biguint<8>(add_ln684_28_fu_57822_p2.read()));
}

void poly1305_hw::thread_add_ln684_12_fu_57937_p2() {
    add_ln684_12_fu_57937_p2 = (!mul_load_13_reg_109378.read().is_01() || !add_ln684_29_fu_57932_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_13_reg_109378.read()) + sc_biguint<8>(add_ln684_29_fu_57932_p2.read()));
}

void poly1305_hw::thread_add_ln684_13_fu_58062_p2() {
    add_ln684_13_fu_58062_p2 = (!mul_load_14_reg_109384.read().is_01() || !add_ln684_30_fu_58057_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_14_reg_109384.read()) + sc_biguint<8>(add_ln684_30_fu_58057_p2.read()));
}

void poly1305_hw::thread_add_ln684_14_fu_58134_p2() {
    add_ln684_14_fu_58134_p2 = (!reg_21652.read().is_01() || !add_ln684_31_fu_58129_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_21652.read()) + sc_biguint<8>(add_ln684_31_fu_58129_p2.read()));
}

void poly1305_hw::thread_add_ln684_15_fu_58250_p2() {
    add_ln684_15_fu_58250_p2 = (!mul_load_16_reg_109424.read().is_01() || !add_ln684_32_fu_58245_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_16_reg_109424.read()) + sc_biguint<8>(add_ln684_32_fu_58245_p2.read()));
}

void poly1305_hw::thread_add_ln684_16_fu_58379_p2() {
    add_ln684_16_fu_58379_p2 = (!add_ln684_33_fu_58373_p2.read().is_01() || !reg_21656.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln684_33_fu_58373_p2.read()) + sc_biguint<8>(reg_21656.read()));
}

void poly1305_hw::thread_add_ln684_17_fu_56388_p2() {
    add_ln684_17_fu_56388_p2 = (!trunc_ln665_fu_56288_p1.read().is_01() || !zext_ln660_1_fu_56276_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_fu_56288_p1.read()) + sc_biguint<8>(zext_ln660_1_fu_56276_p1.read()));
}

void poly1305_hw::thread_add_ln684_18_fu_56883_p2() {
    add_ln684_18_fu_56883_p2 = (!trunc_ln665_1_reg_109170.read().is_01() || !zext_ln678_fu_56820_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_1_reg_109170.read()) + sc_biguint<8>(zext_ln678_fu_56820_p1.read()));
}

void poly1305_hw::thread_add_ln684_19_fu_57010_p2() {
    add_ln684_19_fu_57010_p2 = (!trunc_ln665_2_reg_109198.read().is_01() || !zext_ln678_1_fu_56943_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_2_reg_109198.read()) + sc_biguint<8>(zext_ln678_1_fu_56943_p1.read()));
}

void poly1305_hw::thread_add_ln684_1_fu_56888_p2() {
    add_ln684_1_fu_56888_p2 = (!reg_21652.read().is_01() || !add_ln684_18_fu_56883_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_21652.read()) + sc_biguint<8>(add_ln684_18_fu_56883_p2.read()));
}

void poly1305_hw::thread_add_ln684_20_fu_57082_p2() {
    add_ln684_20_fu_57082_p2 = (!trunc_ln665_3_reg_109227.read().is_01() || !zext_ln678_2_fu_57006_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_3_reg_109227.read()) + sc_biguint<8>(zext_ln678_2_fu_57006_p1.read()));
}

void poly1305_hw::thread_add_ln684_21_fu_57196_p2() {
    add_ln684_21_fu_57196_p2 = (!trunc_ln665_4_reg_109262.read().is_01() || !zext_ln678_3_fu_57130_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_4_reg_109262.read()) + sc_biguint<8>(zext_ln678_3_fu_57130_p1.read()));
}

void poly1305_hw::thread_add_ln684_22_fu_57267_p2() {
    add_ln684_22_fu_57267_p2 = (!trunc_ln665_5_reg_109297.read().is_01() || !zext_ln678_4_fu_57192_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_5_reg_109297.read()) + sc_biguint<8>(zext_ln678_4_fu_57192_p1.read()));
}

void poly1305_hw::thread_add_ln684_23_fu_57381_p2() {
    add_ln684_23_fu_57381_p2 = (!trunc_ln665_6_reg_109332.read().is_01() || !zext_ln678_5_fu_57315_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_6_reg_109332.read()) + sc_biguint<8>(zext_ln678_5_fu_57315_p1.read()));
}

void poly1305_hw::thread_add_ln684_24_fu_57452_p2() {
    add_ln684_24_fu_57452_p2 = (!trunc_ln665_7_reg_109367.read().is_01() || !zext_ln678_6_fu_57377_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_7_reg_109367.read()) + sc_biguint<8>(zext_ln678_6_fu_57377_p1.read()));
}

void poly1305_hw::thread_add_ln684_25_fu_57566_p2() {
    add_ln684_25_fu_57566_p2 = (!trunc_ln665_8_reg_109413.read().is_01() || !zext_ln678_7_fu_57500_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_8_reg_109413.read()) + sc_biguint<8>(zext_ln678_7_fu_57500_p1.read()));
}

void poly1305_hw::thread_add_ln684_26_fu_57637_p2() {
    add_ln684_26_fu_57637_p2 = (!trunc_ln665_9_reg_109447.read().is_01() || !zext_ln678_8_fu_57562_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_9_reg_109447.read()) + sc_biguint<8>(zext_ln678_8_fu_57562_p1.read()));
}

void poly1305_hw::thread_add_ln684_27_fu_57751_p2() {
    add_ln684_27_fu_57751_p2 = (!trunc_ln665_10_reg_109469.read().is_01() || !zext_ln678_9_fu_57685_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_10_reg_109469.read()) + sc_biguint<8>(zext_ln678_9_fu_57685_p1.read()));
}

void poly1305_hw::thread_add_ln684_28_fu_57822_p2() {
    add_ln684_28_fu_57822_p2 = (!trunc_ln665_11_reg_109491.read().is_01() || !zext_ln678_10_fu_57747_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_11_reg_109491.read()) + sc_biguint<8>(zext_ln678_10_fu_57747_p1.read()));
}

void poly1305_hw::thread_add_ln684_29_fu_57932_p2() {
    add_ln684_29_fu_57932_p2 = (!trunc_ln665_12_reg_109513.read().is_01() || !zext_ln678_11_fu_57870_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_12_reg_109513.read()) + sc_biguint<8>(zext_ln678_11_fu_57870_p1.read()));
}

void poly1305_hw::thread_add_ln684_2_fu_57015_p2() {
    add_ln684_2_fu_57015_p2 = (!reg_21656.read().is_01() || !add_ln684_19_fu_57010_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_21656.read()) + sc_biguint<8>(add_ln684_19_fu_57010_p2.read()));
}

void poly1305_hw::thread_add_ln684_30_fu_58057_p2() {
    add_ln684_30_fu_58057_p2 = (!trunc_ln665_13_reg_109535.read().is_01() || !zext_ln678_12_fu_57991_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_13_reg_109535.read()) + sc_biguint<8>(zext_ln678_12_fu_57991_p1.read()));
}

void poly1305_hw::thread_add_ln684_31_fu_58129_p2() {
    add_ln684_31_fu_58129_p2 = (!trunc_ln665_14_reg_109552.read().is_01() || !zext_ln678_13_fu_58053_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_14_reg_109552.read()) + sc_biguint<8>(zext_ln678_13_fu_58053_p1.read()));
}

void poly1305_hw::thread_add_ln684_32_fu_58245_p2() {
    add_ln684_32_fu_58245_p2 = (!trunc_ln665_15_reg_109579.read().is_01() || !zext_ln678_14_fu_58179_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln665_15_reg_109579.read()) + sc_biguint<8>(zext_ln678_14_fu_58179_p1.read()));
}

void poly1305_hw::thread_add_ln684_33_fu_58373_p2() {
    add_ln684_33_fu_58373_p2 = (!zext_ln678_15_fu_58241_p1.read().is_01() || !trunc_ln665_16_fu_58259_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln678_15_fu_58241_p1.read()) + sc_biguint<8>(trunc_ln665_16_fu_58259_p1.read()));
}

void poly1305_hw::thread_add_ln684_3_fu_57087_p2() {
    add_ln684_3_fu_57087_p2 = (!mul_load_4_reg_109209.read().is_01() || !add_ln684_20_fu_57082_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_4_reg_109209.read()) + sc_biguint<8>(add_ln684_20_fu_57082_p2.read()));
}

void poly1305_hw::thread_add_ln684_4_fu_57201_p2() {
    add_ln684_4_fu_57201_p2 = (!mul_load_5_reg_109238.read().is_01() || !add_ln684_21_fu_57196_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_5_reg_109238.read()) + sc_biguint<8>(add_ln684_21_fu_57196_p2.read()));
}

void poly1305_hw::thread_add_ln684_5_fu_57272_p2() {
    add_ln684_5_fu_57272_p2 = (!mul_load_6_reg_109244.read().is_01() || !add_ln684_22_fu_57267_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_6_reg_109244.read()) + sc_biguint<8>(add_ln684_22_fu_57267_p2.read()));
}

void poly1305_hw::thread_add_ln684_6_fu_57386_p2() {
    add_ln684_6_fu_57386_p2 = (!mul_load_7_reg_109273.read().is_01() || !add_ln684_23_fu_57381_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_7_reg_109273.read()) + sc_biguint<8>(add_ln684_23_fu_57381_p2.read()));
}

void poly1305_hw::thread_add_ln684_7_fu_57457_p2() {
    add_ln684_7_fu_57457_p2 = (!mul_load_8_reg_109279.read().is_01() || !add_ln684_24_fu_57452_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_8_reg_109279.read()) + sc_biguint<8>(add_ln684_24_fu_57452_p2.read()));
}

void poly1305_hw::thread_add_ln684_8_fu_57571_p2() {
    add_ln684_8_fu_57571_p2 = (!mul_load_9_reg_109308.read().is_01() || !add_ln684_25_fu_57566_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_9_reg_109308.read()) + sc_biguint<8>(add_ln684_25_fu_57566_p2.read()));
}

void poly1305_hw::thread_add_ln684_9_fu_57642_p2() {
    add_ln684_9_fu_57642_p2 = (!mul_load_10_reg_109314.read().is_01() || !add_ln684_26_fu_57637_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_load_10_reg_109314.read()) + sc_biguint<8>(add_ln684_26_fu_57637_p2.read()));
}

void poly1305_hw::thread_add_ln684_fu_56394_p2() {
    add_ln684_fu_56394_p2 = (!mul_q0.read().is_01() || !add_ln684_17_fu_56388_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_q0.read()) + sc_biguint<8>(add_ln684_17_fu_56388_p2.read()));
}

void poly1305_hw::thread_add_ln687_1_fu_58402_p2() {
    add_ln687_1_fu_58402_p2 = (!mul_q0.read().is_01() || !zext_ln678_16_reg_109605.read().is_01())? sc_lv<8>(): (sc_biguint<8>(mul_q0.read()) + sc_biguint<8>(zext_ln678_16_reg_109605.read()));
}

void poly1305_hw::thread_add_ln740_fu_61137_p2() {
    add_ln740_fu_61137_p2 = (!arr1_2_load_1_reg_110317.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_2_load_1_reg_110317.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln758_10_fu_60222_p2() {
    add_ln758_10_fu_60222_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_56_fu_60149_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_56_fu_60149_p1.read()));
}

void poly1305_hw::thread_add_ln758_11_fu_60352_p2() {
    add_ln758_11_fu_60352_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_60_fu_60301_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_60_fu_60301_p1.read()));
}

void poly1305_hw::thread_add_ln758_12_fu_60477_p2() {
    add_ln758_12_fu_60477_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_64_fu_60400_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_64_fu_60400_p1.read()));
}

void poly1305_hw::thread_add_ln758_13_fu_60603_p2() {
    add_ln758_13_fu_60603_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_68_fu_60531_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_68_fu_60531_p1.read()));
}

void poly1305_hw::thread_add_ln758_14_fu_60684_p2() {
    add_ln758_14_fu_60684_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_72_fu_60651_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_72_fu_60651_p1.read()));
}

void poly1305_hw::thread_add_ln758_15_fu_60880_p2() {
    add_ln758_15_fu_60880_p2 = (!zext_ln771_76_fu_60780_p1.read().is_01() || !sext_ln758_3_fu_60868_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(zext_ln771_76_fu_60780_p1.read()) + sc_bigint<26>(sext_ln758_3_fu_60868_p1.read()));
}

void poly1305_hw::thread_add_ln758_1_fu_58984_p2() {
    add_ln758_1_fu_58984_p2 = (!sext_ln758_1_fu_58864_p1.read().is_01() || !zext_ln771_4_fu_58911_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_fu_58864_p1.read()) + sc_biguint<26>(zext_ln771_4_fu_58911_p1.read()));
}

void poly1305_hw::thread_add_ln758_2_fu_59135_p2() {
    add_ln758_2_fu_59135_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_9_fu_59084_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_9_fu_59084_p1.read()));
}

void poly1305_hw::thread_add_ln758_3_fu_59292_p2() {
    add_ln758_3_fu_59292_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_14_fu_59288_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_14_fu_59288_p1.read()));
}

void poly1305_hw::thread_add_ln758_4_fu_59408_p2() {
    add_ln758_4_fu_59408_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_19_fu_59335_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_19_fu_59335_p1.read()));
}

void poly1305_hw::thread_add_ln758_5_fu_59562_p2() {
    add_ln758_5_fu_59562_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_36_fu_59511_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_36_fu_59511_p1.read()));
}

void poly1305_hw::thread_add_ln758_6_fu_59720_p2() {
    add_ln758_6_fu_59720_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_40_fu_59716_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_40_fu_59716_p1.read()));
}

void poly1305_hw::thread_add_ln758_7_fu_59836_p2() {
    add_ln758_7_fu_59836_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_44_fu_59763_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_44_fu_59763_p1.read()));
}

void poly1305_hw::thread_add_ln758_8_fu_59970_p2() {
    add_ln758_8_fu_59970_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_48_fu_59919_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_48_fu_59919_p1.read()));
}

void poly1305_hw::thread_add_ln758_9_fu_60106_p2() {
    add_ln758_9_fu_60106_p2 = (!sext_ln758_1_reg_109895.read().is_01() || !zext_ln771_52_fu_60102_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln758_1_reg_109895.read()) + sc_biguint<26>(zext_ln771_52_fu_60102_p1.read()));
}

void poly1305_hw::thread_add_ln758_fu_58867_p2() {
    add_ln758_fu_58867_p2 = (!zext_ln771_fu_58860_p1.read().is_01() || !sext_ln758_1_fu_58864_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(zext_ln771_fu_58860_p1.read()) + sc_bigint<26>(sext_ln758_1_fu_58864_p1.read()));
}

void poly1305_hw::thread_add_ln759_10_fu_60227_p2() {
    add_ln759_10_fu_60227_p2 = (!trunc_ln758_11_fu_60218_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_11_fu_60218_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_11_fu_60357_p2() {
    add_ln759_11_fu_60357_p2 = (!trunc_ln758_12_fu_60348_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_12_fu_60348_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_12_fu_60482_p2() {
    add_ln759_12_fu_60482_p2 = (!trunc_ln758_13_fu_60473_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_13_fu_60473_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_13_fu_60608_p2() {
    add_ln759_13_fu_60608_p2 = (!trunc_ln758_14_fu_60599_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_14_fu_60599_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_14_fu_60689_p2() {
    add_ln759_14_fu_60689_p2 = (!trunc_ln758_15_fu_60680_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_15_fu_60680_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_15_fu_60886_p2() {
    add_ln759_15_fu_60886_p2 = (!trunc_ln758_17_fu_60876_p1.read().is_01() || !trunc_ln758_16_fu_60872_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_17_fu_60876_p1.read()) + sc_biguint<8>(trunc_ln758_16_fu_60872_p1.read()));
}

void poly1305_hw::thread_add_ln759_1_fu_58990_p2() {
    add_ln759_1_fu_58990_p2 = (!trunc_ln758_2_fu_58980_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_2_fu_58980_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_2_fu_59140_p2() {
    add_ln759_2_fu_59140_p2 = (!trunc_ln758_3_fu_59131_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_3_fu_59131_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_3_fu_59252_p2() {
    add_ln759_3_fu_59252_p2 = (!trunc_ln758_4_fu_59248_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_4_fu_59248_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_4_fu_59413_p2() {
    add_ln759_4_fu_59413_p2 = (!trunc_ln758_5_fu_59404_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_5_fu_59404_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_5_fu_59567_p2() {
    add_ln759_5_fu_59567_p2 = (!trunc_ln758_6_fu_59558_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_6_fu_59558_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_6_fu_59679_p2() {
    add_ln759_6_fu_59679_p2 = (!trunc_ln758_7_fu_59675_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_7_fu_59675_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_7_fu_59841_p2() {
    add_ln759_7_fu_59841_p2 = (!trunc_ln758_8_fu_59832_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_8_fu_59832_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_8_fu_59975_p2() {
    add_ln759_8_fu_59975_p2 = (!trunc_ln758_9_fu_59966_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_9_fu_59966_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_9_fu_60086_p2() {
    add_ln759_9_fu_60086_p2 = (!trunc_ln758_10_fu_60082_p1.read().is_01() || !trunc_ln758_1_reg_109849.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_10_fu_60082_p1.read()) + sc_biguint<8>(trunc_ln758_1_reg_109849.read()));
}

void poly1305_hw::thread_add_ln759_fu_58823_p2() {
    add_ln759_fu_58823_p2 = (!trunc_ln758_1_fu_58819_p1.read().is_01() || !trunc_ln758_fu_58815_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln758_1_fu_58819_p1.read()) + sc_biguint<8>(trunc_ln758_fu_58815_p1.read()));
}

void poly1305_hw::thread_add_ln767_fu_60941_p2() {
    add_ln767_fu_60941_p2 = (!zext_ln754_reg_109737.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln754_reg_109737.read()) + sc_biguint<5>(ap_const_lv5_11));
}

void poly1305_hw::thread_add_ln76_10_fu_62411_p2() {
    add_ln76_10_fu_62411_p2 = (!select_ln76_4_fu_62398_p3.read().is_01() || !add_ln76_9_fu_62405_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_4_fu_62398_p3.read()) + sc_biguint<9>(add_ln76_9_fu_62405_p2.read()));
}

void poly1305_hw::thread_add_ln76_11_fu_62461_p2() {
    add_ln76_11_fu_62461_p2 = (!zext_ln76_13_fu_62449_p1.read().is_01() || !zext_ln76_12_fu_62445_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_13_fu_62449_p1.read()) + sc_biguint<9>(zext_ln76_12_fu_62445_p1.read()));
}

void poly1305_hw::thread_add_ln76_12_fu_62467_p2() {
    add_ln76_12_fu_62467_p2 = (!select_ln76_5_fu_62453_p3.read().is_01() || !add_ln76_11_fu_62461_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_5_fu_62453_p3.read()) + sc_biguint<9>(add_ln76_11_fu_62461_p2.read()));
}

void poly1305_hw::thread_add_ln76_13_fu_62781_p2() {
    add_ln76_13_fu_62781_p2 = (!zext_ln76_15_fu_62770_p1.read().is_01() || !zext_ln76_14_fu_62766_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_15_fu_62770_p1.read()) + sc_biguint<9>(zext_ln76_14_fu_62766_p1.read()));
}

void poly1305_hw::thread_add_ln76_14_fu_62787_p2() {
    add_ln76_14_fu_62787_p2 = (!select_ln76_6_fu_62774_p3.read().is_01() || !add_ln76_13_fu_62781_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_6_fu_62774_p3.read()) + sc_biguint<9>(add_ln76_13_fu_62781_p2.read()));
}

void poly1305_hw::thread_add_ln76_15_fu_62837_p2() {
    add_ln76_15_fu_62837_p2 = (!zext_ln76_17_fu_62825_p1.read().is_01() || !zext_ln76_16_fu_62821_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_17_fu_62825_p1.read()) + sc_biguint<9>(zext_ln76_16_fu_62821_p1.read()));
}

void poly1305_hw::thread_add_ln76_16_fu_62843_p2() {
    add_ln76_16_fu_62843_p2 = (!select_ln76_7_fu_62829_p3.read().is_01() || !add_ln76_15_fu_62837_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_7_fu_62829_p3.read()) + sc_biguint<9>(add_ln76_15_fu_62837_p2.read()));
}

void poly1305_hw::thread_add_ln76_17_fu_63157_p2() {
    add_ln76_17_fu_63157_p2 = (!zext_ln76_19_fu_63146_p1.read().is_01() || !zext_ln76_18_fu_63142_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_19_fu_63146_p1.read()) + sc_biguint<9>(zext_ln76_18_fu_63142_p1.read()));
}

void poly1305_hw::thread_add_ln76_18_fu_63163_p2() {
    add_ln76_18_fu_63163_p2 = (!select_ln76_8_fu_63150_p3.read().is_01() || !add_ln76_17_fu_63157_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_8_fu_63150_p3.read()) + sc_biguint<9>(add_ln76_17_fu_63157_p2.read()));
}

void poly1305_hw::thread_add_ln76_19_fu_63213_p2() {
    add_ln76_19_fu_63213_p2 = (!zext_ln76_21_fu_63201_p1.read().is_01() || !zext_ln76_20_fu_63197_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_21_fu_63201_p1.read()) + sc_biguint<9>(zext_ln76_20_fu_63197_p1.read()));
}

void poly1305_hw::thread_add_ln76_1_fu_61653_p2() {
    add_ln76_1_fu_61653_p2 = (!zext_ln76_3_fu_61642_p1.read().is_01() || !zext_ln76_2_fu_61638_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_3_fu_61642_p1.read()) + sc_biguint<9>(zext_ln76_2_fu_61638_p1.read()));
}

void poly1305_hw::thread_add_ln76_20_fu_63219_p2() {
    add_ln76_20_fu_63219_p2 = (!select_ln76_9_fu_63205_p3.read().is_01() || !add_ln76_19_fu_63213_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_9_fu_63205_p3.read()) + sc_biguint<9>(add_ln76_19_fu_63213_p2.read()));
}

void poly1305_hw::thread_add_ln76_21_fu_63533_p2() {
    add_ln76_21_fu_63533_p2 = (!zext_ln76_23_fu_63522_p1.read().is_01() || !zext_ln76_22_fu_63518_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_23_fu_63522_p1.read()) + sc_biguint<9>(zext_ln76_22_fu_63518_p1.read()));
}

void poly1305_hw::thread_add_ln76_22_fu_63539_p2() {
    add_ln76_22_fu_63539_p2 = (!select_ln76_10_fu_63526_p3.read().is_01() || !add_ln76_21_fu_63533_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_10_fu_63526_p3.read()) + sc_biguint<9>(add_ln76_21_fu_63533_p2.read()));
}

void poly1305_hw::thread_add_ln76_23_fu_63589_p2() {
    add_ln76_23_fu_63589_p2 = (!zext_ln76_25_fu_63577_p1.read().is_01() || !zext_ln76_24_fu_63573_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_25_fu_63577_p1.read()) + sc_biguint<9>(zext_ln76_24_fu_63573_p1.read()));
}

void poly1305_hw::thread_add_ln76_24_fu_63595_p2() {
    add_ln76_24_fu_63595_p2 = (!select_ln76_11_fu_63581_p3.read().is_01() || !add_ln76_23_fu_63589_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_11_fu_63581_p3.read()) + sc_biguint<9>(add_ln76_23_fu_63589_p2.read()));
}

void poly1305_hw::thread_add_ln76_25_fu_63909_p2() {
    add_ln76_25_fu_63909_p2 = (!zext_ln76_27_fu_63898_p1.read().is_01() || !zext_ln76_26_fu_63894_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_27_fu_63898_p1.read()) + sc_biguint<9>(zext_ln76_26_fu_63894_p1.read()));
}

void poly1305_hw::thread_add_ln76_26_fu_63915_p2() {
    add_ln76_26_fu_63915_p2 = (!select_ln76_12_fu_63902_p3.read().is_01() || !add_ln76_25_fu_63909_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_12_fu_63902_p3.read()) + sc_biguint<9>(add_ln76_25_fu_63909_p2.read()));
}

void poly1305_hw::thread_add_ln76_27_fu_63965_p2() {
    add_ln76_27_fu_63965_p2 = (!zext_ln76_29_fu_63953_p1.read().is_01() || !zext_ln76_28_fu_63949_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_29_fu_63953_p1.read()) + sc_biguint<9>(zext_ln76_28_fu_63949_p1.read()));
}

void poly1305_hw::thread_add_ln76_28_fu_63971_p2() {
    add_ln76_28_fu_63971_p2 = (!select_ln76_13_fu_63957_p3.read().is_01() || !add_ln76_27_fu_63965_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_13_fu_63957_p3.read()) + sc_biguint<9>(add_ln76_27_fu_63965_p2.read()));
}

void poly1305_hw::thread_add_ln76_29_fu_64167_p2() {
    add_ln76_29_fu_64167_p2 = (!zext_ln76_31_fu_64156_p1.read().is_01() || !zext_ln76_30_fu_64152_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_31_fu_64156_p1.read()) + sc_biguint<9>(zext_ln76_30_fu_64152_p1.read()));
}

void poly1305_hw::thread_add_ln76_2_fu_61659_p2() {
    add_ln76_2_fu_61659_p2 = (!select_ln76_fu_61646_p3.read().is_01() || !add_ln76_1_fu_61653_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_fu_61646_p3.read()) + sc_biguint<9>(add_ln76_1_fu_61653_p2.read()));
}

void poly1305_hw::thread_add_ln76_30_fu_64173_p2() {
    add_ln76_30_fu_64173_p2 = (!select_ln76_14_fu_64160_p3.read().is_01() || !add_ln76_29_fu_64167_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_14_fu_64160_p3.read()) + sc_biguint<9>(add_ln76_29_fu_64167_p2.read()));
}

void poly1305_hw::thread_add_ln76_3_fu_61709_p2() {
    add_ln76_3_fu_61709_p2 = (!zext_ln76_5_fu_61697_p1.read().is_01() || !zext_ln76_4_fu_61693_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_5_fu_61697_p1.read()) + sc_biguint<9>(zext_ln76_4_fu_61693_p1.read()));
}

void poly1305_hw::thread_add_ln76_4_fu_61715_p2() {
    add_ln76_4_fu_61715_p2 = (!select_ln76_1_fu_61701_p3.read().is_01() || !add_ln76_3_fu_61709_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_1_fu_61701_p3.read()) + sc_biguint<9>(add_ln76_3_fu_61709_p2.read()));
}

void poly1305_hw::thread_add_ln76_5_fu_62029_p2() {
    add_ln76_5_fu_62029_p2 = (!zext_ln76_7_fu_62018_p1.read().is_01() || !zext_ln76_6_fu_62014_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_7_fu_62018_p1.read()) + sc_biguint<9>(zext_ln76_6_fu_62014_p1.read()));
}

void poly1305_hw::thread_add_ln76_6_fu_62035_p2() {
    add_ln76_6_fu_62035_p2 = (!select_ln76_2_fu_62022_p3.read().is_01() || !add_ln76_5_fu_62029_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_2_fu_62022_p3.read()) + sc_biguint<9>(add_ln76_5_fu_62029_p2.read()));
}

void poly1305_hw::thread_add_ln76_7_fu_62085_p2() {
    add_ln76_7_fu_62085_p2 = (!zext_ln76_9_fu_62073_p1.read().is_01() || !zext_ln76_8_fu_62069_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_9_fu_62073_p1.read()) + sc_biguint<9>(zext_ln76_8_fu_62069_p1.read()));
}

void poly1305_hw::thread_add_ln76_8_fu_62091_p2() {
    add_ln76_8_fu_62091_p2 = (!select_ln76_3_fu_62077_p3.read().is_01() || !add_ln76_7_fu_62085_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(select_ln76_3_fu_62077_p3.read()) + sc_biguint<9>(add_ln76_7_fu_62085_p2.read()));
}

void poly1305_hw::thread_add_ln76_9_fu_62405_p2() {
    add_ln76_9_fu_62405_p2 = (!zext_ln76_11_fu_62394_p1.read().is_01() || !zext_ln76_10_fu_62390_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_11_fu_62394_p1.read()) + sc_biguint<9>(zext_ln76_10_fu_62390_p1.read()));
}

void poly1305_hw::thread_add_ln76_fu_61345_p2() {
    add_ln76_fu_61345_p2 = (!zext_ln76_1_fu_61341_p1.read().is_01() || !zext_ln76_fu_61337_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln76_1_fu_61341_p1.read()) + sc_biguint<9>(zext_ln76_fu_61337_p1.read()));
}

void poly1305_hw::thread_add_ln771_10_fu_59054_p2() {
    add_ln771_10_fu_59054_p2 = (!ap_const_lv5_A.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_11_fu_59064_p2() {
    add_ln771_11_fu_59064_p2 = (!ap_const_lv5_B.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_B) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_12_fu_59265_p2() {
    add_ln771_12_fu_59265_p2 = (!ap_const_lv5_C.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_13_fu_59275_p2() {
    add_ln771_13_fu_59275_p2 = (!ap_const_lv5_D.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_D) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_14_fu_59477_p2() {
    add_ln771_14_fu_59477_p2 = (!ap_const_lv5_E.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_E) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_15_fu_59487_p2() {
    add_ln771_15_fu_59487_p2 = (!ap_const_lv5_F.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_F) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_16_fu_58925_p2() {
    add_ln771_16_fu_58925_p2 = (!zext_ln771_7_fu_58918_p1.read().is_01() || !zext_ln771_5_fu_58915_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_7_fu_58918_p1.read()) + sc_biguint<9>(zext_ln771_5_fu_58915_p1.read()));
}

void poly1305_hw::thread_add_ln771_17_fu_58935_p2() {
    add_ln771_17_fu_58935_p2 = (!reg_21666.read().is_01() || !zext_ln771_8_fu_58931_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21666.read()) + sc_biguint<32>(zext_ln771_8_fu_58931_p1.read()));
}

void poly1305_hw::thread_add_ln771_18_fu_59035_p2() {
    add_ln771_18_fu_59035_p2 = (!zext_ln771_12_fu_59025_p1.read().is_01() || !zext_ln771_10_fu_59021_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_12_fu_59025_p1.read()) + sc_biguint<9>(zext_ln771_10_fu_59021_p1.read()));
}

void poly1305_hw::thread_add_ln771_19_fu_59091_p2() {
    add_ln771_19_fu_59091_p2 = (!reg_21670.read().is_01() || !zext_ln771_13_fu_59088_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21670.read()) + sc_biguint<32>(zext_ln771_13_fu_59088_p1.read()));
}

void poly1305_hw::thread_add_ln771_1_fu_58753_p2() {
    add_ln771_1_fu_58753_p2 = (!reg_21661.read().is_01() || !zext_ln771_3_fu_58749_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21661.read()) + sc_biguint<32>(zext_ln771_3_fu_58749_p1.read()));
}

void poly1305_hw::thread_add_ln771_20_fu_59193_p2() {
    add_ln771_20_fu_59193_p2 = (!zext_ln771_17_fu_59183_p1.read().is_01() || !zext_ln771_15_fu_59179_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_17_fu_59183_p1.read()) + sc_biguint<9>(zext_ln771_15_fu_59179_p1.read()));
}

void poly1305_hw::thread_add_ln771_21_fu_59203_p2() {
    add_ln771_21_fu_59203_p2 = (!reg_21674.read().is_01() || !zext_ln771_18_fu_59199_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21674.read()) + sc_biguint<32>(zext_ln771_18_fu_59199_p1.read()));
}

void poly1305_hw::thread_add_ln771_22_fu_59349_p2() {
    add_ln771_22_fu_59349_p2 = (!zext_ln771_34_fu_59342_p1.read().is_01() || !zext_ln771_33_fu_59339_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_34_fu_59342_p1.read()) + sc_biguint<9>(zext_ln771_33_fu_59339_p1.read()));
}

void poly1305_hw::thread_add_ln771_23_fu_59359_p2() {
    add_ln771_23_fu_59359_p2 = (!reg_21678.read().is_01() || !zext_ln771_35_fu_59355_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21678.read()) + sc_biguint<32>(zext_ln771_35_fu_59355_p1.read()));
}

void poly1305_hw::thread_add_ln771_24_fu_59458_p2() {
    add_ln771_24_fu_59458_p2 = (!zext_ln771_38_fu_59448_p1.read().is_01() || !zext_ln771_37_fu_59444_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_38_fu_59448_p1.read()) + sc_biguint<9>(zext_ln771_37_fu_59444_p1.read()));
}

void poly1305_hw::thread_add_ln771_25_fu_59518_p2() {
    add_ln771_25_fu_59518_p2 = (!reg_21682.read().is_01() || !zext_ln771_39_fu_59515_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21682.read()) + sc_biguint<32>(zext_ln771_39_fu_59515_p1.read()));
}

void poly1305_hw::thread_add_ln771_26_fu_59620_p2() {
    add_ln771_26_fu_59620_p2 = (!zext_ln771_42_fu_59610_p1.read().is_01() || !zext_ln771_41_fu_59606_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_42_fu_59610_p1.read()) + sc_biguint<9>(zext_ln771_41_fu_59606_p1.read()));
}

void poly1305_hw::thread_add_ln771_27_fu_59630_p2() {
    add_ln771_27_fu_59630_p2 = (!reg_21661.read().is_01() || !zext_ln771_43_fu_59626_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21661.read()) + sc_biguint<32>(zext_ln771_43_fu_59626_p1.read()));
}

void poly1305_hw::thread_add_ln771_28_fu_59777_p2() {
    add_ln771_28_fu_59777_p2 = (!zext_ln771_46_fu_59770_p1.read().is_01() || !zext_ln771_45_fu_59767_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_46_fu_59770_p1.read()) + sc_biguint<9>(zext_ln771_45_fu_59767_p1.read()));
}

void poly1305_hw::thread_add_ln771_29_fu_59787_p2() {
    add_ln771_29_fu_59787_p2 = (!reg_21686.read().is_01() || !zext_ln771_47_fu_59783_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21686.read()) + sc_biguint<32>(zext_ln771_47_fu_59783_p1.read()));
}

void poly1305_hw::thread_add_ln771_2_fu_58604_p2() {
    add_ln771_2_fu_58604_p2 = (!ap_const_lv5_2.is_01() || !zext_ln754_fu_58592_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_2) + sc_biguint<5>(zext_ln754_fu_58592_p1.read()));
}

void poly1305_hw::thread_add_ln771_30_fu_59886_p2() {
    add_ln771_30_fu_59886_p2 = (!zext_ln771_50_fu_59876_p1.read().is_01() || !zext_ln771_49_fu_59872_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_50_fu_59876_p1.read()) + sc_biguint<9>(zext_ln771_49_fu_59872_p1.read()));
}

void poly1305_hw::thread_add_ln771_31_fu_59926_p2() {
    add_ln771_31_fu_59926_p2 = (!reg_21666.read().is_01() || !zext_ln771_51_fu_59923_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21666.read()) + sc_biguint<32>(zext_ln771_51_fu_59923_p1.read()));
}

void poly1305_hw::thread_add_ln771_32_fu_60028_p2() {
    add_ln771_32_fu_60028_p2 = (!zext_ln771_54_fu_60018_p1.read().is_01() || !zext_ln771_53_fu_60014_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_54_fu_60018_p1.read()) + sc_biguint<9>(zext_ln771_53_fu_60014_p1.read()));
}

void poly1305_hw::thread_add_ln771_33_fu_60038_p2() {
    add_ln771_33_fu_60038_p2 = (!temp_2_load_10_reg_109942.read().is_01() || !zext_ln771_55_fu_60034_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_2_load_10_reg_109942.read()) + sc_biguint<32>(zext_ln771_55_fu_60034_p1.read()));
}

void poly1305_hw::thread_add_ln771_34_fu_60163_p2() {
    add_ln771_34_fu_60163_p2 = (!zext_ln771_58_fu_60156_p1.read().is_01() || !zext_ln771_57_fu_60153_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_58_fu_60156_p1.read()) + sc_biguint<9>(zext_ln771_57_fu_60153_p1.read()));
}

void poly1305_hw::thread_add_ln771_35_fu_60173_p2() {
    add_ln771_35_fu_60173_p2 = (!reg_21670.read().is_01() || !zext_ln771_59_fu_60169_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21670.read()) + sc_biguint<32>(zext_ln771_59_fu_60169_p1.read()));
}

void poly1305_hw::thread_add_ln771_36_fu_60272_p2() {
    add_ln771_36_fu_60272_p2 = (!zext_ln771_62_fu_60262_p1.read().is_01() || !zext_ln771_61_fu_60258_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_62_fu_60262_p1.read()) + sc_biguint<9>(zext_ln771_61_fu_60258_p1.read()));
}

void poly1305_hw::thread_add_ln771_37_fu_60308_p2() {
    add_ln771_37_fu_60308_p2 = (!reg_21674.read().is_01() || !zext_ln771_63_fu_60305_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21674.read()) + sc_biguint<32>(zext_ln771_63_fu_60305_p1.read()));
}

void poly1305_hw::thread_add_ln771_38_fu_60418_p2() {
    add_ln771_38_fu_60418_p2 = (!zext_ln771_66_fu_60408_p1.read().is_01() || !zext_ln771_65_fu_60404_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_66_fu_60408_p1.read()) + sc_biguint<9>(zext_ln771_65_fu_60404_p1.read()));
}

void poly1305_hw::thread_add_ln771_39_fu_60428_p2() {
    add_ln771_39_fu_60428_p2 = (!reg_21678.read().is_01() || !zext_ln771_67_fu_60424_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21678.read()) + sc_biguint<32>(zext_ln771_67_fu_60424_p1.read()));
}

void poly1305_hw::thread_add_ln771_3_fu_58615_p2() {
    add_ln771_3_fu_58615_p2 = (!ap_const_lv5_3.is_01() || !zext_ln754_fu_58592_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_3) + sc_biguint<5>(zext_ln754_fu_58592_p1.read()));
}

void poly1305_hw::thread_add_ln771_40_fu_60545_p2() {
    add_ln771_40_fu_60545_p2 = (!zext_ln771_70_fu_60538_p1.read().is_01() || !zext_ln771_69_fu_60535_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_70_fu_60538_p1.read()) + sc_biguint<9>(zext_ln771_69_fu_60535_p1.read()));
}

void poly1305_hw::thread_add_ln771_41_fu_60555_p2() {
    add_ln771_41_fu_60555_p2 = (!temp_2_load_14_reg_110036.read().is_01() || !zext_ln771_71_fu_60551_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_2_load_14_reg_110036.read()) + sc_biguint<32>(zext_ln771_71_fu_60551_p1.read()));
}

void poly1305_hw::thread_add_ln771_42_fu_60669_p2() {
    add_ln771_42_fu_60669_p2 = (!zext_ln771_74_fu_60659_p1.read().is_01() || !zext_ln771_73_fu_60655_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_74_fu_60659_p1.read()) + sc_biguint<9>(zext_ln771_73_fu_60655_p1.read()));
}

void poly1305_hw::thread_add_ln771_43_fu_60730_p2() {
    add_ln771_43_fu_60730_p2 = (!reg_21661.read().is_01() || !zext_ln771_75_fu_60727_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21661.read()) + sc_biguint<32>(zext_ln771_75_fu_60727_p1.read()));
}

void poly1305_hw::thread_add_ln771_44_fu_60796_p2() {
    add_ln771_44_fu_60796_p2 = (!zext_ln771_78_fu_60787_p1.read().is_01() || !zext_ln771_77_fu_60784_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_78_fu_60787_p1.read()) + sc_biguint<9>(zext_ln771_77_fu_60784_p1.read()));
}

void poly1305_hw::thread_add_ln771_45_fu_60806_p2() {
    add_ln771_45_fu_60806_p2 = (!reg_21682.read().is_01() || !zext_ln771_79_fu_60802_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21682.read()) + sc_biguint<32>(zext_ln771_79_fu_60802_p1.read()));
}

void poly1305_hw::thread_add_ln771_46_fu_60987_p2() {
    add_ln771_46_fu_60987_p2 = (!zext_ln771_81_fu_60984_p1.read().is_01() || !zext_ln771_80_fu_60981_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_81_fu_60984_p1.read()) + sc_biguint<9>(zext_ln771_80_fu_60981_p1.read()));
}

void poly1305_hw::thread_add_ln771_47_fu_60997_p2() {
    add_ln771_47_fu_60997_p2 = (!reg_21686.read().is_01() || !zext_ln771_82_fu_60993_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_21686.read()) + sc_biguint<32>(zext_ln771_82_fu_60993_p1.read()));
}

void poly1305_hw::thread_add_ln771_48_fu_58737_p2() {
    add_ln771_48_fu_58737_p2 = (!trunc_ln759_fu_58691_p1.read().is_01() || !addCarry80_6_reg_12525.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln759_fu_58691_p1.read()) + sc_biguint<8>(addCarry80_6_reg_12525.read()));
}

void poly1305_hw::thread_add_ln771_49_fu_58921_p2() {
    add_ln771_49_fu_58921_p2 = (!add_ln759_reg_109867.read().is_01() || !select_ln772_reg_109838.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_reg_109867.read()) + sc_biguint<8>(select_ln772_reg_109838.read()));
}

void poly1305_hw::thread_add_ln771_4_fu_58634_p2() {
    add_ln771_4_fu_58634_p2 = (!ap_const_lv5_4.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_4) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_50_fu_59029_p2() {
    add_ln771_50_fu_59029_p2 = (!add_ln759_1_fu_58990_p2.read().is_01() || !select_ln772_1_fu_58972_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_1_fu_58990_p2.read()) + sc_biguint<8>(select_ln772_1_fu_58972_p3.read()));
}

void poly1305_hw::thread_add_ln771_51_fu_59187_p2() {
    add_ln771_51_fu_59187_p2 = (!add_ln759_2_fu_59140_p2.read().is_01() || !select_ln772_2_fu_59123_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_2_fu_59140_p2.read()) + sc_biguint<8>(select_ln772_2_fu_59123_p3.read()));
}

void poly1305_hw::thread_add_ln771_52_fu_59345_p2() {
    add_ln771_52_fu_59345_p2 = (!add_ln759_3_reg_109980.read().is_01() || !select_ln772_3_reg_109974.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_3_reg_109980.read()) + sc_biguint<8>(select_ln772_3_reg_109974.read()));
}

void poly1305_hw::thread_add_ln771_53_fu_59452_p2() {
    add_ln771_53_fu_59452_p2 = (!add_ln759_4_fu_59413_p2.read().is_01() || !select_ln772_4_fu_59396_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_4_fu_59413_p2.read()) + sc_biguint<8>(select_ln772_4_fu_59396_p3.read()));
}

void poly1305_hw::thread_add_ln771_54_fu_59614_p2() {
    add_ln771_54_fu_59614_p2 = (!add_ln759_5_fu_59567_p2.read().is_01() || !select_ln772_5_fu_59550_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_5_fu_59567_p2.read()) + sc_biguint<8>(select_ln772_5_fu_59550_p3.read()));
}

void poly1305_hw::thread_add_ln771_55_fu_59773_p2() {
    add_ln771_55_fu_59773_p2 = (!add_ln759_6_reg_110072.read().is_01() || !select_ln772_6_reg_110066.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_6_reg_110072.read()) + sc_biguint<8>(select_ln772_6_reg_110066.read()));
}

void poly1305_hw::thread_add_ln771_56_fu_59880_p2() {
    add_ln771_56_fu_59880_p2 = (!add_ln759_7_fu_59841_p2.read().is_01() || !select_ln772_7_fu_59824_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_7_fu_59841_p2.read()) + sc_biguint<8>(select_ln772_7_fu_59824_p3.read()));
}

void poly1305_hw::thread_add_ln771_57_fu_60022_p2() {
    add_ln771_57_fu_60022_p2 = (!add_ln759_8_fu_59975_p2.read().is_01() || !select_ln772_8_fu_59958_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_8_fu_59975_p2.read()) + sc_biguint<8>(select_ln772_8_fu_59958_p3.read()));
}

void poly1305_hw::thread_add_ln771_58_fu_60159_p2() {
    add_ln771_58_fu_60159_p2 = (!add_ln759_9_reg_110140.read().is_01() || !select_ln772_9_reg_110134.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_9_reg_110140.read()) + sc_biguint<8>(select_ln772_9_reg_110134.read()));
}

void poly1305_hw::thread_add_ln771_59_fu_60266_p2() {
    add_ln771_59_fu_60266_p2 = (!add_ln759_10_fu_60227_p2.read().is_01() || !select_ln772_10_fu_60210_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_10_fu_60227_p2.read()) + sc_biguint<8>(select_ln772_10_fu_60210_p3.read()));
}

void poly1305_hw::thread_add_ln771_5_fu_58644_p2() {
    add_ln771_5_fu_58644_p2 = (!ap_const_lv5_5.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_5) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_60_fu_60412_p2() {
    add_ln771_60_fu_60412_p2 = (!add_ln759_11_fu_60357_p2.read().is_01() || !select_ln772_11_fu_60340_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_11_fu_60357_p2.read()) + sc_biguint<8>(select_ln772_11_fu_60340_p3.read()));
}

void poly1305_hw::thread_add_ln771_61_fu_60541_p2() {
    add_ln771_61_fu_60541_p2 = (!add_ln759_12_reg_110182.read().is_01() || !select_ln772_12_reg_110176.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_12_reg_110182.read()) + sc_biguint<8>(select_ln772_12_reg_110176.read()));
}

void poly1305_hw::thread_add_ln771_62_fu_60663_p2() {
    add_ln771_62_fu_60663_p2 = (!add_ln759_13_fu_60608_p2.read().is_01() || !select_ln772_13_fu_60591_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_13_fu_60608_p2.read()) + sc_biguint<8>(select_ln772_13_fu_60591_p3.read()));
}

void poly1305_hw::thread_add_ln771_63_fu_60791_p2() {
    add_ln771_63_fu_60791_p2 = (!add_ln759_14_reg_110213.read().is_01() || !select_ln772_14_fu_60762_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_14_reg_110213.read()) + sc_biguint<8>(select_ln772_14_fu_60762_p3.read()));
}

void poly1305_hw::thread_add_ln771_64_fu_60967_p2() {
    add_ln771_64_fu_60967_p2 = (!add_ln759_15_reg_110240.read().is_01() || !select_ln772_15_reg_110234.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln759_15_reg_110240.read()) + sc_biguint<8>(select_ln772_15_reg_110234.read()));
}

void poly1305_hw::thread_add_ln771_6_fu_58662_p2() {
    add_ln771_6_fu_58662_p2 = (!ap_const_lv5_6.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_6) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_7_fu_58672_p2() {
    add_ln771_7_fu_58672_p2 = (!ap_const_lv5_7.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_7) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_8_fu_58837_p2() {
    add_ln771_8_fu_58837_p2 = (!ap_const_lv5_8.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_8) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_9_fu_58847_p2() {
    add_ln771_9_fu_58847_p2 = (!ap_const_lv5_9.is_01() || !zext_ln754_reg_109737.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_9) + sc_biguint<5>(zext_ln754_reg_109737.read()));
}

void poly1305_hw::thread_add_ln771_fu_58743_p2() {
    add_ln771_fu_58743_p2 = (!zext_ln771_2_fu_58733_p1.read().is_01() || !zext_ln771_1_fu_58729_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln771_2_fu_58733_p1.read()) + sc_biguint<9>(zext_ln771_1_fu_58729_p1.read()));
}

void poly1305_hw::thread_add_ln772_10_fu_60179_p2() {
    add_ln772_10_fu_60179_p2 = (!add_ln771_58_fu_60159_p2.read().is_01() || !trunc_ln771_10_reg_109986.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_58_fu_60159_p2.read()) + sc_biguint<8>(trunc_ln771_10_reg_109986.read()));
}

void poly1305_hw::thread_add_ln772_11_fu_60278_p2() {
    add_ln772_11_fu_60278_p2 = (!add_ln771_59_fu_60266_p2.read().is_01() || !trunc_ln771_11_reg_109991.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_59_fu_60266_p2.read()) + sc_biguint<8>(trunc_ln771_11_reg_109991.read()));
}

void poly1305_hw::thread_add_ln772_12_fu_60434_p2() {
    add_ln772_12_fu_60434_p2 = (!add_ln771_60_fu_60412_p2.read().is_01() || !trunc_ln771_12_reg_110031.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_60_fu_60412_p2.read()) + sc_biguint<8>(trunc_ln771_12_reg_110031.read()));
}

void poly1305_hw::thread_add_ln772_13_fu_60560_p2() {
    add_ln772_13_fu_60560_p2 = (!add_ln771_61_fu_60541_p2.read().is_01() || !trunc_ln771_13_reg_110041.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_61_fu_60541_p2.read()) + sc_biguint<8>(trunc_ln771_13_reg_110041.read()));
}

void poly1305_hw::thread_add_ln772_14_fu_60675_p2() {
    add_ln772_14_fu_60675_p2 = (!add_ln771_62_fu_60663_p2.read().is_01() || !trunc_ln771_14_reg_110078.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_62_fu_60663_p2.read()) + sc_biguint<8>(trunc_ln771_14_reg_110078.read()));
}

void poly1305_hw::thread_add_ln772_15_fu_60812_p2() {
    add_ln772_15_fu_60812_p2 = (!add_ln771_63_fu_60791_p2.read().is_01() || !trunc_ln771_15_reg_110083.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_63_fu_60791_p2.read()) + sc_biguint<8>(trunc_ln771_15_reg_110083.read()));
}

void poly1305_hw::thread_add_ln772_16_fu_60971_p2() {
    add_ln772_16_fu_60971_p2 = (!add_ln771_64_fu_60967_p2.read().is_01() || !trunc_ln771_16_reg_110119.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_64_fu_60967_p2.read()) + sc_biguint<8>(trunc_ln771_16_reg_110119.read()));
}

void poly1305_hw::thread_add_ln772_1_fu_58941_p2() {
    add_ln772_1_fu_58941_p2 = (!add_ln771_49_fu_58921_p2.read().is_01() || !trunc_ln771_1_reg_109767.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_49_fu_58921_p2.read()) + sc_biguint<8>(trunc_ln771_1_reg_109767.read()));
}

void poly1305_hw::thread_add_ln772_2_fu_59041_p2() {
    add_ln772_2_fu_59041_p2 = (!add_ln771_50_fu_59029_p2.read().is_01() || !trunc_ln771_2_reg_109784.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_50_fu_59029_p2.read()) + sc_biguint<8>(trunc_ln771_2_reg_109784.read()));
}

void poly1305_hw::thread_add_ln772_3_fu_59209_p2() {
    add_ln772_3_fu_59209_p2 = (!add_ln771_51_fu_59187_p2.read().is_01() || !trunc_ln771_3_reg_109789.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_51_fu_59187_p2.read()) + sc_biguint<8>(trunc_ln771_3_reg_109789.read()));
}

void poly1305_hw::thread_add_ln772_4_fu_59365_p2() {
    add_ln772_4_fu_59365_p2 = (!add_ln771_52_fu_59345_p2.read().is_01() || !trunc_ln771_4_reg_109806.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_52_fu_59345_p2.read()) + sc_biguint<8>(trunc_ln771_4_reg_109806.read()));
}

void poly1305_hw::thread_add_ln772_5_fu_59464_p2() {
    add_ln772_5_fu_59464_p2 = (!add_ln771_53_fu_59452_p2.read().is_01() || !trunc_ln771_5_reg_109811.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_53_fu_59452_p2.read()) + sc_biguint<8>(trunc_ln771_5_reg_109811.read()));
}

void poly1305_hw::thread_add_ln772_6_fu_59636_p2() {
    add_ln772_6_fu_59636_p2 = (!add_ln771_54_fu_59614_p2.read().is_01() || !trunc_ln771_6_reg_109873.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_54_fu_59614_p2.read()) + sc_biguint<8>(trunc_ln771_6_reg_109873.read()));
}

void poly1305_hw::thread_add_ln772_7_fu_59793_p2() {
    add_ln772_7_fu_59793_p2 = (!add_ln771_55_fu_59773_p2.read().is_01() || !trunc_ln771_7_reg_109878.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_55_fu_59773_p2.read()) + sc_biguint<8>(trunc_ln771_7_reg_109878.read()));
}

void poly1305_hw::thread_add_ln772_8_fu_59892_p2() {
    add_ln772_8_fu_59892_p2 = (!add_ln771_56_fu_59880_p2.read().is_01() || !trunc_ln771_8_reg_109937.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_56_fu_59880_p2.read()) + sc_biguint<8>(trunc_ln771_8_reg_109937.read()));
}

void poly1305_hw::thread_add_ln772_9_fu_60043_p2() {
    add_ln772_9_fu_60043_p2 = (!add_ln771_57_fu_60022_p2.read().is_01() || !trunc_ln771_9_reg_109947.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_57_fu_60022_p2.read()) + sc_biguint<8>(trunc_ln771_9_reg_109947.read()));
}

void poly1305_hw::thread_add_ln772_fu_58759_p2() {
    add_ln772_fu_58759_p2 = (!add_ln771_48_fu_58737_p2.read().is_01() || !trunc_ln771_reg_109762.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln771_48_fu_58737_p2.read()) + sc_biguint<8>(trunc_ln771_reg_109762.read()));
}

void poly1305_hw::thread_add_ln781_2_fu_61051_p2() {
    add_ln781_2_fu_61051_p2 = (!temp_2_q0.read().is_01() || !zext_ln781_fu_61048_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(temp_2_q0.read()) + sc_biguint<32>(zext_ln781_fu_61048_p1.read()));
}

void poly1305_hw::thread_add_ln781_fu_58546_p2() {
    add_ln781_fu_58546_p2 = (!sub_ln780_fu_58540_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<6>(): (sc_biguint<6>(sub_ln780_fu_58540_p2.read()) + sc_biguint<6>(ap_const_lv6_11));
}

void poly1305_hw::thread_add_ln792_fu_61089_p2() {
    add_ln792_fu_61089_p2 = (!arr1_2_load_3_reg_110279.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_2_load_3_reg_110279.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln802_fu_61173_p2() {
    add_ln802_fu_61173_p2 = (!arr1_2_q0.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_2_q0.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_add_ln83_10_fu_63239_p2() {
    add_ln83_10_fu_63239_p2 = (!acc_q1.read().is_01() || !add_ln83_26_fu_63233_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln83_26_fu_63233_p2.read()));
}

void poly1305_hw::thread_add_ln83_11_fu_63567_p2() {
    add_ln83_11_fu_63567_p2 = (!acc_q0.read().is_01() || !add_ln83_27_fu_63561_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln83_27_fu_63561_p2.read()));
}

void poly1305_hw::thread_add_ln83_12_fu_63615_p2() {
    add_ln83_12_fu_63615_p2 = (!acc_q1.read().is_01() || !add_ln83_28_fu_63609_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln83_28_fu_63609_p2.read()));
}

void poly1305_hw::thread_add_ln83_13_fu_63943_p2() {
    add_ln83_13_fu_63943_p2 = (!acc_q0.read().is_01() || !add_ln83_29_fu_63937_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln83_29_fu_63937_p2.read()));
}

void poly1305_hw::thread_add_ln83_14_fu_63991_p2() {
    add_ln83_14_fu_63991_p2 = (!acc_q1.read().is_01() || !add_ln83_30_fu_63985_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln83_30_fu_63985_p2.read()));
}

void poly1305_hw::thread_add_ln83_15_fu_64201_p2() {
    add_ln83_15_fu_64201_p2 = (!acc_q0.read().is_01() || !add_ln83_31_fu_64195_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln83_31_fu_64195_p2.read()));
}

void poly1305_hw::thread_add_ln83_16_fu_64207_p2() {
    add_ln83_16_fu_64207_p2 = (!select_ln83_15_fu_64187_p3.read().is_01() || !acc_q1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_15_fu_64187_p3.read()) + sc_biguint<8>(acc_q1.read()));
}

void poly1305_hw::thread_add_ln83_17_fu_61681_p2() {
    add_ln83_17_fu_61681_p2 = (!select_ln83_fu_61631_p3.read().is_01() || !phi_ln62_1_fu_61365_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_fu_61631_p3.read()) + sc_biguint<8>(phi_ln62_1_fu_61365_p66.read()));
}

void poly1305_hw::thread_add_ln83_18_fu_61729_p2() {
    add_ln83_18_fu_61729_p2 = (!select_ln83_1_fu_61673_p3.read().is_01() || !phi_ln62_2_fu_61498_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_1_fu_61673_p3.read()) + sc_biguint<8>(phi_ln62_2_fu_61498_p66.read()));
}

void poly1305_hw::thread_add_ln83_19_fu_62057_p2() {
    add_ln83_19_fu_62057_p2 = (!select_ln83_2_fu_62007_p3.read().is_01() || !phi_ln62_3_fu_61741_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_2_fu_62007_p3.read()) + sc_biguint<8>(phi_ln62_3_fu_61741_p66.read()));
}

void poly1305_hw::thread_add_ln83_1_fu_61687_p2() {
    add_ln83_1_fu_61687_p2 = (!acc_q0.read().is_01() || !add_ln83_17_fu_61681_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln83_17_fu_61681_p2.read()));
}

void poly1305_hw::thread_add_ln83_20_fu_62105_p2() {
    add_ln83_20_fu_62105_p2 = (!select_ln83_3_fu_62049_p3.read().is_01() || !phi_ln62_4_fu_61874_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_3_fu_62049_p3.read()) + sc_biguint<8>(phi_ln62_4_fu_61874_p66.read()));
}

void poly1305_hw::thread_add_ln83_21_fu_62433_p2() {
    add_ln83_21_fu_62433_p2 = (!select_ln83_4_fu_62383_p3.read().is_01() || !phi_ln62_5_fu_62117_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_4_fu_62383_p3.read()) + sc_biguint<8>(phi_ln62_5_fu_62117_p66.read()));
}

void poly1305_hw::thread_add_ln83_22_fu_62481_p2() {
    add_ln83_22_fu_62481_p2 = (!select_ln83_5_fu_62425_p3.read().is_01() || !phi_ln62_6_fu_62250_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_5_fu_62425_p3.read()) + sc_biguint<8>(phi_ln62_6_fu_62250_p66.read()));
}

void poly1305_hw::thread_add_ln83_23_fu_62809_p2() {
    add_ln83_23_fu_62809_p2 = (!select_ln83_6_fu_62759_p3.read().is_01() || !phi_ln62_7_fu_62493_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_6_fu_62759_p3.read()) + sc_biguint<8>(phi_ln62_7_fu_62493_p66.read()));
}

void poly1305_hw::thread_add_ln83_24_fu_62857_p2() {
    add_ln83_24_fu_62857_p2 = (!select_ln83_7_fu_62801_p3.read().is_01() || !phi_ln62_8_fu_62626_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_7_fu_62801_p3.read()) + sc_biguint<8>(phi_ln62_8_fu_62626_p66.read()));
}

void poly1305_hw::thread_add_ln83_25_fu_63185_p2() {
    add_ln83_25_fu_63185_p2 = (!select_ln83_8_fu_63135_p3.read().is_01() || !phi_ln62_9_fu_62869_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_8_fu_63135_p3.read()) + sc_biguint<8>(phi_ln62_9_fu_62869_p66.read()));
}

void poly1305_hw::thread_add_ln83_26_fu_63233_p2() {
    add_ln83_26_fu_63233_p2 = (!select_ln83_9_fu_63177_p3.read().is_01() || !phi_ln62_s_fu_63002_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_9_fu_63177_p3.read()) + sc_biguint<8>(phi_ln62_s_fu_63002_p66.read()));
}

void poly1305_hw::thread_add_ln83_27_fu_63561_p2() {
    add_ln83_27_fu_63561_p2 = (!select_ln83_10_fu_63511_p3.read().is_01() || !phi_ln62_10_fu_63245_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_10_fu_63511_p3.read()) + sc_biguint<8>(phi_ln62_10_fu_63245_p66.read()));
}

void poly1305_hw::thread_add_ln83_28_fu_63609_p2() {
    add_ln83_28_fu_63609_p2 = (!select_ln83_11_fu_63553_p3.read().is_01() || !phi_ln62_11_fu_63378_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_11_fu_63553_p3.read()) + sc_biguint<8>(phi_ln62_11_fu_63378_p66.read()));
}

void poly1305_hw::thread_add_ln83_29_fu_63937_p2() {
    add_ln83_29_fu_63937_p2 = (!select_ln83_12_fu_63887_p3.read().is_01() || !phi_ln62_12_fu_63621_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_12_fu_63887_p3.read()) + sc_biguint<8>(phi_ln62_12_fu_63621_p66.read()));
}

void poly1305_hw::thread_add_ln83_2_fu_61735_p2() {
    add_ln83_2_fu_61735_p2 = (!acc_q1.read().is_01() || !add_ln83_18_fu_61729_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln83_18_fu_61729_p2.read()));
}

void poly1305_hw::thread_add_ln83_30_fu_63985_p2() {
    add_ln83_30_fu_63985_p2 = (!select_ln83_13_fu_63929_p3.read().is_01() || !phi_ln62_13_fu_63754_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_13_fu_63929_p3.read()) + sc_biguint<8>(phi_ln62_13_fu_63754_p66.read()));
}

void poly1305_hw::thread_add_ln83_31_fu_64195_p2() {
    add_ln83_31_fu_64195_p2 = (!select_ln83_14_fu_64145_p3.read().is_01() || !phi_ln62_14_fu_64012_p66.read().is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln83_14_fu_64145_p3.read()) + sc_biguint<8>(phi_ln62_14_fu_64012_p66.read()));
}

void poly1305_hw::thread_add_ln83_3_fu_62063_p2() {
    add_ln83_3_fu_62063_p2 = (!acc_q0.read().is_01() || !add_ln83_19_fu_62057_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln83_19_fu_62057_p2.read()));
}

void poly1305_hw::thread_add_ln83_4_fu_62111_p2() {
    add_ln83_4_fu_62111_p2 = (!acc_q1.read().is_01() || !add_ln83_20_fu_62105_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln83_20_fu_62105_p2.read()));
}

void poly1305_hw::thread_add_ln83_5_fu_62439_p2() {
    add_ln83_5_fu_62439_p2 = (!acc_q0.read().is_01() || !add_ln83_21_fu_62433_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln83_21_fu_62433_p2.read()));
}

void poly1305_hw::thread_add_ln83_6_fu_62487_p2() {
    add_ln83_6_fu_62487_p2 = (!acc_q1.read().is_01() || !add_ln83_22_fu_62481_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln83_22_fu_62481_p2.read()));
}

void poly1305_hw::thread_add_ln83_7_fu_62815_p2() {
    add_ln83_7_fu_62815_p2 = (!acc_q0.read().is_01() || !add_ln83_23_fu_62809_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln83_23_fu_62809_p2.read()));
}

void poly1305_hw::thread_add_ln83_8_fu_62863_p2() {
    add_ln83_8_fu_62863_p2 = (!acc_q1.read().is_01() || !add_ln83_24_fu_62857_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(add_ln83_24_fu_62857_p2.read()));
}

void poly1305_hw::thread_add_ln83_9_fu_63191_p2() {
    add_ln83_9_fu_63191_p2 = (!acc_q0.read().is_01() || !add_ln83_25_fu_63185_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q0.read()) + sc_biguint<8>(add_ln83_25_fu_63185_p2.read()));
}

void poly1305_hw::thread_add_ln83_fu_61359_p2() {
    add_ln83_fu_61359_p2 = (!phi_ln62_reg_12716.read().is_01() || !acc_q1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(phi_ln62_reg_12716.read()) + sc_biguint<8>(acc_q1.read()));
}

void poly1305_hw::thread_add_ln867_fu_87732_p2() {
    add_ln867_fu_87732_p2 = (!zext_ln867_1_fu_87720_p1.read().is_01() || !zext_ln867_2_fu_87724_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln867_1_fu_87720_p1.read()) + sc_biguint<9>(zext_ln867_2_fu_87724_p1.read()));
}

void poly1305_hw::thread_add_ln874_1_fu_87786_p2() {
    add_ln874_1_fu_87786_p2 = (!acc_q1.read().is_01() || !zext_ln866_fu_87782_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(acc_q1.read()) + sc_biguint<8>(zext_ln866_fu_87782_p1.read()));
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

void poly1305_hw::thread_ap_CS_fsm_state174() {
    ap_CS_fsm_state174 = ap_CS_fsm.read()[173];
}

void poly1305_hw::thread_ap_CS_fsm_state175() {
    ap_CS_fsm_state175 = ap_CS_fsm.read()[174];
}

void poly1305_hw::thread_ap_CS_fsm_state176() {
    ap_CS_fsm_state176 = ap_CS_fsm.read()[175];
}

void poly1305_hw::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[176];
}

void poly1305_hw::thread_ap_CS_fsm_state178() {
    ap_CS_fsm_state178 = ap_CS_fsm.read()[177];
}

void poly1305_hw::thread_ap_CS_fsm_state179() {
    ap_CS_fsm_state179 = ap_CS_fsm.read()[178];
}

void poly1305_hw::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void poly1305_hw::thread_ap_CS_fsm_state180() {
    ap_CS_fsm_state180 = ap_CS_fsm.read()[179];
}

void poly1305_hw::thread_ap_CS_fsm_state181() {
    ap_CS_fsm_state181 = ap_CS_fsm.read()[180];
}

void poly1305_hw::thread_ap_CS_fsm_state182() {
    ap_CS_fsm_state182 = ap_CS_fsm.read()[181];
}

void poly1305_hw::thread_ap_CS_fsm_state183() {
    ap_CS_fsm_state183 = ap_CS_fsm.read()[182];
}

void poly1305_hw::thread_ap_CS_fsm_state184() {
    ap_CS_fsm_state184 = ap_CS_fsm.read()[183];
}

void poly1305_hw::thread_ap_CS_fsm_state185() {
    ap_CS_fsm_state185 = ap_CS_fsm.read()[184];
}

void poly1305_hw::thread_ap_CS_fsm_state186() {
    ap_CS_fsm_state186 = ap_CS_fsm.read()[185];
}

void poly1305_hw::thread_ap_CS_fsm_state187() {
    ap_CS_fsm_state187 = ap_CS_fsm.read()[186];
}

void poly1305_hw::thread_ap_CS_fsm_state188() {
    ap_CS_fsm_state188 = ap_CS_fsm.read()[187];
}

void poly1305_hw::thread_ap_CS_fsm_state189() {
    ap_CS_fsm_state189 = ap_CS_fsm.read()[188];
}

void poly1305_hw::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void poly1305_hw::thread_ap_CS_fsm_state190() {
    ap_CS_fsm_state190 = ap_CS_fsm.read()[189];
}

void poly1305_hw::thread_ap_CS_fsm_state191() {
    ap_CS_fsm_state191 = ap_CS_fsm.read()[190];
}

void poly1305_hw::thread_ap_CS_fsm_state192() {
    ap_CS_fsm_state192 = ap_CS_fsm.read()[191];
}

void poly1305_hw::thread_ap_CS_fsm_state193() {
    ap_CS_fsm_state193 = ap_CS_fsm.read()[192];
}

void poly1305_hw::thread_ap_CS_fsm_state194() {
    ap_CS_fsm_state194 = ap_CS_fsm.read()[193];
}

void poly1305_hw::thread_ap_CS_fsm_state195() {
    ap_CS_fsm_state195 = ap_CS_fsm.read()[194];
}

void poly1305_hw::thread_ap_CS_fsm_state196() {
    ap_CS_fsm_state196 = ap_CS_fsm.read()[195];
}

void poly1305_hw::thread_ap_CS_fsm_state197() {
    ap_CS_fsm_state197 = ap_CS_fsm.read()[196];
}

void poly1305_hw::thread_ap_CS_fsm_state198() {
    ap_CS_fsm_state198 = ap_CS_fsm.read()[197];
}

void poly1305_hw::thread_ap_CS_fsm_state199() {
    ap_CS_fsm_state199 = ap_CS_fsm.read()[198];
}

void poly1305_hw::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void poly1305_hw::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void poly1305_hw::thread_ap_CS_fsm_state200() {
    ap_CS_fsm_state200 = ap_CS_fsm.read()[199];
}

void poly1305_hw::thread_ap_CS_fsm_state201() {
    ap_CS_fsm_state201 = ap_CS_fsm.read()[200];
}

void poly1305_hw::thread_ap_CS_fsm_state202() {
    ap_CS_fsm_state202 = ap_CS_fsm.read()[201];
}

void poly1305_hw::thread_ap_CS_fsm_state203() {
    ap_CS_fsm_state203 = ap_CS_fsm.read()[202];
}

void poly1305_hw::thread_ap_CS_fsm_state204() {
    ap_CS_fsm_state204 = ap_CS_fsm.read()[203];
}

void poly1305_hw::thread_ap_CS_fsm_state205() {
    ap_CS_fsm_state205 = ap_CS_fsm.read()[204];
}

void poly1305_hw::thread_ap_CS_fsm_state206() {
    ap_CS_fsm_state206 = ap_CS_fsm.read()[205];
}

void poly1305_hw::thread_ap_CS_fsm_state207() {
    ap_CS_fsm_state207 = ap_CS_fsm.read()[206];
}

void poly1305_hw::thread_ap_CS_fsm_state208() {
    ap_CS_fsm_state208 = ap_CS_fsm.read()[207];
}

void poly1305_hw::thread_ap_CS_fsm_state209() {
    ap_CS_fsm_state209 = ap_CS_fsm.read()[208];
}

void poly1305_hw::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void poly1305_hw::thread_ap_CS_fsm_state210() {
    ap_CS_fsm_state210 = ap_CS_fsm.read()[209];
}

void poly1305_hw::thread_ap_CS_fsm_state211() {
    ap_CS_fsm_state211 = ap_CS_fsm.read()[210];
}

void poly1305_hw::thread_ap_CS_fsm_state212() {
    ap_CS_fsm_state212 = ap_CS_fsm.read()[211];
}

void poly1305_hw::thread_ap_CS_fsm_state213() {
    ap_CS_fsm_state213 = ap_CS_fsm.read()[212];
}

void poly1305_hw::thread_ap_CS_fsm_state214() {
    ap_CS_fsm_state214 = ap_CS_fsm.read()[213];
}

void poly1305_hw::thread_ap_CS_fsm_state215() {
    ap_CS_fsm_state215 = ap_CS_fsm.read()[214];
}

void poly1305_hw::thread_ap_CS_fsm_state216() {
    ap_CS_fsm_state216 = ap_CS_fsm.read()[215];
}

void poly1305_hw::thread_ap_CS_fsm_state217() {
    ap_CS_fsm_state217 = ap_CS_fsm.read()[216];
}

void poly1305_hw::thread_ap_CS_fsm_state218() {
    ap_CS_fsm_state218 = ap_CS_fsm.read()[217];
}

void poly1305_hw::thread_ap_CS_fsm_state219() {
    ap_CS_fsm_state219 = ap_CS_fsm.read()[218];
}

void poly1305_hw::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void poly1305_hw::thread_ap_CS_fsm_state220() {
    ap_CS_fsm_state220 = ap_CS_fsm.read()[219];
}

void poly1305_hw::thread_ap_CS_fsm_state221() {
    ap_CS_fsm_state221 = ap_CS_fsm.read()[220];
}

void poly1305_hw::thread_ap_CS_fsm_state222() {
    ap_CS_fsm_state222 = ap_CS_fsm.read()[221];
}

void poly1305_hw::thread_ap_CS_fsm_state223() {
    ap_CS_fsm_state223 = ap_CS_fsm.read()[222];
}

void poly1305_hw::thread_ap_CS_fsm_state224() {
    ap_CS_fsm_state224 = ap_CS_fsm.read()[223];
}

void poly1305_hw::thread_ap_CS_fsm_state225() {
    ap_CS_fsm_state225 = ap_CS_fsm.read()[224];
}

void poly1305_hw::thread_ap_CS_fsm_state226() {
    ap_CS_fsm_state226 = ap_CS_fsm.read()[225];
}

void poly1305_hw::thread_ap_CS_fsm_state227() {
    ap_CS_fsm_state227 = ap_CS_fsm.read()[226];
}

void poly1305_hw::thread_ap_CS_fsm_state228() {
    ap_CS_fsm_state228 = ap_CS_fsm.read()[227];
}

void poly1305_hw::thread_ap_CS_fsm_state229() {
    ap_CS_fsm_state229 = ap_CS_fsm.read()[228];
}

void poly1305_hw::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void poly1305_hw::thread_ap_CS_fsm_state230() {
    ap_CS_fsm_state230 = ap_CS_fsm.read()[229];
}

void poly1305_hw::thread_ap_CS_fsm_state231() {
    ap_CS_fsm_state231 = ap_CS_fsm.read()[230];
}

void poly1305_hw::thread_ap_CS_fsm_state232() {
    ap_CS_fsm_state232 = ap_CS_fsm.read()[231];
}

void poly1305_hw::thread_ap_CS_fsm_state233() {
    ap_CS_fsm_state233 = ap_CS_fsm.read()[232];
}

void poly1305_hw::thread_ap_CS_fsm_state234() {
    ap_CS_fsm_state234 = ap_CS_fsm.read()[233];
}

void poly1305_hw::thread_ap_CS_fsm_state235() {
    ap_CS_fsm_state235 = ap_CS_fsm.read()[234];
}

void poly1305_hw::thread_ap_CS_fsm_state236() {
    ap_CS_fsm_state236 = ap_CS_fsm.read()[235];
}

void poly1305_hw::thread_ap_CS_fsm_state237() {
    ap_CS_fsm_state237 = ap_CS_fsm.read()[236];
}

void poly1305_hw::thread_ap_CS_fsm_state238() {
    ap_CS_fsm_state238 = ap_CS_fsm.read()[237];
}

void poly1305_hw::thread_ap_CS_fsm_state239() {
    ap_CS_fsm_state239 = ap_CS_fsm.read()[238];
}

void poly1305_hw::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void poly1305_hw::thread_ap_CS_fsm_state240() {
    ap_CS_fsm_state240 = ap_CS_fsm.read()[239];
}

void poly1305_hw::thread_ap_CS_fsm_state241() {
    ap_CS_fsm_state241 = ap_CS_fsm.read()[240];
}

void poly1305_hw::thread_ap_CS_fsm_state242() {
    ap_CS_fsm_state242 = ap_CS_fsm.read()[241];
}

void poly1305_hw::thread_ap_CS_fsm_state243() {
    ap_CS_fsm_state243 = ap_CS_fsm.read()[242];
}

void poly1305_hw::thread_ap_CS_fsm_state244() {
    ap_CS_fsm_state244 = ap_CS_fsm.read()[243];
}

void poly1305_hw::thread_ap_CS_fsm_state245() {
    ap_CS_fsm_state245 = ap_CS_fsm.read()[244];
}

void poly1305_hw::thread_ap_CS_fsm_state246() {
    ap_CS_fsm_state246 = ap_CS_fsm.read()[245];
}

void poly1305_hw::thread_ap_CS_fsm_state247() {
    ap_CS_fsm_state247 = ap_CS_fsm.read()[246];
}

void poly1305_hw::thread_ap_CS_fsm_state248() {
    ap_CS_fsm_state248 = ap_CS_fsm.read()[247];
}

void poly1305_hw::thread_ap_CS_fsm_state249() {
    ap_CS_fsm_state249 = ap_CS_fsm.read()[248];
}

void poly1305_hw::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void poly1305_hw::thread_ap_CS_fsm_state250() {
    ap_CS_fsm_state250 = ap_CS_fsm.read()[249];
}

void poly1305_hw::thread_ap_CS_fsm_state251() {
    ap_CS_fsm_state251 = ap_CS_fsm.read()[250];
}

void poly1305_hw::thread_ap_CS_fsm_state252() {
    ap_CS_fsm_state252 = ap_CS_fsm.read()[251];
}

void poly1305_hw::thread_ap_CS_fsm_state253() {
    ap_CS_fsm_state253 = ap_CS_fsm.read()[252];
}

void poly1305_hw::thread_ap_CS_fsm_state254() {
    ap_CS_fsm_state254 = ap_CS_fsm.read()[253];
}

void poly1305_hw::thread_ap_CS_fsm_state255() {
    ap_CS_fsm_state255 = ap_CS_fsm.read()[254];
}

void poly1305_hw::thread_ap_CS_fsm_state256() {
    ap_CS_fsm_state256 = ap_CS_fsm.read()[255];
}

void poly1305_hw::thread_ap_CS_fsm_state257() {
    ap_CS_fsm_state257 = ap_CS_fsm.read()[256];
}

void poly1305_hw::thread_ap_CS_fsm_state258() {
    ap_CS_fsm_state258 = ap_CS_fsm.read()[257];
}

void poly1305_hw::thread_ap_CS_fsm_state259() {
    ap_CS_fsm_state259 = ap_CS_fsm.read()[258];
}

void poly1305_hw::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void poly1305_hw::thread_ap_CS_fsm_state260() {
    ap_CS_fsm_state260 = ap_CS_fsm.read()[259];
}

void poly1305_hw::thread_ap_CS_fsm_state261() {
    ap_CS_fsm_state261 = ap_CS_fsm.read()[260];
}

void poly1305_hw::thread_ap_CS_fsm_state262() {
    ap_CS_fsm_state262 = ap_CS_fsm.read()[261];
}

void poly1305_hw::thread_ap_CS_fsm_state263() {
    ap_CS_fsm_state263 = ap_CS_fsm.read()[262];
}

void poly1305_hw::thread_ap_CS_fsm_state264() {
    ap_CS_fsm_state264 = ap_CS_fsm.read()[263];
}

void poly1305_hw::thread_ap_CS_fsm_state265() {
    ap_CS_fsm_state265 = ap_CS_fsm.read()[264];
}

void poly1305_hw::thread_ap_CS_fsm_state266() {
    ap_CS_fsm_state266 = ap_CS_fsm.read()[265];
}

void poly1305_hw::thread_ap_CS_fsm_state267() {
    ap_CS_fsm_state267 = ap_CS_fsm.read()[266];
}

void poly1305_hw::thread_ap_CS_fsm_state268() {
    ap_CS_fsm_state268 = ap_CS_fsm.read()[267];
}

void poly1305_hw::thread_ap_CS_fsm_state269() {
    ap_CS_fsm_state269 = ap_CS_fsm.read()[268];
}

void poly1305_hw::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void poly1305_hw::thread_ap_CS_fsm_state270() {
    ap_CS_fsm_state270 = ap_CS_fsm.read()[269];
}

void poly1305_hw::thread_ap_CS_fsm_state271() {
    ap_CS_fsm_state271 = ap_CS_fsm.read()[270];
}

void poly1305_hw::thread_ap_CS_fsm_state272() {
    ap_CS_fsm_state272 = ap_CS_fsm.read()[271];
}

void poly1305_hw::thread_ap_CS_fsm_state273() {
    ap_CS_fsm_state273 = ap_CS_fsm.read()[272];
}

void poly1305_hw::thread_ap_CS_fsm_state274() {
    ap_CS_fsm_state274 = ap_CS_fsm.read()[273];
}

void poly1305_hw::thread_ap_CS_fsm_state275() {
    ap_CS_fsm_state275 = ap_CS_fsm.read()[274];
}

void poly1305_hw::thread_ap_CS_fsm_state276() {
    ap_CS_fsm_state276 = ap_CS_fsm.read()[275];
}

void poly1305_hw::thread_ap_CS_fsm_state277() {
    ap_CS_fsm_state277 = ap_CS_fsm.read()[276];
}

void poly1305_hw::thread_ap_CS_fsm_state278() {
    ap_CS_fsm_state278 = ap_CS_fsm.read()[277];
}

void poly1305_hw::thread_ap_CS_fsm_state279() {
    ap_CS_fsm_state279 = ap_CS_fsm.read()[278];
}

void poly1305_hw::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void poly1305_hw::thread_ap_CS_fsm_state280() {
    ap_CS_fsm_state280 = ap_CS_fsm.read()[279];
}

void poly1305_hw::thread_ap_CS_fsm_state281() {
    ap_CS_fsm_state281 = ap_CS_fsm.read()[280];
}

void poly1305_hw::thread_ap_CS_fsm_state282() {
    ap_CS_fsm_state282 = ap_CS_fsm.read()[281];
}

void poly1305_hw::thread_ap_CS_fsm_state283() {
    ap_CS_fsm_state283 = ap_CS_fsm.read()[282];
}

void poly1305_hw::thread_ap_CS_fsm_state284() {
    ap_CS_fsm_state284 = ap_CS_fsm.read()[283];
}

void poly1305_hw::thread_ap_CS_fsm_state285() {
    ap_CS_fsm_state285 = ap_CS_fsm.read()[284];
}

void poly1305_hw::thread_ap_CS_fsm_state286() {
    ap_CS_fsm_state286 = ap_CS_fsm.read()[285];
}

void poly1305_hw::thread_ap_CS_fsm_state287() {
    ap_CS_fsm_state287 = ap_CS_fsm.read()[286];
}

void poly1305_hw::thread_ap_CS_fsm_state288() {
    ap_CS_fsm_state288 = ap_CS_fsm.read()[287];
}

void poly1305_hw::thread_ap_CS_fsm_state289() {
    ap_CS_fsm_state289 = ap_CS_fsm.read()[288];
}

void poly1305_hw::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void poly1305_hw::thread_ap_CS_fsm_state290() {
    ap_CS_fsm_state290 = ap_CS_fsm.read()[289];
}

void poly1305_hw::thread_ap_CS_fsm_state291() {
    ap_CS_fsm_state291 = ap_CS_fsm.read()[290];
}

void poly1305_hw::thread_ap_CS_fsm_state292() {
    ap_CS_fsm_state292 = ap_CS_fsm.read()[291];
}

void poly1305_hw::thread_ap_CS_fsm_state293() {
    ap_CS_fsm_state293 = ap_CS_fsm.read()[292];
}

void poly1305_hw::thread_ap_CS_fsm_state294() {
    ap_CS_fsm_state294 = ap_CS_fsm.read()[293];
}

void poly1305_hw::thread_ap_CS_fsm_state295() {
    ap_CS_fsm_state295 = ap_CS_fsm.read()[294];
}

void poly1305_hw::thread_ap_CS_fsm_state296() {
    ap_CS_fsm_state296 = ap_CS_fsm.read()[295];
}

void poly1305_hw::thread_ap_CS_fsm_state297() {
    ap_CS_fsm_state297 = ap_CS_fsm.read()[296];
}

void poly1305_hw::thread_ap_CS_fsm_state298() {
    ap_CS_fsm_state298 = ap_CS_fsm.read()[297];
}

void poly1305_hw::thread_ap_CS_fsm_state299() {
    ap_CS_fsm_state299 = ap_CS_fsm.read()[298];
}

void poly1305_hw::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void poly1305_hw::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void poly1305_hw::thread_ap_CS_fsm_state300() {
    ap_CS_fsm_state300 = ap_CS_fsm.read()[299];
}

void poly1305_hw::thread_ap_CS_fsm_state301() {
    ap_CS_fsm_state301 = ap_CS_fsm.read()[300];
}

void poly1305_hw::thread_ap_CS_fsm_state302() {
    ap_CS_fsm_state302 = ap_CS_fsm.read()[301];
}

void poly1305_hw::thread_ap_CS_fsm_state303() {
    ap_CS_fsm_state303 = ap_CS_fsm.read()[302];
}

void poly1305_hw::thread_ap_CS_fsm_state304() {
    ap_CS_fsm_state304 = ap_CS_fsm.read()[303];
}

void poly1305_hw::thread_ap_CS_fsm_state305() {
    ap_CS_fsm_state305 = ap_CS_fsm.read()[304];
}

void poly1305_hw::thread_ap_CS_fsm_state306() {
    ap_CS_fsm_state306 = ap_CS_fsm.read()[305];
}

void poly1305_hw::thread_ap_CS_fsm_state307() {
    ap_CS_fsm_state307 = ap_CS_fsm.read()[306];
}

void poly1305_hw::thread_ap_CS_fsm_state308() {
    ap_CS_fsm_state308 = ap_CS_fsm.read()[307];
}

void poly1305_hw::thread_ap_CS_fsm_state309() {
    ap_CS_fsm_state309 = ap_CS_fsm.read()[308];
}

void poly1305_hw::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void poly1305_hw::thread_ap_CS_fsm_state310() {
    ap_CS_fsm_state310 = ap_CS_fsm.read()[309];
}

void poly1305_hw::thread_ap_CS_fsm_state311() {
    ap_CS_fsm_state311 = ap_CS_fsm.read()[310];
}

void poly1305_hw::thread_ap_CS_fsm_state312() {
    ap_CS_fsm_state312 = ap_CS_fsm.read()[311];
}

void poly1305_hw::thread_ap_CS_fsm_state313() {
    ap_CS_fsm_state313 = ap_CS_fsm.read()[312];
}

void poly1305_hw::thread_ap_CS_fsm_state314() {
    ap_CS_fsm_state314 = ap_CS_fsm.read()[313];
}

void poly1305_hw::thread_ap_CS_fsm_state315() {
    ap_CS_fsm_state315 = ap_CS_fsm.read()[314];
}

void poly1305_hw::thread_ap_CS_fsm_state316() {
    ap_CS_fsm_state316 = ap_CS_fsm.read()[315];
}

void poly1305_hw::thread_ap_CS_fsm_state317() {
    ap_CS_fsm_state317 = ap_CS_fsm.read()[316];
}

void poly1305_hw::thread_ap_CS_fsm_state318() {
    ap_CS_fsm_state318 = ap_CS_fsm.read()[317];
}

void poly1305_hw::thread_ap_CS_fsm_state319() {
    ap_CS_fsm_state319 = ap_CS_fsm.read()[318];
}

void poly1305_hw::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void poly1305_hw::thread_ap_CS_fsm_state320() {
    ap_CS_fsm_state320 = ap_CS_fsm.read()[319];
}

void poly1305_hw::thread_ap_CS_fsm_state321() {
    ap_CS_fsm_state321 = ap_CS_fsm.read()[320];
}

void poly1305_hw::thread_ap_CS_fsm_state322() {
    ap_CS_fsm_state322 = ap_CS_fsm.read()[321];
}

void poly1305_hw::thread_ap_CS_fsm_state323() {
    ap_CS_fsm_state323 = ap_CS_fsm.read()[322];
}

void poly1305_hw::thread_ap_CS_fsm_state324() {
    ap_CS_fsm_state324 = ap_CS_fsm.read()[323];
}

void poly1305_hw::thread_ap_CS_fsm_state325() {
    ap_CS_fsm_state325 = ap_CS_fsm.read()[324];
}

void poly1305_hw::thread_ap_CS_fsm_state326() {
    ap_CS_fsm_state326 = ap_CS_fsm.read()[325];
}

void poly1305_hw::thread_ap_CS_fsm_state327() {
    ap_CS_fsm_state327 = ap_CS_fsm.read()[326];
}

void poly1305_hw::thread_ap_CS_fsm_state328() {
    ap_CS_fsm_state328 = ap_CS_fsm.read()[327];
}

void poly1305_hw::thread_ap_CS_fsm_state329() {
    ap_CS_fsm_state329 = ap_CS_fsm.read()[328];
}

void poly1305_hw::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void poly1305_hw::thread_ap_CS_fsm_state330() {
    ap_CS_fsm_state330 = ap_CS_fsm.read()[329];
}

void poly1305_hw::thread_ap_CS_fsm_state331() {
    ap_CS_fsm_state331 = ap_CS_fsm.read()[330];
}

void poly1305_hw::thread_ap_CS_fsm_state332() {
    ap_CS_fsm_state332 = ap_CS_fsm.read()[331];
}

void poly1305_hw::thread_ap_CS_fsm_state333() {
    ap_CS_fsm_state333 = ap_CS_fsm.read()[332];
}

void poly1305_hw::thread_ap_CS_fsm_state334() {
    ap_CS_fsm_state334 = ap_CS_fsm.read()[333];
}

void poly1305_hw::thread_ap_CS_fsm_state335() {
    ap_CS_fsm_state335 = ap_CS_fsm.read()[334];
}

void poly1305_hw::thread_ap_CS_fsm_state336() {
    ap_CS_fsm_state336 = ap_CS_fsm.read()[335];
}

void poly1305_hw::thread_ap_CS_fsm_state337() {
    ap_CS_fsm_state337 = ap_CS_fsm.read()[336];
}

void poly1305_hw::thread_ap_CS_fsm_state338() {
    ap_CS_fsm_state338 = ap_CS_fsm.read()[337];
}

void poly1305_hw::thread_ap_CS_fsm_state339() {
    ap_CS_fsm_state339 = ap_CS_fsm.read()[338];
}

void poly1305_hw::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void poly1305_hw::thread_ap_CS_fsm_state340() {
    ap_CS_fsm_state340 = ap_CS_fsm.read()[339];
}

void poly1305_hw::thread_ap_CS_fsm_state341() {
    ap_CS_fsm_state341 = ap_CS_fsm.read()[340];
}

void poly1305_hw::thread_ap_CS_fsm_state342() {
    ap_CS_fsm_state342 = ap_CS_fsm.read()[341];
}

void poly1305_hw::thread_ap_CS_fsm_state343() {
    ap_CS_fsm_state343 = ap_CS_fsm.read()[342];
}

void poly1305_hw::thread_ap_CS_fsm_state344() {
    ap_CS_fsm_state344 = ap_CS_fsm.read()[343];
}

void poly1305_hw::thread_ap_CS_fsm_state345() {
    ap_CS_fsm_state345 = ap_CS_fsm.read()[344];
}

void poly1305_hw::thread_ap_CS_fsm_state346() {
    ap_CS_fsm_state346 = ap_CS_fsm.read()[345];
}

void poly1305_hw::thread_ap_CS_fsm_state347() {
    ap_CS_fsm_state347 = ap_CS_fsm.read()[346];
}

void poly1305_hw::thread_ap_CS_fsm_state348() {
    ap_CS_fsm_state348 = ap_CS_fsm.read()[347];
}

void poly1305_hw::thread_ap_CS_fsm_state349() {
    ap_CS_fsm_state349 = ap_CS_fsm.read()[348];
}

void poly1305_hw::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void poly1305_hw::thread_ap_CS_fsm_state350() {
    ap_CS_fsm_state350 = ap_CS_fsm.read()[349];
}

void poly1305_hw::thread_ap_CS_fsm_state351() {
    ap_CS_fsm_state351 = ap_CS_fsm.read()[350];
}

void poly1305_hw::thread_ap_CS_fsm_state352() {
    ap_CS_fsm_state352 = ap_CS_fsm.read()[351];
}

void poly1305_hw::thread_ap_CS_fsm_state353() {
    ap_CS_fsm_state353 = ap_CS_fsm.read()[352];
}

void poly1305_hw::thread_ap_CS_fsm_state354() {
    ap_CS_fsm_state354 = ap_CS_fsm.read()[353];
}

void poly1305_hw::thread_ap_CS_fsm_state355() {
    ap_CS_fsm_state355 = ap_CS_fsm.read()[354];
}

void poly1305_hw::thread_ap_CS_fsm_state356() {
    ap_CS_fsm_state356 = ap_CS_fsm.read()[355];
}

void poly1305_hw::thread_ap_CS_fsm_state357() {
    ap_CS_fsm_state357 = ap_CS_fsm.read()[356];
}

void poly1305_hw::thread_ap_CS_fsm_state358() {
    ap_CS_fsm_state358 = ap_CS_fsm.read()[357];
}

void poly1305_hw::thread_ap_CS_fsm_state359() {
    ap_CS_fsm_state359 = ap_CS_fsm.read()[358];
}

void poly1305_hw::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void poly1305_hw::thread_ap_CS_fsm_state360() {
    ap_CS_fsm_state360 = ap_CS_fsm.read()[359];
}

void poly1305_hw::thread_ap_CS_fsm_state361() {
    ap_CS_fsm_state361 = ap_CS_fsm.read()[360];
}

void poly1305_hw::thread_ap_CS_fsm_state362() {
    ap_CS_fsm_state362 = ap_CS_fsm.read()[361];
}

void poly1305_hw::thread_ap_CS_fsm_state363() {
    ap_CS_fsm_state363 = ap_CS_fsm.read()[362];
}

void poly1305_hw::thread_ap_CS_fsm_state364() {
    ap_CS_fsm_state364 = ap_CS_fsm.read()[363];
}

void poly1305_hw::thread_ap_CS_fsm_state365() {
    ap_CS_fsm_state365 = ap_CS_fsm.read()[364];
}

void poly1305_hw::thread_ap_CS_fsm_state366() {
    ap_CS_fsm_state366 = ap_CS_fsm.read()[365];
}

void poly1305_hw::thread_ap_CS_fsm_state367() {
    ap_CS_fsm_state367 = ap_CS_fsm.read()[366];
}

void poly1305_hw::thread_ap_CS_fsm_state368() {
    ap_CS_fsm_state368 = ap_CS_fsm.read()[367];
}

void poly1305_hw::thread_ap_CS_fsm_state369() {
    ap_CS_fsm_state369 = ap_CS_fsm.read()[368];
}

void poly1305_hw::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void poly1305_hw::thread_ap_CS_fsm_state370() {
    ap_CS_fsm_state370 = ap_CS_fsm.read()[369];
}

void poly1305_hw::thread_ap_CS_fsm_state371() {
    ap_CS_fsm_state371 = ap_CS_fsm.read()[370];
}

void poly1305_hw::thread_ap_CS_fsm_state372() {
    ap_CS_fsm_state372 = ap_CS_fsm.read()[371];
}

void poly1305_hw::thread_ap_CS_fsm_state373() {
    ap_CS_fsm_state373 = ap_CS_fsm.read()[372];
}

void poly1305_hw::thread_ap_CS_fsm_state374() {
    ap_CS_fsm_state374 = ap_CS_fsm.read()[373];
}

void poly1305_hw::thread_ap_CS_fsm_state375() {
    ap_CS_fsm_state375 = ap_CS_fsm.read()[374];
}

void poly1305_hw::thread_ap_CS_fsm_state376() {
    ap_CS_fsm_state376 = ap_CS_fsm.read()[375];
}

void poly1305_hw::thread_ap_CS_fsm_state377() {
    ap_CS_fsm_state377 = ap_CS_fsm.read()[376];
}

void poly1305_hw::thread_ap_CS_fsm_state378() {
    ap_CS_fsm_state378 = ap_CS_fsm.read()[377];
}

void poly1305_hw::thread_ap_CS_fsm_state379() {
    ap_CS_fsm_state379 = ap_CS_fsm.read()[378];
}

void poly1305_hw::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void poly1305_hw::thread_ap_CS_fsm_state380() {
    ap_CS_fsm_state380 = ap_CS_fsm.read()[379];
}

void poly1305_hw::thread_ap_CS_fsm_state381() {
    ap_CS_fsm_state381 = ap_CS_fsm.read()[380];
}

void poly1305_hw::thread_ap_CS_fsm_state382() {
    ap_CS_fsm_state382 = ap_CS_fsm.read()[381];
}

void poly1305_hw::thread_ap_CS_fsm_state383() {
    ap_CS_fsm_state383 = ap_CS_fsm.read()[382];
}

void poly1305_hw::thread_ap_CS_fsm_state384() {
    ap_CS_fsm_state384 = ap_CS_fsm.read()[383];
}

void poly1305_hw::thread_ap_CS_fsm_state385() {
    ap_CS_fsm_state385 = ap_CS_fsm.read()[384];
}

void poly1305_hw::thread_ap_CS_fsm_state386() {
    ap_CS_fsm_state386 = ap_CS_fsm.read()[385];
}

void poly1305_hw::thread_ap_CS_fsm_state387() {
    ap_CS_fsm_state387 = ap_CS_fsm.read()[386];
}

void poly1305_hw::thread_ap_CS_fsm_state388() {
    ap_CS_fsm_state388 = ap_CS_fsm.read()[387];
}

void poly1305_hw::thread_ap_CS_fsm_state389() {
    ap_CS_fsm_state389 = ap_CS_fsm.read()[388];
}

void poly1305_hw::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void poly1305_hw::thread_ap_CS_fsm_state390() {
    ap_CS_fsm_state390 = ap_CS_fsm.read()[389];
}

void poly1305_hw::thread_ap_CS_fsm_state391() {
    ap_CS_fsm_state391 = ap_CS_fsm.read()[390];
}

void poly1305_hw::thread_ap_CS_fsm_state392() {
    ap_CS_fsm_state392 = ap_CS_fsm.read()[391];
}

void poly1305_hw::thread_ap_CS_fsm_state393() {
    ap_CS_fsm_state393 = ap_CS_fsm.read()[392];
}

void poly1305_hw::thread_ap_CS_fsm_state394() {
    ap_CS_fsm_state394 = ap_CS_fsm.read()[393];
}

void poly1305_hw::thread_ap_CS_fsm_state395() {
    ap_CS_fsm_state395 = ap_CS_fsm.read()[394];
}

void poly1305_hw::thread_ap_CS_fsm_state396() {
    ap_CS_fsm_state396 = ap_CS_fsm.read()[395];
}

void poly1305_hw::thread_ap_CS_fsm_state397() {
    ap_CS_fsm_state397 = ap_CS_fsm.read()[396];
}

void poly1305_hw::thread_ap_CS_fsm_state398() {
    ap_CS_fsm_state398 = ap_CS_fsm.read()[397];
}

void poly1305_hw::thread_ap_CS_fsm_state399() {
    ap_CS_fsm_state399 = ap_CS_fsm.read()[398];
}

void poly1305_hw::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void poly1305_hw::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void poly1305_hw::thread_ap_CS_fsm_state400() {
    ap_CS_fsm_state400 = ap_CS_fsm.read()[399];
}

void poly1305_hw::thread_ap_CS_fsm_state401() {
    ap_CS_fsm_state401 = ap_CS_fsm.read()[400];
}

void poly1305_hw::thread_ap_CS_fsm_state402() {
    ap_CS_fsm_state402 = ap_CS_fsm.read()[401];
}

void poly1305_hw::thread_ap_CS_fsm_state403() {
    ap_CS_fsm_state403 = ap_CS_fsm.read()[402];
}

void poly1305_hw::thread_ap_CS_fsm_state404() {
    ap_CS_fsm_state404 = ap_CS_fsm.read()[403];
}

void poly1305_hw::thread_ap_CS_fsm_state405() {
    ap_CS_fsm_state405 = ap_CS_fsm.read()[404];
}

void poly1305_hw::thread_ap_CS_fsm_state406() {
    ap_CS_fsm_state406 = ap_CS_fsm.read()[405];
}

void poly1305_hw::thread_ap_CS_fsm_state407() {
    ap_CS_fsm_state407 = ap_CS_fsm.read()[406];
}

void poly1305_hw::thread_ap_CS_fsm_state408() {
    ap_CS_fsm_state408 = ap_CS_fsm.read()[407];
}

void poly1305_hw::thread_ap_CS_fsm_state409() {
    ap_CS_fsm_state409 = ap_CS_fsm.read()[408];
}

void poly1305_hw::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void poly1305_hw::thread_ap_CS_fsm_state410() {
    ap_CS_fsm_state410 = ap_CS_fsm.read()[409];
}

void poly1305_hw::thread_ap_CS_fsm_state411() {
    ap_CS_fsm_state411 = ap_CS_fsm.read()[410];
}

void poly1305_hw::thread_ap_CS_fsm_state412() {
    ap_CS_fsm_state412 = ap_CS_fsm.read()[411];
}

void poly1305_hw::thread_ap_CS_fsm_state413() {
    ap_CS_fsm_state413 = ap_CS_fsm.read()[412];
}

void poly1305_hw::thread_ap_CS_fsm_state414() {
    ap_CS_fsm_state414 = ap_CS_fsm.read()[413];
}

void poly1305_hw::thread_ap_CS_fsm_state415() {
    ap_CS_fsm_state415 = ap_CS_fsm.read()[414];
}

void poly1305_hw::thread_ap_CS_fsm_state416() {
    ap_CS_fsm_state416 = ap_CS_fsm.read()[415];
}

void poly1305_hw::thread_ap_CS_fsm_state417() {
    ap_CS_fsm_state417 = ap_CS_fsm.read()[416];
}

void poly1305_hw::thread_ap_CS_fsm_state418() {
    ap_CS_fsm_state418 = ap_CS_fsm.read()[417];
}

void poly1305_hw::thread_ap_CS_fsm_state419() {
    ap_CS_fsm_state419 = ap_CS_fsm.read()[418];
}

void poly1305_hw::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
}

void poly1305_hw::thread_ap_CS_fsm_state420() {
    ap_CS_fsm_state420 = ap_CS_fsm.read()[419];
}

void poly1305_hw::thread_ap_CS_fsm_state421() {
    ap_CS_fsm_state421 = ap_CS_fsm.read()[420];
}

void poly1305_hw::thread_ap_CS_fsm_state422() {
    ap_CS_fsm_state422 = ap_CS_fsm.read()[421];
}

void poly1305_hw::thread_ap_CS_fsm_state423() {
    ap_CS_fsm_state423 = ap_CS_fsm.read()[422];
}

void poly1305_hw::thread_ap_CS_fsm_state424() {
    ap_CS_fsm_state424 = ap_CS_fsm.read()[423];
}

void poly1305_hw::thread_ap_CS_fsm_state425() {
    ap_CS_fsm_state425 = ap_CS_fsm.read()[424];
}

void poly1305_hw::thread_ap_CS_fsm_state426() {
    ap_CS_fsm_state426 = ap_CS_fsm.read()[425];
}

void poly1305_hw::thread_ap_CS_fsm_state427() {
    ap_CS_fsm_state427 = ap_CS_fsm.read()[426];
}

void poly1305_hw::thread_ap_CS_fsm_state428() {
    ap_CS_fsm_state428 = ap_CS_fsm.read()[427];
}

void poly1305_hw::thread_ap_CS_fsm_state429() {
    ap_CS_fsm_state429 = ap_CS_fsm.read()[428];
}

void poly1305_hw::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[42];
}

void poly1305_hw::thread_ap_CS_fsm_state430() {
    ap_CS_fsm_state430 = ap_CS_fsm.read()[429];
}

void poly1305_hw::thread_ap_CS_fsm_state431() {
    ap_CS_fsm_state431 = ap_CS_fsm.read()[430];
}

void poly1305_hw::thread_ap_CS_fsm_state432() {
    ap_CS_fsm_state432 = ap_CS_fsm.read()[431];
}

void poly1305_hw::thread_ap_CS_fsm_state433() {
    ap_CS_fsm_state433 = ap_CS_fsm.read()[432];
}

void poly1305_hw::thread_ap_CS_fsm_state434() {
    ap_CS_fsm_state434 = ap_CS_fsm.read()[433];
}

void poly1305_hw::thread_ap_CS_fsm_state435() {
    ap_CS_fsm_state435 = ap_CS_fsm.read()[434];
}

void poly1305_hw::thread_ap_CS_fsm_state436() {
    ap_CS_fsm_state436 = ap_CS_fsm.read()[435];
}

void poly1305_hw::thread_ap_CS_fsm_state437() {
    ap_CS_fsm_state437 = ap_CS_fsm.read()[436];
}

void poly1305_hw::thread_ap_CS_fsm_state438() {
    ap_CS_fsm_state438 = ap_CS_fsm.read()[437];
}

void poly1305_hw::thread_ap_CS_fsm_state439() {
    ap_CS_fsm_state439 = ap_CS_fsm.read()[438];
}

void poly1305_hw::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void poly1305_hw::thread_ap_CS_fsm_state440() {
    ap_CS_fsm_state440 = ap_CS_fsm.read()[439];
}

void poly1305_hw::thread_ap_CS_fsm_state441() {
    ap_CS_fsm_state441 = ap_CS_fsm.read()[440];
}

void poly1305_hw::thread_ap_CS_fsm_state442() {
    ap_CS_fsm_state442 = ap_CS_fsm.read()[441];
}

void poly1305_hw::thread_ap_CS_fsm_state443() {
    ap_CS_fsm_state443 = ap_CS_fsm.read()[442];
}

void poly1305_hw::thread_ap_CS_fsm_state444() {
    ap_CS_fsm_state444 = ap_CS_fsm.read()[443];
}

void poly1305_hw::thread_ap_CS_fsm_state445() {
    ap_CS_fsm_state445 = ap_CS_fsm.read()[444];
}

void poly1305_hw::thread_ap_CS_fsm_state446() {
    ap_CS_fsm_state446 = ap_CS_fsm.read()[445];
}

void poly1305_hw::thread_ap_CS_fsm_state447() {
    ap_CS_fsm_state447 = ap_CS_fsm.read()[446];
}

void poly1305_hw::thread_ap_CS_fsm_state448() {
    ap_CS_fsm_state448 = ap_CS_fsm.read()[447];
}

void poly1305_hw::thread_ap_CS_fsm_state449() {
    ap_CS_fsm_state449 = ap_CS_fsm.read()[448];
}

void poly1305_hw::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void poly1305_hw::thread_ap_CS_fsm_state450() {
    ap_CS_fsm_state450 = ap_CS_fsm.read()[449];
}

void poly1305_hw::thread_ap_CS_fsm_state451() {
    ap_CS_fsm_state451 = ap_CS_fsm.read()[450];
}

void poly1305_hw::thread_ap_CS_fsm_state452() {
    ap_CS_fsm_state452 = ap_CS_fsm.read()[451];
}

void poly1305_hw::thread_ap_CS_fsm_state453() {
    ap_CS_fsm_state453 = ap_CS_fsm.read()[452];
}

void poly1305_hw::thread_ap_CS_fsm_state454() {
    ap_CS_fsm_state454 = ap_CS_fsm.read()[453];
}

void poly1305_hw::thread_ap_CS_fsm_state455() {
    ap_CS_fsm_state455 = ap_CS_fsm.read()[454];
}

void poly1305_hw::thread_ap_CS_fsm_state456() {
    ap_CS_fsm_state456 = ap_CS_fsm.read()[455];
}

void poly1305_hw::thread_ap_CS_fsm_state457() {
    ap_CS_fsm_state457 = ap_CS_fsm.read()[456];
}

void poly1305_hw::thread_ap_CS_fsm_state458() {
    ap_CS_fsm_state458 = ap_CS_fsm.read()[457];
}

void poly1305_hw::thread_ap_CS_fsm_state459() {
    ap_CS_fsm_state459 = ap_CS_fsm.read()[458];
}

void poly1305_hw::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void poly1305_hw::thread_ap_CS_fsm_state460() {
    ap_CS_fsm_state460 = ap_CS_fsm.read()[459];
}

void poly1305_hw::thread_ap_CS_fsm_state461() {
    ap_CS_fsm_state461 = ap_CS_fsm.read()[460];
}

void poly1305_hw::thread_ap_CS_fsm_state462() {
    ap_CS_fsm_state462 = ap_CS_fsm.read()[461];
}

void poly1305_hw::thread_ap_CS_fsm_state463() {
    ap_CS_fsm_state463 = ap_CS_fsm.read()[462];
}

void poly1305_hw::thread_ap_CS_fsm_state464() {
    ap_CS_fsm_state464 = ap_CS_fsm.read()[463];
}

void poly1305_hw::thread_ap_CS_fsm_state465() {
    ap_CS_fsm_state465 = ap_CS_fsm.read()[464];
}

void poly1305_hw::thread_ap_CS_fsm_state466() {
    ap_CS_fsm_state466 = ap_CS_fsm.read()[465];
}

void poly1305_hw::thread_ap_CS_fsm_state467() {
    ap_CS_fsm_state467 = ap_CS_fsm.read()[466];
}

void poly1305_hw::thread_ap_CS_fsm_state468() {
    ap_CS_fsm_state468 = ap_CS_fsm.read()[467];
}

void poly1305_hw::thread_ap_CS_fsm_state469() {
    ap_CS_fsm_state469 = ap_CS_fsm.read()[468];
}

void poly1305_hw::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void poly1305_hw::thread_ap_CS_fsm_state470() {
    ap_CS_fsm_state470 = ap_CS_fsm.read()[469];
}

void poly1305_hw::thread_ap_CS_fsm_state471() {
    ap_CS_fsm_state471 = ap_CS_fsm.read()[470];
}

void poly1305_hw::thread_ap_CS_fsm_state472() {
    ap_CS_fsm_state472 = ap_CS_fsm.read()[471];
}

void poly1305_hw::thread_ap_CS_fsm_state473() {
    ap_CS_fsm_state473 = ap_CS_fsm.read()[472];
}

void poly1305_hw::thread_ap_CS_fsm_state474() {
    ap_CS_fsm_state474 = ap_CS_fsm.read()[473];
}

void poly1305_hw::thread_ap_CS_fsm_state475() {
    ap_CS_fsm_state475 = ap_CS_fsm.read()[474];
}

void poly1305_hw::thread_ap_CS_fsm_state476() {
    ap_CS_fsm_state476 = ap_CS_fsm.read()[475];
}

void poly1305_hw::thread_ap_CS_fsm_state477() {
    ap_CS_fsm_state477 = ap_CS_fsm.read()[476];
}

void poly1305_hw::thread_ap_CS_fsm_state478() {
    ap_CS_fsm_state478 = ap_CS_fsm.read()[477];
}

void poly1305_hw::thread_ap_CS_fsm_state479() {
    ap_CS_fsm_state479 = ap_CS_fsm.read()[478];
}

void poly1305_hw::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void poly1305_hw::thread_ap_CS_fsm_state480() {
    ap_CS_fsm_state480 = ap_CS_fsm.read()[479];
}

void poly1305_hw::thread_ap_CS_fsm_state481() {
    ap_CS_fsm_state481 = ap_CS_fsm.read()[480];
}

void poly1305_hw::thread_ap_CS_fsm_state482() {
    ap_CS_fsm_state482 = ap_CS_fsm.read()[481];
}

void poly1305_hw::thread_ap_CS_fsm_state483() {
    ap_CS_fsm_state483 = ap_CS_fsm.read()[482];
}

void poly1305_hw::thread_ap_CS_fsm_state484() {
    ap_CS_fsm_state484 = ap_CS_fsm.read()[483];
}

void poly1305_hw::thread_ap_CS_fsm_state485() {
    ap_CS_fsm_state485 = ap_CS_fsm.read()[484];
}

void poly1305_hw::thread_ap_CS_fsm_state486() {
    ap_CS_fsm_state486 = ap_CS_fsm.read()[485];
}

void poly1305_hw::thread_ap_CS_fsm_state487() {
    ap_CS_fsm_state487 = ap_CS_fsm.read()[486];
}

void poly1305_hw::thread_ap_CS_fsm_state488() {
    ap_CS_fsm_state488 = ap_CS_fsm.read()[487];
}

void poly1305_hw::thread_ap_CS_fsm_state489() {
    ap_CS_fsm_state489 = ap_CS_fsm.read()[488];
}

void poly1305_hw::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void poly1305_hw::thread_ap_CS_fsm_state490() {
    ap_CS_fsm_state490 = ap_CS_fsm.read()[489];
}

void poly1305_hw::thread_ap_CS_fsm_state491() {
    ap_CS_fsm_state491 = ap_CS_fsm.read()[490];
}

void poly1305_hw::thread_ap_CS_fsm_state492() {
    ap_CS_fsm_state492 = ap_CS_fsm.read()[491];
}

void poly1305_hw::thread_ap_CS_fsm_state493() {
    ap_CS_fsm_state493 = ap_CS_fsm.read()[492];
}

void poly1305_hw::thread_ap_CS_fsm_state494() {
    ap_CS_fsm_state494 = ap_CS_fsm.read()[493];
}

void poly1305_hw::thread_ap_CS_fsm_state495() {
    ap_CS_fsm_state495 = ap_CS_fsm.read()[494];
}

void poly1305_hw::thread_ap_CS_fsm_state496() {
    ap_CS_fsm_state496 = ap_CS_fsm.read()[495];
}

void poly1305_hw::thread_ap_CS_fsm_state497() {
    ap_CS_fsm_state497 = ap_CS_fsm.read()[496];
}

void poly1305_hw::thread_ap_CS_fsm_state498() {
    ap_CS_fsm_state498 = ap_CS_fsm.read()[497];
}

void poly1305_hw::thread_ap_CS_fsm_state499() {
    ap_CS_fsm_state499 = ap_CS_fsm.read()[498];
}

void poly1305_hw::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void poly1305_hw::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void poly1305_hw::thread_ap_CS_fsm_state500() {
    ap_CS_fsm_state500 = ap_CS_fsm.read()[499];
}

void poly1305_hw::thread_ap_CS_fsm_state501() {
    ap_CS_fsm_state501 = ap_CS_fsm.read()[500];
}

void poly1305_hw::thread_ap_CS_fsm_state502() {
    ap_CS_fsm_state502 = ap_CS_fsm.read()[501];
}

void poly1305_hw::thread_ap_CS_fsm_state503() {
    ap_CS_fsm_state503 = ap_CS_fsm.read()[502];
}

void poly1305_hw::thread_ap_CS_fsm_state504() {
    ap_CS_fsm_state504 = ap_CS_fsm.read()[503];
}

void poly1305_hw::thread_ap_CS_fsm_state505() {
    ap_CS_fsm_state505 = ap_CS_fsm.read()[504];
}

void poly1305_hw::thread_ap_CS_fsm_state506() {
    ap_CS_fsm_state506 = ap_CS_fsm.read()[505];
}

void poly1305_hw::thread_ap_CS_fsm_state507() {
    ap_CS_fsm_state507 = ap_CS_fsm.read()[506];
}

void poly1305_hw::thread_ap_CS_fsm_state508() {
    ap_CS_fsm_state508 = ap_CS_fsm.read()[507];
}

void poly1305_hw::thread_ap_CS_fsm_state509() {
    ap_CS_fsm_state509 = ap_CS_fsm.read()[508];
}

void poly1305_hw::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void poly1305_hw::thread_ap_CS_fsm_state510() {
    ap_CS_fsm_state510 = ap_CS_fsm.read()[509];
}

void poly1305_hw::thread_ap_CS_fsm_state511() {
    ap_CS_fsm_state511 = ap_CS_fsm.read()[510];
}

void poly1305_hw::thread_ap_CS_fsm_state512() {
    ap_CS_fsm_state512 = ap_CS_fsm.read()[511];
}

void poly1305_hw::thread_ap_CS_fsm_state513() {
    ap_CS_fsm_state513 = ap_CS_fsm.read()[512];
}

void poly1305_hw::thread_ap_CS_fsm_state514() {
    ap_CS_fsm_state514 = ap_CS_fsm.read()[513];
}

void poly1305_hw::thread_ap_CS_fsm_state515() {
    ap_CS_fsm_state515 = ap_CS_fsm.read()[514];
}

void poly1305_hw::thread_ap_CS_fsm_state516() {
    ap_CS_fsm_state516 = ap_CS_fsm.read()[515];
}

void poly1305_hw::thread_ap_CS_fsm_state517() {
    ap_CS_fsm_state517 = ap_CS_fsm.read()[516];
}

void poly1305_hw::thread_ap_CS_fsm_state518() {
    ap_CS_fsm_state518 = ap_CS_fsm.read()[517];
}

void poly1305_hw::thread_ap_CS_fsm_state519() {
    ap_CS_fsm_state519 = ap_CS_fsm.read()[518];
}

void poly1305_hw::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void poly1305_hw::thread_ap_CS_fsm_state520() {
    ap_CS_fsm_state520 = ap_CS_fsm.read()[519];
}

void poly1305_hw::thread_ap_CS_fsm_state521() {
    ap_CS_fsm_state521 = ap_CS_fsm.read()[520];
}

void poly1305_hw::thread_ap_CS_fsm_state522() {
    ap_CS_fsm_state522 = ap_CS_fsm.read()[521];
}

void poly1305_hw::thread_ap_CS_fsm_state523() {
    ap_CS_fsm_state523 = ap_CS_fsm.read()[522];
}

void poly1305_hw::thread_ap_CS_fsm_state524() {
    ap_CS_fsm_state524 = ap_CS_fsm.read()[523];
}

void poly1305_hw::thread_ap_CS_fsm_state525() {
    ap_CS_fsm_state525 = ap_CS_fsm.read()[524];
}

void poly1305_hw::thread_ap_CS_fsm_state526() {
    ap_CS_fsm_state526 = ap_CS_fsm.read()[525];
}

void poly1305_hw::thread_ap_CS_fsm_state527() {
    ap_CS_fsm_state527 = ap_CS_fsm.read()[526];
}

void poly1305_hw::thread_ap_CS_fsm_state528() {
    ap_CS_fsm_state528 = ap_CS_fsm.read()[527];
}

void poly1305_hw::thread_ap_CS_fsm_state529() {
    ap_CS_fsm_state529 = ap_CS_fsm.read()[528];
}

void poly1305_hw::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void poly1305_hw::thread_ap_CS_fsm_state530() {
    ap_CS_fsm_state530 = ap_CS_fsm.read()[529];
}

void poly1305_hw::thread_ap_CS_fsm_state531() {
    ap_CS_fsm_state531 = ap_CS_fsm.read()[530];
}

void poly1305_hw::thread_ap_CS_fsm_state532() {
    ap_CS_fsm_state532 = ap_CS_fsm.read()[531];
}

void poly1305_hw::thread_ap_CS_fsm_state533() {
    ap_CS_fsm_state533 = ap_CS_fsm.read()[532];
}

void poly1305_hw::thread_ap_CS_fsm_state534() {
    ap_CS_fsm_state534 = ap_CS_fsm.read()[533];
}

void poly1305_hw::thread_ap_CS_fsm_state535() {
    ap_CS_fsm_state535 = ap_CS_fsm.read()[534];
}

}

