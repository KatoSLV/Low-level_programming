#include "roadmap.h"

/**
* checkLower - this program will check for lowercase
* Return: will return 1 if true or 0 for false
* @ch: character to check
*/

int checkLower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	return (0);
}
