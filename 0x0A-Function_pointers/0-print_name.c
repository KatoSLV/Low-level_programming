#include "function_pointers.h"

/**
* print_name - calls a function via function pointer
* @name: string give
* @print: function to print as is or an uppercase
* Return: nothing
*/

void print_name(char *name, void (*print)(char *))
{
	print(name);
}

