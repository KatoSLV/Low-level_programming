#ifndef ROADMAP_H
#define ROADMAP_H

#include <stdio.h>
#include <stdlib.h>

int strLen(char *str); /* give us the length of a string */

void *malloc_checked(unsigned int size); /* allocate memory and checked using malloc */

char *string_nconcat(char *str1, char *str2, int size); /* concatenates two string */

void *_calloc(size_t nitems, size_t size); /* implementation of the calloc function */

int *array_range(int start, int end); /* create an array of integers */

#endif