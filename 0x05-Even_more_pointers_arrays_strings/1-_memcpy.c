#include "roadmap.h"

/**
* _memcpy - copy memories areas in another
* @dest: destiny of the copy
* @src: source to copy
* @size: numbers of bytes to copy
* Return: will return dest with copied memory
*/

void *_memcpy(void *dest, void *src, size_t size)
{
	size_t index;
	char *dest_ptr = (char *) dest;
	char *src_ptr = (char *) src;

	if (dest == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		dest_ptr[index] = src_ptr[index];
	}
	return (dest);
}
