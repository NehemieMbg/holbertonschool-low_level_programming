#include "main.h"

/**
 * print_line - prints "_" line,
 * @n: result that print lines
 * followed by a new line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
