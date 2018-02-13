/*
** EPITECH PROJECT, 2017
** print_board.c
** File description:
** Function that displays the current matchstick board
*/

#include "include.h"

void print_line(int nb_lines)
{
	int i = 0;

	while (i < (nb_lines * 2) + 1) {
		write(1, "*", 1);
		i = i + 1;
	}
	write(1, "\n", 1);
}

int print_spaces(int nb_matches, int max_size)
{
	int i = 0;

	while (i < (max_size - nb_matches) / 2) {
		write(1, " ", 1);
		i = i + 1;
	}
	return (i);
}

int print_matches(int nb_matches)
{
	int i = 0;

	while (i < nb_matches) {
		write(1, "|", 1);
		i = i + 1;
	}
	return (i);
}

void print_spaces2(int limit, int nb_lines)
{
	int i = limit;

	while (i < (nb_lines * 2) - 1) {
		write(1, " ", 1);
		i = i + 1;
	}
	write(1, "*\n", 2);
}

void print_board(int *board, int nb_lines)
{
	int i = 0;
	int j = 0;
	int *init_board = initialize_board(nb_lines);

	print_line(nb_lines);
	while (board[i] != -1) {
		write(1, "*", 1);
		j = j + print_spaces(init_board[i], (nb_lines * 2) - 1);
		j = j + print_matches(board[i]);
		print_spaces2(j, nb_lines);
		i = i + 1;
		j = 0;
	}
	print_line(nb_lines);
}