#include "lists.h"

/**
 * add_dnodeint - Is a function that delete a node at the begening of a list
 * @head: is a pointer to the head of the list
 * @n: is the data
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	if (!head)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
