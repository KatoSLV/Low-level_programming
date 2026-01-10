#include "roadmap.h"

/**
* printAlphabet_X - this program will print ten times alphabet in lowercase
* Return: will return 0
*/

void printAlphabet_X(void)
{
	int Time;
	char Alpha;

	for (Time = '0'; Time <= '9'; Time++)
	{
		for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
		{
			_putchar(Alpha);
		}
		_putchar('\n');
	}
}
