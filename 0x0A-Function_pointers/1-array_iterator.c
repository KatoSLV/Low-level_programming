#include "function_pointers.h"

/**
* array_iterator - calls another function while sending the element of an array
* @array: array to be printed
* @size: size of the array
* @printelem: print an integer or print an integer in hexadecimal
* Return: nothing
*/

void array_iterator(int *array, int size, void (*printelem)(int))
{
	int index;

	for (index = 0; index < size; index++)
	{
		printelem(array[index]);
	}
}
