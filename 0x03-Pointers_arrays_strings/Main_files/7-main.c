#include "roadmap.h"

/**
*main - will call putsHalf() to print the half of string
*Return: will return 0 if success
*/

int main(void)
{
	char *str;
	char *notEven;

	str = "0123456789";
	notEven = "Roadmap";

	putsHalf(str);
	putsHalf(notEven);

	return (0);
}
