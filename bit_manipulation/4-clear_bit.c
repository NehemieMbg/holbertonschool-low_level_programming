#include "main.h"

/**
 * clear_bit - Funciton that sets the value of a bit
 * @n: is the pointer to the number in decimal
 * @index: is the bit we want to set
 *
 * Return: (1) if it worked, (-1) if it didnt
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
