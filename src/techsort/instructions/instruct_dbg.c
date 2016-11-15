/*
** instruct_dbg.c for Pushswap-wip in /home/antoine.stempfer/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 23:27:52 2016 Antoine Stempfer
** Last update Tue Nov 15 23:32:00 2016 Antoine Stempfer
*/

#include "techsort.h"
#include "my.h"

void		instruct_dbg(t_env *env, t_instruct_tkn tkn)
{
  int		val1;
  int		val2;

  val1 = get_referred_value(env, tkn, 0);
  val2 = get_referred_value(env, tkn, 1);
  my_putstr("[DBG] val1: ");
  my_put_nbr(val1);
  my_putstr(", val2: ");
  my_put_nbr(val2);
  my_putchar('\n');
}
