/*
** EPITECH PROJECT, 2017
** intelligence_tools.c
** File description:
** Here are the tools functions I need to make the AI plays
*/

#include "include.h"

int how_many_filled(int *board)
{
	int i = 0;
	int nb = 0;

	while (board[i] != -1) {
		if (board[i] != 0)
			nb = nb + 1;
		i = i + 1;
	}
	return (nb);
}

int big(int *board)
{
	int i = 0;
	int bigger = 0;

	while (board[i] != -1) {
		if (board[i] > bigger)
			bigger = board[i];
		i = i + 1;
	}
	i = 0;
	while (board[i] != bigger)
		i = i + 1;
	return (i);
}

int which_is_littler(int *board)
{
	int i = 0;
	int littler = 200;

	while (board[i] != -1) {
		if (board[i] < littler && board[i] != 0)
			littler = board[i];
		i = i + 1;
	}
	i = 0;
	while (board[i] != littler)
		i = i + 1;
	return (i);
}

int make_it_real(int nb_lines, int *board)
{
	int nb = random() % nb_lines;

	if (nb_lines == 1)
		return (0);
	while (board[nb] == 0) {
		nb = random() % nb_lines;
	}
	return (nb);
}

int possible(int nb, int max)
{
	if (nb < max)
		return (nb);
	if (max <= nb)
		return (max);
	return (0);
}