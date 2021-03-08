#include "dog.h"

/**
 * init_dog - Short description
 * @owner: First member
 * @age: Second member
 * @name: iwf
 * @d: jfjfjf
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
