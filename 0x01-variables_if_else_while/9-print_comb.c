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

	while (digit <= 8)
	{
		putchar(digit + '0');
		putchar(',');
		putchar(' ');
		digit++;
	}
	putchar('\n');

	return (0);
}
