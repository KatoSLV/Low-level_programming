#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - This program will print the last digit of the number store in var "n"
*	| the program should validate if the last number is greater than "5"
*	| the program should validate if it is not zero or less than "6"
*	| the program should validate if it is zero.
*Return: will return 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes below this line */

	printf("This is the value of the variable n: %d\n", n);

	printf("The last number of var n: %d\n", n % 10);

	/* validate if the last number is greater than 5 */

	if (n % 10 > 5)
	{
		printf("The last number of var \"n\" is greater than 5\n");
	}
	else
	{
		printf("The last number of var \"n\" not is greater than 5\n");
	}
	if (n % 10 != 0)
	{
		printf("The last number of \"n\" not is zero\n");
	}
	if (n % 10 < 6)
	{
		printf("The last number of var \"n\" is less than 6\n");
	}
	else
	{
		printf("The last number of var \"n\" not is less than 6\n");
	}
	if (n % 10 == 0)
	{
		printf("The last number of var \"n\" is zero\n");
	}
	return (0);
}
