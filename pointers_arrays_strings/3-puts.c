#include "main.h"
#include <string.h>

/**
 * _puts - Prints a string
 * @str: is the string
 * Followed by a new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
