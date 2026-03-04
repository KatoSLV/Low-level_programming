#include "function_pointers.h"

/**
* int_index - will send elements of an array to be checked by function pointer
* @array: array to be checked
* @size: size of the array
* @checker: check the element
* Return: nothing
*/

int int_index(int *array, int size, int (*checker)(int))
{
	int index;

	for (index = 0; index < size; index++)
	{
		if (checker(array[index]))
		{
			return (index);
		}
	}
	return (-1);
}
