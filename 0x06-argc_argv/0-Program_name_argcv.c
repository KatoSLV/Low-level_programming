#include "roadmap.h"

/**
* main - will print the name of the program using argc and argv
* @argc: counter of arguments
* @argv: arrays of elements of the program
* Return: the name of the program
*/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("The name of the program is: %s\n", *argv + 2);
}
