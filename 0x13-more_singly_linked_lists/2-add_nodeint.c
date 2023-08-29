#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
	return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}

