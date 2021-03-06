#include "lists.h"

/**
 * free_dlistint - Is a function that frees list
 * @head: is the pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;

		free(head);
		head = temp;
	}
}
