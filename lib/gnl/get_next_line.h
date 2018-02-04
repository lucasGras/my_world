/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** gnl
*/

#ifndef READ_SIZE
#define READ_SIZE (10)
#endif

#ifndef GNL_H
#define GNL_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct buff_s {
	int readr;
	int i;
	char *line;
	char buffer[READ_SIZE];
} buff_t;

char *get_next_line(int);
char *my_strncat(char *, char *, int);
char *get_line_in_stock(char *);
int get_return(char *);

#endif