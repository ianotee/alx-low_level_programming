#include "lists.h"

/**
 * print_listint - prints all the all the values of the linked list
 * @h: Is the  head of the list
 * Return: It returns  the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count += 1;
		temp = temp->next;
	}
	return (count);
}
