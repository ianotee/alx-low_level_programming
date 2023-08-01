#include "lists.h"

/**
 *free_listp - function that frees a listint_t list
 * @head:This will be head of list.
 * Return: 0 if successs.
 */

void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;


	if (head != NULL)

	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}

		*head = NULL;

	}

}

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: head of list.
 * Return: size if sucess.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nodes);
}
