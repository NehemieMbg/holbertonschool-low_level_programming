#include "main.h"

/**
 * set_bit - sets the value of a bit
 * @n: is the number in decimal
 * @index: is where we want to set a bit
 *
 * Return: (1) if it worked, (-1) if it didn't
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n |= (1 << index);

	return (1);
}
