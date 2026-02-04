#include "roadmap.h"

/**
* _memset - fills memory with a constant byte
* @buffer: the address of memory to print
* @c: character to fill the memory
* @n: size of the memory to print
* Return: memory buffer filled
*/

void *_memset(void *buffer, int c, size_t n)
{
	size_t index;
	unsigned char *ptr = buffer;

	for (index = 0; index < n; index++)
	{
		ptr[index] = c;
	}
	return (buffer);
}
