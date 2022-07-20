#include "main.h"

/**
 * flip_bits - Returns the number of bit we need to flip
 * to get from one antoher
 * @n: is the number which need to be compared to m
 * @m: is the number which need to be compared to n
 *
 * Return: the number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int q, count = 0;

	q = n ^ m;

	while (q > 0)
	{
		count += (q & 1);
		q >>= 1;
	}
	return (count);
}
