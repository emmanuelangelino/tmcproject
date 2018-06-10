/* --- Generated the 9/6/2018 at 21:12 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s alltasks zao.ept --- */

#ifndef ZAO_TYPES_H
#define ZAO_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "alltasks_controller.h"
typedef enum {
  Zao__St_15_Off,
  Zao__St_15_High,
  Zao__St_15_FrostProtection,
  Zao__St_15_Eco
} Zao__st_15;

Zao__st_15 Zao__st_15_of_string(char* s);

char* string_of_Zao__st_15(Zao__st_15 x, char* buf);

typedef enum {
  Zao__St_14_WaterFill,
  Zao__St_14_Washing,
  Zao__St_14_Standby,
  Zao__St_14_Spin,
  Zao__St_14_Rinse,
  Zao__St_14_Off
} Zao__st_14;

Zao__st_14 Zao__st_14_of_string(char* s);

char* string_of_Zao__st_14(Zao__st_14 x, char* buf);

typedef enum {
  Zao__St_13_Standby,
  Zao__St_13_Reheat,
  Zao__St_13_Off,
  Zao__St_13_Maintain,
  Zao__St_13_Heat
} Zao__st_13;

Zao__st_13 Zao__st_13_of_string(char* s);

char* string_of_Zao__st_13(Zao__st_13 x, char* buf);

typedef enum {
  Zao__St_12_Open,
  Zao__St_12_Closed
} Zao__st_12;

Zao__st_12 Zao__st_12_of_string(char* s);

char* string_of_Zao__st_12(Zao__st_12 x, char* buf);

typedef enum {
  Zao__St_11_Open,
  Zao__St_11_Closed
} Zao__st_11;

Zao__st_11 Zao__st_11_of_string(char* s);

char* string_of_Zao__st_11(Zao__st_11 x, char* buf);

typedef enum {
  Zao__St_10_Onn,
  Zao__St_10_Off
} Zao__st_10;

Zao__st_10 Zao__st_10_of_string(char* s);

char* string_of_Zao__st_10(Zao__st_10 x, char* buf);

typedef enum {
  Zao__St_9_Onn,
  Zao__St_9_Off
} Zao__st_9;

Zao__st_9 Zao__st_9_of_string(char* s);

char* string_of_Zao__st_9(Zao__st_9 x, char* buf);

typedef enum {
  Zao__St_8_Ocupied,
  Zao__St_8_Empty
} Zao__st_8;

Zao__st_8 Zao__st_8_of_string(char* s);

char* string_of_Zao__st_8(Zao__st_8 x, char* buf);

typedef enum {
  Zao__St_7_MinimalSafety,
  Zao__St_7_Eco,
  Zao__St_7_Comfort
} Zao__st_7;

Zao__st_7 Zao__st_7_of_string(char* s);

char* string_of_Zao__st_7(Zao__st_7 x, char* buf);

typedef enum {
  Zao__St_6_MinimalSafety,
  Zao__St_6_Eco,
  Zao__St_6_Comfort
} Zao__st_6;

Zao__st_6 Zao__st_6_of_string(char* s);

char* string_of_Zao__st_6(Zao__st_6 x, char* buf);

typedef enum {
  Zao__St_5_Ocupied,
  Zao__St_5_Empty
} Zao__st_5;

Zao__st_5 Zao__st_5_of_string(char* s);

char* string_of_Zao__st_5(Zao__st_5 x, char* buf);

typedef enum {
  Zao__St_4_Onn,
  Zao__St_4_Off
} Zao__st_4;

Zao__st_4 Zao__st_4_of_string(char* s);

char* string_of_Zao__st_4(Zao__st_4 x, char* buf);

typedef enum {
  Zao__St_3_Open,
  Zao__St_3_Closed
} Zao__st_3;

Zao__st_3 Zao__st_3_of_string(char* s);

char* string_of_Zao__st_3(Zao__st_3 x, char* buf);

typedef enum {
  Zao__St_2_Standby,
  Zao__St_2_Reheat,
  Zao__St_2_Off,
  Zao__St_2_Maintain,
  Zao__St_2_Heat
} Zao__st_2;

Zao__st_2 Zao__st_2_of_string(char* s);

char* string_of_Zao__st_2(Zao__st_2 x, char* buf);

typedef enum {
  Zao__St_1_WaterFill,
  Zao__St_1_Washing,
  Zao__St_1_Standby,
  Zao__St_1_Spin,
  Zao__St_1_Rinse,
  Zao__St_1_Off
} Zao__st_1;

Zao__st_1 Zao__st_1_of_string(char* s);

char* string_of_Zao__st_1(Zao__st_1 x, char* buf);

typedef enum {
  Zao__St_Off,
  Zao__St_High,
  Zao__St_FrostProtection,
  Zao__St_Eco
} Zao__st;

Zao__st Zao__st_of_string(char* s);

char* string_of_Zao__st(Zao__st x, char* buf);

typedef enum {
  Zao__MinimalSafety_out,
  Zao__Eco_out,
  Zao__Comfort_out
} Zao__mpswitch;

Zao__mpswitch Zao__mpswitch_of_string(char* s);

char* string_of_Zao__mpswitch(Zao__mpswitch x, char* buf);

#endif // ZAO_TYPES_H
