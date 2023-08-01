#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 *  at the end of a listint_t list.
 * @head: The head pointer.
 * @n: The number.
 * Return: address of the node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *list2 = *head;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
	}
	else
		return (NULL);
	if (list2 != NULL)
	{
		while (list2->next != NULL)
			list2 = list2->next;
		list2->next = node;
	}
	else
		*head = node;
	return (node);
}
