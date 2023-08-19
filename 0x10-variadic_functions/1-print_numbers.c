#include "variadic_functions.h"


/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: number of integers passed to the function.
 * @separator: the string to be printed between numbers
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
		if (separator && i < n - 1)
			printf("%s", separator);
	}
		printf("\n");

	va_end(args);
}
