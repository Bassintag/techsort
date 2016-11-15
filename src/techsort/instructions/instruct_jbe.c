/*
** instruct_jbe.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip/src/techsort/instructions
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 15:34:33 2016 Antoine Stempfer
** Last update Tue Nov 15 21:07:19 2016 Antoine Stempfer
*/

#include "techsort.h"
#include <stdlib.h>

void	instruct_jbe(t_env *env, t_instruct_tkn tkn)
{
  int	jump;

  jump = get_referred_value(env, tkn, 0) - 1;
  if (env->lb == NULL)
    env->reader += jump;
}
