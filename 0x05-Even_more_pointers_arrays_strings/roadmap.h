#ifndef ROADMAP_H
#define ROADMAP_H

#include <stdio.h>

int _putchar(char); /* Prints only one character */

void *_memset(void *buffer, int c, size_t n);  /* fills the memory with a constant byte*/

void *_memcpy(void *dest, void *src, size_t size); /* copies memory areas */

char *_strchr(const char *str, int c); /* locates a character in a string*/

size_t _strspn(const char *str1, const char *str2); /* gets the lenght of a prefix substring */

char *_strpbrk(const char *str1, const char *str2); /* search and return a pointer to a byte matched in a string*/

char *_strstr(const char *str1, const char *str2); /* locates a substring */

void print_chessboard(char board[8][8]); /* print a multidimensional array*/

void set_string(char **s1, char *s0); /* sets the value of a pointer to a char */

void print_diagsums(int *arr, int size); /* sums multidimensional array */

#endif