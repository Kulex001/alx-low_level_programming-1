#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print values of the dog
 * @d: dog's structure
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	int age;

	name = d->name;
	owner = d->owner;
	age = d->age;

	if (d == 0 || (name == NULL && owner == NULL && age == (float)0))
		return;
	if (name == NULL)
		name = "nil";
	if (owner == NULL)
		owner = "nil";
	if (age > (float)0)
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	else
		printf("Name: %s\nAge: nil\nOwner: %s\n", name, owner);
}
