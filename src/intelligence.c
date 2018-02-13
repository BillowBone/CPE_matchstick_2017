/*
** EPITECH PROJECT, 2017
** intelligence.c
** File description:
** Function that makes the AI plays
*/

#include "include.h"

int intelligence_play4(int *brd, int max)
{
	if ((how_many_filled(brd) == 1) && (brd[big(brd)] <= max)
	&& (brd[big(brd)] != 1)) {
		my_printf("AI removed %d match(es) ", brd[big(brd)] - 1);
		my_printf("from line %d\n", big(brd) + 1);
		brd[big(brd)] = brd[big(brd)] - (brd[big(brd)] - 1);
		return (0);
	}
	if (how_many_filled(brd) == 1 && brd[big(brd)] > max) {
		if (brd[big(brd)] - max > max) {
			my_printf("AI removed %d match(es) ", max);
			my_printf("from line %d\n", brd[big(brd)] + 1);
			brd[big(brd)] = brd[big(brd)] - max;
		} else {
			my_printf("AI removed %d match(es) ", 1);
			my_printf("from line %d\n", brd[big(brd)] + 1);
			brd[big(brd)] = brd[big(brd)] - 1;
		}
	}
	return (intelligence_play5(brd));
}

int intelligence_play3(int *board, int max)
{
	int bigger = big(board);

	if (board[bigger] <= max) {
		my_printf("AI removed %d match(es) ", board[bigger]);
		my_printf("from line %d\n", bigger + 1);
		board[bigger] = 0;
		return (0);
	}
	return (0);
}

int intelligence_play2(int *board, int max)
{
	int littler = which_is_littler(board);
	int bigger = big(board);
	int filled_lines = how_many_filled(board);

	if (filled_lines == 2) {
		if (board[littler] == 1 && board[bigger] <= max) {
			my_printf("AI removed %d ", board[bigger]);
			my_printf("matche(es) from line %d\n", bigger + 1);
			board[bigger] = 0;
			return (0);
		}
		if (board[bigger] > max) {
			my_printf("AI removed %d match(es) ", max);
			my_printf("from line %d\n", bigger + 1);
			board[bigger] = board[bigger] - max;
			return (0);
		}
		return (intelligence_play3(board, max));
	}
	return (intelligence_play4(board, max));
}

int intelligence_play(int *board, int max, int nb_lines)
{
	int i = 0;
	int filled_lines = how_many_filled(board);
	int bigger = big(board);

	if (filled_lines > 5) {
		my_printf("AI removed %d ", possible(board[bigger], max));
		my_printf("match(es) from line %d\n", bigger + 1);
		board[bigger] = board[bigger] - possible(board[bigger], max);
		return (0);
	}
	if (filled_lines > 2) {
		i = make_it_real(nb_lines, board);
		my_printf("AI removed %d ", possible(board[i], max));
		my_printf("match(es) from line %d\n", i + 1);
		board[i] = board[i] - possible(board[i], max);
		return (0);
	}
	return (intelligence_play2(board, max));
}

void intelligence_turn(int *board, int nb_lines, int max)
{
	my_printf("AI's turn...\n");
	intelligence_play(board, max, nb_lines);
	print_board(board, nb_lines);
}
