#include "lists.h"

/**
 * add_nodeint - Function that adds node at the begening of a list
 * @head: double pointer that point to the head of the list
 * @n: is the data
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*declaring a new pointer while allocating memory in the same time*/
	listint_t *temp = malloc(sizeof(listint_t));

	/*proteccting my allocatin of memory if it fails*/
	if (!temp)
		return (NULL);

	temp->n = n; /*linking temp to n which is data*/
	temp->next = *head; /*temp is the new head of the list*/
	*head = temp;

	return (temp);
}
