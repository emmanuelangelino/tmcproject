/* --- Generated the 9/6/2018 at 21:12 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s alltasks zao.ept --- */

#ifndef ZAO_H
#define ZAO_H

#include "zao_types.h"
#include "alltasks_controller.h"
typedef struct Zao__rad_mem {
  int v_131;
  int v_130;
  int pnr;
} Zao__rad_mem;

typedef struct Zao__rad_out {
  int power;
  int rad_off;
  int rad_frost;
} Zao__rad_out;

void Zao__rad_reset(Zao__rad_mem* self);

void Zao__rad_step(int up1, int down1, int up2, int down2, int c1, int c2,
                   Zao__rad_out* _out, Zao__rad_mem* self);

typedef struct Zao__wm_mem {
  int v_170;
  int v_169;
  int v_168;
  int pnr;
} Zao__wm_mem;

typedef struct Zao__wm_out {
  int power;
} Zao__wm_out;

void Zao__wm_reset(Zao__wm_mem* self);

void Zao__wm_step(int end_wm, int start, int c, Zao__wm_out* _out,
                  Zao__wm_mem* self);

typedef struct Zao__oven_mem {
  int v_222;
  int v_221;
  int v_220;
  int pnr;
} Zao__oven_mem;

typedef struct Zao__oven_out {
  int power;
} Zao__oven_out;

void Zao__oven_reset(Zao__oven_mem* self);

void Zao__oven_step(int start, int c, int finish, int temp_ok, int cold,
                    Zao__oven_out* _out, Zao__oven_mem* self);

typedef struct Zao__door_mem {
  int ck_1;
  int pnr;
} Zao__door_mem;

typedef struct Zao__door_out {
  int door_open;
} Zao__door_out;

void Zao__door_reset(Zao__door_mem* self);

void Zao__door_step(int push, int c_door, Zao__door_out* _out,
                    Zao__door_mem* self);

typedef struct Zao__lamp_mem {
  int ck_1;
  int pnr;
} Zao__lamp_mem;

typedef struct Zao__lamp_out {
  int lamp_on;
} Zao__lamp_out;

void Zao__lamp_reset(Zao__lamp_mem* self);

void Zao__lamp_step(int turn, int c1, int c2, Zao__lamp_out* _out,
                    Zao__lamp_mem* self);

typedef struct Zao__room_mem {
  int ck_1;
  int pnr;
} Zao__room_mem;

typedef struct Zao__room_out {
  int room_oc;
} Zao__room_out;

void Zao__room_reset(Zao__room_mem* self);

void Zao__room_step(int presence, Zao__room_out* _out, Zao__room_mem* self);

typedef struct Zao__mp_mem {
  int v_254;
  int v_253;
  int pnr;
} Zao__mp_mem;

typedef struct Zao__mp_out {
  int pl_2;
  int pl_1;
} Zao__mp_out;

void Zao__mp_reset(Zao__mp_mem* self);

void Zao__mp_step(int eco_input, int comfort_input, Zao__mp_out* _out,
                  Zao__mp_mem* self);

typedef struct Zao__alltasks_mem {
  int v_274;
  int v_273;
  int ck_22_1;
  int ck_20_1;
  int ck_18_1;
  int ck_16_1;
  int ck_14_1;
  int v_308;
  int v_307;
  int v_306;
  int v_361;
  int v_360;
  int v_359;
  int v_399;
  int v_398;
  int pnr_8;
  int pnr_7;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Zao__alltasks_mem;

typedef struct Zao__alltasks_out {
  int power_rad;
  int power_wm;
  int power_oven;
  int rad_off;
  int rad_frost;
  int door_open;
  int window_open;
  int lamp_on;
  int tv_on;
  int room_oc;
  int pl_2;
  int pl_1_1;
} Zao__alltasks_out;

void Zao__alltasks_reset(Zao__alltasks_mem* self);

void Zao__alltasks_step(int up1, int down1, int up2, int down2, int end_wm,
                        int start_wm, int start_oven, int finish,
                        int temp_ok, int cold, int push, int turn,
                        int presence, int eco_input, int comfort_input,
                        Zao__alltasks_out* _out, Zao__alltasks_mem* self);

#endif // ZAO_H
