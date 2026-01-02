#include <stdio.h>

/*
*main - this program will print all possible different combinations of two digits
* only using putchar, two digits must be different and separated by ',' and ' '
*Return: will return 0
*variables: fdgt = first digit, sdgt = second digit
*/

int main(void)
{
	int fdgt = 48;
	int sdgt;

	while (fdgt <= 56)
	{
		sdgt = fdgt + 1;
		while(sdgt <= 57)
		{
			putchar(fdgt);
			putchar(sdgt);
			if (fdgt != 56 || sdgt != 57)
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
