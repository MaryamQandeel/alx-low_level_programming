#include "lists.h"

/**
 * list_len - function
 * Return: number of elements
 * @h: is the string
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
