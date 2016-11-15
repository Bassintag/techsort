/*
** interpreter.c for Pushswap in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/src/instructions
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov  8 10:26:07 2016 Antoine Stempfer
** Last update Sun Nov 13 14:58:56 2016 Antoine Stempfer
*/

#include "instructions.h"
#include "interpreter.h"
#include "print.h"
#include "my.h"

static char	equal(char *str1, char *str2)
{
  if (*str1 != *str2)
    return (0);
  if (*str1 == '\0')
    return (1);
  return (equal(str1 + 1, str2 + 1));
}

void	run(char *title, t_list **la, t_list **lb, char format)
{
  int	i;

  i = 0;
  while (i < NUM_INSTRUCTIONS)
    {
      if (equal(title, instructions[i].title))
	{
	  (*(instructions[i].func))(la, lb);
	  if (!(format & FLAG_NOPRINT))
	    {
	      if (!(format & FLAG_BEGIN) && !(format & FLAG_PRINT))
		my_putchar(' ');
	      my_putstr(instructions[i].title);
	      if (format & FLAG_PRINT)
		{
		  my_putstr("\nla: ");
		  print_list(*la);
		  my_putstr("lb: ");
		  print_list(*lb);
		}
	    }
	  return ;
	}
      i++;
    }
}
