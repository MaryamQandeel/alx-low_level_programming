#include "main.h"

/**
 * print_sign - funcrion to know if it's lower or upper case
 *
 * @n: check input of function
 *
 * Return: returns (1) if lower case - (2) if upper case
 *	(0) success
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
		_putchar(45);
	return (-1);
	
}
