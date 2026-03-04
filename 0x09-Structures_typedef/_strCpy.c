#include "dog.h"

/**
* _strCpy - will copy one string into another
* @dest: destination of the new string
* @src: source of the string
* Return: will return the new string
*/

char *_strCpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}
