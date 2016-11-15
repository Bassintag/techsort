/*
** list.h for Pushswap in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/include
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov  8 10:43:47 2016 Antoine Stempfer
** Last update Tue Nov 15 19:09:07 2016 Antoine Stempfer
*/

#ifndef LIST_H_
#define LIST_H_

typedef struct	s_list
{
  struct s_list	*next;
  struct s_list	*prev;
  void		*value;
}		t_list;

t_list	*create_list(int, char **, int);

void	free_list(t_list *);

void	print_list(t_list *);

#endif
