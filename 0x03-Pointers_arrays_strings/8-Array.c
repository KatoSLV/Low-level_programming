#include "roadmap.h"

/**
* printArr - print an arr of integers by n time
* @arr: array of integers
* @n: numbers to print
* Return: nothing
*/

void printArr(int *arr, int n)
{
	printf("The array of integers are:\n");
	for (int index = 0; index < n; index++)
	{
		printf("%d ", arr[index]);
	}
	printf("\n");
}

