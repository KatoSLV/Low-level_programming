#include <stdio.h>

/**
*main - this program will print all single digit values of base 10
*starting from 0 and only using putchar
*Return: will return 0
*/

int main(void)
{
	char num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(32);
		}
		num++;
	}
	putchar('\n');
	return (0);
}
