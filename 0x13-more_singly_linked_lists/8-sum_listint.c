#include "lists.h"

/**
 * sum_listint -	sums all of the data of a linked list.
 * @head:		pointer to head node of linked list.
 * Return:		sum of the data of the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
