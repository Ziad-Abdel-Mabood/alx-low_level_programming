#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -	returns the nth node of a listint_t linked list.
 * @head:			pointer to head node of the list.
 * @index:			index of the node wanted.
 * Return:			pointer to the node wanted.
 *				NULL if node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
