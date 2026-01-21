#include "roadmap.h"

/**
* putByTwo - print one char out of 2 of a string
* @str: is the current string to be evaluated
* Return: void
*/

void putByTwo(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
