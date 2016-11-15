/*
** techsort_instruct.h for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 12:27:19 2016 Antoine Stempfer
** Last update Tue Nov 15 21:52:11 2016 Antoine Stempfer
*/

#ifndef TECHSORT_INSTRUCT_H_
#define TECHSORT_INSTRUCT_H_

#include "techsort.h"

const t_instruct	instructions[NUM_INSTRUCTS] = {
  {"run", &instruct_run},
  {"add", &instruct_add},
  {"sub", &instruct_sub},
  {"set", &instruct_set},
  {"jmp", &instruct_jmp},
  {"jle", &instruct_jle},
  {"jlg", &instruct_jlg},
  {"jls", &instruct_jls},
  {"jae", &instruct_jae},
  {"jbe", &instruct_jbe},
  {"jaf", &instruct_jaf},
  {"jbf", &instruct_jbf},
  {"jve", &instruct_jve},
  {"jvg", &instruct_jvg},
  {"jvs", &instruct_jvs},
  {"jas", &instruct_jas},
  {"jbs", &instruct_jbs}
};

#endif
