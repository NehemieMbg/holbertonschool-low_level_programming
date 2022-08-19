#include "hash_tables.h"

/**
 * hash_table_get - Funciton that retrieves a value associated with a key
 * @ht: is the hash table which needs to be looked into
 * @key: is the key
 *
 * Return: the value if succeeded and null otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index = 0;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}
