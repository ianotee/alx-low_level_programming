#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head : pointer of head.
 * Return: NULL if no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *drive1, *drive2;

if (head == NULL || head->next == NULL)
return (NULL);

drive1 = head->next;
drive2 = (head->next)->next;

while (drive2)
{
if (drive1 == drive2)
{
drive1 = head;

while (drive1 != drive2)
{
drive1 = drive1->next;
drive2 = drive2->next;
}

return (drive1);
}

drive1 = drive1->next;
drive2 = (drive2->next)->next;
}

return (NULL);
}
