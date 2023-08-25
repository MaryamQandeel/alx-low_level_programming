#include "lists.h"

/**
 * _strlen - length of a string
 *  print_list - to print the list
 *@s: the string
 * Return: result is (0)
 */

int _strlen(char *s)
{
	int i;
	int l = sizeof(s);

	for (i = 0; i < s[l]; i++)
		if (!s)
			printf("[0] (nil)\n");
		return (0);
	return (i);
}

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)

		printf("[%d] %s\n", h->len, h->str);

		s++;
		h = h->next;
	}

	return (s);
}

