#include "roadmap.h"

/**
* putsHalf - prints half of a string
* @str: the current string to be evaluated
* Return: Nothing
*/

void putsHalf(char *str)
{
	int index;
	int len = strLen(str);
	int start;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	for (index = start; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
