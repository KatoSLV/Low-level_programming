#include "roadmap.h"

/**
* _strspn - gets the length of a prefix substring
* @str1: string to be scanned
* @str2: string containing the characters to match
* Return: will return the numbers of characters matched
*/

size_t _strspn(const char *str1, const char *str2)
{
	size_t characters = 0;
	const char *holderStr2;

	while (*str1 != '\0')
	{
		holderStr2 = str2;
		while (*holderStr2 != '\0')
		{
			if (*str1 == *holderStr2)
			{
				characters++;
				break;
			}
			holderStr2++;
		}
		if (*holderStr2 == '\0')
		{
			break;
		}
		str1++;
	}
	return (characters);
}
