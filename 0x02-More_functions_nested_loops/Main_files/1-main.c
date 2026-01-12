#include "roadmap.h"

/**
*main - will call isDigit() to evaluate if the value passed is a digit or not
*Return: will return 0 if success
*/

int main(void)
{
	char c; /* will stored the value as char */

	c = '0';

	printf("%c %d\n", c, isDigit(c));

	c = 'a';

	printf("%c %d\n", c, isDigit(c));

	return (0);
}
