/*
** techsort.h for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 11:03:22 2016 Antoine Stempfer
** Last update Tue Nov 15 21:53:10 2016 Antoine Stempfer
*/

#ifndef TECHSORT_H_
#define TECHSORT_H_

#include "list.h"

#define NUM_VARS		10
#define NUM_INSTRUCTS		17
#define NUM_ALIAS		13

#define ALLOW_TIMEOUT		1
#define STEPS_BEFORE_TIMEOUT	10000

typedef	struct	s_env
{
  int		reader;
  int		*vars;
  t_list	*la;
  t_list	*lb;
  int		cmds;
}		t_env;

typedef struct	s_instruct
{
  char		*label;
  void		(*func)();
}		t_instruct;

#define ADDR_MOD_DIR		0
#define ADDR_MOD_REF		1

#define MODS_PER_INSTRUCT	2

typedef struct	s_instruct_tkn
{
  t_instruct   	instruct;
  char		addr_mod[MODS_PER_INSTRUCT];
  int		mod[MODS_PER_INSTRUCT];
}		t_instruct_tkn;

typedef struct	s_program
{
  t_instruct_tkn	*instructs;
  int			count;
}		t_program;

void	instruct_run(t_env *, t_instruct_tkn);
void	instruct_add(t_env *, t_instruct_tkn);
void	instruct_sub(t_env *, t_instruct_tkn);
void	instruct_set(t_env *, t_instruct_tkn);
void	instruct_jmp(t_env *, t_instruct_tkn);
void	instruct_jle(t_env *, t_instruct_tkn);
void	instruct_jlg(t_env *, t_instruct_tkn);
void	instruct_jls(t_env *, t_instruct_tkn);
void	instruct_jae(t_env *, t_instruct_tkn);
void	instruct_jbe(t_env *, t_instruct_tkn);
void	instruct_jaf(t_env *, t_instruct_tkn);
void	instruct_jbf(t_env *, t_instruct_tkn);
void	instruct_jve(t_env *, t_instruct_tkn);
void	instruct_jvg(t_env *, t_instruct_tkn);
void	instruct_jvs(t_env *, t_instruct_tkn);
void	instruct_jas(t_env *, t_instruct_tkn);
void	instruct_jbs(t_env *, t_instruct_tkn);

int	get_referred_value(t_env *, t_instruct_tkn, int);

#endif
