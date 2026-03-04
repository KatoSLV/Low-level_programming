#include "roadmap.h"

/**
* str_concat - concatenates two strings using malloc
* @source1: is the first string to be concatenated
* @source2: is the second string to be concatenated
* Return: Will return a pointer to the new string
*/

char *str_concat(const char *source1, const char *source2)
{
	char *result;
	int index, Sindex;
	int len1, len2, Maxlen;

	len1 = strLen(source1);
	len2 = strLen(source2);
	Maxlen = len1 + len2 + 1;

	result = malloc(sizeof(char) * Maxlen);

	if (result == NULL)
	{
		printf("Error in concatenation");
		return (NULL);
	}
	for (index = 0; index < len1; index++)
	{
		result[index] = source1[index];
	}
	for (Sindex = 0; Sindex < len2; Sindex++)
	{
		result[index + Sindex] = source2[Sindex];
	}

	return (result);
}
