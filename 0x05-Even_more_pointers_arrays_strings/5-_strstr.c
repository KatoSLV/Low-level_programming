#include "roadmap.h"

/**
* _strstr - will locates a substring
* @str1: is the string to be examined
* @str2: this is the sub-string to be searched in string
* Return: returns a pointer point to the first character of the found s2 in s1
*/

char *_strstr(const char *str1, const char *str2)
{
	int index = 0;
	int Sindex = 0;
	int occurrence;

	if (str2[0] == '\0')
	{
		return ((char *)str1);
	}
	while (str1[index] != '\0')
	{
		if (str1[index] == str2[Sindex])
		{
			if (Sindex == 0)
			{
				occurrence = index;
			}
			Sindex++;
			if (str2[Sindex] == '\0')
			{
				return ((char *)str1 + occurrence);
			}
		}
		else
		{
			if (Sindex != 0)
			{
				index = occurrence;
			}
			Sindex = 0;
		}
		index++;
	}
	return (NULL);
}
