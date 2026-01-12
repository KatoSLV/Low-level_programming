#include "roadmap.h"

/**
* printNumbers - print numbers from 0 to 9
* Return: will return 0
*/

int printNumbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
		if (num != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
