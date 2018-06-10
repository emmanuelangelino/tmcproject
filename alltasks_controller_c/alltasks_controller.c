/* --- Generated the 9/6/2018 at 21:13 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c alltasks_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alltasks_controller.h"

void Alltasks_controller__alltasks_controller_alltasks_c2_lamp_step(int alltasks_up1,
                                                                    int alltasks_down1,
                                                                    int alltasks_up2,
                                                                    int alltasks_down2,
                                                                    int alltasks_end_wm,
                                                                    int alltasks_start_wm,
                                                                    int alltasks_start_oven,
                                                                    int alltasks_finish,
                                                                    int alltasks_temp_ok,
                                                                    int alltasks_cold,
                                                                    int alltasks_push,
                                                                    int alltasks_turn,
                                                                    int alltasks_presence,
                                                                    int alltasks_eco_input,
                                                                    int alltasks_comfort_input,
                                                                    int alltasks_v_399,
                                                                    int alltasks_v_398,
                                                                    int alltasks_pnr_8,
                                                                    int alltasks_v_361,
                                                                    int alltasks_v_360,
                                                                    int alltasks_v_359,
                                                                    int alltasks_pnr_7,
                                                                    int alltasks_v_308,
                                                                    int alltasks_v_307,
                                                                    int alltasks_v_306,
                                                                    int alltasks_pnr_6,
                                                                    int alltasks_ck_14_1,
                                                                    int alltasks_pnr_5,
                                                                    int alltasks_ck_16_1,
                                                                    int alltasks_pnr_4,
                                                                    int alltasks_ck_18_1,
                                                                    int alltasks_pnr_3,
                                                                    int alltasks_ck_20_1,
                                                                    int alltasks_pnr_2,
                                                                    int alltasks_ck_22_1,
                                                                    int alltasks_pnr_1,
                                                                    int alltasks_v_274,
                                                                    int alltasks_v_273,
                                                                    int alltasks_pnr,
                                                                    int p_alltasks_c2_lamp,
                                                                    int p_alltasks_c1_lamp,
                                                                    int p_alltasks_c_door,
                                                                    int p_alltasks_c_oven,
                                                                    int p_alltasks_c_wm,
                                                                    int p_alltasks_c2_rad,
                                                                    int p_alltasks_c1_rad,
                                                                    int alltasks_c1_lamp,
                                                                    int alltasks_c_door,
                                                                    int alltasks_c_oven,
                                                                    int alltasks_c_wm,
                                                                    int alltasks_c2_rad,
                                                                    int alltasks_c1_rad,
                                                                    Alltasks_controller__alltasks_controller_alltasks_c2_lamp_out* _out) {
  
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  sub_24 = false;
  if (alltasks_c1_lamp) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  v_53 = !(alltasks_turn);
  v_54 = (v_53||false);
  if (alltasks_c1_lamp) {
    sub_25 = false;
  } else {
    sub_25 = v_54;
  };
  if (alltasks_ck_20_1) {
    sub_22 = sub_25;
  } else {
    sub_22 = sub_23;
  };
  sub_26 = !(alltasks_turn);
  sub_27 = true;
  if (alltasks_c1_lamp) {
    v_55 = sub_26;
  } else {
    v_55 = sub_27;
  };
  if (alltasks_ck_20_1) {
    v_56 = v_55;
  } else {
    v_56 = sub_25;
  };
  if (alltasks_ck_18_1) {
    sub_21 = v_56;
  } else {
    sub_21 = sub_22;
  };
  sub_30 = (alltasks_turn||false);
  if (alltasks_c1_lamp) {
    sub_29 = sub_24;
  } else {
    sub_29 = sub_30;
  };
  sub_32 = (alltasks_turn&&false);
  if (alltasks_c1_lamp) {
    sub_31 = sub_32;
  } else {
    sub_31 = false;
  };
  if (alltasks_ck_20_1) {
    sub_28 = sub_31;
  } else {
    sub_28 = sub_29;
  };
  if (alltasks_c1_lamp) {
    v_52 = sub_32;
  } else {
    v_52 = sub_24;
  };
  if (alltasks_ck_20_1) {
    sub_33 = v_52;
  } else {
    sub_33 = sub_31;
  };
  if (alltasks_ck_18_1) {
    v_57 = sub_33;
  } else {
    v_57 = sub_28;
  };
  if (alltasks_presence) {
    sub_20 = sub_21;
  } else {
    sub_20 = v_57;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (alltasks_presence) {
    sub_36 = sub_21;
  } else {
    sub_36 = false;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (alltasks_ck_14_1) {
    v_59 = sub_18;
  } else {
    v_59 = sub_34;
  };
  if (alltasks_ck_16_1) {
    v_60 = v_59;
  } else {
    v_60 = sub_34;
  };
  if (alltasks_ck_14_1) {
    sub_17 = sub_34;
  } else {
    sub_17 = sub_18;
  };
  if (alltasks_ck_16_1) {
    v_58 = sub_34;
  } else {
    v_58 = sub_17;
  };
  if (alltasks_push) {
    v_61 = v_58;
  } else {
    v_61 = v_60;
  };
  if (alltasks_c_door) {
    sub_16 = v_61;
  } else {
    sub_16 = sub_18;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (alltasks_comfort_input) {
    v_43 = sub_36;
  } else {
    v_43 = false;
  };
  if (alltasks_eco_input) {
    sub_55 = sub_35;
  } else {
    sub_55 = v_43;
  };
  if (alltasks_v_274) {
    sub_54 = sub_34;
  } else {
    sub_54 = sub_55;
  };
  if (alltasks_v_273) {
    sub_53 = sub_55;
  } else {
    sub_53 = sub_54;
  };
  if (alltasks_ck_14_1) {
    v_45 = sub_53;
  } else {
    v_45 = false;
  };
  if (alltasks_ck_16_1) {
    v_46 = v_45;
  } else {
    v_46 = false;
  };
  if (alltasks_ck_14_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_53;
  };
  if (alltasks_ck_16_1) {
    v_44 = false;
  } else {
    v_44 = sub_52;
  };
  if (alltasks_push) {
    v_47 = v_44;
  } else {
    v_47 = v_46;
  };
  if (alltasks_c_door) {
    sub_51 = v_47;
  } else {
    sub_51 = sub_53;
  };
  sub_50 = sub_51;
  if (alltasks_ck_14_1) {
    v_40 = sub_34;
  } else {
    v_40 = false;
  };
  if (alltasks_ck_16_1) {
    v_41 = v_40;
  } else {
    v_41 = false;
  };
  if (alltasks_ck_14_1) {
    sub_58 = false;
  } else {
    sub_58 = sub_34;
  };
  if (alltasks_ck_16_1) {
    v_39 = false;
  } else {
    v_39 = sub_58;
  };
  if (alltasks_push) {
    v_42 = v_39;
  } else {
    v_42 = v_41;
  };
  if (alltasks_c_door) {
    sub_57 = v_42;
  } else {
    sub_57 = sub_34;
  };
  sub_56 = sub_57;
  if (alltasks_c_wm) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_56;
  };
  sub_59 = sub_56;
  if (alltasks_v_359) {
    sub_48 = sub_59;
  } else {
    sub_48 = sub_49;
  };
  sub_60 = sub_50;
  if (alltasks_v_360) {
    v_48 = sub_60;
  } else {
    v_48 = sub_48;
  };
  if (alltasks_end_wm) {
    sub_47 = v_48;
  } else {
    sub_47 = sub_60;
  };
  if (alltasks_start_wm) {
    sub_62 = sub_51;
  } else {
    sub_62 = sub_57;
  };
  if (alltasks_v_359) {
    v_38 = sub_62;
  } else {
    v_38 = sub_49;
  };
  if (alltasks_v_360) {
    sub_61 = v_38;
  } else {
    sub_61 = sub_59;
  };
  if (alltasks_v_361) {
    sub_46 = sub_61;
  } else {
    sub_46 = sub_47;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_66 = sub_59;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (alltasks_c_oven) {
    sub_42 = sub_43;
  } else {
    sub_42 = sub_63;
  };
  if (alltasks_v_359) {
    sub_70 = sub_60;
  } else {
    sub_70 = sub_59;
  };
  if (alltasks_v_360) {
    v_36 = sub_59;
    v_35 = sub_70;
  } else {
    v_36 = sub_70;
    v_35 = sub_59;
  };
  if (alltasks_end_wm) {
    sub_69 = v_35;
  } else {
    sub_69 = v_36;
  };
  if (alltasks_v_361) {
    sub_68 = sub_66;
  } else {
    sub_68 = sub_69;
  };
  if (alltasks_finish) {
    v_37 = sub_65;
  } else {
    v_37 = sub_68;
  };
  if (alltasks_temp_ok) {
    sub_67 = sub_64;
  } else {
    sub_67 = v_37;
  };
  if (alltasks_v_308) {
    sub_41 = sub_67;
  } else {
    sub_41 = sub_42;
  };
  sub_71 = sub_43;
  if (alltasks_v_307) {
    sub_40 = sub_71;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  if (alltasks_v_308) {
    sub_72 = sub_71;
  } else {
    sub_72 = sub_42;
  };
  if (alltasks_cold) {
    sub_76 = sub_68;
  } else {
    sub_76 = sub_66;
  };
  sub_75 = sub_76;
  if (alltasks_c_oven) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_63;
  };
  if (alltasks_finish) {
    v_34 = sub_65;
  } else {
    v_34 = sub_45;
  };
  if (alltasks_temp_ok) {
    sub_77 = sub_64;
  } else {
    sub_77 = v_34;
  };
  if (alltasks_v_308) {
    sub_73 = sub_77;
  } else {
    sub_73 = sub_74;
  };
  if (alltasks_v_307) {
    v_49 = sub_73;
  } else {
    v_49 = sub_72;
  };
  sub_79 = sub_63;
  if (alltasks_v_308) {
    sub_78 = sub_71;
  } else {
    sub_78 = sub_79;
  };
  if (alltasks_v_307) {
    v_50 = sub_73;
  } else {
    v_50 = sub_78;
  };
  if (alltasks_start_oven) {
    v_51 = v_49;
  } else {
    v_51 = v_50;
  };
  if (alltasks_v_306) {
    sub_38 = v_51;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  if (alltasks_down1) {
    v_64 = sub_37;
    v_62 = sub_37;
  } else {
    v_64 = false;
    v_62 = sub_7;
  };
  sub_80 = sub_37;
  if (alltasks_c1_rad) {
    v_65 = v_64;
  } else {
    v_65 = sub_80;
  };
  if (alltasks_v_399) {
    v_66 = v_65;
  } else {
    v_66 = sub_5;
  };
  if (alltasks_c1_rad) {
    v_63 = v_62;
  } else {
    v_63 = sub_80;
  };
  if (alltasks_v_399) {
    sub_4 = v_63;
  } else {
    sub_4 = sub_5;
  };
  if (alltasks_down2) {
    v_67 = sub_4;
  } else {
    v_67 = v_66;
  };
  if (alltasks_c2_rad) {
    sub_3 = v_67;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (alltasks_up1) {
    sub_83 = sub_38;
  } else {
    sub_83 = sub_8;
  };
  if (alltasks_c1_rad) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_6;
  };
  if (alltasks_v_399) {
    sub_81 = false;
  } else {
    sub_81 = sub_82;
  };
  if (alltasks_down1) {
    v_32 = sub_7;
  } else {
    v_32 = sub_37;
  };
  if (alltasks_c1_rad) {
    v_33 = v_32;
  } else {
    v_33 = sub_6;
  };
  if (alltasks_v_399) {
    sub_85 = v_33;
  } else {
    sub_85 = sub_82;
  };
  sub_84 = sub_85;
  if (alltasks_c2_rad) {
    v_68 = sub_81;
  } else {
    v_68 = sub_84;
  };
  if (alltasks_up2) {
    v_69 = v_68;
  } else {
    v_69 = sub_84;
  };
  if (alltasks_v_398) {
    sub_1 = v_69;
  } else {
    sub_1 = sub_2;
  };
  if (alltasks_ck_20_1) {
    v_20 = sub_27;
  } else {
    v_20 = sub_25;
  };
  if (alltasks_c1_lamp) {
    sub_107 = false;
  } else {
    sub_107 = sub_26;
  };
  if (alltasks_ck_20_1) {
    sub_106 = sub_25;
  } else {
    sub_106 = sub_107;
  };
  if (alltasks_ck_18_1) {
    sub_105 = v_20;
  } else {
    sub_105 = sub_106;
  };
  if (alltasks_c1_lamp) {
    sub_109 = sub_27;
  } else {
    sub_109 = sub_30;
  };
  if (alltasks_ck_20_1) {
    sub_108 = sub_31;
  } else {
    sub_108 = sub_109;
  };
  if (alltasks_ck_18_1) {
    v_21 = sub_33;
  } else {
    v_21 = sub_108;
  };
  if (alltasks_presence) {
    sub_104 = sub_105;
  } else {
    sub_104 = v_21;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  if (alltasks_presence) {
    sub_112 = sub_105;
  } else {
    sub_112 = false;
  };
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (alltasks_ck_14_1) {
    v_23 = sub_102;
  } else {
    v_23 = sub_110;
  };
  if (alltasks_ck_16_1) {
    v_24 = v_23;
  } else {
    v_24 = sub_110;
  };
  if (alltasks_ck_14_1) {
    sub_101 = sub_110;
  } else {
    sub_101 = sub_102;
  };
  if (alltasks_ck_16_1) {
    v_22 = sub_110;
  } else {
    v_22 = sub_101;
  };
  if (alltasks_push) {
    v_25 = v_22;
  } else {
    v_25 = v_24;
  };
  if (alltasks_c_door) {
    sub_100 = v_25;
  } else {
    sub_100 = sub_102;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  if (alltasks_comfort_input) {
    v_11 = sub_112;
  } else {
    v_11 = false;
  };
  if (alltasks_eco_input) {
    sub_131 = sub_111;
  } else {
    sub_131 = v_11;
  };
  if (alltasks_v_274) {
    sub_130 = sub_110;
  } else {
    sub_130 = sub_131;
  };
  if (alltasks_v_273) {
    sub_129 = sub_131;
  } else {
    sub_129 = sub_130;
  };
  if (alltasks_ck_14_1) {
    v_13 = sub_129;
  } else {
    v_13 = false;
  };
  if (alltasks_ck_16_1) {
    v_14 = v_13;
  } else {
    v_14 = false;
  };
  if (alltasks_ck_14_1) {
    sub_128 = false;
  } else {
    sub_128 = sub_129;
  };
  if (alltasks_ck_16_1) {
    v_12 = false;
  } else {
    v_12 = sub_128;
  };
  if (alltasks_push) {
    v_15 = v_12;
  } else {
    v_15 = v_14;
  };
  if (alltasks_c_door) {
    sub_127 = v_15;
  } else {
    sub_127 = sub_129;
  };
  sub_126 = sub_127;
  if (alltasks_ck_14_1) {
    v_8 = sub_110;
  } else {
    v_8 = false;
  };
  if (alltasks_ck_16_1) {
    v_9 = v_8;
  } else {
    v_9 = false;
  };
  if (alltasks_ck_14_1) {
    sub_134 = false;
  } else {
    sub_134 = sub_110;
  };
  if (alltasks_ck_16_1) {
    v_7 = false;
  } else {
    v_7 = sub_134;
  };
  if (alltasks_push) {
    v_10 = v_7;
  } else {
    v_10 = v_9;
  };
  if (alltasks_c_door) {
    sub_133 = v_10;
  } else {
    sub_133 = sub_110;
  };
  sub_132 = sub_133;
  if (alltasks_c_wm) {
    sub_125 = sub_126;
  } else {
    sub_125 = sub_132;
  };
  sub_135 = sub_132;
  if (alltasks_v_359) {
    sub_124 = sub_135;
  } else {
    sub_124 = sub_125;
  };
  sub_136 = sub_126;
  if (alltasks_v_360) {
    v_16 = sub_136;
  } else {
    v_16 = sub_124;
  };
  if (alltasks_end_wm) {
    sub_123 = v_16;
  } else {
    sub_123 = sub_136;
  };
  if (alltasks_start_wm) {
    sub_138 = sub_127;
  } else {
    sub_138 = sub_133;
  };
  if (alltasks_v_359) {
    v_6 = sub_138;
  } else {
    v_6 = sub_125;
  };
  if (alltasks_v_360) {
    sub_137 = v_6;
  } else {
    sub_137 = sub_135;
  };
  if (alltasks_v_361) {
    sub_122 = sub_137;
  } else {
    sub_122 = sub_123;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_142 = sub_135;
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_139 = sub_140;
  if (alltasks_c_oven) {
    sub_118 = sub_119;
  } else {
    sub_118 = sub_139;
  };
  if (alltasks_v_359) {
    sub_146 = sub_136;
  } else {
    sub_146 = sub_135;
  };
  if (alltasks_v_360) {
    v_4 = sub_135;
    v_3 = sub_146;
  } else {
    v_4 = sub_146;
    v_3 = sub_135;
  };
  if (alltasks_end_wm) {
    sub_145 = v_3;
  } else {
    sub_145 = v_4;
  };
  if (alltasks_v_361) {
    sub_144 = sub_142;
  } else {
    sub_144 = sub_145;
  };
  if (alltasks_finish) {
    v_5 = sub_141;
  } else {
    v_5 = sub_144;
  };
  if (alltasks_temp_ok) {
    sub_143 = sub_140;
  } else {
    sub_143 = v_5;
  };
  if (alltasks_v_308) {
    sub_117 = sub_143;
  } else {
    sub_117 = sub_118;
  };
  sub_147 = sub_119;
  if (alltasks_v_307) {
    sub_116 = sub_147;
  } else {
    sub_116 = sub_117;
  };
  sub_115 = sub_116;
  if (alltasks_v_308) {
    sub_148 = sub_147;
  } else {
    sub_148 = sub_118;
  };
  if (alltasks_cold) {
    sub_152 = sub_144;
  } else {
    sub_152 = sub_142;
  };
  sub_151 = sub_152;
  if (alltasks_c_oven) {
    sub_150 = sub_151;
  } else {
    sub_150 = sub_139;
  };
  if (alltasks_finish) {
    v_2 = sub_141;
  } else {
    v_2 = sub_121;
  };
  if (alltasks_temp_ok) {
    sub_153 = sub_140;
  } else {
    sub_153 = v_2;
  };
  if (alltasks_v_308) {
    sub_149 = sub_153;
  } else {
    sub_149 = sub_150;
  };
  if (alltasks_v_307) {
    v_17 = sub_149;
  } else {
    v_17 = sub_148;
  };
  sub_155 = sub_139;
  if (alltasks_v_308) {
    sub_154 = sub_147;
  } else {
    sub_154 = sub_155;
  };
  if (alltasks_v_307) {
    v_18 = sub_149;
  } else {
    v_18 = sub_154;
  };
  if (alltasks_start_oven) {
    v_19 = v_17;
  } else {
    v_19 = v_18;
  };
  if (alltasks_v_306) {
    sub_114 = v_19;
  } else {
    sub_114 = sub_115;
  };
  sub_113 = sub_114;
  if (alltasks_down1) {
    v_28 = sub_113;
    v_26 = sub_113;
  } else {
    v_28 = false;
    v_26 = sub_91;
  };
  sub_156 = sub_113;
  if (alltasks_c1_rad) {
    v_29 = v_28;
  } else {
    v_29 = sub_156;
  };
  if (alltasks_v_399) {
    v_30 = v_29;
  } else {
    v_30 = sub_89;
  };
  if (alltasks_c1_rad) {
    v_27 = v_26;
  } else {
    v_27 = sub_156;
  };
  if (alltasks_v_399) {
    sub_88 = v_27;
  } else {
    sub_88 = sub_89;
  };
  if (alltasks_down2) {
    v_31 = sub_88;
  } else {
    v_31 = v_30;
  };
  if (alltasks_c2_rad) {
    sub_87 = v_31;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  if (alltasks_up1) {
    sub_159 = sub_114;
  } else {
    sub_159 = sub_92;
  };
  if (alltasks_c1_rad) {
    sub_158 = sub_159;
  } else {
    sub_158 = sub_90;
  };
  if (alltasks_v_399) {
    sub_157 = false;
  } else {
    sub_157 = sub_158;
  };
  if (alltasks_down1) {
    v = sub_91;
  } else {
    v = sub_113;
  };
  if (alltasks_c1_rad) {
    v_1 = v;
  } else {
    v_1 = sub_90;
  };
  if (alltasks_v_399) {
    sub_161 = v_1;
  } else {
    sub_161 = sub_158;
  };
  sub_160 = sub_161;
  if (alltasks_c2_rad) {
    v_70 = sub_157;
  } else {
    v_70 = sub_160;
  };
  if (alltasks_up2) {
    v_71 = v_70;
  } else {
    v_71 = sub_160;
  };
  if (alltasks_v_398) {
    v_72 = v_71;
  } else {
    v_72 = sub_86;
  };
  if (p_alltasks_c2_lamp) {
    sub_0 = v_72;
  } else {
    sub_0 = sub_1;
  };
  _out->alltasks_c2_lamp = sub_0;;
}

void Alltasks_controller__alltasks_controller_alltasks_c1_lamp_step(int alltasks_up1,
                                                                    int alltasks_down1,
                                                                    int alltasks_up2,
                                                                    int alltasks_down2,
                                                                    int alltasks_end_wm,
                                                                    int alltasks_start_wm,
                                                                    int alltasks_start_oven,
                                                                    int alltasks_finish,
                                                                    int alltasks_temp_ok,
                                                                    int alltasks_cold,
                                                                    int alltasks_push,
                                                                    int alltasks_turn,
                                                                    int alltasks_presence,
                                                                    int alltasks_eco_input,
                                                                    int alltasks_comfort_input,
                                                                    int alltasks_v_399,
                                                                    int alltasks_v_398,
                                                                    int alltasks_pnr_8,
                                                                    int alltasks_v_361,
                                                                    int alltasks_v_360,
                                                                    int alltasks_v_359,
                                                                    int alltasks_pnr_7,
                                                                    int alltasks_v_308,
                                                                    int alltasks_v_307,
                                                                    int alltasks_v_306,
                                                                    int alltasks_pnr_6,
                                                                    int alltasks_ck_14_1,
                                                                    int alltasks_pnr_5,
                                                                    int alltasks_ck_16_1,
                                                                    int alltasks_pnr_4,
                                                                    int alltasks_ck_18_1,
                                                                    int alltasks_pnr_3,
                                                                    int alltasks_ck_20_1,
                                                                    int alltasks_pnr_2,
                                                                    int alltasks_ck_22_1,
                                                                    int alltasks_pnr_1,
                                                                    int alltasks_v_274,
                                                                    int alltasks_v_273,
                                                                    int alltasks_pnr,
                                                                    int p_alltasks_c2_lamp,
                                                                    int p_alltasks_c1_lamp,
                                                                    int p_alltasks_c_door,
                                                                    int p_alltasks_c_oven,
                                                                    int p_alltasks_c_wm,
                                                                    int p_alltasks_c2_rad,
                                                                    int p_alltasks_c1_rad,
                                                                    int alltasks_c_door,
                                                                    int alltasks_c_oven,
                                                                    int alltasks_c_wm,
                                                                    int alltasks_c2_rad,
                                                                    int alltasks_c1_rad,
                                                                    Alltasks_controller__alltasks_controller_alltasks_c1_lamp_out* _out) {
  
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  sub_23 = false;
  sub_24 = (alltasks_turn&&false);
  if (alltasks_ck_20_1) {
    v_126 = sub_23;
    sub_22 = sub_24;
  } else {
    v_126 = sub_24;
    sub_22 = sub_23;
  };
  if (alltasks_ck_18_1) {
    sub_21 = v_126;
  } else {
    sub_21 = sub_22;
  };
  sub_26 = !(alltasks_turn);
  v_125 = !(alltasks_turn);
  sub_27 = (v_125||false);
  if (alltasks_ck_20_1) {
    v_127 = sub_23;
    sub_25 = sub_27;
  } else {
    v_127 = sub_27;
    sub_25 = sub_26;
  };
  if (alltasks_ck_18_1) {
    v_128 = v_127;
  } else {
    v_128 = sub_25;
  };
  if (alltasks_presence) {
    sub_20 = sub_21;
  } else {
    sub_20 = v_128;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (alltasks_presence) {
    sub_30 = sub_21;
  } else {
    sub_30 = false;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (alltasks_ck_14_1) {
    v_130 = sub_18;
  } else {
    v_130 = sub_28;
  };
  if (alltasks_ck_16_1) {
    v_131 = v_130;
  } else {
    v_131 = sub_28;
  };
  if (alltasks_ck_14_1) {
    sub_17 = sub_28;
  } else {
    sub_17 = sub_18;
  };
  if (alltasks_ck_16_1) {
    v_129 = sub_28;
  } else {
    v_129 = sub_17;
  };
  if (alltasks_push) {
    v_132 = v_129;
  } else {
    v_132 = v_131;
  };
  if (alltasks_c_door) {
    sub_16 = v_132;
  } else {
    sub_16 = sub_18;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (alltasks_comfort_input) {
    v_116 = sub_30;
  } else {
    v_116 = false;
  };
  if (alltasks_eco_input) {
    sub_49 = sub_29;
  } else {
    sub_49 = v_116;
  };
  if (alltasks_v_274) {
    sub_48 = sub_28;
  } else {
    sub_48 = sub_49;
  };
  if (alltasks_v_273) {
    sub_47 = sub_49;
  } else {
    sub_47 = sub_48;
  };
  if (alltasks_ck_14_1) {
    v_118 = sub_47;
  } else {
    v_118 = false;
  };
  if (alltasks_ck_16_1) {
    v_119 = v_118;
  } else {
    v_119 = false;
  };
  if (alltasks_ck_14_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_47;
  };
  if (alltasks_ck_16_1) {
    v_117 = false;
  } else {
    v_117 = sub_46;
  };
  if (alltasks_push) {
    v_120 = v_117;
  } else {
    v_120 = v_119;
  };
  if (alltasks_c_door) {
    sub_45 = v_120;
  } else {
    sub_45 = sub_47;
  };
  sub_44 = sub_45;
  if (alltasks_ck_14_1) {
    v_113 = sub_28;
  } else {
    v_113 = false;
  };
  if (alltasks_ck_16_1) {
    v_114 = v_113;
  } else {
    v_114 = false;
  };
  if (alltasks_ck_14_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_28;
  };
  if (alltasks_ck_16_1) {
    v_112 = false;
  } else {
    v_112 = sub_52;
  };
  if (alltasks_push) {
    v_115 = v_112;
  } else {
    v_115 = v_114;
  };
  if (alltasks_c_door) {
    sub_51 = v_115;
  } else {
    sub_51 = sub_28;
  };
  sub_50 = sub_51;
  if (alltasks_c_wm) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_50;
  };
  sub_53 = sub_50;
  if (alltasks_v_359) {
    sub_42 = sub_53;
  } else {
    sub_42 = sub_43;
  };
  sub_54 = sub_44;
  if (alltasks_v_360) {
    v_121 = sub_54;
  } else {
    v_121 = sub_42;
  };
  if (alltasks_end_wm) {
    sub_41 = v_121;
  } else {
    sub_41 = sub_54;
  };
  if (alltasks_start_wm) {
    sub_56 = sub_45;
  } else {
    sub_56 = sub_51;
  };
  if (alltasks_v_359) {
    v_111 = sub_56;
  } else {
    v_111 = sub_43;
  };
  if (alltasks_v_360) {
    sub_55 = v_111;
  } else {
    sub_55 = sub_53;
  };
  if (alltasks_v_361) {
    sub_40 = sub_55;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_60 = sub_53;
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (alltasks_c_oven) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_57;
  };
  if (alltasks_v_359) {
    sub_64 = sub_54;
  } else {
    sub_64 = sub_53;
  };
  if (alltasks_v_360) {
    v_109 = sub_53;
    v_108 = sub_64;
  } else {
    v_109 = sub_64;
    v_108 = sub_53;
  };
  if (alltasks_end_wm) {
    sub_63 = v_108;
  } else {
    sub_63 = v_109;
  };
  if (alltasks_v_361) {
    sub_62 = sub_60;
  } else {
    sub_62 = sub_63;
  };
  if (alltasks_finish) {
    v_110 = sub_59;
  } else {
    v_110 = sub_62;
  };
  if (alltasks_temp_ok) {
    sub_61 = sub_58;
  } else {
    sub_61 = v_110;
  };
  if (alltasks_v_308) {
    sub_35 = sub_61;
  } else {
    sub_35 = sub_36;
  };
  sub_65 = sub_37;
  if (alltasks_v_307) {
    sub_34 = sub_65;
  } else {
    sub_34 = sub_35;
  };
  sub_33 = sub_34;
  if (alltasks_v_308) {
    sub_66 = sub_65;
  } else {
    sub_66 = sub_36;
  };
  if (alltasks_cold) {
    sub_70 = sub_62;
  } else {
    sub_70 = sub_60;
  };
  sub_69 = sub_70;
  if (alltasks_c_oven) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_57;
  };
  if (alltasks_finish) {
    v_107 = sub_59;
  } else {
    v_107 = sub_39;
  };
  if (alltasks_temp_ok) {
    sub_71 = sub_58;
  } else {
    sub_71 = v_107;
  };
  if (alltasks_v_308) {
    sub_67 = sub_71;
  } else {
    sub_67 = sub_68;
  };
  if (alltasks_v_307) {
    v_122 = sub_67;
  } else {
    v_122 = sub_66;
  };
  sub_73 = sub_57;
  if (alltasks_v_308) {
    sub_72 = sub_65;
  } else {
    sub_72 = sub_73;
  };
  if (alltasks_v_307) {
    v_123 = sub_67;
  } else {
    v_123 = sub_72;
  };
  if (alltasks_start_oven) {
    v_124 = v_122;
  } else {
    v_124 = v_123;
  };
  if (alltasks_v_306) {
    sub_32 = v_124;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  if (alltasks_down1) {
    v_135 = sub_31;
    v_133 = sub_31;
  } else {
    v_135 = false;
    v_133 = sub_7;
  };
  sub_74 = sub_31;
  if (alltasks_c1_rad) {
    v_136 = v_135;
  } else {
    v_136 = sub_74;
  };
  if (alltasks_v_399) {
    v_137 = v_136;
  } else {
    v_137 = sub_5;
  };
  if (alltasks_c1_rad) {
    v_134 = v_133;
  } else {
    v_134 = sub_74;
  };
  if (alltasks_v_399) {
    sub_4 = v_134;
  } else {
    sub_4 = sub_5;
  };
  if (alltasks_down2) {
    v_138 = sub_4;
  } else {
    v_138 = v_137;
  };
  if (alltasks_c2_rad) {
    sub_3 = v_138;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (alltasks_up1) {
    sub_77 = sub_32;
  } else {
    sub_77 = sub_8;
  };
  if (alltasks_c1_rad) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_6;
  };
  if (alltasks_v_399) {
    sub_75 = false;
  } else {
    sub_75 = sub_76;
  };
  if (alltasks_down1) {
    v_105 = sub_7;
  } else {
    v_105 = sub_31;
  };
  if (alltasks_c1_rad) {
    v_106 = v_105;
  } else {
    v_106 = sub_6;
  };
  if (alltasks_v_399) {
    sub_79 = v_106;
  } else {
    sub_79 = sub_76;
  };
  sub_78 = sub_79;
  if (alltasks_c2_rad) {
    v_139 = sub_75;
  } else {
    v_139 = sub_78;
  };
  if (alltasks_up2) {
    v_140 = v_139;
  } else {
    v_140 = sub_78;
  };
  if (alltasks_v_398) {
    sub_1 = v_140;
  } else {
    sub_1 = sub_2;
  };
  if (alltasks_ck_20_1) {
    v_93 = sub_26;
  } else {
    v_93 = sub_27;
  };
  sub_100 = true;
  if (alltasks_ck_20_1) {
    v_92 = sub_100;
  } else {
    v_92 = sub_24;
  };
  if (alltasks_ck_18_1) {
    sub_99 = v_92;
  } else {
    sub_99 = sub_22;
  };
  if (alltasks_ck_20_1) {
    sub_101 = sub_27;
  } else {
    sub_101 = sub_100;
  };
  if (alltasks_ck_18_1) {
    v_94 = v_93;
  } else {
    v_94 = sub_101;
  };
  if (alltasks_presence) {
    sub_98 = sub_99;
  } else {
    sub_98 = v_94;
  };
  sub_97 = sub_98;
  sub_96 = sub_97;
  if (alltasks_presence) {
    sub_104 = sub_99;
  } else {
    sub_104 = false;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  if (alltasks_ck_14_1) {
    v_96 = sub_96;
  } else {
    v_96 = sub_102;
  };
  if (alltasks_ck_16_1) {
    v_97 = v_96;
  } else {
    v_97 = sub_102;
  };
  if (alltasks_ck_14_1) {
    sub_95 = sub_102;
  } else {
    sub_95 = sub_96;
  };
  if (alltasks_ck_16_1) {
    v_95 = sub_102;
  } else {
    v_95 = sub_95;
  };
  if (alltasks_push) {
    v_98 = v_95;
  } else {
    v_98 = v_97;
  };
  if (alltasks_c_door) {
    sub_94 = v_98;
  } else {
    sub_94 = sub_96;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (alltasks_comfort_input) {
    v_83 = sub_104;
  } else {
    v_83 = false;
  };
  if (alltasks_eco_input) {
    sub_123 = sub_103;
  } else {
    sub_123 = v_83;
  };
  if (alltasks_v_274) {
    sub_122 = sub_102;
  } else {
    sub_122 = sub_123;
  };
  if (alltasks_v_273) {
    sub_121 = sub_123;
  } else {
    sub_121 = sub_122;
  };
  if (alltasks_ck_14_1) {
    v_85 = sub_121;
  } else {
    v_85 = false;
  };
  if (alltasks_ck_16_1) {
    v_86 = v_85;
  } else {
    v_86 = false;
  };
  if (alltasks_ck_14_1) {
    sub_120 = false;
  } else {
    sub_120 = sub_121;
  };
  if (alltasks_ck_16_1) {
    v_84 = false;
  } else {
    v_84 = sub_120;
  };
  if (alltasks_push) {
    v_87 = v_84;
  } else {
    v_87 = v_86;
  };
  if (alltasks_c_door) {
    sub_119 = v_87;
  } else {
    sub_119 = sub_121;
  };
  sub_118 = sub_119;
  if (alltasks_ck_14_1) {
    v_80 = sub_102;
  } else {
    v_80 = false;
  };
  if (alltasks_ck_16_1) {
    v_81 = v_80;
  } else {
    v_81 = false;
  };
  if (alltasks_ck_14_1) {
    sub_126 = false;
  } else {
    sub_126 = sub_102;
  };
  if (alltasks_ck_16_1) {
    v_79 = false;
  } else {
    v_79 = sub_126;
  };
  if (alltasks_push) {
    v_82 = v_79;
  } else {
    v_82 = v_81;
  };
  if (alltasks_c_door) {
    sub_125 = v_82;
  } else {
    sub_125 = sub_102;
  };
  sub_124 = sub_125;
  if (alltasks_c_wm) {
    sub_117 = sub_118;
  } else {
    sub_117 = sub_124;
  };
  sub_127 = sub_124;
  if (alltasks_v_359) {
    sub_116 = sub_127;
  } else {
    sub_116 = sub_117;
  };
  sub_128 = sub_118;
  if (alltasks_v_360) {
    v_88 = sub_128;
  } else {
    v_88 = sub_116;
  };
  if (alltasks_end_wm) {
    sub_115 = v_88;
  } else {
    sub_115 = sub_128;
  };
  if (alltasks_start_wm) {
    sub_130 = sub_119;
  } else {
    sub_130 = sub_125;
  };
  if (alltasks_v_359) {
    v_78 = sub_130;
  } else {
    v_78 = sub_117;
  };
  if (alltasks_v_360) {
    sub_129 = v_78;
  } else {
    sub_129 = sub_127;
  };
  if (alltasks_v_361) {
    sub_114 = sub_129;
  } else {
    sub_114 = sub_115;
  };
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_134 = sub_127;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  if (alltasks_c_oven) {
    sub_110 = sub_111;
  } else {
    sub_110 = sub_131;
  };
  if (alltasks_v_359) {
    sub_138 = sub_128;
  } else {
    sub_138 = sub_127;
  };
  if (alltasks_v_360) {
    v_76 = sub_127;
    v_75 = sub_138;
  } else {
    v_76 = sub_138;
    v_75 = sub_127;
  };
  if (alltasks_end_wm) {
    sub_137 = v_75;
  } else {
    sub_137 = v_76;
  };
  if (alltasks_v_361) {
    sub_136 = sub_134;
  } else {
    sub_136 = sub_137;
  };
  if (alltasks_finish) {
    v_77 = sub_133;
  } else {
    v_77 = sub_136;
  };
  if (alltasks_temp_ok) {
    sub_135 = sub_132;
  } else {
    sub_135 = v_77;
  };
  if (alltasks_v_308) {
    sub_109 = sub_135;
  } else {
    sub_109 = sub_110;
  };
  sub_139 = sub_111;
  if (alltasks_v_307) {
    sub_108 = sub_139;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  if (alltasks_v_308) {
    sub_140 = sub_139;
  } else {
    sub_140 = sub_110;
  };
  if (alltasks_cold) {
    sub_144 = sub_136;
  } else {
    sub_144 = sub_134;
  };
  sub_143 = sub_144;
  if (alltasks_c_oven) {
    sub_142 = sub_143;
  } else {
    sub_142 = sub_131;
  };
  if (alltasks_finish) {
    v_74 = sub_133;
  } else {
    v_74 = sub_113;
  };
  if (alltasks_temp_ok) {
    sub_145 = sub_132;
  } else {
    sub_145 = v_74;
  };
  if (alltasks_v_308) {
    sub_141 = sub_145;
  } else {
    sub_141 = sub_142;
  };
  if (alltasks_v_307) {
    v_89 = sub_141;
  } else {
    v_89 = sub_140;
  };
  sub_147 = sub_131;
  if (alltasks_v_308) {
    sub_146 = sub_139;
  } else {
    sub_146 = sub_147;
  };
  if (alltasks_v_307) {
    v_90 = sub_141;
  } else {
    v_90 = sub_146;
  };
  if (alltasks_start_oven) {
    v_91 = v_89;
  } else {
    v_91 = v_90;
  };
  if (alltasks_v_306) {
    sub_106 = v_91;
  } else {
    sub_106 = sub_107;
  };
  sub_105 = sub_106;
  if (alltasks_down1) {
    v_101 = sub_105;
    v_99 = sub_105;
  } else {
    v_101 = false;
    v_99 = sub_85;
  };
  sub_148 = sub_105;
  if (alltasks_c1_rad) {
    v_102 = v_101;
  } else {
    v_102 = sub_148;
  };
  if (alltasks_v_399) {
    v_103 = v_102;
  } else {
    v_103 = sub_83;
  };
  if (alltasks_c1_rad) {
    v_100 = v_99;
  } else {
    v_100 = sub_148;
  };
  if (alltasks_v_399) {
    sub_82 = v_100;
  } else {
    sub_82 = sub_83;
  };
  if (alltasks_down2) {
    v_104 = sub_82;
  } else {
    v_104 = v_103;
  };
  if (alltasks_c2_rad) {
    sub_81 = v_104;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  if (alltasks_up1) {
    sub_151 = sub_106;
  } else {
    sub_151 = sub_86;
  };
  if (alltasks_c1_rad) {
    sub_150 = sub_151;
  } else {
    sub_150 = sub_84;
  };
  if (alltasks_v_399) {
    sub_149 = false;
  } else {
    sub_149 = sub_150;
  };
  if (alltasks_down1) {
    v = sub_85;
  } else {
    v = sub_105;
  };
  if (alltasks_c1_rad) {
    v_73 = v;
  } else {
    v_73 = sub_84;
  };
  if (alltasks_v_399) {
    sub_153 = v_73;
  } else {
    sub_153 = sub_150;
  };
  sub_152 = sub_153;
  if (alltasks_c2_rad) {
    v_141 = sub_149;
  } else {
    v_141 = sub_152;
  };
  if (alltasks_up2) {
    v_142 = v_141;
  } else {
    v_142 = sub_152;
  };
  if (alltasks_v_398) {
    v_143 = v_142;
  } else {
    v_143 = sub_80;
  };
  if (p_alltasks_c1_lamp) {
    sub_0 = v_143;
  } else {
    sub_0 = sub_1;
  };
  _out->alltasks_c1_lamp = sub_0;;
}

void Alltasks_controller__alltasks_controller_alltasks_c_door_step(int alltasks_up1,
                                                                   int alltasks_down1,
                                                                   int alltasks_up2,
                                                                   int alltasks_down2,
                                                                   int alltasks_end_wm,
                                                                   int alltasks_start_wm,
                                                                   int alltasks_start_oven,
                                                                   int alltasks_finish,
                                                                   int alltasks_temp_ok,
                                                                   int alltasks_cold,
                                                                   int alltasks_push,
                                                                   int alltasks_turn,
                                                                   int alltasks_presence,
                                                                   int alltasks_eco_input,
                                                                   int alltasks_comfort_input,
                                                                   int alltasks_v_399,
                                                                   int alltasks_v_398,
                                                                   int alltasks_pnr_8,
                                                                   int alltasks_v_361,
                                                                   int alltasks_v_360,
                                                                   int alltasks_v_359,
                                                                   int alltasks_pnr_7,
                                                                   int alltasks_v_308,
                                                                   int alltasks_v_307,
                                                                   int alltasks_v_306,
                                                                   int alltasks_pnr_6,
                                                                   int alltasks_ck_14_1,
                                                                   int alltasks_pnr_5,
                                                                   int alltasks_ck_16_1,
                                                                   int alltasks_pnr_4,
                                                                   int alltasks_ck_18_1,
                                                                   int alltasks_pnr_3,
                                                                   int alltasks_ck_20_1,
                                                                   int alltasks_pnr_2,
                                                                   int alltasks_ck_22_1,
                                                                   int alltasks_pnr_1,
                                                                   int alltasks_v_274,
                                                                   int alltasks_v_273,
                                                                   int alltasks_pnr,
                                                                   int p_alltasks_c2_lamp,
                                                                   int p_alltasks_c1_lamp,
                                                                   int p_alltasks_c_door,
                                                                   int p_alltasks_c_oven,
                                                                   int p_alltasks_c_wm,
                                                                   int p_alltasks_c2_rad,
                                                                   int p_alltasks_c1_rad,
                                                                   int alltasks_c_oven,
                                                                   int alltasks_c_wm,
                                                                   int alltasks_c2_rad,
                                                                   int alltasks_c1_rad,
                                                                   Alltasks_controller__alltasks_controller_alltasks_c_door_out* _out) {
  
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  sub_23 = false;
  if (p_alltasks_c_door) {
    sub_22 = true;
  } else {
    sub_22 = sub_23;
  };
  v_163 = !(alltasks_turn);
  v_164 = (v_163||false);
  sub_25 = (alltasks_turn&&false);
  if (p_alltasks_c_door) {
    sub_24 = v_164;
  } else {
    sub_24 = sub_25;
  };
  if (alltasks_ck_20_1) {
    v_165 = sub_22;
    sub_21 = sub_24;
  } else {
    v_165 = sub_24;
    sub_21 = sub_22;
  };
  if (alltasks_ck_18_1) {
    sub_20 = v_165;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (alltasks_ck_20_1) {
    v_162 = sub_23;
    sub_30 = sub_25;
  } else {
    v_162 = sub_25;
    sub_30 = sub_23;
  };
  if (alltasks_ck_18_1) {
    sub_29 = v_162;
  } else {
    sub_29 = sub_30;
  };
  if (alltasks_presence) {
    sub_28 = sub_20;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (alltasks_ck_14_1) {
    v_167 = sub_17;
  } else {
    v_167 = sub_26;
  };
  if (alltasks_ck_16_1) {
    v_168 = v_167;
  } else {
    v_168 = sub_26;
  };
  if (alltasks_ck_14_1) {
    sub_16 = sub_26;
  } else {
    sub_16 = sub_17;
  };
  if (alltasks_ck_16_1) {
    v_166 = sub_26;
  } else {
    v_166 = sub_16;
  };
  if (alltasks_push) {
    sub_15 = v_166;
  } else {
    sub_15 = v_168;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (alltasks_presence) {
    sub_51 = sub_20;
  } else {
    sub_51 = false;
  };
  if (alltasks_comfort_input) {
    v_154 = sub_51;
  } else {
    v_154 = false;
  };
  sub_50 = sub_51;
  if (alltasks_eco_input) {
    sub_49 = sub_50;
  } else {
    sub_49 = v_154;
  };
  sub_52 = sub_50;
  if (alltasks_v_274) {
    sub_48 = sub_52;
  } else {
    sub_48 = sub_49;
  };
  if (alltasks_v_273) {
    sub_47 = sub_49;
  } else {
    sub_47 = sub_48;
  };
  if (alltasks_presence) {
    sub_57 = sub_29;
  } else {
    sub_57 = false;
  };
  if (alltasks_comfort_input) {
    v_153 = sub_57;
  } else {
    v_153 = false;
  };
  sub_56 = sub_57;
  if (alltasks_eco_input) {
    sub_55 = sub_56;
  } else {
    sub_55 = v_153;
  };
  sub_58 = sub_56;
  if (alltasks_v_274) {
    sub_54 = sub_58;
  } else {
    sub_54 = sub_55;
  };
  if (alltasks_v_273) {
    sub_53 = sub_55;
  } else {
    sub_53 = sub_54;
  };
  if (alltasks_ck_14_1) {
    v_156 = sub_47;
  } else {
    v_156 = sub_53;
  };
  if (alltasks_ck_16_1) {
    v_157 = v_156;
  } else {
    v_157 = sub_53;
  };
  if (alltasks_ck_14_1) {
    sub_46 = sub_53;
  } else {
    sub_46 = sub_47;
  };
  if (alltasks_ck_16_1) {
    v_155 = sub_53;
  } else {
    v_155 = sub_46;
  };
  if (alltasks_push) {
    sub_45 = v_155;
  } else {
    sub_45 = v_157;
  };
  sub_44 = sub_45;
  if (alltasks_ck_14_1) {
    v_151 = sub_52;
  } else {
    v_151 = sub_58;
  };
  if (alltasks_ck_16_1) {
    v_152 = v_151;
  } else {
    v_152 = sub_58;
  };
  if (alltasks_ck_14_1) {
    sub_61 = sub_58;
  } else {
    sub_61 = sub_52;
  };
  if (alltasks_ck_16_1) {
    v_150 = sub_58;
  } else {
    v_150 = sub_61;
  };
  if (alltasks_push) {
    sub_60 = v_150;
  } else {
    sub_60 = v_152;
  };
  sub_59 = sub_60;
  if (alltasks_c_wm) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_59;
  };
  sub_62 = sub_59;
  if (alltasks_v_359) {
    sub_42 = sub_62;
  } else {
    sub_42 = sub_43;
  };
  sub_63 = sub_44;
  if (alltasks_v_360) {
    v_158 = sub_63;
  } else {
    v_158 = sub_42;
  };
  if (alltasks_end_wm) {
    sub_41 = v_158;
  } else {
    sub_41 = sub_63;
  };
  if (alltasks_start_wm) {
    sub_65 = sub_45;
  } else {
    sub_65 = sub_60;
  };
  if (alltasks_v_359) {
    v_149 = sub_65;
  } else {
    v_149 = sub_43;
  };
  if (alltasks_v_360) {
    sub_64 = v_149;
  } else {
    sub_64 = sub_62;
  };
  if (alltasks_v_361) {
    sub_40 = sub_64;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_69 = sub_62;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (alltasks_c_oven) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_66;
  };
  if (alltasks_v_359) {
    sub_73 = sub_63;
  } else {
    sub_73 = sub_62;
  };
  if (alltasks_v_360) {
    v_147 = sub_62;
    v_146 = sub_73;
  } else {
    v_147 = sub_73;
    v_146 = sub_62;
  };
  if (alltasks_end_wm) {
    sub_72 = v_146;
  } else {
    sub_72 = v_147;
  };
  if (alltasks_v_361) {
    sub_71 = sub_69;
  } else {
    sub_71 = sub_72;
  };
  if (alltasks_finish) {
    v_148 = sub_68;
  } else {
    v_148 = sub_71;
  };
  if (alltasks_temp_ok) {
    sub_70 = sub_67;
  } else {
    sub_70 = v_148;
  };
  if (alltasks_v_308) {
    sub_35 = sub_70;
  } else {
    sub_35 = sub_36;
  };
  sub_74 = sub_37;
  if (alltasks_v_307) {
    sub_34 = sub_74;
  } else {
    sub_34 = sub_35;
  };
  sub_33 = sub_34;
  if (alltasks_v_308) {
    sub_75 = sub_74;
  } else {
    sub_75 = sub_36;
  };
  if (alltasks_cold) {
    sub_79 = sub_71;
  } else {
    sub_79 = sub_69;
  };
  sub_78 = sub_79;
  if (alltasks_c_oven) {
    sub_77 = sub_78;
  } else {
    sub_77 = sub_66;
  };
  if (alltasks_finish) {
    v_145 = sub_68;
  } else {
    v_145 = sub_39;
  };
  if (alltasks_temp_ok) {
    sub_80 = sub_67;
  } else {
    sub_80 = v_145;
  };
  if (alltasks_v_308) {
    sub_76 = sub_80;
  } else {
    sub_76 = sub_77;
  };
  if (alltasks_v_307) {
    v_159 = sub_76;
  } else {
    v_159 = sub_75;
  };
  sub_82 = sub_66;
  if (alltasks_v_308) {
    sub_81 = sub_74;
  } else {
    sub_81 = sub_82;
  };
  if (alltasks_v_307) {
    v_160 = sub_76;
  } else {
    v_160 = sub_81;
  };
  if (alltasks_start_oven) {
    v_161 = v_159;
  } else {
    v_161 = v_160;
  };
  if (alltasks_v_306) {
    sub_32 = v_161;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  if (alltasks_down1) {
    v_171 = sub_31;
    v_169 = sub_31;
  } else {
    v_171 = false;
    v_169 = sub_6;
  };
  sub_83 = sub_31;
  if (alltasks_c1_rad) {
    v_172 = v_171;
  } else {
    v_172 = sub_83;
  };
  if (alltasks_v_399) {
    v_173 = v_172;
  } else {
    v_173 = sub_4;
  };
  if (alltasks_c1_rad) {
    v_170 = v_169;
  } else {
    v_170 = sub_83;
  };
  if (alltasks_v_399) {
    sub_3 = v_170;
  } else {
    sub_3 = sub_4;
  };
  if (alltasks_down2) {
    v_174 = sub_3;
  } else {
    v_174 = v_173;
  };
  if (alltasks_c2_rad) {
    sub_2 = v_174;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (alltasks_up1) {
    sub_86 = sub_32;
  } else {
    sub_86 = sub_7;
  };
  if (alltasks_c1_rad) {
    sub_85 = sub_86;
  } else {
    sub_85 = sub_5;
  };
  if (alltasks_v_399) {
    sub_84 = false;
  } else {
    sub_84 = sub_85;
  };
  if (alltasks_down1) {
    v = sub_6;
  } else {
    v = sub_31;
  };
  if (alltasks_c1_rad) {
    v_144 = v;
  } else {
    v_144 = sub_5;
  };
  if (alltasks_v_399) {
    sub_88 = v_144;
  } else {
    sub_88 = sub_85;
  };
  sub_87 = sub_88;
  if (alltasks_c2_rad) {
    v_175 = sub_84;
  } else {
    v_175 = sub_87;
  };
  if (alltasks_up2) {
    v_176 = v_175;
  } else {
    v_176 = sub_87;
  };
  if (alltasks_v_398) {
    sub_0 = v_176;
  } else {
    sub_0 = sub_1;
  };
  _out->alltasks_c_door = sub_0;;
}

void Alltasks_controller__alltasks_controller_alltasks_c_oven_step(int alltasks_up1,
                                                                   int alltasks_down1,
                                                                   int alltasks_up2,
                                                                   int alltasks_down2,
                                                                   int alltasks_end_wm,
                                                                   int alltasks_start_wm,
                                                                   int alltasks_start_oven,
                                                                   int alltasks_finish,
                                                                   int alltasks_temp_ok,
                                                                   int alltasks_cold,
                                                                   int alltasks_push,
                                                                   int alltasks_turn,
                                                                   int alltasks_presence,
                                                                   int alltasks_eco_input,
                                                                   int alltasks_comfort_input,
                                                                   int alltasks_v_399,
                                                                   int alltasks_v_398,
                                                                   int alltasks_pnr_8,
                                                                   int alltasks_v_361,
                                                                   int alltasks_v_360,
                                                                   int alltasks_v_359,
                                                                   int alltasks_pnr_7,
                                                                   int alltasks_v_308,
                                                                   int alltasks_v_307,
                                                                   int alltasks_v_306,
                                                                   int alltasks_pnr_6,
                                                                   int alltasks_ck_14_1,
                                                                   int alltasks_pnr_5,
                                                                   int alltasks_ck_16_1,
                                                                   int alltasks_pnr_4,
                                                                   int alltasks_ck_18_1,
                                                                   int alltasks_pnr_3,
                                                                   int alltasks_ck_20_1,
                                                                   int alltasks_pnr_2,
                                                                   int alltasks_ck_22_1,
                                                                   int alltasks_pnr_1,
                                                                   int alltasks_v_274,
                                                                   int alltasks_v_273,
                                                                   int alltasks_pnr,
                                                                   int p_alltasks_c2_lamp,
                                                                   int p_alltasks_c1_lamp,
                                                                   int p_alltasks_c_door,
                                                                   int p_alltasks_c_oven,
                                                                   int p_alltasks_c_wm,
                                                                   int p_alltasks_c2_rad,
                                                                   int p_alltasks_c1_rad,
                                                                   int alltasks_c_wm,
                                                                   int alltasks_c2_rad,
                                                                   int alltasks_c1_rad,
                                                                   Alltasks_controller__alltasks_controller_alltasks_c_oven_out* _out) {
  
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  sub_21 = false;
  sub_22 = (alltasks_turn&&false);
  if (alltasks_ck_20_1) {
    v_216 = sub_21;
    sub_20 = sub_22;
  } else {
    v_216 = sub_22;
    sub_20 = sub_21;
  };
  if (alltasks_ck_18_1) {
    sub_19 = v_216;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (alltasks_presence) {
    sub_37 = sub_19;
  } else {
    sub_37 = false;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (alltasks_comfort_input) {
    v_211 = sub_37;
  } else {
    v_211 = false;
  };
  if (alltasks_eco_input) {
    sub_46 = sub_36;
  } else {
    sub_46 = v_211;
  };
  if (alltasks_v_274) {
    sub_45 = sub_35;
  } else {
    sub_45 = sub_46;
  };
  if (alltasks_v_273) {
    sub_44 = sub_46;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (alltasks_v_359) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_32;
  };
  if (alltasks_v_360) {
    v_213 = sub_32;
    v_212 = sub_40;
  } else {
    v_213 = sub_40;
    v_212 = sub_32;
  };
  if (alltasks_end_wm) {
    sub_39 = v_212;
  } else {
    sub_39 = v_213;
  };
  if (alltasks_v_361) {
    sub_38 = sub_31;
  } else {
    sub_38 = sub_39;
  };
  if (alltasks_finish) {
    v_214 = sub_30;
  } else {
    v_214 = sub_38;
  };
  if (alltasks_temp_ok) {
    v_215 = sub_29;
  } else {
    v_215 = v_214;
  };
  if (alltasks_v_308) {
    sub_27 = v_215;
  } else {
    sub_27 = sub_28;
  };
  if (alltasks_c_wm) {
    sub_53 = sub_42;
  } else {
    sub_53 = sub_33;
  };
  if (alltasks_v_359) {
    sub_52 = sub_32;
  } else {
    sub_52 = sub_53;
  };
  if (alltasks_v_360) {
    v_210 = sub_41;
  } else {
    v_210 = sub_52;
  };
  if (alltasks_end_wm) {
    sub_51 = v_210;
  } else {
    sub_51 = sub_41;
  };
  if (alltasks_start_wm) {
    sub_55 = sub_43;
  } else {
    sub_55 = sub_34;
  };
  if (alltasks_v_359) {
    v_209 = sub_55;
  } else {
    v_209 = sub_53;
  };
  if (alltasks_v_360) {
    sub_54 = v_209;
  } else {
    sub_54 = sub_32;
  };
  if (alltasks_v_361) {
    sub_50 = sub_54;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (alltasks_v_307) {
    sub_26 = sub_47;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  if (alltasks_finish) {
    v_206 = sub_30;
  } else {
    v_206 = sub_49;
  };
  if (alltasks_temp_ok) {
    v_207 = sub_29;
  } else {
    v_207 = v_206;
  };
  if (alltasks_v_308) {
    v_208 = v_207;
    sub_57 = sub_47;
  } else {
    v_208 = sub_28;
    sub_57 = sub_28;
  };
  if (alltasks_v_307) {
    sub_56 = v_208;
  } else {
    sub_56 = sub_57;
  };
  if (alltasks_v_306) {
    sub_24 = sub_56;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  if (alltasks_down1) {
    v_219 = sub_23;
    v_217 = sub_23;
  } else {
    v_219 = false;
    v_217 = sub_7;
  };
  sub_58 = sub_23;
  if (alltasks_c1_rad) {
    v_220 = v_219;
  } else {
    v_220 = sub_58;
  };
  if (alltasks_v_399) {
    v_221 = v_220;
  } else {
    v_221 = sub_5;
  };
  if (alltasks_c1_rad) {
    v_218 = v_217;
  } else {
    v_218 = sub_58;
  };
  if (alltasks_v_399) {
    sub_4 = v_218;
  } else {
    sub_4 = sub_5;
  };
  if (alltasks_down2) {
    v_222 = sub_4;
  } else {
    v_222 = v_221;
  };
  if (alltasks_c2_rad) {
    sub_3 = v_222;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (alltasks_up1) {
    sub_61 = sub_24;
  } else {
    sub_61 = sub_8;
  };
  if (alltasks_c1_rad) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_6;
  };
  if (alltasks_v_399) {
    sub_59 = false;
  } else {
    sub_59 = sub_60;
  };
  if (alltasks_down1) {
    v_204 = sub_7;
  } else {
    v_204 = sub_23;
  };
  if (alltasks_c1_rad) {
    v_205 = v_204;
  } else {
    v_205 = sub_6;
  };
  if (alltasks_v_399) {
    sub_63 = v_205;
  } else {
    sub_63 = sub_60;
  };
  sub_62 = sub_63;
  if (alltasks_c2_rad) {
    v_223 = sub_59;
  } else {
    v_223 = sub_62;
  };
  if (alltasks_up2) {
    v_224 = v_223;
  } else {
    v_224 = sub_62;
  };
  if (alltasks_v_398) {
    sub_1 = v_224;
  } else {
    sub_1 = sub_2;
  };
  sub_83 = true;
  v_196 = !(alltasks_turn);
  sub_84 = (v_196||false);
  if (alltasks_ck_20_1) {
    v_197 = sub_83;
    sub_82 = sub_84;
  } else {
    v_197 = sub_84;
    sub_82 = sub_83;
  };
  if (alltasks_ck_18_1) {
    sub_81 = v_197;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  if (alltasks_presence) {
    sub_103 = sub_81;
  } else {
    sub_103 = false;
  };
  if (alltasks_comfort_input) {
    v_189 = sub_103;
  } else {
    v_189 = sub_37;
  };
  sub_102 = sub_103;
  if (alltasks_eco_input) {
    sub_101 = sub_102;
  } else {
    sub_101 = v_189;
  };
  sub_104 = sub_102;
  if (alltasks_v_274) {
    sub_100 = sub_104;
  } else {
    sub_100 = sub_101;
  };
  if (alltasks_v_273) {
    sub_99 = sub_101;
  } else {
    sub_99 = sub_100;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_106 = sub_104;
  sub_105 = sub_106;
  if (alltasks_c_wm) {
    sub_96 = sub_97;
  } else {
    sub_96 = sub_105;
  };
  sub_107 = sub_105;
  if (alltasks_v_359) {
    sub_95 = sub_107;
  } else {
    sub_95 = sub_96;
  };
  sub_108 = sub_97;
  if (alltasks_v_360) {
    v_190 = sub_108;
  } else {
    v_190 = sub_95;
  };
  if (alltasks_end_wm) {
    sub_94 = v_190;
  } else {
    sub_94 = sub_108;
  };
  if (alltasks_start_wm) {
    sub_110 = sub_98;
  } else {
    sub_110 = sub_106;
  };
  if (alltasks_v_359) {
    v_188 = sub_110;
  } else {
    v_188 = sub_96;
  };
  if (alltasks_v_360) {
    sub_109 = v_188;
  } else {
    sub_109 = sub_107;
  };
  if (alltasks_v_361) {
    sub_93 = sub_109;
  } else {
    sub_93 = sub_94;
  };
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_113 = sub_107;
  sub_112 = sub_113;
  sub_111 = sub_112;
  if (alltasks_comfort_input) {
    v_185 = sub_103;
  } else {
    v_185 = false;
  };
  if (alltasks_eco_input) {
    sub_122 = sub_102;
  } else {
    sub_122 = v_185;
  };
  if (alltasks_v_274) {
    sub_121 = sub_104;
  } else {
    sub_121 = sub_122;
  };
  if (alltasks_v_273) {
    sub_120 = sub_122;
  } else {
    sub_120 = sub_121;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  if (alltasks_v_359) {
    sub_116 = sub_117;
  } else {
    sub_116 = sub_107;
  };
  if (alltasks_v_360) {
    v_187 = sub_107;
    v_186 = sub_116;
  } else {
    v_187 = sub_116;
    v_186 = sub_107;
  };
  if (alltasks_end_wm) {
    sub_115 = v_186;
  } else {
    sub_115 = v_187;
  };
  if (alltasks_v_361) {
    sub_114 = sub_113;
  } else {
    sub_114 = sub_115;
  };
  if (alltasks_finish) {
    v_191 = sub_112;
  } else {
    v_191 = sub_114;
  };
  if (alltasks_temp_ok) {
    v_192 = sub_111;
  } else {
    v_192 = v_191;
  };
  if (alltasks_v_308) {
    sub_89 = v_192;
  } else {
    sub_89 = sub_90;
  };
  if (alltasks_c_wm) {
    sub_129 = sub_118;
  } else {
    sub_129 = sub_105;
  };
  if (alltasks_v_359) {
    sub_128 = sub_107;
  } else {
    sub_128 = sub_129;
  };
  if (alltasks_v_360) {
    v_184 = sub_117;
  } else {
    v_184 = sub_128;
  };
  if (alltasks_end_wm) {
    sub_127 = v_184;
  } else {
    sub_127 = sub_117;
  };
  if (alltasks_start_wm) {
    sub_131 = sub_119;
  } else {
    sub_131 = sub_106;
  };
  if (alltasks_v_359) {
    v_183 = sub_131;
  } else {
    v_183 = sub_129;
  };
  if (alltasks_v_360) {
    sub_130 = v_183;
  } else {
    sub_130 = sub_107;
  };
  if (alltasks_v_361) {
    sub_126 = sub_130;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (alltasks_v_307) {
    sub_88 = sub_123;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  if (alltasks_v_308) {
    sub_132 = sub_123;
  } else {
    sub_132 = sub_90;
  };
  if (alltasks_finish) {
    v_181 = sub_112;
  } else {
    v_181 = sub_125;
  };
  if (alltasks_temp_ok) {
    v_182 = sub_111;
  } else {
    v_182 = v_181;
  };
  if (alltasks_v_359) {
    sub_138 = sub_108;
  } else {
    sub_138 = sub_107;
  };
  if (alltasks_v_360) {
    v_179 = sub_107;
    v_178 = sub_138;
  } else {
    v_179 = sub_138;
    v_178 = sub_107;
  };
  if (alltasks_end_wm) {
    sub_137 = v_178;
  } else {
    sub_137 = v_179;
  };
  if (alltasks_v_361) {
    v_180 = sub_113;
  } else {
    v_180 = sub_137;
  };
  if (alltasks_cold) {
    sub_136 = v_180;
  } else {
    sub_136 = sub_113;
  };
  sub_135 = sub_136;
  sub_134 = sub_135;
  if (alltasks_v_308) {
    sub_133 = v_182;
  } else {
    sub_133 = sub_134;
  };
  if (alltasks_v_307) {
    v_193 = sub_133;
  } else {
    v_193 = sub_132;
  };
  sub_140 = sub_111;
  if (alltasks_v_308) {
    sub_139 = sub_123;
  } else {
    sub_139 = sub_140;
  };
  if (alltasks_v_307) {
    v_194 = sub_133;
  } else {
    v_194 = sub_139;
  };
  if (alltasks_start_oven) {
    v_195 = v_193;
  } else {
    v_195 = v_194;
  };
  if (alltasks_v_306) {
    sub_86 = v_195;
  } else {
    sub_86 = sub_87;
  };
  sub_85 = sub_86;
  if (alltasks_down1) {
    v_200 = sub_85;
    v_198 = sub_85;
  } else {
    v_200 = false;
    v_198 = sub_69;
  };
  sub_141 = sub_85;
  if (alltasks_c1_rad) {
    v_201 = v_200;
  } else {
    v_201 = sub_141;
  };
  if (alltasks_v_399) {
    v_202 = v_201;
  } else {
    v_202 = sub_67;
  };
  if (alltasks_c1_rad) {
    v_199 = v_198;
  } else {
    v_199 = sub_141;
  };
  if (alltasks_v_399) {
    sub_66 = v_199;
  } else {
    sub_66 = sub_67;
  };
  if (alltasks_down2) {
    v_203 = sub_66;
  } else {
    v_203 = v_202;
  };
  if (alltasks_c2_rad) {
    sub_65 = v_203;
  } else {
    sub_65 = sub_66;
  };
  sub_64 = sub_65;
  if (alltasks_up1) {
    sub_144 = sub_86;
  } else {
    sub_144 = sub_70;
  };
  if (alltasks_c1_rad) {
    sub_143 = sub_144;
  } else {
    sub_143 = sub_68;
  };
  if (alltasks_v_399) {
    sub_142 = false;
  } else {
    sub_142 = sub_143;
  };
  if (alltasks_down1) {
    v = sub_69;
  } else {
    v = sub_85;
  };
  if (alltasks_c1_rad) {
    v_177 = v;
  } else {
    v_177 = sub_68;
  };
  if (alltasks_v_399) {
    sub_146 = v_177;
  } else {
    sub_146 = sub_143;
  };
  sub_145 = sub_146;
  if (alltasks_c2_rad) {
    v_225 = sub_142;
  } else {
    v_225 = sub_145;
  };
  if (alltasks_up2) {
    v_226 = v_225;
  } else {
    v_226 = sub_145;
  };
  if (alltasks_v_398) {
    v_227 = v_226;
  } else {
    v_227 = sub_64;
  };
  if (p_alltasks_c_oven) {
    sub_0 = v_227;
  } else {
    sub_0 = sub_1;
  };
  _out->alltasks_c_oven = sub_0;;
}

void Alltasks_controller__alltasks_controller_alltasks_c_wm_step(int alltasks_up1,
                                                                 int alltasks_down1,
                                                                 int alltasks_up2,
                                                                 int alltasks_down2,
                                                                 int alltasks_end_wm,
                                                                 int alltasks_start_wm,
                                                                 int alltasks_start_oven,
                                                                 int alltasks_finish,
                                                                 int alltasks_temp_ok,
                                                                 int alltasks_cold,
                                                                 int alltasks_push,
                                                                 int alltasks_turn,
                                                                 int alltasks_presence,
                                                                 int alltasks_eco_input,
                                                                 int alltasks_comfort_input,
                                                                 int alltasks_v_399,
                                                                 int alltasks_v_398,
                                                                 int alltasks_pnr_8,
                                                                 int alltasks_v_361,
                                                                 int alltasks_v_360,
                                                                 int alltasks_v_359,
                                                                 int alltasks_pnr_7,
                                                                 int alltasks_v_308,
                                                                 int alltasks_v_307,
                                                                 int alltasks_v_306,
                                                                 int alltasks_pnr_6,
                                                                 int alltasks_ck_14_1,
                                                                 int alltasks_pnr_5,
                                                                 int alltasks_ck_16_1,
                                                                 int alltasks_pnr_4,
                                                                 int alltasks_ck_18_1,
                                                                 int alltasks_pnr_3,
                                                                 int alltasks_ck_20_1,
                                                                 int alltasks_pnr_2,
                                                                 int alltasks_ck_22_1,
                                                                 int alltasks_pnr_1,
                                                                 int alltasks_v_274,
                                                                 int alltasks_v_273,
                                                                 int alltasks_pnr,
                                                                 int p_alltasks_c2_lamp,
                                                                 int p_alltasks_c1_lamp,
                                                                 int p_alltasks_c_door,
                                                                 int p_alltasks_c_oven,
                                                                 int p_alltasks_c_wm,
                                                                 int p_alltasks_c2_rad,
                                                                 int p_alltasks_c1_rad,
                                                                 int alltasks_c2_rad,
                                                                 int alltasks_c1_rad,
                                                                 Alltasks_controller__alltasks_controller_alltasks_c_wm_out* _out) {
  
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  sub_20 = p_alltasks_c_wm;
  sub_19 = sub_20;
  if (alltasks_turn) {
    sub_21 = false;
  } else {
    sub_21 = sub_20;
  };
  if (alltasks_ck_20_1) {
    v_244 = sub_19;
    sub_18 = sub_21;
  } else {
    v_244 = sub_21;
    sub_18 = sub_19;
  };
  if (alltasks_ck_18_1) {
    sub_17 = v_244;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (alltasks_presence) {
    sub_35 = sub_17;
  } else {
    sub_35 = false;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (alltasks_comfort_input) {
    v_239 = sub_35;
  } else {
    v_239 = false;
  };
  if (alltasks_eco_input) {
    sub_43 = sub_34;
  } else {
    sub_43 = v_239;
  };
  if (alltasks_v_274) {
    sub_42 = sub_33;
  } else {
    sub_42 = sub_43;
  };
  if (alltasks_v_273) {
    sub_41 = sub_43;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (alltasks_v_359) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_31;
  };
  if (alltasks_v_360) {
    v_241 = sub_31;
    v_240 = sub_38;
  } else {
    v_241 = sub_38;
    v_240 = sub_31;
  };
  if (alltasks_end_wm) {
    sub_37 = v_240;
  } else {
    sub_37 = v_241;
  };
  if (alltasks_v_361) {
    sub_36 = sub_30;
  } else {
    sub_36 = sub_37;
  };
  if (alltasks_finish) {
    v_242 = sub_29;
  } else {
    v_242 = sub_36;
  };
  if (alltasks_temp_ok) {
    v_243 = sub_28;
  } else {
    v_243 = v_242;
  };
  if (alltasks_v_308) {
    sub_26 = v_243;
  } else {
    sub_26 = sub_27;
  };
  sub_56 = false;
  sub_57 = (alltasks_turn&&false);
  if (alltasks_ck_20_1) {
    v_234 = sub_56;
    sub_55 = sub_57;
  } else {
    v_234 = sub_57;
    sub_55 = sub_56;
  };
  if (alltasks_ck_18_1) {
    v_235 = v_234;
  } else {
    v_235 = sub_55;
  };
  if (alltasks_presence) {
    v_236 = v_235;
  } else {
    v_236 = false;
  };
  if (alltasks_comfort_input) {
    v_237 = sub_35;
  } else {
    v_237 = v_236;
  };
  if (alltasks_eco_input) {
    sub_54 = sub_34;
  } else {
    sub_54 = v_237;
  };
  if (alltasks_v_274) {
    sub_53 = sub_33;
  } else {
    sub_53 = sub_54;
  };
  if (alltasks_v_273) {
    sub_52 = sub_54;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (alltasks_v_359) {
    sub_49 = sub_31;
  } else {
    sub_49 = sub_50;
  };
  if (alltasks_v_360) {
    v_238 = sub_39;
  } else {
    v_238 = sub_49;
  };
  if (alltasks_end_wm) {
    sub_48 = v_238;
  } else {
    sub_48 = sub_39;
  };
  if (alltasks_start_wm) {
    v_232 = sub_40;
  } else {
    v_232 = sub_32;
  };
  if (alltasks_v_359) {
    v_233 = v_232;
  } else {
    v_233 = sub_50;
  };
  if (alltasks_v_360) {
    sub_58 = v_233;
  } else {
    sub_58 = sub_31;
  };
  if (alltasks_v_361) {
    sub_47 = sub_58;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (alltasks_v_307) {
    sub_25 = sub_44;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  if (alltasks_finish) {
    v_229 = sub_29;
  } else {
    v_229 = sub_46;
  };
  if (alltasks_temp_ok) {
    v_230 = sub_28;
  } else {
    v_230 = v_229;
  };
  if (alltasks_v_308) {
    v_231 = v_230;
    sub_60 = sub_44;
  } else {
    v_231 = sub_27;
    sub_60 = sub_27;
  };
  if (alltasks_v_307) {
    sub_59 = v_231;
  } else {
    sub_59 = sub_60;
  };
  if (alltasks_v_306) {
    sub_23 = sub_59;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  if (alltasks_down1) {
    v_247 = sub_22;
    v_245 = sub_22;
  } else {
    v_247 = false;
    v_245 = sub_6;
  };
  sub_61 = sub_22;
  if (alltasks_c1_rad) {
    v_248 = v_247;
  } else {
    v_248 = sub_61;
  };
  if (alltasks_v_399) {
    v_249 = v_248;
  } else {
    v_249 = sub_4;
  };
  if (alltasks_c1_rad) {
    v_246 = v_245;
  } else {
    v_246 = sub_61;
  };
  if (alltasks_v_399) {
    sub_3 = v_246;
  } else {
    sub_3 = sub_4;
  };
  if (alltasks_down2) {
    v_250 = sub_3;
  } else {
    v_250 = v_249;
  };
  if (alltasks_c2_rad) {
    sub_2 = v_250;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (alltasks_up1) {
    sub_64 = sub_23;
  } else {
    sub_64 = sub_7;
  };
  if (alltasks_c1_rad) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_5;
  };
  if (alltasks_v_399) {
    sub_62 = false;
  } else {
    sub_62 = sub_63;
  };
  if (alltasks_down1) {
    v = sub_6;
  } else {
    v = sub_22;
  };
  if (alltasks_c1_rad) {
    v_228 = v;
  } else {
    v_228 = sub_5;
  };
  if (alltasks_v_399) {
    sub_66 = v_228;
  } else {
    sub_66 = sub_63;
  };
  sub_65 = sub_66;
  if (alltasks_c2_rad) {
    v_251 = sub_62;
  } else {
    v_251 = sub_65;
  };
  if (alltasks_up2) {
    v_252 = v_251;
  } else {
    v_252 = sub_65;
  };
  if (alltasks_v_398) {
    sub_0 = v_252;
  } else {
    sub_0 = sub_1;
  };
  _out->alltasks_c_wm = sub_0;;
}

void Alltasks_controller__alltasks_controller_alltasks_c2_rad_step(int alltasks_up1,
                                                                   int alltasks_down1,
                                                                   int alltasks_up2,
                                                                   int alltasks_down2,
                                                                   int alltasks_end_wm,
                                                                   int alltasks_start_wm,
                                                                   int alltasks_start_oven,
                                                                   int alltasks_finish,
                                                                   int alltasks_temp_ok,
                                                                   int alltasks_cold,
                                                                   int alltasks_push,
                                                                   int alltasks_turn,
                                                                   int alltasks_presence,
                                                                   int alltasks_eco_input,
                                                                   int alltasks_comfort_input,
                                                                   int alltasks_v_399,
                                                                   int alltasks_v_398,
                                                                   int alltasks_pnr_8,
                                                                   int alltasks_v_361,
                                                                   int alltasks_v_360,
                                                                   int alltasks_v_359,
                                                                   int alltasks_pnr_7,
                                                                   int alltasks_v_308,
                                                                   int alltasks_v_307,
                                                                   int alltasks_v_306,
                                                                   int alltasks_pnr_6,
                                                                   int alltasks_ck_14_1,
                                                                   int alltasks_pnr_5,
                                                                   int alltasks_ck_16_1,
                                                                   int alltasks_pnr_4,
                                                                   int alltasks_ck_18_1,
                                                                   int alltasks_pnr_3,
                                                                   int alltasks_ck_20_1,
                                                                   int alltasks_pnr_2,
                                                                   int alltasks_ck_22_1,
                                                                   int alltasks_pnr_1,
                                                                   int alltasks_v_274,
                                                                   int alltasks_v_273,
                                                                   int alltasks_pnr,
                                                                   int p_alltasks_c2_lamp,
                                                                   int p_alltasks_c1_lamp,
                                                                   int p_alltasks_c_door,
                                                                   int p_alltasks_c_oven,
                                                                   int p_alltasks_c_wm,
                                                                   int p_alltasks_c2_rad,
                                                                   int p_alltasks_c1_rad,
                                                                   int alltasks_c1_rad,
                                                                   Alltasks_controller__alltasks_controller_alltasks_c2_rad_out* _out) {
  
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  sub_19 = p_alltasks_c2_rad;
  sub_18 = sub_19;
  if (alltasks_turn) {
    sub_20 = false;
  } else {
    sub_20 = sub_19;
  };
  if (alltasks_ck_20_1) {
    v_279 = sub_18;
    sub_17 = sub_20;
  } else {
    v_279 = sub_20;
    sub_17 = sub_18;
  };
  if (alltasks_ck_18_1) {
    sub_16 = v_279;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (alltasks_presence) {
    sub_34 = sub_16;
  } else {
    sub_34 = false;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (alltasks_comfort_input) {
    v_274 = sub_34;
  } else {
    v_274 = false;
  };
  if (alltasks_eco_input) {
    sub_42 = sub_33;
  } else {
    sub_42 = v_274;
  };
  if (alltasks_v_274) {
    sub_41 = sub_32;
  } else {
    sub_41 = sub_42;
  };
  if (alltasks_v_273) {
    sub_40 = sub_42;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (alltasks_v_359) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_30;
  };
  if (alltasks_v_360) {
    v_276 = sub_30;
    v_275 = sub_37;
  } else {
    v_276 = sub_37;
    v_275 = sub_30;
  };
  if (alltasks_end_wm) {
    sub_36 = v_275;
  } else {
    sub_36 = v_276;
  };
  if (alltasks_v_361) {
    sub_35 = sub_29;
  } else {
    sub_35 = sub_36;
  };
  if (alltasks_finish) {
    v_277 = sub_28;
  } else {
    v_277 = sub_35;
  };
  if (alltasks_temp_ok) {
    v_278 = sub_27;
  } else {
    v_278 = v_277;
  };
  if (alltasks_v_308) {
    sub_25 = v_278;
  } else {
    sub_25 = sub_26;
  };
  if (alltasks_v_360) {
    v_273 = sub_38;
  } else {
    v_273 = sub_30;
  };
  if (alltasks_end_wm) {
    sub_47 = v_273;
  } else {
    sub_47 = sub_38;
  };
  if (alltasks_start_wm) {
    v_271 = sub_39;
  } else {
    v_271 = sub_31;
  };
  if (alltasks_v_359) {
    v_272 = v_271;
  } else {
    v_272 = sub_30;
  };
  if (alltasks_v_360) {
    sub_48 = v_272;
  } else {
    sub_48 = sub_30;
  };
  if (alltasks_v_361) {
    sub_46 = sub_48;
  } else {
    sub_46 = sub_47;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (alltasks_v_307) {
    sub_24 = sub_43;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  if (alltasks_finish) {
    v_268 = sub_28;
  } else {
    v_268 = sub_45;
  };
  if (alltasks_temp_ok) {
    v_269 = sub_27;
  } else {
    v_269 = v_268;
  };
  if (alltasks_v_308) {
    v_270 = v_269;
    sub_50 = sub_43;
  } else {
    v_270 = sub_26;
    sub_50 = sub_26;
  };
  if (alltasks_v_307) {
    sub_49 = v_270;
  } else {
    sub_49 = sub_50;
  };
  if (alltasks_v_306) {
    sub_22 = sub_49;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  if (alltasks_down1) {
    v_280 = sub_21;
  } else {
    v_280 = sub_5;
  };
  sub_51 = sub_21;
  if (alltasks_c1_rad) {
    v_281 = v_280;
  } else {
    v_281 = sub_51;
  };
  if (alltasks_v_399) {
    v_282 = v_281;
  } else {
    v_282 = sub_3;
  };
  sub_65 = false;
  sub_66 = (alltasks_turn&&false);
  if (alltasks_ck_20_1) {
    v_267 = sub_65;
    sub_64 = sub_66;
  } else {
    v_267 = sub_66;
    sub_64 = sub_65;
  };
  if (alltasks_ck_18_1) {
    sub_63 = v_267;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (alltasks_down1) {
    v_283 = sub_21;
  } else {
    v_283 = sub_52;
  };
  if (alltasks_c1_rad) {
    v_284 = v_283;
  } else {
    v_284 = sub_51;
  };
  if (alltasks_v_399) {
    v_285 = v_284;
  } else {
    v_285 = sub_3;
  };
  if (alltasks_down2) {
    sub_2 = v_282;
  } else {
    sub_2 = v_285;
  };
  sub_1 = sub_2;
  if (alltasks_up1) {
    sub_69 = sub_22;
  } else {
    sub_69 = sub_6;
  };
  if (alltasks_c1_rad) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_4;
  };
  if (alltasks_presence) {
    sub_82 = sub_63;
  } else {
    sub_82 = false;
  };
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  if (alltasks_comfort_input) {
    v_260 = sub_82;
  } else {
    v_260 = false;
  };
  if (alltasks_eco_input) {
    sub_90 = sub_81;
  } else {
    sub_90 = v_260;
  };
  if (alltasks_v_274) {
    sub_89 = sub_80;
  } else {
    sub_89 = sub_90;
  };
  if (alltasks_v_273) {
    sub_88 = sub_90;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (alltasks_v_359) {
    sub_85 = sub_86;
  } else {
    sub_85 = sub_78;
  };
  if (alltasks_v_360) {
    v_262 = sub_78;
    v_261 = sub_85;
  } else {
    v_262 = sub_85;
    v_261 = sub_78;
  };
  if (alltasks_end_wm) {
    sub_84 = v_261;
  } else {
    sub_84 = v_262;
  };
  if (alltasks_v_361) {
    sub_83 = sub_77;
  } else {
    sub_83 = sub_84;
  };
  if (alltasks_finish) {
    v_263 = sub_76;
  } else {
    v_263 = sub_83;
  };
  if (alltasks_temp_ok) {
    v_264 = sub_75;
  } else {
    v_264 = v_263;
  };
  if (alltasks_v_308) {
    sub_73 = v_264;
  } else {
    sub_73 = sub_74;
  };
  if (alltasks_v_360) {
    v_259 = sub_86;
  } else {
    v_259 = sub_78;
  };
  if (alltasks_end_wm) {
    sub_95 = v_259;
  } else {
    sub_95 = sub_86;
  };
  if (alltasks_start_wm) {
    v_257 = sub_87;
  } else {
    v_257 = sub_79;
  };
  if (alltasks_v_359) {
    v_258 = v_257;
  } else {
    v_258 = sub_78;
  };
  if (alltasks_v_360) {
    sub_96 = v_258;
  } else {
    sub_96 = sub_78;
  };
  if (alltasks_v_361) {
    sub_94 = sub_96;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (alltasks_v_307) {
    sub_72 = sub_91;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  if (alltasks_finish) {
    v_254 = sub_76;
  } else {
    v_254 = sub_93;
  };
  if (alltasks_temp_ok) {
    v_255 = sub_75;
  } else {
    v_255 = v_254;
  };
  if (alltasks_v_308) {
    v_256 = v_255;
    sub_98 = sub_91;
  } else {
    v_256 = sub_74;
    sub_98 = sub_74;
  };
  if (alltasks_v_307) {
    sub_97 = v_256;
  } else {
    sub_97 = sub_98;
  };
  if (alltasks_v_306) {
    sub_70 = sub_97;
  } else {
    sub_70 = sub_71;
  };
  if (alltasks_down1) {
    v_265 = sub_52;
  } else {
    v_265 = sub_70;
  };
  if (alltasks_c1_rad) {
    v_266 = v_265;
  } else {
    v_266 = sub_52;
  };
  if (alltasks_v_399) {
    sub_67 = v_266;
  } else {
    sub_67 = sub_68;
  };
  if (alltasks_down1) {
    v = sub_5;
  } else {
    v = sub_21;
  };
  if (alltasks_c1_rad) {
    v_253 = v;
  } else {
    v_253 = sub_4;
  };
  if (alltasks_v_399) {
    sub_99 = v_253;
  } else {
    sub_99 = sub_68;
  };
  if (alltasks_up2) {
    v_286 = sub_67;
  } else {
    v_286 = sub_99;
  };
  if (alltasks_v_398) {
    sub_0 = v_286;
  } else {
    sub_0 = sub_1;
  };
  _out->alltasks_c2_rad = sub_0;;
}

void Alltasks_controller__alltasks_controller_alltasks_c1_rad_step(int alltasks_up1,
                                                                   int alltasks_down1,
                                                                   int alltasks_up2,
                                                                   int alltasks_down2,
                                                                   int alltasks_end_wm,
                                                                   int alltasks_start_wm,
                                                                   int alltasks_start_oven,
                                                                   int alltasks_finish,
                                                                   int alltasks_temp_ok,
                                                                   int alltasks_cold,
                                                                   int alltasks_push,
                                                                   int alltasks_turn,
                                                                   int alltasks_presence,
                                                                   int alltasks_eco_input,
                                                                   int alltasks_comfort_input,
                                                                   int alltasks_v_399,
                                                                   int alltasks_v_398,
                                                                   int alltasks_pnr_8,
                                                                   int alltasks_v_361,
                                                                   int alltasks_v_360,
                                                                   int alltasks_v_359,
                                                                   int alltasks_pnr_7,
                                                                   int alltasks_v_308,
                                                                   int alltasks_v_307,
                                                                   int alltasks_v_306,
                                                                   int alltasks_pnr_6,
                                                                   int alltasks_ck_14_1,
                                                                   int alltasks_pnr_5,
                                                                   int alltasks_ck_16_1,
                                                                   int alltasks_pnr_4,
                                                                   int alltasks_ck_18_1,
                                                                   int alltasks_pnr_3,
                                                                   int alltasks_ck_20_1,
                                                                   int alltasks_pnr_2,
                                                                   int alltasks_ck_22_1,
                                                                   int alltasks_pnr_1,
                                                                   int alltasks_v_274,
                                                                   int alltasks_v_273,
                                                                   int alltasks_pnr,
                                                                   int p_alltasks_c2_lamp,
                                                                   int p_alltasks_c1_lamp,
                                                                   int p_alltasks_c_door,
                                                                   int p_alltasks_c_oven,
                                                                   int p_alltasks_c_wm,
                                                                   int p_alltasks_c2_rad,
                                                                   int p_alltasks_c1_rad,
                                                                   Alltasks_controller__alltasks_controller_alltasks_c1_rad_out* _out) {
  
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  sub_19 = p_alltasks_c1_rad;
  sub_18 = sub_19;
  if (alltasks_turn) {
    sub_20 = false;
  } else {
    sub_20 = sub_19;
  };
  if (alltasks_ck_20_1) {
    v_323 = sub_18;
    sub_17 = sub_20;
  } else {
    v_323 = sub_20;
    sub_17 = sub_18;
  };
  if (alltasks_ck_18_1) {
    sub_16 = v_323;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (alltasks_presence) {
    sub_33 = sub_16;
  } else {
    sub_33 = false;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (alltasks_comfort_input) {
    v_318 = sub_33;
  } else {
    v_318 = false;
  };
  if (alltasks_eco_input) {
    sub_41 = sub_32;
  } else {
    sub_41 = v_318;
  };
  if (alltasks_v_274) {
    sub_40 = sub_31;
  } else {
    sub_40 = sub_41;
  };
  if (alltasks_v_273) {
    sub_39 = sub_41;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (alltasks_v_359) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_29;
  };
  if (alltasks_v_360) {
    v_320 = sub_29;
    v_319 = sub_36;
  } else {
    v_320 = sub_36;
    v_319 = sub_29;
  };
  if (alltasks_end_wm) {
    sub_35 = v_319;
  } else {
    sub_35 = v_320;
  };
  if (alltasks_v_361) {
    sub_34 = sub_28;
  } else {
    sub_34 = sub_35;
  };
  if (alltasks_finish) {
    v_321 = sub_27;
  } else {
    v_321 = sub_34;
  };
  if (alltasks_temp_ok) {
    v_322 = sub_26;
  } else {
    v_322 = v_321;
  };
  if (alltasks_v_308) {
    sub_24 = v_322;
  } else {
    sub_24 = sub_25;
  };
  if (alltasks_v_360) {
    v_317 = sub_37;
  } else {
    v_317 = sub_29;
  };
  if (alltasks_end_wm) {
    sub_46 = v_317;
  } else {
    sub_46 = sub_37;
  };
  if (alltasks_start_wm) {
    v_315 = sub_38;
  } else {
    v_315 = sub_30;
  };
  if (alltasks_v_359) {
    v_316 = v_315;
  } else {
    v_316 = sub_29;
  };
  if (alltasks_v_360) {
    sub_47 = v_316;
  } else {
    sub_47 = sub_29;
  };
  if (alltasks_v_361) {
    sub_45 = sub_47;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (alltasks_v_307) {
    sub_23 = sub_42;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  if (alltasks_finish) {
    v_312 = sub_27;
  } else {
    v_312 = sub_44;
  };
  if (alltasks_temp_ok) {
    v_313 = sub_26;
  } else {
    v_313 = v_312;
  };
  if (alltasks_v_308) {
    v_314 = v_313;
    sub_49 = sub_42;
  } else {
    v_314 = sub_25;
    sub_49 = sub_25;
  };
  if (alltasks_v_307) {
    sub_48 = v_314;
  } else {
    sub_48 = sub_49;
  };
  if (alltasks_v_306) {
    sub_21 = sub_48;
  } else {
    sub_21 = sub_22;
  };
  sub_65 = true;
  v_308 = !(alltasks_turn);
  sub_66 = (v_308||false);
  if (alltasks_ck_20_1) {
    v_309 = sub_65;
    sub_64 = sub_66;
  } else {
    v_309 = sub_66;
    sub_64 = sub_65;
  };
  if (alltasks_ck_18_1) {
    sub_63 = v_309;
  } else {
    sub_63 = sub_64;
  };
  if (alltasks_presence) {
    sub_62 = sub_16;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (alltasks_comfort_input) {
    v_305 = sub_62;
  } else {
    v_305 = sub_63;
  };
  if (alltasks_eco_input) {
    sub_74 = sub_61;
  } else {
    sub_74 = v_305;
  };
  if (alltasks_v_274) {
    sub_73 = sub_60;
  } else {
    sub_73 = sub_74;
  };
  if (alltasks_v_273) {
    sub_72 = sub_74;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  sub_70 = sub_71;
  if (alltasks_v_359) {
    sub_69 = sub_70;
  } else {
    sub_69 = sub_58;
  };
  if (alltasks_v_360) {
    v_307 = sub_58;
    v_306 = sub_69;
  } else {
    v_307 = sub_69;
    v_306 = sub_58;
  };
  if (alltasks_end_wm) {
    sub_68 = v_306;
  } else {
    sub_68 = v_307;
  };
  if (alltasks_v_361) {
    sub_67 = sub_57;
  } else {
    sub_67 = sub_68;
  };
  if (alltasks_finish) {
    v_310 = sub_56;
  } else {
    v_310 = sub_67;
  };
  if (alltasks_temp_ok) {
    v_311 = sub_55;
  } else {
    v_311 = v_310;
  };
  if (alltasks_v_308) {
    sub_53 = v_311;
  } else {
    sub_53 = sub_54;
  };
  if (alltasks_v_360) {
    v_304 = sub_70;
  } else {
    v_304 = sub_58;
  };
  if (alltasks_end_wm) {
    sub_79 = v_304;
  } else {
    sub_79 = sub_70;
  };
  if (alltasks_start_wm) {
    v_302 = sub_71;
  } else {
    v_302 = sub_59;
  };
  if (alltasks_v_359) {
    v_303 = v_302;
  } else {
    v_303 = sub_58;
  };
  if (alltasks_v_360) {
    sub_80 = v_303;
  } else {
    sub_80 = sub_58;
  };
  if (alltasks_v_361) {
    sub_78 = sub_80;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (alltasks_v_307) {
    sub_52 = sub_75;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  if (alltasks_finish) {
    v_299 = sub_56;
  } else {
    v_299 = sub_77;
  };
  if (alltasks_temp_ok) {
    v_300 = sub_55;
  } else {
    v_300 = v_299;
  };
  if (alltasks_v_308) {
    v_301 = v_300;
    sub_82 = sub_75;
  } else {
    v_301 = sub_54;
    sub_82 = sub_54;
  };
  if (alltasks_v_307) {
    sub_81 = v_301;
  } else {
    sub_81 = sub_82;
  };
  if (alltasks_v_306) {
    sub_50 = sub_81;
  } else {
    sub_50 = sub_51;
  };
  if (alltasks_down1) {
    v_324 = sub_21;
  } else {
    v_324 = sub_50;
  };
  if (alltasks_v_399) {
    sub_3 = v_324;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_102 = false;
  sub_103 = (alltasks_turn&&false);
  if (alltasks_ck_20_1) {
    v_295 = sub_102;
    sub_101 = sub_103;
  } else {
    v_295 = sub_103;
    sub_101 = sub_102;
  };
  if (alltasks_ck_18_1) {
    sub_100 = v_295;
  } else {
    sub_100 = sub_101;
  };
  if (alltasks_presence) {
    sub_99 = sub_16;
  } else {
    sub_99 = sub_100;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (alltasks_comfort_input) {
    v_292 = sub_99;
  } else {
    v_292 = sub_100;
  };
  if (alltasks_eco_input) {
    sub_111 = sub_98;
  } else {
    sub_111 = v_292;
  };
  if (alltasks_v_274) {
    sub_110 = sub_97;
  } else {
    sub_110 = sub_111;
  };
  if (alltasks_v_273) {
    sub_109 = sub_111;
  } else {
    sub_109 = sub_110;
  };
  sub_108 = sub_109;
  sub_107 = sub_108;
  if (alltasks_v_359) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_95;
  };
  if (alltasks_v_360) {
    v_294 = sub_95;
    v_293 = sub_106;
  } else {
    v_294 = sub_106;
    v_293 = sub_95;
  };
  if (alltasks_end_wm) {
    sub_105 = v_293;
  } else {
    sub_105 = v_294;
  };
  if (alltasks_v_361) {
    sub_104 = sub_94;
  } else {
    sub_104 = sub_105;
  };
  if (alltasks_finish) {
    v_296 = sub_93;
  } else {
    v_296 = sub_104;
  };
  if (alltasks_temp_ok) {
    v_297 = sub_92;
  } else {
    v_297 = v_296;
  };
  if (alltasks_v_308) {
    sub_90 = v_297;
  } else {
    sub_90 = sub_91;
  };
  if (alltasks_v_360) {
    v_291 = sub_107;
  } else {
    v_291 = sub_95;
  };
  if (alltasks_end_wm) {
    sub_116 = v_291;
  } else {
    sub_116 = sub_107;
  };
  if (alltasks_start_wm) {
    v_289 = sub_108;
  } else {
    v_289 = sub_96;
  };
  if (alltasks_v_359) {
    v_290 = v_289;
  } else {
    v_290 = sub_95;
  };
  if (alltasks_v_360) {
    sub_117 = v_290;
  } else {
    sub_117 = sub_95;
  };
  if (alltasks_v_361) {
    sub_115 = sub_117;
  } else {
    sub_115 = sub_116;
  };
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  if (alltasks_v_307) {
    sub_89 = sub_112;
  } else {
    sub_89 = sub_90;
  };
  sub_88 = sub_89;
  if (alltasks_finish) {
    v = sub_93;
  } else {
    v = sub_114;
  };
  if (alltasks_temp_ok) {
    v_287 = sub_92;
  } else {
    v_287 = v;
  };
  if (alltasks_v_308) {
    v_288 = v_287;
    sub_119 = sub_112;
  } else {
    v_288 = sub_91;
    sub_119 = sub_91;
  };
  if (alltasks_v_307) {
    sub_118 = v_288;
  } else {
    sub_118 = sub_119;
  };
  if (alltasks_v_306) {
    sub_87 = sub_118;
  } else {
    sub_87 = sub_88;
  };
  if (alltasks_down1) {
    v_298 = sub_5;
  } else {
    v_298 = sub_87;
  };
  if (alltasks_up1) {
    sub_86 = sub_87;
  } else {
    sub_86 = sub_6;
  };
  sub_85 = sub_86;
  if (alltasks_v_399) {
    sub_84 = v_298;
  } else {
    sub_84 = sub_85;
  };
  sub_83 = sub_84;
  if (alltasks_v_398) {
    sub_0 = sub_83;
  } else {
    sub_0 = sub_1;
  };
  _out->alltasks_c1_rad = sub_0;;
}

void Alltasks_controller__alltasks_controller_step(int alltasks_up1,
                                                   int alltasks_down1,
                                                   int alltasks_up2,
                                                   int alltasks_down2,
                                                   int alltasks_end_wm,
                                                   int alltasks_start_wm,
                                                   int alltasks_start_oven,
                                                   int alltasks_finish,
                                                   int alltasks_temp_ok,
                                                   int alltasks_cold,
                                                   int alltasks_push,
                                                   int alltasks_turn,
                                                   int alltasks_presence,
                                                   int alltasks_eco_input,
                                                   int alltasks_comfort_input,
                                                   int alltasks_v_399,
                                                   int alltasks_v_398,
                                                   int alltasks_pnr_8,
                                                   int alltasks_v_361,
                                                   int alltasks_v_360,
                                                   int alltasks_v_359,
                                                   int alltasks_pnr_7,
                                                   int alltasks_v_308,
                                                   int alltasks_v_307,
                                                   int alltasks_v_306,
                                                   int alltasks_pnr_6,
                                                   int alltasks_ck_14_1,
                                                   int alltasks_pnr_5,
                                                   int alltasks_ck_16_1,
                                                   int alltasks_pnr_4,
                                                   int alltasks_ck_18_1,
                                                   int alltasks_pnr_3,
                                                   int alltasks_ck_20_1,
                                                   int alltasks_pnr_2,
                                                   int alltasks_ck_22_1,
                                                   int alltasks_pnr_1,
                                                   int alltasks_v_274,
                                                   int alltasks_v_273,
                                                   int alltasks_pnr,
                                                   int p_alltasks_c2_lamp,
                                                   int p_alltasks_c1_lamp,
                                                   int p_alltasks_c_door,
                                                   int p_alltasks_c_oven,
                                                   int p_alltasks_c_wm,
                                                   int p_alltasks_c2_rad,
                                                   int p_alltasks_c1_rad,
                                                   Alltasks_controller__alltasks_controller_out* _out) {
  Alltasks_controller__alltasks_controller_alltasks_c1_rad_out Alltasks_controller__alltasks_controller_alltasks_c1_rad_out_st;
  Alltasks_controller__alltasks_controller_alltasks_c2_rad_out Alltasks_controller__alltasks_controller_alltasks_c2_rad_out_st;
  Alltasks_controller__alltasks_controller_alltasks_c2_lamp_out Alltasks_controller__alltasks_controller_alltasks_c2_lamp_out_st;
  Alltasks_controller__alltasks_controller_alltasks_c_oven_out Alltasks_controller__alltasks_controller_alltasks_c_oven_out_st;
  Alltasks_controller__alltasks_controller_alltasks_c_door_out Alltasks_controller__alltasks_controller_alltasks_c_door_out_st;
  Alltasks_controller__alltasks_controller_alltasks_c_wm_out Alltasks_controller__alltasks_controller_alltasks_c_wm_out_st;
  Alltasks_controller__alltasks_controller_alltasks_c1_lamp_out Alltasks_controller__alltasks_controller_alltasks_c1_lamp_out_st;
  Alltasks_controller__alltasks_controller_alltasks_c1_rad_step(alltasks_up1,
                                                                alltasks_down1,
                                                                alltasks_up2,
                                                                alltasks_down2,
                                                                alltasks_end_wm,
                                                                alltasks_start_wm,
                                                                alltasks_start_oven,
                                                                alltasks_finish,
                                                                alltasks_temp_ok,
                                                                alltasks_cold,
                                                                alltasks_push,
                                                                alltasks_turn,
                                                                alltasks_presence,
                                                                alltasks_eco_input,
                                                                alltasks_comfort_input,
                                                                alltasks_v_399,
                                                                alltasks_v_398,
                                                                alltasks_pnr_8,
                                                                alltasks_v_361,
                                                                alltasks_v_360,
                                                                alltasks_v_359,
                                                                alltasks_pnr_7,
                                                                alltasks_v_308,
                                                                alltasks_v_307,
                                                                alltasks_v_306,
                                                                alltasks_pnr_6,
                                                                alltasks_ck_14_1,
                                                                alltasks_pnr_5,
                                                                alltasks_ck_16_1,
                                                                alltasks_pnr_4,
                                                                alltasks_ck_18_1,
                                                                alltasks_pnr_3,
                                                                alltasks_ck_20_1,
                                                                alltasks_pnr_2,
                                                                alltasks_ck_22_1,
                                                                alltasks_pnr_1,
                                                                alltasks_v_274,
                                                                alltasks_v_273,
                                                                alltasks_pnr,
                                                                p_alltasks_c2_lamp,
                                                                p_alltasks_c1_lamp,
                                                                p_alltasks_c_door,
                                                                p_alltasks_c_oven,
                                                                p_alltasks_c_wm,
                                                                p_alltasks_c2_rad,
                                                                p_alltasks_c1_rad,
                                                                &Alltasks_controller__alltasks_controller_alltasks_c1_rad_out_st);
  _out->alltasks_c1_rad = Alltasks_controller__alltasks_controller_alltasks_c1_rad_out_st.alltasks_c1_rad;
  Alltasks_controller__alltasks_controller_alltasks_c2_rad_step(alltasks_up1,
                                                                alltasks_down1,
                                                                alltasks_up2,
                                                                alltasks_down2,
                                                                alltasks_end_wm,
                                                                alltasks_start_wm,
                                                                alltasks_start_oven,
                                                                alltasks_finish,
                                                                alltasks_temp_ok,
                                                                alltasks_cold,
                                                                alltasks_push,
                                                                alltasks_turn,
                                                                alltasks_presence,
                                                                alltasks_eco_input,
                                                                alltasks_comfort_input,
                                                                alltasks_v_399,
                                                                alltasks_v_398,
                                                                alltasks_pnr_8,
                                                                alltasks_v_361,
                                                                alltasks_v_360,
                                                                alltasks_v_359,
                                                                alltasks_pnr_7,
                                                                alltasks_v_308,
                                                                alltasks_v_307,
                                                                alltasks_v_306,
                                                                alltasks_pnr_6,
                                                                alltasks_ck_14_1,
                                                                alltasks_pnr_5,
                                                                alltasks_ck_16_1,
                                                                alltasks_pnr_4,
                                                                alltasks_ck_18_1,
                                                                alltasks_pnr_3,
                                                                alltasks_ck_20_1,
                                                                alltasks_pnr_2,
                                                                alltasks_ck_22_1,
                                                                alltasks_pnr_1,
                                                                alltasks_v_274,
                                                                alltasks_v_273,
                                                                alltasks_pnr,
                                                                p_alltasks_c2_lamp,
                                                                p_alltasks_c1_lamp,
                                                                p_alltasks_c_door,
                                                                p_alltasks_c_oven,
                                                                p_alltasks_c_wm,
                                                                p_alltasks_c2_rad,
                                                                p_alltasks_c1_rad,
                                                                _out->alltasks_c1_rad,
                                                                &Alltasks_controller__alltasks_controller_alltasks_c2_rad_out_st);
  _out->alltasks_c2_rad = Alltasks_controller__alltasks_controller_alltasks_c2_rad_out_st.alltasks_c2_rad;
  Alltasks_controller__alltasks_controller_alltasks_c_wm_step(alltasks_up1,
                                                              alltasks_down1,
                                                              alltasks_up2,
                                                              alltasks_down2,
                                                              alltasks_end_wm,
                                                              alltasks_start_wm,
                                                              alltasks_start_oven,
                                                              alltasks_finish,
                                                              alltasks_temp_ok,
                                                              alltasks_cold,
                                                              alltasks_push,
                                                              alltasks_turn,
                                                              alltasks_presence,
                                                              alltasks_eco_input,
                                                              alltasks_comfort_input,
                                                              alltasks_v_399,
                                                              alltasks_v_398,
                                                              alltasks_pnr_8,
                                                              alltasks_v_361,
                                                              alltasks_v_360,
                                                              alltasks_v_359,
                                                              alltasks_pnr_7,
                                                              alltasks_v_308,
                                                              alltasks_v_307,
                                                              alltasks_v_306,
                                                              alltasks_pnr_6,
                                                              alltasks_ck_14_1,
                                                              alltasks_pnr_5,
                                                              alltasks_ck_16_1,
                                                              alltasks_pnr_4,
                                                              alltasks_ck_18_1,
                                                              alltasks_pnr_3,
                                                              alltasks_ck_20_1,
                                                              alltasks_pnr_2,
                                                              alltasks_ck_22_1,
                                                              alltasks_pnr_1,
                                                              alltasks_v_274,
                                                              alltasks_v_273,
                                                              alltasks_pnr,
                                                              p_alltasks_c2_lamp,
                                                              p_alltasks_c1_lamp,
                                                              p_alltasks_c_door,
                                                              p_alltasks_c_oven,
                                                              p_alltasks_c_wm,
                                                              p_alltasks_c2_rad,
                                                              p_alltasks_c1_rad,
                                                              _out->alltasks_c2_rad,
                                                              _out->alltasks_c1_rad,
                                                              &Alltasks_controller__alltasks_controller_alltasks_c_wm_out_st);
  _out->alltasks_c_wm = Alltasks_controller__alltasks_controller_alltasks_c_wm_out_st.alltasks_c_wm;
  Alltasks_controller__alltasks_controller_alltasks_c_oven_step(alltasks_up1,
                                                                alltasks_down1,
                                                                alltasks_up2,
                                                                alltasks_down2,
                                                                alltasks_end_wm,
                                                                alltasks_start_wm,
                                                                alltasks_start_oven,
                                                                alltasks_finish,
                                                                alltasks_temp_ok,
                                                                alltasks_cold,
                                                                alltasks_push,
                                                                alltasks_turn,
                                                                alltasks_presence,
                                                                alltasks_eco_input,
                                                                alltasks_comfort_input,
                                                                alltasks_v_399,
                                                                alltasks_v_398,
                                                                alltasks_pnr_8,
                                                                alltasks_v_361,
                                                                alltasks_v_360,
                                                                alltasks_v_359,
                                                                alltasks_pnr_7,
                                                                alltasks_v_308,
                                                                alltasks_v_307,
                                                                alltasks_v_306,
                                                                alltasks_pnr_6,
                                                                alltasks_ck_14_1,
                                                                alltasks_pnr_5,
                                                                alltasks_ck_16_1,
                                                                alltasks_pnr_4,
                                                                alltasks_ck_18_1,
                                                                alltasks_pnr_3,
                                                                alltasks_ck_20_1,
                                                                alltasks_pnr_2,
                                                                alltasks_ck_22_1,
                                                                alltasks_pnr_1,
                                                                alltasks_v_274,
                                                                alltasks_v_273,
                                                                alltasks_pnr,
                                                                p_alltasks_c2_lamp,
                                                                p_alltasks_c1_lamp,
                                                                p_alltasks_c_door,
                                                                p_alltasks_c_oven,
                                                                p_alltasks_c_wm,
                                                                p_alltasks_c2_rad,
                                                                p_alltasks_c1_rad,
                                                                _out->alltasks_c_wm,
                                                                _out->alltasks_c2_rad,
                                                                _out->alltasks_c1_rad,
                                                                &Alltasks_controller__alltasks_controller_alltasks_c_oven_out_st);
  _out->alltasks_c_oven = Alltasks_controller__alltasks_controller_alltasks_c_oven_out_st.alltasks_c_oven;
  Alltasks_controller__alltasks_controller_alltasks_c_door_step(alltasks_up1,
                                                                alltasks_down1,
                                                                alltasks_up2,
                                                                alltasks_down2,
                                                                alltasks_end_wm,
                                                                alltasks_start_wm,
                                                                alltasks_start_oven,
                                                                alltasks_finish,
                                                                alltasks_temp_ok,
                                                                alltasks_cold,
                                                                alltasks_push,
                                                                alltasks_turn,
                                                                alltasks_presence,
                                                                alltasks_eco_input,
                                                                alltasks_comfort_input,
                                                                alltasks_v_399,
                                                                alltasks_v_398,
                                                                alltasks_pnr_8,
                                                                alltasks_v_361,
                                                                alltasks_v_360,
                                                                alltasks_v_359,
                                                                alltasks_pnr_7,
                                                                alltasks_v_308,
                                                                alltasks_v_307,
                                                                alltasks_v_306,
                                                                alltasks_pnr_6,
                                                                alltasks_ck_14_1,
                                                                alltasks_pnr_5,
                                                                alltasks_ck_16_1,
                                                                alltasks_pnr_4,
                                                                alltasks_ck_18_1,
                                                                alltasks_pnr_3,
                                                                alltasks_ck_20_1,
                                                                alltasks_pnr_2,
                                                                alltasks_ck_22_1,
                                                                alltasks_pnr_1,
                                                                alltasks_v_274,
                                                                alltasks_v_273,
                                                                alltasks_pnr,
                                                                p_alltasks_c2_lamp,
                                                                p_alltasks_c1_lamp,
                                                                p_alltasks_c_door,
                                                                p_alltasks_c_oven,
                                                                p_alltasks_c_wm,
                                                                p_alltasks_c2_rad,
                                                                p_alltasks_c1_rad,
                                                                _out->alltasks_c_oven,
                                                                _out->alltasks_c_wm,
                                                                _out->alltasks_c2_rad,
                                                                _out->alltasks_c1_rad,
                                                                &Alltasks_controller__alltasks_controller_alltasks_c_door_out_st);
  _out->alltasks_c_door = Alltasks_controller__alltasks_controller_alltasks_c_door_out_st.alltasks_c_door;
  Alltasks_controller__alltasks_controller_alltasks_c1_lamp_step(alltasks_up1,
                                                                 alltasks_down1,
                                                                 alltasks_up2,
                                                                 alltasks_down2,
                                                                 alltasks_end_wm,
                                                                 alltasks_start_wm,
                                                                 alltasks_start_oven,
                                                                 alltasks_finish,
                                                                 alltasks_temp_ok,
                                                                 alltasks_cold,
                                                                 alltasks_push,
                                                                 alltasks_turn,
                                                                 alltasks_presence,
                                                                 alltasks_eco_input,
                                                                 alltasks_comfort_input,
                                                                 alltasks_v_399,
                                                                 alltasks_v_398,
                                                                 alltasks_pnr_8,
                                                                 alltasks_v_361,
                                                                 alltasks_v_360,
                                                                 alltasks_v_359,
                                                                 alltasks_pnr_7,
                                                                 alltasks_v_308,
                                                                 alltasks_v_307,
                                                                 alltasks_v_306,
                                                                 alltasks_pnr_6,
                                                                 alltasks_ck_14_1,
                                                                 alltasks_pnr_5,
                                                                 alltasks_ck_16_1,
                                                                 alltasks_pnr_4,
                                                                 alltasks_ck_18_1,
                                                                 alltasks_pnr_3,
                                                                 alltasks_ck_20_1,
                                                                 alltasks_pnr_2,
                                                                 alltasks_ck_22_1,
                                                                 alltasks_pnr_1,
                                                                 alltasks_v_274,
                                                                 alltasks_v_273,
                                                                 alltasks_pnr,
                                                                 p_alltasks_c2_lamp,
                                                                 p_alltasks_c1_lamp,
                                                                 p_alltasks_c_door,
                                                                 p_alltasks_c_oven,
                                                                 p_alltasks_c_wm,
                                                                 p_alltasks_c2_rad,
                                                                 p_alltasks_c1_rad,
                                                                 _out->alltasks_c_door,
                                                                 _out->alltasks_c_oven,
                                                                 _out->alltasks_c_wm,
                                                                 _out->alltasks_c2_rad,
                                                                 _out->alltasks_c1_rad,
                                                                 &Alltasks_controller__alltasks_controller_alltasks_c1_lamp_out_st);
  _out->alltasks_c1_lamp = Alltasks_controller__alltasks_controller_alltasks_c1_lamp_out_st.alltasks_c1_lamp;
  Alltasks_controller__alltasks_controller_alltasks_c2_lamp_step(alltasks_up1,
                                                                 alltasks_down1,
                                                                 alltasks_up2,
                                                                 alltasks_down2,
                                                                 alltasks_end_wm,
                                                                 alltasks_start_wm,
                                                                 alltasks_start_oven,
                                                                 alltasks_finish,
                                                                 alltasks_temp_ok,
                                                                 alltasks_cold,
                                                                 alltasks_push,
                                                                 alltasks_turn,
                                                                 alltasks_presence,
                                                                 alltasks_eco_input,
                                                                 alltasks_comfort_input,
                                                                 alltasks_v_399,
                                                                 alltasks_v_398,
                                                                 alltasks_pnr_8,
                                                                 alltasks_v_361,
                                                                 alltasks_v_360,
                                                                 alltasks_v_359,
                                                                 alltasks_pnr_7,
                                                                 alltasks_v_308,
                                                                 alltasks_v_307,
                                                                 alltasks_v_306,
                                                                 alltasks_pnr_6,
                                                                 alltasks_ck_14_1,
                                                                 alltasks_pnr_5,
                                                                 alltasks_ck_16_1,
                                                                 alltasks_pnr_4,
                                                                 alltasks_ck_18_1,
                                                                 alltasks_pnr_3,
                                                                 alltasks_ck_20_1,
                                                                 alltasks_pnr_2,
                                                                 alltasks_ck_22_1,
                                                                 alltasks_pnr_1,
                                                                 alltasks_v_274,
                                                                 alltasks_v_273,
                                                                 alltasks_pnr,
                                                                 p_alltasks_c2_lamp,
                                                                 p_alltasks_c1_lamp,
                                                                 p_alltasks_c_door,
                                                                 p_alltasks_c_oven,
                                                                 p_alltasks_c_wm,
                                                                 p_alltasks_c2_rad,
                                                                 p_alltasks_c1_rad,
                                                                 _out->alltasks_c1_lamp,
                                                                 _out->alltasks_c_door,
                                                                 _out->alltasks_c_oven,
                                                                 _out->alltasks_c_wm,
                                                                 _out->alltasks_c2_rad,
                                                                 _out->alltasks_c1_rad,
                                                                 &Alltasks_controller__alltasks_controller_alltasks_c2_lamp_out_st);
  _out->alltasks_c2_lamp = Alltasks_controller__alltasks_controller_alltasks_c2_lamp_out_st.alltasks_c2_lamp;
}

