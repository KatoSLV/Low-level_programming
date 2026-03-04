#include "roadmap.h"

/**
* _calloc - reserve a block of memory initializated to 0
* @nitems: numbers of elements to be allocated
* @size: size of each element
* Return: return a pointer to the address of the block initializated
*/

void *_calloc(size_t nitems, size_t size)
{
	size_t index;
	size_t totalsize = nitems * size;
	void *ptr;

	ptr = malloc(totalsize);

	if (ptr == NULL)
	{
		return (NULL);
	}

	unsigned char *ptrindex = (unsigned char *)ptr;

	for (index = 0; index < totalsize; index++)
	{
		ptrindex[index] = 0;
	}

	return (ptrindex);
}
