##
## EPITECH PROJECT, 2022
## project
## File description:
## Makefile
##

CC			= gcc
SRC			= 	main.c	\
				handle_operators.c	\
				build_tree.c	\
				parsing.c	\
				exec_tree.c
OBJ			= $(SRC:.c=.o)
NAME		= eval_expr
CPPFLAGS	= -g3 -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)
	$(RM) *.o

re: fclean all
