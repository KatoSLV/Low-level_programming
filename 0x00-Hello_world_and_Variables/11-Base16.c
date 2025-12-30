#include <stdio.h>

/**
* main - this program will print all the values of base 16 in lowercase
* only using putchar and add a new line.
*Return: will return 0
*/

int main(void)
{
	char num = 48;
	char ch = 97;

	while (num <= 57)
	{
		putchar(num);
		putchar(',');
		putchar(32);
		num++;
	}
	if (num != 57)
	{
		char num = ch;
			while (num <= 102)
			{
				putchar(num);
				if (num < 102)
				{
					putchar(',');
					putchar(32);
				}
				num++;
			}
	}
	putchar('\n');
	return (0);
}
