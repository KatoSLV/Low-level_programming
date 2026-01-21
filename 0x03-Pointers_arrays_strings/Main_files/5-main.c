#include "roadmap.h"

/**
*main - will call revStr() to reverse a string passed
*Return: will return 0 if success
*/

int main(void)
{
	char s[10] = "Roadmap";

	printf("%s\n", s);
	revStr(s);
	printf("%s\n", s);

	return (0);
}
