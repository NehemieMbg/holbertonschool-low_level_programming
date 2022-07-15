#include "lists.h"

/**
 * free_listint2 - Function that free list
 *
 * @head: pointer that point to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
