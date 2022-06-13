#include "main.h"

/**
 * print_square - prints lines of squares,
 * @size: result that print lines
 * followed by a new line
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size ; y++)
		{
			for (x = 0; x < size ; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
