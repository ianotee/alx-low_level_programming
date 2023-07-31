#include "lists.h"

/**
 * print_listint - prints all the all the values of the linked list
 * @h: Is the  head of the list
 *
 * Return: It returns  the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}