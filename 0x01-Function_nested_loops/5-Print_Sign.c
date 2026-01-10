#include "roadmap.h"

/**
* printSign - Will print the sign of a number accordingly
* @num: Check the current number
* Return: will return -1 if negative or 1 if positive
*/

int printSign(int num)
{
	if (num > 0)
	{
		return (1);
	}
	else if (num == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
	return (0);
}
