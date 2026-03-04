#include "roadmap.h"

/**
* alloc_grid - will allocated a pointer for two dimensional array
* @width: is the width of an array
* @height: is the height of an array
* Return: return a pointer to a 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int index, Sindex;
	int **arr;

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < height; index++)
	{
		arr[index] = malloc(sizeof(int) * width);
		if (arr[index] == NULL)
		{
			return (NULL);
		}
	}
	for (index = 0; index < height; index++)
	{
		for (Sindex = 0; Sindex < width; Sindex++)
		{
			arr[index][Sindex] = 0;
		}
	}
	return (arr);
}
