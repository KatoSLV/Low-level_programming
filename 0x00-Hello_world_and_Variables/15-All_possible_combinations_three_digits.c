#include <stdio.h>

/**
* main - this program will print all combination possible of three digits
*Return: will return 0
* variables: fdgt = first digit, sndgt = second digit, thdgt = third digit
*/

int main(void)
{
	int fdgt;
	int sndgt;
	int thdgt;

	for (fdgt = 0; fdgt < 8; fdgt++)
	{
		for (sndgt = fdgt + 1; sndgt < 9; sndgt++)
		{
			for (thdgt = sndgt + 1; thdgt < 10; thdgt++)
			{
				putchar(fdgt + '0');
				putchar(sndgt + '0');
				putchar(thdgt + '0');

				if (fdgt != 7 || sndgt != 8 || thdgt != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
