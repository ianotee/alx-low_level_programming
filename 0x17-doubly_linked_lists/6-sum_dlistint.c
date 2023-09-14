#include "lists.h"

/**
 * sum_dlistint - returns the sum.
 * @head: head
 * Return: sum 
 */
int sum_dlistint(dlistint_t *head)
{
	int summation;

	summation = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			summation += head->n;
			head = head->next;
		}
	}

	return (summation);
}
