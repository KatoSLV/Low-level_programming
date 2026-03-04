#include "roadmap.h"

/**
* _strdup - duplicate a string in a newly allocated space in memory
* @source: source char to copy
* Return: will return a pointer to the new string
*/

char *_strdup(const char *source)
{
	char *dest;
	int index;
	int Maxlen = strLen(source) + 1;

	dest = malloc(sizeof(char) * Maxlen);

	if (dest == NULL)
	{
		printf("Error in duplicating the new string\n");
		return (NULL);
	}
	for (index = 0; index < Maxlen; index++)
	{
		dest[index] = source[index];
	}
	return (dest);
}
