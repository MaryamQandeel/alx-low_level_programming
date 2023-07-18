#include "main.h"

/**
 * _isalpha -  funcrion to know if it's an alphabet or not
 *
 * @c: check input of function
 *
 * Return: returns (1) if alphabet - (0) if not
 *	(0) success
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
