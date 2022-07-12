#include "lists.h"

/**
 * print_list - prints all elements of a list_t
 * @h: is the pointer to head
 *
 * Return: 0 always
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		size++;
		h = h->next;
	}

	return (size);
}
