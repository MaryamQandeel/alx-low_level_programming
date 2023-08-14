#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - initializes a structure of type dog
 * @my_dog: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
