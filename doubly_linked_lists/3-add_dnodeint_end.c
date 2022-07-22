#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of a list
 *@head: is the pointer to the head of the list
 *@n: is the data
 *Return: the address of the new elements
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	while (temp && temp->next)
		temp = temp->next;

	if (temp)
		temp->next = new;

	else
		*head = new;

	new->n = n;
	new->prev = temp;
	new->next = NULL;

	return (new);
}
