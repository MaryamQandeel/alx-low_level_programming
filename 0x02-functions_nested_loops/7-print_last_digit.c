#include "main.h"

/**
 * print_last_digit - funcrion to know if it's lower or upper case
 *
 * @c: check input of function
 *
 * Return: returns (1) if lower case - (2) if upper case
 *	(0) success
*/

int print_last_digit(int c)
{
	int lastdigit;

	if (c < 0)
		lastdigit = -1 * (c % 10)
	else
		lastdigit = c % 10
	_putchar(lastdigit + '0')
	return (lastdigit);
}
