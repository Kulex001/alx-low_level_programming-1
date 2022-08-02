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

	char __attribute__ ((unused)) *name2;
	char __attribute__ ((unused)) *owner2;

	t = malloc(sizeof(dog_t));
	if (t == NULL)
		return (NULL);
	owner2 = owner;
	name2 = name;
	t->name = name;
	t->age = age;
	t->owner = owner;

	return (t);
}
