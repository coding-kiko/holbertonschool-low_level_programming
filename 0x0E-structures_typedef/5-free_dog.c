#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Short description
 * @d: First member
 * Second member
 * Description: Longer description
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
