#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list
 *
 * @head: is the head of the linked list
 * @index: is the index of the node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*tmp pointer that is going to be use as head*/
	listint_t *tmp;
	/*count is going to count the nodes till it meets the index*/
	unsigned int count = 0;

	/*in case of head doesnt exist*/
	if (!head)
		return (NULL);

	/*giving the data from head to tmp*/
	tmp = head;

	/*loop that is going to get the node which is topped by index*/
	while (tmp && count != index)
	{
		tmp = tmp->next;
		count++;
	}

	/*returning tmp to return the whole data*/
	return (tmp);
}
