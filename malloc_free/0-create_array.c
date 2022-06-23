#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: array's argument
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	tab = malloc(sizeof(char) * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		tab[i] = c;

	return (tab);
}
