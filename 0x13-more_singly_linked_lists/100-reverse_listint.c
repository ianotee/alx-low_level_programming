#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked lis
 * @head: head.
 * Return:The pointer to node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *z;
	listint_t *n;

	z = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = z;
		z = *head;
		*head = n;
	}

	*head = z;
	return (*head);
}
