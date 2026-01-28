#include "roadmap.h"

/**
*main - will call lEEt() to encode a string into 1337
*Return: will return 0 if success
*/

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *str;

	printf("%s", s);
	str = lEEt(s);
	printf("%s", str);
}