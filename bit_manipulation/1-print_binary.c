#include "main.h"

/**
 * print_binary - Funciton that prints the binary
 * representation of a number
 *
 * @decimalNo: is the decimal number to be converted
 */

void print_binary(unsigned long int decimalNo)
{
	unsigned int mask = 32768;

	while (mask > 0)
	{
		if ((decimalNo & mask) == 0)
			_putchar('0');

		else
			_putchar('1');

		mask = mask >> 1;
	}
}
