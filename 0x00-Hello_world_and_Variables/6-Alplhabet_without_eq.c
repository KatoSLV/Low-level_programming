#include <stdio.h>

/**
*main - this program will print the alphabet in lower case without e and q
*only using putchar
*Return: will return 0
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e')
		{
			if (ch != 'q')
			{
				putchar(ch);
			}
		}
	}
	putchar('\n');
	return (0);
}
