#include "main.h"

/**
 * print_triangle - prints lines of squares,
 * @size: result that print lines
 * followed by a new line
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size - 1; j >= i; j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
