#include "lists.h"

/**
 * add_node -	adds a new node at the beginning of a list_t list.
 * @head:	pointer to the head of the list.
 * @str:	string to be duplicated into the list.
 * Return:	address of the new element
 *		NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;

	return (new);
}
