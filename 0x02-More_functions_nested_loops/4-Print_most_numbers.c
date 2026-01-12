#include "roadmap.h"

/**
* printMostNumbers - print numbers from 0 to 9, 2 and 4 will be skipped
* Return: will return 0
*/

int printMostNumbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
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
