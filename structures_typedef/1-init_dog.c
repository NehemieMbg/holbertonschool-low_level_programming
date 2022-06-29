#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: Pointer that points on dog
 * @name: Pointer that points on the name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
