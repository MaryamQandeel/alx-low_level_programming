#include "main.h"

/**
 * _abs - funcrion to know if it's lower or upper case
 *
 * @n: check input of function
 *
 * Return: returns (1) if lower case - (2) if upper case
 *	(0) success
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
