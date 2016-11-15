/*
** main.c for Pushswap-wip in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap/wip
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 15 10:38:27 2016 Antoine Stempfer
** Last update Tue Nov 15 17:17:21 2016 Antoine Stempfer
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include "pushswap.h"
#include "techsort_parser.h"
#include "techsort_interpreter.h"
#include "my.h"

static int	print_usage()
{
  my_putstr(USAGE_MSG);
  return (0);
}

int	main(int ac, char **av)
{
  int	fdesc;
  char	*buffer;
  int	len;

  if (ac < 3)
    return (print_usage());
  if (!(buffer = malloc(sizeof(char) * (BUFF_SIZE + 1))))
    {
      my_putstr(MALLOC_ERR_MSG);
      return (84);
    }
  if ((fdesc = open(av[1], O_RDONLY)) < 0)
    {
      my_putstr(NO_FILE_MSG);
      return (84);
    }
  len = read(fdesc, buffer, BUFF_SIZE);
  buffer[len] = '\0';
  execute_script(parse_file(buffer));
  free(buffer);
  return (0);
}
