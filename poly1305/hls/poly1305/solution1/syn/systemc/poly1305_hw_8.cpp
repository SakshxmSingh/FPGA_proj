#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_fullArr_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state478.read()))) {
        fullArr_2_ce0 = ap_const_logic_1;
    } else {
        fullArr_2_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_fullArr_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln749_fu_58524_p2.read()))) {
        fullArr_2_we0 = ap_const_logic_1;
    } else {
        fullArr_2_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_fullArr_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state726.read())) {
        fullArr_address0 =  (sc_lv<6>) (zext_ln230_fu_84809_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state725.read())) {
        fullArr_address0 =  (sc_lv<6>) (zext_ln222_fu_84768_p1.read());
    } else {
        fullArr_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void poly1305_hw::thread_fullArr_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state725.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state726.read()))) {
        fullArr_ce0 = ap_const_logic_1;
    } else {
        fullArr_ce0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_fullArr_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state725.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln221_fu_84757_p2.read()))) {
        fullArr_we0 = ap_const_logic_1;
    } else {
        fullArr_we0 = ap_const_logic_0;
    }
}

void poly1305_hw::thread_grp_fu_19098_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_fu_19098_p1 = mul_ln382_reg_100674.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_fu_19098_p1 = mul_ln382_fu_30351_p2.read();
    } else {
        grp_fu_19098_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19098_p4() {
    grp_fu_19098_p4 = grp_fu_19098_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_19294_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        grp_fu_19294_p1 = add_ln382_2_reg_100799.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        grp_fu_19294_p1 = grp_fu_87841_p3.read();
    } else {
        grp_fu_19294_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19304_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        grp_fu_19304_p1 = add_ln382_5_reg_100916.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        grp_fu_19304_p1 = grp_fu_87868_p3.read();
    } else {
        grp_fu_19304_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19314_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        grp_fu_19314_p1 = add_ln382_8_reg_101033.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        grp_fu_19314_p1 = grp_fu_87895_p3.read();
    } else {
        grp_fu_19314_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19324_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        grp_fu_19324_p1 = add_ln382_11_reg_101150.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        grp_fu_19324_p1 = grp_fu_87922_p3.read();
    } else {
        grp_fu_19324_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19334_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        grp_fu_19334_p1 = add_ln382_14_reg_101267.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_fu_19334_p1 = grp_fu_87949_p3.read();
    } else {
        grp_fu_19334_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19344_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_fu_19344_p1 = mul_ln382_17_reg_101332.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        grp_fu_19344_p1 = mul_ln382_17_fu_31072_p2.read();
    } else {
        grp_fu_19344_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19344_p4() {
    grp_fu_19344_p4 = grp_fu_19344_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_19354_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_fu_19354_p1 = add_ln382_18_reg_101398.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_fu_19354_p1 = grp_fu_87985_p3.read();
    } else {
        grp_fu_19354_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19364_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_fu_19364_p1 = add_ln382_21_reg_101468.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        grp_fu_19364_p1 = grp_fu_88011_p3.read();
    } else {
        grp_fu_19364_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19374_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_fu_19374_p1 = add_ln382_24_reg_101538.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        grp_fu_19374_p1 = grp_fu_88037_p3.read();
    } else {
        grp_fu_19374_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19384_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_fu_19384_p1 = add_ln382_27_reg_101608.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_fu_19384_p1 = grp_fu_88063_p3.read();
    } else {
        grp_fu_19384_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19394_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        grp_fu_19394_p1 = add_ln382_30_reg_101678.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        grp_fu_19394_p1 = grp_fu_88089_p3.read();
    } else {
        grp_fu_19394_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19404_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        grp_fu_19404_p1 = mul_ln382_34_reg_101723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        grp_fu_19404_p1 = mul_ln382_34_fu_32343_p2.read();
    } else {
        grp_fu_19404_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19404_p4() {
    grp_fu_19404_p4 = grp_fu_19404_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_19414_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_fu_19414_p1 = add_ln382_34_reg_101789.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_fu_19414_p1 = grp_fu_88124_p3.read();
    } else {
        grp_fu_19414_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19424_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_19424_p1 = add_ln382_37_reg_101859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        grp_fu_19424_p1 = grp_fu_88150_p3.read();
    } else {
        grp_fu_19424_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19434_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        grp_fu_19434_p1 = add_ln382_40_reg_101929.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        grp_fu_19434_p1 = grp_fu_88176_p3.read();
    } else {
        grp_fu_19434_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19444_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        grp_fu_19444_p1 = add_ln382_43_reg_101999.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        grp_fu_19444_p1 = grp_fu_88202_p3.read();
    } else {
        grp_fu_19444_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19454_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        grp_fu_19454_p1 = add_ln382_46_reg_102069.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_19454_p1 = grp_fu_88228_p3.read();
    } else {
        grp_fu_19454_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19464_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        grp_fu_19464_p1 = mul_ln382_51_reg_102114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        grp_fu_19464_p1 = mul_ln382_51_fu_33640_p2.read();
    } else {
        grp_fu_19464_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19464_p4() {
    grp_fu_19464_p4 = grp_fu_19464_p1.read().range(11, 8);
}

void poly1305_hw::thread_grp_fu_19474_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_fu_19474_p1 = add_ln382_50_reg_102180.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        grp_fu_19474_p1 = grp_fu_88263_p3.read();
    } else {
        grp_fu_19474_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19484_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        grp_fu_19484_p1 = add_ln382_53_reg_102250.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_fu_19484_p1 = grp_fu_88289_p3.read();
    } else {
        grp_fu_19484_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19494_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        grp_fu_19494_p1 = add_ln382_56_reg_102320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        grp_fu_19494_p1 = grp_fu_88315_p3.read();
    } else {
        grp_fu_19494_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19504_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        grp_fu_19504_p1 = add_ln382_59_reg_102390.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        grp_fu_19504_p1 = grp_fu_88341_p3.read();
    } else {
        grp_fu_19504_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19514_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        grp_fu_19514_p1 = add_ln382_62_reg_102460.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        grp_fu_19514_p1 = grp_fu_88367_p3.read();
    } else {
        grp_fu_19514_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19524_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        grp_fu_19524_p1 = mul_ln382_68_reg_102505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        grp_fu_19524_p1 = mul_ln382_68_fu_34937_p2.read();
    } else {
        grp_fu_19524_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19524_p4() {
    grp_fu_19524_p4 = grp_fu_19524_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_19534_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_fu_19534_p1 = add_ln382_66_reg_102576.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        grp_fu_19534_p1 = grp_fu_88402_p3.read();
    } else {
        grp_fu_19534_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19544_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        grp_fu_19544_p1 = add_ln382_69_reg_102646.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        grp_fu_19544_p1 = grp_fu_88428_p3.read();
    } else {
        grp_fu_19544_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19554_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        grp_fu_19554_p1 = add_ln382_72_reg_102716.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        grp_fu_19554_p1 = grp_fu_88454_p3.read();
    } else {
        grp_fu_19554_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19564_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        grp_fu_19564_p1 = add_ln382_75_reg_102786.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        grp_fu_19564_p1 = grp_fu_88480_p3.read();
    } else {
        grp_fu_19564_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19574_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        grp_fu_19574_p1 = add_ln382_78_reg_102856.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        grp_fu_19574_p1 = grp_fu_88506_p3.read();
    } else {
        grp_fu_19574_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19584_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fu_19584_p1 = mul_ln382_85_reg_102901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        grp_fu_19584_p1 = mul_ln382_85_fu_36237_p2.read();
    } else {
        grp_fu_19584_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19584_p4() {
    grp_fu_19584_p4 = grp_fu_19584_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_19594_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_19594_p1 = add_ln382_82_reg_102967.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        grp_fu_19594_p1 = grp_fu_88541_p3.read();
    } else {
        grp_fu_19594_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19604_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        grp_fu_19604_p1 = add_ln382_85_reg_103037.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        grp_fu_19604_p1 = grp_fu_88567_p3.read();
    } else {
        grp_fu_19604_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19614_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        grp_fu_19614_p1 = add_ln382_88_reg_103107.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        grp_fu_19614_p1 = grp_fu_88593_p3.read();
    } else {
        grp_fu_19614_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19624_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        grp_fu_19624_p1 = add_ln382_91_reg_103177.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        grp_fu_19624_p1 = grp_fu_88619_p3.read();
    } else {
        grp_fu_19624_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19634_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        grp_fu_19634_p1 = add_ln382_94_reg_103247.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        grp_fu_19634_p1 = grp_fu_88645_p3.read();
    } else {
        grp_fu_19634_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19644_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        grp_fu_19644_p1 = mul_ln382_102_reg_103292.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        grp_fu_19644_p1 = mul_ln382_102_fu_37534_p2.read();
    } else {
        grp_fu_19644_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19644_p4() {
    grp_fu_19644_p4 = grp_fu_19644_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_19654_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_fu_19654_p1 = add_ln382_98_reg_103358.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        grp_fu_19654_p1 = grp_fu_88680_p3.read();
    } else {
        grp_fu_19654_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19664_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        grp_fu_19664_p1 = add_ln382_101_reg_103428.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        grp_fu_19664_p1 = grp_fu_88706_p3.read();
    } else {
        grp_fu_19664_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19674_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        grp_fu_19674_p1 = add_ln382_104_reg_103498.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_fu_19674_p1 = grp_fu_88732_p3.read();
    } else {
        grp_fu_19674_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19684_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_19684_p1 = add_ln382_107_reg_103568.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_fu_19684_p1 = grp_fu_88758_p3.read();
    } else {
        grp_fu_19684_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19694_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        grp_fu_19694_p1 = add_ln382_110_reg_103638.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_fu_19694_p1 = grp_fu_88784_p3.read();
    } else {
        grp_fu_19694_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19704_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        grp_fu_19704_p1 = mul_ln382_119_reg_103683.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        grp_fu_19704_p1 = mul_ln382_119_fu_38831_p2.read();
    } else {
        grp_fu_19704_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19704_p4() {
    grp_fu_19704_p4 = grp_fu_19704_p1.read().range(11, 8);
}

void poly1305_hw::thread_grp_fu_19714_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_19714_p1 = add_ln382_114_reg_103749.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        grp_fu_19714_p1 = grp_fu_88819_p3.read();
    } else {
        grp_fu_19714_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19724_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        grp_fu_19724_p1 = add_ln382_117_reg_103819.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_19724_p1 = grp_fu_88845_p3.read();
    } else {
        grp_fu_19724_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19734_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_fu_19734_p1 = add_ln382_120_reg_103889.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read())) {
        grp_fu_19734_p1 = grp_fu_88871_p3.read();
    } else {
        grp_fu_19734_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19744_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_fu_19744_p1 = add_ln382_123_reg_103959.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read())) {
        grp_fu_19744_p1 = grp_fu_88897_p3.read();
    } else {
        grp_fu_19744_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19754_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_fu_19754_p1 = add_ln382_126_reg_104029.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        grp_fu_19754_p1 = grp_fu_88923_p3.read();
    } else {
        grp_fu_19754_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19764_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        grp_fu_19764_p1 = mul_ln382_136_reg_104074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_fu_19764_p1 = mul_ln382_136_fu_40128_p2.read();
    } else {
        grp_fu_19764_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19764_p4() {
    grp_fu_19764_p4 = grp_fu_19764_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_19774_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        grp_fu_19774_p1 = add_ln382_130_reg_104145.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_fu_19774_p1 = grp_fu_88958_p3.read();
    } else {
        grp_fu_19774_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19784_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        grp_fu_19784_p1 = add_ln382_133_reg_104215.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_fu_19784_p1 = grp_fu_88984_p3.read();
    } else {
        grp_fu_19784_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19794_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        grp_fu_19794_p1 = add_ln382_136_reg_104285.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_fu_19794_p1 = grp_fu_89010_p3.read();
    } else {
        grp_fu_19794_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19804_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_19804_p1 = add_ln382_139_reg_104355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        grp_fu_19804_p1 = grp_fu_89036_p3.read();
    } else {
        grp_fu_19804_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19814_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        grp_fu_19814_p1 = add_ln382_142_reg_104425.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_fu_19814_p1 = grp_fu_89062_p3.read();
    } else {
        grp_fu_19814_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19824_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_fu_19824_p1 = mul_ln382_153_reg_104470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        grp_fu_19824_p1 = mul_ln382_153_fu_41428_p2.read();
    } else {
        grp_fu_19824_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19824_p4() {
    grp_fu_19824_p4 = grp_fu_19824_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_19834_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_fu_19834_p1 = add_ln382_146_reg_104536.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        grp_fu_19834_p1 = grp_fu_89097_p3.read();
    } else {
        grp_fu_19834_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19844_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        grp_fu_19844_p1 = add_ln382_149_reg_104606.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        grp_fu_19844_p1 = grp_fu_89123_p3.read();
    } else {
        grp_fu_19844_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19854_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        grp_fu_19854_p1 = add_ln382_152_reg_104676.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        grp_fu_19854_p1 = grp_fu_89149_p3.read();
    } else {
        grp_fu_19854_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19864_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        grp_fu_19864_p1 = add_ln382_155_reg_104746.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        grp_fu_19864_p1 = grp_fu_89175_p3.read();
    } else {
        grp_fu_19864_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19874_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        grp_fu_19874_p1 = add_ln382_158_reg_104816.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        grp_fu_19874_p1 = grp_fu_89201_p3.read();
    } else {
        grp_fu_19874_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19884_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read())) {
        grp_fu_19884_p1 = mul_ln382_170_reg_104861.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        grp_fu_19884_p1 = mul_ln382_170_fu_42725_p2.read();
    } else {
        grp_fu_19884_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19884_p4() {
    grp_fu_19884_p4 = grp_fu_19884_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_19894_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read())) {
        grp_fu_19894_p1 = add_ln382_162_reg_104927.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        grp_fu_19894_p1 = grp_fu_89236_p3.read();
    } else {
        grp_fu_19894_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19904_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        grp_fu_19904_p1 = add_ln382_165_reg_104997.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        grp_fu_19904_p1 = grp_fu_89262_p3.read();
    } else {
        grp_fu_19904_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19914_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        grp_fu_19914_p1 = add_ln382_168_reg_105067.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        grp_fu_19914_p1 = grp_fu_89288_p3.read();
    } else {
        grp_fu_19914_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19924_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        grp_fu_19924_p1 = add_ln382_171_reg_105137.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        grp_fu_19924_p1 = grp_fu_89314_p3.read();
    } else {
        grp_fu_19924_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19934_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_19934_p1 = add_ln382_174_reg_105207.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        grp_fu_19934_p1 = grp_fu_89340_p3.read();
    } else {
        grp_fu_19934_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19944_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        grp_fu_19944_p1 = mul_ln382_187_reg_105252.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_19944_p1 = mul_ln382_187_fu_44022_p2.read();
    } else {
        grp_fu_19944_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19944_p4() {
    grp_fu_19944_p4 = grp_fu_19944_p1.read().range(11, 8);
}

void poly1305_hw::thread_grp_fu_19954_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read())) {
        grp_fu_19954_p1 = add_ln382_178_reg_105318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        grp_fu_19954_p1 = grp_fu_89375_p3.read();
    } else {
        grp_fu_19954_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19964_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read())) {
        grp_fu_19964_p1 = add_ln382_181_reg_105388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        grp_fu_19964_p1 = grp_fu_89401_p3.read();
    } else {
        grp_fu_19964_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19974_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        grp_fu_19974_p1 = add_ln382_184_reg_105458.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        grp_fu_19974_p1 = grp_fu_89427_p3.read();
    } else {
        grp_fu_19974_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19984_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read())) {
        grp_fu_19984_p1 = add_ln382_187_reg_105528.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        grp_fu_19984_p1 = grp_fu_89453_p3.read();
    } else {
        grp_fu_19984_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_19994_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        grp_fu_19994_p1 = add_ln382_190_reg_105598.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        grp_fu_19994_p1 = grp_fu_89479_p3.read();
    } else {
        grp_fu_19994_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20004_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        grp_fu_20004_p1 = mul_ln382_204_reg_105643.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        grp_fu_20004_p1 = mul_ln382_204_fu_45319_p2.read();
    } else {
        grp_fu_20004_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20004_p4() {
    grp_fu_20004_p4 = grp_fu_20004_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20014_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        grp_fu_20014_p1 = add_ln382_194_reg_105714.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        grp_fu_20014_p1 = grp_fu_89514_p3.read();
    } else {
        grp_fu_20014_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20024_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        grp_fu_20024_p1 = add_ln382_197_reg_105784.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read())) {
        grp_fu_20024_p1 = grp_fu_89540_p3.read();
    } else {
        grp_fu_20024_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20034_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        grp_fu_20034_p1 = add_ln382_200_reg_105854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        grp_fu_20034_p1 = grp_fu_89566_p3.read();
    } else {
        grp_fu_20034_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20044_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read())) {
        grp_fu_20044_p1 = add_ln382_203_reg_105924.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        grp_fu_20044_p1 = grp_fu_89592_p3.read();
    } else {
        grp_fu_20044_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20054_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        grp_fu_20054_p1 = add_ln382_206_reg_105994.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        grp_fu_20054_p1 = grp_fu_89618_p3.read();
    } else {
        grp_fu_20054_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20064_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read())) {
        grp_fu_20064_p1 = mul_ln382_221_reg_106039.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        grp_fu_20064_p1 = mul_ln382_221_fu_46619_p2.read();
    } else {
        grp_fu_20064_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20064_p4() {
    grp_fu_20064_p4 = grp_fu_20064_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20074_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        grp_fu_20074_p1 = add_ln382_210_reg_106105.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        grp_fu_20074_p1 = grp_fu_89653_p3.read();
    } else {
        grp_fu_20074_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20084_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_20084_p1 = add_ln382_213_reg_106175.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        grp_fu_20084_p1 = grp_fu_89679_p3.read();
    } else {
        grp_fu_20084_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20094_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        grp_fu_20094_p1 = add_ln382_216_reg_106245.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read())) {
        grp_fu_20094_p1 = grp_fu_89705_p3.read();
    } else {
        grp_fu_20094_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20104_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        grp_fu_20104_p1 = add_ln382_219_reg_106315.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read())) {
        grp_fu_20104_p1 = grp_fu_89731_p3.read();
    } else {
        grp_fu_20104_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20114_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        grp_fu_20114_p1 = add_ln382_222_reg_106385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        grp_fu_20114_p1 = grp_fu_89757_p3.read();
    } else {
        grp_fu_20114_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20124_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read())) {
        grp_fu_20124_p1 = mul_ln382_238_reg_106430.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        grp_fu_20124_p1 = mul_ln382_238_fu_47916_p2.read();
    } else {
        grp_fu_20124_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20124_p4() {
    grp_fu_20124_p4 = grp_fu_20124_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20134_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        grp_fu_20134_p1 = add_ln382_226_reg_106496.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        grp_fu_20134_p1 = grp_fu_89792_p3.read();
    } else {
        grp_fu_20134_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20144_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read())) {
        grp_fu_20144_p1 = add_ln382_229_reg_106566.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        grp_fu_20144_p1 = grp_fu_89818_p3.read();
    } else {
        grp_fu_20144_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20154_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state180.read())) {
        grp_fu_20154_p1 = add_ln382_232_reg_106636.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        grp_fu_20154_p1 = grp_fu_89844_p3.read();
    } else {
        grp_fu_20154_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20164_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read())) {
        grp_fu_20164_p1 = add_ln382_235_reg_106706.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        grp_fu_20164_p1 = grp_fu_89870_p3.read();
    } else {
        grp_fu_20164_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20174_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        grp_fu_20174_p1 = add_ln382_238_reg_106776.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read())) {
        grp_fu_20174_p1 = grp_fu_89896_p3.read();
    } else {
        grp_fu_20174_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20184_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read())) {
        grp_fu_20184_p1 = mul_ln382_255_reg_106821.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        grp_fu_20184_p1 = mul_ln382_255_fu_49213_p2.read();
    } else {
        grp_fu_20184_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20184_p4() {
    grp_fu_20184_p4 = grp_fu_20184_p1.read().range(11, 8);
}

void poly1305_hw::thread_grp_fu_20194_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read())) {
        grp_fu_20194_p1 = add_ln382_242_reg_106887.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        grp_fu_20194_p1 = grp_fu_89931_p3.read();
    } else {
        grp_fu_20194_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20204_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        grp_fu_20204_p1 = add_ln382_245_reg_106957.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read())) {
        grp_fu_20204_p1 = grp_fu_89957_p3.read();
    } else {
        grp_fu_20204_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20214_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read())) {
        grp_fu_20214_p1 = add_ln382_248_reg_107027.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        grp_fu_20214_p1 = grp_fu_89983_p3.read();
    } else {
        grp_fu_20214_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20224_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read())) {
        grp_fu_20224_p1 = add_ln382_251_reg_107097.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read())) {
        grp_fu_20224_p1 = grp_fu_90009_p3.read();
    } else {
        grp_fu_20224_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20234_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state195.read())) {
        grp_fu_20234_p1 = add_ln382_254_reg_107167.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        grp_fu_20234_p1 = grp_fu_90035_p3.read();
    } else {
        grp_fu_20234_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20244_p2() {
    grp_fu_20244_p2 = (!mul_31_3_reg_107210.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_31_3_reg_107210.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20249_p2() {
    grp_fu_20249_p2 = (!mul_30_5_reg_107191.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_30_5_reg_107191.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20254_p2() {
    grp_fu_20254_p2 = (!mul_29_7_reg_107161.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_29_7_reg_107161.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20259_p2() {
    grp_fu_20259_p2 = (!mul_28_9_reg_107146.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_28_9_reg_107146.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20264_p2() {
    grp_fu_20264_p2 = (!mul_27_11_reg_107126.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_27_11_reg_107126.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20269_p2() {
    grp_fu_20269_p2 = (!mul_26_13_reg_107091.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_26_13_reg_107091.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20274_p2() {
    grp_fu_20274_p2 = (!mul_25_15_reg_107076.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_25_15_reg_107076.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20279_p2() {
    grp_fu_20279_p2 = (!mul_24_17_reg_107056.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_24_17_reg_107056.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20284_p2() {
    grp_fu_20284_p2 = (!mul_23_19_reg_107021.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_23_19_reg_107021.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20289_p2() {
    grp_fu_20289_p2 = (!mul_22_21_reg_107006.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_22_21_reg_107006.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20294_p2() {
    grp_fu_20294_p2 = (!mul_21_23_reg_106986.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_21_23_reg_106986.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20299_p2() {
    grp_fu_20299_p2 = (!mul_20_25_reg_106951.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_20_25_reg_106951.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20304_p2() {
    grp_fu_20304_p2 = (!mul_19_27_reg_106936.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_19_27_reg_106936.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20309_p2() {
    grp_fu_20309_p2 = (!mul_18_29_reg_106916.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_18_29_reg_106916.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20314_p2() {
    grp_fu_20314_p2 = (!mul_17_31_reg_106881.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_17_31_reg_106881.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20319_p2() {
    grp_fu_20319_p2 = (!add_ln402_239_reg_106866.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_239_reg_106866.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20324_p2() {
    grp_fu_20324_p2 = (!add_ln402_238_reg_106846.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_238_reg_106846.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20329_p2() {
    grp_fu_20329_p2 = (!add_ln402_221_reg_106455.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_221_reg_106455.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20334_p2() {
    grp_fu_20334_p2 = (!add_ln402_204_reg_106064.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_204_reg_106064.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20339_p2() {
    grp_fu_20339_p2 = (!add_ln402_187_reg_105673.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_187_reg_105673.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20344_p2() {
    grp_fu_20344_p2 = (!add_ln402_170_reg_105277.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_170_reg_105277.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20349_p2() {
    grp_fu_20349_p2 = (!add_ln402_153_reg_104886.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_153_reg_104886.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20354_p2() {
    grp_fu_20354_p2 = (!add_ln402_136_reg_104495.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_136_reg_104495.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20359_p2() {
    grp_fu_20359_p2 = (!add_ln402_119_reg_104104.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_119_reg_104104.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20364_p2() {
    grp_fu_20364_p2 = (!add_ln402_102_reg_103708.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_102_reg_103708.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20369_p2() {
    grp_fu_20369_p2 = (!add_ln402_85_reg_103317.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_85_reg_103317.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20374_p2() {
    grp_fu_20374_p2 = (!add_ln402_68_reg_102926.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_68_reg_102926.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20379_p2() {
    grp_fu_20379_p2 = (!add_ln402_51_reg_102535.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_51_reg_102535.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20384_p2() {
    grp_fu_20384_p2 = (!add_ln402_34_reg_102139.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_34_reg_102139.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20389_p2() {
    grp_fu_20389_p2 = (!add_ln402_17_reg_101748.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_17_reg_101748.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20394_p2() {
    grp_fu_20394_p2 = (!add_ln402_reg_101357.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln402_reg_101357.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20399_p2() {
    grp_fu_20399_p2 = (!trunc_ln395_reg_100704.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln395_reg_100704.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_20404_p2() {
    grp_fu_20404_p2 = (!arr1_1_q0.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_q0.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_grp_fu_20411_p2() {
    grp_fu_20411_p2 = (!arr1_1_q1.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_q1.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_grp_fu_20418_p2() {
    grp_fu_20418_p2 = (!arr1_1_q0.read().is_01() || !ap_const_lv32_FF.is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_1_q0.read()) < sc_bigint<32>(ap_const_lv32_FF));
}

void poly1305_hw::thread_grp_fu_20424_p3() {
    grp_fu_20424_p3 = arr1_1_q0.read().range(31, 31);
}

void poly1305_hw::thread_grp_fu_20432_p2() {
    grp_fu_20432_p2 = (!arr1_1_q0.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_1_q0.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_grp_fu_20439_p2() {
    grp_fu_20439_p2 = (!arr1_1_q0.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_1_q0.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_grp_fu_20445_p2() {
    grp_fu_20445_p2 = (!arr1_1_q1.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_1_q1.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_grp_fu_20456_p2() {
    grp_fu_20456_p2 = (!arr1_2_q0.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_2_q0.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_grp_fu_20463_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read())) {
        grp_fu_20463_p1 = mul_ln96_reg_110622.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        grp_fu_20463_p1 = mul_ln96_fu_64000_p2.read();
    } else {
        grp_fu_20463_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20463_p4() {
    grp_fu_20463_p4 = grp_fu_20463_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20473_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state529.read())) {
        grp_fu_20473_p1 = add_ln96_2_reg_110747.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        grp_fu_20473_p1 = grp_fu_90216_p3.read();
    } else {
        grp_fu_20473_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20483_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read())) {
        grp_fu_20483_p1 = add_ln96_5_reg_110864.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state530.read())) {
        grp_fu_20483_p1 = grp_fu_90243_p3.read();
    } else {
        grp_fu_20483_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20493_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state533.read())) {
        grp_fu_20493_p1 = add_ln96_8_reg_110981.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state532.read())) {
        grp_fu_20493_p1 = grp_fu_90270_p3.read();
    } else {
        grp_fu_20493_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20503_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read())) {
        grp_fu_20503_p1 = add_ln96_11_reg_111098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        grp_fu_20503_p1 = grp_fu_90297_p3.read();
    } else {
        grp_fu_20503_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20513_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state537.read())) {
        grp_fu_20513_p1 = add_ln96_14_reg_111215.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read())) {
        grp_fu_20513_p1 = grp_fu_90324_p3.read();
    } else {
        grp_fu_20513_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20523_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read())) {
        grp_fu_20523_p1 = mul_ln96_17_reg_111280.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state537.read())) {
        grp_fu_20523_p1 = mul_ln96_17_fu_64721_p2.read();
    } else {
        grp_fu_20523_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20523_p4() {
    grp_fu_20523_p4 = grp_fu_20523_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20533_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read())) {
        grp_fu_20533_p1 = add_ln96_18_reg_111346.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state539.read())) {
        grp_fu_20533_p1 = grp_fu_90360_p3.read();
    } else {
        grp_fu_20533_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20543_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state542.read())) {
        grp_fu_20543_p1 = add_ln96_21_reg_111416.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state541.read())) {
        grp_fu_20543_p1 = grp_fu_90386_p3.read();
    } else {
        grp_fu_20543_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20553_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state544.read())) {
        grp_fu_20553_p1 = add_ln96_24_reg_111486.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state543.read())) {
        grp_fu_20553_p1 = grp_fu_90412_p3.read();
    } else {
        grp_fu_20553_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20563_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read())) {
        grp_fu_20563_p1 = add_ln96_27_reg_111556.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read())) {
        grp_fu_20563_p1 = grp_fu_90438_p3.read();
    } else {
        grp_fu_20563_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20573_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        grp_fu_20573_p1 = add_ln96_30_reg_111626.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state547.read())) {
        grp_fu_20573_p1 = grp_fu_90464_p3.read();
    } else {
        grp_fu_20573_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20583_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state549.read())) {
        grp_fu_20583_p1 = mul_ln96_34_reg_111671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        grp_fu_20583_p1 = mul_ln96_34_fu_65992_p2.read();
    } else {
        grp_fu_20583_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20583_p4() {
    grp_fu_20583_p4 = grp_fu_20583_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20593_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state551.read())) {
        grp_fu_20593_p1 = add_ln96_34_reg_111737.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read())) {
        grp_fu_20593_p1 = grp_fu_90499_p3.read();
    } else {
        grp_fu_20593_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20603_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state553.read())) {
        grp_fu_20603_p1 = add_ln96_37_reg_111807.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state552.read())) {
        grp_fu_20603_p1 = grp_fu_90525_p3.read();
    } else {
        grp_fu_20603_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20613_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read())) {
        grp_fu_20613_p1 = add_ln96_40_reg_111877.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read())) {
        grp_fu_20613_p1 = grp_fu_90551_p3.read();
    } else {
        grp_fu_20613_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20623_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state557.read())) {
        grp_fu_20623_p1 = add_ln96_43_reg_111947.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state556.read())) {
        grp_fu_20623_p1 = grp_fu_90577_p3.read();
    } else {
        grp_fu_20623_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20633_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read())) {
        grp_fu_20633_p1 = add_ln96_46_reg_112017.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state558.read())) {
        grp_fu_20633_p1 = grp_fu_90603_p3.read();
    } else {
        grp_fu_20633_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20643_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read())) {
        grp_fu_20643_p1 = mul_ln96_51_reg_112062.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read())) {
        grp_fu_20643_p1 = mul_ln96_51_fu_67289_p2.read();
    } else {
        grp_fu_20643_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20643_p4() {
    grp_fu_20643_p4 = grp_fu_20643_p1.read().range(11, 8);
}

void poly1305_hw::thread_grp_fu_20653_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state562.read())) {
        grp_fu_20653_p1 = add_ln96_50_reg_112128.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state561.read())) {
        grp_fu_20653_p1 = grp_fu_90638_p3.read();
    } else {
        grp_fu_20653_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20663_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read())) {
        grp_fu_20663_p1 = add_ln96_53_reg_112198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read())) {
        grp_fu_20663_p1 = grp_fu_90664_p3.read();
    } else {
        grp_fu_20663_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20673_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state566.read())) {
        grp_fu_20673_p1 = add_ln96_56_reg_112268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state565.read())) {
        grp_fu_20673_p1 = grp_fu_90690_p3.read();
    } else {
        grp_fu_20673_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20683_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read())) {
        grp_fu_20683_p1 = add_ln96_59_reg_112338.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state567.read())) {
        grp_fu_20683_p1 = grp_fu_90716_p3.read();
    } else {
        grp_fu_20683_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20693_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read())) {
        grp_fu_20693_p1 = add_ln96_62_reg_112408.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read())) {
        grp_fu_20693_p1 = grp_fu_90742_p3.read();
    } else {
        grp_fu_20693_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20703_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state571.read())) {
        grp_fu_20703_p1 = mul_ln96_68_reg_112453.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read())) {
        grp_fu_20703_p1 = mul_ln96_68_fu_68586_p2.read();
    } else {
        grp_fu_20703_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20703_p4() {
    grp_fu_20703_p4 = grp_fu_20703_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20713_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state573.read())) {
        grp_fu_20713_p1 = add_ln96_66_reg_112524.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read())) {
        grp_fu_20713_p1 = grp_fu_90777_p3.read();
    } else {
        grp_fu_20713_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20723_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state575.read())) {
        grp_fu_20723_p1 = add_ln96_69_reg_112594.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read())) {
        grp_fu_20723_p1 = grp_fu_90803_p3.read();
    } else {
        grp_fu_20723_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20733_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state577.read())) {
        grp_fu_20733_p1 = add_ln96_72_reg_112664.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        grp_fu_20733_p1 = grp_fu_90829_p3.read();
    } else {
        grp_fu_20733_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20743_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state579.read())) {
        grp_fu_20743_p1 = add_ln96_75_reg_112734.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state578.read())) {
        grp_fu_20743_p1 = grp_fu_90855_p3.read();
    } else {
        grp_fu_20743_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20753_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        grp_fu_20753_p1 = add_ln96_78_reg_112804.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read())) {
        grp_fu_20753_p1 = grp_fu_90881_p3.read();
    } else {
        grp_fu_20753_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20763_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state582.read())) {
        grp_fu_20763_p1 = mul_ln96_85_reg_112849.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        grp_fu_20763_p1 = mul_ln96_85_fu_69886_p2.read();
    } else {
        grp_fu_20763_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20763_p4() {
    grp_fu_20763_p4 = grp_fu_20763_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20773_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state584.read())) {
        grp_fu_20773_p1 = add_ln96_82_reg_112915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state583.read())) {
        grp_fu_20773_p1 = grp_fu_90916_p3.read();
    } else {
        grp_fu_20773_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20783_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read())) {
        grp_fu_20783_p1 = add_ln96_85_reg_112985.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read())) {
        grp_fu_20783_p1 = grp_fu_90942_p3.read();
    } else {
        grp_fu_20783_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20793_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state588.read())) {
        grp_fu_20793_p1 = add_ln96_88_reg_113055.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state587.read())) {
        grp_fu_20793_p1 = grp_fu_90968_p3.read();
    } else {
        grp_fu_20793_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20803_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read())) {
        grp_fu_20803_p1 = add_ln96_91_reg_113125.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state589.read())) {
        grp_fu_20803_p1 = grp_fu_90994_p3.read();
    } else {
        grp_fu_20803_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20813_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read())) {
        grp_fu_20813_p1 = add_ln96_94_reg_113195.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        grp_fu_20813_p1 = grp_fu_91020_p3.read();
    } else {
        grp_fu_20813_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20823_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state593.read())) {
        grp_fu_20823_p1 = mul_ln96_102_reg_113240.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read())) {
        grp_fu_20823_p1 = mul_ln96_102_fu_71183_p2.read();
    } else {
        grp_fu_20823_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20823_p4() {
    grp_fu_20823_p4 = grp_fu_20823_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20833_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read())) {
        grp_fu_20833_p1 = add_ln96_98_reg_113306.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state594.read())) {
        grp_fu_20833_p1 = grp_fu_91055_p3.read();
    } else {
        grp_fu_20833_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20843_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read())) {
        grp_fu_20843_p1 = add_ln96_101_reg_113376.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state596.read())) {
        grp_fu_20843_p1 = grp_fu_91081_p3.read();
    } else {
        grp_fu_20843_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20853_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state599.read())) {
        grp_fu_20853_p1 = add_ln96_104_reg_113446.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read())) {
        grp_fu_20853_p1 = grp_fu_91107_p3.read();
    } else {
        grp_fu_20853_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20863_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state601.read())) {
        grp_fu_20863_p1 = add_ln96_107_reg_113516.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read())) {
        grp_fu_20863_p1 = grp_fu_91133_p3.read();
    } else {
        grp_fu_20863_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20873_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read())) {
        grp_fu_20873_p1 = add_ln96_110_reg_113586.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read())) {
        grp_fu_20873_p1 = grp_fu_91159_p3.read();
    } else {
        grp_fu_20873_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20883_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state604.read())) {
        grp_fu_20883_p1 = mul_ln96_119_reg_113631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read())) {
        grp_fu_20883_p1 = mul_ln96_119_fu_72480_p2.read();
    } else {
        grp_fu_20883_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20883_p4() {
    grp_fu_20883_p4 = grp_fu_20883_p1.read().range(11, 8);
}

void poly1305_hw::thread_grp_fu_20893_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state606.read())) {
        grp_fu_20893_p1 = add_ln96_114_reg_113697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read())) {
        grp_fu_20893_p1 = grp_fu_91194_p3.read();
    } else {
        grp_fu_20893_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20903_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read())) {
        grp_fu_20903_p1 = add_ln96_117_reg_113767.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read())) {
        grp_fu_20903_p1 = grp_fu_91220_p3.read();
    } else {
        grp_fu_20903_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20913_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read())) {
        grp_fu_20913_p1 = add_ln96_120_reg_113837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state609.read())) {
        grp_fu_20913_p1 = grp_fu_91246_p3.read();
    } else {
        grp_fu_20913_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20923_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read())) {
        grp_fu_20923_p1 = add_ln96_123_reg_113907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state611.read())) {
        grp_fu_20923_p1 = grp_fu_91272_p3.read();
    } else {
        grp_fu_20923_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20933_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state614.read())) {
        grp_fu_20933_p1 = add_ln96_126_reg_113977.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read())) {
        grp_fu_20933_p1 = grp_fu_91298_p3.read();
    } else {
        grp_fu_20933_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20943_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state615.read())) {
        grp_fu_20943_p1 = mul_ln96_136_reg_114022.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state614.read())) {
        grp_fu_20943_p1 = mul_ln96_136_fu_73777_p2.read();
    } else {
        grp_fu_20943_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20943_p4() {
    grp_fu_20943_p4 = grp_fu_20943_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_20953_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        grp_fu_20953_p1 = add_ln96_130_reg_114093.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read())) {
        grp_fu_20953_p1 = grp_fu_91333_p3.read();
    } else {
        grp_fu_20953_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20963_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state619.read())) {
        grp_fu_20963_p1 = add_ln96_133_reg_114163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state618.read())) {
        grp_fu_20963_p1 = grp_fu_91359_p3.read();
    } else {
        grp_fu_20963_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20973_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read())) {
        grp_fu_20973_p1 = add_ln96_136_reg_114233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state620.read())) {
        grp_fu_20973_p1 = grp_fu_91385_p3.read();
    } else {
        grp_fu_20973_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20983_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state623.read())) {
        grp_fu_20983_p1 = add_ln96_139_reg_114303.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read())) {
        grp_fu_20983_p1 = grp_fu_91411_p3.read();
    } else {
        grp_fu_20983_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_20993_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state625.read())) {
        grp_fu_20993_p1 = add_ln96_142_reg_114373.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state624.read())) {
        grp_fu_20993_p1 = grp_fu_91437_p3.read();
    } else {
        grp_fu_20993_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21003_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read())) {
        grp_fu_21003_p1 = mul_ln96_153_reg_114418.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state625.read())) {
        grp_fu_21003_p1 = mul_ln96_153_fu_75077_p2.read();
    } else {
        grp_fu_21003_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21003_p4() {
    grp_fu_21003_p4 = grp_fu_21003_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_21013_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state628.read())) {
        grp_fu_21013_p1 = add_ln96_146_reg_114484.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read())) {
        grp_fu_21013_p1 = grp_fu_91472_p3.read();
    } else {
        grp_fu_21013_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21023_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state630.read())) {
        grp_fu_21023_p1 = add_ln96_149_reg_114554.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        grp_fu_21023_p1 = grp_fu_91498_p3.read();
    } else {
        grp_fu_21023_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21033_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state632.read())) {
        grp_fu_21033_p1 = add_ln96_152_reg_114624.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read())) {
        grp_fu_21033_p1 = grp_fu_91524_p3.read();
    } else {
        grp_fu_21033_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21043_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state634.read())) {
        grp_fu_21043_p1 = add_ln96_155_reg_114694.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state633.read())) {
        grp_fu_21043_p1 = grp_fu_91550_p3.read();
    } else {
        grp_fu_21043_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21053_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state636.read())) {
        grp_fu_21053_p1 = add_ln96_158_reg_114764.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state635.read())) {
        grp_fu_21053_p1 = grp_fu_91576_p3.read();
    } else {
        grp_fu_21053_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21063_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state637.read())) {
        grp_fu_21063_p1 = mul_ln96_170_reg_114809.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state636.read())) {
        grp_fu_21063_p1 = mul_ln96_170_fu_76374_p2.read();
    } else {
        grp_fu_21063_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21063_p4() {
    grp_fu_21063_p4 = grp_fu_21063_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_21073_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read())) {
        grp_fu_21073_p1 = add_ln96_162_reg_114875.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read())) {
        grp_fu_21073_p1 = grp_fu_91611_p3.read();
    } else {
        grp_fu_21073_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21083_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state641.read())) {
        grp_fu_21083_p1 = add_ln96_165_reg_114945.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state640.read())) {
        grp_fu_21083_p1 = grp_fu_91637_p3.read();
    } else {
        grp_fu_21083_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21093_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read())) {
        grp_fu_21093_p1 = add_ln96_168_reg_115015.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state642.read())) {
        grp_fu_21093_p1 = grp_fu_91663_p3.read();
    } else {
        grp_fu_21093_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21103_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state645.read())) {
        grp_fu_21103_p1 = add_ln96_171_reg_115085.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read())) {
        grp_fu_21103_p1 = grp_fu_91689_p3.read();
    } else {
        grp_fu_21103_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21113_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state647.read())) {
        grp_fu_21113_p1 = add_ln96_174_reg_115155.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state646.read())) {
        grp_fu_21113_p1 = grp_fu_91715_p3.read();
    } else {
        grp_fu_21113_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21123_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read())) {
        grp_fu_21123_p1 = mul_ln96_187_reg_115200.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state647.read())) {
        grp_fu_21123_p1 = mul_ln96_187_fu_77671_p2.read();
    } else {
        grp_fu_21123_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21123_p4() {
    grp_fu_21123_p4 = grp_fu_21123_p1.read().range(11, 8);
}

void poly1305_hw::thread_grp_fu_21133_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state650.read())) {
        grp_fu_21133_p1 = add_ln96_178_reg_115266.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read())) {
        grp_fu_21133_p1 = grp_fu_91750_p3.read();
    } else {
        grp_fu_21133_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21143_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state652.read())) {
        grp_fu_21143_p1 = add_ln96_181_reg_115336.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state651.read())) {
        grp_fu_21143_p1 = grp_fu_91776_p3.read();
    } else {
        grp_fu_21143_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21153_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state654.read())) {
        grp_fu_21153_p1 = add_ln96_184_reg_115406.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read())) {
        grp_fu_21153_p1 = grp_fu_91802_p3.read();
    } else {
        grp_fu_21153_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21163_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state656.read())) {
        grp_fu_21163_p1 = add_ln96_187_reg_115476.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state655.read())) {
        grp_fu_21163_p1 = grp_fu_91828_p3.read();
    } else {
        grp_fu_21163_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21173_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read())) {
        grp_fu_21173_p1 = add_ln96_190_reg_115546.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read())) {
        grp_fu_21173_p1 = grp_fu_91854_p3.read();
    } else {
        grp_fu_21173_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21183_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state659.read())) {
        grp_fu_21183_p1 = mul_ln96_204_reg_115591.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read())) {
        grp_fu_21183_p1 = mul_ln96_204_fu_78968_p2.read();
    } else {
        grp_fu_21183_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21183_p4() {
    grp_fu_21183_p4 = grp_fu_21183_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_21193_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state661.read())) {
        grp_fu_21193_p1 = add_ln96_194_reg_115662.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state660.read())) {
        grp_fu_21193_p1 = grp_fu_91889_p3.read();
    } else {
        grp_fu_21193_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21203_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state663.read())) {
        grp_fu_21203_p1 = add_ln96_197_reg_115732.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read())) {
        grp_fu_21203_p1 = grp_fu_91915_p3.read();
    } else {
        grp_fu_21203_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21213_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state665.read())) {
        grp_fu_21213_p1 = add_ln96_200_reg_115802.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state664.read())) {
        grp_fu_21213_p1 = grp_fu_91941_p3.read();
    } else {
        grp_fu_21213_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21223_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read())) {
        grp_fu_21223_p1 = add_ln96_203_reg_115872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state666.read())) {
        grp_fu_21223_p1 = grp_fu_91967_p3.read();
    } else {
        grp_fu_21223_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21233_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state669.read())) {
        grp_fu_21233_p1 = add_ln96_206_reg_115942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read())) {
        grp_fu_21233_p1 = grp_fu_91993_p3.read();
    } else {
        grp_fu_21233_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21243_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read())) {
        grp_fu_21243_p1 = mul_ln96_221_reg_115987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state669.read())) {
        grp_fu_21243_p1 = mul_ln96_221_fu_80268_p2.read();
    } else {
        grp_fu_21243_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21243_p4() {
    grp_fu_21243_p4 = grp_fu_21243_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_21253_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        grp_fu_21253_p1 = add_ln96_210_reg_116053.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read())) {
        grp_fu_21253_p1 = grp_fu_92028_p3.read();
    } else {
        grp_fu_21253_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21263_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read())) {
        grp_fu_21263_p1 = add_ln96_213_reg_116123.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state673.read())) {
        grp_fu_21263_p1 = grp_fu_92054_p3.read();
    } else {
        grp_fu_21263_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21273_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state676.read())) {
        grp_fu_21273_p1 = add_ln96_216_reg_116193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read())) {
        grp_fu_21273_p1 = grp_fu_92080_p3.read();
    } else {
        grp_fu_21273_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21283_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state678.read())) {
        grp_fu_21283_p1 = add_ln96_219_reg_116263.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state677.read())) {
        grp_fu_21283_p1 = grp_fu_92106_p3.read();
    } else {
        grp_fu_21283_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21293_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read())) {
        grp_fu_21293_p1 = add_ln96_222_reg_116333.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read())) {
        grp_fu_21293_p1 = grp_fu_92132_p3.read();
    } else {
        grp_fu_21293_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21303_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state681.read())) {
        grp_fu_21303_p1 = mul_ln96_238_reg_116378.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read())) {
        grp_fu_21303_p1 = mul_ln96_238_fu_81565_p2.read();
    } else {
        grp_fu_21303_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21303_p4() {
    grp_fu_21303_p4 = grp_fu_21303_p1.read().range(15, 8);
}

void poly1305_hw::thread_grp_fu_21313_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state683.read())) {
        grp_fu_21313_p1 = add_ln96_226_reg_116444.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state682.read())) {
        grp_fu_21313_p1 = grp_fu_92167_p3.read();
    } else {
        grp_fu_21313_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21323_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state685.read())) {
        grp_fu_21323_p1 = add_ln96_229_reg_116514.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read())) {
        grp_fu_21323_p1 = grp_fu_92193_p3.read();
    } else {
        grp_fu_21323_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21333_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state687.read())) {
        grp_fu_21333_p1 = add_ln96_232_reg_116584.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        grp_fu_21333_p1 = grp_fu_92219_p3.read();
    } else {
        grp_fu_21333_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21343_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read())) {
        grp_fu_21343_p1 = add_ln96_235_reg_116654.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state688.read())) {
        grp_fu_21343_p1 = grp_fu_92245_p3.read();
    } else {
        grp_fu_21343_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21353_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read())) {
        grp_fu_21353_p1 = add_ln96_238_reg_116724.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read())) {
        grp_fu_21353_p1 = grp_fu_92271_p3.read();
    } else {
        grp_fu_21353_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21363_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state692.read())) {
        grp_fu_21363_p1 = mul_ln96_255_reg_116769.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read())) {
        grp_fu_21363_p1 = mul_ln96_255_fu_82862_p2.read();
    } else {
        grp_fu_21363_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21363_p4() {
    grp_fu_21363_p4 = grp_fu_21363_p1.read().range(11, 8);
}

void poly1305_hw::thread_grp_fu_21373_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read())) {
        grp_fu_21373_p1 = add_ln96_242_reg_116835.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state693.read())) {
        grp_fu_21373_p1 = grp_fu_92306_p3.read();
    } else {
        grp_fu_21373_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21383_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state696.read())) {
        grp_fu_21383_p1 = add_ln96_245_reg_116905.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state695.read())) {
        grp_fu_21383_p1 = grp_fu_92332_p3.read();
    } else {
        grp_fu_21383_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21393_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state698.read())) {
        grp_fu_21393_p1 = add_ln96_248_reg_116975.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state697.read())) {
        grp_fu_21393_p1 = grp_fu_92358_p3.read();
    } else {
        grp_fu_21393_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21403_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read())) {
        grp_fu_21403_p1 = add_ln96_251_reg_117045.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read())) {
        grp_fu_21403_p1 = grp_fu_92384_p3.read();
    } else {
        grp_fu_21403_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21413_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state702.read())) {
        grp_fu_21413_p1 = add_ln96_254_reg_117115.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state701.read())) {
        grp_fu_21413_p1 = grp_fu_92410_p3.read();
    } else {
        grp_fu_21413_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void poly1305_hw::thread_grp_fu_21423_p2() {
    grp_fu_21423_p2 = (!mul_31_2_reg_117158.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_31_2_reg_117158.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21428_p2() {
    grp_fu_21428_p2 = (!mul_30_4_reg_117139.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_30_4_reg_117139.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21433_p2() {
    grp_fu_21433_p2 = (!mul_29_6_reg_117109.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_29_6_reg_117109.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21438_p2() {
    grp_fu_21438_p2 = (!mul_28_8_reg_117094.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_28_8_reg_117094.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21443_p2() {
    grp_fu_21443_p2 = (!mul_27_10_reg_117074.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_27_10_reg_117074.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21448_p2() {
    grp_fu_21448_p2 = (!mul_26_12_reg_117039.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_26_12_reg_117039.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21453_p2() {
    grp_fu_21453_p2 = (!mul_25_14_reg_117024.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_25_14_reg_117024.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21458_p2() {
    grp_fu_21458_p2 = (!mul_24_16_reg_117004.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_24_16_reg_117004.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21463_p2() {
    grp_fu_21463_p2 = (!mul_23_18_reg_116969.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_23_18_reg_116969.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21468_p2() {
    grp_fu_21468_p2 = (!mul_22_20_reg_116954.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_22_20_reg_116954.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21473_p2() {
    grp_fu_21473_p2 = (!mul_21_22_reg_116934.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_21_22_reg_116934.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21478_p2() {
    grp_fu_21478_p2 = (!mul_20_24_reg_116899.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_20_24_reg_116899.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21483_p2() {
    grp_fu_21483_p2 = (!mul_19_26_reg_116884.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_19_26_reg_116884.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21488_p2() {
    grp_fu_21488_p2 = (!mul_18_28_reg_116864.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_18_28_reg_116864.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21493_p2() {
    grp_fu_21493_p2 = (!mul_17_30_reg_116829.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(mul_17_30_reg_116829.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21498_p2() {
    grp_fu_21498_p2 = (!add_ln116_239_reg_116814.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_239_reg_116814.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21503_p2() {
    grp_fu_21503_p2 = (!add_ln116_238_reg_116794.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_238_reg_116794.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21508_p2() {
    grp_fu_21508_p2 = (!add_ln116_221_reg_116403.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_221_reg_116403.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21513_p2() {
    grp_fu_21513_p2 = (!add_ln116_204_reg_116012.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_204_reg_116012.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21518_p2() {
    grp_fu_21518_p2 = (!add_ln116_187_reg_115621.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_187_reg_115621.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21523_p2() {
    grp_fu_21523_p2 = (!add_ln116_170_reg_115225.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_170_reg_115225.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21528_p2() {
    grp_fu_21528_p2 = (!add_ln116_153_reg_114834.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_153_reg_114834.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21533_p2() {
    grp_fu_21533_p2 = (!add_ln116_136_reg_114443.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_136_reg_114443.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21538_p2() {
    grp_fu_21538_p2 = (!add_ln116_119_reg_114052.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_119_reg_114052.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21543_p2() {
    grp_fu_21543_p2 = (!add_ln116_102_reg_113656.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_102_reg_113656.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21548_p2() {
    grp_fu_21548_p2 = (!add_ln116_85_reg_113265.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_85_reg_113265.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21553_p2() {
    grp_fu_21553_p2 = (!add_ln116_68_reg_112874.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_68_reg_112874.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21558_p2() {
    grp_fu_21558_p2 = (!add_ln116_51_reg_112483.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_51_reg_112483.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21563_p2() {
    grp_fu_21563_p2 = (!add_ln116_34_reg_112087.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_34_reg_112087.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21568_p2() {
    grp_fu_21568_p2 = (!add_ln116_17_reg_111696.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_17_reg_111696.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21573_p2() {
    grp_fu_21573_p2 = (!add_ln116_reg_111305.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln116_reg_111305.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21578_p2() {
    grp_fu_21578_p2 = (!trunc_ln109_reg_110652.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln109_reg_110652.read() == ap_const_lv8_0);
}

void poly1305_hw::thread_grp_fu_21583_p2() {
    grp_fu_21583_p2 = (!arr1_q0.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_q0.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_grp_fu_21590_p2() {
    grp_fu_21590_p2 = (!arr1_q1.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_q1.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void poly1305_hw::thread_grp_fu_21597_p2() {
    grp_fu_21597_p2 = (!arr1_q0.read().is_01() || !ap_const_lv32_FF.is_01())? sc_lv<1>(): (sc_bigint<32>(arr1_q0.read()) < sc_bigint<32>(ap_const_lv32_FF));
}

void poly1305_hw::thread_grp_fu_21603_p3() {
    grp_fu_21603_p3 = arr1_q0.read().range(31, 31);
}

void poly1305_hw::thread_grp_fu_21611_p2() {
    grp_fu_21611_p2 = (!arr1_q0.read().is_01() || !ap_const_lv32_100.is_01())? sc_lv<32>(): (sc_biguint<32>(arr1_q0.read()) + sc_biguint<32>(ap_const_lv32_100));
}

void poly1305_hw::thread_grp_fu_21618_p2() {
    grp_fu_21618_p2 = (!arr1_q0.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_q0.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_grp_fu_21624_p2() {
    grp_fu_21624_p2 = (!arr1_q1.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(arr1_q1.read() == ap_const_lv32_0);
}

void poly1305_hw::thread_grp_fu_87822_p0() {
    grp_fu_87822_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87822_p1() {
    grp_fu_87822_p1 =  (sc_lv<8>) (grp_fu_87822_p10.read());
}

void poly1305_hw::thread_grp_fu_87822_p10() {
    grp_fu_87822_p10 = esl_zext<16,8>(add_ln362_1_reg_100533.read());
}

void poly1305_hw::thread_grp_fu_87822_p2() {
    grp_fu_87822_p2 =  (sc_lv<8>) (grp_fu_87822_p20.read());
}

void poly1305_hw::thread_grp_fu_87822_p20() {
    grp_fu_87822_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_0_phi_fu_8809_p4.read());
}

void poly1305_hw::thread_grp_fu_87831_p0() {
    grp_fu_87831_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87831_p1() {
    grp_fu_87831_p1 =  (sc_lv<8>) (grp_fu_87831_p10.read());
}

void poly1305_hw::thread_grp_fu_87831_p10() {
    grp_fu_87831_p10 = esl_zext<16,8>(add_ln362_2_reg_100545.read());
}

void poly1305_hw::thread_grp_fu_87831_p2() {
    grp_fu_87831_p2 =  (sc_lv<8>) (grp_fu_87831_p20.read());
}

void poly1305_hw::thread_grp_fu_87831_p20() {
    grp_fu_87831_p20 = esl_zext<16,8>(mulCarry42_1_0_1_reg_8816.read());
}

void poly1305_hw::thread_grp_fu_87841_p0() {
    grp_fu_87841_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87841_p1() {
    grp_fu_87841_p1 =  (sc_lv<8>) (grp_fu_87841_p10.read());
}

void poly1305_hw::thread_grp_fu_87841_p10() {
    grp_fu_87841_p10 = esl_zext<16,8>(add_ln362_3_reg_100551.read());
}

void poly1305_hw::thread_grp_fu_87841_p2() {
    grp_fu_87841_p2 =  (sc_lv<8>) (grp_fu_87841_p20.read());
}

void poly1305_hw::thread_grp_fu_87841_p20() {
    grp_fu_87841_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_2_phi_fu_8830_p4.read());
}

void poly1305_hw::thread_grp_fu_87849_p0() {
    grp_fu_87849_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87849_p1() {
    grp_fu_87849_p1 =  (sc_lv<8>) (grp_fu_87849_p10.read());
}

void poly1305_hw::thread_grp_fu_87849_p10() {
    grp_fu_87849_p10 = esl_zext<16,8>(add_ln362_4_reg_100563.read());
}

void poly1305_hw::thread_grp_fu_87849_p2() {
    grp_fu_87849_p2 =  (sc_lv<8>) (grp_fu_87849_p20.read());
}

void poly1305_hw::thread_grp_fu_87849_p20() {
    grp_fu_87849_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_3_phi_fu_8840_p4.read());
}

void poly1305_hw::thread_grp_fu_87858_p0() {
    grp_fu_87858_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87858_p1() {
    grp_fu_87858_p1 =  (sc_lv<8>) (grp_fu_87858_p10.read());
}

void poly1305_hw::thread_grp_fu_87858_p10() {
    grp_fu_87858_p10 = esl_zext<16,8>(add_ln362_5_reg_100569.read());
}

void poly1305_hw::thread_grp_fu_87858_p2() {
    grp_fu_87858_p2 =  (sc_lv<8>) (grp_fu_87858_p20.read());
}

void poly1305_hw::thread_grp_fu_87858_p20() {
    grp_fu_87858_p20 = esl_zext<16,8>(mulCarry42_1_0_4_reg_8847.read());
}

void poly1305_hw::thread_grp_fu_87868_p0() {
    grp_fu_87868_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87868_p1() {
    grp_fu_87868_p1 =  (sc_lv<8>) (grp_fu_87868_p10.read());
}

void poly1305_hw::thread_grp_fu_87868_p10() {
    grp_fu_87868_p10 = esl_zext<16,8>(add_ln362_6_reg_100581.read());
}

void poly1305_hw::thread_grp_fu_87868_p2() {
    grp_fu_87868_p2 =  (sc_lv<8>) (grp_fu_87868_p20.read());
}

void poly1305_hw::thread_grp_fu_87868_p20() {
    grp_fu_87868_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_5_phi_fu_8861_p4.read());
}

void poly1305_hw::thread_grp_fu_87876_p0() {
    grp_fu_87876_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87876_p1() {
    grp_fu_87876_p1 =  (sc_lv<8>) (grp_fu_87876_p10.read());
}

void poly1305_hw::thread_grp_fu_87876_p10() {
    grp_fu_87876_p10 = esl_zext<16,8>(add_ln362_7_reg_100587.read());
}

void poly1305_hw::thread_grp_fu_87876_p2() {
    grp_fu_87876_p2 =  (sc_lv<8>) (grp_fu_87876_p20.read());
}

void poly1305_hw::thread_grp_fu_87876_p20() {
    grp_fu_87876_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_6_phi_fu_8871_p4.read());
}

void poly1305_hw::thread_grp_fu_87885_p0() {
    grp_fu_87885_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87885_p1() {
    grp_fu_87885_p1 =  (sc_lv<8>) (grp_fu_87885_p10.read());
}

void poly1305_hw::thread_grp_fu_87885_p10() {
    grp_fu_87885_p10 = esl_zext<16,8>(add_ln362_8_reg_100599.read());
}

void poly1305_hw::thread_grp_fu_87885_p2() {
    grp_fu_87885_p2 =  (sc_lv<8>) (grp_fu_87885_p20.read());
}

void poly1305_hw::thread_grp_fu_87885_p20() {
    grp_fu_87885_p20 = esl_zext<16,8>(mulCarry42_1_0_7_reg_8878.read());
}

void poly1305_hw::thread_grp_fu_87895_p0() {
    grp_fu_87895_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87895_p1() {
    grp_fu_87895_p1 =  (sc_lv<8>) (grp_fu_87895_p10.read());
}

void poly1305_hw::thread_grp_fu_87895_p10() {
    grp_fu_87895_p10 = esl_zext<16,8>(add_ln362_9_reg_100605.read());
}

void poly1305_hw::thread_grp_fu_87895_p2() {
    grp_fu_87895_p2 =  (sc_lv<8>) (grp_fu_87895_p20.read());
}

void poly1305_hw::thread_grp_fu_87895_p20() {
    grp_fu_87895_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_8_phi_fu_8892_p4.read());
}

void poly1305_hw::thread_grp_fu_87903_p0() {
    grp_fu_87903_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87903_p1() {
    grp_fu_87903_p1 =  (sc_lv<8>) (grp_fu_87903_p10.read());
}

void poly1305_hw::thread_grp_fu_87903_p10() {
    grp_fu_87903_p10 = esl_zext<16,8>(add_ln362_10_reg_100617.read());
}

void poly1305_hw::thread_grp_fu_87903_p2() {
    grp_fu_87903_p2 =  (sc_lv<8>) (grp_fu_87903_p20.read());
}

void poly1305_hw::thread_grp_fu_87903_p20() {
    grp_fu_87903_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_9_phi_fu_8902_p4.read());
}

void poly1305_hw::thread_grp_fu_87912_p0() {
    grp_fu_87912_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87912_p1() {
    grp_fu_87912_p1 =  (sc_lv<8>) (grp_fu_87912_p10.read());
}

void poly1305_hw::thread_grp_fu_87912_p10() {
    grp_fu_87912_p10 = esl_zext<16,8>(add_ln362_11_reg_100623.read());
}

void poly1305_hw::thread_grp_fu_87912_p2() {
    grp_fu_87912_p2 =  (sc_lv<8>) (grp_fu_87912_p20.read());
}

void poly1305_hw::thread_grp_fu_87912_p20() {
    grp_fu_87912_p20 = esl_zext<16,8>(mulCarry42_1_0_10_reg_8909.read());
}

void poly1305_hw::thread_grp_fu_87922_p0() {
    grp_fu_87922_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87922_p1() {
    grp_fu_87922_p1 =  (sc_lv<8>) (grp_fu_87922_p10.read());
}

void poly1305_hw::thread_grp_fu_87922_p10() {
    grp_fu_87922_p10 = esl_zext<16,8>(add_ln362_12_reg_100635.read());
}

void poly1305_hw::thread_grp_fu_87922_p2() {
    grp_fu_87922_p2 =  (sc_lv<8>) (grp_fu_87922_p20.read());
}

void poly1305_hw::thread_grp_fu_87922_p20() {
    grp_fu_87922_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_11_phi_fu_8923_p4.read());
}

void poly1305_hw::thread_grp_fu_87930_p0() {
    grp_fu_87930_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87930_p1() {
    grp_fu_87930_p1 =  (sc_lv<8>) (grp_fu_87930_p10.read());
}

void poly1305_hw::thread_grp_fu_87930_p10() {
    grp_fu_87930_p10 = esl_zext<16,8>(add_ln362_13_reg_100641.read());
}

void poly1305_hw::thread_grp_fu_87930_p2() {
    grp_fu_87930_p2 =  (sc_lv<8>) (grp_fu_87930_p20.read());
}

void poly1305_hw::thread_grp_fu_87930_p20() {
    grp_fu_87930_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_12_phi_fu_8933_p4.read());
}

void poly1305_hw::thread_grp_fu_87939_p0() {
    grp_fu_87939_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87939_p1() {
    grp_fu_87939_p1 =  (sc_lv<8>) (grp_fu_87939_p10.read());
}

void poly1305_hw::thread_grp_fu_87939_p10() {
    grp_fu_87939_p10 = esl_zext<16,8>(add_ln362_14_reg_100653.read());
}

void poly1305_hw::thread_grp_fu_87939_p2() {
    grp_fu_87939_p2 =  (sc_lv<8>) (grp_fu_87939_p20.read());
}

void poly1305_hw::thread_grp_fu_87939_p20() {
    grp_fu_87939_p20 = esl_zext<16,8>(mulCarry42_1_0_13_reg_8940.read());
}

void poly1305_hw::thread_grp_fu_87949_p0() {
    grp_fu_87949_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87949_p1() {
    grp_fu_87949_p1 =  (sc_lv<8>) (grp_fu_87949_p10.read());
}

void poly1305_hw::thread_grp_fu_87949_p10() {
    grp_fu_87949_p10 = esl_zext<16,8>(add_ln362_15_reg_100684.read());
}

void poly1305_hw::thread_grp_fu_87949_p2() {
    grp_fu_87949_p2 =  (sc_lv<8>) (grp_fu_87949_p20.read());
}

void poly1305_hw::thread_grp_fu_87949_p20() {
    grp_fu_87949_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_14_phi_fu_8954_p4.read());
}

void poly1305_hw::thread_grp_fu_87957_p0() {
    grp_fu_87957_p0 =  (sc_lv<8>) (zext_ln96_reg_99479.read());
}

void poly1305_hw::thread_grp_fu_87957_p1() {
    grp_fu_87957_p1 =  (sc_lv<8>) (grp_fu_87957_p10.read());
}

void poly1305_hw::thread_grp_fu_87957_p10() {
    grp_fu_87957_p10 = esl_zext<16,8>(add_ln362_16_reg_100690.read());
}

void poly1305_hw::thread_grp_fu_87957_p2() {
    grp_fu_87957_p2 =  (sc_lv<8>) (grp_fu_87957_p20.read());
}

void poly1305_hw::thread_grp_fu_87957_p20() {
    grp_fu_87957_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_0_15_phi_fu_8964_p4.read());
}

void poly1305_hw::thread_grp_fu_87967_p0() {
    grp_fu_87967_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_87967_p1() {
    grp_fu_87967_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_87967_p2() {
    grp_fu_87967_p2 =  (sc_lv<8>) (grp_fu_87967_p20.read());
}

void poly1305_hw::thread_grp_fu_87967_p20() {
    grp_fu_87967_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_0_phi_fu_8986_p4.read());
}

void poly1305_hw::thread_grp_fu_87976_p0() {
    grp_fu_87976_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_87976_p1() {
    grp_fu_87976_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_87976_p2() {
    grp_fu_87976_p2 =  (sc_lv<8>) (grp_fu_87976_p20.read());
}

void poly1305_hw::thread_grp_fu_87976_p20() {
    grp_fu_87976_p20 = esl_zext<16,8>(mulCarry42_1_1_1_reg_8993.read());
}

void poly1305_hw::thread_grp_fu_87985_p0() {
    grp_fu_87985_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_87985_p1() {
    grp_fu_87985_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_87985_p2() {
    grp_fu_87985_p2 =  (sc_lv<8>) (grp_fu_87985_p20.read());
}

void poly1305_hw::thread_grp_fu_87985_p20() {
    grp_fu_87985_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_2_phi_fu_9007_p4.read());
}

void poly1305_hw::thread_grp_fu_87993_p0() {
    grp_fu_87993_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_87993_p1() {
    grp_fu_87993_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_87993_p2() {
    grp_fu_87993_p2 =  (sc_lv<8>) (grp_fu_87993_p20.read());
}

void poly1305_hw::thread_grp_fu_87993_p20() {
    grp_fu_87993_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_3_phi_fu_9017_p4.read());
}

void poly1305_hw::thread_grp_fu_88002_p0() {
    grp_fu_88002_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_88002_p1() {
    grp_fu_88002_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88002_p2() {
    grp_fu_88002_p2 =  (sc_lv<8>) (grp_fu_88002_p20.read());
}

void poly1305_hw::thread_grp_fu_88002_p20() {
    grp_fu_88002_p20 = esl_zext<16,8>(mulCarry42_1_1_4_reg_9024.read());
}

void poly1305_hw::thread_grp_fu_88011_p0() {
    grp_fu_88011_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_88011_p1() {
    grp_fu_88011_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88011_p2() {
    grp_fu_88011_p2 =  (sc_lv<8>) (grp_fu_88011_p20.read());
}

void poly1305_hw::thread_grp_fu_88011_p20() {
    grp_fu_88011_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_5_phi_fu_9038_p4.read());
}

void poly1305_hw::thread_grp_fu_88019_p0() {
    grp_fu_88019_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_88019_p1() {
    grp_fu_88019_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88019_p2() {
    grp_fu_88019_p2 =  (sc_lv<8>) (grp_fu_88019_p20.read());
}

void poly1305_hw::thread_grp_fu_88019_p20() {
    grp_fu_88019_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_6_phi_fu_9048_p4.read());
}

void poly1305_hw::thread_grp_fu_88028_p0() {
    grp_fu_88028_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_88028_p1() {
    grp_fu_88028_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88028_p2() {
    grp_fu_88028_p2 =  (sc_lv<8>) (grp_fu_88028_p20.read());
}

void poly1305_hw::thread_grp_fu_88028_p20() {
    grp_fu_88028_p20 = esl_zext<16,8>(mulCarry42_1_1_7_reg_9055.read());
}

void poly1305_hw::thread_grp_fu_88037_p0() {
    grp_fu_88037_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_88037_p1() {
    grp_fu_88037_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88037_p2() {
    grp_fu_88037_p2 =  (sc_lv<8>) (grp_fu_88037_p20.read());
}

void poly1305_hw::thread_grp_fu_88037_p20() {
    grp_fu_88037_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_8_phi_fu_9069_p4.read());
}

void poly1305_hw::thread_grp_fu_88045_p0() {
    grp_fu_88045_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_88045_p1() {
    grp_fu_88045_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88045_p2() {
    grp_fu_88045_p2 =  (sc_lv<8>) (grp_fu_88045_p20.read());
}

void poly1305_hw::thread_grp_fu_88045_p20() {
    grp_fu_88045_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_9_phi_fu_9079_p4.read());
}

void poly1305_hw::thread_grp_fu_88054_p0() {
    grp_fu_88054_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_88054_p1() {
    grp_fu_88054_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88054_p2() {
    grp_fu_88054_p2 =  (sc_lv<8>) (grp_fu_88054_p20.read());
}

void poly1305_hw::thread_grp_fu_88054_p20() {
    grp_fu_88054_p20 = esl_zext<16,8>(mulCarry42_1_1_10_reg_9086.read());
}

void poly1305_hw::thread_grp_fu_88063_p0() {
    grp_fu_88063_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_88063_p1() {
    grp_fu_88063_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88063_p2() {
    grp_fu_88063_p2 =  (sc_lv<8>) (grp_fu_88063_p20.read());
}

void poly1305_hw::thread_grp_fu_88063_p20() {
    grp_fu_88063_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_11_phi_fu_9100_p4.read());
}

void poly1305_hw::thread_grp_fu_88071_p0() {
    grp_fu_88071_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_88071_p1() {
    grp_fu_88071_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88071_p2() {
    grp_fu_88071_p2 =  (sc_lv<8>) (grp_fu_88071_p20.read());
}

void poly1305_hw::thread_grp_fu_88071_p20() {
    grp_fu_88071_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_12_phi_fu_9110_p4.read());
}

void poly1305_hw::thread_grp_fu_88080_p0() {
    grp_fu_88080_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_88080_p1() {
    grp_fu_88080_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88080_p2() {
    grp_fu_88080_p2 =  (sc_lv<8>) (grp_fu_88080_p20.read());
}

void poly1305_hw::thread_grp_fu_88080_p20() {
    grp_fu_88080_p20 = esl_zext<16,8>(mulCarry42_1_1_13_reg_9117.read());
}

void poly1305_hw::thread_grp_fu_88089_p0() {
    grp_fu_88089_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_88089_p1() {
    grp_fu_88089_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88089_p2() {
    grp_fu_88089_p2 =  (sc_lv<8>) (grp_fu_88089_p20.read());
}

void poly1305_hw::thread_grp_fu_88089_p20() {
    grp_fu_88089_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_14_phi_fu_9131_p4.read());
}

void poly1305_hw::thread_grp_fu_88097_p0() {
    grp_fu_88097_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_88097_p1() {
    grp_fu_88097_p1 =  (sc_lv<8>) (zext_ln96_3_reg_99517.read());
}

void poly1305_hw::thread_grp_fu_88097_p2() {
    grp_fu_88097_p2 =  (sc_lv<8>) (grp_fu_88097_p20.read());
}

void poly1305_hw::thread_grp_fu_88097_p20() {
    grp_fu_88097_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_1_15_phi_fu_9141_p4.read());
}

void poly1305_hw::thread_grp_fu_88106_p0() {
    grp_fu_88106_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_88106_p1() {
    grp_fu_88106_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88106_p2() {
    grp_fu_88106_p2 =  (sc_lv<8>) (grp_fu_88106_p20.read());
}

void poly1305_hw::thread_grp_fu_88106_p20() {
    grp_fu_88106_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_0_phi_fu_9163_p4.read());
}

void poly1305_hw::thread_grp_fu_88115_p0() {
    grp_fu_88115_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_88115_p1() {
    grp_fu_88115_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88115_p2() {
    grp_fu_88115_p2 =  (sc_lv<8>) (grp_fu_88115_p20.read());
}

void poly1305_hw::thread_grp_fu_88115_p20() {
    grp_fu_88115_p20 = esl_zext<16,8>(mulCarry42_1_2_1_reg_9170.read());
}

void poly1305_hw::thread_grp_fu_88124_p0() {
    grp_fu_88124_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_88124_p1() {
    grp_fu_88124_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88124_p2() {
    grp_fu_88124_p2 =  (sc_lv<8>) (grp_fu_88124_p20.read());
}

void poly1305_hw::thread_grp_fu_88124_p20() {
    grp_fu_88124_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_2_phi_fu_9184_p4.read());
}

void poly1305_hw::thread_grp_fu_88132_p0() {
    grp_fu_88132_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_88132_p1() {
    grp_fu_88132_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88132_p2() {
    grp_fu_88132_p2 =  (sc_lv<8>) (grp_fu_88132_p20.read());
}

void poly1305_hw::thread_grp_fu_88132_p20() {
    grp_fu_88132_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_3_phi_fu_9194_p4.read());
}

void poly1305_hw::thread_grp_fu_88141_p0() {
    grp_fu_88141_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_88141_p1() {
    grp_fu_88141_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88141_p2() {
    grp_fu_88141_p2 =  (sc_lv<8>) (grp_fu_88141_p20.read());
}

void poly1305_hw::thread_grp_fu_88141_p20() {
    grp_fu_88141_p20 = esl_zext<16,8>(mulCarry42_1_2_4_reg_9201.read());
}

void poly1305_hw::thread_grp_fu_88150_p0() {
    grp_fu_88150_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_88150_p1() {
    grp_fu_88150_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88150_p2() {
    grp_fu_88150_p2 =  (sc_lv<8>) (grp_fu_88150_p20.read());
}

void poly1305_hw::thread_grp_fu_88150_p20() {
    grp_fu_88150_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_5_phi_fu_9215_p4.read());
}

void poly1305_hw::thread_grp_fu_88158_p0() {
    grp_fu_88158_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_88158_p1() {
    grp_fu_88158_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88158_p2() {
    grp_fu_88158_p2 =  (sc_lv<8>) (grp_fu_88158_p20.read());
}

void poly1305_hw::thread_grp_fu_88158_p20() {
    grp_fu_88158_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_6_phi_fu_9225_p4.read());
}

void poly1305_hw::thread_grp_fu_88167_p0() {
    grp_fu_88167_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_88167_p1() {
    grp_fu_88167_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88167_p2() {
    grp_fu_88167_p2 =  (sc_lv<8>) (grp_fu_88167_p20.read());
}

void poly1305_hw::thread_grp_fu_88167_p20() {
    grp_fu_88167_p20 = esl_zext<16,8>(mulCarry42_1_2_7_reg_9232.read());
}

void poly1305_hw::thread_grp_fu_88176_p0() {
    grp_fu_88176_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_88176_p1() {
    grp_fu_88176_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88176_p2() {
    grp_fu_88176_p2 =  (sc_lv<8>) (grp_fu_88176_p20.read());
}

void poly1305_hw::thread_grp_fu_88176_p20() {
    grp_fu_88176_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_8_phi_fu_9246_p4.read());
}

void poly1305_hw::thread_grp_fu_88184_p0() {
    grp_fu_88184_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_88184_p1() {
    grp_fu_88184_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88184_p2() {
    grp_fu_88184_p2 =  (sc_lv<8>) (grp_fu_88184_p20.read());
}

void poly1305_hw::thread_grp_fu_88184_p20() {
    grp_fu_88184_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_9_phi_fu_9256_p4.read());
}

void poly1305_hw::thread_grp_fu_88193_p0() {
    grp_fu_88193_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_88193_p1() {
    grp_fu_88193_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88193_p2() {
    grp_fu_88193_p2 =  (sc_lv<8>) (grp_fu_88193_p20.read());
}

void poly1305_hw::thread_grp_fu_88193_p20() {
    grp_fu_88193_p20 = esl_zext<16,8>(mulCarry42_1_2_10_reg_9263.read());
}

void poly1305_hw::thread_grp_fu_88202_p0() {
    grp_fu_88202_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_88202_p1() {
    grp_fu_88202_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88202_p2() {
    grp_fu_88202_p2 =  (sc_lv<8>) (grp_fu_88202_p20.read());
}

void poly1305_hw::thread_grp_fu_88202_p20() {
    grp_fu_88202_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_11_phi_fu_9277_p4.read());
}

void poly1305_hw::thread_grp_fu_88210_p0() {
    grp_fu_88210_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_88210_p1() {
    grp_fu_88210_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88210_p2() {
    grp_fu_88210_p2 =  (sc_lv<8>) (grp_fu_88210_p20.read());
}

void poly1305_hw::thread_grp_fu_88210_p20() {
    grp_fu_88210_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_12_phi_fu_9287_p4.read());
}

void poly1305_hw::thread_grp_fu_88219_p0() {
    grp_fu_88219_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_88219_p1() {
    grp_fu_88219_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88219_p2() {
    grp_fu_88219_p2 =  (sc_lv<8>) (grp_fu_88219_p20.read());
}

void poly1305_hw::thread_grp_fu_88219_p20() {
    grp_fu_88219_p20 = esl_zext<16,8>(mulCarry42_1_2_13_reg_9294.read());
}

void poly1305_hw::thread_grp_fu_88228_p0() {
    grp_fu_88228_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_88228_p1() {
    grp_fu_88228_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88228_p2() {
    grp_fu_88228_p2 =  (sc_lv<8>) (grp_fu_88228_p20.read());
}

void poly1305_hw::thread_grp_fu_88228_p20() {
    grp_fu_88228_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_14_phi_fu_9308_p4.read());
}

void poly1305_hw::thread_grp_fu_88236_p0() {
    grp_fu_88236_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_88236_p1() {
    grp_fu_88236_p1 =  (sc_lv<8>) (zext_ln96_7_reg_99555.read());
}

void poly1305_hw::thread_grp_fu_88236_p2() {
    grp_fu_88236_p2 =  (sc_lv<8>) (grp_fu_88236_p20.read());
}

void poly1305_hw::thread_grp_fu_88236_p20() {
    grp_fu_88236_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_2_15_phi_fu_9318_p4.read());
}

void poly1305_hw::thread_grp_fu_88245_p0() {
    grp_fu_88245_p0 =  (sc_lv<8>) (zext_ln382_3_reg_100725.read());
}

void poly1305_hw::thread_grp_fu_88245_p1() {
    grp_fu_88245_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88245_p2() {
    grp_fu_88245_p2 =  (sc_lv<4>) (grp_fu_88245_p20.read());
}

void poly1305_hw::thread_grp_fu_88245_p20() {
    grp_fu_88245_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_0_phi_fu_9340_p4.read());
}

void poly1305_hw::thread_grp_fu_88254_p0() {
    grp_fu_88254_p0 =  (sc_lv<8>) (zext_ln382_6_reg_100767.read());
}

void poly1305_hw::thread_grp_fu_88254_p1() {
    grp_fu_88254_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88254_p2() {
    grp_fu_88254_p2 =  (sc_lv<4>) (grp_fu_88254_p20.read());
}

void poly1305_hw::thread_grp_fu_88254_p20() {
    grp_fu_88254_p20 = esl_zext<12,4>(mulCarry42_1_3_1_reg_9347.read());
}

void poly1305_hw::thread_grp_fu_88263_p0() {
    grp_fu_88263_p0 =  (sc_lv<8>) (zext_ln382_9_reg_100810.read());
}

void poly1305_hw::thread_grp_fu_88263_p1() {
    grp_fu_88263_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88263_p2() {
    grp_fu_88263_p2 =  (sc_lv<4>) (grp_fu_88263_p20.read());
}

void poly1305_hw::thread_grp_fu_88263_p20() {
    grp_fu_88263_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_2_phi_fu_9361_p4.read());
}

void poly1305_hw::thread_grp_fu_88271_p0() {
    grp_fu_88271_p0 =  (sc_lv<8>) (zext_ln382_12_reg_100842.read());
}

void poly1305_hw::thread_grp_fu_88271_p1() {
    grp_fu_88271_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88271_p2() {
    grp_fu_88271_p2 =  (sc_lv<4>) (grp_fu_88271_p20.read());
}

void poly1305_hw::thread_grp_fu_88271_p20() {
    grp_fu_88271_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_3_phi_fu_9371_p4.read());
}

void poly1305_hw::thread_grp_fu_88280_p0() {
    grp_fu_88280_p0 =  (sc_lv<8>) (zext_ln382_15_reg_100884.read());
}

void poly1305_hw::thread_grp_fu_88280_p1() {
    grp_fu_88280_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88280_p2() {
    grp_fu_88280_p2 =  (sc_lv<4>) (grp_fu_88280_p20.read());
}

void poly1305_hw::thread_grp_fu_88280_p20() {
    grp_fu_88280_p20 = esl_zext<12,4>(mulCarry42_1_3_4_reg_9378.read());
}

void poly1305_hw::thread_grp_fu_88289_p0() {
    grp_fu_88289_p0 =  (sc_lv<8>) (zext_ln382_18_reg_100927.read());
}

void poly1305_hw::thread_grp_fu_88289_p1() {
    grp_fu_88289_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88289_p2() {
    grp_fu_88289_p2 =  (sc_lv<4>) (grp_fu_88289_p20.read());
}

void poly1305_hw::thread_grp_fu_88289_p20() {
    grp_fu_88289_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_5_phi_fu_9392_p4.read());
}

void poly1305_hw::thread_grp_fu_88297_p0() {
    grp_fu_88297_p0 =  (sc_lv<8>) (zext_ln382_21_reg_100959.read());
}

void poly1305_hw::thread_grp_fu_88297_p1() {
    grp_fu_88297_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88297_p2() {
    grp_fu_88297_p2 =  (sc_lv<4>) (grp_fu_88297_p20.read());
}

void poly1305_hw::thread_grp_fu_88297_p20() {
    grp_fu_88297_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_6_phi_fu_9402_p4.read());
}

void poly1305_hw::thread_grp_fu_88306_p0() {
    grp_fu_88306_p0 =  (sc_lv<8>) (zext_ln382_24_reg_101001.read());
}

void poly1305_hw::thread_grp_fu_88306_p1() {
    grp_fu_88306_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88306_p2() {
    grp_fu_88306_p2 =  (sc_lv<4>) (grp_fu_88306_p20.read());
}

void poly1305_hw::thread_grp_fu_88306_p20() {
    grp_fu_88306_p20 = esl_zext<12,4>(mulCarry42_1_3_7_reg_9409.read());
}

void poly1305_hw::thread_grp_fu_88315_p0() {
    grp_fu_88315_p0 =  (sc_lv<8>) (zext_ln382_27_reg_101044.read());
}

void poly1305_hw::thread_grp_fu_88315_p1() {
    grp_fu_88315_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88315_p2() {
    grp_fu_88315_p2 =  (sc_lv<4>) (grp_fu_88315_p20.read());
}

void poly1305_hw::thread_grp_fu_88315_p20() {
    grp_fu_88315_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_8_phi_fu_9423_p4.read());
}

void poly1305_hw::thread_grp_fu_88323_p0() {
    grp_fu_88323_p0 =  (sc_lv<8>) (zext_ln382_30_reg_101076.read());
}

void poly1305_hw::thread_grp_fu_88323_p1() {
    grp_fu_88323_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88323_p2() {
    grp_fu_88323_p2 =  (sc_lv<4>) (grp_fu_88323_p20.read());
}

void poly1305_hw::thread_grp_fu_88323_p20() {
    grp_fu_88323_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_9_phi_fu_9433_p4.read());
}

void poly1305_hw::thread_grp_fu_88332_p0() {
    grp_fu_88332_p0 =  (sc_lv<8>) (zext_ln382_33_reg_101118.read());
}

void poly1305_hw::thread_grp_fu_88332_p1() {
    grp_fu_88332_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88332_p2() {
    grp_fu_88332_p2 =  (sc_lv<4>) (grp_fu_88332_p20.read());
}

void poly1305_hw::thread_grp_fu_88332_p20() {
    grp_fu_88332_p20 = esl_zext<12,4>(mulCarry42_1_3_10_reg_9440.read());
}

void poly1305_hw::thread_grp_fu_88341_p0() {
    grp_fu_88341_p0 =  (sc_lv<8>) (zext_ln382_36_reg_101161.read());
}

void poly1305_hw::thread_grp_fu_88341_p1() {
    grp_fu_88341_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88341_p2() {
    grp_fu_88341_p2 =  (sc_lv<4>) (grp_fu_88341_p20.read());
}

void poly1305_hw::thread_grp_fu_88341_p20() {
    grp_fu_88341_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_11_phi_fu_9454_p4.read());
}

void poly1305_hw::thread_grp_fu_88349_p0() {
    grp_fu_88349_p0 =  (sc_lv<8>) (zext_ln382_39_reg_101193.read());
}

void poly1305_hw::thread_grp_fu_88349_p1() {
    grp_fu_88349_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88349_p2() {
    grp_fu_88349_p2 =  (sc_lv<4>) (grp_fu_88349_p20.read());
}

void poly1305_hw::thread_grp_fu_88349_p20() {
    grp_fu_88349_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_12_phi_fu_9464_p4.read());
}

void poly1305_hw::thread_grp_fu_88358_p0() {
    grp_fu_88358_p0 =  (sc_lv<8>) (zext_ln382_47_reg_101235.read());
}

void poly1305_hw::thread_grp_fu_88358_p1() {
    grp_fu_88358_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88358_p2() {
    grp_fu_88358_p2 =  (sc_lv<4>) (grp_fu_88358_p20.read());
}

void poly1305_hw::thread_grp_fu_88358_p20() {
    grp_fu_88358_p20 = esl_zext<12,4>(mulCarry42_1_3_13_reg_9471.read());
}

void poly1305_hw::thread_grp_fu_88367_p0() {
    grp_fu_88367_p0 =  (sc_lv<8>) (zext_ln382_64_reg_101278.read());
}

void poly1305_hw::thread_grp_fu_88367_p1() {
    grp_fu_88367_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88367_p2() {
    grp_fu_88367_p2 =  (sc_lv<4>) (grp_fu_88367_p20.read());
}

void poly1305_hw::thread_grp_fu_88367_p20() {
    grp_fu_88367_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_14_phi_fu_9485_p4.read());
}

void poly1305_hw::thread_grp_fu_88375_p0() {
    grp_fu_88375_p0 =  (sc_lv<8>) (zext_ln382_81_reg_101310.read());
}

void poly1305_hw::thread_grp_fu_88375_p1() {
    grp_fu_88375_p1 =  (sc_lv<4>) (zext_ln96_11_reg_99593.read());
}

void poly1305_hw::thread_grp_fu_88375_p2() {
    grp_fu_88375_p2 =  (sc_lv<4>) (grp_fu_88375_p20.read());
}

void poly1305_hw::thread_grp_fu_88375_p20() {
    grp_fu_88375_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_3_15_phi_fu_9495_p4.read());
}

void poly1305_hw::thread_grp_fu_88384_p0() {
    grp_fu_88384_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_88384_p1() {
    grp_fu_88384_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88384_p2() {
    grp_fu_88384_p2 =  (sc_lv<8>) (grp_fu_88384_p20.read());
}

void poly1305_hw::thread_grp_fu_88384_p20() {
    grp_fu_88384_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_0_phi_fu_9517_p4.read());
}

void poly1305_hw::thread_grp_fu_88393_p0() {
    grp_fu_88393_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_88393_p1() {
    grp_fu_88393_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88393_p2() {
    grp_fu_88393_p2 =  (sc_lv<8>) (grp_fu_88393_p20.read());
}

void poly1305_hw::thread_grp_fu_88393_p20() {
    grp_fu_88393_p20 = esl_zext<16,8>(mulCarry42_1_4_1_reg_9524.read());
}

void poly1305_hw::thread_grp_fu_88402_p0() {
    grp_fu_88402_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_88402_p1() {
    grp_fu_88402_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88402_p2() {
    grp_fu_88402_p2 =  (sc_lv<8>) (grp_fu_88402_p20.read());
}

void poly1305_hw::thread_grp_fu_88402_p20() {
    grp_fu_88402_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_2_phi_fu_9538_p4.read());
}

void poly1305_hw::thread_grp_fu_88410_p0() {
    grp_fu_88410_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_88410_p1() {
    grp_fu_88410_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88410_p2() {
    grp_fu_88410_p2 =  (sc_lv<8>) (grp_fu_88410_p20.read());
}

void poly1305_hw::thread_grp_fu_88410_p20() {
    grp_fu_88410_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_3_phi_fu_9548_p4.read());
}

void poly1305_hw::thread_grp_fu_88419_p0() {
    grp_fu_88419_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_88419_p1() {
    grp_fu_88419_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88419_p2() {
    grp_fu_88419_p2 =  (sc_lv<8>) (grp_fu_88419_p20.read());
}

void poly1305_hw::thread_grp_fu_88419_p20() {
    grp_fu_88419_p20 = esl_zext<16,8>(mulCarry42_1_4_4_reg_9555.read());
}

void poly1305_hw::thread_grp_fu_88428_p0() {
    grp_fu_88428_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_88428_p1() {
    grp_fu_88428_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88428_p2() {
    grp_fu_88428_p2 =  (sc_lv<8>) (grp_fu_88428_p20.read());
}

void poly1305_hw::thread_grp_fu_88428_p20() {
    grp_fu_88428_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_5_phi_fu_9569_p4.read());
}

void poly1305_hw::thread_grp_fu_88436_p0() {
    grp_fu_88436_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_88436_p1() {
    grp_fu_88436_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88436_p2() {
    grp_fu_88436_p2 =  (sc_lv<8>) (grp_fu_88436_p20.read());
}

void poly1305_hw::thread_grp_fu_88436_p20() {
    grp_fu_88436_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_6_phi_fu_9579_p4.read());
}

void poly1305_hw::thread_grp_fu_88445_p0() {
    grp_fu_88445_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_88445_p1() {
    grp_fu_88445_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88445_p2() {
    grp_fu_88445_p2 =  (sc_lv<8>) (grp_fu_88445_p20.read());
}

void poly1305_hw::thread_grp_fu_88445_p20() {
    grp_fu_88445_p20 = esl_zext<16,8>(mulCarry42_1_4_7_reg_9586.read());
}

void poly1305_hw::thread_grp_fu_88454_p0() {
    grp_fu_88454_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_88454_p1() {
    grp_fu_88454_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88454_p2() {
    grp_fu_88454_p2 =  (sc_lv<8>) (grp_fu_88454_p20.read());
}

void poly1305_hw::thread_grp_fu_88454_p20() {
    grp_fu_88454_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_8_phi_fu_9600_p4.read());
}

void poly1305_hw::thread_grp_fu_88462_p0() {
    grp_fu_88462_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_88462_p1() {
    grp_fu_88462_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88462_p2() {
    grp_fu_88462_p2 =  (sc_lv<8>) (grp_fu_88462_p20.read());
}

void poly1305_hw::thread_grp_fu_88462_p20() {
    grp_fu_88462_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_9_phi_fu_9610_p4.read());
}

void poly1305_hw::thread_grp_fu_88471_p0() {
    grp_fu_88471_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_88471_p1() {
    grp_fu_88471_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88471_p2() {
    grp_fu_88471_p2 =  (sc_lv<8>) (grp_fu_88471_p20.read());
}

void poly1305_hw::thread_grp_fu_88471_p20() {
    grp_fu_88471_p20 = esl_zext<16,8>(mulCarry42_1_4_10_reg_9617.read());
}

void poly1305_hw::thread_grp_fu_88480_p0() {
    grp_fu_88480_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_88480_p1() {
    grp_fu_88480_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88480_p2() {
    grp_fu_88480_p2 =  (sc_lv<8>) (grp_fu_88480_p20.read());
}

void poly1305_hw::thread_grp_fu_88480_p20() {
    grp_fu_88480_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_11_phi_fu_9631_p4.read());
}

void poly1305_hw::thread_grp_fu_88488_p0() {
    grp_fu_88488_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_88488_p1() {
    grp_fu_88488_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88488_p2() {
    grp_fu_88488_p2 =  (sc_lv<8>) (grp_fu_88488_p20.read());
}

void poly1305_hw::thread_grp_fu_88488_p20() {
    grp_fu_88488_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_12_phi_fu_9641_p4.read());
}

void poly1305_hw::thread_grp_fu_88497_p0() {
    grp_fu_88497_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_88497_p1() {
    grp_fu_88497_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88497_p2() {
    grp_fu_88497_p2 =  (sc_lv<8>) (grp_fu_88497_p20.read());
}

void poly1305_hw::thread_grp_fu_88497_p20() {
    grp_fu_88497_p20 = esl_zext<16,8>(mulCarry42_1_4_13_reg_9648.read());
}

void poly1305_hw::thread_grp_fu_88506_p0() {
    grp_fu_88506_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_88506_p1() {
    grp_fu_88506_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88506_p2() {
    grp_fu_88506_p2 =  (sc_lv<8>) (grp_fu_88506_p20.read());
}

void poly1305_hw::thread_grp_fu_88506_p20() {
    grp_fu_88506_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_14_phi_fu_9662_p4.read());
}

void poly1305_hw::thread_grp_fu_88514_p0() {
    grp_fu_88514_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_88514_p1() {
    grp_fu_88514_p1 =  (sc_lv<8>) (zext_ln96_4_reg_99631.read());
}

void poly1305_hw::thread_grp_fu_88514_p2() {
    grp_fu_88514_p2 =  (sc_lv<8>) (grp_fu_88514_p20.read());
}

void poly1305_hw::thread_grp_fu_88514_p20() {
    grp_fu_88514_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_4_15_phi_fu_9672_p4.read());
}

void poly1305_hw::thread_grp_fu_88523_p0() {
    grp_fu_88523_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_88523_p1() {
    grp_fu_88523_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88523_p2() {
    grp_fu_88523_p2 =  (sc_lv<8>) (grp_fu_88523_p20.read());
}

void poly1305_hw::thread_grp_fu_88523_p20() {
    grp_fu_88523_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_0_phi_fu_9694_p4.read());
}

void poly1305_hw::thread_grp_fu_88532_p0() {
    grp_fu_88532_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_88532_p1() {
    grp_fu_88532_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88532_p2() {
    grp_fu_88532_p2 =  (sc_lv<8>) (grp_fu_88532_p20.read());
}

void poly1305_hw::thread_grp_fu_88532_p20() {
    grp_fu_88532_p20 = esl_zext<16,8>(mulCarry42_1_5_1_reg_9701.read());
}

void poly1305_hw::thread_grp_fu_88541_p0() {
    grp_fu_88541_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_88541_p1() {
    grp_fu_88541_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88541_p2() {
    grp_fu_88541_p2 =  (sc_lv<8>) (grp_fu_88541_p20.read());
}

void poly1305_hw::thread_grp_fu_88541_p20() {
    grp_fu_88541_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_2_phi_fu_9715_p4.read());
}

void poly1305_hw::thread_grp_fu_88549_p0() {
    grp_fu_88549_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_88549_p1() {
    grp_fu_88549_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88549_p2() {
    grp_fu_88549_p2 =  (sc_lv<8>) (grp_fu_88549_p20.read());
}

void poly1305_hw::thread_grp_fu_88549_p20() {
    grp_fu_88549_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_3_phi_fu_9725_p4.read());
}

void poly1305_hw::thread_grp_fu_88558_p0() {
    grp_fu_88558_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_88558_p1() {
    grp_fu_88558_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88558_p2() {
    grp_fu_88558_p2 =  (sc_lv<8>) (grp_fu_88558_p20.read());
}

void poly1305_hw::thread_grp_fu_88558_p20() {
    grp_fu_88558_p20 = esl_zext<16,8>(mulCarry42_1_5_4_reg_9732.read());
}

void poly1305_hw::thread_grp_fu_88567_p0() {
    grp_fu_88567_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_88567_p1() {
    grp_fu_88567_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88567_p2() {
    grp_fu_88567_p2 =  (sc_lv<8>) (grp_fu_88567_p20.read());
}

void poly1305_hw::thread_grp_fu_88567_p20() {
    grp_fu_88567_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_5_phi_fu_9746_p4.read());
}

void poly1305_hw::thread_grp_fu_88575_p0() {
    grp_fu_88575_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_88575_p1() {
    grp_fu_88575_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88575_p2() {
    grp_fu_88575_p2 =  (sc_lv<8>) (grp_fu_88575_p20.read());
}

void poly1305_hw::thread_grp_fu_88575_p20() {
    grp_fu_88575_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_6_phi_fu_9756_p4.read());
}

void poly1305_hw::thread_grp_fu_88584_p0() {
    grp_fu_88584_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_88584_p1() {
    grp_fu_88584_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88584_p2() {
    grp_fu_88584_p2 =  (sc_lv<8>) (grp_fu_88584_p20.read());
}

void poly1305_hw::thread_grp_fu_88584_p20() {
    grp_fu_88584_p20 = esl_zext<16,8>(mulCarry42_1_5_7_reg_9763.read());
}

void poly1305_hw::thread_grp_fu_88593_p0() {
    grp_fu_88593_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_88593_p1() {
    grp_fu_88593_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88593_p2() {
    grp_fu_88593_p2 =  (sc_lv<8>) (grp_fu_88593_p20.read());
}

void poly1305_hw::thread_grp_fu_88593_p20() {
    grp_fu_88593_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_8_phi_fu_9777_p4.read());
}

void poly1305_hw::thread_grp_fu_88601_p0() {
    grp_fu_88601_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_88601_p1() {
    grp_fu_88601_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88601_p2() {
    grp_fu_88601_p2 =  (sc_lv<8>) (grp_fu_88601_p20.read());
}

void poly1305_hw::thread_grp_fu_88601_p20() {
    grp_fu_88601_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_9_phi_fu_9787_p4.read());
}

void poly1305_hw::thread_grp_fu_88610_p0() {
    grp_fu_88610_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_88610_p1() {
    grp_fu_88610_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88610_p2() {
    grp_fu_88610_p2 =  (sc_lv<8>) (grp_fu_88610_p20.read());
}

void poly1305_hw::thread_grp_fu_88610_p20() {
    grp_fu_88610_p20 = esl_zext<16,8>(mulCarry42_1_5_10_reg_9794.read());
}

void poly1305_hw::thread_grp_fu_88619_p0() {
    grp_fu_88619_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_88619_p1() {
    grp_fu_88619_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88619_p2() {
    grp_fu_88619_p2 =  (sc_lv<8>) (grp_fu_88619_p20.read());
}

void poly1305_hw::thread_grp_fu_88619_p20() {
    grp_fu_88619_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_11_phi_fu_9808_p4.read());
}

void poly1305_hw::thread_grp_fu_88627_p0() {
    grp_fu_88627_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_88627_p1() {
    grp_fu_88627_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88627_p2() {
    grp_fu_88627_p2 =  (sc_lv<8>) (grp_fu_88627_p20.read());
}

void poly1305_hw::thread_grp_fu_88627_p20() {
    grp_fu_88627_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_12_phi_fu_9818_p4.read());
}

void poly1305_hw::thread_grp_fu_88636_p0() {
    grp_fu_88636_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_88636_p1() {
    grp_fu_88636_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88636_p2() {
    grp_fu_88636_p2 =  (sc_lv<8>) (grp_fu_88636_p20.read());
}

void poly1305_hw::thread_grp_fu_88636_p20() {
    grp_fu_88636_p20 = esl_zext<16,8>(mulCarry42_1_5_13_reg_9825.read());
}

void poly1305_hw::thread_grp_fu_88645_p0() {
    grp_fu_88645_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_88645_p1() {
    grp_fu_88645_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88645_p2() {
    grp_fu_88645_p2 =  (sc_lv<8>) (grp_fu_88645_p20.read());
}

void poly1305_hw::thread_grp_fu_88645_p20() {
    grp_fu_88645_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_14_phi_fu_9839_p4.read());
}

void poly1305_hw::thread_grp_fu_88653_p0() {
    grp_fu_88653_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_88653_p1() {
    grp_fu_88653_p1 =  (sc_lv<8>) (zext_ln96_5_reg_99669.read());
}

void poly1305_hw::thread_grp_fu_88653_p2() {
    grp_fu_88653_p2 =  (sc_lv<8>) (grp_fu_88653_p20.read());
}

void poly1305_hw::thread_grp_fu_88653_p20() {
    grp_fu_88653_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_5_15_phi_fu_9849_p4.read());
}

void poly1305_hw::thread_grp_fu_88662_p0() {
    grp_fu_88662_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_88662_p1() {
    grp_fu_88662_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88662_p2() {
    grp_fu_88662_p2 =  (sc_lv<8>) (grp_fu_88662_p20.read());
}

void poly1305_hw::thread_grp_fu_88662_p20() {
    grp_fu_88662_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_0_phi_fu_9871_p4.read());
}

void poly1305_hw::thread_grp_fu_88671_p0() {
    grp_fu_88671_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_88671_p1() {
    grp_fu_88671_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88671_p2() {
    grp_fu_88671_p2 =  (sc_lv<8>) (grp_fu_88671_p20.read());
}

void poly1305_hw::thread_grp_fu_88671_p20() {
    grp_fu_88671_p20 = esl_zext<16,8>(mulCarry42_1_6_1_reg_9878.read());
}

void poly1305_hw::thread_grp_fu_88680_p0() {
    grp_fu_88680_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_88680_p1() {
    grp_fu_88680_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88680_p2() {
    grp_fu_88680_p2 =  (sc_lv<8>) (grp_fu_88680_p20.read());
}

void poly1305_hw::thread_grp_fu_88680_p20() {
    grp_fu_88680_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_2_phi_fu_9892_p4.read());
}

void poly1305_hw::thread_grp_fu_88688_p0() {
    grp_fu_88688_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_88688_p1() {
    grp_fu_88688_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88688_p2() {
    grp_fu_88688_p2 =  (sc_lv<8>) (grp_fu_88688_p20.read());
}

void poly1305_hw::thread_grp_fu_88688_p20() {
    grp_fu_88688_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_3_phi_fu_9902_p4.read());
}

void poly1305_hw::thread_grp_fu_88697_p0() {
    grp_fu_88697_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_88697_p1() {
    grp_fu_88697_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88697_p2() {
    grp_fu_88697_p2 =  (sc_lv<8>) (grp_fu_88697_p20.read());
}

void poly1305_hw::thread_grp_fu_88697_p20() {
    grp_fu_88697_p20 = esl_zext<16,8>(mulCarry42_1_6_4_reg_9909.read());
}

void poly1305_hw::thread_grp_fu_88706_p0() {
    grp_fu_88706_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_88706_p1() {
    grp_fu_88706_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88706_p2() {
    grp_fu_88706_p2 =  (sc_lv<8>) (grp_fu_88706_p20.read());
}

void poly1305_hw::thread_grp_fu_88706_p20() {
    grp_fu_88706_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_5_phi_fu_9923_p4.read());
}

void poly1305_hw::thread_grp_fu_88714_p0() {
    grp_fu_88714_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_88714_p1() {
    grp_fu_88714_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88714_p2() {
    grp_fu_88714_p2 =  (sc_lv<8>) (grp_fu_88714_p20.read());
}

void poly1305_hw::thread_grp_fu_88714_p20() {
    grp_fu_88714_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_6_phi_fu_9933_p4.read());
}

void poly1305_hw::thread_grp_fu_88723_p0() {
    grp_fu_88723_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_88723_p1() {
    grp_fu_88723_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88723_p2() {
    grp_fu_88723_p2 =  (sc_lv<8>) (grp_fu_88723_p20.read());
}

void poly1305_hw::thread_grp_fu_88723_p20() {
    grp_fu_88723_p20 = esl_zext<16,8>(mulCarry42_1_6_7_reg_9940.read());
}

void poly1305_hw::thread_grp_fu_88732_p0() {
    grp_fu_88732_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_88732_p1() {
    grp_fu_88732_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88732_p2() {
    grp_fu_88732_p2 =  (sc_lv<8>) (grp_fu_88732_p20.read());
}

void poly1305_hw::thread_grp_fu_88732_p20() {
    grp_fu_88732_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_8_phi_fu_9954_p4.read());
}

void poly1305_hw::thread_grp_fu_88740_p0() {
    grp_fu_88740_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_88740_p1() {
    grp_fu_88740_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88740_p2() {
    grp_fu_88740_p2 =  (sc_lv<8>) (grp_fu_88740_p20.read());
}

void poly1305_hw::thread_grp_fu_88740_p20() {
    grp_fu_88740_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_9_phi_fu_9964_p4.read());
}

void poly1305_hw::thread_grp_fu_88749_p0() {
    grp_fu_88749_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_88749_p1() {
    grp_fu_88749_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88749_p2() {
    grp_fu_88749_p2 =  (sc_lv<8>) (grp_fu_88749_p20.read());
}

void poly1305_hw::thread_grp_fu_88749_p20() {
    grp_fu_88749_p20 = esl_zext<16,8>(mulCarry42_1_6_10_reg_9971.read());
}

void poly1305_hw::thread_grp_fu_88758_p0() {
    grp_fu_88758_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_88758_p1() {
    grp_fu_88758_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88758_p2() {
    grp_fu_88758_p2 =  (sc_lv<8>) (grp_fu_88758_p20.read());
}

void poly1305_hw::thread_grp_fu_88758_p20() {
    grp_fu_88758_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_11_phi_fu_9985_p4.read());
}

void poly1305_hw::thread_grp_fu_88766_p0() {
    grp_fu_88766_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_88766_p1() {
    grp_fu_88766_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88766_p2() {
    grp_fu_88766_p2 =  (sc_lv<8>) (grp_fu_88766_p20.read());
}

void poly1305_hw::thread_grp_fu_88766_p20() {
    grp_fu_88766_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_12_phi_fu_9995_p4.read());
}

void poly1305_hw::thread_grp_fu_88775_p0() {
    grp_fu_88775_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_88775_p1() {
    grp_fu_88775_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88775_p2() {
    grp_fu_88775_p2 =  (sc_lv<8>) (grp_fu_88775_p20.read());
}

void poly1305_hw::thread_grp_fu_88775_p20() {
    grp_fu_88775_p20 = esl_zext<16,8>(mulCarry42_1_6_13_reg_10002.read());
}

void poly1305_hw::thread_grp_fu_88784_p0() {
    grp_fu_88784_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_88784_p1() {
    grp_fu_88784_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88784_p2() {
    grp_fu_88784_p2 =  (sc_lv<8>) (grp_fu_88784_p20.read());
}

void poly1305_hw::thread_grp_fu_88784_p20() {
    grp_fu_88784_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_14_phi_fu_10016_p4.read());
}

void poly1305_hw::thread_grp_fu_88792_p0() {
    grp_fu_88792_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_88792_p1() {
    grp_fu_88792_p1 =  (sc_lv<8>) (zext_ln96_6_reg_99707.read());
}

void poly1305_hw::thread_grp_fu_88792_p2() {
    grp_fu_88792_p2 =  (sc_lv<8>) (grp_fu_88792_p20.read());
}

void poly1305_hw::thread_grp_fu_88792_p20() {
    grp_fu_88792_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_6_15_phi_fu_10026_p4.read());
}

void poly1305_hw::thread_grp_fu_88801_p0() {
    grp_fu_88801_p0 =  (sc_lv<8>) (zext_ln382_3_reg_100725.read());
}

void poly1305_hw::thread_grp_fu_88801_p1() {
    grp_fu_88801_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88801_p2() {
    grp_fu_88801_p2 =  (sc_lv<4>) (grp_fu_88801_p20.read());
}

void poly1305_hw::thread_grp_fu_88801_p20() {
    grp_fu_88801_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_0_phi_fu_10048_p4.read());
}

void poly1305_hw::thread_grp_fu_88810_p0() {
    grp_fu_88810_p0 =  (sc_lv<8>) (zext_ln382_6_reg_100767.read());
}

void poly1305_hw::thread_grp_fu_88810_p1() {
    grp_fu_88810_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88810_p2() {
    grp_fu_88810_p2 =  (sc_lv<4>) (grp_fu_88810_p20.read());
}

void poly1305_hw::thread_grp_fu_88810_p20() {
    grp_fu_88810_p20 = esl_zext<12,4>(mulCarry42_1_7_1_reg_10055.read());
}

void poly1305_hw::thread_grp_fu_88819_p0() {
    grp_fu_88819_p0 =  (sc_lv<8>) (zext_ln382_9_reg_100810.read());
}

void poly1305_hw::thread_grp_fu_88819_p1() {
    grp_fu_88819_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88819_p2() {
    grp_fu_88819_p2 =  (sc_lv<4>) (grp_fu_88819_p20.read());
}

void poly1305_hw::thread_grp_fu_88819_p20() {
    grp_fu_88819_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_2_phi_fu_10069_p4.read());
}

void poly1305_hw::thread_grp_fu_88827_p0() {
    grp_fu_88827_p0 =  (sc_lv<8>) (zext_ln382_12_reg_100842.read());
}

void poly1305_hw::thread_grp_fu_88827_p1() {
    grp_fu_88827_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88827_p2() {
    grp_fu_88827_p2 =  (sc_lv<4>) (grp_fu_88827_p20.read());
}

void poly1305_hw::thread_grp_fu_88827_p20() {
    grp_fu_88827_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_3_phi_fu_10079_p4.read());
}

void poly1305_hw::thread_grp_fu_88836_p0() {
    grp_fu_88836_p0 =  (sc_lv<8>) (zext_ln382_15_reg_100884.read());
}

void poly1305_hw::thread_grp_fu_88836_p1() {
    grp_fu_88836_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88836_p2() {
    grp_fu_88836_p2 =  (sc_lv<4>) (grp_fu_88836_p20.read());
}

void poly1305_hw::thread_grp_fu_88836_p20() {
    grp_fu_88836_p20 = esl_zext<12,4>(mulCarry42_1_7_4_reg_10086.read());
}

void poly1305_hw::thread_grp_fu_88845_p0() {
    grp_fu_88845_p0 =  (sc_lv<8>) (zext_ln382_18_reg_100927.read());
}

void poly1305_hw::thread_grp_fu_88845_p1() {
    grp_fu_88845_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88845_p2() {
    grp_fu_88845_p2 =  (sc_lv<4>) (grp_fu_88845_p20.read());
}

void poly1305_hw::thread_grp_fu_88845_p20() {
    grp_fu_88845_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_5_phi_fu_10100_p4.read());
}

void poly1305_hw::thread_grp_fu_88853_p0() {
    grp_fu_88853_p0 =  (sc_lv<8>) (zext_ln382_21_reg_100959.read());
}

void poly1305_hw::thread_grp_fu_88853_p1() {
    grp_fu_88853_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88853_p2() {
    grp_fu_88853_p2 =  (sc_lv<4>) (grp_fu_88853_p20.read());
}

void poly1305_hw::thread_grp_fu_88853_p20() {
    grp_fu_88853_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_6_phi_fu_10110_p4.read());
}

void poly1305_hw::thread_grp_fu_88862_p0() {
    grp_fu_88862_p0 =  (sc_lv<8>) (zext_ln382_24_reg_101001.read());
}

void poly1305_hw::thread_grp_fu_88862_p1() {
    grp_fu_88862_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88862_p2() {
    grp_fu_88862_p2 =  (sc_lv<4>) (grp_fu_88862_p20.read());
}

void poly1305_hw::thread_grp_fu_88862_p20() {
    grp_fu_88862_p20 = esl_zext<12,4>(mulCarry42_1_7_7_reg_10117.read());
}

void poly1305_hw::thread_grp_fu_88871_p0() {
    grp_fu_88871_p0 =  (sc_lv<8>) (zext_ln382_27_reg_101044.read());
}

void poly1305_hw::thread_grp_fu_88871_p1() {
    grp_fu_88871_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88871_p2() {
    grp_fu_88871_p2 =  (sc_lv<4>) (grp_fu_88871_p20.read());
}

void poly1305_hw::thread_grp_fu_88871_p20() {
    grp_fu_88871_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_8_phi_fu_10131_p4.read());
}

void poly1305_hw::thread_grp_fu_88879_p0() {
    grp_fu_88879_p0 =  (sc_lv<8>) (zext_ln382_30_reg_101076.read());
}

void poly1305_hw::thread_grp_fu_88879_p1() {
    grp_fu_88879_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88879_p2() {
    grp_fu_88879_p2 =  (sc_lv<4>) (grp_fu_88879_p20.read());
}

void poly1305_hw::thread_grp_fu_88879_p20() {
    grp_fu_88879_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_9_phi_fu_10141_p4.read());
}

void poly1305_hw::thread_grp_fu_88888_p0() {
    grp_fu_88888_p0 =  (sc_lv<8>) (zext_ln382_33_reg_101118.read());
}

void poly1305_hw::thread_grp_fu_88888_p1() {
    grp_fu_88888_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88888_p2() {
    grp_fu_88888_p2 =  (sc_lv<4>) (grp_fu_88888_p20.read());
}

void poly1305_hw::thread_grp_fu_88888_p20() {
    grp_fu_88888_p20 = esl_zext<12,4>(mulCarry42_1_7_10_reg_10148.read());
}

void poly1305_hw::thread_grp_fu_88897_p0() {
    grp_fu_88897_p0 =  (sc_lv<8>) (zext_ln382_36_reg_101161.read());
}

void poly1305_hw::thread_grp_fu_88897_p1() {
    grp_fu_88897_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88897_p2() {
    grp_fu_88897_p2 =  (sc_lv<4>) (grp_fu_88897_p20.read());
}

void poly1305_hw::thread_grp_fu_88897_p20() {
    grp_fu_88897_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_11_phi_fu_10162_p4.read());
}

void poly1305_hw::thread_grp_fu_88905_p0() {
    grp_fu_88905_p0 =  (sc_lv<8>) (zext_ln382_39_reg_101193.read());
}

void poly1305_hw::thread_grp_fu_88905_p1() {
    grp_fu_88905_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88905_p2() {
    grp_fu_88905_p2 =  (sc_lv<4>) (grp_fu_88905_p20.read());
}

void poly1305_hw::thread_grp_fu_88905_p20() {
    grp_fu_88905_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_12_phi_fu_10172_p4.read());
}

void poly1305_hw::thread_grp_fu_88914_p0() {
    grp_fu_88914_p0 =  (sc_lv<8>) (zext_ln382_47_reg_101235.read());
}

void poly1305_hw::thread_grp_fu_88914_p1() {
    grp_fu_88914_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88914_p2() {
    grp_fu_88914_p2 =  (sc_lv<4>) (grp_fu_88914_p20.read());
}

void poly1305_hw::thread_grp_fu_88914_p20() {
    grp_fu_88914_p20 = esl_zext<12,4>(mulCarry42_1_7_13_reg_10179.read());
}

void poly1305_hw::thread_grp_fu_88923_p0() {
    grp_fu_88923_p0 =  (sc_lv<8>) (zext_ln382_64_reg_101278.read());
}

void poly1305_hw::thread_grp_fu_88923_p1() {
    grp_fu_88923_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88923_p2() {
    grp_fu_88923_p2 =  (sc_lv<4>) (grp_fu_88923_p20.read());
}

void poly1305_hw::thread_grp_fu_88923_p20() {
    grp_fu_88923_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_14_phi_fu_10193_p4.read());
}

void poly1305_hw::thread_grp_fu_88931_p0() {
    grp_fu_88931_p0 =  (sc_lv<8>) (zext_ln382_81_reg_101310.read());
}

void poly1305_hw::thread_grp_fu_88931_p1() {
    grp_fu_88931_p1 =  (sc_lv<4>) (zext_ln96_15_reg_99745.read());
}

void poly1305_hw::thread_grp_fu_88931_p2() {
    grp_fu_88931_p2 =  (sc_lv<4>) (grp_fu_88931_p20.read());
}

void poly1305_hw::thread_grp_fu_88931_p20() {
    grp_fu_88931_p20 = esl_zext<12,4>(ap_phi_mux_mulCarry42_1_7_15_phi_fu_10203_p4.read());
}

void poly1305_hw::thread_grp_fu_88940_p0() {
    grp_fu_88940_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_88940_p1() {
    grp_fu_88940_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_88940_p2() {
    grp_fu_88940_p2 =  (sc_lv<8>) (grp_fu_88940_p20.read());
}

void poly1305_hw::thread_grp_fu_88940_p20() {
    grp_fu_88940_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_0_phi_fu_10225_p4.read());
}

void poly1305_hw::thread_grp_fu_88949_p0() {
    grp_fu_88949_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_88949_p1() {
    grp_fu_88949_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_88949_p2() {
    grp_fu_88949_p2 =  (sc_lv<8>) (grp_fu_88949_p20.read());
}

void poly1305_hw::thread_grp_fu_88949_p20() {
    grp_fu_88949_p20 = esl_zext<16,8>(mulCarry42_1_8_1_reg_10232.read());
}

void poly1305_hw::thread_grp_fu_88958_p0() {
    grp_fu_88958_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_88958_p1() {
    grp_fu_88958_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_88958_p2() {
    grp_fu_88958_p2 =  (sc_lv<8>) (grp_fu_88958_p20.read());
}

void poly1305_hw::thread_grp_fu_88958_p20() {
    grp_fu_88958_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_2_phi_fu_10246_p4.read());
}

void poly1305_hw::thread_grp_fu_88966_p0() {
    grp_fu_88966_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_88966_p1() {
    grp_fu_88966_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_88966_p2() {
    grp_fu_88966_p2 =  (sc_lv<8>) (grp_fu_88966_p20.read());
}

void poly1305_hw::thread_grp_fu_88966_p20() {
    grp_fu_88966_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_3_phi_fu_10256_p4.read());
}

void poly1305_hw::thread_grp_fu_88975_p0() {
    grp_fu_88975_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_88975_p1() {
    grp_fu_88975_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_88975_p2() {
    grp_fu_88975_p2 =  (sc_lv<8>) (grp_fu_88975_p20.read());
}

void poly1305_hw::thread_grp_fu_88975_p20() {
    grp_fu_88975_p20 = esl_zext<16,8>(mulCarry42_1_8_4_reg_10263.read());
}

void poly1305_hw::thread_grp_fu_88984_p0() {
    grp_fu_88984_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_88984_p1() {
    grp_fu_88984_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_88984_p2() {
    grp_fu_88984_p2 =  (sc_lv<8>) (grp_fu_88984_p20.read());
}

void poly1305_hw::thread_grp_fu_88984_p20() {
    grp_fu_88984_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_5_phi_fu_10277_p4.read());
}

void poly1305_hw::thread_grp_fu_88992_p0() {
    grp_fu_88992_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_88992_p1() {
    grp_fu_88992_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_88992_p2() {
    grp_fu_88992_p2 =  (sc_lv<8>) (grp_fu_88992_p20.read());
}

void poly1305_hw::thread_grp_fu_88992_p20() {
    grp_fu_88992_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_6_phi_fu_10287_p4.read());
}

void poly1305_hw::thread_grp_fu_89001_p0() {
    grp_fu_89001_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_89001_p1() {
    grp_fu_89001_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_89001_p2() {
    grp_fu_89001_p2 =  (sc_lv<8>) (grp_fu_89001_p20.read());
}

void poly1305_hw::thread_grp_fu_89001_p20() {
    grp_fu_89001_p20 = esl_zext<16,8>(mulCarry42_1_8_7_reg_10294.read());
}

void poly1305_hw::thread_grp_fu_89010_p0() {
    grp_fu_89010_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_89010_p1() {
    grp_fu_89010_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_89010_p2() {
    grp_fu_89010_p2 =  (sc_lv<8>) (grp_fu_89010_p20.read());
}

void poly1305_hw::thread_grp_fu_89010_p20() {
    grp_fu_89010_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_8_phi_fu_10308_p4.read());
}

void poly1305_hw::thread_grp_fu_89018_p0() {
    grp_fu_89018_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_89018_p1() {
    grp_fu_89018_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_89018_p2() {
    grp_fu_89018_p2 =  (sc_lv<8>) (grp_fu_89018_p20.read());
}

void poly1305_hw::thread_grp_fu_89018_p20() {
    grp_fu_89018_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_9_phi_fu_10318_p4.read());
}

void poly1305_hw::thread_grp_fu_89027_p0() {
    grp_fu_89027_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_89027_p1() {
    grp_fu_89027_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_89027_p2() {
    grp_fu_89027_p2 =  (sc_lv<8>) (grp_fu_89027_p20.read());
}

void poly1305_hw::thread_grp_fu_89027_p20() {
    grp_fu_89027_p20 = esl_zext<16,8>(mulCarry42_1_8_10_reg_10325.read());
}

void poly1305_hw::thread_grp_fu_89036_p0() {
    grp_fu_89036_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_89036_p1() {
    grp_fu_89036_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_89036_p2() {
    grp_fu_89036_p2 =  (sc_lv<8>) (grp_fu_89036_p20.read());
}

void poly1305_hw::thread_grp_fu_89036_p20() {
    grp_fu_89036_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_11_phi_fu_10339_p4.read());
}

void poly1305_hw::thread_grp_fu_89044_p0() {
    grp_fu_89044_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_89044_p1() {
    grp_fu_89044_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_89044_p2() {
    grp_fu_89044_p2 =  (sc_lv<8>) (grp_fu_89044_p20.read());
}

void poly1305_hw::thread_grp_fu_89044_p20() {
    grp_fu_89044_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_12_phi_fu_10349_p4.read());
}

void poly1305_hw::thread_grp_fu_89053_p0() {
    grp_fu_89053_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_89053_p1() {
    grp_fu_89053_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_89053_p2() {
    grp_fu_89053_p2 =  (sc_lv<8>) (grp_fu_89053_p20.read());
}

void poly1305_hw::thread_grp_fu_89053_p20() {
    grp_fu_89053_p20 = esl_zext<16,8>(mulCarry42_1_8_13_reg_10356.read());
}

void poly1305_hw::thread_grp_fu_89062_p0() {
    grp_fu_89062_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_89062_p1() {
    grp_fu_89062_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_89062_p2() {
    grp_fu_89062_p2 =  (sc_lv<8>) (grp_fu_89062_p20.read());
}

void poly1305_hw::thread_grp_fu_89062_p20() {
    grp_fu_89062_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_14_phi_fu_10370_p4.read());
}

void poly1305_hw::thread_grp_fu_89070_p0() {
    grp_fu_89070_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_89070_p1() {
    grp_fu_89070_p1 =  (sc_lv<8>) (zext_ln96_8_reg_99783.read());
}

void poly1305_hw::thread_grp_fu_89070_p2() {
    grp_fu_89070_p2 =  (sc_lv<8>) (grp_fu_89070_p20.read());
}

void poly1305_hw::thread_grp_fu_89070_p20() {
    grp_fu_89070_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_8_15_phi_fu_10380_p4.read());
}

void poly1305_hw::thread_grp_fu_89079_p0() {
    grp_fu_89079_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_89079_p1() {
    grp_fu_89079_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89079_p2() {
    grp_fu_89079_p2 =  (sc_lv<8>) (grp_fu_89079_p20.read());
}

void poly1305_hw::thread_grp_fu_89079_p20() {
    grp_fu_89079_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_0_phi_fu_10402_p4.read());
}

void poly1305_hw::thread_grp_fu_89088_p0() {
    grp_fu_89088_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_89088_p1() {
    grp_fu_89088_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89088_p2() {
    grp_fu_89088_p2 =  (sc_lv<8>) (grp_fu_89088_p20.read());
}

void poly1305_hw::thread_grp_fu_89088_p20() {
    grp_fu_89088_p20 = esl_zext<16,8>(mulCarry42_1_9_1_reg_10409.read());
}

void poly1305_hw::thread_grp_fu_89097_p0() {
    grp_fu_89097_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_89097_p1() {
    grp_fu_89097_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89097_p2() {
    grp_fu_89097_p2 =  (sc_lv<8>) (grp_fu_89097_p20.read());
}

void poly1305_hw::thread_grp_fu_89097_p20() {
    grp_fu_89097_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_2_phi_fu_10423_p4.read());
}

void poly1305_hw::thread_grp_fu_89105_p0() {
    grp_fu_89105_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_89105_p1() {
    grp_fu_89105_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89105_p2() {
    grp_fu_89105_p2 =  (sc_lv<8>) (grp_fu_89105_p20.read());
}

void poly1305_hw::thread_grp_fu_89105_p20() {
    grp_fu_89105_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_3_phi_fu_10433_p4.read());
}

void poly1305_hw::thread_grp_fu_89114_p0() {
    grp_fu_89114_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_89114_p1() {
    grp_fu_89114_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89114_p2() {
    grp_fu_89114_p2 =  (sc_lv<8>) (grp_fu_89114_p20.read());
}

void poly1305_hw::thread_grp_fu_89114_p20() {
    grp_fu_89114_p20 = esl_zext<16,8>(mulCarry42_1_9_4_reg_10440.read());
}

void poly1305_hw::thread_grp_fu_89123_p0() {
    grp_fu_89123_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_89123_p1() {
    grp_fu_89123_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89123_p2() {
    grp_fu_89123_p2 =  (sc_lv<8>) (grp_fu_89123_p20.read());
}

void poly1305_hw::thread_grp_fu_89123_p20() {
    grp_fu_89123_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_5_phi_fu_10454_p4.read());
}

void poly1305_hw::thread_grp_fu_89131_p0() {
    grp_fu_89131_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_89131_p1() {
    grp_fu_89131_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89131_p2() {
    grp_fu_89131_p2 =  (sc_lv<8>) (grp_fu_89131_p20.read());
}

void poly1305_hw::thread_grp_fu_89131_p20() {
    grp_fu_89131_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_6_phi_fu_10464_p4.read());
}

void poly1305_hw::thread_grp_fu_89140_p0() {
    grp_fu_89140_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_89140_p1() {
    grp_fu_89140_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89140_p2() {
    grp_fu_89140_p2 =  (sc_lv<8>) (grp_fu_89140_p20.read());
}

void poly1305_hw::thread_grp_fu_89140_p20() {
    grp_fu_89140_p20 = esl_zext<16,8>(mulCarry42_1_9_7_reg_10471.read());
}

void poly1305_hw::thread_grp_fu_89149_p0() {
    grp_fu_89149_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_89149_p1() {
    grp_fu_89149_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89149_p2() {
    grp_fu_89149_p2 =  (sc_lv<8>) (grp_fu_89149_p20.read());
}

void poly1305_hw::thread_grp_fu_89149_p20() {
    grp_fu_89149_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_8_phi_fu_10485_p4.read());
}

void poly1305_hw::thread_grp_fu_89157_p0() {
    grp_fu_89157_p0 =  (sc_lv<8>) (zext_ln382_29_reg_101061.read());
}

void poly1305_hw::thread_grp_fu_89157_p1() {
    grp_fu_89157_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89157_p2() {
    grp_fu_89157_p2 =  (sc_lv<8>) (grp_fu_89157_p20.read());
}

void poly1305_hw::thread_grp_fu_89157_p20() {
    grp_fu_89157_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_9_phi_fu_10495_p4.read());
}

void poly1305_hw::thread_grp_fu_89166_p0() {
    grp_fu_89166_p0 =  (sc_lv<8>) (zext_ln382_32_reg_101103.read());
}

void poly1305_hw::thread_grp_fu_89166_p1() {
    grp_fu_89166_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89166_p2() {
    grp_fu_89166_p2 =  (sc_lv<8>) (grp_fu_89166_p20.read());
}

void poly1305_hw::thread_grp_fu_89166_p20() {
    grp_fu_89166_p20 = esl_zext<16,8>(mulCarry42_1_9_10_reg_10502.read());
}

void poly1305_hw::thread_grp_fu_89175_p0() {
    grp_fu_89175_p0 =  (sc_lv<8>) (zext_ln382_35_reg_101135.read());
}

void poly1305_hw::thread_grp_fu_89175_p1() {
    grp_fu_89175_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89175_p2() {
    grp_fu_89175_p2 =  (sc_lv<8>) (grp_fu_89175_p20.read());
}

void poly1305_hw::thread_grp_fu_89175_p20() {
    grp_fu_89175_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_11_phi_fu_10516_p4.read());
}

void poly1305_hw::thread_grp_fu_89183_p0() {
    grp_fu_89183_p0 =  (sc_lv<8>) (zext_ln382_38_reg_101178.read());
}

void poly1305_hw::thread_grp_fu_89183_p1() {
    grp_fu_89183_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89183_p2() {
    grp_fu_89183_p2 =  (sc_lv<8>) (grp_fu_89183_p20.read());
}

void poly1305_hw::thread_grp_fu_89183_p20() {
    grp_fu_89183_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_12_phi_fu_10526_p4.read());
}

void poly1305_hw::thread_grp_fu_89192_p0() {
    grp_fu_89192_p0 =  (sc_lv<8>) (zext_ln382_41_reg_101220.read());
}

void poly1305_hw::thread_grp_fu_89192_p1() {
    grp_fu_89192_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89192_p2() {
    grp_fu_89192_p2 =  (sc_lv<8>) (grp_fu_89192_p20.read());
}

void poly1305_hw::thread_grp_fu_89192_p20() {
    grp_fu_89192_p20 = esl_zext<16,8>(mulCarry42_1_9_13_reg_10533.read());
}

void poly1305_hw::thread_grp_fu_89201_p0() {
    grp_fu_89201_p0 =  (sc_lv<8>) (zext_ln382_43_reg_101252.read());
}

void poly1305_hw::thread_grp_fu_89201_p1() {
    grp_fu_89201_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89201_p2() {
    grp_fu_89201_p2 =  (sc_lv<8>) (grp_fu_89201_p20.read());
}

void poly1305_hw::thread_grp_fu_89201_p20() {
    grp_fu_89201_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_14_phi_fu_10547_p4.read());
}

void poly1305_hw::thread_grp_fu_89209_p0() {
    grp_fu_89209_p0 =  (sc_lv<8>) (zext_ln382_45_reg_101295.read());
}

void poly1305_hw::thread_grp_fu_89209_p1() {
    grp_fu_89209_p1 =  (sc_lv<8>) (zext_ln96_9_reg_99821.read());
}

void poly1305_hw::thread_grp_fu_89209_p2() {
    grp_fu_89209_p2 =  (sc_lv<8>) (grp_fu_89209_p20.read());
}

void poly1305_hw::thread_grp_fu_89209_p20() {
    grp_fu_89209_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_9_15_phi_fu_10557_p4.read());
}

void poly1305_hw::thread_grp_fu_89218_p0() {
    grp_fu_89218_p0 =  (sc_lv<8>) (zext_ln382_2_reg_100710.read());
}

void poly1305_hw::thread_grp_fu_89218_p1() {
    grp_fu_89218_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89218_p2() {
    grp_fu_89218_p2 =  (sc_lv<8>) (grp_fu_89218_p20.read());
}

void poly1305_hw::thread_grp_fu_89218_p20() {
    grp_fu_89218_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_0_phi_fu_10579_p4.read());
}

void poly1305_hw::thread_grp_fu_89227_p0() {
    grp_fu_89227_p0 =  (sc_lv<8>) (zext_ln382_5_reg_100752.read());
}

void poly1305_hw::thread_grp_fu_89227_p1() {
    grp_fu_89227_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89227_p2() {
    grp_fu_89227_p2 =  (sc_lv<8>) (grp_fu_89227_p20.read());
}

void poly1305_hw::thread_grp_fu_89227_p20() {
    grp_fu_89227_p20 = esl_zext<16,8>(mulCarry42_1_10_1_reg_10586.read());
}

void poly1305_hw::thread_grp_fu_89236_p0() {
    grp_fu_89236_p0 =  (sc_lv<8>) (zext_ln382_8_reg_100784.read());
}

void poly1305_hw::thread_grp_fu_89236_p1() {
    grp_fu_89236_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89236_p2() {
    grp_fu_89236_p2 =  (sc_lv<8>) (grp_fu_89236_p20.read());
}

void poly1305_hw::thread_grp_fu_89236_p20() {
    grp_fu_89236_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_2_phi_fu_10600_p4.read());
}

void poly1305_hw::thread_grp_fu_89244_p0() {
    grp_fu_89244_p0 =  (sc_lv<8>) (zext_ln382_11_reg_100827.read());
}

void poly1305_hw::thread_grp_fu_89244_p1() {
    grp_fu_89244_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89244_p2() {
    grp_fu_89244_p2 =  (sc_lv<8>) (grp_fu_89244_p20.read());
}

void poly1305_hw::thread_grp_fu_89244_p20() {
    grp_fu_89244_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_3_phi_fu_10610_p4.read());
}

void poly1305_hw::thread_grp_fu_89253_p0() {
    grp_fu_89253_p0 =  (sc_lv<8>) (zext_ln382_14_reg_100869.read());
}

void poly1305_hw::thread_grp_fu_89253_p1() {
    grp_fu_89253_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89253_p2() {
    grp_fu_89253_p2 =  (sc_lv<8>) (grp_fu_89253_p20.read());
}

void poly1305_hw::thread_grp_fu_89253_p20() {
    grp_fu_89253_p20 = esl_zext<16,8>(mulCarry42_1_10_4_reg_10617.read());
}

void poly1305_hw::thread_grp_fu_89262_p0() {
    grp_fu_89262_p0 =  (sc_lv<8>) (zext_ln382_17_reg_100901.read());
}

void poly1305_hw::thread_grp_fu_89262_p1() {
    grp_fu_89262_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89262_p2() {
    grp_fu_89262_p2 =  (sc_lv<8>) (grp_fu_89262_p20.read());
}

void poly1305_hw::thread_grp_fu_89262_p20() {
    grp_fu_89262_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_5_phi_fu_10631_p4.read());
}

void poly1305_hw::thread_grp_fu_89270_p0() {
    grp_fu_89270_p0 =  (sc_lv<8>) (zext_ln382_20_reg_100944.read());
}

void poly1305_hw::thread_grp_fu_89270_p1() {
    grp_fu_89270_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89270_p2() {
    grp_fu_89270_p2 =  (sc_lv<8>) (grp_fu_89270_p20.read());
}

void poly1305_hw::thread_grp_fu_89270_p20() {
    grp_fu_89270_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_6_phi_fu_10641_p4.read());
}

void poly1305_hw::thread_grp_fu_89279_p0() {
    grp_fu_89279_p0 =  (sc_lv<8>) (zext_ln382_23_reg_100986.read());
}

void poly1305_hw::thread_grp_fu_89279_p1() {
    grp_fu_89279_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89279_p2() {
    grp_fu_89279_p2 =  (sc_lv<8>) (grp_fu_89279_p20.read());
}

void poly1305_hw::thread_grp_fu_89279_p20() {
    grp_fu_89279_p20 = esl_zext<16,8>(mulCarry42_1_10_7_reg_10648.read());
}

void poly1305_hw::thread_grp_fu_89288_p0() {
    grp_fu_89288_p0 =  (sc_lv<8>) (zext_ln382_26_reg_101018.read());
}

void poly1305_hw::thread_grp_fu_89288_p1() {
    grp_fu_89288_p1 =  (sc_lv<8>) (zext_ln96_10_reg_99859.read());
}

void poly1305_hw::thread_grp_fu_89288_p2() {
    grp_fu_89288_p2 =  (sc_lv<8>) (grp_fu_89288_p20.read());
}

void poly1305_hw::thread_grp_fu_89288_p20() {
    grp_fu_89288_p20 = esl_zext<16,8>(ap_phi_mux_mulCarry42_1_10_8_phi_fu_10662_p4.read());
}

}

