#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: head pointer.
 * @n: integer data type.
 *
 * Return: address of a noew node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		node->next = *head;
	*head = node;
	return (node);
}
