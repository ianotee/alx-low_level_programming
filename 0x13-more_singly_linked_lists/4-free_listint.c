#include "lists.h"

/**
 * free_listint - This is a function that
 * frees a listint_t list.
 * @head:Thi is the head of the list.
 *
 * Return: void if success.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;


	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
