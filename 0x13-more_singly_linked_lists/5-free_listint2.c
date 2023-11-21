#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -	frees a listint_t list.
 * @head:		pointer to pointer to head of list.
 * Return:		nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
