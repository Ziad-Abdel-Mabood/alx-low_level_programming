#include "lists.h"

/**
 * free_list -	frees a list_t list.
 * @head:	head of list.
 * Return:	nothing.
 */
void free_list(list_t *head)
{
	list_t *ptr, *next;

	if (!head)
		return;

	ptr = head;
	while (ptr)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next;
	}
}
