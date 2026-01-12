#include "roadmap.h"

/**
* printTriangle - will print a triangle using "#" with conditions
* variables: Row is the current row, and Col is for the column
* @Size: is for the Current Size
* Return: void
*/

void printTriangle(int Size)
{
	int Row;
	int Col;

	if (Size > 0)
	{
		for (Row = 1; Row <= Size; Row++)
		{
			for (Col = 1; Col <= Size; Col++)
			{
				if (Col <= Row)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}	
	}
	_putchar('\n');
}
