#include "lists.h"

/**
 * add_node_end -	adds a new node at the end of a list_t list.
 * @head:		pointer to the head of the list.
 * @str:		string to be duplicated into the list.
 * Return:		address of the new element
 *			NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;

	new = malloc(sizeof(list_t));
	if (new == NULL || !head)
		return (NULL);

	new->next = NULL;
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);

	tail = *head;

	if (tail)
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}
	else
		*head = new;

	return (new);
}
