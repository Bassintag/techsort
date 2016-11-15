/*
** instruct_jmp.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip/src/techsort
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 13:49:55 2016 Antoine Stempfer
** Last update Tue Nov 15 18:22:03 2016 Antoine Stempfer
*/

#include "techsort.h"

void	instruct_jmp(t_env *env, t_instruct_tkn tkn)
{
  int	jump;

  jump = get_referred_value(env, tkn, 0) - 1;
  env->reader += jump;
}
