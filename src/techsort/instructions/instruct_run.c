/*
** instruct_run.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip/src/techsort
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 13:46:43 2016 Antoine Stempfer
** Last update Tue Nov 15 18:06:37 2016 Antoine Stempfer
*/

#include "techsort.h"
#include <stdio.h>

void	instruct_run(t_env *env, t_instruct_tkn tkn)
{
  printf("VAR #%i: %i\n", tkn.mod[0], env->vars[tkn.mod[0]]);
}
