#include "lists.h"
/**
 *pop_listint - function that deletes the head node.
 * of a listint_t linked lis
 * @head : pointer to head.
 * Return: 0 if list is empty.
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n;


	temp = *head;


	if (temp == NULL)
		return (0);


	*head = temp->next;

	n = temp->n;
	free(temp);
	return (n);
}
