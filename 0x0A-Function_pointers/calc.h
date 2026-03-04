#ifndef CALC_H
#define CALC_H

/* STD LIBS */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* STRUCT */

typedef struct MathOp{
	char *op; /* op = operator */
	int (*Fm)(int, int); /* Function math */
} mo; /* Math operations */

/* PROTOTYPES */

int (*get_op_func(char *op))(int, int); /* return an operator */

/* OPERATORS FUNCTIONS */

int sum(int a, int b); /* add two numbers */

int sub(int a, int b); /* subtract two numbers*/

int mul(int a, int b); /* multiplies two numbers */

int divides(int a, int b); /* divides two numbers */

int mod(int a, int b); /* return a remainder of a divided by b*/

#endif 