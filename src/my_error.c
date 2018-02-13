/*
** EPITECH PROJECT, 2017
** my_error.c
** File description:
** This is my error management for the matchstick project
*/

#include "include.h"

int my_error(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	if (my_getnbr(argv[1]) < 1 || my_getnbr(argv[1]) > 100)
		return (1);
	if (my_getnbr(argv[2]) < 1)
		return (1);
	return (0);
}