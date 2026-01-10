#include "roadmap.h"

/**
* printEveryMin - will print every minute starting from 00:00 to 23:59
* Return: will return 0
*/

int printEveryMin(void)
{
	int fh;
	int sh;
	int fm;
	int sm;

	for (fh = 0; fh <= 2; fh++)
	{
		for (sh = 0; sh <= 9; sh++)
		{
			if (fh == 2 &&  sh > 3)
			{
				break;
			}
			for (fm = 0; fm <= 5; fm++)
			{
				for (sm = 0; sm <= 9; sm++)
				{
					_putchar(fh + '0');
					_putchar(sh + '0');
					_putchar(':');
					_putchar(fm + '0');
					_putchar(sm + '0');
					if (fh != 2 || sh != 3 || fm != 5 || sm != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
	}
	_putchar('\n');
	return (0);
}
