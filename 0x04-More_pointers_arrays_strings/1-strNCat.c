#include "roadmap.h"

/**
* strNCat - will return and concatenates n bytes of a string
* @dest: is where the concatenation will start
* @src: is the string to be concatenated
* @n: the number of bytes to be printed
* Return: return n bytes and the concatenation
*/

char *strNCat(char *dest, char *src, int n)
{
	char *originaldest = dest;
	int index = 0;
	int destLen = strLen(dest);

	while (src[index] != '\0' && index < n)
	{
		dest[destLen + index] = src[index];
		index++;
	}
	dest[destLen + index] = '\0';
	return (originaldest);
}
