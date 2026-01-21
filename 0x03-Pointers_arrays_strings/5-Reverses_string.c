#include "roadmap.h"

/**
* revStr - this function will reverses a string
* @str: is the string to be reverse
* Return: return the current string reverse
*/

void revStr(char *str)
{
	int maxLen = strLen(str) - 1;
	int index;
	int holder;

	for (index = 0; index < maxLen; index++, maxLen--)
	{
		holder = str[index];
		str[index] = str[maxLen];
		str[maxLen] = holder;
	}
}
