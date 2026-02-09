#include "roadmap.h"

/**
* main - will multiplies two numbers
* @argc: counter the arguments
* @argv: array of elements of the program
* Return: will return the multiplication
*/

int main(int argc, char **argv)
{
	int index = 0;
	int Number = 0;
	int Result = 1;

	for (index = 1; index < argc; index++)
	{
		Number = atoi(argv[index]);
		Result = Result * Number;
	}
	printf("Multiplicate and the result is: %d\n", Result);
	return (0);
}
/*
* another solution only if the user pass two numbers
* int main(int argc __attribute__ ((unused)), char **argv)
* {
*	int a = atoi(argv[1]);
*	int b = atoi(argv[2]);
*	int Result = a * b;
*
*	printf("The multiplication of %d and %d is: %d\n", a, b, Result);
*	return (0);
* }
*/
