#include "lists.h"

/**
 * insert_dnodeint_at_index - is a function that inserts a new node
 * at a given position
 * @h: is the head of the list
 * @idx: is the given position of the new node to be insert
 * @n: is the data
 *
 * Return: the addres of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (!*h || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && count < idx)
	{
		count++;

		if (count == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	
	return (NULL);
}
