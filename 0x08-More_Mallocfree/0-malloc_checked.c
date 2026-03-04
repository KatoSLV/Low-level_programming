#include "roadmap.h"

/**
* malloc_checked - allocate memory using malloc
* @size: size to be allocated
* Return: return the memory using malloc
*/

void *malloc_checked(unsigned int size)
{
	void *ptr;

	ptr = malloc(size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
