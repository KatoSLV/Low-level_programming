#include "roadmap.h"

/**
*main - will call printArr() to print an array of integers by n
*Return: will return 0 if success
*/

int main(void)
{
	int array[] = {98, 402, -198, 298, -1024};
	int n = sizeof(array) / sizeof(array[0]);

	printArr(array, n);

	return (0);
}
