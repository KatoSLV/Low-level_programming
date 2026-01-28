#include "roadmap.h"

/**
* rot13 - replace each letter of the string with one that is 13 positions later
* @str: the string to be changed
* Return: will return the string modified
*/

char *rot13(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'A' && str[index] <= 'M')
		{
			str[index] = str[index] + 13;
		}
		else if (str[index] >= 'N' && str[index] <= 'Z')
		{
			str[index] = str[index] - 13;
		}
		else if (str[index] >= 'a' && str[index] <= 'm')
		{
			str[index] = str[index] + 13;
		}
		else if (str[index] >= 'n' && str[index] <= 'z')
		{
			str[index] = str[index] - 13;
		}
	}
	return (str);
}
