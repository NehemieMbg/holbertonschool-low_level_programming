#include "main.h"
#include <string.h>

/**
 * puts_half - Print the half of a string
 * @str: is the pointer of the sring
 */
void puts_half(char *str)
{
	int len, len1;

	/* prints the lenght of a string */
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	/* split a string in half */
	len1 = len / 2;
	/* prints the second half of a string */
	while (str[len1] != '\0')
	{
		_putchar(str[len1]);
		len1++;
	}
	_putchar('\n');
}
