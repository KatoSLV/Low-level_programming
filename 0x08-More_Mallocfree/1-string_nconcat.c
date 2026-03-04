#include "roadmap.h"

/**
* string_nconcat - will concatenates two strings
* @str1: first string to be concatenated
* @str2: last string to be concatenated
* @size: size of the string
* Return: return the new string
*/

char *string_nconcat(char *str1, char *str2, int size)
{
	int index, Sindex;
	char *Newstr;
	int len1 = strLen(str1);
	int len2 = strLen(str2);
	int maxLen = len1 + len2 + 1;

	if (maxLen > size)
	{
		len2 = size;
	}

	Newstr = malloc(sizeof(char) * maxLen);

	if (Newstr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < len1; index++)
	{
		Newstr[index] = str1[index];
	}
	for (Sindex = 0; Sindex < len2; Sindex++)
	{
		Newstr[index + Sindex] = str2[Sindex];
	}

	Newstr[index + Sindex] = '\0';

	return (Newstr);
}
