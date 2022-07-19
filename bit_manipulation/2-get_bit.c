#include "main.h"

/**
 * @brief 
 * 
 */

int get_bit(unsigned long int number, unsigned int index)
{
	int bit_value;

	if (!index)
		return (0);

	bit_value = (number >> index) & 1;

	return (bit_value);
}
