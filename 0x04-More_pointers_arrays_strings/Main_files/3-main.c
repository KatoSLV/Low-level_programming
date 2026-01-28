#include "roadmap.h"

/**
*main - will call strCmp() to compare two strings
*Return: will return 0 if success
*/

int main(void)
{
	char s1[] = "abcdef";
	char s2[] = "abAdef";
	char s3[] = "Hello World";
	char s4[] = "Hello World";

	printf("%d\n", strCmp(s1, s2));
	printf("%d\n", strCmp(s3, s4));
	printf("%d\n", strCmp(s3, s1));

	return (0);
}