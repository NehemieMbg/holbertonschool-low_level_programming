#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node at the end of list
 * @head: is the header of a list
 * @n: is the data that need to be added at the end of the list
 *
 * Retrun: the address of the new elements
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head; /*declaring a new pointer while
	giving the data from head to temp*/
	listint_t *new = malloc(sizeof(listint_t)); /*declaring a new pointe
	while allocating memory*/

	if (!new) /*if new fails it'll return NULL*/
		return (NULL);

	new->n = n; /*giving the data of n to new*/
	new->next = NULL; /*since new is the last
	node it point to NULL to end the list*/

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	
	temp->next = new; /* since new is NULL we are
	assaigning to temp so is the end of the node*/

	return (new);
}
