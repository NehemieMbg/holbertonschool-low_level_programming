#include "hash_tables.h"

/**
 * @brief 
 * 
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *temp;
	hash_node_t *newNode;

	if(!key || strcmp(key, "") == 0 || value || ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	while(temp)
	{
		if(strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);

			if(!temp->value)
				return (0);

			return (1);
		}
		temp = temp->next;
	}

	newNode = malloc(sizeof(hash_node_t));

	if(!newNode)
		return(0);
	
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
