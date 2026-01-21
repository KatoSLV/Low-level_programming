#include "roadmap.h"

/**
* swapInts - swaps the values of two integers
* @a: first value to be swaped
* @b: second value to be swaped
* Return: return the value of the integers
*/

void swapInts(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
