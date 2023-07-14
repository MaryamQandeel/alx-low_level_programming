#include <stdio.h>

/**
 * main - point
 *
 * Description: print the digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
