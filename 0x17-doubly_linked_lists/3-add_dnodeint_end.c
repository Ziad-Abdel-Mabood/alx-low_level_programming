#include "lists.h"

/**
 * add_dnodeint_end -   adds a new node at the end of a list.
 * @head:               pointer to head pointer of list.
 * @n:                  integer data of the new node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_ls = malloc(sizeof(dlistint_t));
	while ((*head)->next)
		*head = (*head)->next;

	new_ls->n = n;
	new_ls->next = NULL;
	new_ls->prev = *head;
	(*head)->next = new_ls;

	return (new_ls);
}
