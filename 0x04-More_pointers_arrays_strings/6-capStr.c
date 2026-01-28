#include "roadmap.h"

/**
* capStr - capitalizes the first letter of all words of a string
* @str: is the string to be capitalize
* Return: will return the string capitalized
*/

char *capStr(char *str)
{
	int index;
	int maxLen = strLen(str);

	for (index = 0; index < maxLen; index++)
	{
		if (index == 0 || str[index - 1] == ' ')
		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 32;
			}
		}
	}
	return (str);
}