#include <stddef.h>
#include "dog.h"

/**
 * int_dog - ***
 * @d: ***
 * @name: ****
 * @age: ***
 * @owner: ***
 *
 * Return: nothing.
 */
void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
