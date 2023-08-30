#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index.
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: pointer to the indexed node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *cur, *next;

if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
next = (*head)->next;
free(*head);
*head = next;
return (1);
}
cur = *head;
for (i = 0; i < index - 1; i++)
{
if (cur->next == NULL)
return (-1);
cur = cur->next;
}
next = cur->next;
cur->next = next->next;
free(next);
return (1);
}
