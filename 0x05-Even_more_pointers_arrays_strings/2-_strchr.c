#include "roadmap.h"

/**
* _strchr - locates a character in a string
* @str: is the string where we search
* @c: is the character to be search
* Return: will return the new pointer on str
*/

char *_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
