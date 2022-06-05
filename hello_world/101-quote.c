#include <stdio.h>

/**
 * main - prints "and that piece of art is useful 
 *- Dora Korpar, 2015-10-19"
 * followed by a new line, to the standard error.
 * Return 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 57);
	return (1);
}
