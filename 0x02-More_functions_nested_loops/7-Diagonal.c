#include "roadmap.h"

/**
* printDiagonal - print a diagonal line by n using "\"
* @num: number of the times character
* variable: line for the line to be printed, space for the space
* return: void
*/

void printDiagonal(int num)
{
	int line;
	int space;

	if (num > 0)
	{
		for (line = 1; line <= num; line++)
		{
			for (space = 1; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
