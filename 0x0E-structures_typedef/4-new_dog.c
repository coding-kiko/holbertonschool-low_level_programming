#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: iwf
 * Return: ptr
 * Description: Longer description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
