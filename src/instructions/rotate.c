/*
** rotate.c for Pushswap in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/src/instructions
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov  8 12:24:28 2016 Antoine Stempfer
** Last update Tue Nov  8 12:36:26 2016 Antoine Stempfer
*/

#include "list.h"

void	rotate_a(t_list **la, t_list **lb __attribute__ ((unused)))
{
  (*la) = (*la)->next;
}

void	rotate_b(t_list **la __attribute__ ((unused)), t_list **lb)
{
  (*lb) = (*lb)->next;
}

void	rotate_r(t_list **la, t_list **lb)
{
  (*la) = (*la)->next;
  (*lb) = (*lb)->next;
}
