#include "lists.h"

/**
 * print_list - function to print the list
 *  print_list - to print the list
 *@h: the string
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

