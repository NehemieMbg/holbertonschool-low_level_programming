#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all data of a linked list
 *
 * @head: is the head of the list
 *
 * Return: the result of the data
 */

int sum_listint(listint_t *head)
{
	/*new *p that will have the same data as head*/
	/*it's a way to protect it*/
	listint_t *tmp = head;
	/*int that will get the sum of all the data*/
	int sum = 0;

	/*in case of head doesn't exit*/
	if (!head)
		return (0);

	/* loop that will add a data to an other to get the sum*/
	while (tmp)
	{
	/*sum will get the data from n*/
		sum += tmp->n;
	/*tmp will move to the next node*/
		tmp = tmp->next;
	}

	/*returning the sum of all the data*/
	return (sum);
}
