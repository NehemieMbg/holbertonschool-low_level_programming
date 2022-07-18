#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an int
 *
 * @b: is a pointer to a string
 * Return: the decimal number of a binary
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}

