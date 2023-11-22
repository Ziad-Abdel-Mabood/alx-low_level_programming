#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index -	deletes node at given index
 * @head:			pointer to pointer to first node in list.
 * @index:			index of node to delete.
 * Return:			1 at success,
 *				-1 at failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *previous;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	ptr = *head;
	if (!index)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			previous->next = ptr->next;
			free(node);
			return (1);
		}
		i++;
		previous = ptr;
		ptr = ptr->next;
	}
	return (-1);
}
