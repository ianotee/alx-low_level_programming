#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all data in list.
 * @head : pointer to head.
 * Return: return 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;


	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
