#include <stdio.h>

/**
*main - this program will print the alphabet in lowercase and uppercase
*only using putchar
*Return: willl return 0
*/

int main(void)
{
	char first = 97;
	char last = 122;

	while (first <= last)
	{
		putchar(first);
		first++;
	}
	putchar('\n');

	char upper = 65;
	char lupper = 90;

	while (upper <= lupper)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
