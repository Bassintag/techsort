/*
** instruct_add.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip/src/techsort
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 13:47:23 2016 Antoine Stempfer
** Last update Tue Nov 15 18:23:54 2016 Antoine Stempfer
*/

#include "techsort.h"

void	instruct_add(t_env *env, t_instruct_tkn tkn)
{
  int	amount;
  int	slot;

  amount = get_referred_value(env, tkn, 0);
  slot = get_referred_value(env, tkn, 1);
  env->vars[slot] += amount;
}
