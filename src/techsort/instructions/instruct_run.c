/*
** instruct_run.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip/src/techsort
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 13:46:43 2016 Antoine Stempfer
** Last update Tue Nov 15 20:45:27 2016 Antoine Stempfer
*/

#include "techsort.h"
#include "interpreter.h"
#include "techsort_alias.h"

void	instruct_run(t_env *env, t_instruct_tkn tkn)
{
  char	*cmd;
  int	flag;

  flag = FLAG_NORMAL;
  if (env->cmds == 0)
    flag |= FLAG_BEGIN;
  cmd = alias[get_referred_value(env, tkn, 0)];
  run(cmd, &(env->la), &(env->lb), flag);
  env->cmds += 1;
}
