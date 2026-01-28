#include "roadmap.h"

/**
* strCat - Will concatenates two strings into one
* @dest: is the string will start the concatenating
* @src: is the string to be concatenated
* Return: Will return one string concatenated
*/

char *strCat(char *dest, char *src)
{
	char *originaldest = dest;
	int index = 0;
	int destLen = strLen(dest);

	while (src[index] != '\0')
	{
		dest[destLen + index] = src[index];
		index++;
	}
	dest[destLen + index] = '\0';
	return (originaldest);
}
