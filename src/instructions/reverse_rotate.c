/*
** reverse_rotate.c for Pushswap in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/src/instructions
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov  8 12:27:38 2016 Antoine Stempfer
** Last update Tue Nov  8 12:37:23 2016 Antoine Stempfer
*/

#include "list.h"

void	rotate_reverse_a(t_list **la, t_list **lb __attribute__ ((unused)))
{
  (*la) = (*la)->prev;
}

void	rotate_reverse_b(t_list **la __attribute__ ((unused)), t_list **lb)
{
  (*lb) = (*lb)->prev;
}

void	rotate_reverse_r(t_list **la, t_list **lb)
{
  (*la) = (*la)->prev;
  (*lb) = (*lb)->prev;
}
