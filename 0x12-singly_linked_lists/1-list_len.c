#include "lists.h"

/**
 * list_len -	returns the number of elements in a linked list_t list.
 * @h:		pointer to list.
 * Return:	number of elements in @h.
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
