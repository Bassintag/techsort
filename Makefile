##
## Makefile for pushswap in /home/antoine.stempfer/delivery/CPE_2016/CPE_2016_Pushswap/wip
##
## Made by Bassintag
## Login   <bassintag@epitech.eu>
##
## Started on  Tue Nov 15 13:22:11 2016 Bassintag
## Last update Tue Nov 15 19:17:03 2016 Antoine Stempfer
##

CC	=	gcc -g

RM	=	rm -f

CFLAGS	=	-Wextra -Wall -I $(INC)

LDFLAGS	=

INC	=	include

LIBDIR	=	lib

LIB	=	my

NAME	=	pushswap

OBJS	=	$(SRCS:.c=.o)

SRCS	=	src/main.c \
		src/list.c \
		src/instructions/interpreter.c \
		src/instructions/push.c \
		src/instructions/rotate.c \
		src/instructions/reverse_rotate.c \
		src/instructions/swap.c \
		src/techsort/techsort_parser.c \
		src/techsort/techsort_interpreter.c \
		src/techsort/instructions/instruct_run.c \
		src/techsort/instructions/instruct_add.c \
		src/techsort/instructions/instruct_sub.c \
		src/techsort/instructions/instruct_set.c \
		src/techsort/instructions/instruct_jmp.c \
		src/techsort/instructions/instruct_jle.c \
		src/techsort/instructions/instruct_jlg.c \
		src/techsort/instructions/instruct_jls.c \
		src/techsort/instructions/instruct_jae.c \
		src/techsort/instructions/instruct_jbe.c \
		src/techsort/instructions/instruct_jaf.c \
		src/techsort/instructions/instruct_jbf.c \
		src/techsort/instructions/instruct_jve.c \
		src/techsort/instructions/instruct_jvg.c \
		src/techsort/instructions/instruct_jvs.c

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)  -L $(LIBDIR) -l $(LIB)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
