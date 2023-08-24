#include "lists.h"

/**
 * _strlen - length of a string
 *  print_list - to print the list
 *@s: the string
 * Return: result is (0)
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		s++;
		h = h->next;
	}

	return (s);
}

