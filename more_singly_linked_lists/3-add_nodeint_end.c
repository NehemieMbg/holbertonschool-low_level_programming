#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node at the end of list
 * @head: is the header of a list
 * @n: is the data that need to be added at the end of the list
 *
 * Return: the address of the new elements
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*declaring a new pointer while giving the data from head to temp*/
	listint_t *temp = *head;
	/*declaring a new pointe while allocating memory*/
	listint_t *new = malloc(sizeof(listint_t));

	if (!new) /*if new fails it'll return NULL*/
		return (NULL);

	/*giving the data of n to new*/
	new->n = n;
	/*since new is the last node it point to NULL to end the list*/
	new->next = NULL;

	/*if head is the end of the list it'll give a new end that is new*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	/* since new is NULL we are assaigning to temp so is the end of the node*/
	temp->next = new;

	return (new);
}
