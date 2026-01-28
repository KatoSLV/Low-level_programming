#include "roadmap.h"

/**
*main - will call strNCat() to concatenate two string by n bytes
*Return: will return 0 if success
*/

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *p;

	printf("%s\n", s1);
	printf("%s", s2);
	
	p = strNCat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", p);
	
	p = strNCat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", p);
	return (0);
}
