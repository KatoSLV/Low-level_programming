#include "roadmap.h"

/**
* printTimesTable - will print the table of nine
* Return: will return 0
*/

void printTimesTable(void)
{
	int base;
	int nTime;
	int result = 0;
	int fDgt, sDgt;

	for (base = 0; base <= 9; base++)
	{
		for (nTime = 0; nTime <= 9; nTime++)
		{
			result = base * nTime;
			if (result > 9)
			{
				fDgt = result / 10;
				sDgt = result % 10;
				_putchar(fDgt + '0');
				_putchar(sDgt + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (nTime != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
