/* --- Generated the 9/6/2018 at 21:12 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s alltasks zao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Zao__alltasks_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int up1;
  int down1;
  int up2;
  int down2;
  int end_wm;
  int start_wm;
  int start_oven;
  int finish;
  int temp_ok;
  int cold;
  int push;
  int turn;
  int presence;
  int eco_input;
  int comfort_input;
  Zao__alltasks_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Zao__alltasks_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("up1 ? ");
    scanf("%d", &up1);;
    
    printf("down1 ? ");
    scanf("%d", &down1);;
    
    printf("up2 ? ");
    scanf("%d", &up2);;
    
    printf("down2 ? ");
    scanf("%d", &down2);;
    
    printf("end_wm ? ");
    scanf("%d", &end_wm);;
    
    printf("start_wm ? ");
    scanf("%d", &start_wm);;
    
    printf("start_oven ? ");
    scanf("%d", &start_oven);;
    
    printf("finish ? ");
    scanf("%d", &finish);;
    
    printf("temp_ok ? ");
    scanf("%d", &temp_ok);;
    
    printf("cold ? ");
    scanf("%d", &cold);;
    
    printf("push ? ");
    scanf("%d", &push);;
    
    printf("turn ? ");
    scanf("%d", &turn);;
    
    printf("presence ? ");
    scanf("%d", &presence);;
    
    printf("eco_input ? ");
    scanf("%d", &eco_input);;
    
    printf("comfort_input ? ");
    scanf("%d", &comfort_input);;
    Zao__alltasks_step(up1, down1, up2, down2, end_wm, start_wm, start_oven,
                       finish, temp_ok, cold, push, turn, presence,
                       eco_input, comfort_input, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.power_rad);
    printf("=> ");
    printf("%d ", _res.power_wm);
    printf("=> ");
    printf("%d ", _res.power_oven);
    printf("=> ");
    printf("%d ", _res.rad_off);
    printf("=> ");
    printf("%d ", _res.rad_frost);
    printf("=> ");
    printf("%d ", _res.door_open);
    printf("=> ");
    printf("%d ", _res.window_open);
    printf("=> ");
    printf("%d ", _res.lamp_on);
    printf("=> ");
    printf("%d ", _res.tv_on);
    printf("=> ");
    printf("%d ", _res.room_oc);
    printf("=> ");
    printf("%d ", _res.pl_2);
    printf("=> ");
    printf("%d ", _res.pl_1_1);
    puts("");
    fflush(stdout);
  };
  return 0;
}

