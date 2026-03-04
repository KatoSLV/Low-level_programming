#include "dog.h"

/**
* print_dog - print information about the struct
* @my_dog: is the struct
* Return: will return the information
*/

void print_dog(struct dog *my_dog)
{
	printf("The name of the dog is: %s\n", my_dog->name);
	printf("The age of the dog is: %.1f\n", my_dog->age);
	printf("The owner of the dog is: %s\n", my_dog->owner);
}
