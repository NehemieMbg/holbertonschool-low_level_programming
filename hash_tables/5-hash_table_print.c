#include "hash_tables.h"

/**
 * hash_table_print - Function that prints hash table
 * @ht: is the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index = 0;
	char *empty = "", *comma = ", ";

	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			temp = ht->array[index];
			while (temp)
			{
				printf("%s", empty);
				printf("'%s': '%s'", temp->key, temp->value);
				empty = comma;
				temp = temp->next;
			}
			index++;
		}
		printf("}\n");
	}
}
