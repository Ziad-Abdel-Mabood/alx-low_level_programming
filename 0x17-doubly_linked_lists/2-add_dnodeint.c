#include "lists.h"

/**
 * add_dnodeint -	adds new head node to dlist.
 * @head:		address of head of list.
 * @n:			int field of new node:
 * Return:		address of new node or NULL.
 */
dlist_int *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
