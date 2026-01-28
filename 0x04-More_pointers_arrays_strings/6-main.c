#include "roadmap.h"

/**
*main - will call capStr to capitalize words
*Return: will return 0 if success
*/

int main(void)
{
	char s[] = "expect the best. prepare for the worst. capitalize on what comes.\nhello world! hello-world 012456hello world\thello world.hello world.\n";
	char *str;

	printf("%s", s);
	str = capStr(s);
	printf("%s", str);

	return (0);
}
