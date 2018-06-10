/* --- Generated the 9/6/2018 at 21:12 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s alltasks zao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "zao_types.h"

Zao__st_15 Zao__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Off")==0)) {
    return Zao__St_15_Off;
  };
  if ((strcmp(s, "St_15_High")==0)) {
    return Zao__St_15_High;
  };
  if ((strcmp(s, "St_15_FrostProtection")==0)) {
    return Zao__St_15_FrostProtection;
  };
  if ((strcmp(s, "St_15_Eco")==0)) {
    return Zao__St_15_Eco;
  };
}

char* string_of_Zao__st_15(Zao__st_15 x, char* buf) {
  switch (x) {
    case Zao__St_15_Off:
      strcpy(buf, "St_15_Off");
      break;
    case Zao__St_15_High:
      strcpy(buf, "St_15_High");
      break;
    case Zao__St_15_FrostProtection:
      strcpy(buf, "St_15_FrostProtection");
      break;
    case Zao__St_15_Eco:
      strcpy(buf, "St_15_Eco");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_14 Zao__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_WaterFill")==0)) {
    return Zao__St_14_WaterFill;
  };
  if ((strcmp(s, "St_14_Washing")==0)) {
    return Zao__St_14_Washing;
  };
  if ((strcmp(s, "St_14_Standby")==0)) {
    return Zao__St_14_Standby;
  };
  if ((strcmp(s, "St_14_Spin")==0)) {
    return Zao__St_14_Spin;
  };
  if ((strcmp(s, "St_14_Rinse")==0)) {
    return Zao__St_14_Rinse;
  };
  if ((strcmp(s, "St_14_Off")==0)) {
    return Zao__St_14_Off;
  };
}

char* string_of_Zao__st_14(Zao__st_14 x, char* buf) {
  switch (x) {
    case Zao__St_14_WaterFill:
      strcpy(buf, "St_14_WaterFill");
      break;
    case Zao__St_14_Washing:
      strcpy(buf, "St_14_Washing");
      break;
    case Zao__St_14_Standby:
      strcpy(buf, "St_14_Standby");
      break;
    case Zao__St_14_Spin:
      strcpy(buf, "St_14_Spin");
      break;
    case Zao__St_14_Rinse:
      strcpy(buf, "St_14_Rinse");
      break;
    case Zao__St_14_Off:
      strcpy(buf, "St_14_Off");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_13 Zao__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_Standby")==0)) {
    return Zao__St_13_Standby;
  };
  if ((strcmp(s, "St_13_Reheat")==0)) {
    return Zao__St_13_Reheat;
  };
  if ((strcmp(s, "St_13_Off")==0)) {
    return Zao__St_13_Off;
  };
  if ((strcmp(s, "St_13_Maintain")==0)) {
    return Zao__St_13_Maintain;
  };
  if ((strcmp(s, "St_13_Heat")==0)) {
    return Zao__St_13_Heat;
  };
}

char* string_of_Zao__st_13(Zao__st_13 x, char* buf) {
  switch (x) {
    case Zao__St_13_Standby:
      strcpy(buf, "St_13_Standby");
      break;
    case Zao__St_13_Reheat:
      strcpy(buf, "St_13_Reheat");
      break;
    case Zao__St_13_Off:
      strcpy(buf, "St_13_Off");
      break;
    case Zao__St_13_Maintain:
      strcpy(buf, "St_13_Maintain");
      break;
    case Zao__St_13_Heat:
      strcpy(buf, "St_13_Heat");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_12 Zao__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Open")==0)) {
    return Zao__St_12_Open;
  };
  if ((strcmp(s, "St_12_Closed")==0)) {
    return Zao__St_12_Closed;
  };
}

char* string_of_Zao__st_12(Zao__st_12 x, char* buf) {
  switch (x) {
    case Zao__St_12_Open:
      strcpy(buf, "St_12_Open");
      break;
    case Zao__St_12_Closed:
      strcpy(buf, "St_12_Closed");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_11 Zao__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Open")==0)) {
    return Zao__St_11_Open;
  };
  if ((strcmp(s, "St_11_Closed")==0)) {
    return Zao__St_11_Closed;
  };
}

char* string_of_Zao__st_11(Zao__st_11 x, char* buf) {
  switch (x) {
    case Zao__St_11_Open:
      strcpy(buf, "St_11_Open");
      break;
    case Zao__St_11_Closed:
      strcpy(buf, "St_11_Closed");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_10 Zao__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Onn")==0)) {
    return Zao__St_10_Onn;
  };
  if ((strcmp(s, "St_10_Off")==0)) {
    return Zao__St_10_Off;
  };
}

char* string_of_Zao__st_10(Zao__st_10 x, char* buf) {
  switch (x) {
    case Zao__St_10_Onn:
      strcpy(buf, "St_10_Onn");
      break;
    case Zao__St_10_Off:
      strcpy(buf, "St_10_Off");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_9 Zao__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Onn")==0)) {
    return Zao__St_9_Onn;
  };
  if ((strcmp(s, "St_9_Off")==0)) {
    return Zao__St_9_Off;
  };
}

char* string_of_Zao__st_9(Zao__st_9 x, char* buf) {
  switch (x) {
    case Zao__St_9_Onn:
      strcpy(buf, "St_9_Onn");
      break;
    case Zao__St_9_Off:
      strcpy(buf, "St_9_Off");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_8 Zao__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Ocupied")==0)) {
    return Zao__St_8_Ocupied;
  };
  if ((strcmp(s, "St_8_Empty")==0)) {
    return Zao__St_8_Empty;
  };
}

char* string_of_Zao__st_8(Zao__st_8 x, char* buf) {
  switch (x) {
    case Zao__St_8_Ocupied:
      strcpy(buf, "St_8_Ocupied");
      break;
    case Zao__St_8_Empty:
      strcpy(buf, "St_8_Empty");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_7 Zao__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_MinimalSafety")==0)) {
    return Zao__St_7_MinimalSafety;
  };
  if ((strcmp(s, "St_7_Eco")==0)) {
    return Zao__St_7_Eco;
  };
  if ((strcmp(s, "St_7_Comfort")==0)) {
    return Zao__St_7_Comfort;
  };
}

char* string_of_Zao__st_7(Zao__st_7 x, char* buf) {
  switch (x) {
    case Zao__St_7_MinimalSafety:
      strcpy(buf, "St_7_MinimalSafety");
      break;
    case Zao__St_7_Eco:
      strcpy(buf, "St_7_Eco");
      break;
    case Zao__St_7_Comfort:
      strcpy(buf, "St_7_Comfort");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_6 Zao__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_MinimalSafety")==0)) {
    return Zao__St_6_MinimalSafety;
  };
  if ((strcmp(s, "St_6_Eco")==0)) {
    return Zao__St_6_Eco;
  };
  if ((strcmp(s, "St_6_Comfort")==0)) {
    return Zao__St_6_Comfort;
  };
}

char* string_of_Zao__st_6(Zao__st_6 x, char* buf) {
  switch (x) {
    case Zao__St_6_MinimalSafety:
      strcpy(buf, "St_6_MinimalSafety");
      break;
    case Zao__St_6_Eco:
      strcpy(buf, "St_6_Eco");
      break;
    case Zao__St_6_Comfort:
      strcpy(buf, "St_6_Comfort");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_5 Zao__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Ocupied")==0)) {
    return Zao__St_5_Ocupied;
  };
  if ((strcmp(s, "St_5_Empty")==0)) {
    return Zao__St_5_Empty;
  };
}

char* string_of_Zao__st_5(Zao__st_5 x, char* buf) {
  switch (x) {
    case Zao__St_5_Ocupied:
      strcpy(buf, "St_5_Ocupied");
      break;
    case Zao__St_5_Empty:
      strcpy(buf, "St_5_Empty");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_4 Zao__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Onn")==0)) {
    return Zao__St_4_Onn;
  };
  if ((strcmp(s, "St_4_Off")==0)) {
    return Zao__St_4_Off;
  };
}

char* string_of_Zao__st_4(Zao__st_4 x, char* buf) {
  switch (x) {
    case Zao__St_4_Onn:
      strcpy(buf, "St_4_Onn");
      break;
    case Zao__St_4_Off:
      strcpy(buf, "St_4_Off");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_3 Zao__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Open")==0)) {
    return Zao__St_3_Open;
  };
  if ((strcmp(s, "St_3_Closed")==0)) {
    return Zao__St_3_Closed;
  };
}

char* string_of_Zao__st_3(Zao__st_3 x, char* buf) {
  switch (x) {
    case Zao__St_3_Open:
      strcpy(buf, "St_3_Open");
      break;
    case Zao__St_3_Closed:
      strcpy(buf, "St_3_Closed");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_2 Zao__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Standby")==0)) {
    return Zao__St_2_Standby;
  };
  if ((strcmp(s, "St_2_Reheat")==0)) {
    return Zao__St_2_Reheat;
  };
  if ((strcmp(s, "St_2_Off")==0)) {
    return Zao__St_2_Off;
  };
  if ((strcmp(s, "St_2_Maintain")==0)) {
    return Zao__St_2_Maintain;
  };
  if ((strcmp(s, "St_2_Heat")==0)) {
    return Zao__St_2_Heat;
  };
}

char* string_of_Zao__st_2(Zao__st_2 x, char* buf) {
  switch (x) {
    case Zao__St_2_Standby:
      strcpy(buf, "St_2_Standby");
      break;
    case Zao__St_2_Reheat:
      strcpy(buf, "St_2_Reheat");
      break;
    case Zao__St_2_Off:
      strcpy(buf, "St_2_Off");
      break;
    case Zao__St_2_Maintain:
      strcpy(buf, "St_2_Maintain");
      break;
    case Zao__St_2_Heat:
      strcpy(buf, "St_2_Heat");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st_1 Zao__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_WaterFill")==0)) {
    return Zao__St_1_WaterFill;
  };
  if ((strcmp(s, "St_1_Washing")==0)) {
    return Zao__St_1_Washing;
  };
  if ((strcmp(s, "St_1_Standby")==0)) {
    return Zao__St_1_Standby;
  };
  if ((strcmp(s, "St_1_Spin")==0)) {
    return Zao__St_1_Spin;
  };
  if ((strcmp(s, "St_1_Rinse")==0)) {
    return Zao__St_1_Rinse;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return Zao__St_1_Off;
  };
}

char* string_of_Zao__st_1(Zao__st_1 x, char* buf) {
  switch (x) {
    case Zao__St_1_WaterFill:
      strcpy(buf, "St_1_WaterFill");
      break;
    case Zao__St_1_Washing:
      strcpy(buf, "St_1_Washing");
      break;
    case Zao__St_1_Standby:
      strcpy(buf, "St_1_Standby");
      break;
    case Zao__St_1_Spin:
      strcpy(buf, "St_1_Spin");
      break;
    case Zao__St_1_Rinse:
      strcpy(buf, "St_1_Rinse");
      break;
    case Zao__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    default:
      break;
  };
  return buf;
}

Zao__st Zao__st_of_string(char* s) {
  if ((strcmp(s, "St_Off")==0)) {
    return Zao__St_Off;
  };
  if ((strcmp(s, "St_High")==0)) {
    return Zao__St_High;
  };
  if ((strcmp(s, "St_FrostProtection")==0)) {
    return Zao__St_FrostProtection;
  };
  if ((strcmp(s, "St_Eco")==0)) {
    return Zao__St_Eco;
  };
}

char* string_of_Zao__st(Zao__st x, char* buf) {
  switch (x) {
    case Zao__St_Off:
      strcpy(buf, "St_Off");
      break;
    case Zao__St_High:
      strcpy(buf, "St_High");
      break;
    case Zao__St_FrostProtection:
      strcpy(buf, "St_FrostProtection");
      break;
    case Zao__St_Eco:
      strcpy(buf, "St_Eco");
      break;
    default:
      break;
  };
  return buf;
}

Zao__mpswitch Zao__mpswitch_of_string(char* s) {
  if ((strcmp(s, "MinimalSafety_out")==0)) {
    return Zao__MinimalSafety_out;
  };
  if ((strcmp(s, "Eco_out")==0)) {
    return Zao__Eco_out;
  };
  if ((strcmp(s, "Comfort_out")==0)) {
    return Zao__Comfort_out;
  };
}

char* string_of_Zao__mpswitch(Zao__mpswitch x, char* buf) {
  switch (x) {
    case Zao__MinimalSafety_out:
      strcpy(buf, "MinimalSafety_out");
      break;
    case Zao__Eco_out:
      strcpy(buf, "Eco_out");
      break;
    case Zao__Comfort_out:
      strcpy(buf, "Comfort_out");
      break;
    default:
      break;
  };
  return buf;
}

