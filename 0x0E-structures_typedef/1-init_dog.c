#include "dog.h"
#include <stddef.h>

/**
 * init_dog - dog function
 * @d: struct we're pointing to
 * @name: name param
 * @age: age param
 * @owner: owner param
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
