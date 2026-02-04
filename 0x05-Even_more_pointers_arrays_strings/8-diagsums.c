#include "roadmap.h"

/**
* print_diagsums - sums multidimensional arrays
* @arr: is the pointer to the arrays
* @size: is the size of the arrays
* Return: will print the result of the arrays
*/

void print_diagsums(int *arr, int size)
{
	int index;
	int result1 = 0;
	int result2 = 0;

	for (index = 0; index < size; index++)
	{
		result1 += arr[index * size + index];
		result2 += arr[index * size + (size - 1 - index)];
	}
	printf("Result of diag are: %d, %d\n", result1, result2);
}
