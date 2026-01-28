#include "roadmap.h"

/**
*main - will call strCat() to concatenate two strings into one
*Return: will return 0 if success
*/

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *s3;

	printf("%s\n", s1);
	printf("%s", s2);
	s3 = strCat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", s3);
	printf("Last pos of s3: %d\n", s3[13]); /* Testing the auto added null */

	return (0);
}