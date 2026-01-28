#include "roadmap.h"

void printArray(int *a, int n);

/**
*printArray - will print an array of integers
*@a: the array of integers
*@n: the number of elements to swap
*Return: will return 0 if success
*/

void printArray(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
*main - will call revArr() to reverse the content of an arr of ints
*Return: will return 0 if success
*/

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	printArray(a, sizeof(a) / sizeof(a[0]));
	revArr(a, sizeof(a) / sizeof(a[0]));
	printArray(a, sizeof(a) / sizeof(a[0]));
	printf("Last element pos 11: %d\n", a[11]);
	printf("Last element pos 12: %d\n", a[12]);
	printf("Last element pos 13: %d\n", a[13]);

	return (0);
}
