/*
** EPITECH PROJECT, 2017
** initialize_board
** File description:
** Function that initialize my board
*/

#include "include.h"

int *initialize_board(int nb_lines)
{
	int i = 0;
	int *board = malloc(sizeof(int) * 100);

	while (i < nb_lines) {
		board[i] = (i + 1) + i;
		i = i + 1;
	}
	board[i] = -1;
	return (board);
}