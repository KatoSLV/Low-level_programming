#include "roadmap.h"

/**
* strNCpy - will return and copies n bytes of a string and fill '\0' till the end of bytes
* @dest: is where the concatenation will begin
* @src: is the string to be concatenated
* @n: the numbers of bytes to be printed
* Return: will return n bytes in a string and fill by '\0'
*/

char *strNCpy(char *dest, char *src, int n)
{
	char *originaldest = dest;
	int index = 0;
	int destLen = strLen(dest);

	while (index < destLen)
	{
		dest[index] = '\0';
		index++;
	}
	for (index = 0; src[index] != '\0' && index < n; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (originaldest);
}
