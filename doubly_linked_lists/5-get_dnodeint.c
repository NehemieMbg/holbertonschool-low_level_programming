#include "lists.h"

/**
 * get_dnodeint_at_index - is a function that reeturns the nth node of a list
 * @head: is a pointer to the head of the list
 * @index: is the integer which need to be return
 *
 * Return: the nth node of a linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
