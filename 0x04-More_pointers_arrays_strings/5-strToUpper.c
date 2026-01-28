#include "roadmap.h"

/**
* strToUpper - change lowercase of a string in uppercase
* @str: the string to be change in uppercase
* Return: will return the string with uppercase
*/

char *strToUpper(char *str)
{
	int index = 0;
	int maxLen = strLen(str);

	while (index < maxLen)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
