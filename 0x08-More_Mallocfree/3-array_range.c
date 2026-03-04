#include "roadmap.h"

/**
* array_range - create an array of integers
* @start: the start of the array
* @end: the end of the array
* Return: return a pointer to the array of integers
*/

int *array_range(int start, int end)
{
	int index;
	int size = end - start + 1;
	int *arr;

	if (start > end)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		arr[index] = start + index;
	}

	return (arr);
}
