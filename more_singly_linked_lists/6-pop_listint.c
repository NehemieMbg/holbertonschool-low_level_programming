#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: is the pointer that point to the head of the list
 *
 * Return: the value of n
 */

int pop_listint(listint_t **head)
{
	/*creating a temp pointer that going to remplace head*/
	listint_t *temp;

	/*head doesn't exit it'll return 0*/
	if (!*head)
		return (0);

	/**
	 * if head exit we are giving the data to temp
	 * so we can protect the data from head.
	 * We are defining the next node which is head
	 * to conserve all the data.
	 *
	 * We are freeing temp.
	 * Since the funciton is not a void we have to return something
	 * so we are returning the data from n and to acces it we need to
	 * point n with the pointer temp
	 */
	if (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (temp->n);
}
