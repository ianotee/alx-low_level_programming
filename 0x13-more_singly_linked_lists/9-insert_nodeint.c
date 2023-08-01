#include "lists.h"
/**
 * insert_nodeint_at_index - This function adds a new node.
 * @head : pointer to head.
 * @idx  : index of the list for new node.
 * @n    : value for new node.
 * Return: NULL if failed.
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *list1, *list3 = *head;
unsigned int node;

list1 = malloc(sizeof(listint_t));

if (list1 == NULL)
return (NULL);

list1->n = n;

if (idx == 0)
{
list1->next = list3;
*head = list1;
return (list1);
}

for (node = 0; node < (idx - 1); node++)
{
if (list3 == NULL || list3->next == NULL)
return (NULL);

list3 = list3->next;
}

list1->next = list3->next;
list3->next = list1;

return (list1);
}
