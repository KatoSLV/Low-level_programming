#include "roadmap.h"

/**
* strLen - return the length of a string
* @str: is the current string to be evaluated
* Return: return the len of a string
*/

int strLen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
