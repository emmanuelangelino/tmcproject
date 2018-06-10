/* --- Generated the 9/6/2018 at 21:12 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s alltasks zao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "zao.h"

void Zao__rad_reset(Zao__rad_mem* self) {
  self->pnr = false;
  self->v_130 = false;
  self->v_131 = false;
}

void Zao__rad_step(int up1, int down1, int up2, int down2, int c1, int c2,
                   Zao__rad_out* _out, Zao__rad_mem* self) {
  
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
  int ns_St_High_2_0;
  int ns_St_High_2_1;
  int ns_St_Eco_2_0;
  int ns_St_Eco_2_1;
  int ns_St_FrostProtection_2_0;
  int ns_St_FrostProtection_2_1;
  int ns_St_Off_2_0;
  int ns_St_Off_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_High;
  int ns_St_High_2;
  int ns_St_High_1;
  int rad_frost_St_High;
  int rad_off_St_High;
  int power_St_High;
  int nr_St_Eco;
  int ns_St_Eco_2;
  int ns_St_Eco_1;
  int rad_frost_St_Eco;
  int rad_off_St_Eco;
  int power_St_Eco;
  int nr_St_FrostProtection;
  int ns_St_FrostProtection_2;
  int ns_St_FrostProtection_1;
  int rad_frost_St_FrostProtection;
  int rad_off_St_FrostProtection;
  int power_St_FrostProtection;
  int nr_St_Off;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int rad_frost_St_Off;
  int rad_off_St_Off;
  int power_St_Off;
  int ck_1_2;
  int ck_1_1;
  int v_17;
  int v_16;
  int v_14_2_0;
  int v_14_2_1;
  int v_15;
  int v_14_2;
  int v_14_1;
  int v_13;
  int v_12;
  int v_11;
  int v_9_2_0;
  int v_9_2_1;
  int v_10;
  int v_9_2;
  int v_9_1;
  int v_8;
  int v_7;
  int v_6;
  int v_4_2_0;
  int v_4_2_1;
  int v_5;
  int v_4_2;
  int v_4_1;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int s_St_High_2_0;
  int s_St_High_2_1;
  int s_St_Eco_2_0;
  int s_St_Eco_2_1;
  int s_St_FrostProtection_2_0;
  int s_St_FrostProtection_2_1;
  int s_St_Off_2_0;
  int s_St_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_High;
  int s_St_High_2;
  int s_St_High_1;
  int r_St_Eco;
  int s_St_Eco_2;
  int s_St_Eco_1;
  int r_St_FrostProtection;
  int s_St_FrostProtection_2;
  int s_St_FrostProtection_1;
  int r_St_Off;
  int s_St_Off_2;
  int s_St_Off_1;
  int ck_2;
  int ck_1_3;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_3 = self->v_130;
  ck_2 = self->v_131;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_7 = !(c1);
      v_8 = (down1||v_7);
      if (v_8) {
        v_10 = true;
        v_9_1 = true;
        v_9_2 = false;
      } else {
        v_10 = self->pnr;
        v_9_1 = true;
        v_9_2 = true;
      };
      v_6 = (up2&&c2);
      if (v_6) {
        r_St_Eco = true;
      } else {
        r_St_Eco = v_10;
      };
      v_136 = r_St_Eco;
      if (v_6) {
        s_St_Eco_1 = false;
      } else {
        s_St_Eco_1 = v_9_1;
      };
      v_132 = s_St_Eco_1;
      if (v_6) {
        s_St_Eco_2 = true;
      } else {
        s_St_Eco_2 = v_9_2;
      };
      v_133 = s_St_Eco_2;
      if (v_9_1) {
        v_9_2_1 = v_9_2;
      } else {
        v_9_2_0 = v_9_2;
      };
      if (s_St_Eco_1) {
        s_St_Eco_2_1 = s_St_Eco_2;
      } else {
        s_St_Eco_2_0 = s_St_Eco_2;
      };
    } else {
      v_12 = !(c1);
      v_13 = (down1||v_12);
      if (v_13) {
        v_15 = true;
        v_14_1 = false;
        v_14_2 = false;
      } else {
        v_15 = self->pnr;
        v_14_1 = true;
        v_14_2 = false;
      };
      v_11 = (up1&&c1);
      if (v_11) {
        r_St_FrostProtection = true;
        s_St_FrostProtection_1 = true;
        s_St_FrostProtection_2 = true;
      } else {
        r_St_FrostProtection = v_15;
        s_St_FrostProtection_1 = v_14_1;
        s_St_FrostProtection_2 = v_14_2;
      };
      v_136 = r_St_FrostProtection;
      v_132 = s_St_FrostProtection_1;
      v_133 = s_St_FrostProtection_2;
      if (v_14_1) {
        v_14_2_1 = v_14_2;
      } else {
        v_14_2_0 = v_14_2;
      };
      if (s_St_FrostProtection_1) {
        s_St_FrostProtection_2_1 = s_St_FrostProtection_2;
      } else {
        s_St_FrostProtection_2_0 = s_St_FrostProtection_2;
      };
    };
    s_1 = v_132;
    s_2 = v_133;
    r = v_136;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_2 = !(c2);
      v_3 = (down2||v_2);
      if (v_3) {
        v_5 = true;
        v_4_1 = true;
        v_4_2 = false;
      } else {
        v_5 = self->pnr;
        v_4_1 = false;
        v_4_2 = true;
      };
      v = !(c1);
      v_1 = (down1||v);
      if (v_1) {
        r_St_High = true;
      } else {
        r_St_High = v_5;
      };
      v_137 = r_St_High;
      if (v_1) {
        s_St_High_1 = true;
      } else {
        s_St_High_1 = v_4_1;
      };
      v_134 = s_St_High_1;
      if (v_1) {
        s_St_High_2 = true;
      } else {
        s_St_High_2 = v_4_2;
      };
      v_135 = s_St_High_2;
    } else {
      v_16 = !(c1);
      v_17 = (up1||v_16);
      if (v_17) {
        r_St_Off = true;
        s_St_Off_1 = true;
        s_St_Off_2 = false;
      } else {
        r_St_Off = self->pnr;
        s_St_Off_1 = false;
        s_St_Off_2 = false;
      };
      v_137 = r_St_Off;
      v_134 = s_St_Off_1;
      v_135 = s_St_Off_2;
    };
    s_1 = v_134;
    s_2 = v_135;
    r = v_137;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      power_St_Eco = 1500;
      v_118 = power_St_Eco;
      rad_off_St_Eco = false;
      v_120 = rad_off_St_Eco;
      rad_frost_St_Eco = false;
      v_122 = rad_frost_St_Eco;
      nr_St_Eco = false;
      v_128 = nr_St_Eco;
      ns_St_Eco_1 = true;
      v_124 = ns_St_Eco_1;
      ns_St_Eco_2 = true;
      v_125 = ns_St_Eco_2;
      if (ns_St_Eco_1) {
        ns_St_Eco_2_1 = ns_St_Eco_2;
      } else {
        ns_St_Eco_2_0 = ns_St_Eco_2;
      };
    } else {
      power_St_FrostProtection = 300;
      rad_off_St_FrostProtection = false;
      rad_frost_St_FrostProtection = true;
      nr_St_FrostProtection = false;
      ns_St_FrostProtection_1 = true;
      ns_St_FrostProtection_2 = false;
      v_118 = power_St_FrostProtection;
      v_120 = rad_off_St_FrostProtection;
      v_122 = rad_frost_St_FrostProtection;
      v_128 = nr_St_FrostProtection;
      v_124 = ns_St_FrostProtection_1;
      v_125 = ns_St_FrostProtection_2;
      if (ns_St_FrostProtection_1) {
        ns_St_FrostProtection_2_1 = ns_St_FrostProtection_2;
      } else {
        ns_St_FrostProtection_2_0 = ns_St_FrostProtection_2;
      };
    };
    _out->power = v_118;
    _out->rad_off = v_120;
    _out->rad_frost = v_122;
    ns_1 = v_124;
    ns_2 = v_125;
    nr = v_128;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      power_St_High = 2000;
      v_119 = power_St_High;
      rad_off_St_High = false;
      v_121 = rad_off_St_High;
      rad_frost_St_High = false;
      v_123 = rad_frost_St_High;
      nr_St_High = false;
      v_129 = nr_St_High;
      ns_St_High_1 = false;
      v_126 = ns_St_High_1;
      ns_St_High_2 = true;
      v_127 = ns_St_High_2;
    } else {
      power_St_Off = 0;
      rad_off_St_Off = true;
      rad_frost_St_Off = false;
      nr_St_Off = false;
      ns_St_Off_1 = false;
      ns_St_Off_2 = false;
      v_119 = power_St_Off;
      v_121 = rad_off_St_Off;
      v_123 = rad_frost_St_Off;
      v_129 = nr_St_Off;
      v_126 = ns_St_Off_1;
      v_127 = ns_St_Off_2;
    };
    _out->power = v_119;
    _out->rad_off = v_121;
    _out->rad_frost = v_123;
    ns_1 = v_126;
    ns_2 = v_127;
    nr = v_129;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ns_St_High_1) {
        ns_St_High_2_1 = ns_St_High_2;
      } else {
        ns_St_High_2_0 = ns_St_High_2;
      };
    } else {
      if (ns_St_Off_1) {
        ns_St_Off_2_1 = ns_St_Off_2;
      } else {
        ns_St_Off_2_0 = ns_St_Off_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1_3)) {
    if (ck_2_0) {
      if (v_4_1) {
        v_4_2_1 = v_4_2;
      } else {
        v_4_2_0 = v_4_2;
      };
      if (s_St_High_1) {
        s_St_High_2_1 = s_St_High_2;
      } else {
        s_St_High_2_0 = s_St_High_2;
      };
    } else {
      if (s_St_Off_1) {
        s_St_Off_2_1 = s_St_Off_2;
      } else {
        s_St_Off_2_0 = s_St_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_130 = ns_1;
  self->v_131 = ns_2;;
}

void Zao__wm_reset(Zao__wm_mem* self) {
  self->pnr = false;
  self->v_168 = true;
  self->v_169 = true;
  self->v_170 = true;
}

void Zao__wm_step(int end_wm, int start, int c, Zao__wm_out* _out,
                  Zao__wm_mem* self) {
  
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
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int ns_St_1_Spin_2_0;
  int ns_St_1_Spin_3_0_0;
  int ns_St_1_Spin_3_0_1;
  int ns_St_1_Spin_2_1;
  int ns_St_1_Spin_3_1_0;
  int ns_St_1_Spin_3_1_1;
  int ns_St_1_Rinse_2_0;
  int ns_St_1_Rinse_3_0_0;
  int ns_St_1_Rinse_3_0_1;
  int ns_St_1_Rinse_2_1;
  int ns_St_1_Rinse_3_1_0;
  int ns_St_1_Rinse_3_1_1;
  int ns_St_1_Standby_2_0;
  int ns_St_1_Standby_3_0_0;
  int ns_St_1_Standby_3_0_1;
  int ns_St_1_Standby_2_1;
  int ns_St_1_Standby_3_1_0;
  int ns_St_1_Standby_3_1_1;
  int ns_St_1_Washing_2_0;
  int ns_St_1_Washing_3_0_0;
  int ns_St_1_Washing_3_0_1;
  int ns_St_1_Washing_2_1;
  int ns_St_1_Washing_3_1_0;
  int ns_St_1_Washing_3_1_1;
  int ns_St_1_WaterFill_2_0;
  int ns_St_1_WaterFill_3_0_0;
  int ns_St_1_WaterFill_3_0_1;
  int ns_St_1_WaterFill_2_1;
  int ns_St_1_WaterFill_3_1_0;
  int ns_St_1_WaterFill_3_1_1;
  int ns_St_1_Off_2_0;
  int ns_St_1_Off_3_0_0;
  int ns_St_1_Off_3_0_1;
  int ns_St_1_Off_2_1;
  int ns_St_1_Off_3_1_0;
  int ns_St_1_Off_3_1_1;
  int ck_2_2_0;
  int ck_2_3_0_0;
  int ck_2_3_0_1;
  int ck_2_2_1;
  int ck_2_3_1_0;
  int ck_2_3_1_1;
  int nr_St_1_Spin;
  int ns_St_1_Spin_3;
  int ns_St_1_Spin_2;
  int ns_St_1_Spin_1;
  int power_St_1_Spin;
  int nr_St_1_Rinse;
  int ns_St_1_Rinse_3;
  int ns_St_1_Rinse_2;
  int ns_St_1_Rinse_1;
  int power_St_1_Rinse;
  int nr_St_1_Standby;
  int ns_St_1_Standby_3;
  int ns_St_1_Standby_2;
  int ns_St_1_Standby_1;
  int power_St_1_Standby;
  int nr_St_1_Washing;
  int ns_St_1_Washing_3;
  int ns_St_1_Washing_2;
  int ns_St_1_Washing_1;
  int power_St_1_Washing;
  int nr_St_1_WaterFill;
  int ns_St_1_WaterFill_3;
  int ns_St_1_WaterFill_2;
  int ns_St_1_WaterFill_1;
  int power_St_1_WaterFill;
  int nr_St_1_Off;
  int ns_St_1_Off_3;
  int ns_St_1_Off_2;
  int ns_St_1_Off_1;
  int power_St_1_Off;
  int ck_2_3;
  int ck_2_2;
  int ck_2_1;
  int v_20_2_0;
  int v_20_3_0_0;
  int v_20_3_0_1;
  int v_20_2_1;
  int v_20_3_1_0;
  int v_20_3_1_1;
  int v_21;
  int v_20_3;
  int v_20_2;
  int v_20_1;
  int v_19;
  int v_18;
  int v;
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
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int s_St_1_Spin_2_0;
  int s_St_1_Spin_3_0_0;
  int s_St_1_Spin_3_0_1;
  int s_St_1_Spin_2_1;
  int s_St_1_Spin_3_1_0;
  int s_St_1_Spin_3_1_1;
  int s_St_1_Rinse_2_0;
  int s_St_1_Rinse_3_0_0;
  int s_St_1_Rinse_3_0_1;
  int s_St_1_Rinse_2_1;
  int s_St_1_Rinse_3_1_0;
  int s_St_1_Rinse_3_1_1;
  int s_St_1_Standby_2_0;
  int s_St_1_Standby_3_0_0;
  int s_St_1_Standby_3_0_1;
  int s_St_1_Standby_2_1;
  int s_St_1_Standby_3_1_0;
  int s_St_1_Standby_3_1_1;
  int s_St_1_Washing_2_0;
  int s_St_1_Washing_3_0_0;
  int s_St_1_Washing_3_0_1;
  int s_St_1_Washing_2_1;
  int s_St_1_Washing_3_1_0;
  int s_St_1_Washing_3_1_1;
  int s_St_1_WaterFill_2_0;
  int s_St_1_WaterFill_3_0_0;
  int s_St_1_WaterFill_3_0_1;
  int s_St_1_WaterFill_2_1;
  int s_St_1_WaterFill_3_1_0;
  int s_St_1_WaterFill_3_1_1;
  int s_St_1_Off_2_0;
  int s_St_1_Off_3_0_0;
  int s_St_1_Off_3_0_1;
  int s_St_1_Off_2_1;
  int s_St_1_Off_3_1_0;
  int s_St_1_Off_3_1_1;
  int ck_2_4_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_4_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_1_Spin;
  int s_St_1_Spin_3;
  int s_St_1_Spin_2;
  int s_St_1_Spin_1;
  int r_St_1_Rinse;
  int s_St_1_Rinse_3;
  int s_St_1_Rinse_2;
  int s_St_1_Rinse_1;
  int r_St_1_Standby;
  int s_St_1_Standby_3;
  int s_St_1_Standby_2;
  int s_St_1_Standby_1;
  int r_St_1_Washing;
  int s_St_1_Washing_3;
  int s_St_1_Washing_2;
  int s_St_1_Washing_1;
  int r_St_1_WaterFill;
  int s_St_1_WaterFill_3;
  int s_St_1_WaterFill_2;
  int s_St_1_WaterFill_1;
  int r_St_1_Off;
  int s_St_1_Off_3;
  int s_St_1_Off_2;
  int s_St_1_Off_1;
  int ck_3;
  int ck_2_4;
  int ck_1;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_168;
  ck_2_4 = self->v_169;
  ck_3 = self->v_170;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (start) {
          r_St_1_Off = true;
          s_St_1_Off_1 = false;
          s_St_1_Off_2 = false;
          s_St_1_Off_3 = false;
        } else {
          r_St_1_Off = self->pnr;
          s_St_1_Off_1 = true;
          s_St_1_Off_2 = true;
          s_St_1_Off_3 = true;
        };
        v_189 = r_St_1_Off;
        v_171 = s_St_1_Off_1;
        v_172 = s_St_1_Off_2;
        v_173 = s_St_1_Off_3;
        if (s_St_1_Off_1) {
          s_St_1_Off_2_1 = s_St_1_Off_2;
          if (s_St_1_Off_2_1) {
            s_St_1_Off_3_1_1 = s_St_1_Off_3;
          } else {
            s_St_1_Off_3_1_0 = s_St_1_Off_3;
          };
        } else {
          s_St_1_Off_2_0 = s_St_1_Off_2;
          if (s_St_1_Off_2_0) {
            s_St_1_Off_3_0_1 = s_St_1_Off_3;
          } else {
            s_St_1_Off_3_0_0 = s_St_1_Off_3;
          };
        };
      } else {
        if (end_wm) {
          r_St_1_Rinse = true;
        } else {
          r_St_1_Rinse = self->pnr;
        };
        v_189 = r_St_1_Rinse;
        if (end_wm) {
          s_St_1_Rinse_1 = true;
        } else {
          s_St_1_Rinse_1 = true;
        };
        v_171 = s_St_1_Rinse_1;
        if (end_wm) {
          s_St_1_Rinse_2 = false;
        } else {
          s_St_1_Rinse_2 = true;
        };
        v_172 = s_St_1_Rinse_2;
        if (end_wm) {
          s_St_1_Rinse_3 = false;
        } else {
          s_St_1_Rinse_3 = false;
        };
        v_173 = s_St_1_Rinse_3;
        if (s_St_1_Rinse_1) {
          s_St_1_Rinse_2_1 = s_St_1_Rinse_2;
          if (s_St_1_Rinse_2_1) {
            s_St_1_Rinse_3_1_1 = s_St_1_Rinse_3;
          } else {
            s_St_1_Rinse_3_1_0 = s_St_1_Rinse_3;
          };
        } else {
          s_St_1_Rinse_2_0 = s_St_1_Rinse_2;
          if (s_St_1_Rinse_2_0) {
            s_St_1_Rinse_3_0_1 = s_St_1_Rinse_3;
          } else {
            s_St_1_Rinse_3_0_0 = s_St_1_Rinse_3;
          };
        };
      };
      v_183 = v_171;
      v_184 = v_172;
      v_185 = v_173;
      v_191 = v_189;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_190 = true;
        v_174 = true;
        v_175 = true;
        v_176 = true;
      } else {
        if (end_wm) {
          r_St_1_Spin = true;
        } else {
          r_St_1_Spin = self->pnr;
        };
        v_190 = r_St_1_Spin;
        if (end_wm) {
          s_St_1_Spin_1 = true;
        } else {
          s_St_1_Spin_1 = true;
        };
        v_174 = s_St_1_Spin_1;
        if (end_wm) {
          s_St_1_Spin_2 = true;
        } else {
          s_St_1_Spin_2 = false;
        };
        v_175 = s_St_1_Spin_2;
        if (end_wm) {
          s_St_1_Spin_3 = true;
        } else {
          s_St_1_Spin_3 = false;
        };
        v_176 = s_St_1_Spin_3;
      };
      v_183 = v_174;
      v_184 = v_175;
      v_185 = v_176;
      v_191 = v_190;
      if (!(ck_3_1_0)) {
        if (s_St_1_Spin_1) {
          s_St_1_Spin_2_1 = s_St_1_Spin_2;
          if (s_St_1_Spin_2_1) {
            s_St_1_Spin_3_1_1 = s_St_1_Spin_3;
          } else {
            s_St_1_Spin_3_1_0 = s_St_1_Spin_3;
          };
        } else {
          s_St_1_Spin_2_0 = s_St_1_Spin_2;
          if (s_St_1_Spin_2_0) {
            s_St_1_Spin_3_0_1 = s_St_1_Spin_3;
          } else {
            s_St_1_Spin_3_0_0 = s_St_1_Spin_3;
          };
        };
      };
    };
    s_1 = v_183;
    s_2 = v_184;
    s_3 = v_185;
    r = v_191;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (c) {
          r_St_1_Standby = true;
        } else {
          r_St_1_Standby = self->pnr;
        };
        v_192 = r_St_1_Standby;
        if (c) {
          s_St_1_Standby_1 = false;
        } else {
          s_St_1_Standby_1 = false;
        };
        v_177 = s_St_1_Standby_1;
        if (c) {
          s_St_1_Standby_2 = true;
        } else {
          s_St_1_Standby_2 = true;
        };
        v_178 = s_St_1_Standby_2;
        if (c) {
          s_St_1_Standby_3 = false;
        } else {
          s_St_1_Standby_3 = true;
        };
        v_179 = s_St_1_Standby_3;
      } else {
        if (end_wm) {
          r_St_1_Washing = true;
          s_St_1_Washing_1 = true;
          s_St_1_Washing_2 = true;
          s_St_1_Washing_3 = false;
        } else {
          r_St_1_Washing = self->pnr;
          s_St_1_Washing_1 = false;
          s_St_1_Washing_2 = true;
          s_St_1_Washing_3 = false;
        };
        v_192 = r_St_1_Washing;
        v_177 = s_St_1_Washing_1;
        v_178 = s_St_1_Washing_2;
        v_179 = s_St_1_Washing_3;
      };
      v_186 = v_177;
      v_187 = v_178;
      v_188 = v_179;
      v_194 = v_192;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_193 = true;
        v_180 = true;
        v_181 = true;
        v_182 = true;
      } else {
        v_18 = !(c);
        v_19 = (end_wm&&v_18);
        if (v_19) {
          v_21 = true;
          v_20_1 = false;
          v_20_2 = true;
          v_20_3 = true;
        } else {
          v_21 = self->pnr;
          v_20_1 = false;
          v_20_2 = false;
          v_20_3 = false;
        };
        v = (end_wm&&c);
        if (v) {
          r_St_1_WaterFill = true;
        } else {
          r_St_1_WaterFill = v_21;
        };
        v_193 = r_St_1_WaterFill;
        if (v) {
          s_St_1_WaterFill_1 = false;
        } else {
          s_St_1_WaterFill_1 = v_20_1;
        };
        v_180 = s_St_1_WaterFill_1;
        if (v) {
          s_St_1_WaterFill_2 = true;
        } else {
          s_St_1_WaterFill_2 = v_20_2;
        };
        v_181 = s_St_1_WaterFill_2;
        if (v) {
          s_St_1_WaterFill_3 = false;
        } else {
          s_St_1_WaterFill_3 = v_20_3;
        };
        v_182 = s_St_1_WaterFill_3;
        if (v_20_1) {
          v_20_2_1 = v_20_2;
          if (v_20_2_1) {
            v_20_3_1_1 = v_20_3;
          } else {
            v_20_3_1_0 = v_20_3;
          };
        } else {
          v_20_2_0 = v_20_2;
          if (v_20_2_0) {
            v_20_3_0_1 = v_20_3;
          } else {
            v_20_3_0_0 = v_20_3;
          };
        };
        if (s_St_1_WaterFill_1) {
          s_St_1_WaterFill_2_1 = s_St_1_WaterFill_2;
          if (s_St_1_WaterFill_2_1) {
            s_St_1_WaterFill_3_1_1 = s_St_1_WaterFill_3;
          } else {
            s_St_1_WaterFill_3_1_0 = s_St_1_WaterFill_3;
          };
        } else {
          s_St_1_WaterFill_2_0 = s_St_1_WaterFill_2;
          if (s_St_1_WaterFill_2_0) {
            s_St_1_WaterFill_3_0_1 = s_St_1_WaterFill_3;
          } else {
            s_St_1_WaterFill_3_0_0 = s_St_1_WaterFill_3;
          };
        };
      };
      v_186 = v_180;
      v_187 = v_181;
      v_188 = v_182;
      v_194 = v_193;
    };
    s_1 = v_186;
    s_2 = v_187;
    s_3 = v_188;
    r = v_194;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  ck_2_3 = s_3;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      ck_2_3_1_1 = ck_2_3;
      if (ck_2_3_1_1) {
        power_St_1_Off = 0;
        nr_St_1_Off = false;
        ns_St_1_Off_1 = true;
        ns_St_1_Off_2 = true;
        ns_St_1_Off_3 = true;
        v_138 = power_St_1_Off;
        v_162 = nr_St_1_Off;
        v_144 = ns_St_1_Off_1;
        v_145 = ns_St_1_Off_2;
        v_146 = ns_St_1_Off_3;
        if (ns_St_1_Off_1) {
          ns_St_1_Off_2_1 = ns_St_1_Off_2;
          if (ns_St_1_Off_2_1) {
            ns_St_1_Off_3_1_1 = ns_St_1_Off_3;
          } else {
            ns_St_1_Off_3_1_0 = ns_St_1_Off_3;
          };
        } else {
          ns_St_1_Off_2_0 = ns_St_1_Off_2;
          if (ns_St_1_Off_2_0) {
            ns_St_1_Off_3_0_1 = ns_St_1_Off_3;
          } else {
            ns_St_1_Off_3_0_0 = ns_St_1_Off_3;
          };
        };
      } else {
        power_St_1_Rinse = 200;
        v_138 = power_St_1_Rinse;
        nr_St_1_Rinse = false;
        v_162 = nr_St_1_Rinse;
        ns_St_1_Rinse_1 = true;
        v_144 = ns_St_1_Rinse_1;
        ns_St_1_Rinse_2 = true;
        v_145 = ns_St_1_Rinse_2;
        ns_St_1_Rinse_3 = false;
        v_146 = ns_St_1_Rinse_3;
        if (ns_St_1_Rinse_1) {
          ns_St_1_Rinse_2_1 = ns_St_1_Rinse_2;
          if (ns_St_1_Rinse_2_1) {
            ns_St_1_Rinse_3_1_1 = ns_St_1_Rinse_3;
          } else {
            ns_St_1_Rinse_3_1_0 = ns_St_1_Rinse_3;
          };
        } else {
          ns_St_1_Rinse_2_0 = ns_St_1_Rinse_2;
          if (ns_St_1_Rinse_2_0) {
            ns_St_1_Rinse_3_0_1 = ns_St_1_Rinse_3;
          } else {
            ns_St_1_Rinse_3_0_0 = ns_St_1_Rinse_3;
          };
        };
      };
      v_140 = v_138;
      v_156 = v_144;
      v_157 = v_145;
      v_158 = v_146;
      v_164 = v_162;
    } else {
      ck_2_3_1_0 = ck_2_3;
      if (ck_2_3_1_0) {
        v_139 = 0;
        v_163 = true;
        v_147 = true;
        v_148 = true;
        v_149 = true;
      } else {
        power_St_1_Spin = 800;
        v_139 = power_St_1_Spin;
        nr_St_1_Spin = false;
        v_163 = nr_St_1_Spin;
        ns_St_1_Spin_1 = true;
        v_147 = ns_St_1_Spin_1;
        ns_St_1_Spin_2 = false;
        v_148 = ns_St_1_Spin_2;
        ns_St_1_Spin_3 = false;
        v_149 = ns_St_1_Spin_3;
      };
      v_140 = v_139;
      v_156 = v_147;
      v_157 = v_148;
      v_158 = v_149;
      v_164 = v_163;
      if (!(ck_2_3_1_0)) {
        if (ns_St_1_Spin_1) {
          ns_St_1_Spin_2_1 = ns_St_1_Spin_2;
          if (ns_St_1_Spin_2_1) {
            ns_St_1_Spin_3_1_1 = ns_St_1_Spin_3;
          } else {
            ns_St_1_Spin_3_1_0 = ns_St_1_Spin_3;
          };
        } else {
          ns_St_1_Spin_2_0 = ns_St_1_Spin_2;
          if (ns_St_1_Spin_2_0) {
            ns_St_1_Spin_3_0_1 = ns_St_1_Spin_3;
          } else {
            ns_St_1_Spin_3_0_0 = ns_St_1_Spin_3;
          };
        };
      };
    };
    _out->power = v_140;
    ns_1 = v_156;
    ns_2 = v_157;
    ns_3 = v_158;
    nr = v_164;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      if (ck_2_3_0_1) {
        power_St_1_Standby = 0;
        v_141 = power_St_1_Standby;
        nr_St_1_Standby = false;
        v_165 = nr_St_1_Standby;
        ns_St_1_Standby_1 = false;
        v_150 = ns_St_1_Standby_1;
        ns_St_1_Standby_2 = true;
        v_151 = ns_St_1_Standby_2;
        ns_St_1_Standby_3 = true;
        v_152 = ns_St_1_Standby_3;
      } else {
        power_St_1_Washing = 250;
        nr_St_1_Washing = false;
        ns_St_1_Washing_1 = false;
        ns_St_1_Washing_2 = true;
        ns_St_1_Washing_3 = false;
        v_141 = power_St_1_Washing;
        v_165 = nr_St_1_Washing;
        v_150 = ns_St_1_Washing_1;
        v_151 = ns_St_1_Washing_2;
        v_152 = ns_St_1_Washing_3;
      };
      v_143 = v_141;
      v_159 = v_150;
      v_160 = v_151;
      v_161 = v_152;
      v_167 = v_165;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        v_142 = 0;
        v_166 = true;
        v_153 = true;
        v_154 = true;
        v_155 = true;
      } else {
        power_St_1_WaterFill = 15;
        v_142 = power_St_1_WaterFill;
        nr_St_1_WaterFill = false;
        v_166 = nr_St_1_WaterFill;
        ns_St_1_WaterFill_1 = false;
        v_153 = ns_St_1_WaterFill_1;
        ns_St_1_WaterFill_2 = false;
        v_154 = ns_St_1_WaterFill_2;
        ns_St_1_WaterFill_3 = false;
        v_155 = ns_St_1_WaterFill_3;
        if (ns_St_1_WaterFill_1) {
          ns_St_1_WaterFill_2_1 = ns_St_1_WaterFill_2;
          if (ns_St_1_WaterFill_2_1) {
            ns_St_1_WaterFill_3_1_1 = ns_St_1_WaterFill_3;
          } else {
            ns_St_1_WaterFill_3_1_0 = ns_St_1_WaterFill_3;
          };
        } else {
          ns_St_1_WaterFill_2_0 = ns_St_1_WaterFill_2;
          if (ns_St_1_WaterFill_2_0) {
            ns_St_1_WaterFill_3_0_1 = ns_St_1_WaterFill_3;
          } else {
            ns_St_1_WaterFill_3_0_0 = ns_St_1_WaterFill_3;
          };
        };
      };
      v_143 = v_142;
      v_159 = v_153;
      v_160 = v_154;
      v_161 = v_155;
      v_167 = v_166;
    };
    _out->power = v_143;
    ns_1 = v_159;
    ns_2 = v_160;
    ns_3 = v_161;
    nr = v_167;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_2_1)) {
    if (ck_2_2_0) {
      if (ck_2_3_0_1) {
        if (ns_St_1_Standby_1) {
          ns_St_1_Standby_2_1 = ns_St_1_Standby_2;
          if (ns_St_1_Standby_2_1) {
            ns_St_1_Standby_3_1_1 = ns_St_1_Standby_3;
          } else {
            ns_St_1_Standby_3_1_0 = ns_St_1_Standby_3;
          };
        } else {
          ns_St_1_Standby_2_0 = ns_St_1_Standby_2;
          if (ns_St_1_Standby_2_0) {
            ns_St_1_Standby_3_0_1 = ns_St_1_Standby_3;
          } else {
            ns_St_1_Standby_3_0_0 = ns_St_1_Standby_3;
          };
        };
      } else {
        if (ns_St_1_Washing_1) {
          ns_St_1_Washing_2_1 = ns_St_1_Washing_2;
          if (ns_St_1_Washing_2_1) {
            ns_St_1_Washing_3_1_1 = ns_St_1_Washing_3;
          } else {
            ns_St_1_Washing_3_1_0 = ns_St_1_Washing_3;
          };
        } else {
          ns_St_1_Washing_2_0 = ns_St_1_Washing_2;
          if (ns_St_1_Washing_2_0) {
            ns_St_1_Washing_3_0_1 = ns_St_1_Washing_3;
          } else {
            ns_St_1_Washing_3_0_0 = ns_St_1_Washing_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1)) {
    if (ck_2_4_0) {
      if (ck_3_0_1) {
        if (s_St_1_Standby_1) {
          s_St_1_Standby_2_1 = s_St_1_Standby_2;
          if (s_St_1_Standby_2_1) {
            s_St_1_Standby_3_1_1 = s_St_1_Standby_3;
          } else {
            s_St_1_Standby_3_1_0 = s_St_1_Standby_3;
          };
        } else {
          s_St_1_Standby_2_0 = s_St_1_Standby_2;
          if (s_St_1_Standby_2_0) {
            s_St_1_Standby_3_0_1 = s_St_1_Standby_3;
          } else {
            s_St_1_Standby_3_0_0 = s_St_1_Standby_3;
          };
        };
      } else {
        if (s_St_1_Washing_1) {
          s_St_1_Washing_2_1 = s_St_1_Washing_2;
          if (s_St_1_Washing_2_1) {
            s_St_1_Washing_3_1_1 = s_St_1_Washing_3;
          } else {
            s_St_1_Washing_3_1_0 = s_St_1_Washing_3;
          };
        } else {
          s_St_1_Washing_2_0 = s_St_1_Washing_2;
          if (s_St_1_Washing_2_0) {
            s_St_1_Washing_3_0_1 = s_St_1_Washing_3;
          } else {
            s_St_1_Washing_3_0_0 = s_St_1_Washing_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_168 = ns_1;
  self->v_169 = ns_2;
  self->v_170 = ns_3;;
}

void Zao__oven_reset(Zao__oven_mem* self) {
  self->pnr = false;
  self->v_220 = true;
  self->v_221 = false;
  self->v_222 = false;
}

void Zao__oven_step(int start, int c, int finish, int temp_ok, int cold,
                    Zao__oven_out* _out, Zao__oven_mem* self) {
  
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
  int ns_St_2_Reheat_2_0;
  int ns_St_2_Reheat_3_0_0;
  int ns_St_2_Reheat_3_0_1;
  int ns_St_2_Reheat_2_1;
  int ns_St_2_Reheat_3_1_0;
  int ns_St_2_Reheat_3_1_1;
  int ns_St_2_Maintain_2_0;
  int ns_St_2_Maintain_3_0_0;
  int ns_St_2_Maintain_3_0_1;
  int ns_St_2_Maintain_2_1;
  int ns_St_2_Maintain_3_1_0;
  int ns_St_2_Maintain_3_1_1;
  int ns_St_2_Standby_2_0;
  int ns_St_2_Standby_3_0_0;
  int ns_St_2_Standby_3_0_1;
  int ns_St_2_Standby_2_1;
  int ns_St_2_Standby_3_1_0;
  int ns_St_2_Standby_3_1_1;
  int ns_St_2_Heat_2_0;
  int ns_St_2_Heat_3_0_0;
  int ns_St_2_Heat_3_0_1;
  int ns_St_2_Heat_2_1;
  int ns_St_2_Heat_3_1_0;
  int ns_St_2_Heat_3_1_1;
  int ns_St_2_Off_2_0;
  int ns_St_2_Off_3_0_0;
  int ns_St_2_Off_3_0_1;
  int ns_St_2_Off_2_1;
  int ns_St_2_Off_3_1_0;
  int ns_St_2_Off_3_1_1;
  int ck_3_2_0;
  int ck_3_3_0_0;
  int ck_3_3_0_1;
  int ck_3_2_1;
  int ck_3_3_1_0;
  int ck_3_3_1_1;
  int nr_St_2_Reheat;
  int ns_St_2_Reheat_3;
  int ns_St_2_Reheat_2;
  int ns_St_2_Reheat_1;
  int power_St_2_Reheat;
  int nr_St_2_Maintain;
  int ns_St_2_Maintain_3;
  int ns_St_2_Maintain_2;
  int ns_St_2_Maintain_1;
  int power_St_2_Maintain;
  int nr_St_2_Standby;
  int ns_St_2_Standby_3;
  int ns_St_2_Standby_2;
  int ns_St_2_Standby_1;
  int power_St_2_Standby;
  int nr_St_2_Heat;
  int ns_St_2_Heat_3;
  int ns_St_2_Heat_2;
  int ns_St_2_Heat_1;
  int power_St_2_Heat;
  int nr_St_2_Off;
  int ns_St_2_Off_3;
  int ns_St_2_Off_2;
  int ns_St_2_Off_1;
  int power_St_2_Off;
  int ck_3_3;
  int ck_3_2;
  int ck_3_1;
  int v_31_2_0;
  int v_31_3_0_0;
  int v_31_3_0_1;
  int v_31_2_1;
  int v_31_3_1_0;
  int v_31_3_1_1;
  int v_32;
  int v_31_3;
  int v_31_2;
  int v_31_1;
  int v_30;
  int v_29;
  int v_28;
  int v_26_2_0;
  int v_26_3_0_0;
  int v_26_3_0_1;
  int v_26_2_1;
  int v_26_3_1_0;
  int v_26_3_1_1;
  int v_27;
  int v_26_3;
  int v_26_2;
  int v_26_1;
  int v_24_2_0;
  int v_24_3_0_0;
  int v_24_3_0_1;
  int v_24_2_1;
  int v_24_3_1_0;
  int v_24_3_1_1;
  int v_25;
  int v_24_3;
  int v_24_2;
  int v_24_1;
  int v_23;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_22;
  int v_3;
  int v_2;
  int v_1;
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
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int s_St_2_Reheat_2_0;
  int s_St_2_Reheat_3_0_0;
  int s_St_2_Reheat_3_0_1;
  int s_St_2_Reheat_2_1;
  int s_St_2_Reheat_3_1_0;
  int s_St_2_Reheat_3_1_1;
  int s_St_2_Maintain_2_0;
  int s_St_2_Maintain_3_0_0;
  int s_St_2_Maintain_3_0_1;
  int s_St_2_Maintain_2_1;
  int s_St_2_Maintain_3_1_0;
  int s_St_2_Maintain_3_1_1;
  int s_St_2_Standby_2_0;
  int s_St_2_Standby_3_0_0;
  int s_St_2_Standby_3_0_1;
  int s_St_2_Standby_2_1;
  int s_St_2_Standby_3_1_0;
  int s_St_2_Standby_3_1_1;
  int s_St_2_Heat_2_0;
  int s_St_2_Heat_3_0_0;
  int s_St_2_Heat_3_0_1;
  int s_St_2_Heat_2_1;
  int s_St_2_Heat_3_1_0;
  int s_St_2_Heat_3_1_1;
  int s_St_2_Off_2_0;
  int s_St_2_Off_3_0_0;
  int s_St_2_Off_3_0_1;
  int s_St_2_Off_2_1;
  int s_St_2_Off_3_1_0;
  int s_St_2_Off_3_1_1;
  int ck_2_0;
  int ck_3_4_0_0;
  int ck_3_4_0_1;
  int ck_2_1;
  int ck_3_4_1_0;
  int ck_3_4_1_1;
  int r_St_2_Reheat;
  int s_St_2_Reheat_3;
  int s_St_2_Reheat_2;
  int s_St_2_Reheat_1;
  int r_St_2_Maintain;
  int s_St_2_Maintain_3;
  int s_St_2_Maintain_2;
  int s_St_2_Maintain_1;
  int r_St_2_Standby;
  int s_St_2_Standby_3;
  int s_St_2_Standby_2;
  int s_St_2_Standby_1;
  int r_St_2_Heat;
  int s_St_2_Heat_3;
  int s_St_2_Heat_2;
  int s_St_2_Heat_1;
  int r_St_2_Off;
  int s_St_2_Off_3;
  int s_St_2_Off_2;
  int s_St_2_Off_1;
  int ck_3_4;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_220;
  ck_2 = self->v_221;
  ck_3_4 = self->v_222;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_4_1_1 = ck_3_4;
      if (ck_3_4_1_1) {
        if (finish) {
          v_27 = true;
        } else {
          v_27 = self->pnr;
        };
        if (temp_ok) {
          r_St_2_Heat = true;
        } else {
          r_St_2_Heat = v_27;
        };
        if (finish) {
          v_26_1 = true;
        } else {
          v_26_1 = true;
        };
        if (temp_ok) {
          s_St_2_Heat_1 = true;
        } else {
          s_St_2_Heat_1 = v_26_1;
        };
        if (finish) {
          v_26_2 = false;
        } else {
          v_26_2 = true;
        };
        if (temp_ok) {
          s_St_2_Heat_2 = true;
        } else {
          s_St_2_Heat_2 = v_26_2;
        };
        if (finish) {
          v_26_3 = false;
        } else {
          v_26_3 = true;
        };
        if (temp_ok) {
          s_St_2_Heat_3 = false;
        } else {
          s_St_2_Heat_3 = v_26_3;
        };
        v_238 = r_St_2_Heat;
        v_223 = s_St_2_Heat_1;
        v_224 = s_St_2_Heat_2;
        v_225 = s_St_2_Heat_3;
      } else {
        if (finish) {
          v_25 = true;
          v_24_1 = true;
          v_24_2 = false;
          v_24_3 = false;
        } else {
          v_25 = self->pnr;
          v_24_1 = true;
          v_24_2 = true;
          v_24_3 = false;
        };
        v_23 = (cold&&c);
        if (v_23) {
          r_St_2_Maintain = true;
        } else {
          r_St_2_Maintain = v_25;
        };
        v_238 = r_St_2_Maintain;
        if (v_23) {
          s_St_2_Maintain_1 = false;
        } else {
          s_St_2_Maintain_1 = v_24_1;
        };
        v_223 = s_St_2_Maintain_1;
        if (v_23) {
          s_St_2_Maintain_2 = false;
        } else {
          s_St_2_Maintain_2 = v_24_2;
        };
        v_224 = s_St_2_Maintain_2;
        if (v_23) {
          s_St_2_Maintain_3 = true;
        } else {
          s_St_2_Maintain_3 = v_24_3;
        };
        v_225 = s_St_2_Maintain_3;
      };
      v_232 = v_223;
      v_233 = v_224;
      v_234 = v_225;
      v_240 = v_238;
      if (ck_3_4_1_1) {
        if (v_26_1) {
          v_26_2_1 = v_26_2;
          if (v_26_2_1) {
            v_26_3_1_1 = v_26_3;
          } else {
            v_26_3_1_0 = v_26_3;
          };
        } else {
          v_26_2_0 = v_26_2;
          if (v_26_2_0) {
            v_26_3_0_1 = v_26_3;
          } else {
            v_26_3_0_0 = v_26_3;
          };
        };
        if (s_St_2_Heat_1) {
          s_St_2_Heat_2_1 = s_St_2_Heat_2;
          if (s_St_2_Heat_2_1) {
            s_St_2_Heat_3_1_1 = s_St_2_Heat_3;
          } else {
            s_St_2_Heat_3_1_0 = s_St_2_Heat_3;
          };
        } else {
          s_St_2_Heat_2_0 = s_St_2_Heat_2;
          if (s_St_2_Heat_2_0) {
            s_St_2_Heat_3_0_1 = s_St_2_Heat_3;
          } else {
            s_St_2_Heat_3_0_0 = s_St_2_Heat_3;
          };
        };
      } else {
        if (v_24_1) {
          v_24_2_1 = v_24_2;
          if (v_24_2_1) {
            v_24_3_1_1 = v_24_3;
          } else {
            v_24_3_1_0 = v_24_3;
          };
        } else {
          v_24_2_0 = v_24_2;
          if (v_24_2_0) {
            v_24_3_0_1 = v_24_3;
          } else {
            v_24_3_0_0 = v_24_3;
          };
        };
        if (s_St_2_Maintain_1) {
          s_St_2_Maintain_2_1 = s_St_2_Maintain_2;
          if (s_St_2_Maintain_2_1) {
            s_St_2_Maintain_3_1_1 = s_St_2_Maintain_3;
          } else {
            s_St_2_Maintain_3_1_0 = s_St_2_Maintain_3;
          };
        } else {
          s_St_2_Maintain_2_0 = s_St_2_Maintain_2;
          if (s_St_2_Maintain_2_0) {
            s_St_2_Maintain_3_0_1 = s_St_2_Maintain_3;
          } else {
            s_St_2_Maintain_3_0_0 = s_St_2_Maintain_3;
          };
        };
      };
    } else {
      ck_3_4_1_0 = ck_3_4;
      if (ck_3_4_1_0) {
        v_239 = true;
        v_226 = true;
        v_227 = true;
        v_228 = true;
      } else {
        v_29 = !(c);
        v_30 = (start&&v_29);
        if (v_30) {
          v_32 = true;
          v_31_1 = false;
          v_31_2 = false;
          v_31_3 = false;
        } else {
          v_32 = self->pnr;
          v_31_1 = true;
          v_31_2 = false;
          v_31_3 = false;
        };
        v_28 = (start&&c);
        if (v_28) {
          r_St_2_Off = true;
        } else {
          r_St_2_Off = v_32;
        };
        v_239 = r_St_2_Off;
        if (v_28) {
          s_St_2_Off_1 = true;
        } else {
          s_St_2_Off_1 = v_31_1;
        };
        v_226 = s_St_2_Off_1;
        if (v_28) {
          s_St_2_Off_2 = true;
        } else {
          s_St_2_Off_2 = v_31_2;
        };
        v_227 = s_St_2_Off_2;
        if (v_28) {
          s_St_2_Off_3 = true;
        } else {
          s_St_2_Off_3 = v_31_3;
        };
        v_228 = s_St_2_Off_3;
        if (v_31_1) {
          v_31_2_1 = v_31_2;
          if (v_31_2_1) {
            v_31_3_1_1 = v_31_3;
          } else {
            v_31_3_1_0 = v_31_3;
          };
        } else {
          v_31_2_0 = v_31_2;
          if (v_31_2_0) {
            v_31_3_0_1 = v_31_3;
          } else {
            v_31_3_0_0 = v_31_3;
          };
        };
        if (s_St_2_Off_1) {
          s_St_2_Off_2_1 = s_St_2_Off_2;
          if (s_St_2_Off_2_1) {
            s_St_2_Off_3_1_1 = s_St_2_Off_3;
          } else {
            s_St_2_Off_3_1_0 = s_St_2_Off_3;
          };
        } else {
          s_St_2_Off_2_0 = s_St_2_Off_2;
          if (s_St_2_Off_2_0) {
            s_St_2_Off_3_0_1 = s_St_2_Off_3;
          } else {
            s_St_2_Off_3_0_0 = s_St_2_Off_3;
          };
        };
      };
      v_232 = v_226;
      v_233 = v_227;
      v_234 = v_228;
      v_240 = v_239;
    };
    s_1 = v_232;
    s_2 = v_233;
    s_3 = v_234;
    r = v_240;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_4_0_1 = ck_3_4;
      v_235 = true;
      v_236 = true;
      v_237 = true;
      v_242 = true;
    } else {
      ck_3_4_0_0 = ck_3_4;
      if (ck_3_4_0_0) {
        if (finish) {
          v_22 = true;
        } else {
          v_22 = self->pnr;
        };
        if (temp_ok) {
          r_St_2_Reheat = true;
        } else {
          r_St_2_Reheat = v_22;
        };
        v_241 = r_St_2_Reheat;
        if (finish) {
          v_1 = true;
        } else {
          v_1 = false;
        };
        if (temp_ok) {
          s_St_2_Reheat_1 = true;
        } else {
          s_St_2_Reheat_1 = v_1;
        };
        v_229 = s_St_2_Reheat_1;
        if (finish) {
          v_2 = false;
        } else {
          v_2 = false;
        };
        if (temp_ok) {
          s_St_2_Reheat_2 = true;
        } else {
          s_St_2_Reheat_2 = v_2;
        };
        v_230 = s_St_2_Reheat_2;
        if (finish) {
          v_3 = false;
        } else {
          v_3 = true;
        };
        if (temp_ok) {
          s_St_2_Reheat_3 = false;
        } else {
          s_St_2_Reheat_3 = v_3;
        };
        v_231 = s_St_2_Reheat_3;
        if (v_1) {
          v_2_1 = v_2;
          if (v_2_1) {
            v_3_1_1 = v_3;
          } else {
            v_3_1_0 = v_3;
          };
        } else {
          v_2_0 = v_2;
          if (v_2_0) {
            v_3_0_1 = v_3;
          } else {
            v_3_0_0 = v_3;
          };
        };
      } else {
        if (c) {
          r_St_2_Standby = true;
          s_St_2_Standby_1 = true;
          s_St_2_Standby_2 = true;
          s_St_2_Standby_3 = true;
        } else {
          r_St_2_Standby = self->pnr;
          s_St_2_Standby_1 = false;
          s_St_2_Standby_2 = false;
          s_St_2_Standby_3 = false;
        };
        v_241 = r_St_2_Standby;
        v_229 = s_St_2_Standby_1;
        v_230 = s_St_2_Standby_2;
        v_231 = s_St_2_Standby_3;
      };
      v_235 = v_229;
      v_236 = v_230;
      v_237 = v_231;
      v_242 = v_241;
    };
    s_1 = v_235;
    s_2 = v_236;
    s_3 = v_237;
    r = v_242;
  };
  ck_3_1 = s_1;
  ck_3_2 = s_2;
  ck_3_3 = s_3;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      ck_3_3_1_1 = ck_3_3;
      if (ck_3_3_1_1) {
        power_St_2_Heat = 1500;
        nr_St_2_Heat = false;
        ns_St_2_Heat_1 = true;
        ns_St_2_Heat_2 = true;
        ns_St_2_Heat_3 = true;
        v_195 = power_St_2_Heat;
        v_215 = nr_St_2_Heat;
        v_200 = ns_St_2_Heat_1;
        v_201 = ns_St_2_Heat_2;
        v_202 = ns_St_2_Heat_3;
      } else {
        power_St_2_Maintain = 300;
        v_195 = power_St_2_Maintain;
        nr_St_2_Maintain = false;
        v_215 = nr_St_2_Maintain;
        ns_St_2_Maintain_1 = true;
        v_200 = ns_St_2_Maintain_1;
        ns_St_2_Maintain_2 = true;
        v_201 = ns_St_2_Maintain_2;
        ns_St_2_Maintain_3 = false;
        v_202 = ns_St_2_Maintain_3;
      };
      v_197 = v_195;
      v_209 = v_200;
      v_210 = v_201;
      v_211 = v_202;
      v_217 = v_215;
      if (ck_3_3_1_1) {
        if (ns_St_2_Heat_1) {
          ns_St_2_Heat_2_1 = ns_St_2_Heat_2;
          if (ns_St_2_Heat_2_1) {
            ns_St_2_Heat_3_1_1 = ns_St_2_Heat_3;
          } else {
            ns_St_2_Heat_3_1_0 = ns_St_2_Heat_3;
          };
        } else {
          ns_St_2_Heat_2_0 = ns_St_2_Heat_2;
          if (ns_St_2_Heat_2_0) {
            ns_St_2_Heat_3_0_1 = ns_St_2_Heat_3;
          } else {
            ns_St_2_Heat_3_0_0 = ns_St_2_Heat_3;
          };
        };
      } else {
        if (ns_St_2_Maintain_1) {
          ns_St_2_Maintain_2_1 = ns_St_2_Maintain_2;
          if (ns_St_2_Maintain_2_1) {
            ns_St_2_Maintain_3_1_1 = ns_St_2_Maintain_3;
          } else {
            ns_St_2_Maintain_3_1_0 = ns_St_2_Maintain_3;
          };
        } else {
          ns_St_2_Maintain_2_0 = ns_St_2_Maintain_2;
          if (ns_St_2_Maintain_2_0) {
            ns_St_2_Maintain_3_0_1 = ns_St_2_Maintain_3;
          } else {
            ns_St_2_Maintain_3_0_0 = ns_St_2_Maintain_3;
          };
        };
      };
    } else {
      ck_3_3_1_0 = ck_3_3;
      if (ck_3_3_1_0) {
        v_196 = 0;
        v_216 = true;
        v_203 = true;
        v_204 = true;
        v_205 = true;
      } else {
        power_St_2_Off = 0;
        v_196 = power_St_2_Off;
        nr_St_2_Off = false;
        v_216 = nr_St_2_Off;
        ns_St_2_Off_1 = true;
        v_203 = ns_St_2_Off_1;
        ns_St_2_Off_2 = false;
        v_204 = ns_St_2_Off_2;
        ns_St_2_Off_3 = false;
        v_205 = ns_St_2_Off_3;
        if (ns_St_2_Off_1) {
          ns_St_2_Off_2_1 = ns_St_2_Off_2;
          if (ns_St_2_Off_2_1) {
            ns_St_2_Off_3_1_1 = ns_St_2_Off_3;
          } else {
            ns_St_2_Off_3_1_0 = ns_St_2_Off_3;
          };
        } else {
          ns_St_2_Off_2_0 = ns_St_2_Off_2;
          if (ns_St_2_Off_2_0) {
            ns_St_2_Off_3_0_1 = ns_St_2_Off_3;
          } else {
            ns_St_2_Off_3_0_0 = ns_St_2_Off_3;
          };
        };
      };
      v_197 = v_196;
      v_209 = v_203;
      v_210 = v_204;
      v_211 = v_205;
      v_217 = v_216;
    };
    _out->power = v_197;
    ns_1 = v_209;
    ns_2 = v_210;
    ns_3 = v_211;
    nr = v_217;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      ck_3_3_0_1 = ck_3_3;
      v_199 = 0;
      v_212 = true;
      v_213 = true;
      v_214 = true;
      v_219 = true;
    } else {
      ck_3_3_0_0 = ck_3_3;
      if (ck_3_3_0_0) {
        power_St_2_Reheat = 1000;
        v_198 = power_St_2_Reheat;
        nr_St_2_Reheat = false;
        v_218 = nr_St_2_Reheat;
        ns_St_2_Reheat_1 = false;
        v_206 = ns_St_2_Reheat_1;
        ns_St_2_Reheat_2 = false;
        v_207 = ns_St_2_Reheat_2;
        ns_St_2_Reheat_3 = true;
        v_208 = ns_St_2_Reheat_3;
      } else {
        power_St_2_Standby = 0;
        nr_St_2_Standby = false;
        ns_St_2_Standby_1 = false;
        ns_St_2_Standby_2 = false;
        ns_St_2_Standby_3 = false;
        v_198 = power_St_2_Standby;
        v_218 = nr_St_2_Standby;
        v_206 = ns_St_2_Standby_1;
        v_207 = ns_St_2_Standby_2;
        v_208 = ns_St_2_Standby_3;
      };
      v_199 = v_198;
      v_212 = v_206;
      v_213 = v_207;
      v_214 = v_208;
      v_219 = v_218;
    };
    _out->power = v_199;
    ns_1 = v_212;
    ns_2 = v_213;
    ns_3 = v_214;
    nr = v_219;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_3_1)) {
    if (!(ck_3_2_0)) {
      if (ck_3_3_0_0) {
        if (ns_St_2_Reheat_1) {
          ns_St_2_Reheat_2_1 = ns_St_2_Reheat_2;
          if (ns_St_2_Reheat_2_1) {
            ns_St_2_Reheat_3_1_1 = ns_St_2_Reheat_3;
          } else {
            ns_St_2_Reheat_3_1_0 = ns_St_2_Reheat_3;
          };
        } else {
          ns_St_2_Reheat_2_0 = ns_St_2_Reheat_2;
          if (ns_St_2_Reheat_2_0) {
            ns_St_2_Reheat_3_0_1 = ns_St_2_Reheat_3;
          } else {
            ns_St_2_Reheat_3_0_0 = ns_St_2_Reheat_3;
          };
        };
      } else {
        if (ns_St_2_Standby_1) {
          ns_St_2_Standby_2_1 = ns_St_2_Standby_2;
          if (ns_St_2_Standby_2_1) {
            ns_St_2_Standby_3_1_1 = ns_St_2_Standby_3;
          } else {
            ns_St_2_Standby_3_1_0 = ns_St_2_Standby_3;
          };
        } else {
          ns_St_2_Standby_2_0 = ns_St_2_Standby_2;
          if (ns_St_2_Standby_2_0) {
            ns_St_2_Standby_3_0_1 = ns_St_2_Standby_3;
          } else {
            ns_St_2_Standby_3_0_0 = ns_St_2_Standby_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_4_0_0) {
        if (s_St_2_Reheat_1) {
          s_St_2_Reheat_2_1 = s_St_2_Reheat_2;
          if (s_St_2_Reheat_2_1) {
            s_St_2_Reheat_3_1_1 = s_St_2_Reheat_3;
          } else {
            s_St_2_Reheat_3_1_0 = s_St_2_Reheat_3;
          };
        } else {
          s_St_2_Reheat_2_0 = s_St_2_Reheat_2;
          if (s_St_2_Reheat_2_0) {
            s_St_2_Reheat_3_0_1 = s_St_2_Reheat_3;
          } else {
            s_St_2_Reheat_3_0_0 = s_St_2_Reheat_3;
          };
        };
      } else {
        if (s_St_2_Standby_1) {
          s_St_2_Standby_2_1 = s_St_2_Standby_2;
          if (s_St_2_Standby_2_1) {
            s_St_2_Standby_3_1_1 = s_St_2_Standby_3;
          } else {
            s_St_2_Standby_3_1_0 = s_St_2_Standby_3;
          };
        } else {
          s_St_2_Standby_2_0 = s_St_2_Standby_2;
          if (s_St_2_Standby_2_0) {
            s_St_2_Standby_3_0_1 = s_St_2_Standby_3;
          } else {
            s_St_2_Standby_3_0_0 = s_St_2_Standby_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_220 = ns_1;
  self->v_221 = ns_2;
  self->v_222 = ns_3;;
}

void Zao__door_reset(Zao__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Zao__door_step(int push, int c_door, Zao__door_out* _out,
                    Zao__door_mem* self) {
  
  int nr_St_3_Open;
  int ns_St_3_Open_1;
  int door_open_St_3_Open;
  int nr_St_3_Closed;
  int ns_St_3_Closed_1;
  int door_open_St_3_Closed;
  int ck_4_1;
  int v_34;
  int v_33;
  int v;
  int r_St_3_Open;
  int s_St_3_Open_1;
  int r_St_3_Closed;
  int s_St_3_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_34 = (push&&c_door);
    if (v_34) {
      r_St_3_Closed = true;
      s_St_3_Closed_1 = false;
    } else {
      r_St_3_Closed = self->pnr;
      s_St_3_Closed_1 = true;
    };
    r = r_St_3_Closed;
    s_1 = s_St_3_Closed_1;
  } else {
    v = !(c_door);
    v_33 = (push||v);
    if (v_33) {
      r_St_3_Open = true;
    } else {
      r_St_3_Open = self->pnr;
    };
    r = r_St_3_Open;
    if (v_33) {
      s_St_3_Open_1 = true;
    } else {
      s_St_3_Open_1 = false;
    };
    s_1 = s_St_3_Open_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    door_open_St_3_Closed = false;
    nr_St_3_Closed = false;
    ns_St_3_Closed_1 = true;
    _out->door_open = door_open_St_3_Closed;
    nr = nr_St_3_Closed;
    ns_1 = ns_St_3_Closed_1;
  } else {
    door_open_St_3_Open = true;
    _out->door_open = door_open_St_3_Open;
    nr_St_3_Open = false;
    nr = nr_St_3_Open;
    ns_St_3_Open_1 = false;
    ns_1 = ns_St_3_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Zao__lamp_reset(Zao__lamp_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Zao__lamp_step(int turn, int c1, int c2, Zao__lamp_out* _out,
                    Zao__lamp_mem* self) {
  
  int nr_St_4_Onn;
  int ns_St_4_Onn_1;
  int lamp_on_St_4_Onn;
  int nr_St_4_Off;
  int ns_St_4_Off_1;
  int lamp_on_St_4_Off;
  int ck_5_1;
  int v_37;
  int v_36;
  int v_35;
  int v;
  int r_St_4_Onn;
  int s_St_4_Onn_1;
  int r_St_4_Off;
  int s_St_4_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_36 = (turn&&c1);
    v_37 = (v_36||c2);
    if (v_37) {
      r_St_4_Off = true;
      s_St_4_Off_1 = false;
    } else {
      r_St_4_Off = self->pnr;
      s_St_4_Off_1 = true;
    };
    r = r_St_4_Off;
    s_1 = s_St_4_Off_1;
  } else {
    v = (turn&&c2);
    v_35 = (v||c1);
    if (v_35) {
      r_St_4_Onn = true;
    } else {
      r_St_4_Onn = self->pnr;
    };
    r = r_St_4_Onn;
    if (v_35) {
      s_St_4_Onn_1 = true;
    } else {
      s_St_4_Onn_1 = false;
    };
    s_1 = s_St_4_Onn_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    lamp_on_St_4_Off = false;
    nr_St_4_Off = false;
    ns_St_4_Off_1 = true;
    _out->lamp_on = lamp_on_St_4_Off;
    nr = nr_St_4_Off;
    ns_1 = ns_St_4_Off_1;
  } else {
    lamp_on_St_4_Onn = true;
    _out->lamp_on = lamp_on_St_4_Onn;
    nr_St_4_Onn = false;
    nr = nr_St_4_Onn;
    ns_St_4_Onn_1 = false;
    ns_1 = ns_St_4_Onn_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Zao__room_reset(Zao__room_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Zao__room_step(int presence, Zao__room_out* _out, Zao__room_mem* self) {
  
  int nr_St_5_Ocupied;
  int ns_St_5_Ocupied_1;
  int room_oc_St_5_Ocupied;
  int nr_St_5_Empty;
  int ns_St_5_Empty_1;
  int room_oc_St_5_Empty;
  int ck_6_1;
  int v;
  int r_St_5_Ocupied;
  int s_St_5_Ocupied_1;
  int r_St_5_Empty;
  int s_St_5_Empty_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (presence) {
      r_St_5_Empty = true;
      s_St_5_Empty_1 = false;
    } else {
      r_St_5_Empty = self->pnr;
      s_St_5_Empty_1 = true;
    };
    r = r_St_5_Empty;
    s_1 = s_St_5_Empty_1;
  } else {
    v = !(presence);
    if (v) {
      r_St_5_Ocupied = true;
    } else {
      r_St_5_Ocupied = self->pnr;
    };
    r = r_St_5_Ocupied;
    if (v) {
      s_St_5_Ocupied_1 = true;
    } else {
      s_St_5_Ocupied_1 = false;
    };
    s_1 = s_St_5_Ocupied_1;
  };
  ck_6_1 = s_1;
  if (ck_6_1) {
    room_oc_St_5_Empty = false;
    nr_St_5_Empty = false;
    ns_St_5_Empty_1 = true;
    _out->room_oc = room_oc_St_5_Empty;
    nr = nr_St_5_Empty;
    ns_1 = ns_St_5_Empty_1;
  } else {
    room_oc_St_5_Ocupied = true;
    _out->room_oc = room_oc_St_5_Ocupied;
    nr_St_5_Ocupied = false;
    nr = nr_St_5_Ocupied;
    ns_St_5_Ocupied_1 = false;
    ns_1 = ns_St_5_Ocupied_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Zao__mp_reset(Zao__mp_mem* self) {
  self->pnr = false;
  self->v_253 = false;
  self->v_254 = false;
}

void Zao__mp_step(int eco_input, int comfort_input, Zao__mp_out* _out,
                  Zao__mp_mem* self) {
  
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
  int ns_St_6_Comfort_2_0;
  int ns_St_6_Comfort_2_1;
  int pl_St_6_Comfort_2_0;
  int pl_St_6_Comfort_2_1;
  int ns_St_6_Eco_2_0;
  int ns_St_6_Eco_2_1;
  int pl_St_6_Eco_2_0;
  int pl_St_6_Eco_2_1;
  int ns_St_6_MinimalSafety_2_0;
  int ns_St_6_MinimalSafety_2_1;
  int pl_St_6_MinimalSafety_2_0;
  int pl_St_6_MinimalSafety_2_1;
  int ck_7_2_0;
  int ck_7_2_1;
  int nr_St_6_Comfort;
  int ns_St_6_Comfort_2;
  int ns_St_6_Comfort_1;
  int pl_St_6_Comfort_2;
  int pl_St_6_Comfort_1;
  int nr_St_6_Eco;
  int ns_St_6_Eco_2;
  int ns_St_6_Eco_1;
  int pl_St_6_Eco_2;
  int pl_St_6_Eco_1;
  int nr_St_6_MinimalSafety;
  int ns_St_6_MinimalSafety_2;
  int ns_St_6_MinimalSafety_1;
  int pl_St_6_MinimalSafety_2;
  int pl_St_6_MinimalSafety_1;
  int ck_7_2;
  int ck_7_1;
  int v_43_2_0;
  int v_43_2_1;
  int v_44;
  int v_43_2;
  int v_43_1;
  int v_41_2_0;
  int v_41_2_1;
  int v_42;
  int v_41_2;
  int v_41_1;
  int v_40;
  int v_38_2_0;
  int v_38_2_1;
  int v_39;
  int v_38_2;
  int v_38_1;
  int v;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int s_St_6_Comfort_2_0;
  int s_St_6_Comfort_2_1;
  int s_St_6_Eco_2_0;
  int s_St_6_Eco_2_1;
  int s_St_6_MinimalSafety_2_0;
  int s_St_6_MinimalSafety_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_6_Comfort;
  int s_St_6_Comfort_2;
  int s_St_6_Comfort_1;
  int r_St_6_Eco;
  int s_St_6_Eco_2;
  int s_St_6_Eco_1;
  int r_St_6_MinimalSafety;
  int s_St_6_MinimalSafety_2;
  int s_St_6_MinimalSafety_1;
  int ck_2;
  int ck_1;
  int pl_2_0;
  int pl_2_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_253;
  ck_2 = self->v_254;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v = !(comfort_input);
      if (v) {
        v_39 = true;
      } else {
        v_39 = self->pnr;
      };
      if (eco_input) {
        r_St_6_Comfort = true;
      } else {
        r_St_6_Comfort = v_39;
      };
      v_259 = r_St_6_Comfort;
      if (v) {
        v_38_1 = false;
      } else {
        v_38_1 = true;
      };
      if (eco_input) {
        s_St_6_Comfort_1 = true;
      } else {
        s_St_6_Comfort_1 = v_38_1;
      };
      v_255 = s_St_6_Comfort_1;
      if (v) {
        v_38_2 = false;
      } else {
        v_38_2 = true;
      };
      if (eco_input) {
        s_St_6_Comfort_2 = false;
      } else {
        s_St_6_Comfort_2 = v_38_2;
      };
      v_256 = s_St_6_Comfort_2;
    } else {
      v_40 = !(eco_input);
      if (v_40) {
        v_42 = true;
      } else {
        v_42 = self->pnr;
      };
      if (comfort_input) {
        r_St_6_Eco = true;
      } else {
        r_St_6_Eco = v_42;
      };
      if (v_40) {
        v_41_1 = false;
      } else {
        v_41_1 = true;
      };
      if (comfort_input) {
        s_St_6_Eco_1 = true;
      } else {
        s_St_6_Eco_1 = v_41_1;
      };
      if (v_40) {
        v_41_2 = false;
      } else {
        v_41_2 = false;
      };
      if (comfort_input) {
        s_St_6_Eco_2 = true;
      } else {
        s_St_6_Eco_2 = v_41_2;
      };
      v_259 = r_St_6_Eco;
      v_255 = s_St_6_Eco_1;
      v_256 = s_St_6_Eco_2;
    };
    s_1 = v_255;
    s_2 = v_256;
    r = v_259;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_260 = true;
      v_257 = true;
      v_258 = true;
    } else {
      if (comfort_input) {
        v_44 = true;
      } else {
        v_44 = self->pnr;
      };
      if (eco_input) {
        r_St_6_MinimalSafety = true;
      } else {
        r_St_6_MinimalSafety = v_44;
      };
      v_260 = r_St_6_MinimalSafety;
      if (comfort_input) {
        v_43_1 = true;
      } else {
        v_43_1 = false;
      };
      if (eco_input) {
        s_St_6_MinimalSafety_1 = true;
      } else {
        s_St_6_MinimalSafety_1 = v_43_1;
      };
      v_257 = s_St_6_MinimalSafety_1;
      if (comfort_input) {
        v_43_2 = true;
      } else {
        v_43_2 = false;
      };
      if (eco_input) {
        s_St_6_MinimalSafety_2 = false;
      } else {
        s_St_6_MinimalSafety_2 = v_43_2;
      };
      v_258 = s_St_6_MinimalSafety_2;
      if (v_43_1) {
        v_43_2_1 = v_43_2;
      } else {
        v_43_2_0 = v_43_2;
      };
      if (s_St_6_MinimalSafety_1) {
        s_St_6_MinimalSafety_2_1 = s_St_6_MinimalSafety_2;
      } else {
        s_St_6_MinimalSafety_2_0 = s_St_6_MinimalSafety_2;
      };
    };
    s_1 = v_257;
    s_2 = v_258;
    r = v_260;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      pl_St_6_Comfort_1 = true;
      v_243 = pl_St_6_Comfort_1;
      pl_St_6_Comfort_2 = true;
      v_244 = pl_St_6_Comfort_2;
      nr_St_6_Comfort = false;
      v_251 = nr_St_6_Comfort;
      ns_St_6_Comfort_1 = true;
      v_247 = ns_St_6_Comfort_1;
      ns_St_6_Comfort_2 = true;
      v_248 = ns_St_6_Comfort_2;
    } else {
      pl_St_6_Eco_1 = true;
      pl_St_6_Eco_2 = false;
      nr_St_6_Eco = false;
      ns_St_6_Eco_1 = true;
      ns_St_6_Eco_2 = false;
      v_243 = pl_St_6_Eco_1;
      v_244 = pl_St_6_Eco_2;
      v_251 = nr_St_6_Eco;
      v_247 = ns_St_6_Eco_1;
      v_248 = ns_St_6_Eco_2;
    };
    _out->pl_1 = v_243;
    _out->pl_2 = v_244;
    ns_1 = v_247;
    ns_2 = v_248;
    nr = v_251;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_245 = true;
      v_246 = true;
      v_252 = true;
      v_249 = true;
      v_250 = true;
    } else {
      pl_St_6_MinimalSafety_1 = false;
      v_245 = pl_St_6_MinimalSafety_1;
      pl_St_6_MinimalSafety_2 = false;
      v_246 = pl_St_6_MinimalSafety_2;
      nr_St_6_MinimalSafety = false;
      v_252 = nr_St_6_MinimalSafety;
      ns_St_6_MinimalSafety_1 = false;
      v_249 = ns_St_6_MinimalSafety_1;
      ns_St_6_MinimalSafety_2 = false;
      v_250 = ns_St_6_MinimalSafety_2;
      if (pl_St_6_MinimalSafety_1) {
        pl_St_6_MinimalSafety_2_1 = pl_St_6_MinimalSafety_2;
      } else {
        pl_St_6_MinimalSafety_2_0 = pl_St_6_MinimalSafety_2;
      };
      if (ns_St_6_MinimalSafety_1) {
        ns_St_6_MinimalSafety_2_1 = ns_St_6_MinimalSafety_2;
      } else {
        ns_St_6_MinimalSafety_2_0 = ns_St_6_MinimalSafety_2;
      };
    };
    _out->pl_1 = v_245;
    _out->pl_2 = v_246;
    ns_1 = v_249;
    ns_2 = v_250;
    nr = v_252;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (_out->pl_1) {
    pl_2_1 = _out->pl_2;
  } else {
    pl_2_0 = _out->pl_2;
  };
  if (ck_7_1) {
    if (ck_7_2_1) {
      if (pl_St_6_Comfort_1) {
        pl_St_6_Comfort_2_1 = pl_St_6_Comfort_2;
      } else {
        pl_St_6_Comfort_2_0 = pl_St_6_Comfort_2;
      };
      if (ns_St_6_Comfort_1) {
        ns_St_6_Comfort_2_1 = ns_St_6_Comfort_2;
      } else {
        ns_St_6_Comfort_2_0 = ns_St_6_Comfort_2;
      };
    } else {
      if (pl_St_6_Eco_1) {
        pl_St_6_Eco_2_1 = pl_St_6_Eco_2;
      } else {
        pl_St_6_Eco_2_0 = pl_St_6_Eco_2;
      };
      if (ns_St_6_Eco_1) {
        ns_St_6_Eco_2_1 = ns_St_6_Eco_2;
      } else {
        ns_St_6_Eco_2_0 = ns_St_6_Eco_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1) {
    if (ck_2_1) {
      if (v_38_1) {
        v_38_2_1 = v_38_2;
      } else {
        v_38_2_0 = v_38_2;
      };
      if (s_St_6_Comfort_1) {
        s_St_6_Comfort_2_1 = s_St_6_Comfort_2;
      } else {
        s_St_6_Comfort_2_0 = s_St_6_Comfort_2;
      };
    } else {
      if (v_41_1) {
        v_41_2_1 = v_41_2;
      } else {
        v_41_2_0 = v_41_2;
      };
      if (s_St_6_Eco_1) {
        s_St_6_Eco_2_1 = s_St_6_Eco_2;
      } else {
        s_St_6_Eco_2_0 = s_St_6_Eco_2;
      };
    };
  };
  self->pnr = nr;
  self->v_253 = ns_1;
  self->v_254 = ns_2;;
}

void Zao__alltasks_reset(Zao__alltasks_mem* self) {
  self->pnr = false;
  self->v_273 = false;
  self->v_274 = false;
  self->pnr_1 = false;
  self->ck_22_1 = true;
  self->pnr_2 = false;
  self->ck_20_1 = true;
  self->pnr_3 = false;
  self->ck_18_1 = true;
  self->pnr_4 = false;
  self->ck_16_1 = true;
  self->pnr_5 = false;
  self->ck_14_1 = true;
  self->pnr_6 = false;
  self->v_306 = true;
  self->v_307 = false;
  self->v_308 = false;
  self->pnr_7 = false;
  self->v_359 = true;
  self->v_360 = true;
  self->v_361 = true;
  self->pnr_8 = false;
  self->v_398 = false;
  self->v_399 = false;
}

void Zao__alltasks_step(int up1, int down1, int up2, int down2, int end_wm,
                        int start_wm, int start_oven, int finish,
                        int temp_ok, int cold, int push, int turn,
                        int presence, int eco_input, int comfort_input,
                        Zao__alltasks_out* _out, Zao__alltasks_mem* self) {
  Alltasks_controller__alltasks_controller_out Alltasks_controller__alltasks_controller_out_st;
  
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
  int ns_St_7_Comfort_2_0;
  int ns_St_7_Comfort_2_1;
  int pl_1_St_7_Comfort_2_0;
  int pl_1_St_7_Comfort_2_1;
  int ns_St_7_Eco_2_0;
  int ns_St_7_Eco_2_1;
  int pl_1_St_7_Eco_2_0;
  int pl_1_St_7_Eco_2_1;
  int ns_St_7_MinimalSafety_2_0;
  int ns_St_7_MinimalSafety_2_1;
  int pl_1_St_7_MinimalSafety_2_0;
  int pl_1_St_7_MinimalSafety_2_1;
  int ck_25_2_0;
  int ck_25_2_1;
  int nr_St_7_Comfort;
  int ns_St_7_Comfort_2;
  int ns_St_7_Comfort_1;
  int pl_1_St_7_Comfort_2;
  int pl_1_St_7_Comfort_1;
  int nr_St_7_Eco;
  int ns_St_7_Eco_2;
  int ns_St_7_Eco_1;
  int pl_1_St_7_Eco_2;
  int pl_1_St_7_Eco_1;
  int nr_St_7_MinimalSafety;
  int ns_St_7_MinimalSafety_2;
  int ns_St_7_MinimalSafety_1;
  int pl_1_St_7_MinimalSafety_2;
  int pl_1_St_7_MinimalSafety_1;
  int ck_25_2;
  int ck_25_1;
  int v_116_2_0;
  int v_116_2_1;
  int v_117;
  int v_116_2;
  int v_116_1;
  int v_114_2_0;
  int v_114_2_1;
  int v_115;
  int v_114_2;
  int v_114_1;
  int v_113;
  int v_111_2_0;
  int v_111_2_1;
  int v_112;
  int v_111_2;
  int v_111_1;
  int v_110;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int s_St_7_Comfort_2_0;
  int s_St_7_Comfort_2_1;
  int s_St_7_Eco_2_0;
  int s_St_7_Eco_2_1;
  int s_St_7_MinimalSafety_2_0;
  int s_St_7_MinimalSafety_2_1;
  int ck_24_2_0;
  int ck_24_2_1;
  int r_St_7_Comfort;
  int s_St_7_Comfort_2;
  int s_St_7_Comfort_1;
  int r_St_7_Eco;
  int s_St_7_Eco_2;
  int s_St_7_Eco_1;
  int r_St_7_MinimalSafety;
  int s_St_7_MinimalSafety_2;
  int s_St_7_MinimalSafety_1;
  int ck_24_2;
  int ck_24_1;
  int nr_1_St_8_Ocupied;
  int ns_1_St_8_Ocupied_1;
  int room_oc_1_St_8_Ocupied;
  int nr_1_St_8_Empty;
  int ns_1_St_8_Empty_1;
  int room_oc_1_St_8_Empty;
  int ck_23_1;
  int v_109;
  int r_1_St_8_Ocupied;
  int s_1_St_8_Ocupied_1;
  int r_1_St_8_Empty;
  int s_1_St_8_Empty_1;
  int nr_2_St_9_Onn;
  int ns_2_St_9_Onn_1;
  int lamp_on_2_St_9_Onn;
  int nr_2_St_9_Off;
  int ns_2_St_9_Off_1;
  int lamp_on_2_St_9_Off;
  int ck_21_1;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int r_2_St_9_Onn;
  int s_2_St_9_Onn_1;
  int r_2_St_9_Off;
  int s_2_St_9_Off_1;
  int nr_3_St_10_Onn;
  int ns_3_St_10_Onn_1;
  int lamp_on_1_St_10_Onn;
  int nr_3_St_10_Off;
  int ns_3_St_10_Off_1;
  int lamp_on_1_St_10_Off;
  int ck_19_1;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int r_3_St_10_Onn;
  int s_3_St_10_Onn_1;
  int r_3_St_10_Off;
  int s_3_St_10_Off_1;
  int nr_4_St_11_Open;
  int ns_4_St_11_Open_1;
  int door_open_2_St_11_Open;
  int nr_4_St_11_Closed;
  int ns_4_St_11_Closed_1;
  int door_open_2_St_11_Closed;
  int ck_17_1;
  int v_100;
  int v_99;
  int v_98;
  int r_4_St_11_Open;
  int s_4_St_11_Open_1;
  int r_4_St_11_Closed;
  int s_4_St_11_Closed_1;
  int nr_5_St_12_Open;
  int ns_5_St_12_Open_1;
  int door_open_1_St_12_Open;
  int nr_5_St_12_Closed;
  int ns_5_St_12_Closed_1;
  int door_open_1_St_12_Closed;
  int ck_15_1;
  int v_97;
  int v_96;
  int v_95;
  int r_5_St_12_Open;
  int s_5_St_12_Open_1;
  int r_5_St_12_Closed;
  int s_5_St_12_Closed_1;
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
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int ns_6_St_13_Reheat_2_0;
  int ns_6_St_13_Reheat_3_0_0;
  int ns_6_St_13_Reheat_3_0_1;
  int ns_6_St_13_Reheat_2_1;
  int ns_6_St_13_Reheat_3_1_0;
  int ns_6_St_13_Reheat_3_1_1;
  int ns_6_St_13_Maintain_2_0;
  int ns_6_St_13_Maintain_3_0_0;
  int ns_6_St_13_Maintain_3_0_1;
  int ns_6_St_13_Maintain_2_1;
  int ns_6_St_13_Maintain_3_1_0;
  int ns_6_St_13_Maintain_3_1_1;
  int ns_6_St_13_Standby_2_0;
  int ns_6_St_13_Standby_3_0_0;
  int ns_6_St_13_Standby_3_0_1;
  int ns_6_St_13_Standby_2_1;
  int ns_6_St_13_Standby_3_1_0;
  int ns_6_St_13_Standby_3_1_1;
  int ns_6_St_13_Heat_2_0;
  int ns_6_St_13_Heat_3_0_0;
  int ns_6_St_13_Heat_3_0_1;
  int ns_6_St_13_Heat_2_1;
  int ns_6_St_13_Heat_3_1_0;
  int ns_6_St_13_Heat_3_1_1;
  int ns_6_St_13_Off_2_0;
  int ns_6_St_13_Off_3_0_0;
  int ns_6_St_13_Off_3_0_1;
  int ns_6_St_13_Off_2_1;
  int ns_6_St_13_Off_3_1_0;
  int ns_6_St_13_Off_3_1_1;
  int ck_13_2_0;
  int ck_13_3_0_0;
  int ck_13_3_0_1;
  int ck_13_2_1;
  int ck_13_3_1_0;
  int ck_13_3_1_1;
  int nr_6_St_13_Reheat;
  int ns_6_St_13_Reheat_3;
  int ns_6_St_13_Reheat_2;
  int ns_6_St_13_Reheat_1;
  int power_2_St_13_Reheat;
  int nr_6_St_13_Maintain;
  int ns_6_St_13_Maintain_3;
  int ns_6_St_13_Maintain_2;
  int ns_6_St_13_Maintain_1;
  int power_2_St_13_Maintain;
  int nr_6_St_13_Standby;
  int ns_6_St_13_Standby_3;
  int ns_6_St_13_Standby_2;
  int ns_6_St_13_Standby_1;
  int power_2_St_13_Standby;
  int nr_6_St_13_Heat;
  int ns_6_St_13_Heat_3;
  int ns_6_St_13_Heat_2;
  int ns_6_St_13_Heat_1;
  int power_2_St_13_Heat;
  int nr_6_St_13_Off;
  int ns_6_St_13_Off_3;
  int ns_6_St_13_Off_2;
  int ns_6_St_13_Off_1;
  int power_2_St_13_Off;
  int ck_13_3;
  int ck_13_2;
  int ck_13_1;
  int v_93_2_0;
  int v_93_3_0_0;
  int v_93_3_0_1;
  int v_93_2_1;
  int v_93_3_1_0;
  int v_93_3_1_1;
  int v_94;
  int v_93_3;
  int v_93_2;
  int v_93_1;
  int v_92;
  int v_91;
  int v_90;
  int v_88_2_0;
  int v_88_3_0_0;
  int v_88_3_0_1;
  int v_88_2_1;
  int v_88_3_1_0;
  int v_88_3_1_1;
  int v_89;
  int v_88_3;
  int v_88_2;
  int v_88_1;
  int v_86_2_0;
  int v_86_3_0_0;
  int v_86_3_0_1;
  int v_86_2_1;
  int v_86_3_1_0;
  int v_86_3_1_1;
  int v_87;
  int v_86_3;
  int v_86_2;
  int v_86_1;
  int v_85;
  int v_83_2_0;
  int v_83_3_0_0;
  int v_83_3_0_1;
  int v_83_2_1;
  int v_83_3_1_0;
  int v_83_3_1_1;
  int v_84;
  int v_83_3;
  int v_83_2;
  int v_83_1;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
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
  int s_6_St_13_Reheat_2_0;
  int s_6_St_13_Reheat_3_0_0;
  int s_6_St_13_Reheat_3_0_1;
  int s_6_St_13_Reheat_2_1;
  int s_6_St_13_Reheat_3_1_0;
  int s_6_St_13_Reheat_3_1_1;
  int s_6_St_13_Maintain_2_0;
  int s_6_St_13_Maintain_3_0_0;
  int s_6_St_13_Maintain_3_0_1;
  int s_6_St_13_Maintain_2_1;
  int s_6_St_13_Maintain_3_1_0;
  int s_6_St_13_Maintain_3_1_1;
  int s_6_St_13_Standby_2_0;
  int s_6_St_13_Standby_3_0_0;
  int s_6_St_13_Standby_3_0_1;
  int s_6_St_13_Standby_2_1;
  int s_6_St_13_Standby_3_1_0;
  int s_6_St_13_Standby_3_1_1;
  int s_6_St_13_Heat_2_0;
  int s_6_St_13_Heat_3_0_0;
  int s_6_St_13_Heat_3_0_1;
  int s_6_St_13_Heat_2_1;
  int s_6_St_13_Heat_3_1_0;
  int s_6_St_13_Heat_3_1_1;
  int s_6_St_13_Off_2_0;
  int s_6_St_13_Off_3_0_0;
  int s_6_St_13_Off_3_0_1;
  int s_6_St_13_Off_2_1;
  int s_6_St_13_Off_3_1_0;
  int s_6_St_13_Off_3_1_1;
  int ck_12_2_0;
  int ck_12_3_0_0;
  int ck_12_3_0_1;
  int ck_12_2_1;
  int ck_12_3_1_0;
  int ck_12_3_1_1;
  int r_6_St_13_Reheat;
  int s_6_St_13_Reheat_3;
  int s_6_St_13_Reheat_2;
  int s_6_St_13_Reheat_1;
  int r_6_St_13_Maintain;
  int s_6_St_13_Maintain_3;
  int s_6_St_13_Maintain_2;
  int s_6_St_13_Maintain_1;
  int r_6_St_13_Standby;
  int s_6_St_13_Standby_3;
  int s_6_St_13_Standby_2;
  int s_6_St_13_Standby_1;
  int r_6_St_13_Heat;
  int s_6_St_13_Heat_3;
  int s_6_St_13_Heat_2;
  int s_6_St_13_Heat_1;
  int r_6_St_13_Off;
  int s_6_St_13_Off_3;
  int s_6_St_13_Off_2;
  int s_6_St_13_Off_1;
  int ck_12_3;
  int ck_12_2;
  int ck_12_1;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int ns_7_St_14_Spin_2_0;
  int ns_7_St_14_Spin_3_0_0;
  int ns_7_St_14_Spin_3_0_1;
  int ns_7_St_14_Spin_2_1;
  int ns_7_St_14_Spin_3_1_0;
  int ns_7_St_14_Spin_3_1_1;
  int ns_7_St_14_Rinse_2_0;
  int ns_7_St_14_Rinse_3_0_0;
  int ns_7_St_14_Rinse_3_0_1;
  int ns_7_St_14_Rinse_2_1;
  int ns_7_St_14_Rinse_3_1_0;
  int ns_7_St_14_Rinse_3_1_1;
  int ns_7_St_14_Standby_2_0;
  int ns_7_St_14_Standby_3_0_0;
  int ns_7_St_14_Standby_3_0_1;
  int ns_7_St_14_Standby_2_1;
  int ns_7_St_14_Standby_3_1_0;
  int ns_7_St_14_Standby_3_1_1;
  int ns_7_St_14_Washing_2_0;
  int ns_7_St_14_Washing_3_0_0;
  int ns_7_St_14_Washing_3_0_1;
  int ns_7_St_14_Washing_2_1;
  int ns_7_St_14_Washing_3_1_0;
  int ns_7_St_14_Washing_3_1_1;
  int ns_7_St_14_WaterFill_2_0;
  int ns_7_St_14_WaterFill_3_0_0;
  int ns_7_St_14_WaterFill_3_0_1;
  int ns_7_St_14_WaterFill_2_1;
  int ns_7_St_14_WaterFill_3_1_0;
  int ns_7_St_14_WaterFill_3_1_1;
  int ns_7_St_14_Off_2_0;
  int ns_7_St_14_Off_3_0_0;
  int ns_7_St_14_Off_3_0_1;
  int ns_7_St_14_Off_2_1;
  int ns_7_St_14_Off_3_1_0;
  int ns_7_St_14_Off_3_1_1;
  int ck_11_2_0;
  int ck_11_3_0_0;
  int ck_11_3_0_1;
  int ck_11_2_1;
  int ck_11_3_1_0;
  int ck_11_3_1_1;
  int nr_7_St_14_Spin;
  int ns_7_St_14_Spin_3;
  int ns_7_St_14_Spin_2;
  int ns_7_St_14_Spin_1;
  int power_1_St_14_Spin;
  int nr_7_St_14_Rinse;
  int ns_7_St_14_Rinse_3;
  int ns_7_St_14_Rinse_2;
  int ns_7_St_14_Rinse_1;
  int power_1_St_14_Rinse;
  int nr_7_St_14_Standby;
  int ns_7_St_14_Standby_3;
  int ns_7_St_14_Standby_2;
  int ns_7_St_14_Standby_1;
  int power_1_St_14_Standby;
  int nr_7_St_14_Washing;
  int ns_7_St_14_Washing_3;
  int ns_7_St_14_Washing_2;
  int ns_7_St_14_Washing_1;
  int power_1_St_14_Washing;
  int nr_7_St_14_WaterFill;
  int ns_7_St_14_WaterFill_3;
  int ns_7_St_14_WaterFill_2;
  int ns_7_St_14_WaterFill_1;
  int power_1_St_14_WaterFill;
  int nr_7_St_14_Off;
  int ns_7_St_14_Off_3;
  int ns_7_St_14_Off_2;
  int ns_7_St_14_Off_1;
  int power_1_St_14_Off;
  int ck_11_3;
  int ck_11_2;
  int ck_11_1;
  int v_81_2_0;
  int v_81_3_0_0;
  int v_81_3_0_1;
  int v_81_2_1;
  int v_81_3_1_0;
  int v_81_3_1_1;
  int v_82;
  int v_81_3;
  int v_81_2;
  int v_81_1;
  int v_80;
  int v_79;
  int v_78;
  int v_385;
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
  int s_7_St_14_Spin_2_0;
  int s_7_St_14_Spin_3_0_0;
  int s_7_St_14_Spin_3_0_1;
  int s_7_St_14_Spin_2_1;
  int s_7_St_14_Spin_3_1_0;
  int s_7_St_14_Spin_3_1_1;
  int s_7_St_14_Rinse_2_0;
  int s_7_St_14_Rinse_3_0_0;
  int s_7_St_14_Rinse_3_0_1;
  int s_7_St_14_Rinse_2_1;
  int s_7_St_14_Rinse_3_1_0;
  int s_7_St_14_Rinse_3_1_1;
  int s_7_St_14_Standby_2_0;
  int s_7_St_14_Standby_3_0_0;
  int s_7_St_14_Standby_3_0_1;
  int s_7_St_14_Standby_2_1;
  int s_7_St_14_Standby_3_1_0;
  int s_7_St_14_Standby_3_1_1;
  int s_7_St_14_Washing_2_0;
  int s_7_St_14_Washing_3_0_0;
  int s_7_St_14_Washing_3_0_1;
  int s_7_St_14_Washing_2_1;
  int s_7_St_14_Washing_3_1_0;
  int s_7_St_14_Washing_3_1_1;
  int s_7_St_14_WaterFill_2_0;
  int s_7_St_14_WaterFill_3_0_0;
  int s_7_St_14_WaterFill_3_0_1;
  int s_7_St_14_WaterFill_2_1;
  int s_7_St_14_WaterFill_3_1_0;
  int s_7_St_14_WaterFill_3_1_1;
  int s_7_St_14_Off_2_0;
  int s_7_St_14_Off_3_0_0;
  int s_7_St_14_Off_3_0_1;
  int s_7_St_14_Off_2_1;
  int s_7_St_14_Off_3_1_0;
  int s_7_St_14_Off_3_1_1;
  int ck_10_2_0;
  int ck_10_3_0_0;
  int ck_10_3_0_1;
  int ck_10_2_1;
  int ck_10_3_1_0;
  int ck_10_3_1_1;
  int r_7_St_14_Spin;
  int s_7_St_14_Spin_3;
  int s_7_St_14_Spin_2;
  int s_7_St_14_Spin_1;
  int r_7_St_14_Rinse;
  int s_7_St_14_Rinse_3;
  int s_7_St_14_Rinse_2;
  int s_7_St_14_Rinse_1;
  int r_7_St_14_Standby;
  int s_7_St_14_Standby_3;
  int s_7_St_14_Standby_2;
  int s_7_St_14_Standby_1;
  int r_7_St_14_Washing;
  int s_7_St_14_Washing_3;
  int s_7_St_14_Washing_2;
  int s_7_St_14_Washing_1;
  int r_7_St_14_WaterFill;
  int s_7_St_14_WaterFill_3;
  int s_7_St_14_WaterFill_2;
  int s_7_St_14_WaterFill_1;
  int r_7_St_14_Off;
  int s_7_St_14_Off_3;
  int s_7_St_14_Off_2;
  int s_7_St_14_Off_1;
  int ck_10_3;
  int ck_10_2;
  int ck_10_1;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
  int ns_8_St_15_High_2_0;
  int ns_8_St_15_High_2_1;
  int ns_8_St_15_Eco_2_0;
  int ns_8_St_15_Eco_2_1;
  int ns_8_St_15_FrostProtection_2_0;
  int ns_8_St_15_FrostProtection_2_1;
  int ns_8_St_15_Off_2_0;
  int ns_8_St_15_Off_2_1;
  int ck_9_2_0;
  int ck_9_2_1;
  int nr_8_St_15_High;
  int ns_8_St_15_High_2;
  int ns_8_St_15_High_1;
  int rad_frost_1_St_15_High;
  int rad_off_1_St_15_High;
  int power_St_15_High;
  int nr_8_St_15_Eco;
  int ns_8_St_15_Eco_2;
  int ns_8_St_15_Eco_1;
  int rad_frost_1_St_15_Eco;
  int rad_off_1_St_15_Eco;
  int power_St_15_Eco;
  int nr_8_St_15_FrostProtection;
  int ns_8_St_15_FrostProtection_2;
  int ns_8_St_15_FrostProtection_1;
  int rad_frost_1_St_15_FrostProtection;
  int rad_off_1_St_15_FrostProtection;
  int power_St_15_FrostProtection;
  int nr_8_St_15_Off;
  int ns_8_St_15_Off_2;
  int ns_8_St_15_Off_1;
  int rad_frost_1_St_15_Off;
  int rad_off_1_St_15_Off;
  int power_St_15_Off;
  int ck_9_2;
  int ck_9_1;
  int v_77;
  int v_76;
  int v_74_2_0;
  int v_74_2_1;
  int v_75;
  int v_74_2;
  int v_74_1;
  int v_73;
  int v_72;
  int v_71;
  int v_69_2_0;
  int v_69_2_1;
  int v_70;
  int v_69_2;
  int v_69_1;
  int v_68;
  int v_67;
  int v_66;
  int v_64_2_0;
  int v_64_2_1;
  int v_65;
  int v_64_2;
  int v_64_1;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int s_8_St_15_High_2_0;
  int s_8_St_15_High_2_1;
  int s_8_St_15_Eco_2_0;
  int s_8_St_15_Eco_2_1;
  int s_8_St_15_FrostProtection_2_0;
  int s_8_St_15_FrostProtection_2_1;
  int s_8_St_15_Off_2_0;
  int s_8_St_15_Off_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
  int r_8_St_15_High;
  int s_8_St_15_High_2;
  int s_8_St_15_High_1;
  int r_8_St_15_Eco;
  int s_8_St_15_Eco_2;
  int s_8_St_15_Eco_1;
  int r_8_St_15_FrostProtection;
  int s_8_St_15_FrostProtection_2;
  int s_8_St_15_FrostProtection_1;
  int r_8_St_15_Off;
  int s_8_St_15_Off_2;
  int s_8_St_15_Off_1;
  int ck_8_2;
  int ck_8_1;
  int pl_2_0;
  int pl_2_1;
  int s_8_2_0;
  int s_8_2_1;
  int ns_8_2_0;
  int ns_8_2_1;
  int s_7_2_0;
  int s_7_3_0_0;
  int s_7_3_0_1;
  int s_7_2_1;
  int s_7_3_1_0;
  int s_7_3_1_1;
  int ns_7_2_0;
  int ns_7_3_0_0;
  int ns_7_3_0_1;
  int ns_7_2_1;
  int ns_7_3_1_0;
  int ns_7_3_1_1;
  int s_6_2_0;
  int s_6_3_0_0;
  int s_6_3_0_1;
  int s_6_2_1;
  int s_6_3_1_0;
  int s_6_3_1_1;
  int ns_6_2_0;
  int ns_6_3_0_0;
  int ns_6_3_0_1;
  int ns_6_2_1;
  int ns_6_3_1_0;
  int ns_6_3_1_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int pl_1_2_0;
  int pl_1_2_1;
  int s_8_2;
  int s_8_1;
  int ns_8_2;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_7_3;
  int s_7_2;
  int s_7_1;
  int ns_7_3;
  int ns_7_2;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_6_3;
  int s_6_2;
  int s_6_1;
  int ns_6_3;
  int ns_6_2;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_5_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_4_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_2_2;
  int s_1_2;
  int ns_2_2;
  int ns_1_2;
  int r;
  int nr;
  int eco_input_1;
  int comfort_input_1;
  int pl_1_2;
  int pl_1_1_1;
  int presence_1;
  int room_oc_1;
  int turn_2;
  int c1_2;
  int c2_2;
  int lamp_on_2;
  int turn_1;
  int c1_1;
  int c2_1;
  int lamp_on_1;
  int push_2;
  int c_door_2;
  int door_open_2;
  int push_1;
  int c_door_1;
  int door_open_1;
  int start_1;
  int c_1;
  int finish_1;
  int temp_ok_1;
  int cold_1;
  int power_2;
  int end_wm_1;
  int start;
  int c;
  int power_1;
  int up1_1;
  int down1_1;
  int up2_1;
  int down2_1;
  int c1;
  int c2;
  int power;
  int rad_off_1;
  int rad_frost_1;
  int v_262;
  int v_261;
  int ck_1;
  int ck_2;
  int r5_MinimalSafety_out;
  int r5_Eco_out;
  int r5_Comfort_out;
  int ck_2_1;
  int ck_2_0;
  int totalPower;
  int r5;
  int r4;
  int r3;
  int r2;
  int r1;
  int v;
  int v_45;
  int v_46;
  int v_47;
  int v_48;
  int v_49;
  int v_50;
  int v_51;
  int v_52;
  int v_53;
  int v_54;
  int v_55;
  int v_56;
  int v_57;
  int v_58;
  int v_59;
  int c2_lamp;
  int c1_lamp;
  int c_door;
  int c_oven;
  int c_wm;
  int c2_rad;
  int c1_rad;
  eco_input_1 = eco_input;
  comfort_input_1 = comfort_input;
  ck_24_1 = self->v_273;
  ck_24_2 = self->v_274;
  presence_1 = presence;
  turn_2 = turn;
  turn_1 = turn;
  push_2 = push;
  push_1 = push;
  start_1 = start_oven;
  finish_1 = finish;
  temp_ok_1 = temp_ok;
  cold_1 = cold;
  ck_12_1 = self->v_306;
  ck_12_2 = self->v_307;
  ck_12_3 = self->v_308;
  end_wm_1 = end_wm;
  start = start_wm;
  ck_10_1 = self->v_359;
  ck_10_2 = self->v_360;
  ck_10_3 = self->v_361;
  up1_1 = up1;
  down1_1 = down1;
  up2_1 = up2;
  down2_1 = down2;
  ck_8_1 = self->v_398;
  ck_8_2 = self->v_399;
  Alltasks_controller__alltasks_controller_step(up1, down1, up2, down2,
                                                end_wm, start_wm, start_oven,
                                                finish, temp_ok, cold, push,
                                                turn, presence, eco_input,
                                                comfort_input, self->v_399,
                                                self->v_398, self->pnr_8,
                                                self->v_361, self->v_360,
                                                self->v_359, self->pnr_7,
                                                self->v_308, self->v_307,
                                                self->v_306, self->pnr_6,
                                                self->ck_14_1, self->pnr_5,
                                                self->ck_16_1, self->pnr_4,
                                                self->ck_18_1, self->pnr_3,
                                                self->ck_20_1, self->pnr_2,
                                                self->ck_22_1, self->pnr_1,
                                                self->v_274, self->v_273,
                                                self->pnr, true, true, true,
                                                true, true, true, true,
                                                &Alltasks_controller__alltasks_controller_out_st);
  c2_lamp = Alltasks_controller__alltasks_controller_out_st.alltasks_c2_lamp;
  c1_lamp = Alltasks_controller__alltasks_controller_out_st.alltasks_c1_lamp;
  c_door = Alltasks_controller__alltasks_controller_out_st.alltasks_c_door;
  c_oven = Alltasks_controller__alltasks_controller_out_st.alltasks_c_oven;
  c_wm = Alltasks_controller__alltasks_controller_out_st.alltasks_c_wm;
  c2_rad = Alltasks_controller__alltasks_controller_out_st.alltasks_c2_rad;
  c1_rad = Alltasks_controller__alltasks_controller_out_st.alltasks_c1_rad;
  c1_2 = c1_lamp;
  c2_2 = c2_lamp;
  c1_1 = c1_lamp;
  c2_1 = c2_lamp;
  c_door_2 = c_door;
  c_door_1 = c_door;
  c_1 = c_oven;
  c = c_wm;
  c1 = c1_rad;
  c2 = c2_rad;
  if (ck_24_1) {
    ck_24_2_1 = ck_24_2;
    if (ck_24_2_1) {
      v_110 = !(comfort_input_1);
      if (v_110) {
        v_112 = true;
      } else {
        v_112 = self->pnr;
      };
      if (eco_input_1) {
        r_St_7_Comfort = true;
      } else {
        r_St_7_Comfort = v_112;
      };
      v_279 = r_St_7_Comfort;
      if (v_110) {
        v_111_1 = false;
      } else {
        v_111_1 = true;
      };
      if (eco_input_1) {
        s_St_7_Comfort_1 = true;
      } else {
        s_St_7_Comfort_1 = v_111_1;
      };
      v_275 = s_St_7_Comfort_1;
      if (v_110) {
        v_111_2 = false;
      } else {
        v_111_2 = true;
      };
      if (eco_input_1) {
        s_St_7_Comfort_2 = false;
      } else {
        s_St_7_Comfort_2 = v_111_2;
      };
      v_276 = s_St_7_Comfort_2;
    } else {
      v_113 = !(eco_input_1);
      if (v_113) {
        v_115 = true;
      } else {
        v_115 = self->pnr;
      };
      if (comfort_input_1) {
        r_St_7_Eco = true;
      } else {
        r_St_7_Eco = v_115;
      };
      if (v_113) {
        v_114_1 = false;
      } else {
        v_114_1 = true;
      };
      if (comfort_input_1) {
        s_St_7_Eco_1 = true;
      } else {
        s_St_7_Eco_1 = v_114_1;
      };
      if (v_113) {
        v_114_2 = false;
      } else {
        v_114_2 = false;
      };
      if (comfort_input_1) {
        s_St_7_Eco_2 = true;
      } else {
        s_St_7_Eco_2 = v_114_2;
      };
      v_279 = r_St_7_Eco;
      v_275 = s_St_7_Eco_1;
      v_276 = s_St_7_Eco_2;
    };
    s_1_2 = v_275;
    s_2_2 = v_276;
    r = v_279;
  } else {
    ck_24_2_0 = ck_24_2;
    if (ck_24_2_0) {
      v_280 = true;
      v_277 = true;
      v_278 = true;
    } else {
      if (comfort_input_1) {
        v_117 = true;
      } else {
        v_117 = self->pnr;
      };
      if (eco_input_1) {
        r_St_7_MinimalSafety = true;
      } else {
        r_St_7_MinimalSafety = v_117;
      };
      v_280 = r_St_7_MinimalSafety;
      if (comfort_input_1) {
        v_116_1 = true;
      } else {
        v_116_1 = false;
      };
      if (eco_input_1) {
        s_St_7_MinimalSafety_1 = true;
      } else {
        s_St_7_MinimalSafety_1 = v_116_1;
      };
      v_277 = s_St_7_MinimalSafety_1;
      if (comfort_input_1) {
        v_116_2 = true;
      } else {
        v_116_2 = false;
      };
      if (eco_input_1) {
        s_St_7_MinimalSafety_2 = false;
      } else {
        s_St_7_MinimalSafety_2 = v_116_2;
      };
      v_278 = s_St_7_MinimalSafety_2;
      if (v_116_1) {
        v_116_2_1 = v_116_2;
      } else {
        v_116_2_0 = v_116_2;
      };
      if (s_St_7_MinimalSafety_1) {
        s_St_7_MinimalSafety_2_1 = s_St_7_MinimalSafety_2;
      } else {
        s_St_7_MinimalSafety_2_0 = s_St_7_MinimalSafety_2;
      };
    };
    s_1_2 = v_277;
    s_2_2 = v_278;
    r = v_280;
  };
  ck_25_1 = s_1_2;
  ck_25_2 = s_2_2;
  if (ck_25_1) {
    ck_25_2_1 = ck_25_2;
    if (ck_25_2_1) {
      pl_1_St_7_Comfort_1 = true;
      v_263 = pl_1_St_7_Comfort_1;
      pl_1_St_7_Comfort_2 = true;
      v_264 = pl_1_St_7_Comfort_2;
      nr_St_7_Comfort = false;
      v_271 = nr_St_7_Comfort;
      ns_St_7_Comfort_1 = true;
      v_267 = ns_St_7_Comfort_1;
      ns_St_7_Comfort_2 = true;
      v_268 = ns_St_7_Comfort_2;
    } else {
      pl_1_St_7_Eco_1 = true;
      pl_1_St_7_Eco_2 = false;
      nr_St_7_Eco = false;
      ns_St_7_Eco_1 = true;
      ns_St_7_Eco_2 = false;
      v_263 = pl_1_St_7_Eco_1;
      v_264 = pl_1_St_7_Eco_2;
      v_271 = nr_St_7_Eco;
      v_267 = ns_St_7_Eco_1;
      v_268 = ns_St_7_Eco_2;
    };
    pl_1_1_1 = v_263;
    pl_1_2 = v_264;
    ns_1_2 = v_267;
    ns_2_2 = v_268;
    nr = v_271;
  } else {
    ck_25_2_0 = ck_25_2;
    if (ck_25_2_0) {
      v_265 = true;
      v_266 = true;
      v_272 = true;
      v_269 = true;
      v_270 = true;
    } else {
      pl_1_St_7_MinimalSafety_1 = false;
      v_265 = pl_1_St_7_MinimalSafety_1;
      pl_1_St_7_MinimalSafety_2 = false;
      v_266 = pl_1_St_7_MinimalSafety_2;
      nr_St_7_MinimalSafety = false;
      v_272 = nr_St_7_MinimalSafety;
      ns_St_7_MinimalSafety_1 = false;
      v_269 = ns_St_7_MinimalSafety_1;
      ns_St_7_MinimalSafety_2 = false;
      v_270 = ns_St_7_MinimalSafety_2;
      if (pl_1_St_7_MinimalSafety_1) {
        pl_1_St_7_MinimalSafety_2_1 = pl_1_St_7_MinimalSafety_2;
      } else {
        pl_1_St_7_MinimalSafety_2_0 = pl_1_St_7_MinimalSafety_2;
      };
      if (ns_St_7_MinimalSafety_1) {
        ns_St_7_MinimalSafety_2_1 = ns_St_7_MinimalSafety_2;
      } else {
        ns_St_7_MinimalSafety_2_0 = ns_St_7_MinimalSafety_2;
      };
    };
    pl_1_1_1 = v_265;
    pl_1_2 = v_266;
    ns_1_2 = v_269;
    ns_2_2 = v_270;
    nr = v_272;
  };
  _out->pl_1_1 = pl_1_1_1;
  ck_1 = _out->pl_1_1;
  _out->pl_2 = pl_1_2;
  ck_2 = _out->pl_2;
  if (ck_1) {
    ck_2_1 = ck_2;
  } else {
    ck_2_0 = ck_2;
  };
  if (_out->pl_1_1) {
    pl_2_1 = _out->pl_2;
  } else {
    pl_2_0 = _out->pl_2;
  };
  if (pl_1_1_1) {
    pl_1_2_1 = pl_1_2;
  } else {
    pl_1_2_0 = pl_1_2;
  };
  if (ns_1_2) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_25_1) {
    if (ck_25_2_1) {
      if (pl_1_St_7_Comfort_1) {
        pl_1_St_7_Comfort_2_1 = pl_1_St_7_Comfort_2;
      } else {
        pl_1_St_7_Comfort_2_0 = pl_1_St_7_Comfort_2;
      };
      if (ns_St_7_Comfort_1) {
        ns_St_7_Comfort_2_1 = ns_St_7_Comfort_2;
      } else {
        ns_St_7_Comfort_2_0 = ns_St_7_Comfort_2;
      };
    } else {
      if (pl_1_St_7_Eco_1) {
        pl_1_St_7_Eco_2_1 = pl_1_St_7_Eco_2;
      } else {
        pl_1_St_7_Eco_2_0 = pl_1_St_7_Eco_2;
      };
      if (ns_St_7_Eco_1) {
        ns_St_7_Eco_2_1 = ns_St_7_Eco_2;
      } else {
        ns_St_7_Eco_2_0 = ns_St_7_Eco_2;
      };
    };
  };
  if (s_1_2) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (ck_24_1) {
    if (ck_24_2_1) {
      if (v_111_1) {
        v_111_2_1 = v_111_2;
      } else {
        v_111_2_0 = v_111_2;
      };
      if (s_St_7_Comfort_1) {
        s_St_7_Comfort_2_1 = s_St_7_Comfort_2;
      } else {
        s_St_7_Comfort_2_0 = s_St_7_Comfort_2;
      };
    } else {
      if (v_114_1) {
        v_114_2_1 = v_114_2;
      } else {
        v_114_2_0 = v_114_2;
      };
      if (s_St_7_Eco_1) {
        s_St_7_Eco_2_1 = s_St_7_Eco_2;
      } else {
        s_St_7_Eco_2_0 = s_St_7_Eco_2;
      };
    };
  };
  if (self->ck_22_1) {
    if (presence_1) {
      r_1_St_8_Empty = true;
      s_1_St_8_Empty_1 = false;
    } else {
      r_1_St_8_Empty = self->pnr_1;
      s_1_St_8_Empty_1 = true;
    };
    r_1 = r_1_St_8_Empty;
    s_1_1 = s_1_St_8_Empty_1;
  } else {
    v_109 = !(presence_1);
    if (v_109) {
      r_1_St_8_Ocupied = true;
    } else {
      r_1_St_8_Ocupied = self->pnr_1;
    };
    r_1 = r_1_St_8_Ocupied;
    if (v_109) {
      s_1_St_8_Ocupied_1 = true;
    } else {
      s_1_St_8_Ocupied_1 = false;
    };
    s_1_1 = s_1_St_8_Ocupied_1;
  };
  ck_23_1 = s_1_1;
  if (ck_23_1) {
    room_oc_1_St_8_Empty = false;
    nr_1_St_8_Empty = false;
    ns_1_St_8_Empty_1 = true;
    room_oc_1 = room_oc_1_St_8_Empty;
    nr_1 = nr_1_St_8_Empty;
    ns_1_1 = ns_1_St_8_Empty_1;
  } else {
    room_oc_1_St_8_Ocupied = true;
    room_oc_1 = room_oc_1_St_8_Ocupied;
    nr_1_St_8_Ocupied = false;
    nr_1 = nr_1_St_8_Ocupied;
    ns_1_St_8_Ocupied_1 = false;
    ns_1_1 = ns_1_St_8_Ocupied_1;
  };
  _out->room_oc = room_oc_1;
  v_53 = !(_out->room_oc);
  if (self->ck_20_1) {
    v_107 = (turn_2&&c1_2);
    v_108 = (v_107||c2_2);
    if (v_108) {
      r_2_St_9_Off = true;
      s_2_St_9_Off_1 = false;
    } else {
      r_2_St_9_Off = self->pnr_2;
      s_2_St_9_Off_1 = true;
    };
    r_2 = r_2_St_9_Off;
    s_2_1 = s_2_St_9_Off_1;
  } else {
    v_105 = (turn_2&&c2_2);
    v_106 = (v_105||c1_2);
    if (v_106) {
      r_2_St_9_Onn = true;
    } else {
      r_2_St_9_Onn = self->pnr_2;
    };
    r_2 = r_2_St_9_Onn;
    if (v_106) {
      s_2_St_9_Onn_1 = true;
    } else {
      s_2_St_9_Onn_1 = false;
    };
    s_2_1 = s_2_St_9_Onn_1;
  };
  ck_21_1 = s_2_1;
  if (ck_21_1) {
    lamp_on_2_St_9_Off = false;
    nr_2_St_9_Off = false;
    ns_2_St_9_Off_1 = true;
    lamp_on_2 = lamp_on_2_St_9_Off;
    nr_2 = nr_2_St_9_Off;
    ns_2_1 = ns_2_St_9_Off_1;
  } else {
    lamp_on_2_St_9_Onn = true;
    lamp_on_2 = lamp_on_2_St_9_Onn;
    nr_2_St_9_Onn = false;
    nr_2 = nr_2_St_9_Onn;
    ns_2_St_9_Onn_1 = false;
    ns_2_1 = ns_2_St_9_Onn_1;
  };
  _out->tv_on = lamp_on_2;
  if (self->ck_18_1) {
    v_103 = (turn_1&&c1_1);
    v_104 = (v_103||c2_1);
    if (v_104) {
      r_3_St_10_Off = true;
      s_3_St_10_Off_1 = false;
    } else {
      r_3_St_10_Off = self->pnr_3;
      s_3_St_10_Off_1 = true;
    };
    r_3 = r_3_St_10_Off;
    s_3_1 = s_3_St_10_Off_1;
  } else {
    v_101 = (turn_1&&c2_1);
    v_102 = (v_101||c1_1);
    if (v_102) {
      r_3_St_10_Onn = true;
    } else {
      r_3_St_10_Onn = self->pnr_3;
    };
    r_3 = r_3_St_10_Onn;
    if (v_102) {
      s_3_St_10_Onn_1 = true;
    } else {
      s_3_St_10_Onn_1 = false;
    };
    s_3_1 = s_3_St_10_Onn_1;
  };
  ck_19_1 = s_3_1;
  if (ck_19_1) {
    lamp_on_1_St_10_Off = false;
    nr_3_St_10_Off = false;
    ns_3_St_10_Off_1 = true;
    lamp_on_1 = lamp_on_1_St_10_Off;
    nr_3 = nr_3_St_10_Off;
    ns_3_1 = ns_3_St_10_Off_1;
  } else {
    lamp_on_1_St_10_Onn = true;
    lamp_on_1 = lamp_on_1_St_10_Onn;
    nr_3_St_10_Onn = false;
    nr_3 = nr_3_St_10_Onn;
    ns_3_St_10_Onn_1 = false;
    ns_3_1 = ns_3_St_10_Onn_1;
  };
  _out->lamp_on = lamp_on_1;
  v = (_out->lamp_on||_out->tv_on);
  v_45 = !(v);
  v_54 = (_out->lamp_on||_out->tv_on);
  r1 = (v_53||v_54);
  if (self->ck_16_1) {
    v_100 = (push_2&&c_door_2);
    if (v_100) {
      r_4_St_11_Closed = true;
      s_4_St_11_Closed_1 = false;
    } else {
      r_4_St_11_Closed = self->pnr_4;
      s_4_St_11_Closed_1 = true;
    };
    r_4 = r_4_St_11_Closed;
    s_4_1 = s_4_St_11_Closed_1;
  } else {
    v_98 = !(c_door_2);
    v_99 = (push_2||v_98);
    if (v_99) {
      r_4_St_11_Open = true;
    } else {
      r_4_St_11_Open = self->pnr_4;
    };
    r_4 = r_4_St_11_Open;
    if (v_99) {
      s_4_St_11_Open_1 = true;
    } else {
      s_4_St_11_Open_1 = false;
    };
    s_4_1 = s_4_St_11_Open_1;
  };
  ck_17_1 = s_4_1;
  if (ck_17_1) {
    door_open_2_St_11_Closed = false;
    nr_4_St_11_Closed = false;
    ns_4_St_11_Closed_1 = true;
    door_open_2 = door_open_2_St_11_Closed;
    nr_4 = nr_4_St_11_Closed;
    ns_4_1 = ns_4_St_11_Closed_1;
  } else {
    door_open_2_St_11_Open = true;
    door_open_2 = door_open_2_St_11_Open;
    nr_4_St_11_Open = false;
    nr_4 = nr_4_St_11_Open;
    ns_4_St_11_Open_1 = false;
    ns_4_1 = ns_4_St_11_Open_1;
  };
  _out->window_open = door_open_2;
  if (self->ck_14_1) {
    v_97 = (push_1&&c_door_1);
    if (v_97) {
      r_5_St_12_Closed = true;
      s_5_St_12_Closed_1 = false;
    } else {
      r_5_St_12_Closed = self->pnr_5;
      s_5_St_12_Closed_1 = true;
    };
    r_5 = r_5_St_12_Closed;
    s_5_1 = s_5_St_12_Closed_1;
  } else {
    v_95 = !(c_door_1);
    v_96 = (push_1||v_95);
    if (v_96) {
      r_5_St_12_Open = true;
    } else {
      r_5_St_12_Open = self->pnr_5;
    };
    r_5 = r_5_St_12_Open;
    if (v_96) {
      s_5_St_12_Open_1 = true;
    } else {
      s_5_St_12_Open_1 = false;
    };
    s_5_1 = s_5_St_12_Open_1;
  };
  ck_15_1 = s_5_1;
  if (ck_15_1) {
    door_open_1_St_12_Closed = false;
    nr_5_St_12_Closed = false;
    ns_5_St_12_Closed_1 = true;
    door_open_1 = door_open_1_St_12_Closed;
    nr_5 = nr_5_St_12_Closed;
    ns_5_1 = ns_5_St_12_Closed_1;
  } else {
    door_open_1_St_12_Open = true;
    door_open_1 = door_open_1_St_12_Open;
    nr_5_St_12_Open = false;
    nr_5 = nr_5_St_12_Open;
    ns_5_St_12_Open_1 = false;
    ns_5_1 = ns_5_St_12_Open_1;
  };
  _out->door_open = door_open_1;
  v_48 = (_out->door_open||_out->window_open);
  v_49 = !(v_48);
  v_51 = (_out->door_open||_out->window_open);
  v_52 = !(v_51);
  r2 = (_out->room_oc||v_52);
  v_56 = (r1&&r2);
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      ck_12_3_1_1 = ck_12_3;
      if (ck_12_3_1_1) {
        if (finish_1) {
          v_89 = true;
        } else {
          v_89 = self->pnr_6;
        };
        if (temp_ok_1) {
          r_6_St_13_Heat = true;
        } else {
          r_6_St_13_Heat = v_89;
        };
        if (finish_1) {
          v_88_1 = true;
        } else {
          v_88_1 = true;
        };
        if (temp_ok_1) {
          s_6_St_13_Heat_1 = true;
        } else {
          s_6_St_13_Heat_1 = v_88_1;
        };
        if (finish_1) {
          v_88_2 = false;
        } else {
          v_88_2 = true;
        };
        if (temp_ok_1) {
          s_6_St_13_Heat_2 = true;
        } else {
          s_6_St_13_Heat_2 = v_88_2;
        };
        if (finish_1) {
          v_88_3 = false;
        } else {
          v_88_3 = true;
        };
        if (temp_ok_1) {
          s_6_St_13_Heat_3 = false;
        } else {
          s_6_St_13_Heat_3 = v_88_3;
        };
        v_324 = r_6_St_13_Heat;
        v_309 = s_6_St_13_Heat_1;
        v_310 = s_6_St_13_Heat_2;
        v_311 = s_6_St_13_Heat_3;
      } else {
        if (finish_1) {
          v_87 = true;
          v_86_1 = true;
          v_86_2 = false;
          v_86_3 = false;
        } else {
          v_87 = self->pnr_6;
          v_86_1 = true;
          v_86_2 = true;
          v_86_3 = false;
        };
        v_85 = (cold_1&&c_1);
        if (v_85) {
          r_6_St_13_Maintain = true;
        } else {
          r_6_St_13_Maintain = v_87;
        };
        v_324 = r_6_St_13_Maintain;
        if (v_85) {
          s_6_St_13_Maintain_1 = false;
        } else {
          s_6_St_13_Maintain_1 = v_86_1;
        };
        v_309 = s_6_St_13_Maintain_1;
        if (v_85) {
          s_6_St_13_Maintain_2 = false;
        } else {
          s_6_St_13_Maintain_2 = v_86_2;
        };
        v_310 = s_6_St_13_Maintain_2;
        if (v_85) {
          s_6_St_13_Maintain_3 = true;
        } else {
          s_6_St_13_Maintain_3 = v_86_3;
        };
        v_311 = s_6_St_13_Maintain_3;
      };
      v_318 = v_309;
      v_319 = v_310;
      v_320 = v_311;
      v_326 = v_324;
      if (ck_12_3_1_1) {
        if (v_88_1) {
          v_88_2_1 = v_88_2;
          if (v_88_2_1) {
            v_88_3_1_1 = v_88_3;
          } else {
            v_88_3_1_0 = v_88_3;
          };
        } else {
          v_88_2_0 = v_88_2;
          if (v_88_2_0) {
            v_88_3_0_1 = v_88_3;
          } else {
            v_88_3_0_0 = v_88_3;
          };
        };
        if (s_6_St_13_Heat_1) {
          s_6_St_13_Heat_2_1 = s_6_St_13_Heat_2;
          if (s_6_St_13_Heat_2_1) {
            s_6_St_13_Heat_3_1_1 = s_6_St_13_Heat_3;
          } else {
            s_6_St_13_Heat_3_1_0 = s_6_St_13_Heat_3;
          };
        } else {
          s_6_St_13_Heat_2_0 = s_6_St_13_Heat_2;
          if (s_6_St_13_Heat_2_0) {
            s_6_St_13_Heat_3_0_1 = s_6_St_13_Heat_3;
          } else {
            s_6_St_13_Heat_3_0_0 = s_6_St_13_Heat_3;
          };
        };
      } else {
        if (v_86_1) {
          v_86_2_1 = v_86_2;
          if (v_86_2_1) {
            v_86_3_1_1 = v_86_3;
          } else {
            v_86_3_1_0 = v_86_3;
          };
        } else {
          v_86_2_0 = v_86_2;
          if (v_86_2_0) {
            v_86_3_0_1 = v_86_3;
          } else {
            v_86_3_0_0 = v_86_3;
          };
        };
        if (s_6_St_13_Maintain_1) {
          s_6_St_13_Maintain_2_1 = s_6_St_13_Maintain_2;
          if (s_6_St_13_Maintain_2_1) {
            s_6_St_13_Maintain_3_1_1 = s_6_St_13_Maintain_3;
          } else {
            s_6_St_13_Maintain_3_1_0 = s_6_St_13_Maintain_3;
          };
        } else {
          s_6_St_13_Maintain_2_0 = s_6_St_13_Maintain_2;
          if (s_6_St_13_Maintain_2_0) {
            s_6_St_13_Maintain_3_0_1 = s_6_St_13_Maintain_3;
          } else {
            s_6_St_13_Maintain_3_0_0 = s_6_St_13_Maintain_3;
          };
        };
      };
    } else {
      ck_12_3_1_0 = ck_12_3;
      if (ck_12_3_1_0) {
        v_325 = true;
        v_312 = true;
        v_313 = true;
        v_314 = true;
      } else {
        v_91 = !(c_1);
        v_92 = (start_1&&v_91);
        if (v_92) {
          v_94 = true;
          v_93_1 = false;
          v_93_2 = false;
          v_93_3 = false;
        } else {
          v_94 = self->pnr_6;
          v_93_1 = true;
          v_93_2 = false;
          v_93_3 = false;
        };
        v_90 = (start_1&&c_1);
        if (v_90) {
          r_6_St_13_Off = true;
        } else {
          r_6_St_13_Off = v_94;
        };
        v_325 = r_6_St_13_Off;
        if (v_90) {
          s_6_St_13_Off_1 = true;
        } else {
          s_6_St_13_Off_1 = v_93_1;
        };
        v_312 = s_6_St_13_Off_1;
        if (v_90) {
          s_6_St_13_Off_2 = true;
        } else {
          s_6_St_13_Off_2 = v_93_2;
        };
        v_313 = s_6_St_13_Off_2;
        if (v_90) {
          s_6_St_13_Off_3 = true;
        } else {
          s_6_St_13_Off_3 = v_93_3;
        };
        v_314 = s_6_St_13_Off_3;
        if (v_93_1) {
          v_93_2_1 = v_93_2;
          if (v_93_2_1) {
            v_93_3_1_1 = v_93_3;
          } else {
            v_93_3_1_0 = v_93_3;
          };
        } else {
          v_93_2_0 = v_93_2;
          if (v_93_2_0) {
            v_93_3_0_1 = v_93_3;
          } else {
            v_93_3_0_0 = v_93_3;
          };
        };
        if (s_6_St_13_Off_1) {
          s_6_St_13_Off_2_1 = s_6_St_13_Off_2;
          if (s_6_St_13_Off_2_1) {
            s_6_St_13_Off_3_1_1 = s_6_St_13_Off_3;
          } else {
            s_6_St_13_Off_3_1_0 = s_6_St_13_Off_3;
          };
        } else {
          s_6_St_13_Off_2_0 = s_6_St_13_Off_2;
          if (s_6_St_13_Off_2_0) {
            s_6_St_13_Off_3_0_1 = s_6_St_13_Off_3;
          } else {
            s_6_St_13_Off_3_0_0 = s_6_St_13_Off_3;
          };
        };
      };
      v_318 = v_312;
      v_319 = v_313;
      v_320 = v_314;
      v_326 = v_325;
    };
    s_6_1 = v_318;
    s_6_2 = v_319;
    s_6_3 = v_320;
    r_6 = v_326;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      ck_12_3_0_1 = ck_12_3;
      v_321 = true;
      v_322 = true;
      v_323 = true;
      v_328 = true;
    } else {
      ck_12_3_0_0 = ck_12_3;
      if (ck_12_3_0_0) {
        if (finish_1) {
          v_84 = true;
        } else {
          v_84 = self->pnr_6;
        };
        if (temp_ok_1) {
          r_6_St_13_Reheat = true;
        } else {
          r_6_St_13_Reheat = v_84;
        };
        v_327 = r_6_St_13_Reheat;
        if (finish_1) {
          v_83_1 = true;
        } else {
          v_83_1 = false;
        };
        if (temp_ok_1) {
          s_6_St_13_Reheat_1 = true;
        } else {
          s_6_St_13_Reheat_1 = v_83_1;
        };
        v_315 = s_6_St_13_Reheat_1;
        if (finish_1) {
          v_83_2 = false;
        } else {
          v_83_2 = false;
        };
        if (temp_ok_1) {
          s_6_St_13_Reheat_2 = true;
        } else {
          s_6_St_13_Reheat_2 = v_83_2;
        };
        v_316 = s_6_St_13_Reheat_2;
        if (finish_1) {
          v_83_3 = false;
        } else {
          v_83_3 = true;
        };
        if (temp_ok_1) {
          s_6_St_13_Reheat_3 = false;
        } else {
          s_6_St_13_Reheat_3 = v_83_3;
        };
        v_317 = s_6_St_13_Reheat_3;
        if (v_83_1) {
          v_83_2_1 = v_83_2;
          if (v_83_2_1) {
            v_83_3_1_1 = v_83_3;
          } else {
            v_83_3_1_0 = v_83_3;
          };
        } else {
          v_83_2_0 = v_83_2;
          if (v_83_2_0) {
            v_83_3_0_1 = v_83_3;
          } else {
            v_83_3_0_0 = v_83_3;
          };
        };
      } else {
        if (c_1) {
          r_6_St_13_Standby = true;
          s_6_St_13_Standby_1 = true;
          s_6_St_13_Standby_2 = true;
          s_6_St_13_Standby_3 = true;
        } else {
          r_6_St_13_Standby = self->pnr_6;
          s_6_St_13_Standby_1 = false;
          s_6_St_13_Standby_2 = false;
          s_6_St_13_Standby_3 = false;
        };
        v_327 = r_6_St_13_Standby;
        v_315 = s_6_St_13_Standby_1;
        v_316 = s_6_St_13_Standby_2;
        v_317 = s_6_St_13_Standby_3;
      };
      v_321 = v_315;
      v_322 = v_316;
      v_323 = v_317;
      v_328 = v_327;
    };
    s_6_1 = v_321;
    s_6_2 = v_322;
    s_6_3 = v_323;
    r_6 = v_328;
  };
  ck_13_1 = s_6_1;
  ck_13_2 = s_6_2;
  ck_13_3 = s_6_3;
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
    if (ck_13_2_1) {
      ck_13_3_1_1 = ck_13_3;
      if (ck_13_3_1_1) {
        power_2_St_13_Heat = 1500;
        nr_6_St_13_Heat = false;
        ns_6_St_13_Heat_1 = true;
        ns_6_St_13_Heat_2 = true;
        ns_6_St_13_Heat_3 = true;
        v_281 = power_2_St_13_Heat;
        v_301 = nr_6_St_13_Heat;
        v_286 = ns_6_St_13_Heat_1;
        v_287 = ns_6_St_13_Heat_2;
        v_288 = ns_6_St_13_Heat_3;
      } else {
        power_2_St_13_Maintain = 300;
        v_281 = power_2_St_13_Maintain;
        nr_6_St_13_Maintain = false;
        v_301 = nr_6_St_13_Maintain;
        ns_6_St_13_Maintain_1 = true;
        v_286 = ns_6_St_13_Maintain_1;
        ns_6_St_13_Maintain_2 = true;
        v_287 = ns_6_St_13_Maintain_2;
        ns_6_St_13_Maintain_3 = false;
        v_288 = ns_6_St_13_Maintain_3;
      };
      v_283 = v_281;
      v_295 = v_286;
      v_296 = v_287;
      v_297 = v_288;
      v_303 = v_301;
      if (ck_13_3_1_1) {
        if (ns_6_St_13_Heat_1) {
          ns_6_St_13_Heat_2_1 = ns_6_St_13_Heat_2;
          if (ns_6_St_13_Heat_2_1) {
            ns_6_St_13_Heat_3_1_1 = ns_6_St_13_Heat_3;
          } else {
            ns_6_St_13_Heat_3_1_0 = ns_6_St_13_Heat_3;
          };
        } else {
          ns_6_St_13_Heat_2_0 = ns_6_St_13_Heat_2;
          if (ns_6_St_13_Heat_2_0) {
            ns_6_St_13_Heat_3_0_1 = ns_6_St_13_Heat_3;
          } else {
            ns_6_St_13_Heat_3_0_0 = ns_6_St_13_Heat_3;
          };
        };
      } else {
        if (ns_6_St_13_Maintain_1) {
          ns_6_St_13_Maintain_2_1 = ns_6_St_13_Maintain_2;
          if (ns_6_St_13_Maintain_2_1) {
            ns_6_St_13_Maintain_3_1_1 = ns_6_St_13_Maintain_3;
          } else {
            ns_6_St_13_Maintain_3_1_0 = ns_6_St_13_Maintain_3;
          };
        } else {
          ns_6_St_13_Maintain_2_0 = ns_6_St_13_Maintain_2;
          if (ns_6_St_13_Maintain_2_0) {
            ns_6_St_13_Maintain_3_0_1 = ns_6_St_13_Maintain_3;
          } else {
            ns_6_St_13_Maintain_3_0_0 = ns_6_St_13_Maintain_3;
          };
        };
      };
    } else {
      ck_13_3_1_0 = ck_13_3;
      if (ck_13_3_1_0) {
        v_282 = 0;
        v_302 = true;
        v_289 = true;
        v_290 = true;
        v_291 = true;
      } else {
        power_2_St_13_Off = 0;
        v_282 = power_2_St_13_Off;
        nr_6_St_13_Off = false;
        v_302 = nr_6_St_13_Off;
        ns_6_St_13_Off_1 = true;
        v_289 = ns_6_St_13_Off_1;
        ns_6_St_13_Off_2 = false;
        v_290 = ns_6_St_13_Off_2;
        ns_6_St_13_Off_3 = false;
        v_291 = ns_6_St_13_Off_3;
        if (ns_6_St_13_Off_1) {
          ns_6_St_13_Off_2_1 = ns_6_St_13_Off_2;
          if (ns_6_St_13_Off_2_1) {
            ns_6_St_13_Off_3_1_1 = ns_6_St_13_Off_3;
          } else {
            ns_6_St_13_Off_3_1_0 = ns_6_St_13_Off_3;
          };
        } else {
          ns_6_St_13_Off_2_0 = ns_6_St_13_Off_2;
          if (ns_6_St_13_Off_2_0) {
            ns_6_St_13_Off_3_0_1 = ns_6_St_13_Off_3;
          } else {
            ns_6_St_13_Off_3_0_0 = ns_6_St_13_Off_3;
          };
        };
      };
      v_283 = v_282;
      v_295 = v_289;
      v_296 = v_290;
      v_297 = v_291;
      v_303 = v_302;
    };
    power_2 = v_283;
    ns_6_1 = v_295;
    ns_6_2 = v_296;
    ns_6_3 = v_297;
    nr_6 = v_303;
  } else {
    ck_13_2_0 = ck_13_2;
    if (ck_13_2_0) {
      ck_13_3_0_1 = ck_13_3;
      v_285 = 0;
      v_298 = true;
      v_299 = true;
      v_300 = true;
      v_305 = true;
    } else {
      ck_13_3_0_0 = ck_13_3;
      if (ck_13_3_0_0) {
        power_2_St_13_Reheat = 1000;
        v_284 = power_2_St_13_Reheat;
        nr_6_St_13_Reheat = false;
        v_304 = nr_6_St_13_Reheat;
        ns_6_St_13_Reheat_1 = false;
        v_292 = ns_6_St_13_Reheat_1;
        ns_6_St_13_Reheat_2 = false;
        v_293 = ns_6_St_13_Reheat_2;
        ns_6_St_13_Reheat_3 = true;
        v_294 = ns_6_St_13_Reheat_3;
      } else {
        power_2_St_13_Standby = 0;
        nr_6_St_13_Standby = false;
        ns_6_St_13_Standby_1 = false;
        ns_6_St_13_Standby_2 = false;
        ns_6_St_13_Standby_3 = false;
        v_284 = power_2_St_13_Standby;
        v_304 = nr_6_St_13_Standby;
        v_292 = ns_6_St_13_Standby_1;
        v_293 = ns_6_St_13_Standby_2;
        v_294 = ns_6_St_13_Standby_3;
      };
      v_285 = v_284;
      v_298 = v_292;
      v_299 = v_293;
      v_300 = v_294;
      v_305 = v_304;
    };
    power_2 = v_285;
    ns_6_1 = v_298;
    ns_6_2 = v_299;
    ns_6_3 = v_300;
    nr_6 = v_305;
  };
  _out->power_oven = power_2;
  if (ns_6_1) {
    ns_6_2_1 = ns_6_2;
    if (ns_6_2_1) {
      ns_6_3_1_1 = ns_6_3;
    } else {
      ns_6_3_1_0 = ns_6_3;
    };
  } else {
    ns_6_2_0 = ns_6_2;
    if (ns_6_2_0) {
      ns_6_3_0_1 = ns_6_3;
    } else {
      ns_6_3_0_0 = ns_6_3;
    };
  };
  if (!(ck_13_1)) {
    if (!(ck_13_2_0)) {
      if (ck_13_3_0_0) {
        if (ns_6_St_13_Reheat_1) {
          ns_6_St_13_Reheat_2_1 = ns_6_St_13_Reheat_2;
          if (ns_6_St_13_Reheat_2_1) {
            ns_6_St_13_Reheat_3_1_1 = ns_6_St_13_Reheat_3;
          } else {
            ns_6_St_13_Reheat_3_1_0 = ns_6_St_13_Reheat_3;
          };
        } else {
          ns_6_St_13_Reheat_2_0 = ns_6_St_13_Reheat_2;
          if (ns_6_St_13_Reheat_2_0) {
            ns_6_St_13_Reheat_3_0_1 = ns_6_St_13_Reheat_3;
          } else {
            ns_6_St_13_Reheat_3_0_0 = ns_6_St_13_Reheat_3;
          };
        };
      } else {
        if (ns_6_St_13_Standby_1) {
          ns_6_St_13_Standby_2_1 = ns_6_St_13_Standby_2;
          if (ns_6_St_13_Standby_2_1) {
            ns_6_St_13_Standby_3_1_1 = ns_6_St_13_Standby_3;
          } else {
            ns_6_St_13_Standby_3_1_0 = ns_6_St_13_Standby_3;
          };
        } else {
          ns_6_St_13_Standby_2_0 = ns_6_St_13_Standby_2;
          if (ns_6_St_13_Standby_2_0) {
            ns_6_St_13_Standby_3_0_1 = ns_6_St_13_Standby_3;
          } else {
            ns_6_St_13_Standby_3_0_0 = ns_6_St_13_Standby_3;
          };
        };
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
    if (s_6_2_1) {
      s_6_3_1_1 = s_6_3;
    } else {
      s_6_3_1_0 = s_6_3;
    };
  } else {
    s_6_2_0 = s_6_2;
    if (s_6_2_0) {
      s_6_3_0_1 = s_6_3;
    } else {
      s_6_3_0_0 = s_6_3;
    };
  };
  if (!(ck_12_1)) {
    if (!(ck_12_2_0)) {
      if (ck_12_3_0_0) {
        if (s_6_St_13_Reheat_1) {
          s_6_St_13_Reheat_2_1 = s_6_St_13_Reheat_2;
          if (s_6_St_13_Reheat_2_1) {
            s_6_St_13_Reheat_3_1_1 = s_6_St_13_Reheat_3;
          } else {
            s_6_St_13_Reheat_3_1_0 = s_6_St_13_Reheat_3;
          };
        } else {
          s_6_St_13_Reheat_2_0 = s_6_St_13_Reheat_2;
          if (s_6_St_13_Reheat_2_0) {
            s_6_St_13_Reheat_3_0_1 = s_6_St_13_Reheat_3;
          } else {
            s_6_St_13_Reheat_3_0_0 = s_6_St_13_Reheat_3;
          };
        };
      } else {
        if (s_6_St_13_Standby_1) {
          s_6_St_13_Standby_2_1 = s_6_St_13_Standby_2;
          if (s_6_St_13_Standby_2_1) {
            s_6_St_13_Standby_3_1_1 = s_6_St_13_Standby_3;
          } else {
            s_6_St_13_Standby_3_1_0 = s_6_St_13_Standby_3;
          };
        } else {
          s_6_St_13_Standby_2_0 = s_6_St_13_Standby_2;
          if (s_6_St_13_Standby_2_0) {
            s_6_St_13_Standby_3_0_1 = s_6_St_13_Standby_3;
          } else {
            s_6_St_13_Standby_3_0_0 = s_6_St_13_Standby_3;
          };
        };
      };
    };
  };
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      ck_10_3_1_1 = ck_10_3;
      if (ck_10_3_1_1) {
        if (start) {
          r_7_St_14_Off = true;
          s_7_St_14_Off_1 = false;
          s_7_St_14_Off_2 = false;
          s_7_St_14_Off_3 = false;
        } else {
          r_7_St_14_Off = self->pnr_7;
          s_7_St_14_Off_1 = true;
          s_7_St_14_Off_2 = true;
          s_7_St_14_Off_3 = true;
        };
        v_380 = r_7_St_14_Off;
        v_362 = s_7_St_14_Off_1;
        v_363 = s_7_St_14_Off_2;
        v_364 = s_7_St_14_Off_3;
        if (s_7_St_14_Off_1) {
          s_7_St_14_Off_2_1 = s_7_St_14_Off_2;
          if (s_7_St_14_Off_2_1) {
            s_7_St_14_Off_3_1_1 = s_7_St_14_Off_3;
          } else {
            s_7_St_14_Off_3_1_0 = s_7_St_14_Off_3;
          };
        } else {
          s_7_St_14_Off_2_0 = s_7_St_14_Off_2;
          if (s_7_St_14_Off_2_0) {
            s_7_St_14_Off_3_0_1 = s_7_St_14_Off_3;
          } else {
            s_7_St_14_Off_3_0_0 = s_7_St_14_Off_3;
          };
        };
      } else {
        if (end_wm_1) {
          r_7_St_14_Rinse = true;
        } else {
          r_7_St_14_Rinse = self->pnr_7;
        };
        v_380 = r_7_St_14_Rinse;
        if (end_wm_1) {
          s_7_St_14_Rinse_1 = true;
        } else {
          s_7_St_14_Rinse_1 = true;
        };
        v_362 = s_7_St_14_Rinse_1;
        if (end_wm_1) {
          s_7_St_14_Rinse_2 = false;
        } else {
          s_7_St_14_Rinse_2 = true;
        };
        v_363 = s_7_St_14_Rinse_2;
        if (end_wm_1) {
          s_7_St_14_Rinse_3 = false;
        } else {
          s_7_St_14_Rinse_3 = false;
        };
        v_364 = s_7_St_14_Rinse_3;
        if (s_7_St_14_Rinse_1) {
          s_7_St_14_Rinse_2_1 = s_7_St_14_Rinse_2;
          if (s_7_St_14_Rinse_2_1) {
            s_7_St_14_Rinse_3_1_1 = s_7_St_14_Rinse_3;
          } else {
            s_7_St_14_Rinse_3_1_0 = s_7_St_14_Rinse_3;
          };
        } else {
          s_7_St_14_Rinse_2_0 = s_7_St_14_Rinse_2;
          if (s_7_St_14_Rinse_2_0) {
            s_7_St_14_Rinse_3_0_1 = s_7_St_14_Rinse_3;
          } else {
            s_7_St_14_Rinse_3_0_0 = s_7_St_14_Rinse_3;
          };
        };
      };
      v_374 = v_362;
      v_375 = v_363;
      v_376 = v_364;
      v_382 = v_380;
    } else {
      ck_10_3_1_0 = ck_10_3;
      if (ck_10_3_1_0) {
        v_381 = true;
        v_365 = true;
        v_366 = true;
        v_367 = true;
      } else {
        if (end_wm_1) {
          r_7_St_14_Spin = true;
        } else {
          r_7_St_14_Spin = self->pnr_7;
        };
        v_381 = r_7_St_14_Spin;
        if (end_wm_1) {
          s_7_St_14_Spin_1 = true;
        } else {
          s_7_St_14_Spin_1 = true;
        };
        v_365 = s_7_St_14_Spin_1;
        if (end_wm_1) {
          s_7_St_14_Spin_2 = true;
        } else {
          s_7_St_14_Spin_2 = false;
        };
        v_366 = s_7_St_14_Spin_2;
        if (end_wm_1) {
          s_7_St_14_Spin_3 = true;
        } else {
          s_7_St_14_Spin_3 = false;
        };
        v_367 = s_7_St_14_Spin_3;
      };
      v_374 = v_365;
      v_375 = v_366;
      v_376 = v_367;
      v_382 = v_381;
      if (!(ck_10_3_1_0)) {
        if (s_7_St_14_Spin_1) {
          s_7_St_14_Spin_2_1 = s_7_St_14_Spin_2;
          if (s_7_St_14_Spin_2_1) {
            s_7_St_14_Spin_3_1_1 = s_7_St_14_Spin_3;
          } else {
            s_7_St_14_Spin_3_1_0 = s_7_St_14_Spin_3;
          };
        } else {
          s_7_St_14_Spin_2_0 = s_7_St_14_Spin_2;
          if (s_7_St_14_Spin_2_0) {
            s_7_St_14_Spin_3_0_1 = s_7_St_14_Spin_3;
          } else {
            s_7_St_14_Spin_3_0_0 = s_7_St_14_Spin_3;
          };
        };
      };
    };
    s_7_1 = v_374;
    s_7_2 = v_375;
    s_7_3 = v_376;
    r_7 = v_382;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      ck_10_3_0_1 = ck_10_3;
      if (ck_10_3_0_1) {
        if (c) {
          r_7_St_14_Standby = true;
        } else {
          r_7_St_14_Standby = self->pnr_7;
        };
        v_383 = r_7_St_14_Standby;
        if (c) {
          s_7_St_14_Standby_1 = false;
        } else {
          s_7_St_14_Standby_1 = false;
        };
        v_368 = s_7_St_14_Standby_1;
        if (c) {
          s_7_St_14_Standby_2 = true;
        } else {
          s_7_St_14_Standby_2 = true;
        };
        v_369 = s_7_St_14_Standby_2;
        if (c) {
          s_7_St_14_Standby_3 = false;
        } else {
          s_7_St_14_Standby_3 = true;
        };
        v_370 = s_7_St_14_Standby_3;
      } else {
        if (end_wm_1) {
          r_7_St_14_Washing = true;
          s_7_St_14_Washing_1 = true;
          s_7_St_14_Washing_2 = true;
          s_7_St_14_Washing_3 = false;
        } else {
          r_7_St_14_Washing = self->pnr_7;
          s_7_St_14_Washing_1 = false;
          s_7_St_14_Washing_2 = true;
          s_7_St_14_Washing_3 = false;
        };
        v_383 = r_7_St_14_Washing;
        v_368 = s_7_St_14_Washing_1;
        v_369 = s_7_St_14_Washing_2;
        v_370 = s_7_St_14_Washing_3;
      };
      v_377 = v_368;
      v_378 = v_369;
      v_379 = v_370;
      v_385 = v_383;
    } else {
      ck_10_3_0_0 = ck_10_3;
      if (ck_10_3_0_0) {
        v_384 = true;
        v_371 = true;
        v_372 = true;
        v_373 = true;
      } else {
        v_79 = !(c);
        v_80 = (end_wm_1&&v_79);
        if (v_80) {
          v_82 = true;
          v_81_1 = false;
          v_81_2 = true;
          v_81_3 = true;
        } else {
          v_82 = self->pnr_7;
          v_81_1 = false;
          v_81_2 = false;
          v_81_3 = false;
        };
        v_78 = (end_wm_1&&c);
        if (v_78) {
          r_7_St_14_WaterFill = true;
        } else {
          r_7_St_14_WaterFill = v_82;
        };
        v_384 = r_7_St_14_WaterFill;
        if (v_78) {
          s_7_St_14_WaterFill_1 = false;
        } else {
          s_7_St_14_WaterFill_1 = v_81_1;
        };
        v_371 = s_7_St_14_WaterFill_1;
        if (v_78) {
          s_7_St_14_WaterFill_2 = true;
        } else {
          s_7_St_14_WaterFill_2 = v_81_2;
        };
        v_372 = s_7_St_14_WaterFill_2;
        if (v_78) {
          s_7_St_14_WaterFill_3 = false;
        } else {
          s_7_St_14_WaterFill_3 = v_81_3;
        };
        v_373 = s_7_St_14_WaterFill_3;
        if (v_81_1) {
          v_81_2_1 = v_81_2;
          if (v_81_2_1) {
            v_81_3_1_1 = v_81_3;
          } else {
            v_81_3_1_0 = v_81_3;
          };
        } else {
          v_81_2_0 = v_81_2;
          if (v_81_2_0) {
            v_81_3_0_1 = v_81_3;
          } else {
            v_81_3_0_0 = v_81_3;
          };
        };
        if (s_7_St_14_WaterFill_1) {
          s_7_St_14_WaterFill_2_1 = s_7_St_14_WaterFill_2;
          if (s_7_St_14_WaterFill_2_1) {
            s_7_St_14_WaterFill_3_1_1 = s_7_St_14_WaterFill_3;
          } else {
            s_7_St_14_WaterFill_3_1_0 = s_7_St_14_WaterFill_3;
          };
        } else {
          s_7_St_14_WaterFill_2_0 = s_7_St_14_WaterFill_2;
          if (s_7_St_14_WaterFill_2_0) {
            s_7_St_14_WaterFill_3_0_1 = s_7_St_14_WaterFill_3;
          } else {
            s_7_St_14_WaterFill_3_0_0 = s_7_St_14_WaterFill_3;
          };
        };
      };
      v_377 = v_371;
      v_378 = v_372;
      v_379 = v_373;
      v_385 = v_384;
    };
    s_7_1 = v_377;
    s_7_2 = v_378;
    s_7_3 = v_379;
    r_7 = v_385;
  };
  ck_11_1 = s_7_1;
  ck_11_2 = s_7_2;
  ck_11_3 = s_7_3;
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      ck_11_3_1_1 = ck_11_3;
      if (ck_11_3_1_1) {
        power_1_St_14_Off = 0;
        nr_7_St_14_Off = false;
        ns_7_St_14_Off_1 = true;
        ns_7_St_14_Off_2 = true;
        ns_7_St_14_Off_3 = true;
        v_329 = power_1_St_14_Off;
        v_353 = nr_7_St_14_Off;
        v_335 = ns_7_St_14_Off_1;
        v_336 = ns_7_St_14_Off_2;
        v_337 = ns_7_St_14_Off_3;
        if (ns_7_St_14_Off_1) {
          ns_7_St_14_Off_2_1 = ns_7_St_14_Off_2;
          if (ns_7_St_14_Off_2_1) {
            ns_7_St_14_Off_3_1_1 = ns_7_St_14_Off_3;
          } else {
            ns_7_St_14_Off_3_1_0 = ns_7_St_14_Off_3;
          };
        } else {
          ns_7_St_14_Off_2_0 = ns_7_St_14_Off_2;
          if (ns_7_St_14_Off_2_0) {
            ns_7_St_14_Off_3_0_1 = ns_7_St_14_Off_3;
          } else {
            ns_7_St_14_Off_3_0_0 = ns_7_St_14_Off_3;
          };
        };
      } else {
        power_1_St_14_Rinse = 200;
        v_329 = power_1_St_14_Rinse;
        nr_7_St_14_Rinse = false;
        v_353 = nr_7_St_14_Rinse;
        ns_7_St_14_Rinse_1 = true;
        v_335 = ns_7_St_14_Rinse_1;
        ns_7_St_14_Rinse_2 = true;
        v_336 = ns_7_St_14_Rinse_2;
        ns_7_St_14_Rinse_3 = false;
        v_337 = ns_7_St_14_Rinse_3;
        if (ns_7_St_14_Rinse_1) {
          ns_7_St_14_Rinse_2_1 = ns_7_St_14_Rinse_2;
          if (ns_7_St_14_Rinse_2_1) {
            ns_7_St_14_Rinse_3_1_1 = ns_7_St_14_Rinse_3;
          } else {
            ns_7_St_14_Rinse_3_1_0 = ns_7_St_14_Rinse_3;
          };
        } else {
          ns_7_St_14_Rinse_2_0 = ns_7_St_14_Rinse_2;
          if (ns_7_St_14_Rinse_2_0) {
            ns_7_St_14_Rinse_3_0_1 = ns_7_St_14_Rinse_3;
          } else {
            ns_7_St_14_Rinse_3_0_0 = ns_7_St_14_Rinse_3;
          };
        };
      };
      v_331 = v_329;
      v_347 = v_335;
      v_348 = v_336;
      v_349 = v_337;
      v_355 = v_353;
    } else {
      ck_11_3_1_0 = ck_11_3;
      if (ck_11_3_1_0) {
        v_330 = 0;
        v_354 = true;
        v_338 = true;
        v_339 = true;
        v_340 = true;
      } else {
        power_1_St_14_Spin = 800;
        v_330 = power_1_St_14_Spin;
        nr_7_St_14_Spin = false;
        v_354 = nr_7_St_14_Spin;
        ns_7_St_14_Spin_1 = true;
        v_338 = ns_7_St_14_Spin_1;
        ns_7_St_14_Spin_2 = false;
        v_339 = ns_7_St_14_Spin_2;
        ns_7_St_14_Spin_3 = false;
        v_340 = ns_7_St_14_Spin_3;
      };
      v_331 = v_330;
      v_347 = v_338;
      v_348 = v_339;
      v_349 = v_340;
      v_355 = v_354;
      if (!(ck_11_3_1_0)) {
        if (ns_7_St_14_Spin_1) {
          ns_7_St_14_Spin_2_1 = ns_7_St_14_Spin_2;
          if (ns_7_St_14_Spin_2_1) {
            ns_7_St_14_Spin_3_1_1 = ns_7_St_14_Spin_3;
          } else {
            ns_7_St_14_Spin_3_1_0 = ns_7_St_14_Spin_3;
          };
        } else {
          ns_7_St_14_Spin_2_0 = ns_7_St_14_Spin_2;
          if (ns_7_St_14_Spin_2_0) {
            ns_7_St_14_Spin_3_0_1 = ns_7_St_14_Spin_3;
          } else {
            ns_7_St_14_Spin_3_0_0 = ns_7_St_14_Spin_3;
          };
        };
      };
    };
    power_1 = v_331;
    ns_7_1 = v_347;
    ns_7_2 = v_348;
    ns_7_3 = v_349;
    nr_7 = v_355;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      ck_11_3_0_1 = ck_11_3;
      if (ck_11_3_0_1) {
        power_1_St_14_Standby = 0;
        v_332 = power_1_St_14_Standby;
        nr_7_St_14_Standby = false;
        v_356 = nr_7_St_14_Standby;
        ns_7_St_14_Standby_1 = false;
        v_341 = ns_7_St_14_Standby_1;
        ns_7_St_14_Standby_2 = true;
        v_342 = ns_7_St_14_Standby_2;
        ns_7_St_14_Standby_3 = true;
        v_343 = ns_7_St_14_Standby_3;
      } else {
        power_1_St_14_Washing = 250;
        nr_7_St_14_Washing = false;
        ns_7_St_14_Washing_1 = false;
        ns_7_St_14_Washing_2 = true;
        ns_7_St_14_Washing_3 = false;
        v_332 = power_1_St_14_Washing;
        v_356 = nr_7_St_14_Washing;
        v_341 = ns_7_St_14_Washing_1;
        v_342 = ns_7_St_14_Washing_2;
        v_343 = ns_7_St_14_Washing_3;
      };
      v_334 = v_332;
      v_350 = v_341;
      v_351 = v_342;
      v_352 = v_343;
      v_358 = v_356;
    } else {
      ck_11_3_0_0 = ck_11_3;
      if (ck_11_3_0_0) {
        v_333 = 0;
        v_357 = true;
        v_344 = true;
        v_345 = true;
        v_346 = true;
      } else {
        power_1_St_14_WaterFill = 15;
        v_333 = power_1_St_14_WaterFill;
        nr_7_St_14_WaterFill = false;
        v_357 = nr_7_St_14_WaterFill;
        ns_7_St_14_WaterFill_1 = false;
        v_344 = ns_7_St_14_WaterFill_1;
        ns_7_St_14_WaterFill_2 = false;
        v_345 = ns_7_St_14_WaterFill_2;
        ns_7_St_14_WaterFill_3 = false;
        v_346 = ns_7_St_14_WaterFill_3;
        if (ns_7_St_14_WaterFill_1) {
          ns_7_St_14_WaterFill_2_1 = ns_7_St_14_WaterFill_2;
          if (ns_7_St_14_WaterFill_2_1) {
            ns_7_St_14_WaterFill_3_1_1 = ns_7_St_14_WaterFill_3;
          } else {
            ns_7_St_14_WaterFill_3_1_0 = ns_7_St_14_WaterFill_3;
          };
        } else {
          ns_7_St_14_WaterFill_2_0 = ns_7_St_14_WaterFill_2;
          if (ns_7_St_14_WaterFill_2_0) {
            ns_7_St_14_WaterFill_3_0_1 = ns_7_St_14_WaterFill_3;
          } else {
            ns_7_St_14_WaterFill_3_0_0 = ns_7_St_14_WaterFill_3;
          };
        };
      };
      v_334 = v_333;
      v_350 = v_344;
      v_351 = v_345;
      v_352 = v_346;
      v_358 = v_357;
    };
    power_1 = v_334;
    ns_7_1 = v_350;
    ns_7_2 = v_351;
    ns_7_3 = v_352;
    nr_7 = v_358;
  };
  _out->power_wm = power_1;
  if (ns_7_1) {
    ns_7_2_1 = ns_7_2;
    if (ns_7_2_1) {
      ns_7_3_1_1 = ns_7_3;
    } else {
      ns_7_3_1_0 = ns_7_3;
    };
  } else {
    ns_7_2_0 = ns_7_2;
    if (ns_7_2_0) {
      ns_7_3_0_1 = ns_7_3;
    } else {
      ns_7_3_0_0 = ns_7_3;
    };
  };
  if (!(ck_11_1)) {
    if (ck_11_2_0) {
      if (ck_11_3_0_1) {
        if (ns_7_St_14_Standby_1) {
          ns_7_St_14_Standby_2_1 = ns_7_St_14_Standby_2;
          if (ns_7_St_14_Standby_2_1) {
            ns_7_St_14_Standby_3_1_1 = ns_7_St_14_Standby_3;
          } else {
            ns_7_St_14_Standby_3_1_0 = ns_7_St_14_Standby_3;
          };
        } else {
          ns_7_St_14_Standby_2_0 = ns_7_St_14_Standby_2;
          if (ns_7_St_14_Standby_2_0) {
            ns_7_St_14_Standby_3_0_1 = ns_7_St_14_Standby_3;
          } else {
            ns_7_St_14_Standby_3_0_0 = ns_7_St_14_Standby_3;
          };
        };
      } else {
        if (ns_7_St_14_Washing_1) {
          ns_7_St_14_Washing_2_1 = ns_7_St_14_Washing_2;
          if (ns_7_St_14_Washing_2_1) {
            ns_7_St_14_Washing_3_1_1 = ns_7_St_14_Washing_3;
          } else {
            ns_7_St_14_Washing_3_1_0 = ns_7_St_14_Washing_3;
          };
        } else {
          ns_7_St_14_Washing_2_0 = ns_7_St_14_Washing_2;
          if (ns_7_St_14_Washing_2_0) {
            ns_7_St_14_Washing_3_0_1 = ns_7_St_14_Washing_3;
          } else {
            ns_7_St_14_Washing_3_0_0 = ns_7_St_14_Washing_3;
          };
        };
      };
    };
  };
  if (s_7_1) {
    s_7_2_1 = s_7_2;
    if (s_7_2_1) {
      s_7_3_1_1 = s_7_3;
    } else {
      s_7_3_1_0 = s_7_3;
    };
  } else {
    s_7_2_0 = s_7_2;
    if (s_7_2_0) {
      s_7_3_0_1 = s_7_3;
    } else {
      s_7_3_0_0 = s_7_3;
    };
  };
  if (!(ck_10_1)) {
    if (ck_10_2_0) {
      if (ck_10_3_0_1) {
        if (s_7_St_14_Standby_1) {
          s_7_St_14_Standby_2_1 = s_7_St_14_Standby_2;
          if (s_7_St_14_Standby_2_1) {
            s_7_St_14_Standby_3_1_1 = s_7_St_14_Standby_3;
          } else {
            s_7_St_14_Standby_3_1_0 = s_7_St_14_Standby_3;
          };
        } else {
          s_7_St_14_Standby_2_0 = s_7_St_14_Standby_2;
          if (s_7_St_14_Standby_2_0) {
            s_7_St_14_Standby_3_0_1 = s_7_St_14_Standby_3;
          } else {
            s_7_St_14_Standby_3_0_0 = s_7_St_14_Standby_3;
          };
        };
      } else {
        if (s_7_St_14_Washing_1) {
          s_7_St_14_Washing_2_1 = s_7_St_14_Washing_2;
          if (s_7_St_14_Washing_2_1) {
            s_7_St_14_Washing_3_1_1 = s_7_St_14_Washing_3;
          } else {
            s_7_St_14_Washing_3_1_0 = s_7_St_14_Washing_3;
          };
        } else {
          s_7_St_14_Washing_2_0 = s_7_St_14_Washing_2;
          if (s_7_St_14_Washing_2_0) {
            s_7_St_14_Washing_3_0_1 = s_7_St_14_Washing_3;
          } else {
            s_7_St_14_Washing_3_0_0 = s_7_St_14_Washing_3;
          };
        };
      };
    };
  };
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      v_67 = !(c1);
      v_68 = (down1_1||v_67);
      if (v_68) {
        v_70 = true;
        v_69_1 = true;
        v_69_2 = false;
      } else {
        v_70 = self->pnr_8;
        v_69_1 = true;
        v_69_2 = true;
      };
      v_66 = (up2_1&&c2);
      if (v_66) {
        r_8_St_15_Eco = true;
      } else {
        r_8_St_15_Eco = v_70;
      };
      v_404 = r_8_St_15_Eco;
      if (v_66) {
        s_8_St_15_Eco_1 = false;
      } else {
        s_8_St_15_Eco_1 = v_69_1;
      };
      v_400 = s_8_St_15_Eco_1;
      if (v_66) {
        s_8_St_15_Eco_2 = true;
      } else {
        s_8_St_15_Eco_2 = v_69_2;
      };
      v_401 = s_8_St_15_Eco_2;
      if (v_69_1) {
        v_69_2_1 = v_69_2;
      } else {
        v_69_2_0 = v_69_2;
      };
      if (s_8_St_15_Eco_1) {
        s_8_St_15_Eco_2_1 = s_8_St_15_Eco_2;
      } else {
        s_8_St_15_Eco_2_0 = s_8_St_15_Eco_2;
      };
    } else {
      v_72 = !(c1);
      v_73 = (down1_1||v_72);
      if (v_73) {
        v_75 = true;
        v_74_1 = false;
        v_74_2 = false;
      } else {
        v_75 = self->pnr_8;
        v_74_1 = true;
        v_74_2 = false;
      };
      v_71 = (up1_1&&c1);
      if (v_71) {
        r_8_St_15_FrostProtection = true;
        s_8_St_15_FrostProtection_1 = true;
        s_8_St_15_FrostProtection_2 = true;
      } else {
        r_8_St_15_FrostProtection = v_75;
        s_8_St_15_FrostProtection_1 = v_74_1;
        s_8_St_15_FrostProtection_2 = v_74_2;
      };
      v_404 = r_8_St_15_FrostProtection;
      v_400 = s_8_St_15_FrostProtection_1;
      v_401 = s_8_St_15_FrostProtection_2;
      if (v_74_1) {
        v_74_2_1 = v_74_2;
      } else {
        v_74_2_0 = v_74_2;
      };
      if (s_8_St_15_FrostProtection_1) {
        s_8_St_15_FrostProtection_2_1 = s_8_St_15_FrostProtection_2;
      } else {
        s_8_St_15_FrostProtection_2_0 = s_8_St_15_FrostProtection_2;
      };
    };
    s_8_1 = v_400;
    s_8_2 = v_401;
    r_8 = v_404;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      v_62 = !(c2);
      v_63 = (down2_1||v_62);
      if (v_63) {
        v_65 = true;
        v_64_1 = true;
        v_64_2 = false;
      } else {
        v_65 = self->pnr_8;
        v_64_1 = false;
        v_64_2 = true;
      };
      v_60 = !(c1);
      v_61 = (down1_1||v_60);
      if (v_61) {
        r_8_St_15_High = true;
      } else {
        r_8_St_15_High = v_65;
      };
      v_405 = r_8_St_15_High;
      if (v_61) {
        s_8_St_15_High_1 = true;
      } else {
        s_8_St_15_High_1 = v_64_1;
      };
      v_402 = s_8_St_15_High_1;
      if (v_61) {
        s_8_St_15_High_2 = true;
      } else {
        s_8_St_15_High_2 = v_64_2;
      };
      v_403 = s_8_St_15_High_2;
    } else {
      v_76 = !(c1);
      v_77 = (up1_1||v_76);
      if (v_77) {
        r_8_St_15_Off = true;
        s_8_St_15_Off_1 = true;
        s_8_St_15_Off_2 = false;
      } else {
        r_8_St_15_Off = self->pnr_8;
        s_8_St_15_Off_1 = false;
        s_8_St_15_Off_2 = false;
      };
      v_405 = r_8_St_15_Off;
      v_402 = s_8_St_15_Off_1;
      v_403 = s_8_St_15_Off_2;
    };
    s_8_1 = v_402;
    s_8_2 = v_403;
    r_8 = v_405;
  };
  ck_9_1 = s_8_1;
  ck_9_2 = s_8_2;
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      power_St_15_Eco = 1500;
      v_386 = power_St_15_Eco;
      rad_off_1_St_15_Eco = false;
      v_388 = rad_off_1_St_15_Eco;
      rad_frost_1_St_15_Eco = false;
      v_390 = rad_frost_1_St_15_Eco;
      nr_8_St_15_Eco = false;
      v_396 = nr_8_St_15_Eco;
      ns_8_St_15_Eco_1 = true;
      v_392 = ns_8_St_15_Eco_1;
      ns_8_St_15_Eco_2 = true;
      v_393 = ns_8_St_15_Eco_2;
      if (ns_8_St_15_Eco_1) {
        ns_8_St_15_Eco_2_1 = ns_8_St_15_Eco_2;
      } else {
        ns_8_St_15_Eco_2_0 = ns_8_St_15_Eco_2;
      };
    } else {
      power_St_15_FrostProtection = 300;
      rad_off_1_St_15_FrostProtection = false;
      rad_frost_1_St_15_FrostProtection = true;
      nr_8_St_15_FrostProtection = false;
      ns_8_St_15_FrostProtection_1 = true;
      ns_8_St_15_FrostProtection_2 = false;
      v_386 = power_St_15_FrostProtection;
      v_388 = rad_off_1_St_15_FrostProtection;
      v_390 = rad_frost_1_St_15_FrostProtection;
      v_396 = nr_8_St_15_FrostProtection;
      v_392 = ns_8_St_15_FrostProtection_1;
      v_393 = ns_8_St_15_FrostProtection_2;
      if (ns_8_St_15_FrostProtection_1) {
        ns_8_St_15_FrostProtection_2_1 = ns_8_St_15_FrostProtection_2;
      } else {
        ns_8_St_15_FrostProtection_2_0 = ns_8_St_15_FrostProtection_2;
      };
    };
    power = v_386;
    rad_off_1 = v_388;
    rad_frost_1 = v_390;
    ns_8_1 = v_392;
    ns_8_2 = v_393;
    nr_8 = v_396;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      power_St_15_High = 2000;
      v_387 = power_St_15_High;
      rad_off_1_St_15_High = false;
      v_389 = rad_off_1_St_15_High;
      rad_frost_1_St_15_High = false;
      v_391 = rad_frost_1_St_15_High;
      nr_8_St_15_High = false;
      v_397 = nr_8_St_15_High;
      ns_8_St_15_High_1 = false;
      v_394 = ns_8_St_15_High_1;
      ns_8_St_15_High_2 = true;
      v_395 = ns_8_St_15_High_2;
    } else {
      power_St_15_Off = 0;
      rad_off_1_St_15_Off = true;
      rad_frost_1_St_15_Off = false;
      nr_8_St_15_Off = false;
      ns_8_St_15_Off_1 = false;
      ns_8_St_15_Off_2 = false;
      v_387 = power_St_15_Off;
      v_389 = rad_off_1_St_15_Off;
      v_391 = rad_frost_1_St_15_Off;
      v_397 = nr_8_St_15_Off;
      v_394 = ns_8_St_15_Off_1;
      v_395 = ns_8_St_15_Off_2;
    };
    power = v_387;
    rad_off_1 = v_389;
    rad_frost_1 = v_391;
    ns_8_1 = v_394;
    ns_8_2 = v_395;
    nr_8 = v_397;
  };
  _out->rad_frost = rad_frost_1;
  _out->rad_off = rad_off_1;
  v_46 = (_out->rad_off||_out->rad_frost);
  v_47 = (v_45&&v_46);
  r4 = (_out->room_oc||v_47);
  v_50 = (_out->rad_off||_out->rad_frost);
  r3 = (v_49||v_50);
  v_57 = (v_56&&r3);
  v_58 = (v_57&&r4);
  _out->power_rad = power;
  v_55 = (_out->power_rad+_out->power_wm);
  totalPower = (v_55+_out->power_oven);
  if (ck_1) {
    if (ck_2_1) {
      r5_Comfort_out = (totalPower<=7000);
      v_262 = r5_Comfort_out;
    } else {
      r5_Eco_out = (totalPower<=5000);
      v_262 = r5_Eco_out;
    };
    r5 = v_262;
  } else {
    if (ck_2_0) {
      v_261 = true;
    } else {
      r5_MinimalSafety_out = (totalPower<=3000);
      v_261 = r5_MinimalSafety_out;
    };
    r5 = v_261;
  };
  v_59 = (v_58&&r5);
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
  } else {
    ns_8_2_0 = ns_8_2;
  };
  if (!(ck_9_1)) {
    if (ck_9_2_0) {
      if (ns_8_St_15_High_1) {
        ns_8_St_15_High_2_1 = ns_8_St_15_High_2;
      } else {
        ns_8_St_15_High_2_0 = ns_8_St_15_High_2;
      };
    } else {
      if (ns_8_St_15_Off_1) {
        ns_8_St_15_Off_2_1 = ns_8_St_15_Off_2;
      } else {
        ns_8_St_15_Off_2_0 = ns_8_St_15_Off_2;
      };
    };
  };
  if (s_8_1) {
    s_8_2_1 = s_8_2;
  } else {
    s_8_2_0 = s_8_2;
  };
  if (!(ck_8_1)) {
    if (ck_8_2_0) {
      if (v_64_1) {
        v_64_2_1 = v_64_2;
      } else {
        v_64_2_0 = v_64_2;
      };
      if (s_8_St_15_High_1) {
        s_8_St_15_High_2_1 = s_8_St_15_High_2;
      } else {
        s_8_St_15_High_2_0 = s_8_St_15_High_2;
      };
    } else {
      if (s_8_St_15_Off_1) {
        s_8_St_15_Off_2_1 = s_8_St_15_Off_2;
      } else {
        s_8_St_15_Off_2_0 = s_8_St_15_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_273 = ns_1_2;
  self->v_274 = ns_2_2;
  self->pnr_1 = nr_1;
  self->ck_22_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_20_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_18_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_16_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_14_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->v_306 = ns_6_1;
  self->v_307 = ns_6_2;
  self->v_308 = ns_6_3;
  self->pnr_7 = nr_7;
  self->v_359 = ns_7_1;
  self->v_360 = ns_7_2;
  self->v_361 = ns_7_3;
  self->pnr_8 = nr_8;
  self->v_398 = ns_8_1;
  self->v_399 = ns_8_2;;
}

