#include "roadmap.h"

/**
* _strpbrk - search and return the pointer to a byte matched
* @str1: string to be scanned
* @str2: string containing the characters to match
* Return: will return the pointer to the character of str1 that match with str2
*/

char *_strpbrk(const char *str1, const char *str2)
{
	const char *holderStr2;

	while (*str1 != '\0')
	{
		holderStr2 = str2;
		while (*holderStr2 != '\0')
		{
			if (*str1 == *holderStr2)
			{
				return ((char *) str1);
			}
			holderStr2++;
		}
		str1++;
	}
	return (NULL);
}
