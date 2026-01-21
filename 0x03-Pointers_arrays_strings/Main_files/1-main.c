#include "roadmap.h"

/**
*main - will call swapInts() to swap two integers
*Return: will return 0 if success
*/

int main(void)
{
	int a; /* First integer */
	int b; /* Second integer */

	a = 98;
	b = 42;

	printf("a = %d, b = %d\n", a, b);
	swapInts(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return (0);
}
