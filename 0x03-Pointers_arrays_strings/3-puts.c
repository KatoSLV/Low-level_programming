#include "roadmap.h"

/**
* _puts - print any string followed by a newline
* @str: is the current string to be printed
* Return: return the string of str
*/

int _puts(char *str)
{
	int aux;

	for (aux = 0; str[aux] != '\0'; aux++)
	{
		_putchar(str[aux]);
	}
	_putchar('\n');
	return (aux);
}
