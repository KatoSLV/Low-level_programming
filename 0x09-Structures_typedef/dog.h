#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

typedef struct dog{
	char *name;
	float age;
	char *owner;
}dog_t;
 
/* HELPFULL PROTOTYPES*/

int strLen(char *str);

char *_strCpy(char *dest, char *src);


/* MAIN	PROTOTYPES */

void init_dog(struct dog *my_dog, char *name, float age, char *owner); /* sets new values for a struct */

void print_dog(struct dog *my_dog); /* print information about a struct */

dog_t *new_dog(char *name, float age, char *owner); /* defines a new dog */

void free_dog(dog_t *freeNdog); /* free a new dog */

#endif
