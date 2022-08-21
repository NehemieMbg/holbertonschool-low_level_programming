#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table
 * @ht: is the hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL, *newNode = NULL;

	if (ht && ht->array && ht->size)
	{
		for (i = 0; i < ht->size; i++)
		{
			newNode = ht->array[i];

			if (newNode)
			{
				if (newNode->next)
				{
					while (newNode)
					{
						temp = newNode;
						newNode = newNode->next;
						free(temp->key);
						free(temp->value);
					}
				}
				newNode = ht->array[i];
				if (newNode->key && newNode->value)
				{
					free(newNode->key);
					free(newNode->value);
				}
			}
		free(newNode);
		}
		free(ht->array);
		free(ht);
	}
}
