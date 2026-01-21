#include "roadmap.h"

/**
*main - will call resetTo98 to reset the value of n by sending the addrs
*Return: will return 0 if success
*/

int main(void)
{
	int n;

	n = 402;
	printf("n = %d\n", n);
	resetTo98(&n);
	printf("n = %d\n", n);
	return (0);
}
