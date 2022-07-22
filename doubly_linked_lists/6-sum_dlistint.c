#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all data
 * @head: is the pointer to the head of the list
 *
 * Return: the total value
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	unsigned int total_value = 0;

	if (!temp)
		return (0);

	while (temp)
	{
		total_value += temp->n;
		temp = temp->next;
	}
	return (total_value);
}
