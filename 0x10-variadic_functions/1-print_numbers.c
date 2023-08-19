#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of integers passed to the function.
 *
 * Return: sum of its parameters.
 *
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int x;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	x  = va_arg(args, int);
	printf("%d", x);
		if (i < n - 1)
			printf("%s", separator);
	}
		printf("\n");

	va_end(args);
}
