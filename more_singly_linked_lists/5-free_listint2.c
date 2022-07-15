#include "lists.h"

/**
 * free_listint2 - Function that free list
 *
 * @head: pointer that point to the head of the list
 */

void free_listint2(listint_t **head)
{
	/*crating a temp pointer to protect my head pointer*/
	listint_t *temp;

	/*if head == NULL it exit the function*/
	/*since NULL is the end it cant go futher*/
	if (head == NULL)
		return;

	/*the loop that is going to free the list*/
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	/*sets the head to NULL*/
	*head = NULL;
}
