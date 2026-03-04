#ifndef ROADMAP_H
#define ROADMAP_H

/* STD LIB */
#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int _putchar(char c); /* putchar function */
int strLen(const char *str); /* get the max len of a string */

char *create_array(int amount, char ch); /* Create an array */

char *_strdup(const char *source); /* allocate memory and contain a copy of of the string given as parameter */

char *str_concat(const char *source1, const char *source2); /* concatenates two strings */

int **alloc_grid(int width, int height); /* allocate memory for a multidimensional array */

char *argstostr(int argc, char **argv); /* splits a string in two words */

#endif