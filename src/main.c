/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** This is the main function for the matchstick project
*/

#include "include.h"

int main(int argc, char *argv[])
{
	int *board;

	if (my_error(argc, argv) == 1)
		return (84);
	srandom(113);
	board = initialize_board(my_getnbr(argv[1]));
	print_board(board, my_getnbr(argv[1]));
	return (game_loop(board, my_getnbr(argv[1]), my_getnbr(argv[2])));
	return (0);
}