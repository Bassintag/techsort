/*
** techsort_parser.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip/src/techsort
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 12:31:52 2016 Antoine Stempfer
** Last update Tue Nov 15 20:40:50 2016 Antoine Stempfer
*/

#include <stdlib.h>
#include "techsort.h"
#include "techsort_instruct.h"
#include "techsort_alias.h"
#include "my.h"
#include <stdio.h>

static t_instruct	get_label(char *buffer, int *reader)
{
  char		*label;
  int		i;

  label = malloc(sizeof(char) * 4);
  i = 0;
  while (i < 3 && my_ischaralpha(buffer[*reader]))
    {
      label[i] = buffer[*reader];
      *reader += 1;
      i++;
    }
  label[i] = '\0';
  i = -1;
  while (++i < NUM_INSTRUCTS)
    if (my_strcmp(instructions[i].label, label) == 0)
      {
	free(label);
	return (instructions[i]);
      }
  free(label);
  return (instructions[0]);
}

static int	get_num_len(int nb)
{
  int		i;

  i = 1 + (nb < 0);
  while ((nb /= 10) != 0)
    i++;
  return (i);
}

static int	parse_alias(char *buffer, int *reader)
{
  int		i;
  int		j;

  i = 0;
  while (i < NUM_ALIAS)
    {
      j = 0;
      while (alias[i][j] == buffer[j + *reader])
	if (alias[i][++j] == '\0')
	  {
	    *reader += j - 1;
	    return (i);
	  }
      i++;
    }
  return (0);
}

static void	get_mod(char *buffer, t_instruct_tkn *tkn, int *reader, int id)
{
  int		mod;

  while (buffer[*reader] == ' ' && (buffer[*reader] != '\n' && buffer[*reader]))
    (*reader)++;
  if(buffer[*reader] == '#')
    {
      (tkn->addr_mod)[id] = ADDR_MOD_REF;
      (*reader)++;
    }
  else
    (tkn->addr_mod)[id] = ADDR_MOD_DIR;
  mod = 0;
  if (my_ischarnum(buffer[*reader]) || buffer[*reader] == '-')
    {
      mod = my_getnbr(buffer + *reader);
      (*reader) += get_num_len(mod);
    }
  else
    mod = parse_alias(buffer, reader);
  (tkn->mod)[id] = mod;
}

t_program      	parse_file(char *buffer)
{
  int  		i;
  int	       	lines;
  t_program    	result;

  i = 0;
  lines = 0;
  while (buffer[i++] != '\0')
    if (buffer[i - 1] == '\n')
      lines++;
  result.instructs = malloc(sizeof(t_instruct_tkn) * lines);
  i = -1;
  result.count = lines;
  lines = 0;
  while (++i < my_strlen(buffer))
    {
      if ((i == 0 || (buffer[i] == '\n' && i++)) && buffer[i] != '\0')
	{
	  (result.instructs[lines]).instruct = get_label(buffer, &i);
	  get_mod(buffer, (result.instructs + lines), &i, 0);
	  get_mod(buffer, (result.instructs + lines), &i, 1);
	  i--;
	  lines++;
	}
    }
  return (result);
}
