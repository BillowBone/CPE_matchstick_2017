##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile for the matchstick project
##

SRC	=	./src/main.c	\
		./src/initialize_board.c	\
		./src/my_error.c	\
		./src/my_getnbr.c	\
		./src/players_turn.c	\
		./src/print_board.c	\
		./src/matches_count.c	\
		./src/game_loop.c	\
		./src/intelligence.c	\
		./src/my_str_isnum.c	\
		./src/intelligence_tools.c	\
		./src/intelligence_turn.c	\
		./src/get_next_line.c	\
		./src/my_put_nbr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-Wall -Wextra -pedantic -I./include/

MY_LIB	=	-L./src/my_printf/ -lmy

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) $(CFLAGS) $(MY_LIB) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all