#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first node in the list
 * @idx: index of the node to insert
 * @n: value for new node
 *
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *cur, *new;

if (head == NULL)
return (NULL);
if (idx != 0)
{
cur = *head;
for (x = 0; x < idx - 1 && cur != NULL; x++)
{
cur = cur->next;
}
if (cur == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = cur->next;
cur->next = new;
return (new);
}
