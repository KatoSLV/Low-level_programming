#include "roadmap.h"

/**
* print_chessboard - will print a multidimensional array
* @board: is the position for each piece
* Return: will return the chessboard
*/

void print_chessboard(char board[8][8])
{
	int index;
	int Sindex;

	for (index = 0; index < 8; index++)
	{
		for (Sindex = 0; Sindex < 8; Sindex++)
		{
			_putchar(board[index][Sindex]);
			if (Sindex < 7)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
