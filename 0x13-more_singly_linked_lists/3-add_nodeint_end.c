#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -	adds a new node at the end of a listint_t list.
 * @head:		pointer to head pointer.
 * @n:			integer to contain in node.
 * Return:		address of the new element at success
 *			NULL at failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tail;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	tail = *head;
	if (tail == NULL)
		*head = new_node;
	else
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new_node;
	}

	return (new_node);
}
