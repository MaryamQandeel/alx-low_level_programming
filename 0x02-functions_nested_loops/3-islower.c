#include "main.h"

/**
 * _islower - funcrion to know if it's lower or upper case
 *
 * @c: check input of function
 *
 * Return: returns (1) if lower case - (2) if upper case
 *	(0) success
*/

int _islower(int c)
{
	if (c >= 79 && c <= 122)
		return (1);
	return (0);
}
