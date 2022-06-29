#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: Pointer that points on dog
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Name: %f\n", d->age);
		printf("Name: %s\n", d->owner);
	}

}
