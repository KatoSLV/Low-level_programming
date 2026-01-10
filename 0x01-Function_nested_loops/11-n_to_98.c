#include "roadmap.h"

/**
* printT98 - print all natural number from n to 98
* Return: will return 0
* @n: is the value for the natural number
*/

void printT98(int n)
{
	int base = 98;

	while (n <= base || n >= base)
	{
		if (n == base)
		{
			printf("%d\n\n", n);
			return;
		}
		else if (n <= base)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n >= base)
		{
			printf("%d, ", n);
			n--;
		}
	}
	_putchar('\n');
}
