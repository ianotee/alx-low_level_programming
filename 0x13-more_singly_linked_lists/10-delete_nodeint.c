#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes a node.
 * @head : It pointer.
 * @index: index of a deleted  node.
 *Return: -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *con, *dov = *head;
unsigned int node;

if (dov == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(dov);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (dov->next == NULL)
return (-1);

dov = dov->next;
}

con = dov->next;
dov->next = con->next;
free(con);
return (1);
}
