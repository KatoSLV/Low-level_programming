#include "roadmap.h"

/**
* checkAlpha - this program will check for alphabetic characters
* @ch: character to check
* Return: will return 1 if true or 0 for false
*/

int checkAlpha(int ch)
{
	if (ch >= 65 && ch <= 122)
	{
		return (1);
	}
	return (0);
}
