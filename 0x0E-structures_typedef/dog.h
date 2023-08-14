#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * struct dog - dog class
 *
 * @name: Name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
struct dog *my_dog(char *name, float age, char *owner)
{

	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
#endif /*DOG_h*/
