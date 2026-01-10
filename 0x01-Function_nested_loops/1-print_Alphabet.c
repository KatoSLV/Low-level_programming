#include "roadmap.h"

/**
* printAlphabet - This program will print the alphabet in lowercase
* Return: will return 0
*/

void printAlphabet(void)
{
	char firstCh;

	for (firstCh = 'a'; firstCh <= 'z'; firstCh++)
	{
		_putchar(firstCh);
	}
	_putchar('\n');
}
