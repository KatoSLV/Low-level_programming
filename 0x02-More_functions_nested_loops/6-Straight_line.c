#include "roadmap.h"

/**
* printLine - will print a straight line in the terminal using "-"
* @num: number of the times character
* Return: void
*/

void printLine(int num)
{
	int dash;

	if (num > 0)
	{
		for (dash = 1; dash <= num; dash++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
