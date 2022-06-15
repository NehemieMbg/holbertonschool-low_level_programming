#include "main.h"
#include <string.h>

/**
 * print_rev - Prints the string in reverse
 * @s: is the pinter that point to the string
 */
void print_rev(char *s)
{
	int n, i;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
