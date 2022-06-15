#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string
 * @str: is the pointer of the sring
 */
void puts2(char *str)
{	int i, z;


	z = 0;
	while (str[z] != '\0')
	{
		z++;
	}
	for (i = 0; i < z; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
