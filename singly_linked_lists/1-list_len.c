#include "lists.h"

/**
 * list_len - return the number of elements in a linked lst
 *
 * @h: is the pointer to the next list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t length;

	length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
