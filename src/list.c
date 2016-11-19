/*
** main.c for Pushswap in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/src
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov  8 12:30:51 2016 Antoine Stempfer
** Last update Sat Nov 19 16:58:16 2016 Antoine Stempfer
*/

#include <stdlib.h>
#include "interpreter.h"
#include "my.h"

t_list  	*create_list(int amount, char **args, int offset)
{
  t_list	*result;
  t_list	*temp;
  int		*val;

  result = NULL;
  while (--amount >= 0)
    {
      temp = malloc(sizeof(t_list));
      temp->next = temp;
      temp->prev = temp;
      val = malloc(sizeof(int));
      *val = my_getnbr(args[amount + offset]);
      temp->value = val;
      run("pa", &result, &temp, FLAG_NOPRINT);
    }
  return (result);
}

void		free_list(t_list *l)
{
  t_list	*next;
  t_list	*start;
  char		first;

  if (!l)
    return;
  start = l;
  first = 0;
  while (l != start || first == 0)
    {
      next = l->next;
      free(l->value);
      free(l);
      l = next;
      first = 1;
    }
}

void		print_list(t_list *l)
{
  t_list	*tmp;

  if (l)
    {
      tmp = l;
      my_put_nbr(*((int *)tmp->value));
      while ((tmp = tmp->next) != l)
	{
	  my_putstr(" - ");
	  my_put_nbr(*((int *)tmp->value));
	}
    }
  else
    my_putstr("EMPTY");
  my_putchar('\n');
}
