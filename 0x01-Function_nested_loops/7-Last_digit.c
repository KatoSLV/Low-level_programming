#include "roadmap.h"

/**
* printLastDigit - will print the last digit of a number, output positive 
* Return: will return the last digit positive
* @num:
*/

int printLastDigit(int num)
{
	if (num < 0)
	{
		num = -num;
	}
	_putchar(num % 10 + '0');
	_putchar('\n');
	return(num);
}
