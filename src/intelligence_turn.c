/*
** EPITECH PROJECT, 2017
** intelligence_turn.c
** File description:
** Function that makes my AI plays
*/

#include "include.h"

int intelligence_play5(int *board)
{
	if (how_many_filled(board) == 1 && board[big(board)] == 1) {
		write(1, "AI removed 1 match(es) ", 23);
		write(1, "from line ", 10);
		my_put_nbr(big(board) + 1);
		write(1, "\n", 1);
		board[big(board)] = board[big(board)] - 1;
	}
	return (0);
}