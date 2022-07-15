#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list
 *
 * @head: is the head of the linked list
 * @index:
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	tmp = head;
	
	while (tmp && count != index)
	{
		tmp = tmp->next;
		count++;
	}

	return(tmp->n);
}
