#include "roadmap.h"

/**
* strCpy - copy a string to another variable
* @dest: is the string to copy the src
* @src: is the src string to cpy into dest
* Return: will return the source string
*/

char *strCpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
