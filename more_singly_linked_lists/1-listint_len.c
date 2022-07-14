#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 *
 * @h: is the pointer to the head od the list
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{

	size_t length = 0;

	while (h)
	{

		length++;
		h = h->next;
	}

	return (length);
}
