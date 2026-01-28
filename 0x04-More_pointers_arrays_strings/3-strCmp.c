#include "roadmap.h"

/**
* strCmp - Will compare the lenght of two strings and return the difference
* @str1: is the string to be compared with another
* @str2: the string compared
* Return: Will return 0 if equal, 1 if more than and -1 less than
*/

int strCmp(char *str1, char *str2)
{
	int index = 0;

	while (str1[index] != '\0' && str1[index] == str2[index])
	{
		index++;
	}
	if (str1[index] == str2[index])
	{
		return (0);
	}
	else if (str1[index] > str2[index])
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
