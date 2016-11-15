/*
** instruct_sbl.c for Pushswap-wip in /home/antoine.stempfer/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 23:26:10 2016 Antoine Stempfer
** Last update Tue Nov 15 23:38:29 2016 Antoine Stempfer
*/

#include "techsort.h"

void		instruct_sbl(t_env *env, t_instruct_tkn tkn)
{
  int		len;
  t_list	*start;
  t_list	*curr;

  start = env->lb;
  len = 0;
  if (start)
    {
      curr = start->next;
      len++;
      while (start != curr)
	{
	  len++;
	  curr = curr->next;
	}
    }
  env->vars[get_referred_value(env, tkn, 0)] = len;
}
