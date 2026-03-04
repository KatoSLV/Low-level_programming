#include "calc.h"

/**
* get_op_func - get the operator give by the user in terminal
* @op: operator
* Return: result of the operation
*/

int (*get_op_func(char *op))(int, int)
{
	int index;
	mo funcOp[] = {
		{"+", sum},
		{"-", sub},
		{"x", mul},
		{"/", divides},
		{"%", mod},
		{NULL, NULL}
	};

	for (index = 0; funcOp[index].op != NULL; index++)
	{
		if (strcmp(funcOp[index].op, op) == 0)
		{
			return (funcOp[index].Fm);
		}
	}
	return (0);
}
