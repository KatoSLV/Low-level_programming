#include "roadmap.h"

/**
* main - will print all arguments passed
* @argc: counter the arguments
* @argv: arrays of elements of the program
* Return: will return the arguments passed
*/

int main(int argc __attribute__((unused)), char **argv)
{
	int index;
	
	for (index = 1; index < argc; index++)
	{
	printf("The argument %d who received is: %s\n", index, argv[index]);
	}
	return (0);
}
