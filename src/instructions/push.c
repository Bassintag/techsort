/*
** push.c for Pushswap in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/src/instructions
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov  8 11:08:53 2016 Antoine Stempfer
** Last update Tue Nov  8 15:01:33 2016 Antoine Stempfer
*/

#include <stdlib.h>
#include "list.h"

static void	push(t_list **dest, t_list **src)
{
  t_list	*dest_prev;
  t_list	*dest_next;

  if ((*dest) == NULL)
      dest_prev = (*src);
  else
      dest_prev = (*dest)->prev;
  if ((*dest) == NULL)
    dest_next = (*src);
  else
    dest_next = (*dest);
  (*dest) = (*src);
  if ((*src)->next == (*src))
      (*src) = NULL;
  else
    {
      (*src)->prev->next = (*src)->next;
      (*src)->next->prev = (*src)->prev;
      (*src) = (*src)->next;
    }
  dest_prev->next = (*dest);
  dest_next->prev = (*dest);
  (*dest)->next = dest_next;
  (*dest)->prev = dest_prev;
}

void	push_a(t_list **la, t_list **lb)
{
  push(la, lb);
}

void	push_b(t_list **la, t_list **lb)
{
  push(lb, la);
}
