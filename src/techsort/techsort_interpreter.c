/*
** techsort_interpreter.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 16:51:34 2016 Antoine Stempfer
** Last update Tue Nov 15 23:06:23 2016 Antoine Stempfer
*/

#include <stdlib.h>
#include "techsort.h"
#include "my.h"

static t_env	create_env(char **argv, int argc)
{
  t_env		env;
  int		i;

  i = 0;
  env.reader = 0;
  env.vars = malloc(sizeof(int) * NUM_VARS);
  env.la = create_list(argc, argv, 2);
  env.lb = NULL;
  env.cmds = 0;
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
    return (env->vars[tkn.mod[slot]] - 0);
}

void	execute_script(t_program prog, char **argv, int argc)
{
  t_env	env;
  int	steps;

  env = create_env(argv, argc);
  steps = 0;
  while (env.reader < prog.count && env.reader >= 0 &&
	 (steps < STEPS_BEFORE_TIMEOUT && ALLOW_TIMEOUT))
    {
      prog.instructs[env.reader].instruct.func(&env,
					       prog.instructs[env.reader]);
      (env.reader)++;
      steps++;
    }
  my_putstr("\n");
  if (steps == STEPS_BEFORE_TIMEOUT)
    my_putstr("Stopped: Program timed out\n");
  else
    print_list(env.la);
  free_list(env.la);
  free_list(env.lb);
  free(env.vars);
  free(prog.instructs);
}
