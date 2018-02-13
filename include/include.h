/*
** EPITECH PROJECT, 2017
** include.h
** File description:
** This is my header file for the matchstick project
*/

#ifndef INCLUDE_H_
	#define INCLUDE_H_

#include <unistd.h>
#include <stdlib.h>

int how_many_filled(int *board);
int big(int *board);
int which_is_littler(int *board);
int make_it_real(int nb_lines, int *board);
int possible(int nb, int max);
int game_loop(int *board, int nb_lines, int max);
int intelligence_play4(int *board, int max);
int intelligence_play3(int *board, int max);
int intelligence_play2(int *board, int max);
int intelligence_play(int *board, int max, int nb_lines);
void intelligence_turn(int *board, int nb_lines, int max);
int get_the_line(int nb_lines);
int is_it_conform(int max, int *board, int line, int matches);
int get_the_matches(int max, int *board, int line);
int players_turn(int *board, int nb_lines, int max);
void print_line(int nb_lines);
int print_spaces(int nb_matches, int max_size);
int print_matches(int nb_matches);
void print_spaces2(int limit, int nb_lines);
void print_board(int *board, int nb_lines);
int my_str_isnum(char *str);
int *initialize_board(int nb_lines);
void my_putchar(char c);
int intelligence_play5(int *board);
int matches_count(int *board);
int my_getnbr(char const *str);
int negative(char const *str, int i);
int apply_negative(int neg);
int end(char const *str, int i);
int my_error(int argc, char *argv[]);
void my_putstr(char *str);
void octal3digits(char *str);
char *octal(int nb);
int my_put_long(long nb);
int percent_flag(char c, int *j, int flag);
int my_putconvert(char c, int flag, long nb);
int f2(char c, int *j, int flag, long nb);
int doubles(const char *format, int *j, int flag, ...);
int my_putflag3(char c, int *j, int flag, char *format);
int my_putflag(char c, int *j, int flag, char *str);
int is_it_flag(char c, int *j, int flag);
int print_noflag(const char *format, int i, int *j, int flag);
int loop(char c, int *j, int flag, ...);
int my_printf(const char* str, ...);
char *binary(int nb);
void my_putchar (char c);
int my_strlen(char *str);
int my_put_nbr(int nb);
int my_put_unsigned(unsigned int nb);
char whichletter_low(int nb);
char whichletter_up(int nb);
char up_or_low(int modulo, char c);
char *hexadecimal(long nb, char c);
char *my_revstr(char *str);
int main(int argc, char *argv[]);
int invalid(char *input);
char *get_next_line(int fd);
int my_put_nbr(int nb);

#endif /* !INCLUDE_H_ */

#ifndef READ_SIZE
#define READ_SIZE (1000)
#endif /* !READ_SIZE */