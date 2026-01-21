#include "roadmap.h"

/**
*main - will call strCpy() to copy the string passed and return it
*Return: will return 0 if success
*/

int main(void)
{
	char s[98];
	char *cpy;

	cpy = strCpy(s, "First, solve the problem. Then, write the code\n");

	printf("%s", s);
	printf("%s", cpy);

	return (0);
}
