#include <stdio.h>

/**
*main - print sizes of different data types
*Return: will return 0
*/

int main(void)
{
	printf("The size of char is: %ld\n", sizeof(char));
	printf("The size of int is: %ld\n", sizeof(int));
	printf("The size of long int is: %ld\n", sizeof(long int));
	printf("The size of long long int is: %ld\n", sizeof(long long int));
	printf("The size of float is: %ld\n", sizeof(float));

	return (0);
}
