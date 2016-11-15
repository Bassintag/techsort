/*
** instruct_jas.c for Pushswap-wip in /home/antoine.stempfer/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 21:53:47 2016 Antoine Stempfer
** Last update Tue Nov 15 22:00:17 2016 Antoine Stempfer
*/

#include "techsort.h"

void	instruct_jas(t_env *env, t_instruct_tkn tkn)
{
  t_list	*start;
  t_list	*curr;
  t_list	*prev;

  start = env->la;
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
