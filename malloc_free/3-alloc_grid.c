#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Prints the lenght of a string
 * @width: is the width of the array
 * @height: is the height of the array
 *
 * Return: a pointer to a 2 demensional array
 * of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		return (grid);
	}
	return (grid);
}
