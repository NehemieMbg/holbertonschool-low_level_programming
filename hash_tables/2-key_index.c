#include "hash_tables.h"

/**
 * key_index - Function that give the index of a key
 * @key: is the key
 * @size: is the size of the array
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
