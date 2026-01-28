#include "roadmap.h"

/**
* revArr - reverses the content of an array of integers
* @array: the current array to be reversed
* Return: return the reverse of an array
*/

void revArr(int *array, int n)
{
	int index = 0;
	int holder = 0;
	int maxLen = n - 1;

	while (index < maxLen && maxLen >= 0)
	{
		holder = array[index];
		array[index] = array[maxLen];
		array[maxLen] = holder;
		index++;
		maxLen--;
	}
	array[n] = '\0';
}
