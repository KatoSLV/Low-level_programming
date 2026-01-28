#include "roadmap.h"

/**
* lEEt - will encodes a string into 1337
* @str: the string to be enconde
* Return: will return the modified string
*/

char *lEEt(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == 'e' || str[index] == 'E')
		{
			str[index] = '3';
		}
		if (str[index] == 'a' || str[index] == 'A')
		{
			str[index] = '4';
		}
		if (str[index] == 'i' || str[index] == 'I')
		{
			str[index] = '1';
		}
		if (str[index] == 'o' || str[index] == 'O')
		{
			str[index] = '0';
		}
		if (str[index] == 't' || str[index] == 'T')
		{
			str[index] = '7';
		}
		if (str[index] == 's' || str[index] == 'S')
		{
			str[index] = '5';
		}
	}
	return (str);
}
