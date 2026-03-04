#include "roadmap.h"

/**
* argstostr - concatenates all arguments by our program
* @argc: counter of arguments
* @argv: array of elements of the program
* Return: return concatenated arguments
*/

char *argstostr(int argc, char **argv)
{
	int index, Sindex, strIndex;
	int len = 0;
	char *str;

	if (argc == 0 || argv == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < argc; index++)
	{
		for (Sindex = 0; argv[index][Sindex] != '\0'; Sindex++)
		{
			len++;
		}
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < argc; index++)
	{
		for (Sindex = 0; argv[index][Sindex] != '\0'; Sindex++)
		{
			str[strIndex] = argv[index][Sindex];
			strIndex++;
		}
		str[strIndex] = '\n';
		strIndex++;
	}

	str[strIndex] = '\0';

	return (str);

}
