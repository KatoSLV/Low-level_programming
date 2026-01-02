#include <stdio.h>

/**
*main - this program will print numbers from 00 to 99
*Return: will return 0
* variables: fdgt=first digit, sdgt=second digit
*/

int main(void)
{
	int fdgt = 48;
	int sdgt = 48;

	while (fdgt <= 57)
	{
		sdgt = 48;
		while (sdgt <= 57)
		{
			putchar(fdgt);
			putchar(sdgt);
			if (sdgt != 57 || fdgt != 57)
			{
				putchar(',');
				putchar(' ');
			}
			sdgt++;
		}
	fdgt++;
	}
	putchar('\n');

	return (0);
}
