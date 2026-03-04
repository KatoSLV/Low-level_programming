#include "calc.h"

/**
* sum - adds two numbers
* @a: The first number to add
* @b: The second number to add
* Return: return the sum of "a" and "b"
*/

int sum(int a, int b)
{
	return (a + b);
}

/**
* sub - subtract two numbers
* @a: The first number to be subtracted
* @b: The second number to be subtracted
* Return: return the subtract of "a" by "b"
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - multiplies two numbers
* @a: The first number to be multiplied
* @b: The second number to be multiplied
* Return: return the product of "a" and "b"
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
* div - divides two numbers
* @a: dividend
* @b: divisor
* Return: return the result of "a" divided by "b"
*/

int divides(int a, int b)
{
	if (b == 0)
	{
		printf("Divided by zero, please introduce another number\n");
		return (0);
	}
	return (a / b);
}

/**
* mod - computes the remainder of a division
* @a: dividend
* @b: divisor
* Return: return the remainder of "a" divided by "b"
*/

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Divided by zero, please introduce another number\n");
		return (0);
	}
	return (a % b);
}
