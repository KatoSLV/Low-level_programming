#include "roadmap.h"

/**
* revStr - print a string in reverse
* @str: the current string to be printed
* Return: return the reverse of a string
*/

void revStr(char *str)
{
	int aux = 0;

	while (str[aux] != '\0')
	{
		aux++;
	}
	while (aux >= 0)
	{
		_putchar(str[aux]);
		aux--;
	}
	_putchar('\n');
}
