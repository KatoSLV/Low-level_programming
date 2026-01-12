#include "roadmap.h"

/**
* printFizzBuzz - print numbers from 1-100 with conditions
* variable: num count the numbers
* Return: will return 0
*/

void printFizzBuzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
