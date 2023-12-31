#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -	inserts a new node at a given position.
 * @head:			pointer to pointer to head node of list.
 * @idx:			index at which insertion is required.
 * @n:				data to contain in inserted node.
 * Return:			pointer to the new node at success.
 *				NULL at failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *previous, *ptr;
	unsigned int i = 0;

	ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || !head)
		return (NULL);
	new_node->n = n;

	if (!idx)
	{
		new_node->next = ptr;
		ptr = new_node;
		return (new_node);
	}

	for (; i < idx; i++)
	{
		if (ptr)
		{
			previous = ptr;
			ptr = ptr->next;
		}
		else
			return (NULL);
	}

	previous->next = new_node;
	new_node->next = ptr;

	return (new_node);
}
