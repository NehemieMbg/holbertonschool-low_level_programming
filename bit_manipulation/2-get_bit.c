#include "main.h"

/**
 * get_bit - Function that return the value of at
 * given index
 *
 * @index: is the bit to get
 * @number: is the decimal number
 *
 * Return: The value
 */

int get_bit(unsigned long int number, unsigned int index)
{
	int bit_value;

	if (index > 31)
		return (-1);

	bit_value = (number >> index) & 1;

	return (bit_value);
}
