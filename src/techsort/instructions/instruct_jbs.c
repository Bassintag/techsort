/*
** instruct_jbs.c for Pushswap-wip in /home/antoine.stempfer/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 21:59:35 2016 Antoine Stempfer
** Last update Tue Nov 15 22:00:24 2016 Antoine Stempfer
*/

#include "techsort.h"

void	instruct_jbs(t_env *env, t_instruct_tkn tkn)
{
  t_list	*start;
  t_list	*curr;
  t_list	*prev;

  start = env->lb;
  prev = start;
  curr = start->next;
  while (curr != start)
    {
      if (*((int *)curr->value) < *((int *)prev->value))
	return ;
      prev = curr;
      curr = curr->next;
    }
  env->reader += get_referred_value(env, tkn, 0) - 1;
}
