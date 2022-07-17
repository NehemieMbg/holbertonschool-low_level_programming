#include "lists.h"

/**
 * reverse_listint - Funciton that reverse a linked list
 * @head: is the pointer that point to the head of a list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *res;

	if(!head || !((*head)->next))
		return *head;

	res = ((*head)->next);

	(*head)->next->next = *head;
	(*head)->next = NULL;
	return res;
}
