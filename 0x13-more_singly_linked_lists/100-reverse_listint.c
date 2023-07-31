#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked lis
 * @head: head.
 * Return:The pointer to node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *m;

	x = NULL;
	m = NULL;

	while (*head != NULL)
	{
		m = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = m;
	}

	*head = x;
	return (*head);
}
