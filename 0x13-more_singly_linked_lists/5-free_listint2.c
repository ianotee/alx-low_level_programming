#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head : pointer that points the list.
 * Return: void if (sucessful).
 */

void free_listint2(listint_t **head)
{
	listint_t *chip;

	if (head == NULL)
		return;


	while (*head)
	{
		chip = *head;
		*head = (*head)->next;
		free(chip);
	}

	head = NULL;
}
