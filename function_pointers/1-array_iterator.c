#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a paramater
 * @array: is the string to print
 * @action: is the pointed functions
 * @size: is the size of the array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
		for (i = 0; i < size; i++)
			action(array[i]);
}
