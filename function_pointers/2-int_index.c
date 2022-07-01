#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @array: is the string to print
 * @cmp: is the pointed functions
 * @size: is the size of the array
 *
 * Return: -1 if no elements matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
