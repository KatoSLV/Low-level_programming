#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - this program should identify if a number of a variable is pos or neg
*Return: will return 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* your code goes below this line */
/*
*printf("This is the value of the variable n: %d\n", n)
*return (0);
*/

	if (n > 0)
	{
		printf("The value of N %d is positive\n", n);
	}
	else
	{
		printf("The value of N %d is negative\n", n);
	}

	return (0);
}
