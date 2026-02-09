#include "roadmap.h"

/**
* main - will add two pos numbers
* @argc - is the number of arguments passed into the program
* @argv - is the pointer to the first arg
* Return - will return 0
*/

int main(int argc, char **argv)
{
	argc -=1;

	if (argc != 2)
	{
		return (0);
	}

	int firstD = (atoi(argv[1]) > 0) ? atoi(argv[1]) : 0;
	int secD = (atoi(argv[2]) > 0) ? atoi(argv[2]) : 0;

	if (firstD == 0 || secD == 0)
	{
		printf("The numnbers must be positive.?n");
	}

	int result = firstD + secD;

	printf("This is the result of the sum %d and %d: %d\n", firstD, secD, result);

	return(0);
}
