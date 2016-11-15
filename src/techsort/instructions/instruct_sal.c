/*
** instruct_sal.c for Pushswap-wip in /home/antoine.stempfer/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 23:17:54 2016 Antoine Stempfer
** Last update Tue Nov 15 23:35:18 2016 Antoine Stempfer
*/

#include "techsort.h"

void		instruct_sal(t_env *env, t_instruct_tkn tkn)
{
  int		len;
  t_list	*start;
  t_list	*curr;

  start = env->la;
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
