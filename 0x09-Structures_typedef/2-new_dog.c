#include "dog.h"

/**
* new_dog - defines a new dog in the data structure
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: will return a pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Ndog = malloc(sizeof(dog_t));
/*	Ndog = malloc(sizeof(dog_t)); alternativa pero con una linea más */
	if (Ndog == NULL)
	{
		return (NULL);
	}

	if (name == NULL)
	{
		Ndog->name = NULL;
	}
	else
	{
		Ndog->name = malloc(strLen(name) + 1);
		if (Ndog->name == NULL)
		{
			free(Ndog);
			return (NULL);
		}
		Ndog->name = _strCpy(Ndog->name, name);
	}

	if (owner == NULL)
	{
		Ndog->owner = NULL;
	}
	else
	{
		Ndog->owner = malloc(strLen(owner) + 1);
		if (Ndog->owner == NULL)
		{
			free(Ndog->name);
			free(Ndog);
			return (NULL);
		}
		Ndog->owner = _strCpy(Ndog->owner, owner);
	}
	Ndog->age = age;
	return (Ndog);
}
