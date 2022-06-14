#include "main.h"

/**
 * swap_int - swapes integers
 * c: is the value of the int a
 * @a: is the value of the int b
 * @b: is the value of the int c
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
