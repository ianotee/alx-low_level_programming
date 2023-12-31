#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head : This is a pointer to node.
 * @index: index of node.
 * Return: NULL if node doesnt exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t y;

for (y = 0; (y < index) && (head->next); y++)
head = head->next;

if (y < index)
return (NULL);

return (head);
}

