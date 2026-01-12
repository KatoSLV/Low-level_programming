#include "roadmap.h"

/**
* printSquare - print a square using "#"
* @Size: the size of the square
* variable: base for the base of the square, long for longitude of the square
* Return: void
*/

void printSquare(int Size)
{
	int Base;
	int Long;

	if (Size > 0)
	{
		for (Base = 1; Base <= Size; Base++)
		{
			for (Long = 1; Long <= Size; Long++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
