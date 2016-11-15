/*
** instructions.h for Pushswap in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/include
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov  8 10:10:20 2016 Antoine Stempfer
** Last update Tue Nov 15 19:18:17 2016 Antoine Stempfer
*/

#ifndef INSTRUCTIONS_H_
#define INSTRUCTIONS_H_

#include "list.h"

void	swap_a(t_list **, t_list **);

void	swap_b(t_list **, t_list **);

void	swap_c(t_list **, t_list **);

void	push_a(t_list **, t_list **);

void	push_b(t_list **, t_list **);

void	rotate_a(t_list **, t_list **);

void	rotate_b(t_list **, t_list **);

void	rotate_r(t_list **, t_list **);

void	rotate_reverse_a(t_list **, t_list **);

void	rotate_reverse_b(t_list **, t_list **);

void	rotate_reverse_r(t_list **, t_list **);

struct	s_instruction
{
  char	*title;
  void	(*func)(t_list **, t_list **);
};

#define NUM_INSTRUCTIONS 11

static struct s_instruction	instructions[NUM_INSTRUCTIONS] = {
  {"sa", &swap_a},
  {"sb", &swap_b},
  {"sc", &swap_c},
  {"pa", &push_a},
  {"pb", &push_b},
  {"ra", &rotate_a},
  {"rb", &rotate_b},
  {"rr", &rotate_r},
  {"rra", &rotate_reverse_a},
  {"rrb", &rotate_reverse_b},
  {"rrr", &rotate_reverse_r}
};

#endif
