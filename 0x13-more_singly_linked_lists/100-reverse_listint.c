#include "lists.h"

/**
 * reverse_listint -	reverses an int list.
 * @head:		pointer to pointer to head node of list.
 * Return:		pointer to head of list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL; *next = NULL;

	if (!head || !*head)
		return (NULL);


	ptr = *head;
	*head = NULL;
	while (ptr)
	{
		next = ptr->next;
		ptr->next = *head;
		*head = ptr;
		ptr = next;
	}
	return (*head);
}
