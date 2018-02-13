/*
** EPITECH PROJECT, 2017
** players_turn.c
** File description:
** Function that manage the input from the player
*/

#include "include.h"

int invalid(char *input)
{
	if (input == NULL)
		return (-1);
	if (my_str_isnum(input) == 0 || input[0] == '\0') {
		write(1, "Error: invalid input ", 21);
		write(1, "(positive number expected)\n", 27);
		return (0);
	}
	return (1);
}

int get_the_line(int nb_lines)
{
	int line = 0;
	char *input;
	int print = 1;

	while ((line < 1 || line > nb_lines) || (my_str_isnum(input) == 0)) {
		write(1, "Line: ", 6);
		input = get_next_line(0);
		print = invalid(input);
		if (print == -1)
			return (-1);
		line = my_getnbr(input);
		if ((line < 1 || line > nb_lines) && print == 1)
			write(1, "Error: this line is out of range\n", 33);
		print = 0;
	}
	return (line);
}

int is_it_conform(int max, int *board, int line, int matches)
{
	if (matches < 1) {
		write(1, "Error: you have to remove at least one match\n", 45);
		return (-1);
	}
	if (matches > max) {
		write(1, "Error: you cannot remove more than ", 36);
		my_put_nbr(max);
		write(1, " matches per turn\n", 18);
		return (-1);
	}
	if (matches > board[line - 1]) {
		write(1, "Error: not enough matches on this line\n", 39);
		return (-1);
	}
	return (0);
}

int get_the_matches(int max, int *board, int line)
{
	int matches = 0;
	char *input;
	int valid = 1;

	while (matches < 1 || matches > board[line - 1]) {
		write(1, "Matches: ", 9);
		input = get_next_line(0);
		valid = invalid(input);
		if (valid != 1)
			return (valid);
		matches = my_getnbr(input);
		if (is_it_conform(max, board, line, matches) == -1)
			return (0);
	}
	return (matches);
}

int players_turn(int *board, int nb_lines, int max)
{
	int line = 0;
	int matches = 0;

	write(1, "Your turn:\n", 11);
	while (matches < 1) {
		line = get_the_line(nb_lines);
		if (line == -1)
			return (-1);
		matches = get_the_matches(max, board, line);
		if (matches == -1)
			return (-1);
	}
	write(1, "Player removed ", 15);
	my_put_nbr(matches);
	write(1, " match(es) from line ", 21);
	my_put_nbr(line);
	write(1, "\n", 1);
	board[line - 1] = board[line - 1] - matches;
	print_board(board, nb_lines);
	return (0);
}