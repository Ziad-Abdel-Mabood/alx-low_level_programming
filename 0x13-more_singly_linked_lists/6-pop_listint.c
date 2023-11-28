#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -	deletes the head node of a listint_t
 *			linked list and returns the node's data.
 * @head:		pointer to pointer to head of list.
 * Return:		the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
