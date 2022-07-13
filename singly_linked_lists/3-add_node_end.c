#include "lists.h"

/**
 * add_node_end - function that adds a new node at the tend of a list.
 *
 * @head: is a pointer that point to the head of the list
 * @str: is a pointer that point to a string
 *
* Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));


	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;

		lastNode->next = new;
	}

	return (new);
}
