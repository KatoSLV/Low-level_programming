#include <stdio.h>

/**
*main - this program will print the alphabet in reverse
*Return: will return 0
*/

int main(void)
{
	char z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}
