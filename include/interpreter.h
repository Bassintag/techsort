/*
** interpreter.h for Pushswap in /home/bassintag/delivery/CPE_2016/CPE_2016_Pushswap
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov  8 12:39:53 2016 Antoine Stempfer
** Last update Sun Nov 13 14:55:19 2016 Antoine Stempfer
*/

#ifndef INTERPERTER_H_
#define INTERPRETER_H_

#include "list.h"

#define FLAG_NORMAL 0
#define FLAG_BEGIN 1
#define FLAG_NOPRINT 2
#define FLAG_PRINT 4

void	run(char *, t_list **, t_list **, char);

#endif
