#include "roadmap.h"

/**
*main - will call strLen() to get the lenght of a string
*Return: will return 0 if success
*/

int main(void)
{
	char *str; /* var to hold a string */
	int len; /* var to store the lenght of a string */

	str = "Roadmap!";
	len = strLen(str);
	printf("%d\n", len);
	str = "Pointers!";
	len = strLen(str);
	printf("%d\n", len);
	str = "Arrays!";
	len = strLen(str);
	printf("%d\n", len);

	return (0);
}
