/*
** techsort_interpreter.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 16:51:34 2016 Antoine Stempfer
** Last update Tue Nov 15 18:58:58 2016 Antoine Stempfer
*/

#include <stdlib.h>
#include "techsort.h"
#include <stdio.h>

static t_env	create_env()
{
  t_env		env;
  int		i;

  i = 0;
  env.reader = 0;
  env.vars = malloc(sizeof(int) * NUM_VARS);
  while (i < NUM_VARS)
    {
      env.vars[i] = 0;
      i++;
    }
  return (env);
}

int	get_referred_value(t_env *env, t_instruct_tkn tkn, int slot)
{
  if (tkn.addr_mod[slot] == ADDR_MOD_DIR)
    return (tkn.mod[slot]);
  else
    return (env->vars[tkn.mod[0]] - 0);
}

void	execute_script(t_program prog)
{
  t_env	env;
  int	steps;

  env = create_env();
  printf("STARTING SCRIPT EXECUTION\n");
  steps = 0;
  while (env.reader < prog.count && env.reader >= 0 && steps < 2048)
    {
      prog.instructs[env.reader].instruct.func(&env,
					       prog.instructs[env.reader]);
      (env.reader)++;
      steps++;
    }
  if (steps == 2048)
    printf("ERROR: TIME OUT\n");
  free(env.vars);
  free(prog.instructs);
  printf("DONE EXECUTING SCRIPT\n");
}
