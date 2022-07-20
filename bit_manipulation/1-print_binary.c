#include "main.h"

/**
 * print_binary - Funciton that prints the binary
 * representation of a number
 *
 * @decimalNo: the decimal number to be converted
 */

void print_binary(unsigned long int decimalNo)
{
	if (decimalNo > 1)
		print_binary(decimalNo >> 1);
	_putchar((decimalNo & 1) + '0');
}
