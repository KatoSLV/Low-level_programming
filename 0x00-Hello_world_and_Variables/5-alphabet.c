#include <stdio.h>

/**
*main - This program will print the alphabet in lower case only using "putchar"
*Return: will return 0
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)

	putchar(ch);
	putchar('\n');

	return (0);
}
