#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* STDLIBS */

#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */

void print_name(char *name, void (*print)(char *)); /* calls a function via function pointer */

void array_iterator(int *array, int size, void (*printelem)(int)); /* calls another function while sending elements of the array */

int int_index(int *array, int size, int (*printelem)(int)); /* calls a checker for an array */


#endif