/*
** swap.c for Pushswap in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/src/instructions
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov  8 10:35:40 2016 Antoine Stempfer
** Last update Wed Nov  9 13:01:39 2016 Antoine Stempfer
*/

#include "list.h"

static	void	swap(t_list **la)
{
  t_list	*prev;
  t_list	*next;

  prev = (*la)->prev;
  next = (*la)->next;
  prev->next = next;
  (*la)->next = next->next;
  (*la)->prev = next;
  next->next = (*la);
  next->prev = prev;
  *la = next;
}

void	swap_a(t_list **la, t_list **lb __attribute__ ((unused)))
{
  swap(la);
}

void	swap_b(t_list **la __attribute__ ((unused)), t_list **lb)
{
  swap(lb);
}

void	swap_c(t_list **la, t_list **lb)
{
  swap(la);
  swap(lb);
}
