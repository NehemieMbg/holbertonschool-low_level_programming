#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: is a pointer that point to the next node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;

		free(head->str);
		free(head);
		head = temp;
	}

}
