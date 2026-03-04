#include "dog.h"

/**
* free_dog - free memory
* @freeNdog: pointer to the struct
* Return: nothing
*/

void free_dog(dog_t *freeNdog)
{
	if (freeNdog == NULL)
	{
		return;
	}

	free(freeNdog->name);
	free(freeNdog->owner);
	free(freeNdog);
}
