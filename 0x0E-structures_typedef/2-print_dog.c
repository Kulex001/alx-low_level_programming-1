#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print values of the dog
 * @d: dog's structure
 */
void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d == NULL)
		return;
	name = d->name;
	owner = d->owner;

	if (name == NULL)
		name = "nil";
	if (owner == NULL)
		owner = "nil";
	if (d->age < 0)
		printf("Name: %s\nAge: nil\nOwner: %s\n", name, owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
