#include "lists.h"

/**
 * listint_len -  function that returns the number
 * of elements in a linked listint_t list
 * @h: head of the list
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *list = h;
	size_t num = 0;

	while (list != NULL)
	{
		num += 1;
		list = list->next;
	}
	return (num);
}
