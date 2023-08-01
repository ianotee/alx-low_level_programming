#include "lists.h"
/**
 *pop_listint - function that deletes the head node.
 * of a listint_t linked lis
 * @head : pointer to head.
 * Return: 0 if list is empty.
 */


int pop_listint(listint_t **head)
{
	listint_t *shon;

	int n;


	shon = *head;


	if (shon == NULL)
		return (0);


	*head = shon->next;

	n = shon->n;
	free(shon);
	return (n);
}
