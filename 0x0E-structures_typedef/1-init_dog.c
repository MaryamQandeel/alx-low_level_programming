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


struct dog *my_dog(char *name, float age, char *owner)
{

	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
