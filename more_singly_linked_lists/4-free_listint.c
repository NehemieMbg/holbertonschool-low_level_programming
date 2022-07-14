#include "lists.h"

/**
 * free_listint - Function that frees list that been alocated
 * with memory.
 *
 * @head: Is the pointer that point to the head of the list
 */

void free_listint(listint_t *head)
{
	/**
	 * protecting my head pointer by creating a
	temporary pointer and giving him the same data
	 */
	listint_t *tmp;

	/*creating a loop that gonna free the rest of the list*/
	while (head == NULL)
	{
		tmp = head->next;
		free(head->next);
		free(head);
		head = tmp;
	}

	/*there is nothing to return since the function is a void format*/
}
