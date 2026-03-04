#include "dog.h"

/**
* init_dog - initializes a struct and sets the values by arguments received
* @my_dog: struct of my dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: return new values
*/

void init_dog(struct dog *my_dog, char *name, float age, char *owner)
{
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}
