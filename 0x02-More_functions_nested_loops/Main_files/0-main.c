#include "roadmap.h"

/**
*main - will call the function isUpper() to validate if the value is upper or not
*Return: will return 0 if success
*/

int main(void)
{
	char c; /* will save the value of a char */

	c = 'A';

	printf("%c: %d\n", c, isUpper(c));

	c = 'a';

	printf("%c: %d\n", c, isUpper(c));

	return (0);
}
