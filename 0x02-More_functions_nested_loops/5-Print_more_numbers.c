#include "roadmap.h"

/**
* printMoreNumbers - will print 10 times the numbers from 0 to 14
* Return: will return 0
*/

int printMoreNumbers(void)
{
	int num;
	int nTime;

	for (nTime = 0; nTime <= 9; nTime++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num <= 9)
			{
				_putchar(num + '0');
			}
			else if (num > 9)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			if (num != 14)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
	return (0);
}
