#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: is the pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);

		else
			printf("%d %s\n", 0, "(nil");

		size++;
		h = h->next;
	}

	return (size);
}
