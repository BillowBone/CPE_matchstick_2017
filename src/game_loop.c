/*
** EPITECH PROJECT, 2017
** game_loop.c
** File description:
** This is the function that handle my game loop
*/

#include "include.h"

int game_loop(int *board, int nb_lines, int max)
{
	while (matches_count(board) != 0) {
		write(1, "\n", 1);
		if (players_turn(board, nb_lines, max) == -1)
			return (0);
		if (matches_count(board) == 0) {
			write(1, "You lost, too bad...\n", 21);
			return (2);
		}
		write(1, "\n", 1);
		intelligence_turn(board, nb_lines, max);
		if (matches_count(board) == 0) {
			write(1, "I lost... snif... but I'll", 25);
			write(1, " get you next time!!\n", 21);
			return (1);
		}
	}
	return (0);
}