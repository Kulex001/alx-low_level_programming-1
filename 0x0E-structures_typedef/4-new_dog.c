#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	t = malloc(sizeof(dog_t));
	t->name = name;
	t->age = age;
	t->owner = owner;

	return (t);
}
