#include "roadmap.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - will create an array of chars and allocate by malloc
* @amount: the amount of chars inside the array
* @ch: is the character to fill the array
* Return: return the pointer
*/

char *create_array(int amount, char ch)
{
	char *arr;
	int index;

	arr = malloc(sizeof(char) * amount);

	if (arr == NULL)
	{
		printf("failed\n");
		exit(0);
	}
	for (index = 0; index < amount; index++)
	{
		arr[index] = ch;
	}
	return (arr);
}
