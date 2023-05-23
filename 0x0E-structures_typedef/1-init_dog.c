#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - description
 * @d: description
 * @name: description
 * @age: description
 * @owner: description
 *
 * Return: description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
