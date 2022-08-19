#include "hash_tables.h"

/**
 * @brief 
 * 
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index = 0;

	
	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			temp = ht->array[index];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if(!temp)
				{
					printf(", ");
				}
				temp = temp->next;

			}
			index++;
		}
		printf("}\n");
	}

}
