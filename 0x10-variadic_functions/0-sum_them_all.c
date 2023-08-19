#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		sum = 0;
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	va_end(args);
	return (sum);
}
