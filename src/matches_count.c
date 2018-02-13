/*
** EPITECH PROJECT, 2017
** matches_count.c
** File description:
** Function that counts the number of matches on the board
*/

#include "include.h"

int matches_count(int *board)
{
	int i = 0;
	int nb_matches = 0;

	while (board[i] != -1) {
		nb_matches = nb_matches + board[i];
		i = i + 1;
	}
	return (nb_matches);
}