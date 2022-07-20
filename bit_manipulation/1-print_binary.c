#include "main.h"

/**
 * print_binary - Funciton that prints the binary
 * representation of a number
 *
 * @decimalNo: the decimal number to be converted
 */

void print_binary(unsigned long int decimalNo)
{
	int status = 0;
	unsigned int mask = 65536;

	if (decimalNo == 0)
		_putchar('0');

	else
	{
		while (mask > 0)
		{
			if ((decimalNo & mask) == 0)
			{
				if (status != 0)
					_putchar('0');
			}

			else
			{
				_putchar('1');
				status = 1;
			}

			mask = mask >> 1;
		}
	}
}
