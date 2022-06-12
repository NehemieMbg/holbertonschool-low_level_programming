#include "main.h"

/**
 * more_numbers - prints  numbers from 0 to 14,
 * followed by a new line
 */
void more_numbers(void)
{
	int n, o;

	for (n = 0; n < 10; n++)
	{
		for (o = 0; o <= 14; o++)
		{
			if (o >= 10)
				_putchar(o / 10 + '0');
			_putchar(o % 10 + '0');
		}
	_putchar('\n');
	}
}
