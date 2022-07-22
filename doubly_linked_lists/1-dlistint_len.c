#include "lists.h"

/**
 * dlitsint_len - Function that return the number of elements in a linked list
 *
 * @h: is the pointer to the head of the linked list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
