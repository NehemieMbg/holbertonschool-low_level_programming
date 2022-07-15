#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 *
 * @head: is the head of the list
 * @idx: is where the node need to be inserted
 * @n: is the value
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *tmp;
	unsigned int count = 1;

	if (!newnode)
		return(NULL);

	if(!*head)
		return(NULL);

	tmp = *head;
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}

	else
	{
		while (tmp && count < idx)
		{
			tmp = tmp->next;
			count++;

			if (tmp == NULL)
				return (NULL);
		}

		newnode->next = tmp->next;
		tmp->next = newnode;
	}
	return(newnode);
}
